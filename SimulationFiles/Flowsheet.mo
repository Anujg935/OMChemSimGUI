model Flowsheet
parameter Simulator.Files.Chemsep_Database.Hydrogen hydrogen; 
parameter Simulator.Files.Chemsep_Database.Propane propane; 
parameter Simulator.Files.Chemsep_Database.Propylene propylene; 
Simulator.Streams.Mat_Stm_RL MatStm1(NOC = 3,comp = {hydrogen, propane, propylene},P(start = 101325),T(start = 300));
equation
MatStm1.P = 101325;
MatStm1.T = 300;
MatStm1.compMolFrac[1,:] = {0.5, 0.4, 0.1};
MatStm1.totMolFlo[1] = 100;
end Flowsheet;
