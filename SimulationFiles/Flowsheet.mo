model Flowsheet
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
parameter Simulator.Files.Chemsep_Database.Water Water; 
Simulator.Streams.Energy_Stream EngStm;
Simulator.Unit_Operations.Compound_Separator CompSep1(NOC = 2,comp = {Ethanol, Water},sepFact = {"Molar_Flow", "Mass_Flow"},sepStrm = 3, sepFactVal = [20,1500]);
model ms1
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms1;
ms1 MatStm1(NOC = 2,comp = {Ethanol, Water});
model ms2
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms2;
ms2 MatStm2(NOC = 2,comp = {Ethanol, Water});
model ms3
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms3;
ms3 MatStm3(NOC = 2,comp = {Ethanol, Water});
equation
connect(MatStm1.outlet,CompSep1.inlet);
connect(MatStm3.inlet,CompSep1.outlet1);
connect(MatStm2.inlet,CompSep1.outlet2);
connect(EngStm.outlet,CompSep1.energy);
CompSep1.sepFactVal= {20,1500};
MatStm1.P = 101325;
MatStm1.T = 310;
MatStm1.compMolFrac[1,:] = {0.5,0.5};
MatStm1.totMolFlo[1] = 100;
end Flowsheet;
