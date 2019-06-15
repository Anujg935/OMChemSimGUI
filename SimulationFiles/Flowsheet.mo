model Flowsheet
model ms
 extends Simulator.Streams.Material_Stream;
 extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms;
parameter Simulator.Files.Chemsep_Database.Glycerol Glycerol; 
parameter Simulator.Files.Chemsep_Database.Hexanal Hexanal; 
parameter Simulator.Files.Chemsep_Database.Fluorene Fluorene; 
Simulator.Unit_Operations.Mixer Mixer1(NOC = 3,comp = {Glycerol, Hexanal, Fluorene},outPress = "Inlet_Average",NI=2);
ms MatStm1(NOC = 3,comp = {Glycerol, Hexanal, Fluorene},P(start = 101325),T(start = 300));
ms MatStm2(NOC = 3,comp = {Glycerol, Hexanal, Fluorene},P(start = 101325),T(start = 300));
ms MatStm3(NOC = 3,comp = {Glycerol, Hexanal, Fluorene},P(start = 101325),T(start = 300));
equation
connect(MatStm3.outlet,Mixer1.inlet[1]);
connect(MatStm2.outlet,Mixer1.inlet[2]);
connect(Mixer1.outlet,MatStm1.inlet);
MatStm2.P = 101325;
MatStm2.T = 300;
MatStm2.compMolFrac[1,:] = {0.5, 0.4, 0.1};
MatStm2.totMolFlo[1] = 100;
MatStm3.P = 101325;
MatStm3.T = 300;
MatStm3.compMolFrac[1,:] = {0.5, 0.4, 0.1};
MatStm3.totMolFlo[1] = 100;
end Flowsheet;
