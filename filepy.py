from OMChem.Flowsheet import Flowsheet
from OMChem.Mixer import Mixer
from OMChem.MatStm import MatStm
def main():
	comp = ['Argon', 'Formaldehyde', 'Hydrogen']
	Mixer1 = Mixer(name='Mixer1',NOI=2)
	Mixer2 = Mixer(name='Mixer2',NOI=0)
	MatStm1 = MatStm(name='MatStm1',CompNames=comp,T=305,P=101225,MolFlow=100,CompMolFrac=[0.1,0.4,0.6])
	MatStm2 = MatStm(name='MatStm2',CompNames=comp,T=305,P=101225,MolFlow=100,CompMolFrac=[0.1,0.4,0.6])
	MatStm3 = MatStm(name='MatStm3',CompNames=comp,T=305,P=101225,MolFlow=100,CompMolFrac=[0.1,0.4,0.6])
	Mixer1.connect(InputStms=['MatStm2', 'MatStm1'],OutputStms=MatStm3)
	f = Flowsheet()
	f.add_comp_list(comp)
	f.add_UnitOpn(Mixer1,0)
	f.add_UnitOpn(Mixer2,0)
	f.add_UnitOpn(MatStm1,0)
	f.add_UnitOpn(MatStm2,0)
	f.add_UnitOpn(MatStm3,1)
	f.simulateEQN()
if __name__ == '__main__':
	main()
