from PyQt5.QtCore import *
from PyQt5.QtWidgets import *
from PyQt5.QtGui import *
from PyQt5.uic import loadUiType
import pandas as pd
from functools import partial
from component_selector import *
from collections import defaultdict
ui_dialog,_ = loadUiType('dockWidget.ui')


class dockWidget(QDockWidget,ui_dialog):
    
    def __init__(self,name,comptype,obj,parent=None):
        QDockWidget.__init__(self,parent)
        self.setupUi(self)
        self.setWindowTitle(obj.name)
        self.name=name
        self.obj=obj
        self.type = comptype
        self.inputdict = None 
        print("input_dict",self.inputdict)
        self.compmolfraclist = []
        self.modes()
        self.pushButton_2.clicked.connect(self.modeSelection)
        #self.inputparamslist()
        print(self.inputdict)
        self.pushButton.clicked.connect(self.param)
        self.dict = {}
        self.f = True

    def modes(self):
        modesList = self.obj.modesList()
        if(modesList):
            self.stackedWidget.setCurrentIndex(1)
            for j in modesList:
                    self.comboBox.addItem(str(j))
            
        else:
            self.stackedWidget.setCurrentIndex(0)
            self.inputdict = self.obj.paramgetter()
            self.inputparamslist()

    def modeSelection(self):
        self.inputdict = self.obj.paramgetter(self.comboBox.currentText())
        self.stackedWidget.setCurrentIndex(0)
        self.inputparamslist()

    def inputparamslist(self):
        c=0
        try:
            for i in self.inputdict:
                if(i=="thermoPackage"):
                    print("thermo1")
                    combo = QComboBox()
                    self.lines = [line.rstrip('\n') for line in open('thermopackage.txt')]
                    print("thermo2")
                    for j in self.lines:
                        combo.addItem(str(j))
                    self.formLayout.addRow(QLabel(i+":"),combo )
                    self.inputdict[i] = combo
                    print("thermo")
                elif(i=="CompMolFrac"):
                    print("cmfnjkmnjkmnjkm")
                    noc = len(compond_selected)
                    print(noc)
                    for j in range(noc):
                        l = QLineEdit()    
                        self.inputdict[i] = "compmolfrac"                                                  
                        self.formLayout.addRow(QLabel(str(compond_selected[j])+" Fraction"+":"),l )
                        self.compmolfraclist.append(l)
                else:
                    print("elseloopo")
                    l = QLineEdit()                                                      
                    self.formLayout.addRow(QLabel(i+":"),l )
                    self.inputdict[i] = l
        except Exception as e:
            print(e)
    def param(self):
        try:
            if all(self.inputdict.values()):
                for i in self.inputdict:
                    if(i=="thermoPackage"):
                        print("paramthermo")
                        self.dict[i] = self.inputdict[i].currentText()
                    elif(i =="CompMolFrac"):
                        l=[]
                        for mol_frac in self.compmolfraclist:
                            l.append(mol_frac.text())
                        
                        self.dict[i] = ",".join(l)
                    else:
                        print("paramelse")
                        self.dict[i] = self.inputdict[i].text()
                self.obj.paramsetter(self.dict)
                self.f = False
                self.hide()
            else:
                QMessageBox.about(self, 'Important', "Please Provide all the fields data")
        except Exception as e:
            print(e)

        
  
    
        
