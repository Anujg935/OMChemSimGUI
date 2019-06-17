from functools import partial
import sys
import numpy as np
import pandas as pd
from PyQt5.QtCore import *
from PyQt5.QtWidgets import *
from PyQt5.QtGui import QTextDocument ,QTextCursor ,QTextCharFormat ,QFont ,QPixmap
from PyQt5.uic import loadUiType
from PyQt5.QtCore import Qt
from PyQt5.QtWidgets import QApplication, QGraphicsView, QGraphicsScene, QHBoxLayout, QWidget, QLabel
from PyQt5.QtWidgets import QGraphicsProxyWidget, QGraphicsObject, QGraphicsEllipseItem ,QGraphicsPixmapItem
from PyQt5.QtGui import QBrush ,QTransform ,QMouseEvent
import PyQt5.QtGui as QtGui
import PyQt5.QtCore as QtCore
import PyQt5.QtWidgets as QtWidgets
from component_selector import componentSelector
from dockWidget import dockWidget
from pythonGenerator import PythonFileGenerator
ui,_ = loadUiType('main.ui')
conn_csv=pd.DataFrame(columns=['id','comptype','in1','in2','in3','in4','in5','op1','op2','op3','op4','op5','T','P','MolFlow','CompMolFrac'])
conn_csv.set_index('id',inplace=True)
comp_dict={'MatStm':[1,1,1],'EngStm':[1,1,1],'Mixer':[1,3,1]}
a=0
component = {}

class MainApp(QMainWindow,ui):
    def __init__(self):
        
        QMainWindow.__init__(self)
        self.setupUi(self)
        style = open('light.css','r')
        style = style.read()
        self.setStyleSheet(style)
        #self.graphitem=graphicsItem()
        self.comp =componentSelector(self)
        self.scene = QGraphicsScene()
        self.scene.setItemIndexMethod(QGraphicsScene.BspTreeIndex)
        self.graphicsView.setScene(self.scene)
        self.graphicsView.setMouseTracking(True)
        self.pushButton.clicked.connect(partial(self.component,'MatStm'))
        self.pushButton_5.clicked.connect(partial(self.component,'EngStm'))
        self.graphicsView.keyPressEvent=self.delete
        self.pushButton_2.clicked.connect(self.zoomin)
        self.pushButton_3.clicked.connect(self.zoomout)
        self.pushButton_4.clicked.connect(self.deleteComponent)
        self.pushButton_6.clicked.connect(self.generatef)
        self.pushButton_7.clicked.connect(partial(self.component,'Mixer'))
        self.pushButton_8.clicked.connect(self.selectCompounds)
    
    '''    
    def param(self,name):
        try:
            global a
            name=name
            if(a==1):
                if (self.lineEdit.text() and self.lineEdit_2.text() and self.lineEdit_3.text() and self.lineEdit_4.text()):
                    print(name)
                    conn_csv.at[name,'T']=self.lineEdit_2.text()
                    conn_csv.at[name,'P']=self.lineEdit.text()
                    conn_csv.at[name,'MolFlow']=self.lineEdit_4.text()
                    conn_csv.at[name,'CompMolFrac']=self.lineEdit_3.text()
                    print(a)
                    a=0
                    self.dockWidget_3.hide()
                else:
                    QMessageBox.about(self, 'Important', "Please Provide all the fields data")
            else:
                pass
        except Exception as e:
            print(e)
'''
    def selectCompounds(self):
        self.comp.show()
    def generatef(self):
        try:
            PythonFileGenerator(conn_csv)
            from filepy import main
            main()
        except Exception as e:
            print(e)
    def zoomout(self):
        self.graphicsView.scale(1.0/1.15,1.0/1.15)
    def zoomin(self):
        self.graphicsView.scale(1.15,1.15)
    
    def deleteComponent(self):
        try:
            with pd.option_context('display.max_rows', None, 'display.max_columns', None):
                print(conn_csv)
        except Exception as e:
            print(e)
        #self.comp.show()
        
        '''
        for item in self.scene.selectedItems():
            print(item)
            self.scene.removeItem(item)
        
        
        global a
        try:
            
            print(scene.items())
            print(scene.itemAt(a, QTransform()))
        except Exception as e:
            print(e)
            '''
    def component(self,conntype):
        try:
            box=None
            box = NodeItem(conntype)
            print(box)
            conn_csv.at[box.name,'comptype']=conntype
            '''
            if(conntype=='MatStm'):
                conn_csv.at[box.name,'T']=300
                conn_csv.at[box.name,'P']= 101325
                conn_csv.at[box.name,'MolFlow']= 100
                conn_csv.at[box.name,'CompMolFrac']= "[0.5,0.4,0.1]"
            '''
            self.scene.addItem(box)
            box.setPos(2500-30, 2500-30)
        except Exception as e:
            print(e)
            
    def delete(self,event):
        try:
            if event.key() == QtCore.Qt.Key_Delete:
                for item in self.scene.selectedItems():
                    print(item)
                    self.scene.removeItem(item)
                    del item
        
        except Exception as e:
            print(e)


