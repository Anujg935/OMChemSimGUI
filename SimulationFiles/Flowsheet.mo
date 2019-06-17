model Flowsheet
model ms
 extends Simulator.Streams.Material_Stream;
 extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms;
parameter Simulator.Files.Chemsep_Database.Xenon Xenon; 
parameter Simulator.Files.Chemsep_Database.Styrene Styrene; 
parameter Simulator.Files.Chemsep_Database.Hydrogen Hydrogen; 
ms MatStm1(NOC = 3,comp = {Xenon, Styrene, Hydrogen},P(start = 101325),T(start = 270));
ms MatStm2(NOC = 3,comp = {Xenon, Styrene, Hydrogen},P(start = 101325),T(start = 330));
ms MatStm3(NOC = 3,comp = {Xenon, Styrene, Hydrogen},P(start = 101325),T(start = 350));
Simulator.Unit_Operations.Mixer Mixer1(NOC = 3,comp = {Xenon, Styrene, Hydrogen},outPress = "Inlet_Average",NI=2);
equation
MatStm1.P = 101325;
MatStm1.T = 270;
MatStm1.compMolFrac[1,:] = {0.1, 0.4, 0.5};
MatStm1.totMolFlo[1] = 100;
MatStm2.P = 101325;
MatStm2.T = 330;
MatStm2.compMolFrac[1,:] = {0.5, 0.1, 0.4};
MatStm2.totMolFlo[1] = 80;
connect(MatStm2.outlet,Mixer1.inlet[1]);
connect(MatStm1.outlet,Mixer1.inlet[2]);
connect(Mixer1.outlet,MatStm3.inlet);
end Flowsheet;
