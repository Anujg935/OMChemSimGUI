model Flowsheet
parameter Simulator.Files.Chemsep_Database.Glycerol Glycerol; 
model ms1
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms1;
ms1 MatStm1(NOC = 1,comp = {Glycerol});
model ms2
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms2;
ms2 MatStm2(NOC = 1,comp = {Glycerol});
Simulator.Streams.Energy_Stream EngStm;
Simulator.Unit_Operations.Heater Heater1(NOC = 1,comp = {Glycerol},pressDrop = 101231,eff = 1);
equation
MatStm2.P = 101324;
MatStm2.T = 300;
MatStm2.compMolFrac[1,:] = {1.0};
MatStm2.totMolFlo[1] = 100;
connect(MatStm2.outlet,Heater1.inlet);
connect(Heater1.outlet,MatStm1.inlet);
connect(EngStm.outlet,Heater1.energy);
Heater1.heatAdd=200000000;
end Flowsheet;
