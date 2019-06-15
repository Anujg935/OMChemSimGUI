model Flowsheet
model ms
 extends Simulator.Streams.Material_Stream;
 extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms;
parameter Simulator.Files.Chemsep_Database.Hydrogen Hydrogen; 
parameter Simulator.Files.Chemsep_Database.Formaldehyde Formaldehyde; 
parameter Simulator.Files.Chemsep_Database.Acetylene Acetylene; 
Simulator.Unit_Operations.Mixer Mixer1(NOC = 3,comp = {Hydrogen, Formaldehyde, Acetylene},outPress = "Inlet_Average",NI=3);
ms MatStm1(NOC = 3,comp = {Hydrogen, Formaldehyde, Acetylene},P(start = 101325),T(start = 300));
ms MatStm2(NOC = 3,comp = {Hydrogen, Formaldehyde, Acetylene},P(start = 101325),T(start = 300));
ms MatStm3(NOC = 3,comp = {Hydrogen, Formaldehyde, Acetylene},P(start = 101325),T(start = 300));
ms MatStm4(NOC = 3,comp = {Hydrogen, Formaldehyde, Acetylene},P(start = 101325),T(start = 300));
equation
connect(MatStm4.outlet,Mixer1.inlet[1]);
connect(MatStm3.outlet,Mixer1.inlet[2]);
connect(MatStm2.outlet,Mixer1.inlet[3]);
connect(Mixer1.outlet,MatStm1.inlet);
MatStm2.P = 101325;
MatStm2.T = 300;
MatStm2.compMolFrac[1,:] = {0.5, 0.4, 0.1};
MatStm2.totMolFlo[1] = 100;
MatStm3.P = 101325;
MatStm3.T = 300;
MatStm3.compMolFrac[1,:] = {0.5, 0.4, 0.1};
MatStm3.totMolFlo[1] = 100;
MatStm4.P = 101325;
MatStm4.T = 300;
MatStm4.compMolFrac[1,:] = {0.5, 0.4, 0.1};
MatStm4.totMolFlo[1] = 100;
end Flowsheet;
