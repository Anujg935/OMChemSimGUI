model Mixer1
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
Simulator.Unit_Operations.Mixer Mixer1(NOC = 2,comp = {Water, Ethanol},outPress = "Inlet_Average",NI=2);
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
model ms3
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms3;
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
end Mixer1;
