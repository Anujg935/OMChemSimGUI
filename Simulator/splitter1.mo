model splitter1
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
Simulator.Unit_Operations.Splitter Splitter1(NOC = 2,comp = {Water, Ethanol},calcType = "Molar_Flow",NO=2);
model ms4
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms4;
ms4 MatStm4(NOC = 2,comp = {Water, Ethanol});
model ms5
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms5;
ms5 MatStm5(NOC = 2,comp = {Water, Ethanol});
model ms3
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms3;
ms3 MatStm3(NOC = 2,comp = {Water, Ethanol});
equation
connect(MatStm4.inlet,Splitter1.outlet[1]);
connect(MatStm5.inlet,Splitter1.outlet[2]);
connect(Splitter1.inlet,MatStm3.outlet);
Splitter1.specVal ={50, 50};
MatStm3.P = 101325;
MatStm3.T = 315.0287067347126;
MatStm3.compMolFrac[1,:] = {0.6, 0.4};
MatStm3.totMolFlo[1] = 200;
end splitter1;
