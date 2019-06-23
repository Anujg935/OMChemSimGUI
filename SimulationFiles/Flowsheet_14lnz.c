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
  return "model linear_Flowsheet\n  parameter Integer n = 0 \"number of states\";\n  parameter Integer p = 0 \"number of inputs\";\n  parameter Integer q = 0 \"number of outputs\";\n  parameter Integer nz = 471 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[0] = %s;\n"
  "  parameter Real u0[0] = %s;\n"
  "  parameter Real z0[471] = %s;\n"
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
  "  Real 'z_$cse1' = z[1];\n""  Real 'z_$cse10' = z[2];\n""  Real 'z_$cse11' = z[3];\n""  Real 'z_$cse12' = z[4];\n""  Real 'z_$cse13' = z[5];\n""  Real 'z_$cse2' = z[6];\n""  Real 'z_$cse3' = z[7];\n""  Real 'z_$cse4' = z[8];\n""  Real 'z_$cse5' = z[9];\n""  Real 'z_$cse6' = z[10];\n""  Real 'z_$cse7' = z[11];\n""  Real 'z_$cse8' = z[12];\n""  Real 'z_$cse9' = z[13];\n""  Real 'z_MatStm1.K[1]' = z[14];\n""  Real 'z_MatStm1.K[2]' = z[15];\n""  Real 'z_MatStm1.MW[1]' = z[16];\n""  Real 'z_MatStm1.MW[2]' = z[17];\n""  Real 'z_MatStm1.MW[3]' = z[18];\n""  Real 'z_MatStm1.Pbubl' = z[19];\n""  Real 'z_MatStm1.Pdew' = z[20];\n""  Real 'z_MatStm1.Psat[1]' = z[21];\n""  Real 'z_MatStm1.Psat[2]' = z[22];\n""  Real 'z_MatStm1.compMasFlo[1,1]' = z[23];\n""  Real 'z_MatStm1.compMasFlo[1,2]' = z[24];\n""  Real 'z_MatStm1.compMasFlo[2,1]' = z[25];\n""  Real 'z_MatStm1.compMasFlo[2,2]' = z[26];\n""  Real 'z_MatStm1.compMasFlo[3,1]' = z[27];\n""  Real 'z_MatStm1.compMasFlo[3,2]' = z[28];\n""  Real 'z_MatStm1.compMasFrac[1,1]' = z[29];\n""  Real 'z_MatStm1.compMasFrac[1,2]' = z[30];\n""  Real 'z_MatStm1.compMasFrac[2,1]' = z[31];\n""  Real 'z_MatStm1.compMasFrac[2,2]' = z[32];\n""  Real 'z_MatStm1.compMasFrac[3,1]' = z[33];\n""  Real 'z_MatStm1.compMasFrac[3,2]' = z[34];\n""  Real 'z_MatStm1.compMolEnth[1,1]' = z[35];\n""  Real 'z_MatStm1.compMolEnth[1,2]' = z[36];\n""  Real 'z_MatStm1.compMolEnth[2,1]' = z[37];\n""  Real 'z_MatStm1.compMolEnth[2,2]' = z[38];\n""  Real 'z_MatStm1.compMolEnth[3,1]' = z[39];\n""  Real 'z_MatStm1.compMolEnth[3,2]' = z[40];\n""  Real 'z_MatStm1.compMolEntr[1,1]' = z[41];\n""  Real 'z_MatStm1.compMolEntr[1,2]' = z[42];\n""  Real 'z_MatStm1.compMolEntr[2,1]' = z[43];\n""  Real 'z_MatStm1.compMolEntr[2,2]' = z[44];\n""  Real 'z_MatStm1.compMolEntr[3,1]' = z[45];\n""  Real 'z_MatStm1.compMolEntr[3,2]' = z[46];\n""  Real 'z_MatStm1.compMolFlo[1,1]' = z[47];\n""  Real 'z_MatStm1.compMolFlo[1,2]' = z[48];\n""  Real 'z_MatStm1.compMolFlo[2,1]' = z[49];\n""  Real 'z_MatStm1.compMolFlo[2,2]' = z[50];\n""  Real 'z_MatStm1.compMolFlo[3,1]' = z[51];\n""  Real 'z_MatStm1.compMolFlo[3,2]' = z[52];\n""  Real 'z_MatStm1.compMolFrac[1,1]' = z[53];\n""  Real 'z_MatStm1.compMolFrac[1,2]' = z[54];\n""  Real 'z_MatStm1.compMolFrac[2,1]' = z[55];\n""  Real 'z_MatStm1.compMolFrac[2,2]' = z[56];\n""  Real 'z_MatStm1.compMolFrac[3,1]' = z[57];\n""  Real 'z_MatStm1.compMolFrac[3,2]' = z[58];\n""  Real 'z_MatStm1.compMolSpHeat[1,1]' = z[59];\n""  Real 'z_MatStm1.compMolSpHeat[1,2]' = z[60];\n""  Real 'z_MatStm1.compMolSpHeat[2,1]' = z[61];\n""  Real 'z_MatStm1.compMolSpHeat[2,2]' = z[62];\n""  Real 'z_MatStm1.compMolSpHeat[3,1]' = z[63];\n""  Real 'z_MatStm1.compMolSpHeat[3,2]' = z[64];\n""  Real 'z_MatStm1.gamma[1]' = z[65];\n""  Real 'z_MatStm1.gamma[2]' = z[66];\n""  Real 'z_MatStm1.gammaBubl[1]' = z[67];\n""  Real 'z_MatStm1.gammaBubl[2]' = z[68];\n""  Real 'z_MatStm1.gammaDew[1]' = z[69];\n""  Real 'z_MatStm1.gammaDew[2]' = z[70];\n""  Real 'z_MatStm1.liqPhasMasFrac' = z[71];\n""  Real 'z_MatStm1.liqPhasMolFrac' = z[72];\n""  Real 'z_MatStm1.liqfugcoeff_bubl[1]' = z[73];\n""  Real 'z_MatStm1.liqfugcoeff_bubl[2]' = z[74];\n""  Real 'z_MatStm1.phasMolEnth[1]' = z[75];\n""  Real 'z_MatStm1.phasMolEnth[2]' = z[76];\n""  Real 'z_MatStm1.phasMolEnth[3]' = z[77];\n""  Real 'z_MatStm1.phasMolEntr[1]' = z[78];\n""  Real 'z_MatStm1.phasMolEntr[2]' = z[79];\n""  Real 'z_MatStm1.phasMolEntr[3]' = z[80];\n""  Real 'z_MatStm1.phasMolSpHeat[1]' = z[81];\n""  Real 'z_MatStm1.phasMolSpHeat[2]' = z[82];\n""  Real 'z_MatStm1.phasMolSpHeat[3]' = z[83];\n""  Real 'z_MatStm1.resMolEnth[1]' = z[84];\n""  Real 'z_MatStm1.resMolEnth[2]' = z[85];\n""  Real 'z_MatStm1.resMolEnth[3]' = z[86];\n""  Real 'z_MatStm1.resMolEntr[1]' = z[87];\n""  Real 'z_MatStm1.resMolEntr[2]' = z[88];\n""  Real 'z_MatStm1.resMolEntr[3]' = z[89];\n""  Real 'z_MatStm1.resMolSpHeat[1]' = z[90];\n""  Real 'z_MatStm1.resMolSpHeat[2]' = z[91];\n""  Real 'z_MatStm1.resMolSpHeat[3]' = z[92];\n""  Real 'z_MatStm1.totMasFlo[1]' = z[93];\n""  Real 'z_MatStm1.totMasFlo[2]' = z[94];\n""  Real 'z_MatStm1.totMasFlo[3]' = z[95];\n""  Real 'z_MatStm1.totMolFlo[1]' = z[96];\n""  Real 'z_MatStm1.totMolFlo[2]' = z[97];\n""  Real 'z_MatStm1.totMolFlo[3]' = z[98];\n""  Real 'z_MatStm1.vapPhasMasFrac' = z[99];\n""  Real 'z_MatStm1.vapPhasMolFrac' = z[100];\n""  Real 'z_MatStm1.vapfugcoeff_dew[1]' = z[101];\n""  Real 'z_MatStm1.vapfugcoeff_dew[2]' = z[102];\n""  Real 'z_MatStm2.K[1]' = z[103];\n""  Real 'z_MatStm2.K[2]' = z[104];\n""  Real 'z_MatStm2.MW[1]' = z[105];\n""  Real 'z_MatStm2.MW[2]' = z[106];\n""  Real 'z_MatStm2.MW[3]' = z[107];\n""  Real 'z_MatStm2.Pbubl' = z[108];\n""  Real 'z_MatStm2.Pdew' = z[109];\n""  Real 'z_MatStm2.Psat[1]' = z[110];\n""  Real 'z_MatStm2.Psat[2]' = z[111];\n""  Real 'z_MatStm2.compMasFlo[1,1]' = z[112];\n""  Real 'z_MatStm2.compMasFlo[1,2]' = z[113];\n""  Real 'z_MatStm2.compMasFlo[2,1]' = z[114];\n""  Real 'z_MatStm2.compMasFlo[2,2]' = z[115];\n""  Real 'z_MatStm2.compMasFlo[3,1]' = z[116];\n""  Real 'z_MatStm2.compMasFlo[3,2]' = z[117];\n""  Real 'z_MatStm2.compMasFrac[1,1]' = z[118];\n""  Real 'z_MatStm2.compMasFrac[1,2]' = z[119];\n""  Real 'z_MatStm2.compMasFrac[2,1]' = z[120];\n""  Real 'z_MatStm2.compMasFrac[2,2]' = z[121];\n""  Real 'z_MatStm2.compMasFrac[3,1]' = z[122];\n""  Real 'z_MatStm2.compMasFrac[3,2]' = z[123];\n""  Real 'z_MatStm2.compMolEnth[1,1]' = z[124];\n""  Real 'z_MatStm2.compMolEnth[1,2]' = z[125];\n""  Real 'z_MatStm2.compMolEnth[2,1]' = z[126];\n""  Real 'z_MatStm2.compMolEnth[2,2]' = z[127];\n""  Real 'z_MatStm2.compMolEnth[3,1]' = z[128];\n""  Real 'z_MatStm2.compMolEnth[3,2]' = z[129];\n""  Real 'z_MatStm2.compMolEntr[1,1]' = z[130];\n""  Real 'z_MatStm2.compMolEntr[1,2]' = z[131];\n""  Real 'z_MatStm2.compMolEntr[2,1]' = z[132];\n""  Real 'z_MatStm2.compMolEntr[2,2]' = z[133];\n""  Real 'z_MatStm2.compMolEntr[3,1]' = z[134];\n""  Real 'z_MatStm2.compMolEntr[3,2]' = z[135];\n""  Real 'z_MatStm2.compMolFlo[1,1]' = z[136];\n""  Real 'z_MatStm2.compMolFlo[1,2]' = z[137];\n""  Real 'z_MatStm2.compMolFlo[2,1]' = z[138];\n""  Real 'z_MatStm2.compMolFlo[2,2]' = z[139];\n""  Real 'z_MatStm2.compMolFlo[3,1]' = z[140];\n""  Real 'z_MatStm2.compMolFlo[3,2]' = z[141];\n""  Real 'z_MatStm2.compMolFrac[1,1]' = z[142];\n""  Real 'z_MatStm2.compMolFrac[1,2]' = z[143];\n""  Real 'z_MatStm2.compMolFrac[2,1]' = z[144];\n""  Real 'z_MatStm2.compMolFrac[2,2]' = z[145];\n""  Real 'z_MatStm2.compMolFrac[3,1]' = z[146];\n""  Real 'z_MatStm2.compMolFrac[3,2]' = z[147];\n""  Real 'z_MatStm2.compMolSpHeat[1,1]' = z[148];\n""  Real 'z_MatStm2.compMolSpHeat[1,2]' = z[149];\n""  Real 'z_MatStm2.compMolSpHeat[2,1]' = z[150];\n""  Real 'z_MatStm2.compMolSpHeat[2,2]' = z[151];\n""  Real 'z_MatStm2.compMolSpHeat[3,1]' = z[152];\n""  Real 'z_MatStm2.compMolSpHeat[3,2]' = z[153];\n""  Real 'z_MatStm2.gamma[1]' = z[154];\n""  Real 'z_MatStm2.gamma[2]' = z[155];\n""  Real 'z_MatStm2.gammaBubl[1]' = z[156];\n""  Real 'z_MatStm2.gammaBubl[2]' = z[157];\n""  Real 'z_MatStm2.gammaDew[1]' = z[158];\n""  Real 'z_MatStm2.gammaDew[2]' = z[159];\n""  Real 'z_MatStm2.liqPhasMasFrac' = z[160];\n""  Real 'z_MatStm2.liqPhasMolFrac' = z[161];\n""  Real 'z_MatStm2.liqfugcoeff_bubl[1]' = z[162];\n""  Real 'z_MatStm2.liqfugcoeff_bubl[2]' = z[163];\n""  Real 'z_MatStm2.phasMolEnth[1]' = z[164];\n""  Real 'z_MatStm2.phasMolEnth[2]' = z[165];\n""  Real 'z_MatStm2.phasMolEnth[3]' = z[166];\n""  Real 'z_MatStm2.phasMolEntr[1]' = z[167];\n""  Real 'z_MatStm2.phasMolEntr[2]' = z[168];\n""  Real 'z_MatStm2.phasMolEntr[3]' = z[169];\n""  Real 'z_MatStm2.phasMolSpHeat[1]' = z[170];\n""  Real 'z_MatStm2.phasMolSpHeat[2]' = z[171];\n""  Real 'z_MatStm2.phasMolSpHeat[3]' = z[172];\n""  Real 'z_MatStm2.resMolEnth[1]' = z[173];\n""  Real 'z_MatStm2.resMolEnth[2]' = z[174];\n""  Real 'z_MatStm2.resMolEnth[3]' = z[175];\n""  Real 'z_MatStm2.resMolEntr[1]' = z[176];\n""  Real 'z_MatStm2.resMolEntr[2]' = z[177];\n""  Real 'z_MatStm2.resMolEntr[3]' = z[178];\n""  Real 'z_MatStm2.resMolSpHeat[1]' = z[179];\n""  Real 'z_MatStm2.resMolSpHeat[2]' = z[180];\n""  Real 'z_MatStm2.resMolSpHeat[3]' = z[181];\n""  Real 'z_MatStm2.totMasFlo[1]' = z[182];\n""  Real 'z_MatStm2.totMasFlo[2]' = z[183];\n""  Real 'z_MatStm2.totMasFlo[3]' = z[184];\n""  Real 'z_MatStm2.totMolFlo[2]' = z[185];\n""  Real 'z_MatStm2.totMolFlo[3]' = z[186];\n""  Real 'z_MatStm2.vapPhasMasFrac' = z[187];\n""  Real 'z_MatStm2.vapPhasMolFrac' = z[188];\n""  Real 'z_MatStm2.vapfugcoeff_dew[1]' = z[189];\n""  Real 'z_MatStm2.vapfugcoeff_dew[2]' = z[190];\n""  Real 'z_MatStm3.K[1]' = z[191];\n""  Real 'z_MatStm3.K[2]' = z[192];\n""  Real 'z_MatStm3.MW[1]' = z[193];\n""  Real 'z_MatStm3.MW[2]' = z[194];\n""  Real 'z_MatStm3.MW[3]' = z[195];\n""  Real 'z_MatStm3.Pbubl' = z[196];\n""  Real 'z_MatStm3.Pdew' = z[197];\n""  Real 'z_MatStm3.Psat[1]' = z[198];\n""  Real 'z_MatStm3.Psat[2]' = z[199];\n""  Real 'z_MatStm3.compMasFlo[1,1]' = z[200];\n""  Real 'z_MatStm3.compMasFlo[1,2]' = z[201];\n""  Real 'z_MatStm3.compMasFlo[2,1]' = z[202];\n""  Real 'z_MatStm3.compMasFlo[2,2]' = z[203];\n""  Real 'z_MatStm3.compMasFlo[3,1]' = z[204];\n""  Real 'z_MatStm3.compMasFlo[3,2]' = z[205];\n""  Real 'z_MatStm3.compMasFrac[1,1]' = z[206];\n""  Real 'z_MatStm3.compMasFrac[1,2]' = z[207];\n""  Real 'z_MatStm3.compMasFrac[2,1]' = z[208];\n""  Real 'z_MatStm3.compMasFrac[2,2]' = z[209];\n""  Real 'z_MatStm3.compMasFrac[3,1]' = z[210];\n""  Real 'z_MatStm3.compMasFrac[3,2]' = z[211];\n""  Real 'z_MatStm3.compMolEnth[1,1]' = z[212];\n""  Real 'z_MatStm3.compMolEnth[1,2]' = z[213];\n""  Real 'z_MatStm3.compMolEnth[2,1]' = z[214];\n""  Real 'z_MatStm3.compMolEnth[2,2]' = z[215];\n""  Real 'z_MatStm3.compMolEnth[3,1]' = z[216];\n""  Real 'z_MatStm3.compMolEnth[3,2]' = z[217];\n""  Real 'z_MatStm3.compMolEntr[1,1]' = z[218];\n""  Real 'z_MatStm3.compMolEntr[1,2]' = z[219];\n""  Real 'z_MatStm3.compMolEntr[2,1]' = z[220];\n""  Real 'z_MatStm3.compMolEntr[2,2]' = z[221];\n""  Real 'z_MatStm3.compMolEntr[3,1]' = z[222];\n""  Real 'z_MatStm3.compMolEntr[3,2]' = z[223];\n""  Real 'z_MatStm3.compMolFlo[1,1]' = z[224];\n""  Real 'z_MatStm3.compMolFlo[1,2]' = z[225];\n""  Real 'z_MatStm3.compMolFlo[2,1]' = z[226];\n""  Real 'z_MatStm3.compMolFlo[2,2]' = z[227];\n""  Real 'z_MatStm3.compMolFlo[3,1]' = z[228];\n""  Real 'z_MatStm3.compMolFlo[3,2]' = z[229];\n""  Real 'z_MatStm3.compMolFrac[1,1]' = z[230];\n""  Real 'z_MatStm3.compMolFrac[1,2]' = z[231];\n""  Real 'z_MatStm3.compMolFrac[2,1]' = z[232];\n""  Real 'z_MatStm3.compMolFrac[2,2]' = z[233];\n""  Real 'z_MatStm3.compMolFrac[3,1]' = z[234];\n""  Real 'z_MatStm3.compMolFrac[3,2]' = z[235];\n""  Real 'z_MatStm3.compMolSpHeat[1,1]' = z[236];\n""  Real 'z_MatStm3.compMolSpHeat[1,2]' = z[237];\n""  Real 'z_MatStm3.compMolSpHeat[2,1]' = z[238];\n""  Real 'z_MatStm3.compMolSpHeat[2,2]' = z[239];\n""  Real 'z_MatStm3.compMolSpHeat[3,1]' = z[240];\n""  Real 'z_MatStm3.compMolSpHeat[3,2]' = z[241];\n""  Real 'z_MatStm3.gamma[1]' = z[242];\n""  Real 'z_MatStm3.gamma[2]' = z[243];\n""  Real 'z_MatStm3.gammaBubl[1]' = z[244];\n""  Real 'z_MatStm3.gammaBubl[2]' = z[245];\n""  Real 'z_MatStm3.gammaDew[1]' = z[246];\n""  Real 'z_MatStm3.gammaDew[2]' = z[247];\n""  Real 'z_MatStm3.liqPhasMasFrac' = z[248];\n""  Real 'z_MatStm3.liqPhasMolFrac' = z[249];\n""  Real 'z_MatStm3.liqfugcoeff_bubl[1]' = z[250];\n""  Real 'z_MatStm3.liqfugcoeff_bubl[2]' = z[251];\n""  Real 'z_MatStm3.phasMolEnth[1]' = z[252];\n""  Real 'z_MatStm3.phasMolEnth[2]' = z[253];\n""  Real 'z_MatStm3.phasMolEnth[3]' = z[254];\n""  Real 'z_MatStm3.phasMolEntr[1]' = z[255];\n""  Real 'z_MatStm3.phasMolEntr[2]' = z[256];\n""  Real 'z_MatStm3.phasMolEntr[3]' = z[257];\n""  Real 'z_MatStm3.phasMolSpHeat[1]' = z[258];\n""  Real 'z_MatStm3.phasMolSpHeat[2]' = z[259];\n""  Real 'z_MatStm3.phasMolSpHeat[3]' = z[260];\n""  Real 'z_MatStm3.resMolEnth[1]' = z[261];\n""  Real 'z_MatStm3.resMolEnth[2]' = z[262];\n""  Real 'z_MatStm3.resMolEnth[3]' = z[263];\n""  Real 'z_MatStm3.resMolEntr[1]' = z[264];\n""  Real 'z_MatStm3.resMolEntr[2]' = z[265];\n""  Real 'z_MatStm3.resMolEntr[3]' = z[266];\n""  Real 'z_MatStm3.resMolSpHeat[1]' = z[267];\n""  Real 'z_MatStm3.resMolSpHeat[2]' = z[268];\n""  Real 'z_MatStm3.resMolSpHeat[3]' = z[269];\n""  Real 'z_MatStm3.totMasFlo[1]' = z[270];\n""  Real 'z_MatStm3.totMasFlo[2]' = z[271];\n""  Real 'z_MatStm3.totMasFlo[3]' = z[272];\n""  Real 'z_MatStm3.totMolFlo[2]' = z[273];\n""  Real 'z_MatStm3.totMolFlo[3]' = z[274];\n""  Real 'z_MatStm3.vapPhasMasFrac' = z[275];\n""  Real 'z_MatStm3.vapPhasMolFrac' = z[276];\n""  Real 'z_MatStm3.vapfugcoeff_dew[1]' = z[277];\n""  Real 'z_MatStm3.vapfugcoeff_dew[2]' = z[278];\n""  Real 'z_MatStm4.K[1]' = z[279];\n""  Real 'z_MatStm4.K[2]' = z[280];\n""  Real 'z_MatStm4.MW[1]' = z[281];\n""  Real 'z_MatStm4.MW[2]' = z[282];\n""  Real 'z_MatStm4.MW[3]' = z[283];\n""  Real 'z_MatStm4.P' = z[284];\n""  Real 'z_MatStm4.Pbubl' = z[285];\n""  Real 'z_MatStm4.Pdew' = z[286];\n""  Real 'z_MatStm4.Psat[1]' = z[287];\n""  Real 'z_MatStm4.Psat[2]' = z[288];\n""  Real 'z_MatStm4.T' = z[289];\n""  Real 'z_MatStm4.compMasFlo[1,1]' = z[290];\n""  Real 'z_MatStm4.compMasFlo[1,2]' = z[291];\n""  Real 'z_MatStm4.compMasFlo[2,1]' = z[292];\n""  Real 'z_MatStm4.compMasFlo[2,2]' = z[293];\n""  Real 'z_MatStm4.compMasFlo[3,1]' = z[294];\n""  Real 'z_MatStm4.compMasFlo[3,2]' = z[295];\n""  Real 'z_MatStm4.compMasFrac[1,1]' = z[296];\n""  Real 'z_MatStm4.compMasFrac[1,2]' = z[297];\n""  Real 'z_MatStm4.compMasFrac[2,1]' = z[298];\n""  Real 'z_MatStm4.compMasFrac[2,2]' = z[299];\n""  Real 'z_MatStm4.compMasFrac[3,1]' = z[300];\n""  Real 'z_MatStm4.compMasFrac[3,2]' = z[301];\n""  Real 'z_MatStm4.compMolEnth[1,1]' = z[302];\n""  Real 'z_MatStm4.compMolEnth[1,2]' = z[303];\n""  Real 'z_MatStm4.compMolEnth[2,1]' = z[304];\n""  Real 'z_MatStm4.compMolEnth[2,2]' = z[305];\n""  Real 'z_MatStm4.compMolEnth[3,1]' = z[306];\n""  Real 'z_MatStm4.compMolEnth[3,2]' = z[307];\n""  Real 'z_MatStm4.compMolEntr[1,1]' = z[308];\n""  Real 'z_MatStm4.compMolEntr[1,2]' = z[309];\n""  Real 'z_MatStm4.compMolEntr[2,1]' = z[310];\n""  Real 'z_MatStm4.compMolEntr[2,2]' = z[311];\n""  Real 'z_MatStm4.compMolEntr[3,1]' = z[312];\n""  Real 'z_MatStm4.compMolEntr[3,2]' = z[313];\n""  Real 'z_MatStm4.compMolFlo[1,1]' = z[314];\n""  Real 'z_MatStm4.compMolFlo[1,2]' = z[315];\n""  Real 'z_MatStm4.compMolFlo[2,1]' = z[316];\n""  Real 'z_MatStm4.compMolFlo[2,2]' = z[317];\n""  Real 'z_MatStm4.compMolFlo[3,1]' = z[318];\n""  Real 'z_MatStm4.compMolFlo[3,2]' = z[319];\n""  Real 'z_MatStm4.compMolFrac[1,1]' = z[320];\n""  Real 'z_MatStm4.compMolFrac[1,2]' = z[321];\n""  Real 'z_MatStm4.compMolFrac[2,1]' = z[322];\n""  Real 'z_MatStm4.compMolFrac[2,2]' = z[323];\n""  Real 'z_MatStm4.compMolFrac[3,1]' = z[324];\n""  Real 'z_MatStm4.compMolFrac[3,2]' = z[325];\n""  Real 'z_MatStm4.compMolSpHeat[1,1]' = z[326];\n""  Real 'z_MatStm4.compMolSpHeat[1,2]' = z[327];\n""  Real 'z_MatStm4.compMolSpHeat[2,1]' = z[328];\n""  Real 'z_MatStm4.compMolSpHeat[2,2]' = z[329];\n""  Real 'z_MatStm4.compMolSpHeat[3,1]' = z[330];\n""  Real 'z_MatStm4.compMolSpHeat[3,2]' = z[331];\n""  Real 'z_MatStm4.gamma[1]' = z[332];\n""  Real 'z_MatStm4.gamma[2]' = z[333];\n""  Real 'z_MatStm4.gammaBubl[1]' = z[334];\n""  Real 'z_MatStm4.gammaBubl[2]' = z[335];\n""  Real 'z_MatStm4.gammaDew[1]' = z[336];\n""  Real 'z_MatStm4.gammaDew[2]' = z[337];\n""  Real 'z_MatStm4.liqPhasMasFrac' = z[338];\n""  Real 'z_MatStm4.liqPhasMolFrac' = z[339];\n""  Real 'z_MatStm4.liqfugcoeff_bubl[1]' = z[340];\n""  Real 'z_MatStm4.liqfugcoeff_bubl[2]' = z[341];\n""  Real 'z_MatStm4.phasMolEnth[1]' = z[342];\n""  Real 'z_MatStm4.phasMolEnth[2]' = z[343];\n""  Real 'z_MatStm4.phasMolEnth[3]' = z[344];\n""  Real 'z_MatStm4.phasMolEntr[1]' = z[345];\n""  Real 'z_MatStm4.phasMolEntr[2]' = z[346];\n""  Real 'z_MatStm4.phasMolEntr[3]' = z[347];\n""  Real 'z_MatStm4.phasMolSpHeat[1]' = z[348];\n""  Real 'z_MatStm4.phasMolSpHeat[2]' = z[349];\n""  Real 'z_MatStm4.phasMolSpHeat[3]' = z[350];\n""  Real 'z_MatStm4.resMolEnth[1]' = z[351];\n""  Real 'z_MatStm4.resMolEnth[2]' = z[352];\n""  Real 'z_MatStm4.resMolEnth[3]' = z[353];\n""  Real 'z_MatStm4.resMolEntr[1]' = z[354];\n""  Real 'z_MatStm4.resMolEntr[2]' = z[355];\n""  Real 'z_MatStm4.resMolEntr[3]' = z[356];\n""  Real 'z_MatStm4.resMolSpHeat[1]' = z[357];\n""  Real 'z_MatStm4.resMolSpHeat[2]' = z[358];\n""  Real 'z_MatStm4.resMolSpHeat[3]' = z[359];\n""  Real 'z_MatStm4.totMasFlo[1]' = z[360];\n""  Real 'z_MatStm4.totMasFlo[2]' = z[361];\n""  Real 'z_MatStm4.totMasFlo[3]' = z[362];\n""  Real 'z_MatStm4.totMolFlo[1]' = z[363];\n""  Real 'z_MatStm4.totMolFlo[2]' = z[364];\n""  Real 'z_MatStm4.totMolFlo[3]' = z[365];\n""  Real 'z_MatStm4.vapPhasMasFrac' = z[366];\n""  Real 'z_MatStm4.vapfugcoeff_dew[1]' = z[367];\n""  Real 'z_MatStm4.vapfugcoeff_dew[2]' = z[368];\n""  Real 'z_MatStm5.K[1]' = z[369];\n""  Real 'z_MatStm5.K[2]' = z[370];\n""  Real 'z_MatStm5.MW[1]' = z[371];\n""  Real 'z_MatStm5.MW[2]' = z[372];\n""  Real 'z_MatStm5.MW[3]' = z[373];\n""  Real 'z_MatStm5.P' = z[374];\n""  Real 'z_MatStm5.Pbubl' = z[375];\n""  Real 'z_MatStm5.Pdew' = z[376];\n""  Real 'z_MatStm5.Psat[1]' = z[377];\n""  Real 'z_MatStm5.Psat[2]' = z[378];\n""  Real 'z_MatStm5.T' = z[379];\n""  Real 'z_MatStm5.compMasFlo[1,1]' = z[380];\n""  Real 'z_MatStm5.compMasFlo[1,2]' = z[381];\n""  Real 'z_MatStm5.compMasFlo[2,1]' = z[382];\n""  Real 'z_MatStm5.compMasFlo[2,2]' = z[383];\n""  Real 'z_MatStm5.compMasFlo[3,1]' = z[384];\n""  Real 'z_MatStm5.compMasFlo[3,2]' = z[385];\n""  Real 'z_MatStm5.compMasFrac[1,1]' = z[386];\n""  Real 'z_MatStm5.compMasFrac[1,2]' = z[387];\n""  Real 'z_MatStm5.compMasFrac[2,1]' = z[388];\n""  Real 'z_MatStm5.compMasFrac[2,2]' = z[389];\n""  Real 'z_MatStm5.compMasFrac[3,1]' = z[390];\n""  Real 'z_MatStm5.compMasFrac[3,2]' = z[391];\n""  Real 'z_MatStm5.compMolEnth[1,1]' = z[392];\n""  Real 'z_MatStm5.compMolEnth[1,2]' = z[393];\n""  Real 'z_MatStm5.compMolEnth[2,1]' = z[394];\n""  Real 'z_MatStm5.compMolEnth[2,2]' = z[395];\n""  Real 'z_MatStm5.compMolEnth[3,1]' = z[396];\n""  Real 'z_MatStm5.compMolEnth[3,2]' = z[397];\n""  Real 'z_MatStm5.compMolEntr[1,1]' = z[398];\n""  Real 'z_MatStm5.compMolEntr[1,2]' = z[399];\n""  Real 'z_MatStm5.compMolEntr[2,1]' = z[400];\n""  Real 'z_MatStm5.compMolEntr[2,2]' = z[401];\n""  Real 'z_MatStm5.compMolEntr[3,1]' = z[402];\n""  Real 'z_MatStm5.compMolEntr[3,2]' = z[403];\n""  Real 'z_MatStm5.compMolFlo[1,1]' = z[404];\n""  Real 'z_MatStm5.compMolFlo[1,2]' = z[405];\n""  Real 'z_MatStm5.compMolFlo[2,1]' = z[406];\n""  Real 'z_MatStm5.compMolFlo[2,2]' = z[407];\n""  Real 'z_MatStm5.compMolFlo[3,1]' = z[408];\n""  Real 'z_MatStm5.compMolFlo[3,2]' = z[409];\n""  Real 'z_MatStm5.compMolFrac[1,1]' = z[410];\n""  Real 'z_MatStm5.compMolFrac[1,2]' = z[411];\n""  Real 'z_MatStm5.compMolFrac[2,1]' = z[412];\n""  Real 'z_MatStm5.compMolFrac[2,2]' = z[413];\n""  Real 'z_MatStm5.compMolFrac[3,1]' = z[414];\n""  Real 'z_MatStm5.compMolFrac[3,2]' = z[415];\n""  Real 'z_MatStm5.compMolSpHeat[1,1]' = z[416];\n""  Real 'z_MatStm5.compMolSpHeat[1,2]' = z[417];\n""  Real 'z_MatStm5.compMolSpHeat[2,1]' = z[418];\n""  Real 'z_MatStm5.compMolSpHeat[2,2]' = z[419];\n""  Real 'z_MatStm5.compMolSpHeat[3,1]' = z[420];\n""  Real 'z_MatStm5.compMolSpHeat[3,2]' = z[421];\n""  Real 'z_MatStm5.gamma[1]' = z[422];\n""  Real 'z_MatStm5.gamma[2]' = z[423];\n""  Real 'z_MatStm5.gammaBubl[1]' = z[424];\n""  Real 'z_MatStm5.gammaBubl[2]' = z[425];\n""  Real 'z_MatStm5.gammaDew[1]' = z[426];\n""  Real 'z_MatStm5.gammaDew[2]' = z[427];\n""  Real 'z_MatStm5.liqPhasMasFrac' = z[428];\n""  Real 'z_MatStm5.liqPhasMolFrac' = z[429];\n""  Real 'z_MatStm5.liqfugcoeff_bubl[1]' = z[430];\n""  Real 'z_MatStm5.liqfugcoeff_bubl[2]' = z[431];\n""  Real 'z_MatStm5.phasMolEnth[1]' = z[432];\n""  Real 'z_MatStm5.phasMolEnth[2]' = z[433];\n""  Real 'z_MatStm5.phasMolEnth[3]' = z[434];\n""  Real 'z_MatStm5.phasMolEntr[1]' = z[435];\n""  Real 'z_MatStm5.phasMolEntr[2]' = z[436];\n""  Real 'z_MatStm5.phasMolEntr[3]' = z[437];\n""  Real 'z_MatStm5.phasMolSpHeat[1]' = z[438];\n""  Real 'z_MatStm5.phasMolSpHeat[2]' = z[439];\n""  Real 'z_MatStm5.phasMolSpHeat[3]' = z[440];\n""  Real 'z_MatStm5.resMolEnth[1]' = z[441];\n""  Real 'z_MatStm5.resMolEnth[2]' = z[442];\n""  Real 'z_MatStm5.resMolEnth[3]' = z[443];\n""  Real 'z_MatStm5.resMolEntr[1]' = z[444];\n""  Real 'z_MatStm5.resMolEntr[2]' = z[445];\n""  Real 'z_MatStm5.resMolEntr[3]' = z[446];\n""  Real 'z_MatStm5.resMolSpHeat[1]' = z[447];\n""  Real 'z_MatStm5.resMolSpHeat[2]' = z[448];\n""  Real 'z_MatStm5.resMolSpHeat[3]' = z[449];\n""  Real 'z_MatStm5.totMasFlo[1]' = z[450];\n""  Real 'z_MatStm5.totMasFlo[2]' = z[451];\n""  Real 'z_MatStm5.totMasFlo[3]' = z[452];\n""  Real 'z_MatStm5.totMolFlo[1]' = z[453];\n""  Real 'z_MatStm5.totMolFlo[2]' = z[454];\n""  Real 'z_MatStm5.totMolFlo[3]' = z[455];\n""  Real 'z_MatStm5.vapPhasMasFrac' = z[456];\n""  Real 'z_MatStm5.vapfugcoeff_dew[1]' = z[457];\n""  Real 'z_MatStm5.vapfugcoeff_dew[2]' = z[458];\n""  Real 'z_Mixer1.inVapPhasMolFrac[1]' = z[459];\n""  Real 'z_Mixer1.inVapPhasMolFrac[2]' = z[460];\n""  Real 'z_Splitter1.MW' = z[461];\n""  Real 'z_Splitter1.inMixMolFrac[1]' = z[462];\n""  Real 'z_Splitter1.inMixMolFrac[2]' = z[463];\n""  Real 'z_Splitter1.outMixMasFlo[1]' = z[464];\n""  Real 'z_Splitter1.outMixMasFlo[2]' = z[465];\n""  Real 'z_Splitter1.outP[2]' = z[466];\n""  Real 'z_Splitter1.outT[2]' = z[467];\n""  Real 'z_Splitter1.specVal[1]' = z[468];\n""  Real 'z_Splitter1.specVal[2]' = z[469];\n""  Real 'z_Splitter1.splRat[1]' = z[470];\n""  Real 'z_Splitter1.splRat[2]' = z[471];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_Flowsheet;\n";
}
#if defined(__cplusplus)
}
#endif

