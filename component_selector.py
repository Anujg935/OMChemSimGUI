from PyQt5.QtCore import *
from PyQt5.QtWidgets import *
from PyQt5.QtGui import *
from PyQt5.uic import loadUiType

ui_dialog,_ = loadUiType('comp_selector.ui')

compond_selected = ['hydrogen','propane','propylene']
class componentSelector(QDialog,ui_dialog):
    def __init__(self,parent=None):
        #super(componentSelector,self).__init__(parent)
        QDialog.__init__(self,parent)
        self.setupUi(self)
        self.lines = [line.rstrip('\n') for line in open('compounds.txt')]
        if(self.lines):
            print("ok")
        model = QStringListModel()
        model.setStringList(self.lines)

        completer = QCompleter()
        completer.setCaseSensitivity(Qt.CaseInsensitive)
        completer.setModel(model)
    
        self.lineEdit.setCompleter(completer)
        
        self.compoundSelectButton.clicked.connect(self.compoundSelection)
        self.compoundSelectButton.setAutoDefault(False)
        self.pushButton.clicked.connect(self.accept)
        self.pushButton_2.clicked.connect(self.reject)
        self.pushButton_3.clicked.connect(self.removeItems)
    def compoundSelection(self):
        comp = self.lineEdit.text()

        if comp in self.lines:
            compond_selected.append(comp)
            self.lineEdit.clear()
            self.addCompToList(comp)
            print(compond_selected)
        else:
            self.Show_Error()

    def initial_Table(self):
        self.tableWidget.setColumnCount(self.col_count)
        self.tableWidget.setRowCount(self.row_count)

    def addCompToList(self,comp):
        self.item = QListWidgetItem()
        self.item.setText(comp)
        self.listWidget.addItem(self.item)

    def removeItems(self): 
        for item in self.listWidget.selectedItems():
            txt = item.text()
            compond_selected.remove(txt)
            self.listWidget.takeItem(self.listWidget.row(item))
		
    def Show_Error(self):
        QMessageBox.about(self, 'Important', "Selected Compound is not Available")

