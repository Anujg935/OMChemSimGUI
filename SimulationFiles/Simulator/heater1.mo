model heater1
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
Simulator.Streams.Energy_Stream EngStm;
Simulator.Unit_Operations.Heater Heater1(NOC = 2,comp = {Water, Ethanol},pressDrop = 10132,eff = 1);
model ms4
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms4;
ms4 MatStm4(NOC = 2,comp = {Water, Ethanol});
Simulator.Streams.Energy_Stream EngStm;
model ms3
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms3;
ms3 MatStm3(NOC = 2,comp = {Water, Ethanol});
equation
connect(MatStm3.outlet,Heater1.inlet);
connect(Heater1.outlet,MatStm4.inlet);
connect(EngStm.outlet,Heater1.energy);
Heater1.heatAdd=200000;
MatStm3.P = 101325;
MatStm3.T = 360.0426291250026;
MatStm3.compMolFrac[1,:] = {0.4, 0.6000000000000001};
MatStm3.totMolFlo[1] = 200;
end heater1;
