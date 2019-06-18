model Flowsheet
model ms
 extends Simulator.Streams.Material_Stream;
 extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms;
parameter Simulator.Files.Chemsep_Database.Hydrogen Hydrogen; 
parameter Simulator.Files.Chemsep_Database.Acetylene Acetylene; 
ms MatStm1(NOC = 2,comp = {Hydrogen, Acetylene},P(start = 101325),T(start = 330));
ms MatStm2(NOC = 2,comp = {Hydrogen, Acetylene},P(start = 101325),T(start = 270));
ms MatStm3(NOC = 2,comp = {Hydrogen, Acetylene},P(start = 101325),T(start = 290));
Simulator.Unit_Operations.Mixer Mixer1(NOC = 2,comp = {Hydrogen, Acetylene},outPress = "Inlet_Average",NI=2);
equation
MatStm1.P = 101325;
MatStm1.T = 330;
MatStm1.compMolFrac[1,:] = {0.6, 0.4};
MatStm1.totMolFlo[1] = 90;
MatStm3.P = 101325;
MatStm3.T = 290;
MatStm3.compMolFrac[1,:] = {0.1, 0.9};
MatStm3.totMolFlo[1] = 80;
connect(MatStm3.outlet,Mixer1.inlet[1]);
connect(MatStm1.outlet,Mixer1.inlet[2]);
connect(Mixer1.outlet,MatStm2.inlet);
end Flowsheet;
