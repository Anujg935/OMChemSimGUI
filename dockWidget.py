from PyQt5.QtCore import *
from PyQt5.QtWidgets import *
from PyQt5.QtGui import *
from PyQt5.uic import loadUiType
import pandas as pd
from functools import partial

ui_dialog,_ = loadUiType('dockWidget.ui')


class dockWidget(QDockWidget,ui_dialog):
    
    def __init__(self,name,comptype,obj,parent=None):
        QDockWidget.__init__(self,parent)
        self.setupUi(self)
        self.setWindowTitle(obj.name)
        self.name=name
        self.obj=obj
        self.type = comptype
        self.inputdict = self.obj.paramgetter()
        print("input_dict",self.inputdict)
        self.inputparamslist()
        print(self.inputdict)
        self.pushButton.clicked.connect(self.param)
        self.dict = {}
        self.f = True
    def inputparamslist(self):
        c=0
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
            else:
                print("elseloopo")
                l = QLineEdit()                                                      
                self.formLayout.addRow(QLabel(i+":"),l )
                self.inputdict[i] = l

    def param(self):
        try:
            if all(self.inputdict.values()):
                for i in self.inputdict:
                    if(i=="thermoPackage"):
                        print("paramthermo")
                        self.dict[i] = self.inputdict[i].currentText()
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

        
  
    
        
