from OMChem.Flowsheet import Flowsheet
from OMChem.Mixer import Mixer
from OMChem.MatStm import MatStm
comp = ["Air","Bromine","Argon"]
Mixer1 = Mixer(name='Mixer1',NOI=2)
MatStm1 = MatStm(name='MatStm1',CompNames=comp,T=300,P=101325,MolFlow=100,CompMolFrac=[0.5,0.4,0.1])
MatStm2 = MatStm(name='MatStm2',CompNames=comp,T=300,P=101325,MolFlow=100,CompMolFrac=[0.5,0.4,0.1])
MatStm3 = MatStm(name='MatStm3',CompNames=comp,T=300,P=101325,MolFlow=100,CompMolFrac=[0.5,0.4,0.1])
Mixer1.connect(InputStms=['MatStm1', 'MatStm2'],OutputStms=MatStm3)
f = Flowsheet()
f.add_comp_list(comp)
f.add_UnitOpn(Mixer1,0)
f.add_UnitOpn(MatStm1,0)
f.add_UnitOpn(MatStm2,0)
f.add_UnitOpn(MatStm3,1)
f.simulateEQN()
