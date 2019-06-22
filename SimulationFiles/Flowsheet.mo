model Flowsheet
model ms
extends Simulator.Streams.Material_Stream;
 extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms;
parameter Simulator.Files.Chemsep_Database.Krypton Krypton; 
parameter Simulator.Files.Chemsep_Database.Formaldehyde Formaldehyde; 
ms MatStm1(NOC = 2,comp = {Krypton, Formaldehyde});
ms MatStm2(NOC = 2,comp = {Krypton, Formaldehyde});
ms MatStm3(NOC = 2,comp = {Krypton, Formaldehyde});
Simulator.Unit_Operations.Mixer Mixer1(NOC = 2,comp = {Krypton, Formaldehyde},outPress = "Inlet_Average",NI=2);
equation
connect(MatStm3.outlet,Mixer1.inlet[1]);
connect(MatStm2.outlet,Mixer1.inlet[2]);
connect(Mixer1.outlet,MatStm1.inlet);
end Flowsheet;
