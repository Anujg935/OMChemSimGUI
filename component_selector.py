from PyQt5.QtCore import *
from PyQt5.QtWidgets import *
from PyQt5.QtGui import *
from PyQt5.uic import loadUiType

ui_dialog = loadUiType('comp_selector.ui')

class componentSelector(QDialog,ui_dialog):
    def __init__(self):
        super(componentSelector,self).__init__()
        #self.setupUi(self)
        self.lines = [line.rstrip('\n') for line in open('compounds.txt')]

        model = QStringListMode()
        model.setStringList(self.lines)

        completer = QCompleter()
        completer.setModel(model)

        self.lineEdit.setCompleter(completer)

        #self.show()

'''       
if __name__ == "__main__":
    app = QApplication(sys.argv)
    myapp = componentSelector()
    myapp.show()
    app.exec_()
'''
