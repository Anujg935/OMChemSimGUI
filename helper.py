from OMChem.Flowsheet import Flowsheet
from OMChem.MatStm import MatStm
from OMChem.Mixer import Mixer
from OMChem.Splitter import Splitter
from OMChem.Flash import Flash
from component_selector import *


def helperFunc(type,name1,count):
    if(type=="Mixer"):
        return Mixer(name=name1)
    elif(type=="MatStm"):
        return MatStm(name=(name1,count),CompNames=compond_selected)
    elif(type=="Splitter"):
        return Splitter(name=name1)
    elif(type=="Flash"):
        return Flash(name=(name1,count))
