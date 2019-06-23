model Flowsheet
model ms
extends Simulator.Streams.Material_Stream;
 extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms;
parameter Simulator.Files.Chemsep_Database.Sulfolane Sulfolane; 
parameter Simulator.Files.Chemsep_Database.Xenon Xenon; 
ms MatStm1(NOC = 2,comp = {Sulfolane, Xenon});
ms MatStm2(NOC = 2,comp = {Sulfolane, Xenon});
Simulator.Unit_Operations.Mixer Mixer1(NOC = 2,comp = {Sulfolane, Xenon},outPress = "Inlet_Average",NI=2);
ms MatStm3(NOC = 2,comp = {Sulfolane, Xenon});
Simulator.Unit_Operations.Splitter Splitter1(NOC = 2,comp = {Sulfolane, Xenon},calcType = "Molar_Flow",NO=2);
ms MatStm4(NOC = 2,comp = {Sulfolane, Xenon});
ms MatStm5(NOC = 2,comp = {Sulfolane, Xenon});
equation
MatStm1.P = 101231;
MatStm1.T = 213111;
MatStm1.compMolFrac[1,:] = {0.5,0.5};
MatStm1.totMolFlo[1] = 100;
MatStm2.P = 101023;
MatStm2.T = 200;
MatStm2.compMolFrac[1,:] = {0.5,0.5};
MatStm2.totMolFlo[1] = 120;
connect(MatStm2.outlet,Mixer1.inlet[1]);
connect(MatStm1.outlet,Mixer1.inlet[2]);
connect(Mixer1.outlet,MatStm3.inlet);
connect(MatStm4.inlet,Splitter1.outlet[1]);
connect(MatStm5.inlet,Splitter1.outlet[2]);
connect(Splitter1.inlet,MatStm3.outlet);
Splitter1.specVal ={50, 50};
end Flowsheet;
