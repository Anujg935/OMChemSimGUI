from OMChem.Flowsheet import Flowsheet
from OMChem.MatStm import MatStm
from OMChem.Mixer import Mixer
def main():
	comp = ['Xenon', 'Styrene', 'Hydrogen']
	MatStm1 = MatStm(name='MatStm1',CompNames=comp,T=270,P=101325,MolFlow=100,CompMolFrac=[0.1,0.4,0.5])
	MatStm2 = MatStm(name='MatStm2',CompNames=comp,T=330,P=101325,MolFlow=80,CompMolFrac=[0.5,0.1,0.4])
	MatStm3 = MatStm(name='MatStm3',CompNames=comp,T=350,P=101325,MolFlow=85,CompMolFrac=[0.3,0.3,0.4])
	Mixer1 = Mixer(name='Mixer1',NOI=2)
	Mixer1.connect(InputStms=['MatStm2', 'MatStm1'],OutputStms=MatStm3)
	f = Flowsheet()
	f.add_comp_list(comp)
	f.add_UnitOpn(MatStm1,0)
	f.add_UnitOpn(MatStm2,0)
	f.add_UnitOpn(MatStm3,1)
	f.add_UnitOpn(Mixer1,0)
	f.simulateEQN()
if __name__ == '__main__':
	main()
