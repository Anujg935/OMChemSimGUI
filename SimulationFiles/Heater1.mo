model Heater1
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
Simulator.Streams.Energy_Stream EngStm;
Simulator.Unit_Operations.Heater Heater1(NOC = 2,comp = {Water, Ethanol},pressDrop = 101100,eff = 1);
model ms4
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms4;
ms4 MatStm4(NOC = 2,comp = {Water, Ethanol});
model ms1
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms1;
ms1 MatStm1(NOC = 2,comp = {Water, Ethanol});
equation
connect(MatStm1.outlet,Heater1.inlet);
connect(Heater1.outlet,MatStm4.inlet);
connect(EngStm.outlet,Heater1.energy);
Heater1.heatAdd=200000;
MatStm1.P = 101325;
MatStm1.T = 330;
MatStm1.compMolFrac[1,:] = {0.6, 0.4};
MatStm1.totMolFlo[1] = 100;
end Heater1;
