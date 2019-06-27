model Mixer1
<<<<<<< HEAD
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
Simulator.Unit_Operations.Mixer Mixer1(NOC = 2,comp = {Water, Ethanol},outPress = "Inlet_Average",NI=2);
=======
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
parameter Simulator.Files.Chemsep_Database.Propylene Propylene; 
Simulator.Unit_Operations.Mixer Mixer1(NOC = 2,comp = {Ethanol, Propylene},outPress = "Inlet_Average",NI=2);
>>>>>>> 59c85481d93186a69b42236ee9a9fc7a72ee58af
model ms1
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms1;
<<<<<<< HEAD
ms1 MatStm1(NOC = 2,comp = {Water, Ethanol});
model ms2
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms2;
ms2 MatStm2(NOC = 2,comp = {Water, Ethanol});
=======
ms1 MatStm1(NOC = 2,comp = {Ethanol, Propylene});
>>>>>>> 59c85481d93186a69b42236ee9a9fc7a72ee58af
model ms3
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms3;
<<<<<<< HEAD
ms3 MatStm3(NOC = 2,comp = {Water, Ethanol});
equation
connect(MatStm2.outlet,Mixer1.inlet[1]);
connect(MatStm3.outlet,Mixer1.inlet[2]);
connect(Mixer1.outlet,MatStm1.inlet);
MatStm1.P = 101325;
MatStm1.T = 300;
MatStm1.compMolFrac[1,:] = {{, 0};
MatStm1.totMolFlo[1] = 100;
MatStm2.P = 101325;
MatStm2.T = 300;
MatStm2.compMolFrac[1,:] = {{, 0};
MatStm2.totMolFlo[1] = 100;
MatStm3.P = 101325;
MatStm3.T = 300;
MatStm3.compMolFrac[1,:] = {{, 0};
MatStm3.totMolFlo[1] = 100;
=======
ms3 MatStm3(NOC = 2,comp = {Ethanol, Propylene});
model ms2
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms2;
ms2 MatStm2(NOC = 2,comp = {Ethanol, Propylene});
equation
connect(MatStm3.outlet,Mixer1.inlet[1]);
connect(MatStm2.outlet,Mixer1.inlet[2]);
connect(Mixer1.outlet,MatStm1.inlet);
MatStm3.P = 101231;
MatStm3.T = 300;
MatStm3.compMolFrac[1,:] = {0.9,0.1};
MatStm3.totMolFlo[1] = 100;
MatStm2.P = 10234;
MatStm2.T = 300;
MatStm2.compMolFrac[1,:] = {0.9,0.1};
MatStm2.totMolFlo[1] = 90;
>>>>>>> 59c85481d93186a69b42236ee9a9fc7a72ee58af
end Mixer1;
