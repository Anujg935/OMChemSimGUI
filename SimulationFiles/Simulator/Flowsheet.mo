model Flowsheet
parameter Simulator.Files.Chemsep_Database.Benzene benzene; 
parameter Simulator.Files.Chemsep_Database.Toluene toluene; 
model ms1
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms1;
ms1 MatStm1(NOC = 2,comp = {benzene, toluene});
model ms2
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms2;
ms2 MatStm2(NOC = 2,comp = {benzene, toluene});
model ms3
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms3;
ms3 MatStm3(NOC = 2,comp = {benzene, toluene});
model Condensor
extends Simulator.Unit_Operations.Distillation_Column.Cond;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end Condensor;
model Tray
extends Simulator.Unit_Operations.Distillation_Column.DistTray;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end Tray;
model Reboiler
extends Simulator.Unit_Operations.Distillation_Column.Reb;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end Reboiler;
model distCol1
extends Simulator.Unit_Operations.Distillation_Column.DistCol;
Condensor condensor(NOC = NOC, comp = comp, condType =condType, boolFeed = boolFeed[1], T(start = 300));
Reboiler reboiler(NOC = NOC, comp = comp, boolFeed = boolFeed[noOfStages]);
Tray tray[noOfStages - 2](each NOC = NOC, each comp = comp, boolFeed = boolFeed[2:noOfStages -1]);
end distCol1;
distCol1 DistCol1(NOC = 2,comp = {benzene, toluene},noOfStages=4,noOfFeeds=1,feedStages={3},condensor.condType="Total");
Simulator.Streams.Energy_Stream EngStm1DistCol1;
Simulator.Streams.Energy_Stream EngStm2DistCol1;
equation
MatStm3.P = 101325;
MatStm3.T = 300;
MatStm3.compMolFrac[1,:] = {0.5, 0.5};
MatStm3.totMolFlo[1] = 100;
connect(DistCol1.condensor_duty,EngStm1DistCol1.inlet);
connect(DistCol1.reboiler_duty, EngStm2DistCol1.inlet);
connect(DistCol1.distillate, MatStm1.inlet);
connect(DistCol1.bottoms, MatStm2.inlet);
connect(MatStm3.outlet, DistCol1.feed[1]);
MatStm2.totMolFlow[1] = 50;
DistCol1.refluxRatio=2;
end Flowsheet;
