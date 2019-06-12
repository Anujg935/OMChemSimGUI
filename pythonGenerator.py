import pandas as pd
from component_selector import *
def PythonFileGenerator(data):
    try:
        f = open("filepy.py","w+")

        f.write("from OMChem.Flowsheet import Flowsheet\n")
        #n = data['comtype'].nunique()
        for i in list(data['comptype'].unique()):
            f.write("from OMChem."+i+" import " +i)


        f.write("comp = " + str(compond_selected ))


        for i in range(len(data.index)):
            print(len(data.index))
            if(data.get('comptype')[i] == 'MatStm'):
                print("1")
                print(data.get('id')[i],data.get('T')[i],data.get('P')[i])
                f.write(data.get('id')[i]+" = MatStm(name="+"\"data.get('id')[i]\"" +",T="+data.get('T')[i] + ",P="+data.get('P')[i] +",MolFlow="+data.get('MolFlow')[i] +",CompMolFrac="+data.get('CompMolFrac')[i]+"\n")
                print("2")
            elif(data.get('comptype')[i] == 'EngStm'):
                print("3")
                f.write(data.get('id')[i]+" = EngStm(name="+"\"data.get('id')[i]\"" +"\n")
                print("4")
            else:
                pass



        f.write("f = Flowsheet()\n")
        f.write("f.add_comp_list("+compond_selected+")\n")
        for i in range(len(data.index)):
            f.write("f.add_UnitOpn("+data.get('id')[i]+")\n")


        f.write("f.simulate()")
    except Exception as e:
        
        print(e)
