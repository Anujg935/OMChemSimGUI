class Flash():
    def __init__(self,name='flash'):
        self.name = name
        self.OM_data_eqn = ''
        self.OM_data_init = ''
        self.InputStms = None
        self.OutputStms = None
        self.type = 'flash'

    def connect(self,InputStms = None,OutputStms = None):
        self.InputStms = InputStms
        self.OutputStms = OutputStms


    def OM_Flowsheet_Init(self, addedcomp):
        self.OM_data_init = ''
        comp_count = len(addedcomp)
        self.OM_data_init = self.OM_data_init + (
        "Simulator.Unit_Operations.Flash " + self.name + "(NOC = " + str(comp_count))
        self.OM_data_init = self.OM_data_init + (",comp = {")
        comp = str(addedcomp).strip('[').strip(']')
        comp = comp.replace("'", "")
        self.OM_data_init = self.OM_data_init + comp + ("});\n")
        return self.OM_data_init

    def OM_Flowsheet_Eqn(self, addedcomp):
        self.OM_data_eqn = ''
        comp_count = len(addedcomp)
        self.OM_data_eqn = self.OM_data_eqn + ('connect(' + self.InputStms.name + '.outlet,' + self.name + '.feed' + ');\n')
        self.OM_data_eqn = self.OM_data_eqn + ('connect(' + self.name + '.vapor,' + self.OutputStms[0].name + '.inlet);\n')
        self.OM_data_eqn = self.OM_data_eqn + ('connect(' + self.name + '.liquid,' + self.OutputStms[1].name + '.inlet);\n')
        return self.OM_data_eqn