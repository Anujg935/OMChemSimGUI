model splitter1
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
Simulator.Unit_Operations.Splitter Splitter1(NOC = 2,comp = {Water, Ethanol},calcType = "Molar_Flow",NO=2);
model ms2
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms2;
ms2 MatStm2(NOC = 2,comp = {Water, Ethanol});
model ms3
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms3;
ms3 MatStm3(NOC = 2,comp = {Water, Ethanol});
model ms1
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms1;
ms1 MatStm1(NOC = 2,comp = {Water, Ethanol});
equation
connect(MatStm2.inlet,Splitter1.outlet[1]);
connect(MatStm3.inlet,Splitter1.outlet[2]);
connect(Splitter1.inlet,MatStm1.outlet);
Splitter1.specVal ={50, 50};
MatStm1.P = 101325;
MatStm1.T = 300;
MatStm1.compMolFrac[1,:] = {0.8526315789473684, 0.1473684210526316};
MatStm1.totMolFlo[1] = 190;
end splitter1;
