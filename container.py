from OMChem.Flowsheet import Flowsheet
from OMChem.MatStm import MatStm
from OMChem.Mixer import Mixer
from component_selector import *

class Container():
    def __init__(self):
        self.unitOp = []
        self.thermoPackage = None
        self.compounds = None
        self.conn = {}
        self.op={}
        self.ip={}
        self.opl=[]

    def addUnitOp(self,obj):
        if(obj in self.unitOp):
            pass
        else:
            self.unitOp.append(obj)

    def addCompounds(self,comp):
        self.compounds = comp

    def add_thermoPackage(self,thermo):
        self.thermoPackage = thermo
        
    def connection(self):
        opLst=[]
        stm = ['MatStm','EngStm']
        ipLst=[]
        for i in self.conn:
            if i.type not in stm:
                opLst.append(self.conn[i])
                self.op[i]=opLst
    
            elif self.conn[i].type not in stm:
                ipLst.append(i)
                self.ip[self.conn[i]]=ipLst
                
##        print("###### output #####\n",self.op)
##        print("###### input #####\n",self.ip)
        for i in self.op:
            i.connect(InputStms=self.ip[i],OutputStms=self.op[i])
            self.opl=[n for n in self.op[i]]
            
    def simulate(self):
        self.compounds = compond_selected
        self.thermoPackage = str(thermo_package[0])
        self.connection()
        
        print(self.opl)
        f = Flowsheet()
        f.add_comp_list(self.compounds)
        f.Selected_thermo_package(self.thermoPackage)
#        print("######## connection master#########\n",self.conn)
        print(self.unitOp)
        print(self.compounds)
        for i in self.unitOp :
            if i in self.opl:
                print("here",i)
                f.add_UnitOpn(i,1)
            else:
                f.add_UnitOpn(i,0)
        f.simulateEQN()

        
