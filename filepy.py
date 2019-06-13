from OMChem.Flowsheet import Flowsheet
from OMChem.Mixer import Mixer
from OMChem.MatStm import MatStm
comp = ['Glycerol', 'Sulfurtrioxide', 'Nitricacid']
Mixer1 = Mixer(name='Mixer1',NOI=2)
MatStm1 = MatStm(name='MatStm1',T=300,P=101325,MolFlow=100,CompMolFrac=[0.5,0.4,0.1])
MatStm2 = MatStm(name='MatStm2',T=300,P=101325,MolFlow=100,CompMolFrac=[0.5,0.4,0.1])
MatStm3 = MatStm(name='MatStm3',T=300,P=101325,MolFlow=100,CompMolFrac=[0.5,0.4,0.1])
Mixer1.connect(InputStms=['MatStm3', 'MatStm1'],OutputStms=MatStm2)
f = Flowsheet()
f.add_comp_list(comp)
f.add_UnitOpn(Mixer1)
f.add_UnitOpn(MatStm1)
f.add_UnitOpn(MatStm2)
f.add_UnitOpn(MatStm3)
f.simulateEQN()
