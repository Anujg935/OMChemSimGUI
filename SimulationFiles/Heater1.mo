model Heater1
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
parameter Simulator.Files.Chemsep_Database.Water Water; 
Simulator.Streams.Energy_Stream EngStm;
Simulator.Unit_Operations.Heater Heater1(NOC = 2,comp = {Ethanol, Water},pressDrop = 100232,eff = 1);
model ms4
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms4;
ms4 MatStm4(NOC = 2,comp = {Ethanol, Water});
model ms1
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms1;
ms1 MatStm1(NOC = 2,comp = {Ethanol, Water});
equation
connect(MatStm1.outlet,Heater1.inlet);
connect(Heater1.outlet,MatStm4.inlet);
connect(EngStm.outlet,Heater1.energy);
Heater1.heatAdd = 200000;
MatStm1.P = 101325;
MatStm1.T = 316.1191510689686;
MatStm1.compMolFrac[1,:] = {0.5, 0.5};
MatStm1.totMolFlo[1] = 200;
end Heater1;
