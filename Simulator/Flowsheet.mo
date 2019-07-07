model Flowsheet
parameter Simulator.Files.Chemsep_Database.Propylene Propylene; 
model ms1
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms1;
ms1 MatStm1(NOC = 1,comp = {Propylene});
equation
MatStm1.P = 101324;
MatStm1.T = 300;
MatStm1.compMolFrac[1,:] = {1.0};
MatStm1.totMolFlo[1] = 100;
end Flowsheet;
