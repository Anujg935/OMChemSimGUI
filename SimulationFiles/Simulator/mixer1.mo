model mixer1
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
Simulator.Unit_Operations.Mixer Mixer1(NOC = 2,comp = {Water, Ethanol},outPress = "Inlet_Average",NI=2);
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
equation
connect(MatStm3.outlet,Mixer1.inlet[1]);
connect(MatStm4.outlet,Mixer1.inlet[2]);
connect(Mixer1.outlet,MatStm2.inlet);
MatStm3.P = 101312;
MatStm3.T = 321;
MatStm3.compMolFrac[1,:] = {0.9, 0.1};
MatStm3.totMolFlo[1] = 100;
MatStm4.P = 101321;
MatStm4.T = 340;
MatStm4.compMolFrac[1,:] = {0.9, 0.1};
MatStm4.totMolFlo[1] = 100;
end mixer1;