'''
============================================================
---   GRAPHICS CLASSES
============================================================
'''
class NodeLine(QtWidgets.QGraphicsPathItem):
    def __init__(self, pointA, pointB , socket):
        super(NodeLine, self).__init__()
        self._pointA = pointA
        self._pointB = pointB
        self.socket = socket
        self._source = None
        self._target = None
        self.setZValue(-1)
        self.setBrush(QtGui.QColor(0,0,255,255))
        self.pen = QtGui.QPen()

        self.pen.setStyle(QtCore.Qt.SolidLine)
        self.pen.setWidth(1)
        self.pen.setColor(QtGui.QColor(0,0,255,255))
        self.setPen(self.pen)
        self.setFlag(QtWidgets.QGraphicsPathItem.ItemIsSelectable)
  
    def updatePath(self):
        path = QtGui.QPainterPath()
        path.moveTo(self.pointA)
        '''
        if (self.socket =='out') and (self.pointB.x()>self.pointA.x()):
            try:
                midptx = 50 + self.pointA.x() 
                
                ctrl1_1 = QtCore.QPointF(self.pointA.x(), self.pointA.y())
                ctrl2_1 = QtCore.QPointF(self.pointA.x(), self.pointA.y())
                pt1 = QtCore.QPointF(midptx , self.pointA.y())
                path.cubicTo(ctrl1_1, ctrl2_1, pt1)
                
                path.moveTo(pt1)

                ctrl1_2 = QtCore.QPointF(midptx, self.pointB.y()+75)
                ctrl2_2 = QtCore.QPointF(midptx, self.pointB.y()+75)
                pt2 = QtCore.QPointF(midptx , self.pointB.y()+75)
                path.cubicTo(ctrl1_2, ctrl2_2, pt2)
                path.moveTo(pt2)

                ctrl1_3 = QtCore.QPointF(midptx, self.pointB.y()+75)
                ctrl2_3 = QtCore.QPointF(midptx, self.pointB.y()+75)
                pt3 = QtCore.QPointF(self.pointB.x()-50 , self.pointB.y()+75)
                path.cubicTo(ctrl1_3, ctrl2_3, pt3)
                path.moveTo(pt3)

                ctrl1_4 = QtCore.QPointF(self.pointB.x()-50, self.pointB.y())
                ctrl2_4 = QtCore.QPointF(self.pointB.x()-50, self.pointB.y())
                pt4 = QtCore.QPointF(self.pointB.x()-50 , self.pointB.y())
                path.cubicTo(ctrl1_4, ctrl2_4, pt4)
                path.moveTo(pt4)

                ctrl1_5 = QtCore.QPointF(self.pointB.x()-50, self.pointB.y())
                ctrl2_5 = QtCore.QPointF(self.pointB.x()-50, self.pointB.y())
                pt5 = QtCore.QPointF(self.pointB.x(), self.pointB.y())
                path.cubicTo(ctrl1_5, ctrl2_5, pt5)
                path.moveTo(pt5)
                
                self.setPath(path)
            except Exception as e:
                print(e)
        else :
        '''
        midptx = 0.5*(self.pointA.x() + self.pointB.x())
                
        ctrl1_1 = QtCore.QPointF(self.pointA.x(), self.pointA.y())
        ctrl2_1 = QtCore.QPointF(self.pointA.x(), self.pointA.y())
        pt1 = QtCore.QPointF(midptx , self.pointA.y())
        path.cubicTo(ctrl1_1, ctrl2_1, pt1)
                
        path.moveTo(pt1)

        ctrl1_2 = QtCore.QPointF(midptx, self.pointB.y())
        ctrl2_2 = QtCore.QPointF(midptx, self.pointB.y())
        pt2 = QtCore.QPointF(midptx , self.pointB.y())
        path.cubicTo(ctrl1_2, ctrl2_2, pt2)
        path.moveTo(pt2)

        ctrl1_3 = QtCore.QPointF(midptx, self.pointB.y())
        ctrl2_3 = QtCore.QPointF(midptx, self.pointB.y())
        path.cubicTo(ctrl1_3, ctrl2_3, self.pointB)
        self.setPath(path)
    def paint(self, painter, option, widget):
        painter.setPen(self.pen)
        painter.drawPath(self.path())
 
    @property
    def pointA(self):
        #print('a')
        return self._pointA
 
    @pointA.setter
    def pointA(self, point):
        #print('seta')
        self._pointA = point
        self.updatePath()
 
    @property
    def pointB(self):
        #print('b')
        return self._pointB
 
    @pointB.setter
    def pointB(self, point):
        #print('set b')
        self._pointB = point
        self.updatePath()
 
    @property
    def source(self):
        #print('source')
        return self._source
 
    @source.setter
    def source(self, widget):
        #print('set source')
        self._source = widget
 
    @property
    def target(self):
        #print('target')
        return self._target
 
    @target.setter
    def target(self, widget):
        #print('set target')
        self._target = widget

    def __delete__(self,instance):
        del self._source
        del self._target
        del self._pointA
        del self._pointB
 
