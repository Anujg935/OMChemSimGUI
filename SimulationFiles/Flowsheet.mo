model Flowsheet
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol;
parameter Simulator.Files.Chemsep_Database.Methanol m;
Simulator.Unit_Operations.Valve Valve1(NOC = 2,comp = {Water, Ethanol,m});
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
connect(MatStm1.outlet,Valve1.inlet);
connect(Valve1.outlet,MatStm2.inlet);
Valve1.pressDrop = 101325;
MatStm1.P = 101325;
MatStm1.T = 310;
MatStm1.compMolFrac[1,:] = {0.3,0.6,0.1};
MatStm1.totMolFlo[1] = 95;
end Flowsheet;
