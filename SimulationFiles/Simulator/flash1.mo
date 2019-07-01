model flash1
parameter Simulator.Files.Chemsep_Database.Water Water; 
parameter Simulator.Files.Chemsep_Database.Ethanol Ethanol; 
model fls1
extends Simulator.Unit_Operations.Flash;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end fls1;
fls1 Flash1(NOC = 2,comp = {Water, Ethanol});
model ms5
extends Simulator.Streams.Material_Stream;
extends Simulator.Files.Thermodynamic_Packages.Raoults_Law;
end ms5;
ms5 MatStm5(NOC = 2,comp = {Water, Ethanol});
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
equation
connect(MatStm1.outlet,Flash1.feed);
connect(Flash1.vapor,MatStm5.inlet);
connect(Flash1.liquid,MatStm2.inlet);
MatStm1.P = 101325;
MatStm1.T = 314.8885353767533;
MatStm1.compMolFrac[1,:] = {0.55, 0.45};
MatStm1.totMolFlo[1] = 200;
end flash1;
