model Flowsheet
model ms
extends Simulator.Streams.Material_Stream;
 extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms;
parameter Simulator.Files.Chemsep_Database.Hydrogen Hydrogen; 
parameter Simulator.Files.Chemsep_Database.Phosgene Phosgene; 
ms MatStm1(NOC = 2,comp = {Hydrogen, Phosgene});
ms MatStm2(NOC = 2,comp = {Hydrogen, Phosgene});
ms MatStm3(NOC = 2,comp = {Hydrogen, Phosgene});
ms MatStm4(NOC = 2,comp = {Hydrogen, Phosgene});
ms MatStm5(NOC = 2,comp = {Hydrogen, Phosgene});
Simulator.Unit_Operations.Mixer Mixer1(NOC = 2,comp = {Hydrogen, Phosgene},outPress = "Inlet_Average",NI=2);
Simulator.Unit_Operations.Splitter Splitter1(NOC = 2,comp = {Hydrogen, Phosgene},calcType = "Molar_Flow",NO=2);
equation
MatStm4.P = 101325;
MatStm4.T = 350;
MatStm4.compMolFrac[1,:] = {0.9,0.1};
MatStm4.totMolFlo[1] = 65;
MatStm5.P = 101325;
MatStm5.T = 310;
MatStm5.compMolFrac[1,:] = {0.3,0.7};
MatStm5.totMolFlo[1] = 85;
connect(MatStm4.outlet,Mixer1.inlet[1]);
connect(MatStm5.outlet,Mixer1.inlet[2]);
connect(Mixer1.outlet,MatStm1.inlet);
connect(MatStm3.inlet,Splitter1.outlet[1]);
connect(MatStm2.inlet,Splitter1.outlet[2]);
connect(Splitter1.inlet,MatStm1.outlet);
Splitter1.specVal ={50, 50};
end Flowsheet;
