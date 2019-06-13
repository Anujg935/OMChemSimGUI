from OMChem.Flowsheet import Flowsheet
from OMChem.MatStm import MatStm
comp = ['hydrogen', 'propane', 'propylene']
MatStm1 = MatStm(name='MatStm1',T=300,P=101325,MolFlow=100,CompMolFrac=[0.5,0.4,0.1])
f = Flowsheet()
f.add_comp_list(['hydrogen', 'propane', 'propylene'])
f.add_UnitOpn(MatStm1)
f.simulate()
