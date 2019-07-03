from OMChem.Flowsheet import Flowsheet
from OMChem.MatStm import MatStm
from OMChem.Mixer import Mixer
from OMChem.Heater import Heater
from component_selector import *
from collections import defaultdict
from PyQt5.QtCore import *
from PyQt5.QtGui import *
import itertools
class Container():
    def __init__(self,msgbrowser):
        self.unitOp = []
        self.thermoPackage = None
        self.compounds = None
        self.conn = defaultdict(list)
        self.op=defaultdict(list)
        self.ip=defaultdict(list)
        self.msg = msgbrowser
        self.opl=[]
        self.result=[]

    def addUnitOp(self,obj):
        if(obj in self.unitOp):
            pass
        else:
            self.unitOp.append(obj)

    def fetchObject(self,name):
        for i in self.unitOp:
            if(i.name==name):
                return i
    def addCompounds(self,comp):
        self.compounds = comp

    def add_thermoPackage(self,thermo):
        self.thermoPackage = thermo
        
    def connection(self):
        try:
            stm = ['MatStm','EngStm']
            for i in self.conn:
                if i.type not in stm:
                    self.op[i]=self.conn[i]

                for j in range(len(self.conn[i])):
                    if self.conn[i][j].type not in stm:
                        self.ip[self.conn[i][j]].append(i)
                    
            print("###### output #####\n",self.op)
            print("###### input #####\n",self.ip)
            for i in self.op:
                i.connect(InputStms=self.ip[i],OutputStms=self.op[i])
            
            self.opl.append([self.op[i] for i in self.op])
            self.opl=flatlist(flatlist(self.opl))
        except Exception as e:
            print(e)
            
    def simulate(self,mode):
        print(mode)
        self.compounds = compond_selected
        self.thermoPackage = str(thermo_package[0])
        
        self.connection()
        
        #print(self.opl)
        f = Flowsheet()
        f.add_comp_list(self.compounds)
        f.Selected_thermo_package(self.thermoPackage)
        print("######## connection master#########\n",self.conn)
        #print(self.unitOp)
        #print(self.compounds)
        for i in self.unitOp :
            if i in self.opl:
                print("here",i)
                f.add_UnitOpn(i,1)
            else:
                f.add_UnitOpn(i,0)
        
        #print("############$Stdout$############",f.stdout)
        #print("###########$ResData$############",f.resdata)

        if mode=='SM':
            f.simulateSM(self.ip,self.op)
            stdout = QString(f.stdout).trimmed()
            stdout = stdout.replace("\n","<br/>")
            self.msg.setHtml("")
            self.msg.append("<span> style=\"color:black\">"+stdout+"</span>")
            self.result=f.resdata

        elif mode=='EQN':
            f.simulateEQN()
            stdout = str(f.stdout)
            stdout = stdout.replace("\n","<br/>")
            #self.msg.setText("")
            self.msg.setText("<span style=\"color:black\">"+stdout+"</span>")
            self.result=f.resdata
            print("under Eqn mode simulation")

def flatlist(lst):
    flat_list=[]
    for sublist in lst:
        for item in sublist:
            flat_list.append(item)
    return flat_list