class NodeSocket(QtWidgets.QGraphicsItem):
    def __init__(self, rect, parent, socketType):
        super(NodeSocket, self).__init__(parent)
        self.rect = rect
        self.type = socketType
        self.parent=parent
        # Brush.
        self.brush = QtGui.QBrush()
        self.brush.setStyle(QtCore.Qt.SolidPattern)
        self.brush.setColor(QtGui.QColor(180,20,90,255))
 
        # Pen.
        self.pen = QtGui.QPen()
        self.pen.setStyle(QtCore.Qt.SolidLine)
        self.pen.setWidth(1)
        self.pen.setColor(QtGui.QColor(20,20,20,255))
 
        # Lines.
        self.outLines = []
        self.inLines = []
 
    def shape(self):
        path = QtGui.QPainterPath()
        path.addEllipse(self.boundingRect())
        return path
 
    def boundingRect(self):
        return QtCore.QRectF(self.rect)
 
    def paint(self, painter, option, widget):
        painter.setBrush(self.brush)
        painter.setPen(self.pen)
        painter.drawEllipse(self.rect)

    def mousePressEvent(self, event):
        try:
            if self.type == 'op1':
                rect = self.boundingRect()
                pointA = QtCore.QPointF(rect.x() + rect.width()/2, rect.y() + rect.height()/2)
                pointA = self.mapToScene(pointA)
                pointB = self.mapToScene(event.pos())
                self.newLine = NodeLine(pointA, pointB ,'op1')
                self.outLines.append(self.newLine)
                self.scene().addItem(self.newLine)
                
                #print('out')
            elif self.type == 'in' or 'in1' or 'in2' or 'in3':
                rect = self.boundingRect()
                pointA = self.mapToScene(event.pos())
                pointB = QtCore.QPointF(rect.x() + rect.width()/2, rect.y() + rect.height()/2)
                pointB = self.mapToScene(pointB)
                self.newLine = NodeLine(pointA, pointB, 'in')
                self.inLines.append(self.newLine)
                self.scene().addItem(self.newLine)
                #print('in')
            else:
                super(NodeSocket, self).mousePressEvent(event)
        except Exception as e:
            print(e)
    def mouseMoveEvent(self, event):

        try:
            if self.type == 'op1':
                pointB = self.mapToScene(event.pos())
                self.newLine.pointB = pointB
                
            elif self.type == 'in' or 'in1' or 'in2' or 'in3':
                pointA = self.mapToScene(event.pos())
                self.newLine.pointA = pointA
            else:
                super(NodeSocket, self).mouseMoveEvent(event)
        except Exception as e:
            print(e)

        
    def mouseReleaseEvent(self, event):
        try:
            item = self.scene().itemAt(event.scenePos().toPoint(),QtGui.QTransform())
            inputlist = ['in','in1','in2','in3']
            if (self.type == 'op1') and (item.type in inputlist):
                print("forward")
                self.newLine.source = self
                self.newLine.target = item
                
                if(item.type == 'in1'):
                    item.parentItem().Input1.inLines.append(self.newLine)
                elif(item.type == 'in2'):
                    item.parentItem().Input2.inLines.append(self.newLine)
                elif(item.type == 'in3'):
                    item.parentItem().Input3.inLines.append(self.newLine)

                self.newLine.pointB = item.getCenter()
                conn_csv.at[self.newLine.source.parent.name,self.type]=self.newLine.target.parent.name
                conn_csv.at[self.newLine.target.parent.name,item.type]=self.newLine.source.parent.name
            elif (self.type in inputlist) and (item.type == 'op1'):
                print("back")
                self.newLine.source = item
                self.newLine.target = self
                item.parentItem().Output.outLines.append(self.newLine)
                self.newLine.pointA = item.getCenter()
                print(self.type)
                conn_csv.at[self.newLine.source.parent.name,item.type]=self.newLine.target.parent.name
                conn_csv.at[self.newLine.target.parent.name,self.type]=self.newLine.source.parent.name
            else:
                print("del")
                self.scene().removeItem(self.newLine)
                if(self.newLine in self.inLines):
                    self.inLines.remove(self.newLine)
                if(self.newLine in self.outLines):
                    self.outLines.remove(self.newLine)
                del self.newLine
                super(NodeSocket, self).mouseReleaseEvent(event)
        except Exception as e:
            print(e)
 
    def getCenter(self):
        rect = self.boundingRect()
        center = QtCore.QPointF(rect.x() + rect.width()/2, rect.y() + rect.height()/2)
        center = self.mapToScene(center)
        return center
 
 
