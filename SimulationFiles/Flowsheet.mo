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
ms MatStm4(NOC = 2,comp = {Krypton, Formaldehyde});
ms MatStm5(NOC = 2,comp = {Krypton, Formaldehyde});
Simulator.Unit_Operations.Splitter Splitter1(NOC = 2,comp = {Krypton, Formaldehyde},calcType = "Molar_Flow",NO=2);
Simulator.Unit_Operations.Mixer Mixer1(NOC = 2,comp = {Krypton, Formaldehyde},outPress = "Inlet_Average",NI=2);
equation

MatStm4.P = 101325;
MatStm4.T = 325;
MatStm4.compMolFrac[1,:] = {0.7,0.3};
MatStm4.totMolFlo[1] = 90;
MatStm5.P = 101325;
MatStm5.T = 320;
MatStm5.compMolFrac[1,:] = {0.1,0.9};
MatStm5.totMolFlo[1] = 80;
connect(MatStm2.inlet,Splitter1.outlet[1]);
connect(MatStm1.inlet,Splitter1.outlet[2]);
connect(Splitter1.inlet,MatStm3.outlet);
Splitter1.specVal ={50, 50};
connect(MatStm5.outlet,Mixer1.inlet[1]);
connect(MatStm4.outlet,Mixer1.inlet[2]);
connect(Mixer1.outlet,MatStm3.inlet);
end Flowsheet;
