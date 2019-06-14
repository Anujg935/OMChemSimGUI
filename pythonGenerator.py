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
            f.write(str(data.index.values[i])+" = MatStm(name="+repr(str(data.index.values[i]))+"CompNames=comp" +",T="+str(data.get('T')[i]) + ",P="+str(data.get('P')[i]) +",MolFlow="+str(data.get('MolFlow')[i])+",CompMolFrac="+str(data.get('CompMolFrac')[i]) +")\n")
        elif(data.get('comptype')[i] == 'EngStm'):
            f.write(str(data.index.values[i])+" = EngStm(name="+repr(str(data.index.values[i])) +")\n")
        elif(data.get('comptype')[i] =='Mixer'):
            f.write(str(data.index.values[i])+" = Mixer(name="+repr(str(data.index.values[i])) +",NOI="+str(5-data.iloc[0][2:7].isna().sum())+")\n")
        else:
            pass


    templist = []
    for i in range(len(data.index)):
        if((data.iloc[i][1:6].isna().sum() <5) and (data.iloc[i][6:11].isna().sum() <5)):
            l = pd.notna(data.iloc[i][1:6]).index[pd.notna(data.iloc[i][1:6]) == True].tolist()
            print(l)
            if(len(l)==1):
                f.write(str(data.index.values[i])+".connect(InputStms="+str(data.iloc[i][l[0]])+",OutputStms=")
            else:
                t = []
                t.append([data.iloc[i][l[j]] for j in range(len(l))])
                f.write(str(data.index.values[i])+".connect(InputStms="+str(t[0])+",OutputStms=")
            
            li = pd.notna(data.iloc[i][6:11]).index[pd.notna(data.iloc[i][6:11]) == True].tolist()
            print(li)
            if(len(li)==1):
                f.write(str(data.iloc[i][li[0]])+")\n")
            else:
                t = []
                t.append([data.iloc[i][li[j]] for j in range(len(li))])
                f.write(str(t[0])+")\n")


    f.write("f = Flowsheet()\n")
    f.write("f.add_comp_list(comp)\n")
    for i in range(len(data.index)):
        f.write("f.add_UnitOpn("+str(data.index.values[i])+")\n")


    f.write("f.simulateEQN()\n")
    f.close()
