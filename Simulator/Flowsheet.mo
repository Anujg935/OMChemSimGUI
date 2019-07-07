model Flowsheet
<<<<<<< HEAD
parameter Simulator.Files.Chemsep_Database.Propylene Propylene; 
=======
parameter Simulator.Files.Chemsep_Database.Water Water; 
>>>>>>> a7baca9aeab4479f0602b9d088ac515256daee29
model ms1
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms1;
<<<<<<< HEAD
ms1 MatStm1(NOC = 1,comp = {Propylene});
equation
MatStm1.P = 101324;
MatStm1.T = 300;
MatStm1.compMolFrac[1,:] = {1.0};
=======
ms1 MatStm1(NOC = 1,comp = {Water});
equation
MatStm1.P = 101325;
MatStm1.T = 310;
MatStm1.compMolFrac[1,:] = {1};
>>>>>>> a7baca9aeab4479f0602b9d088ac515256daee29
MatStm1.totMolFlo[1] = 100;
end Flowsheet;
