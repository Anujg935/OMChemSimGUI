model mixer3
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
Simulator.Unit_Operations.Mixer Mixer3(NOC = 2,comp = {Water, Ethanol},outPress = "Inlet_Average",NI=2);
model ms8
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms8;
ms8 MatStm8(NOC = 2,comp = {Water, Ethanol});
model ms7
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms7;
ms7 MatStm7(NOC = 2,comp = {Water, Ethanol});
model ms6
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms6;
ms6 MatStm6(NOC = 2,comp = {Water, Ethanol});
equation
connect(MatStm7.outlet,Mixer3.inlet[1]);
connect(MatStm6.outlet,Mixer3.inlet[2]);
connect(Mixer3.outlet,MatStm8.inlet);
MatStm7.P = 101325;
MatStm7.T = 3201;
MatStm7.compMolFrac[1,:] = {0.6, 0.4};
MatStm7.totMolFlo[1] = 100;
MatStm6.P = 101325;
MatStm6.T = 310;
MatStm6.compMolFrac[1,:] = {0.5, 0.5};
MatStm6.totMolFlo[1] = 100;
end mixer3;
