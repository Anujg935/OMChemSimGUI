model Heater1
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
Simulator.Streams.Energy_Stream EngStm;
Simulator.Unit_Operations.Heater Heater1(NOC = 2,comp = {Water, Ethanol},pressDrop = 101213,eff = 1);
model ms5
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms5;
ms5 MatStm5(NOC = 2,comp = {Water, Ethanol});
model ms2
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms2;
ms2 MatStm2(NOC = 2,comp = {Water, Ethanol});
equation
connect(MatStm2.outlet,Heater1.inlet);
connect(Heater1.outlet,MatStm5.inlet);
connect(EngStm.outlet,Heater1.energy);
Heater1.heatAdd=200000;
MatStm2.P = 101325;
MatStm2.T = 314.3286659606228;
MatStm2.compMolFrac[1,:] = {0.55, 0.6};
MatStm2.totMolFlo[1] = 200;
end Heater1;