class NodeItem(QtWidgets.QGraphicsPixmapItem):
    def __init__(self,comptype):
        try:
            super(NodeItem, self).__init__()
            self.name = comptype + str(comp_dict[comptype][0])
            self.type = comptype
            self.mainwindow=findMainWindow()
            comp_dict[comptype][0]+=1
            
            self.pic=QtGui.QPixmap("Capture.png")
            self.rect = QtCore.QRect(0,0,60,60)
            self.setFlag(QtWidgets.QGraphicsPixmapItem.ItemIsMovable)
            self.setFlag(QtWidgets.QGraphicsPixmapItem.ItemIsSelectable)
            #self.mainwindow.pushButton_29.clicked.connect(self.matStmParameters)
            self.initUi()
     
            # Brush
            self.brush = QtGui.QBrush()
            self.brush.setStyle(QtCore.Qt.SolidPattern)
            self.brush.setColor(QtGui.QColor(80,0,90,255))
            # Pen.
            self.pen = QtGui.QPen()
            self.pen.setStyle(QtCore.Qt.SolidLine)
            self.pen.setWidth(1)
            self.pen.setColor(QtGui.QColor(20,20,20,255))
     
            self.selPen = QtGui.QPen()
            self.selPen.setStyle(QtCore.Qt.SolidLine)
            self.selPen.setWidth(2)
            self.selPen.setColor(QtGui.QColor(0,255,255,255))
        except Exception as e:
            print(e)
 
    def initUi(self):
        if(self.type == "Mixer"):
            self.Input1 = NodeSocket(QtCore.QRect(-2.5,12.5,5,5), self, 'in1')
            print(self.Input1)
            self.Input2 = NodeSocket(QtCore.QRect(-2.5,27.5,5,5), self, 'in2')
            print(self.Input2)
            self.Input3 = NodeSocket(QtCore.QRect(-2.5,42.5,5,5), self, 'in3')
            print(self.Input3)
            self.Output = NodeSocket(QtCore.QRect(57.5,27.5,5,5), self, 'op1')
        else:
            self.Input1 = NodeSocket(QtCore.QRect(-2.5,27.5,5,5), self, 'in1')
            print(self.Input1)
            self.Output = NodeSocket(QtCore.QRect(57.5,27.5,5,5), self, 'op1')
 
    def shape(self):
        path = QtGui.QPainterPath()
        path.addRect(self.boundingRect())
        return path
 
    def boundingRect(self):
        return QtCore.QRectF(self.rect)
 
    def paint(self, painter, option, widget):
        painter.setBrush(self.brush)
        if self.isSelected():
            painter.setPen(self.selPen)
        else:
            painter.setPen(self.pen)
        #painter.drawRect(self.rect)
        try:
            painter.drawPixmap(self.rect,self.pic)
        except Exception as e:
            print(e)
    def mouseMoveEvent(self, event):
        try:
            #print('item move')
            super(NodeItem, self).mouseMoveEvent(event)
            if(self.type == "Mixer"):
                for line in self.Output.outLines:
                    line.pointA = line.source.getCenter()
                    line.pointB = line.target.getCenter()
                for line in self.Input1.inLines:
                    line.pointA = line.source.getCenter()
                    line.pointB = line.target.getCenter()
                for line in self.Input2.inLines:
                    line.pointA = line.source.getCenter()
                    line.pointB = line.target.getCenter()
                for line in self.Input3.inLines:
                    line.pointA = line.source.getCenter()
                    line.pointB = line.target.getCenter()
            else:
                for line in self.Output.outLines:
                    #print(line.source)
                    line.pointA = line.source.getCenter()
                    line.pointB = line.target.getCenter()
                for line in self.Input1.inLines:
                    #print(line.source)
                    line.pointA = line.source.getCenter()
                    line.pointB = line.target.getCenter()
        except Exception as e:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            print(exc_type,exc_tb.tb_lineno)
            print(e)
    def mouseDoubleClickEvent(self, event):
        try:
            print ("DoubleClick")
            print(self.name)
            name=self.name
            objid=id(self)
            print(id(self))
            self.dockWidget=dockWidget(name,conn_csv,self.mainwindow)
            self.mainwindow.addDockWidget(Qt.LeftDockWidgetArea, self.dockWidget)
            self.dockWidget.stackedWidget.setCurrentIndex(1)
        except Exception as e:
            print(e)
    
    '''
    def mouseDoubleClickEvent(self, event):
        try:
            print ("DoubleClick")
            if(self.type == "MatStm"):
                print(self.name)
                self.mainwindow.dockWidget_3.show()
                self.mainwindow.stackedWidget.setCurrentIndex(1)
        except Exception as e:
            print(e)
    '''
    def contextMenuEvent(self, event):
        menu = QtWidgets.QMenu()
        make = menu.addAction('make')
        makeFromHere = menu.addAction('make from here')
        debugConnections = menu.addAction('debug connections')
        selectedAction = menu.exec_(event.screenPos())
 
        if selectedAction == debugConnections:
            print ('Input')
            for idx,line in enumerate(self.Input1.inLines):
                print ('  Line {0}'.format(idx))
                print ('    pointA: {0}'.format(line.pointA))
                print ('    pointB: {0}'.format(line.pointB))
            print ('Output')
            for idx,line in enumerate(self.Output.outLines):
                print ('  Line {0}'.format(idx))
                print ('    pointA: {0}'.format(line.pointA))
                print ('    pointB: {0}'.format(line.pointB))

