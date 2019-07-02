from functools import partial
from collections import defaultdict
import sys
import numpy as np
from OMChem.Flowsheet import Flowsheet
from OMChem.MatStm import MatStm
from OMChem.Mixer import Mixer
from OMChem.Heater import Heater
from OMChem.Splitter import Splitter
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
from component_selector import *
from dockWidget import dockWidget
from pythonGenerator import PythonFileGenerator
from resDockWidget import resdockWidget
from helper import helperFunc
from container import Container
ui,_ = loadUiType('main.ui')

comp_dict ={'MatStm':[1,1,1],'EngStm':[1,1,1],'Mixer':[1,5,1],'Splitter':[1,1,5],'Flash':[1,1,2],'Heater':[1,1,1],'Valve':[1,1,1],'Cooler':[1,1,1],'CompSep':[1,1,2],'Pump':[1,1,1]}
class MainApp(QMainWindow,ui):
    def __init__(self):
        
        QMainWindow.__init__(self)
        self.setupUi(self)
        style = open('new.css','r')
        style = style.read()
        
        self.zoomcount = 0
        self.Container = Container()
        self.setStyleSheet(style)
        self.comp =componentSelector(self)
        self.scene = QGraphicsScene()
        self.scene.setItemIndexMethod(QGraphicsScene.BspTreeIndex)
        self.graphicsView.setScene(self.scene)
        self.graphicsView.setMouseTracking(True)
        self.pushButton.clicked.connect(partial(self.component,'MatStm'))
        self.graphicsView.keyPressEvent=self.deleteCall
        self.actionZoomIn.triggered.connect(self.zoomin)
        self.actionNew_Flowsheet.triggered.connect(self.new)
        self.actionZoomOut.triggered.connect(self.zoomout)
        self.actionResetZoom.triggered.connect(self.zoomReset)
        self.actionSequential_mode.triggered.connect(partial(self.generatef,'SM'))
        self.actionEquation_oriented.triggered.connect(partial(self.generatef,'EQN'))
        self.pushButton_7.clicked.connect(partial(self.component,'Mixer'))
        self.pushButton_14.clicked.connect(partial(self.component,'Pump'))
        self.pushButton_11.clicked.connect(partial(self.component,'Heater'))
        self.actionSelect_compouns.triggered.connect(self.selectCompounds)
        self.pushButton_10.clicked.connect(partial(self.component,'Splitter'))
        self.pushButton_9.clicked.connect(partial(self.component,'Flash'))
        self.pushButton_25.clicked.connect(partial(self.component,'Valve'))
        self.pushButton_12.clicked.connect(partial(self.component,'Cooler'))
        self.pushButton_13.clicked.connect(partial(self.component,'CompSep'))

        
    def selectCompounds(self):
        self.comp.show()

    def abriveation(self,key):
        d ={"P":"Pressure","T":"Temperature",
        "liqPhasMolFrac":"Liquid Phase Mol Fraction","liqPhasMasFrac":"Liquid Pase Mass Fraction",
        "vapPhasMolFrac":"Vapour Phase Mol Fracrion","vapPhasMasFrac":"Vapour Phase Mass Fracrion",
        "totMolFlo[1]":"Molar Flow","totMasFlo[1]":"Mass Flow","MW[1]":"Mixer Phase Molecular Weight",
        "MW[2]":"Liquid Phase Molecular Weight","MW[3]":"Vapour Phase Molecular Weight",
        "phasMolSpHeat[1]":"Mixer Phase molar Heat Capacity","phasMolSpHeat[2]":"Liquid Phase molar Heat Capacity",
        "phasMolSpHeat[3]":"Vapour Phase molar Heat Capacity","phasMolEnth[1]":"Mixer Phase Molar Enthalpy",
        "phasMolEnth[2]":"Liquid Phase Molar Enthalpy","phasMolEnth[3]":"Vapour Phase Molar Enthalpy",
        "phasMolEntr[1]":"Mixer Phase Molar Entropy","phasMolEntr[2]":"Liquid Phase Molar Entropy",
        "phasMolEntr[3]":"Vapour Phase Molar Entropy","totMolFlo[2]":"Liquid Phase Molar Flow Rate",
        "totMolFlo[3]":"Vapour Phase Molar Flow Rate","totMasFlo[2]":"Liquid Phase Mass Flow Rate",
        "totMolFlo[3]":"Liquid Phase Mass Flow Rate"
        } 

        if key in d.keys():
            return d[key]
        else:
            return key

    def resultsCategory(self,name):
        try:
            result=self.Container.result
            obj = self.Container.fetchObject(name)
            if obj.type =="MatStm":
                self.tableWidget.setRowCount(0);
                for key, value in obj.Prop.items():
                    propertyname = name + '.' + key
                    if propertyname in result[0]:
                        ind = result[0].index(propertyname)
                        resultval = str(result[-1][ind])
                        #stm.Prop[key] = resultval
                        print("######Resultsfetch####",key,resultval)
                        rowPosition = self.tableWidget.rowCount()
                        self.tableWidget.insertRow(rowPosition)
                        self.tableWidget.setItem(rowPosition , 0, QTableWidgetItem(str(self.abriveation(key))))
                        self.tableWidget.setItem(rowPosition , 1, QTableWidgetItem(str(resultval)))
        except Exception as e:
            print(e)


    def resultTree(self):
        type = self.nameType[str(self.comboBox.currentText())]
        self.resultsCategory(self.comboBox.currentText())
    def results(self):
        self.nameType={}
        self.comboBox.clear()
        for i in self.Container.unitOp:
            #nameslist.append(i.name)
            self.nameType[i.name] = i.type
            self.comboBox.addItem(str(i.name))

    def generatef(self,mode):
        try:
            #self.tabWidget.setCurrentIndex(1)
            self.Container.simulate(mode)
            #pix = QPixmap(self.graphicsView.grab())
            #self.label_8.setPixmap(pix.scaled(self.label_8.size(), Qt.KeepAspectRatio, Qt.SmoothTransformation)) 
            #self.results()
            self.res = resdockWidget(self.Container)
            self.addDockWidget(Qt.LeftDockWidgetArea, self.res)
            self.res.show()

        except Exception as e:
            print(e)
    def zoomReset(self):
        if(self.zoomcount>0):
            for i in range(self.zoomcount):
                self.zoomout()
        elif(self.zoomcount<0):
            for i in range(self.zoomcount):
                self.zoomin()
        else:
            pass
        self.graphicsView.scale(1.0,1.0)
    def zoomout(self):
        self.graphicsView.scale(1.0/1.15,1.0/1.15)
        self.zoomcount -=1
    def zoomin(self):
        self.graphicsView.scale(1.15,1.15)
        self.zoomcount +=1
  
        
    def component(self,conntype):
        try:
            box=None
            box = NodeItem(conntype,self.Container)
            print(box)
            self.scene.addItem(box)
            box.setPos(2500-30, 2500-30)
        except Exception as e:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            print(exc_type,exc_tb.tb_lineno)
            print(e)
            
    def new(self):
        l=self.scene.items()
        print(type(l))
        compond_selected.clear()
        self.comp.tableWidget.setRowCount(0)
        self.delete(l)
    
    def deleteCall(self,event):
        try:
            if event.key() == QtCore.Qt.Key_Delete:
                l=self.scene.selectedItems()
                self.delete(l)
        except Exception as e:
            print(e)
    def delete(self,l):

        for item in l:
            self.scene.removeItem(item)
            if hasattr(item,'Input'):
                for x in item.Input:
                    if x.newLine:
                        
                        self.scene.removeItem(x.newLine)
                        del x.newLine
                        
                    if x.otherLine:
                        
                        self.scene.removeItem(x.otherLine)
                        del x.otherLine
            if hasattr(item,'Output'):
                for x in item.Output:
                    if x.newLine:
                                           
                        self.scene.removeItem(x.newLine)
                        del x.newLine
                        
                    if x.otherLine:
                    
                        self.scene.removeItem(x.otherLine)
                        del x.otherLine
            if hasattr(item,'obj'):
                self.Container.unitOp.remove(item.obj)
                for k in list(self.Container.conn):
                    if item.obj==k:
                        del self.Container.conn[k]

                    elif item.obj in self.Container.conn[k]:
                        self.Container.conn[k].remove(item.obj)
                
                del item.obj
            del item
        

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
  
    def updatePath(self):
        path = QtGui.QPainterPath()
        path.moveTo(self.pointA)
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
    def __init__(self, rect, parent, socketType,container):
        super(NodeSocket, self).__init__(parent)
        self.rect = rect
        self.type = socketType
        self.parent=parent
        self.container=container
        self.newLine=None
        self.otherLine=None
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
            if self.type == 'op':
                rect = self.boundingRect()
                pointA = QtCore.QPointF(rect.x() + rect.width()/2, rect.y() + rect.height()/2)
                pointA = self.mapToScene(pointA)
                pointB = self.mapToScene(event.pos())
                self.newLine = NodeLine(pointA, pointB ,'op')
                self.outLines.append(self.newLine)
                self.scene().addItem(self.newLine)
                
                #print('out')
            elif self.type == 'in':
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
            if self.type == 'op':
                pointB = self.mapToScene(event.pos())
                self.newLine.pointB = pointB
                if self.otherLine:
                    self.otherLine.pointB=pointB
                
            elif self.type == 'in':
                pointA = self.mapToScene(event.pos())
                self.newLine.pointA = pointA
                if self.otherLine:
                    self.otherLine.pointA=pointA
            else:
                super(NodeSocket, self).mouseMoveEvent(event)
        except Exception as e:
            print(e)

        
    def mouseReleaseEvent(self, event):
        try:
            item = self.scene().itemAt(event.scenePos().toPoint(),QtGui.QTransform())
            item.otherLine=self.newLine
            if (self.type == 'op') and (item.type == 'in'):
                print("forward")
                self.newLine.source = self
                self.newLine.target = item
                item.inLines.append(self.newLine)
                self.newLine.pointB = item.getCenter()
                self.container.conn[self.newLine.source.parent.obj].append(self.newLine.target.parent.obj)
                print(self.container.conn)
        
            elif (self.type =='in') and (item.type == 'op'):
                print("back")
                self.newLine.source = item
                self.newLine.target = self
                item.outLines.append(self.newLine)
                self.newLine.pointA = item.getCenter()
                self.container.conn[self.newLine.source.parent.obj].append(self.newLine.target.parent.obj)
                #b[self.newLine.target.parent.obj].append(self.newLine.source.parent.obj)
                print(self.container.conn)
             #   print(b)
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
 
 
class NodeItem(QtWidgets.QGraphicsItem):
    def __init__(self,comptype,container):
        try:
            l = ['Mixer','Splitter']
            super(NodeItem, self).__init__()
            self.name = comptype + str(comp_dict[comptype][0])
            self.type = comptype
            self.setToolTip(self.name)
            self.nin = comp_dict[comptype][1]
            self.nop = comp_dict[comptype][2]
            self.obj = helperFunc(self.type,self.name,comp_dict[comptype][0])
            self.container=container
            self.container.addUnitOp(self.obj)
            if(self.type not in l):
                self.mainwindow=findMainWindow()
                self.dockWidget=dockWidget(self.name,self.type,self.obj)
                self.mainwindow.addDockWidget(Qt.LeftDockWidgetArea, self.dockWidget)
                self.dockWidget.hide()
            #self.mainwindow=findMainWindow()
            #self.dockWidget=dockWidget(self.name,self.type,self.obj)
            #self.mainwindow.addDockWidget(Qt.LeftDockWidgetArea, self.dockWidget)
            #self.dockWidget.hide()
            comp_dict[comptype][0]+=1
            
            self.pic=QtGui.QPixmap("Capture.png")
            self.rect = QtCore.QRect(0,0,60,60)
            self.setFlag(QtWidgets.QGraphicsPixmapItem.ItemIsMovable)
            self.setFlag(QtWidgets.QGraphicsPixmapItem.ItemIsSelectable)
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
            exc_type, exc_obj, exc_tb = sys.exc_info()
            print(exc_type,exc_tb.tb_lineno)
            print(e)
 
    def initUi(self):
        self.Input = [NodeSocket(QtCore.QRect(-2.5,self.rect.width()*x/(self.nin+1),5,5), self, 'in',self.container) for x in range(1,self.nin+1) ]
        self.Output = [NodeSocket(QtCore.QRect(57.5,self.rect.width()*x/(self.nop+1),5,5), self, 'op',self.container) for x in range(1,self.nop+1)]

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
            painter.drawRect(QtCore.QRectF(self.rect))
        else:
            painter.setPen(self.pen)
        #painter.drawRect(self.rect)
        try:
            painter.drawPixmap(self.rect,self.pic)
        except Exception as e:
            print(e)
    '''
    def mousePressEvent(self,event,painter):
        painter.setPen(self.selPen)
        painter.drawRect(self.boundingRect)
    '''
    def mouseMoveEvent(self, event):
        try:
            #print('item move')
            super(NodeItem, self).mouseMoveEvent(event)
            for output in self.Output:
                for line in output.outLines:
                    line.pointA = line.source.getCenter()
                    line.pointB = line.target.getCenter()
            for input in self.Input:
                for line in input.inLines:
                    line.pointA = line.source.getCenter()
                    line.pointB = line.target.getCenter()
        except Exception as e:
            exc_type, exc_obj, exc_tb = sys.exc_info()
            print(exc_type,exc_tb.tb_lineno)
            print(e)
    def mouseDoubleClickEvent(self, event):
        try:
            
            self.setPos(event.scenePos().x()-250,event.scenePos().y())
            self.dockWidget.show()
        except Exception as e:
            print(e)
        
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
