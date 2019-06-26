import inspect
from collections import OrderedDict
from PyQt5.QtCore import (QObject, QByteArray, QDate, QDateTime, QLine, QLineF, \
                          QPoint, QPointF, QRect, QRectF, QSize, QSizeF, QTime, \
                          Qt)
from PyQt5.QtGui import QColor, QKeySequence, QPolygon, QPainter
from PyQt5.QtWidgets import QGraphicsItem

builtinTypes = (type(None), int, float, complex, bool, \
                str, bytearray, bytes, list, tuple, dict, set, frozenset, OrderedDict)

pickleablePyQtTypes = (QByteArray, QColor, QDate, QDateTime, QKeySequence, \
                       QLine, QLineF, QPoint, QPointF, QPolygon, QRect, QRectF, \
                       QSize, QSizeF, QTime)
                
def preparePicklePyQt(obj):
    class_name = obj.__class__.__name__
    if hasattr(obj, "__class__") and not hasattr(obj, "__setstate__") \
       and class_name not in ["module"] \
       and not isinstance(obj, builtinTypes) and not isinstance(obj, pickleablePyQtTypes):
        print(class_name)
        obj_class = obj.__class__
        method_list = inspect.getmembers(obj_class, predicate=inspect.isroutine)
        method_set = OrderedDict(method_list)
        data = {}
        pickles = []
        for name in method_set:
            if name.startswith("set"):
                set_name = name
                get_name =  name[3:]
                if get_name:
                    get_name = str(get_name[0]).lower() + get_name[1:] 
                    if get_name in method_set:
                        if _getSetArityIsSupported(obj_class, get_name, set_name):
                            pickles.append(get_name)
        
        def __setstate__(self, data):
            self.__init__()
            for pickle in pickles:
                obj = getattr(self, pickle)()
                class_name = obj.__class__.__name__
                do_set = False
                if class_name in pyqtEnumTypes:
                    val = _unpickleFlags(data[pickle], enum=pyqtEnumTypes[class_name])
                    if val is not None:
                        do_set = True
                else:
                    val = data[pickle]
                    do_set = True
                if do_set:
                    getattr(self, "set" + str(pickle[0]).capitalize() + pickle[1:])(val)
                
        def __getstate__(self):
            data = {}
            for pickle in pickles:
                obj = getattr(self, pickle)()
                class_name = obj.__class__.__name__
                if class_name in pyqtEnumTypes:
                    data[pickle] = int(obj)
                else:
                    preparePicklePyQt(obj)
                    data[pickle] = obj
            return data
                    
        obj_class.__setstate__ = __setstate__
        obj_class.__getstate__ = __getstate__
    elif isinstance(obj, (list, tuple)):
        for x in obj:
            preparePicklePyQt(x)
    elif isinstance(obj, (dict, OrderedDict)):
        for x in obj:
            preparePicklePyQt(obj[x])
    

def _getSetArityIsSupported(obj_class, get_name, set_name):
    obj = obj_class()
    try:
        getattr(obj, set_name)(getattr(obj, get_name)())
        return True
    except Exception as e:
        #if __debug__:
            #raise e
        return False


if __name__ == "__main__":
    import sys
    from PyQt5.QtWidgets import QApplication
    app = QApplication([])
    import _pickle as pickle
    
    class TestObject(QObject):
        def __init__(self):
            super().__init__()
            self._value = None
            
        def value(self):
            return self._value
        
        def setValue(self, val):
            self._value = val
            
        def __str__(self):
            return str(self._value)
    
    A = TestObject()
    A.setValue(777)
    preparePicklePyQt(A)
    with open("pyqt_pickle_test.pickle", "wb") as pickle_file:
        pickle.dump(A, pickle_file)
    with open("pyqt_pickle_test.pickle", "rb") as pickle_file:
        B = pickle.load(pickle_file)
    print(A)
    print(B)
    sys.exit(app.exec_())


def _unpickleFlags(flags, enum):
    if not isinstance(flags, int):
        return flags
    flags1 = None
    for k in range(0, 31):
        bits = int(flags) & (1 << k)
        if bits:
            if flags1 is None:
                flags1 = enum[bits]
            else:
                flags1 |= enum[bits]
    return flags1 

    