'''
    end
'''
'''
class ParameterSet(QWidget):
    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        self.setGeometry(300, 300, 300, 200)
        self.setWindowTitle('Put Parameters')
        self.show()
'''

class graphicsItem(QGraphicsPixmapItem):
    global a
    global scene
    def __init__ (self):
        super(graphicsItem,self).__init__()
        pic=QPixmap("Capture.png")
        self.setPixmap(pic)
        self.setFlag(self.ItemIsSelectable,True)
        self.setFlag(self.ItemIsMovable,True)
        self.setAcceptHoverEvents(True)
        #self.acceptHoverEvents(True)
        #self.acceptTouchEvents(True)
    def mouseDoubleClickEvent(self,event):
        super(graphicsItem,self).mouseDoubleClickEvent(event)
        try:
            print("Double click")
            #x, y = get_pos(self.graphicsView, self, self.topLeft())
            #print(x,y)
            if self.mousePressEvent(event):
                print("Hello")

            
        except Exception as e:
            print(e)
            
    def mousePressEvent(self,event):
        super(graphicsItem,self).mousePressEvent(event)
        global a
        a= self.mapToScene(event.pos())
        item = scene.itemAt(a,QTransform())

        component[item] = a

        print(component)
        #list(component.keys())[list(component.values()).index(a)]:
        #    print(True)
        #print(main.scene.itemAt(a))
        #templist = self.scene.selectedItems()
        
        
