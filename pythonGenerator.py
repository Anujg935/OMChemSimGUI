import pandas as pd
from component_selector import *
import os
def PythonFileGenerator(data):
    f = open("filepy.py","w+")
    print(str(thermo_package[0]))
    f.write("from OMChem.Flowsheet import Flowsheet\n")
    for i in list(data['comptype'].unique()):
        f.write("from OMChem."+i+" import " +i+"\n")

    f.write("def main():\n")
    f.write("\tcomp = " + str(compound_selected )+"\n")
    f.write("\tthermo = "+repr(str(thermo_package[0]))+"\n")
    for i in range(len(data.index)):
        if(data.get('comptype')[i] == 'MatStm'):
            f.write('\t'+str(data.index.values[i])+" = MatStm(name="+repr(str(data.index.values[i]))+",CompNames=comp" +",T="+str(data.get('T')[i]) + ",P="+str(data.get('P')[i]) +",MolFlow="+str(data.get('MolFlow')[i])+",CompMolFrac="+str(data.get('CompMolFrac')[i]) +")\n")
        elif(data.get('comptype')[i] == 'EngStm'):
            f.write('\t'+str(data.index.values[i])+" = EngStm(name="+repr(str(data.index.values[i])) +")\n")
        elif(data.get('comptype')[i] =='Mixer'):
            f.write('\t'+str(data.index.values[i])+" = Mixer(name="+repr(str(data.index.values[i])) +",NOI="+str(5-data.iloc[i][2:7].isna().sum())+")\n")
        else:
            pass


    templist = []
    outputStmslst = []
    for i in range(len(data.index)):
        if((data.iloc[i][1:6].isna().sum() <5) and (data.iloc[i][6:11].isna().sum() <5)):
            l = pd.notna(data.iloc[i][1:6]).index[pd.notna(data.iloc[i][1:6]) == True].tolist()
            print(l)
            if(len(l)==1):
                f.write('\t'+str(data.index.values[i])+".connect(InputStms="+str(data.iloc[i][l[0]])+",OutputStms=")
            else:
                t = []
                t.append([data.iloc[i][l[j]] for j in range(len(l))])
                f.write('\t'+str(data.index.values[i])+".connect(InputStms="+str(t[0])+",OutputStms=")
            
            li = pd.notna(data.iloc[i][6:11]).index[pd.notna(data.iloc[i][6:11]) == True].tolist()
            print(li)
            if(len(li)==1):
                outputStms =  str(data.iloc[i][li[0]])
                outputStmslst.append(outputStms)
                f.write(outputStms+")\n")
            else:
                t.append([data.iloc[i][li[j]] for j in range(len(li))])
                outputStmslst.append(str(t[0]))
                f.write(str(t[0])+")\n")


    f.write("\tf = Flowsheet()\n")
    f.write("\tf.Selected_thermo_package(thermo)\n")
    f.write("\tf.add_comp_list(comp)\n")
    for i in range(len(data.index)):
        if(str(data.index.values[i]) in outputStmslst):
            f.write("\tf.add_UnitOpn("+str(data.index.values[i])+",1"+")\n")
        else:
            f.write("\tf.add_UnitOpn("+str(data.index.values[i])+",0"+")\n")


    f.write("\tf.simulateEQN()\n")

    f.write("if __name__ == '__main__':\n")
    f.write("\tmain()\n")
    f.close()


