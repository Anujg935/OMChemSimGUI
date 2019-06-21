model Flowsheet
model ms
extends Simulator.Streams.Material_Stream;
 extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms;
parameter Simulator.Files.Chemsep_Database.Formaldehyde Formaldehyde; 
parameter Simulator.Files.Chemsep_Database.Krypton Krypton; 
Simulator.Unit_Operations.Mixer Mixer1(NOC = 2,comp = {Formaldehyde, Krypton},outPress = "Inlet_Average",NI=2);
ms MatStm1(NOC = 2,comp = {Formaldehyde, Krypton});
ms MatStm2(NOC = 2,comp = {Formaldehyde, Krypton});
ms MatStm3(NOC = 2,comp = {Formaldehyde, Krypton});
equation
connect(MatStm1.outlet,Mixer1.inlet[1]);
connect(MatStm2.outlet,Mixer1.inlet[2]);
connect(Mixer1.outlet,MatStm3.inlet);
MatStm1.P = 101325;
MatStm1.T = 280;
MatStm1.compMolFrac[1,:] = {0.2,0.8};
MatStm1.totMolFlo[1] = 80;
MatStm2.P = 101325;
MatStm2.T = 321;
MatStm2.compMolFrac[1,:] = {0.2,0.8};
MatStm2.totMolFlo[1] = 70;
end Flowsheet;
