model mixer1
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
Simulator.Unit_Operations.Mixer Mixer1(NOC = 2,comp = {Water, Ethanol},outPress = "Inlet_Average",NI=2);
model ms1
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms1;
ms1 MatStm1(NOC = 2,comp = {Water, Ethanol});
model ms5
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms5;
ms5 MatStm5(NOC = 2,comp = {Water, Ethanol});
model ms4
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms4;
ms4 MatStm4(NOC = 2,comp = {Water, Ethanol});
equation
connect(MatStm5.outlet,Mixer1.inlet[1]);
connect(MatStm4.outlet,Mixer1.inlet[2]);
connect(Mixer1.outlet,MatStm1.inlet);
MatStm5.P = 101325;
MatStm5.T = 300;
MatStm5.compMolFrac[1,:] = {0.9, 0.1};
MatStm5.totMolFlo[1] = 100;
MatStm4.P = 101325;
MatStm4.T = 300;
MatStm4.compMolFrac[1,:] = {0.8, 0.2};
MatStm4.totMolFlo[1] = 90;
end mixer1;
