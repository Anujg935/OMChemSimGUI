from OMChem.Flowsheet import Flowsheet
from OMChem.MatStm import MatStm
from OMChem.Mixer import Mixer
from OMChem.EngStm import EngStm
from OMChem.Heater import Heater
from OMChem.Flash import Flash
from OMChem.Splitter import Splitter
from OMChem.Valve import Valve
from OMChem.Cooler import Cooler
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
    elif(type=="Heater"):
        return Heater(name=name1)
    elif(type=="Valve"):
        return Valve(name=name1)
    elif(type=="Cooler"):
        return Cooler(name=name1)
