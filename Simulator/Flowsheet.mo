model Flowsheet
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
model ms1
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms1;
ms1 MatStm1(NOC = 2,comp = {Water, Ethanol});
equation
MatStm1.P = 101325;
MatStm1.T = 320;
MatStm1.compMolFrac[1,:] = {0.5, 0.5};
MatStm1.totMolFlo[1] = 100;
end Flowsheet;
