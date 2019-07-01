model heater1
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
Simulator.Streams.Energy_Stream EngStm;
Simulator.Unit_Operations.Heater Heater1(NOC = 2,comp = {Water, Ethanol},pressDrop = 10000,eff = 1);
model ms3
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms3;
ms3 MatStm3(NOC = 2,comp = {Water, Ethanol});
Simulator.Streams.Energy_Stream EngStm;
model ms1
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms1;
ms1 MatStm1(NOC = 2,comp = {Water, Ethanol});
equation
connect(MatStm1.outlet,Heater1.inlet);
connect(Heater1.outlet,MatStm3.inlet);
connect(EngStm.outlet,Heater1.energy);
Heater1.heatAdd=20000;
MatStm1.P = 101325;
MatStm1.T = 310;
MatStm1.compMolFrac[1,:] = {0.55, 0.45};
MatStm1.totMolFlo[1] = 200;
end heater1;
