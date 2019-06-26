/* Linearization */
#include "Flowsheet_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

const char *Flowsheet_linear_model_frame()
{
  return "model linear_Flowsheet\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer p = 0 \"number of inputs\";\n  parameter Integer q = 0 \"number of outputs\";\n"
  "\n"
  "  parameter Real x0[n] = %s;\n"
  "  parameter Real u0[p] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = zeros(n, n);%s\n"
  "  parameter Real B[n, p] = zeros(n, p);%s\n"
  "  parameter Real C[q, n] = zeros(q, n);%s\n"
  "  parameter Real D[q, p] = zeros(q, p);%s\n"
  "\n"
  "  Real x[n];\n"
  "  input Real u[p];\n"
  "  output Real y[q];\n"
  "\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_Flowsheet;\n";
}
const char *Flowsheet_linear_model_datarecovery_frame()
{
  return "model linear_Flowsheet\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer p = 0 \"number of inputs\";\n  parameter Integer q = 0 \"number of outputs\";\n  parameter Integer nz = 63 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[0] = %s;\n"
  "  parameter Real u0[0] = %s;\n"
  "  parameter Real z0[63] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = zeros(n, n);%s\n"
  "  parameter Real B[n, p] = zeros(n, p);%s\n"
  "  parameter Real C[q, n] = zeros(q, n);%s\n"
  "  parameter Real D[q, p] = zeros(q, p);%s\n"
  "  parameter Real Cz[nz, n] = zeros(nz, n);%s\n"
  "  parameter Real Dz[nz, p] = zeros(nz, p);%s\n"
  "\n"
  "  Real x[n];\n"
  "  input Real u[p];\n"
  "  output Real y[q];\n"
  "  output Real z[nz];\n"
  "\n"
  "  Real 'z_MatStm1.K[1]' = z[1];\n""  Real 'z_MatStm1.MW[1]' = z[2];\n""  Real 'z_MatStm1.MW[2]' = z[3];\n""  Real 'z_MatStm1.MW[3]' = z[4];\n""  Real 'z_MatStm1.P' = z[5];\n""  Real 'z_MatStm1.Pbubl' = z[6];\n""  Real 'z_MatStm1.Pdew' = z[7];\n""  Real 'z_MatStm1.Psat[1]' = z[8];\n""  Real 'z_MatStm1.T' = z[9];\n""  Real 'z_MatStm1.compMasFlo[1,1]' = z[10];\n""  Real 'z_MatStm1.compMasFlo[2,1]' = z[11];\n""  Real 'z_MatStm1.compMasFlo[3,1]' = z[12];\n""  Real 'z_MatStm1.compMasFrac[1,1]' = z[13];\n""  Real 'z_MatStm1.compMasFrac[2,1]' = z[14];\n""  Real 'z_MatStm1.compMasFrac[3,1]' = z[15];\n""  Real 'z_MatStm1.compMolEnth[1,1]' = z[16];\n""  Real 'z_MatStm1.compMolEnth[2,1]' = z[17];\n""  Real 'z_MatStm1.compMolEnth[3,1]' = z[18];\n""  Real 'z_MatStm1.compMolEntr[1,1]' = z[19];\n""  Real 'z_MatStm1.compMolEntr[2,1]' = z[20];\n""  Real 'z_MatStm1.compMolEntr[3,1]' = z[21];\n""  Real 'z_MatStm1.compMolFlo[1,1]' = z[22];\n""  Real 'z_MatStm1.compMolFlo[2,1]' = z[23];\n""  Real 'z_MatStm1.compMolFlo[3,1]' = z[24];\n""  Real 'z_MatStm1.compMolFrac[1,1]' = z[25];\n""  Real 'z_MatStm1.compMolFrac[2,1]' = z[26];\n""  Real 'z_MatStm1.compMolFrac[3,1]' = z[27];\n""  Real 'z_MatStm1.compMolSpHeat[1,1]' = z[28];\n""  Real 'z_MatStm1.compMolSpHeat[2,1]' = z[29];\n""  Real 'z_MatStm1.compMolSpHeat[3,1]' = z[30];\n""  Real 'z_MatStm1.gamma[1]' = z[31];\n""  Real 'z_MatStm1.gammaBubl[1]' = z[32];\n""  Real 'z_MatStm1.gammaDew[1]' = z[33];\n""  Real 'z_MatStm1.liqPhasMasFrac' = z[34];\n""  Real 'z_MatStm1.liqPhasMolFrac' = z[35];\n""  Real 'z_MatStm1.liqfugcoeff_bubl[1]' = z[36];\n""  Real 'z_MatStm1.phasMolEnth[1]' = z[37];\n""  Real 'z_MatStm1.phasMolEnth[2]' = z[38];\n""  Real 'z_MatStm1.phasMolEnth[3]' = z[39];\n""  Real 'z_MatStm1.phasMolEntr[1]' = z[40];\n""  Real 'z_MatStm1.phasMolEntr[2]' = z[41];\n""  Real 'z_MatStm1.phasMolEntr[3]' = z[42];\n""  Real 'z_MatStm1.phasMolSpHeat[1]' = z[43];\n""  Real 'z_MatStm1.phasMolSpHeat[2]' = z[44];\n""  Real 'z_MatStm1.phasMolSpHeat[3]' = z[45];\n""  Real 'z_MatStm1.resMolEnth[1]' = z[46];\n""  Real 'z_MatStm1.resMolEnth[2]' = z[47];\n""  Real 'z_MatStm1.resMolEnth[3]' = z[48];\n""  Real 'z_MatStm1.resMolEntr[1]' = z[49];\n""  Real 'z_MatStm1.resMolEntr[2]' = z[50];\n""  Real 'z_MatStm1.resMolEntr[3]' = z[51];\n""  Real 'z_MatStm1.resMolSpHeat[1]' = z[52];\n""  Real 'z_MatStm1.resMolSpHeat[2]' = z[53];\n""  Real 'z_MatStm1.resMolSpHeat[3]' = z[54];\n""  Real 'z_MatStm1.totMasFlo[1]' = z[55];\n""  Real 'z_MatStm1.totMasFlo[2]' = z[56];\n""  Real 'z_MatStm1.totMasFlo[3]' = z[57];\n""  Real 'z_MatStm1.totMolFlo[1]' = z[58];\n""  Real 'z_MatStm1.totMolFlo[2]' = z[59];\n""  Real 'z_MatStm1.totMolFlo[3]' = z[60];\n""  Real 'z_MatStm1.vapPhasMasFrac' = z[61];\n""  Real 'z_MatStm1.vapPhasMolFrac' = z[62];\n""  Real 'z_MatStm1.vapfugcoeff_dew[1]' = z[63];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_Flowsheet;\n";
}
#if defined(__cplusplus)
}
#endif

