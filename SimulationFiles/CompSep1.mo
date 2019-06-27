model CompSep1
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
Simulator.Streams.Energy_Stream EngStm;
Simulator.Unit_Operations.Compound_Separator CompSep1(NOC = 2,comp = {Water, Ethanol},sepFact = ['Molar_Flow','Mass_Flow'],sepStrm = 2, sepFactVal = [20,1500]);
model ms2
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms2;
ms2 MatStm2(NOC = 2,comp = {Water, Ethanol});
model ms1
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms1;
ms1 MatStm1(NOC = 2,comp = {Water, Ethanol});
model ms3
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms3;
ms3 MatStm3(NOC = 2,comp = {Water, Ethanol});
equation
connect(MatStm3.outlet,CompSep1.inlet);
connect(MatStm2.inlet,CompSep1.outlet1);
connect(MatStm1.inlet,CompSep1.outlet2);
connect(EngStm.outlet,CompSep1.energy);
CompSep1.sepFactVal= {20,1500};
MatStm2.P = 101325;
MatStm2.T = 300;
MatStm2.compMolFrac[1,:] = {{, 0};
MatStm2.totMolFlo[1] = 100;
MatStm1.P = 101325;
MatStm1.T = 300;
MatStm1.compMolFrac[1,:] = {{, 0};
MatStm1.totMolFlo[1] = 100;
MatStm3.P = 101325;
MatStm3.T = 300;
MatStm3.compMolFrac[1,:] = {{, 0};
MatStm3.totMolFlo[1] = 100;
end CompSep1;
