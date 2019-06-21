from OMChem.Flowsheet import Flowsheet
from OMChem.MatStm import MatStm
from OMChem.Mixer import Mixer
from component_selector import *


def helperFunc(type,name):
    if(type=="Mixer"):
        return Mixer(name=name)
    elif(type=="MatStm"):
        return MatStm(name=name,CompNames=compond_selected)