##    def dragEnterEvent(self,event):
##        print("drag")
##    def dropEvent(self,event):
##        print("drop")


    def mouseHover(self,event):
        if QEvent.HoverEnter():
            print("Hover ")
            return true , event.pos()
        else:
            return false
    def mouseMiddleclick(self,event):
        if event.button() == Qt.MidButton:
            print("Middle click")

            return true , event.pos()
        else:
            return false
    def mouseMoveEvent(self,event):
        super(graphicsItem,self).mouseMoveEvent(event)
        print("mouse move")
    def mouseReleaseEvent(self,event):
        try:
                
            global a
            super(graphicsItem,self).mouseReleaseEvent(event)
            a= self.mapToScene(event.pos())
            item  = scene.itemAt(a,QTransform())

            component[item] = a
            print(component)
            #templist = scene.selectedItems()
            #component[templist[0]] = a

            #print(component)
        except Exception as e:
            print(e)
        #last_known_location.append(a)
        #ids_of_components.append(self.scene.selectedItems())
        #print(a)
        '''
        try:
            print(self.scene.items())
            print(self.scene.itemAt(self.mapToScene(event.pos()),QTransform()))
        except Exception as e:
            print(e)
        '''
        print("mouse release")
    def coordinate():
        return self.a

class graphicsScene(QGraphicsScene):
    def __init__ (self):
        super(graphicsScene,self).__init__()
        
def findMainWindow():
    # Global function to find the (open) QMainWindow in application
    app = QApplication.instance()
    for widget in app.topLevelWidgets():
        if isinstance(widget, QMainWindow):
            return widget
    return None

def main():
    app = QApplication(sys.argv)
    window = MainApp()
    window.show()
    app.exec()


if __name__ == '__main__':
    main()