pyqtEnumTypes = {
    "MouseButtons": {
        int(Qt.NoButton) : Qt.NoButton,
        int(Qt.AllButtons) : Qt.AllButtons,
        int(Qt.LeftButton) : Qt.LeftButton,
        int(Qt.RightButton) : Qt.RightButton,
        int(Qt.MidButton) : Qt.MidButton,
        int(Qt.MiddleButton) : Qt.MiddleButton,
        int(Qt.BackButton) : Qt.BackButton,
        int(Qt.XButton1) : Qt.XButton1,
        int(Qt.ExtraButton1) : Qt.ExtraButton1,
        int(Qt.ForwardButton) : Qt.ForwardButton,
        int(Qt.XButton2) : Qt.XButton2,
        int(Qt.ExtraButton2) : Qt.ExtraButton2,
        int(Qt.TaskButton) : Qt.TaskButton,
        int(Qt.ExtraButton3) : Qt.ExtraButton3,
        int(Qt.ExtraButton4) : Qt.ExtraButton4,
        int(Qt.ExtraButton5) : Qt.ExtraButton5,
        int(Qt.ExtraButton6) : Qt.ExtraButton6,
        int(Qt.ExtraButton7) : Qt.ExtraButton7,
        int(Qt.ExtraButton8) : Qt.ExtraButton8,
        int(Qt.ExtraButton9) : Qt.ExtraButton9,
        int(Qt.ExtraButton10) : Qt.ExtraButton10,
        int(Qt.ExtraButton11) : Qt.ExtraButton11,
        int(Qt.ExtraButton12) : Qt.ExtraButton12,
        int(Qt.ExtraButton13) : Qt.ExtraButton13,
        int(Qt.ExtraButton14) : Qt.ExtraButton14,
        int(Qt.ExtraButton15) : Qt.ExtraButton15,
        int(Qt.ExtraButton16) : Qt.ExtraButton16,
        int(Qt.ExtraButton17) : Qt.ExtraButton17,
        int(Qt.ExtraButton18) : Qt.ExtraButton18,
        int(Qt.ExtraButton19) : Qt.ExtraButton19,
        int(Qt.ExtraButton20) : Qt.ExtraButton20,
        int(Qt.ExtraButton21) : Qt.ExtraButton21,
        int(Qt.ExtraButton22) : Qt.ExtraButton22,
        int(Qt.ExtraButton23) : Qt.ExtraButton23,
        int(Qt.ExtraButton24) : Qt.ExtraButton24,
    },
    "GraphicsItemFlags": {
        int(QGraphicsItem.ItemIsMovable) : QGraphicsItem.ItemIsMovable,
        int(QGraphicsItem.ItemIsSelectable) : QGraphicsItem.ItemIsSelectable,
        int(QGraphicsItem.ItemIsFocusable) : QGraphicsItem.ItemIsFocusable,
        int(QGraphicsItem.ItemClipsToShape) : QGraphicsItem.ItemClipsToShape,
        int(QGraphicsItem.ItemClipsChildrenToShape) : QGraphicsItem.ItemClipsChildrenToShape,
        int(QGraphicsItem.ItemIgnoresTransformations) : QGraphicsItem.ItemIgnoresTransformations,
        int(QGraphicsItem.ItemIgnoresParentOpacity) : QGraphicsItem.ItemIgnoresParentOpacity,
        int(QGraphicsItem.ItemDoesntPropagateOpacityToChildren) : QGraphicsItem.ItemDoesntPropagateOpacityToChildren,
        int(QGraphicsItem.ItemStacksBehindParent) : QGraphicsItem.ItemStacksBehindParent,
        int(QGraphicsItem.ItemUsesExtendedStyleOption) : QGraphicsItem.ItemUsesExtendedStyleOption,
        int(QGraphicsItem.ItemHasNoContents) : QGraphicsItem.ItemHasNoContents,
        int(QGraphicsItem.ItemSendsGeometryChanges) : QGraphicsItem.ItemSendsGeometryChanges,
        int(QGraphicsItem.ItemAcceptsInputMethod) : QGraphicsItem.ItemAcceptsInputMethod,
        int(QGraphicsItem.ItemNegativeZStacksBehindParent) : QGraphicsItem.ItemNegativeZStacksBehindParent,
        int(QGraphicsItem.ItemIsPanel) : QGraphicsItem.ItemIsPanel,
        int(QGraphicsItem.ItemSendsScenePositionChanges) : QGraphicsItem.ItemSendsScenePositionChanges,
        int(QGraphicsItem.ItemContainsChildrenInShape) : QGraphicsItem.ItemContainsChildrenInShape,
    },
    "InputMethodHints": {
        int(Qt.ImhPreferLatin) : Qt.ImhPreferLatin,
        int(Qt.ImhMultiLine) : Qt.ImhMultiLine,
        int(Qt.ImhDigitsOnly) : Qt.ImhDigitsOnly,
        int(Qt.ImhFormattedNumbersOnly) : Qt.ImhFormattedNumbersOnly,
        int(Qt.ImhUppercaseOnly) : Qt.ImhUppercaseOnly,
        int(Qt.ImhLowercaseOnly) : Qt.ImhLowercaseOnly,
        int(Qt.ImhDialableCharactersOnly) : Qt.ImhDialableCharactersOnly,
        int(Qt.ImhEmailCharactersOnly) : Qt.ImhEmailCharactersOnly,
        int(Qt.ImhUrlCharactersOnly) : Qt.ImhUrlCharactersOnly,
        int(Qt.ImhLatinOnly) : Qt.ImhLatinOnly,
        int(Qt.ImhExclusiveInputMask) : Qt.ImhExclusiveInputMask,
    },
    "RenderHints": {
        int(QPainter.Antialiasing) : QPainter.Antialiasing,
        int(QPainter.TextAntialiasing) : QPainter.TextAntialiasing,
        int(QPainter.SmoothPixmapTransform) : QPainter.SmoothPixmapTransform,
        int(QPainter.HighQualityAntialiasing) : QPainter.HighQualityAntialiasing,
        int(QPainter.NonCosmeticDefaultPen) : QPainter.NonCosmeticDefaultPen,
        int(QPainter.Qt4CompatiblePainting) : QPainter.Qt4CompatiblePainting,
    },
    
}
