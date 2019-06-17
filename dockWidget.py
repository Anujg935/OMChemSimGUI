from PyQt5.QtCore import *
from PyQt5.QtWidgets import *
from PyQt5.QtGui import *
from PyQt5.uic import loadUiType
import pandas as pd
from functools import partial

ui_dialog,_ = loadUiType('dockWidget.ui')


class dockWidget(QDockWidget,ui_dialog):
    
    def __init__(self,name,conn_csv,parent=None):
        QDockWidget.__init__(self,parent)
        self.conn_csv=conn_csv
        self.setupUi(self)
        self.name=name
        self.pushButton_29.clicked.connect(self.param)
    
    def param(self):
        try:
            if (self.lineEdit.text() and self.lineEdit_2.text() and self.lineEdit_3.text() and self.lineEdit_4.text()):
                print(self.name)
                self.conn_csv.at[self.name,'T']=self.lineEdit_2.text()
                self.conn_csv.at[self.name,'P']=self.lineEdit.text()
                self.conn_csv.at[self.name,'MolFlow']=self.lineEdit_4.text()
                self.conn_csv.at[self.name,'CompMolFrac']=self.lineEdit_3.text()
                self.hide()
            else:
                QMessageBox.about(self, 'Important', "Please Provide all the fields data")
        except Exception as e:
            print(e)
        
