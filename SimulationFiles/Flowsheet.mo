model Flowsheet
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
Simulator.Streams.Energy_Stream EngStm;
Simulator.Unit_Operations.Cooler Cooler1(NOC = 2,comp = {Water, Ethanol},pressDrop = 101200,eff = 1);
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
connect(MatStm2.outlet,Cooler1.inlet);
connect(Cooler1.outlet,MatStm1.inlet);
connect(EngStm.outlet,Cooler1.energy);
MatStm2.P = 101325;
MatStm2.T = 310;
MatStm2.compMolFrac[1,:] = {0.6,0.4};
MatStm2.totMolFlo[1] = 80;
Cooler1.heatRem = 20000;
end Flowsheet;
