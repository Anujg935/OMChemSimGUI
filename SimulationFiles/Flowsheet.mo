model Flowsheet
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
Simulator.Streams.Energy_Stream EngStm;
Simulator.Unit_Operations.Cooler Cooler1(NOC = 2,comp = {Water, Ethanol},pressDrop = 101100,eff = 1);
model ms1
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms1;
ms1 MatStm1(NOC = 2,comp = {Water, Ethanol});
model ms3
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms3;
ms3 MatStm3(NOC = 2,comp = {Water, Ethanol});
equation
connect(MatStm1.outlet,Cooler1.inlet);
connect(Cooler1.outlet,MatStm3.inlet);
connect(EngStm.outlet,Cooler1.energy);
Cooler1.heatRem=20000;
MatStm1.P = 101325;
MatStm1.T = 300;
MatStm1.compMolFrac[1,:] = {0.5,0.5};
MatStm1.totMolFlo[1] = 100;
end Flowsheet;
