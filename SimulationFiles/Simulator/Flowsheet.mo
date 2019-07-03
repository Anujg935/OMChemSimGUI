model Flowsheet
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
model ms1
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms1;
ms1 MatStm1(NOC = 2,comp = {Water, Ethanol});
<<<<<<< HEAD
equation
MatStm1.P = 101325;
MatStm1.T = 321;
MatStm1.compMolFrac[1,:] = {0.6, 0.4};
MatStm1.totMolFlo[1] = 100;
=======
model ms2
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms2;
ms2 MatStm2(NOC = 2,comp = {Water, Ethanol});
Simulator.Streams.Energy_Stream EngStmPump1;
Simulator.Unit_Operations.Centrifugal_Pump Pump1(NOC = 2,comp = {Water, Ethanol},eff = 0.75);
equation
MatStm2.P = 101325;
MatStm2.T = 302;
MatStm2.compMolFrac[1,:] = {0.8, 0.2};
MatStm2.totMolFlo[1] = 100;
connect(MatStm2.outlet,Pump1.inlet);
connect(Pump1.outlet,MatStm1.inlet);
connect(EngStmPump1.outlet,Pump1.energy);
Pump1.pressInc=101325;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
end Flowsheet;
