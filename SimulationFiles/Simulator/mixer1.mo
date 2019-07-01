model mixer1
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
Simulator.Unit_Operations.Mixer Mixer1(NOC = 2,comp = {Water, Ethanol},outPress = "Inlet_Average",NI=2);
model ms4
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms4;
ms4 MatStm4(NOC = 2,comp = {Water, Ethanol});
model ms3
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms3;
ms3 MatStm3(NOC = 2,comp = {Water, Ethanol});
model ms5
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms5;
ms5 MatStm5(NOC = 2,comp = {Water, Ethanol});
equation
connect(MatStm3.outlet,Mixer1.inlet[1]);
connect(MatStm5.outlet,Mixer1.inlet[2]);
connect(Mixer1.outlet,MatStm4.inlet);
MatStm3.P = 101325;
MatStm3.T = 310;
MatStm3.compMolFrac[1,:] = {0.8, 0.2};
MatStm3.totMolFlo[1] = 100;
MatStm5.P = 101325;
MatStm5.T = 310;
MatStm5.compMolFrac[1,:] = {0.5, 0.5};
MatStm5.totMolFlo[1] = 100;
end mixer1;
