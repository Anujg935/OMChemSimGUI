from OMChem.Flowsheet import Flowsheet
from OMChem.Mixer import Mixer
from OMChem.MatStm import MatStm
def main():
	comp = ['Hydrogen', 'Formaldehyde', 'Acetylene']
	Mixer1 = Mixer(name='Mixer1',NOI=3)
	MatStm1 = MatStm(name='MatStm1',CompNames=comp,T=300,P=101325,MolFlow=100,CompMolFrac=[0.5,0.4,0.1])
	MatStm2 = MatStm(name='MatStm2',CompNames=comp,T=300,P=101325,MolFlow=100,CompMolFrac=[0.5,0.4,0.1])
	MatStm3 = MatStm(name='MatStm3',CompNames=comp,T=300,P=101325,MolFlow=100,CompMolFrac=[0.5,0.4,0.1])
	MatStm4 = MatStm(name='MatStm4',CompNames=comp,T=300,P=101325,MolFlow=100,CompMolFrac=[0.5,0.4,0.1])
	Mixer1.connect(InputStms=['MatStm4', 'MatStm3', 'MatStm2'],OutputStms=MatStm1)
	f = Flowsheet()
	f.add_comp_list(comp)
	f.add_UnitOpn(Mixer1,0)
	f.add_UnitOpn(MatStm1,1)
	f.add_UnitOpn(MatStm2,0)
	f.add_UnitOpn(MatStm3,0)
	f.add_UnitOpn(MatStm4,0)
	f.simulateEQN()
if __name__ == '__main__':
	main()
