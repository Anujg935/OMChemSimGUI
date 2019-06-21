from OMChem.Flowsheet import Flowsheet
from OMChem.MatStm import MatStm
from OMChem.Mixer import Mixer
def main():
	comp = ['Methanol', 'Formaldehyde']
	MatStm1 = MatStm(name='MatStm1',CompNames=comp,T=310,P=101325,MolFlow=70,CompMolFrac=[0.4,0.6])
	MatStm2 = MatStm(name='MatStm2',CompNames=comp,T=270,P=101325,MolFlow=100,CompMolFrac=[0.5,0.5])
	MatStm3 = MatStm(name='MatStm3',CompNames=comp,T=290,P=101325,MolFlow=90,CompMolFrac=[0.3,0.7])
	Mixer1 = Mixer(name='Mixer1',NOI=2)
	Mixer1.connect(InputStms=['MatStm3', 'MatStm1'],OutputStms=MatStm2)
	f = Flowsheet()
	f.add_comp_list(comp)
	f.add_UnitOpn(MatStm1,0)
	f.add_UnitOpn(MatStm2,1)
	f.add_UnitOpn(MatStm3,0)
	f.add_UnitOpn(Mixer1,0)
	f.simulateEQN()
if __name__ == '__main__':
	main()
