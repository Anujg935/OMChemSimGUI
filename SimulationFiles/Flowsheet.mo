model Flowsheet
parameter Simulator.Files.Chemsep_Database.Argon Argon; 
parameter Simulator.Files.Chemsep_Database.Sulfurtrioxide sulfurtrioxide; 
parameter Simulator.Files.Chemsep_Database.Nitricacid nitricacid; 
Simulator.Unit_Operations.Mixer Mixer1(NOC = 3,comp = {Argon, sulfurtrioxide, nitricacid},outPress = "Inlet_Average",NI=2);
Simulator.Streams.Mat_Stm_RL MatStm1(NOC = 3,comp = {Argon, sulfurtrioxide, nitricacid},P(start = 101325),T(start = 300));
Simulator.Streams.Mat_Stm_RL MatStm2(NOC = 3,comp = {Argon, sulfurtrioxide, nitricacid},P(start = 101325),T(start = 300));
Simulator.Streams.Mat_Stm_RL MatStm3(NOC = 3,comp = {Argon, sulfurtrioxide, nitricacid},P(start = 101325),T(start = 300));
equation
connect(MatStm3.outlet,Mixer1.inlet[1]);
connect(MatStm1.outlet,Mixer1.inlet[2]);
connect(Mixer1.outlet,MatStm2.inlet);
equation
MatStm1.P = 101325;
MatStm1.T = 300;
MatStm1.compMolFrac[1,:] = {0.5, 0.4, 0.1};
MatStm1.totMolFlo[1] = 100;
MatStm2.P = 101325;
MatStm2.T = 300;
MatStm2.compMolFrac[1,:] = {0.5, 0.4, 0.1};
MatStm2.totMolFlo[1] = 100;
MatStm3.P = 101325;
MatStm3.T = 300;
MatStm3.compMolFrac[1,:] = {0.5, 0.4, 0.1};
MatStm3.totMolFlo[1] = 100;
end Flowsheet;
