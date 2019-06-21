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
        self.name=name
        self.obj=obj
        self.type = comptype
        self.inputdict = self.obj.paramgetter()
        self.inputparamslist()
        self.pushButton.clicked.connect(self.param)
        self.dict = {}
        

    def inputparamslist(self):
        c=0
        for i in self.inputdict:
            l = QLineEdit()
            self.formLayout.addRow(QLabel(i+":"),l )
            self.inputdict[i] = l
            
    def param(self):
        try:
            if all(self.inputdict.values()):
                for i in self.inputdict:
                    self.dict[i] = self.inputdict[i].text()

                self.obj.paramsetter(self.dict)
                self.hide()
            else:
                QMessageBox.about(self, 'Important', "Please Provide all the fields data")
        except Exception as e:
            print(e)

    def flag(self):
        return True

    def getter(self):
        return (self.dict,self.flag())
    
        
