class Heater():
    def __init__(self,name='Heater',PressureDrop = None, eff = None):
        self.PressDrop = PressureDrop
        self.eff = eff
        self.name = name
        self.OM_data_eqn = ''
        self.OM_data_init = ''
        self.InputStms = None
        self.OutputStms = None
        self.EngStms = None
        self.type = 'Heater'


    def connect(self,InputStms = None,OutputStms = None, EngStms = None):
        self.InputStms = InputStms
        self.OutputStms = OutputStms
        self.EngStms = EngStms

    def OM_Flowsheet_Init(self, addedcomp):
        self.OM_data_init = ''
        comp_count = len(addedcomp)
        self.OM_data_init = self.OM_data_init + (
        "Simulator.Unit_Operations.Heater " + self.name + "(NOC = " + str(comp_count))
        self.OM_data_init = self.OM_data_init + (",comp = {")
        comp = str(addedcomp).strip('[').strip(']')
        comp = comp.replace("'", "")
        self.OM_data_init = self.OM_data_init + comp + ("},")
        self.OM_data_init = self.OM_data_init + 'pressDrop = ' + str(self.PressDrop) +','
        self.OM_data_init = self.OM_data_init + 'eff = ' + str(self.eff) + ');\n'
        return self.OM_data_init

    def OM_Flowsheet_Eqn(self, addedcomp):
        self.OM_data_eqn = ''
        # self.OM_data_eqn = self.name + '.pressDrop = ' + str(self.PressDrop) + ';\n'
        self.OM_data_eqn = self.OM_data_eqn + ('connect(' + self.InputStms.name + '.outlet,' +  self.name + '.inlet' + ');\n')
        self.OM_data_eqn = self.OM_data_eqn + ('connect(' + self.name + '.outlet,' + self.OutputStms.name + '.inlet);\n')
        self.OM_data_eqn = self.OM_data_eqn + ('connect(' + self.EngStms.name + '.inlet,' + self.name + 'energy);')
        return self.OM_data_eqn