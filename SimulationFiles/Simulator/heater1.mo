model heater1
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
Simulator.Streams.Energy_Stream EngStm;
Simulator.Unit_Operations.Heater Heater1(NOC = 2,comp = {Water, Ethanol},pressDrop = 10000,eff = 1);
model ms1
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms1;
ms1 MatStm1(NOC = 2,comp = {Water, Ethanol});
Simulator.Streams.Energy_Stream EngStm;
model ms4
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms4;
ms4 MatStm4(NOC = 2,comp = {Water, Ethanol});
equation
connect(MatStm4.outlet,Heater1.inlet);
connect(Heater1.outlet,MatStm1.inlet);
connect(EngStm.outlet,Heater1.energy);
Heater1.heatAdd=20000;
MatStm4.P = 101325;
MatStm4.T = 309.9999999999999;
MatStm4.compMolFrac[1,:] = {0.65, 0.35};
MatStm4.totMolFlo[1] = 200;
end heater1;
