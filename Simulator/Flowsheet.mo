model Flowsheet
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
Simulator.Unit_Operations.Mixer Mixer1(NOC = 2,comp = {Water, Ethanol},outPress = "Inlet_Average",NI=2);
Simulator.Unit_Operations.Splitter Splitter1(NOC = 2,comp = {Water, Ethanol},calcType = "Molar_Flow",NO=2);
model ms1
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms1;
ms1 MatStm1(NOC = 2,comp = {Water, Ethanol});
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
equation
connect(MatStm5.outlet,Mixer1.inlet[1]);
connect(MatStm4.outlet,Mixer1.inlet[2]);
connect(Mixer1.outlet,MatStm1.inlet);
connect(MatStm2.inlet,Splitter1.outlet[1]);
connect(MatStm3.inlet,Splitter1.outlet[2]);
connect(Splitter1.inlet,MatStm1.outlet);
Splitter1.specVal ={50, 50};
MatStm4.P = 101325;
MatStm4.T = 300;
MatStm4.compMolFrac[1,:] = {0.8, 0.2};
MatStm4.totMolFlo[1] = 90;
MatStm5.P = 101325;
MatStm5.T = 300;
MatStm5.compMolFrac[1,:] = {0.9, 0.1};
MatStm5.totMolFlo[1] = 100;
end Flowsheet;
