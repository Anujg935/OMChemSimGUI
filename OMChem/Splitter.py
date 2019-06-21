
import json
class Splitter():
    def __init__(self,name='mixer',NOO=2,calcType = 'Molar_Flow',specval = [50,50]):
        self.NOO = NOO
        self.calcType = calcType
        self.name = name
        self.OM_data_eqn = ''
        self.OM_data_init = ''
        self.InputStms = []
        self.OutputStms = None
        self.type = 'Mixer'
        self.specval = json.dumps(specval).replace('[','{').replace(']','}')

    def OM_Flowsheet_Init(self, addedcomp):
        self.OM_data_init = ''
        comp_count = len(addedcomp)
        self.OM_data_init = self.OM_data_init + (
        "Simulator.Unit_Operations.Splitter " + self.name + "(NOC = " + str(comp_count))
        self.OM_data_init = self.OM_data_init + (",comp = {")
        comp = str(addedcomp).strip('[').strip(']')
        comp = comp.replace("'", "")
        self.OM_data_init = self.OM_data_init + comp + ("},")
        self.OM_data_init = self.OM_data_init + ("calcType = \""+self.calcType+"\",NO=" + str(self.NOO) + ");\n")
        return self.OM_data_init

    def connect(self,InputStms = None,OutputStms = []):
        self.InputStms = InputStms
        self.OutputStms = OutputStms


    def OM_Flowsheet_Eqn(self, addedcomp):
        self.OM_data_eqn = ''
        comp_count = len(addedcomp)
        strcount = 1
        for strm in self.OutputStms:
            self.OM_data_eqn = self.OM_data_eqn + (
            'connect(' + strm.name + '.inlet,' + self.name + '.outlet[' + str(strcount) + ']);\n')
            strcount += 1
        self.OM_data_eqn = self.OM_data_eqn + ('connect(' + self.name + '.inlet,' + self.InputStms.name + '.outlet);\n')
        self.OM_data_eqn = self.OM_data_eqn + self.name +'.' +'specVal =' + self.specval +';\n'
        return self.OM_data_eqn

