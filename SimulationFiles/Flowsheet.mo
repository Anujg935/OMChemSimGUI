model Flowsheet
parameter Simulator.Files.Chemsep_Database.Benzene Benzene; 
parameter Simulator.Files.Chemsep_Database.Toluene Toluene; 
Simulator.Streams.Energy_Stream EngStm;
Simulator.Unit_Operations.Compound_Separator CompSep1(NOC = 2,comp = {Benzene, Toluene},sepFact = {"Molar_Flow", "Mass_Flow"},sepStrm = 3, sepFactVal = [20, 1500]);
model ms1
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms1;
ms1 MatStm1(NOC = 2,comp = {Benzene, Toluene});
model ms2
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms2;
ms2 MatStm2(NOC = 2,comp = {Benzene, Toluene});
model ms3
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms3;
ms3 MatStm3(NOC = 2,comp = {Benzene, Toluene});
equation
connect(MatStm1.outlet,CompSep1.inlet);
connect(MatStm2.inlet,CompSep1.outlet1);
connect(MatStm3.inlet,CompSep1.outlet2);
connect(EngStm.outlet,CompSep1.energy);
CompSep1.sepFactVal= {20, 1500};
MatStm1.P = 101325;
MatStm1.T = 290;
MatStm1.compMolFrac[1,:] = {0.9,0.1};
MatStm1.totMolFlo[1] = 100;
end Flowsheet;
