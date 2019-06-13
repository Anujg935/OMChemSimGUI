import pandas as pd
from component_selector import *
def PythonFileGenerator(data):
    f = open("filepy.py","w+")

    f.write("from OMChem.Flowsheet import Flowsheet\n")
    for i in list(data['comptype'].unique()):
        f.write("from OMChem."+i+" import " +i+"\n")


    f.write("comp = " + str(compond_selected )+"\n")


    for i in range(len(data.index)):
        if(data.get('comptype')[i] == 'MatStm'):
            f.write(str(data.index.values[i])+" = MatStm(name="+repr(str(data.index.values[i])) +",T="+str(data.get('T')[i]) + ",P="+str(data.get('P')[i]) +",MolFlow="+str(data.get('MolFlow')[i])+",CompMolFrac="+str(data.get('CompMolFrac')[i]) +")\n")
        elif(data.get('comptype')[i] == 'EngStm'):
            f.write(str(data.index.values[i])+" = EngStm(name="+repr(str(data.index.values[i])) +")\n")
        else:
            pass



    f.write("f = Flowsheet()\n")
    f.write("f.add_comp_list("+str(compond_selected)+")\n")
    for i in range(len(data.index)):
        f.write("f.add_UnitOpn("+str(data.index.values[i])+")\n")


    f.write("f.simulate()\n")
    f.close()
