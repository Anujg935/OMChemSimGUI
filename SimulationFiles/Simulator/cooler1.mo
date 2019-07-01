model cooler1
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
Simulator.Streams.Energy_Stream EngStm;
Simulator.Unit_Operations.Cooler Cooler1(NOC = 2,comp = {Water, Ethanol},pressDrop = 10000,eff = 1);
model ms2
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms2;
ms2 MatStm2(NOC = 2,comp = {Water, Ethanol});
Simulator.Streams.Energy_Stream EngStm;
model ms3
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms3;
ms3 MatStm3(NOC = 2,comp = {Water, Ethanol});
equation
connect(MatStm3.outlet,Cooler1.inlet);
connect(Cooler1.outlet,MatStm2.inlet);
connect(EngStm.outlet,Cooler1.energy);
Cooler1.heatRem=20000;
MatStm3.P = 101325;
MatStm3.T = 315;
MatStm3.compMolFrac[1,:] = {0.9, 0.1};
MatStm3.totMolFlo[1] = 100;
end cooler1;
