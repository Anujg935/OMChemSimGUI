from OMChem.EngStm import EngStm
class Heater():
    def __init__(self,name='Heater',PressureDrop = None, eff = None,heatAdd=None):
        self.PressureDrop = PressureDrop
        self.eff = eff
        self.name = name
        self.OM_data_eqn = ''
        self.OM_data_init = ''
        self.InputStms = None
        self.heatAdd=heatAdd
        self.OutputStms = None
        self.EngStms = EngStm(name='EngStm')
        self.type = 'Heater'


    def connect(self,InputStms = None,OutputStms = None):
        self.InputStms = InputStms
        self.OutputStms = OutputStms

    def paramgetter(self):
        dict = {"PressureDrop":None,"eff":None,"heatAdd":None}
        return dict
    def paramsetter(self,dict):
        self.PressureDrop = dict['PressureDrop']
        self.eff = dict['eff']
        self.heatAdd = dict['heatAdd']

    def OM_Flowsheet_Init(self, addedcomp):
        self.OM_data_init = ''
        comp_count = len(addedcomp)
        self.OM_data_init = self.OM_data_init + 'Simulator.Streams.Energy_Stream '+self.EngStms.name+';\n'
        self.OM_data_init = self.OM_data_init + (
        "Simulator.Unit_Operations.Heater " + self.name + "(NOC = " + str(comp_count))
        self.OM_data_init = self.OM_data_init + (",comp = {")
        comp = str(addedcomp).strip('[').strip(']')
        comp = comp.replace("'", "")
        self.OM_data_init = self.OM_data_init + comp + ("},")
        self.OM_data_init = self.OM_data_init + 'pressDrop = ' + str(self.PressureDrop) +','
        self.OM_data_init = self.OM_data_init + 'eff = ' + str(self.eff) + ');\n'
        return self.OM_data_init

    def OM_Flowsheet_Eqn(self, addedcomp):
        self.OM_data_eqn = ''
        # self.OM_data_eqn = self.name + '.pressDrop = ' + str(self.PressDrop) + ';\n'
        self.OM_data_eqn = self.OM_data_eqn + ('connect(' + self.InputStms[0].name + '.outlet,' +  self.name + '.inlet' + ');\n')
        self.OM_data_eqn = self.OM_data_eqn + ('connect(' + self.name + '.outlet,' + self.OutputStms[0].name + '.inlet);\n')
        self.OM_data_eqn = self.OM_data_eqn + ('connect(' + self.EngStms.name + '.outlet,' + self.name + '.energy);\n')
        self.OM_data_eqn = self.OM_data_eqn + (self.name+'.heatAdd='+ self.heatAdd + ';\n')
        return self.OM_data_eqn
