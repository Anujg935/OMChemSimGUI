model Flowsheet
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
Simulator.Streams.Energy_Stream EngStm;
Simulator.Unit_Operations.Heater Heater1(NOC = 2,comp = {Water, Ethanol},pressDrop = 101324,eff = 1);
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
equation
connect(MatStm2.outlet,Heater1.inlet);
connect(Heater1.outlet,MatStm1.inlet);
connect(EngStm.outlet,Heater1.energy);
Heater1.heatAdd=2000000;
MatStm2.P = 101321;
MatStm2.T = 300;
MatStm2.compMolFrac[1,:] = {0.2,0.8};
MatStm2.totMolFlo[1] = 100;
end Flowsheet;
