model Flowsheet
model ms
extends Simulator.Streams.Material_Stream;
 extends Simulator.Files.Thermodynamic_Packages.UNIFAC;
end ms;
parameter Simulator.Files.Chemsep_Database.Hydrogen Hydrogen; 
parameter Simulator.Files.Chemsep_Database.Formaldehyde Formaldehyde; 
ms MatStm1(NOC = 2,comp = {Hydrogen, Formaldehyde},P(start = 101325),T(start = 320));
ms MatStm2(NOC = 2,comp = {Hydrogen, Formaldehyde},P(start = 101325),T(start = 300));
ms MatStm3(NOC = 2,comp = {Hydrogen, Formaldehyde},P(start = 101325),T(start = 310));
Simulator.Unit_Operations.Mixer Mixer1(NOC = 2,comp = {Hydrogen, Formaldehyde},outPress = "Inlet_Average",NI=2);
equation
MatStm1.P = 101325;
MatStm1.T = 320;
MatStm1.compMolFrac[1,:] = {0.9, 0.1};
MatStm1.totMolFlo[1] = 70;
MatStm3.P = 101325;
MatStm3.T = 310;
MatStm3.compMolFrac[1,:] = {0.3, 0.7};
MatStm3.totMolFlo[1] = 80;
connect(MatStm3.outlet,Mixer1.inlet[1]);
connect(MatStm1.outlet,Mixer1.inlet[2]);
connect(Mixer1.outlet,MatStm2.inlet);
end Flowsheet;
