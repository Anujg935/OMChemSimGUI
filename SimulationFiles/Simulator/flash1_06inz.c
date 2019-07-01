/* Initialization */
#include "flash1_model.h"
#include "flash1_11mix.h"
#include "flash1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void flash1_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
Flash1._gamma[1] = 1.0
*/
void flash1_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[32] /* Flash1.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
Flash1._gamma[2] = 1.0
*/
void flash1_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[33] /* Flash1.gamma[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
Flash1._resMolSpHeat[1] = 0.0
*/
void flash1_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[56] /* Flash1.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
Flash1._resMolEnth[1] = 0.0
*/
void flash1_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[50] /* Flash1.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
Flash1._resMolEntr[1] = 0.0
*/
void flash1_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[53] /* Flash1.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
MatStm5._gamma[1] = 1.0
*/
void flash1_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[294] /* MatStm5.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
MatStm5._gamma[2] = 1.0
*/
void flash1_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[295] /* MatStm5.gamma[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
MatStm5._resMolSpHeat[1] = 0.0
*/
void flash1_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[319] /* MatStm5.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
MatStm5._resMolEnth[1] = 0.0
*/
void flash1_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[313] /* MatStm5.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
MatStm5._resMolEntr[1] = 0.0
*/
void flash1_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[316] /* MatStm5.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
MatStm2._gamma[1] = 1.0
*/
void flash1_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[206] /* MatStm2.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
MatStm2._gamma[2] = 1.0
*/
void flash1_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[207] /* MatStm2.gamma[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[1] = 0.0
*/
void flash1_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[231] /* MatStm2.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[1] = 0.0
*/
void flash1_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[225] /* MatStm2.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[1] = 0.0
*/
void flash1_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[228] /* MatStm2.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
MatStm1._gamma[1] = 1.0
*/
void flash1_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[117] /* MatStm1.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
MatStm1._gamma[2] = 1.0
*/
void flash1_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[118] /* MatStm1.gamma[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[1] = 0.0
*/
void flash1_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[142] /* MatStm1.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[1] = 0.0
*/
void flash1_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[136] /* MatStm1.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[1] = 0.0
*/
void flash1_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[139] /* MatStm1.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
MatStm1._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[2].VP[1], MatStm1.comp[2].VP[2], MatStm1.comp[2].VP[3], MatStm1.comp[2].VP[4], MatStm1.comp[2].VP[5], MatStm1.comp[2].VP[6]}, 314.8885353767533)
*/
void flash1_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[353], (modelica_real)data->simulationInfo->realParameter[354], (modelica_real)data->simulationInfo->realParameter[355], (modelica_real)data->simulationInfo->realParameter[356], (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358]);
  data->localData[0]->realVars[73] /* MatStm1.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
MatStm1._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[1].VP[1], MatStm1.comp[1].VP[2], MatStm1.comp[1].VP[3], MatStm1.comp[1].VP[4], MatStm1.comp[1].VP[5], MatStm1.comp[1].VP[6]}, 314.8885353767533)
*/
void flash1_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[347], (modelica_real)data->simulationInfo->realParameter[348], (modelica_real)data->simulationInfo->realParameter[349], (modelica_real)data->simulationInfo->realParameter[350], (modelica_real)data->simulationInfo->realParameter[351], (modelica_real)data->simulationInfo->realParameter[352]);
  data->localData[0]->realVars[72] /* MatStm1.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp1, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, 314.8885353767533)
*/
void flash1_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368], (modelica_real)data->simulationInfo->realParameter[369], (modelica_real)data->simulationInfo->realParameter[370]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270]);
  data->localData[0]->realVars[92] /* MatStm1.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[330], tmp2, tmp3, data->simulationInfo->realParameter[340], 314.8885353767533);
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, 314.8885353767533)
*/
void flash1_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  real_array tmp4;
  real_array tmp5;
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368], (modelica_real)data->simulationInfo->realParameter[369], (modelica_real)data->simulationInfo->realParameter[370]);
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270]);
  data->localData[0]->realVars[90] /* MatStm1.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[330], tmp4, tmp5, data->simulationInfo->realParameter[340], 314.8885353767533);
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, 314.8885353767533)
*/
void flash1_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  real_array tmp6;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368], (modelica_real)data->simulationInfo->realParameter[369], (modelica_real)data->simulationInfo->realParameter[370]);
  data->localData[0]->realVars[116] /* MatStm1.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp6, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[2].LiqCp[1], MatStm1.comp[2].LiqCp[2], MatStm1.comp[2].LiqCp[3], MatStm1.comp[2].LiqCp[4], MatStm1.comp[2].LiqCp[5], MatStm1.comp[2].LiqCp[6]}, 314.8885353767533)
*/
void flash1_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[281], (modelica_real)data->simulationInfo->realParameter[282], (modelica_real)data->simulationInfo->realParameter[283], (modelica_real)data->simulationInfo->realParameter[284], (modelica_real)data->simulationInfo->realParameter[285], (modelica_real)data->simulationInfo->realParameter[286]);
  data->localData[0]->realVars[114] /* MatStm1.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp7, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, 314.8885353767533)
*/
void flash1_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362], (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262], (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264]);
  data->localData[0]->realVars[91] /* MatStm1.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[329], tmp8, tmp9, data->simulationInfo->realParameter[339], 314.8885353767533);
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, 314.8885353767533)
*/
void flash1_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362], (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262], (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264]);
  data->localData[0]->realVars[89] /* MatStm1.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[329], tmp10, tmp11, data->simulationInfo->realParameter[339], 314.8885353767533);
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, 314.8885353767533)
*/
void flash1_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  real_array tmp12;
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362], (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364]);
  data->localData[0]->realVars[115] /* MatStm1.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp12, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[1].LiqCp[1], MatStm1.comp[1].LiqCp[2], MatStm1.comp[1].LiqCp[3], MatStm1.comp[1].LiqCp[4], MatStm1.comp[1].LiqCp[5], MatStm1.comp[1].LiqCp[6]}, 314.8885353767533)
*/
void flash1_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)data->simulationInfo->realParameter[275], (modelica_real)data->simulationInfo->realParameter[276], (modelica_real)data->simulationInfo->realParameter[277], (modelica_real)data->simulationInfo->realParameter[278], (modelica_real)data->simulationInfo->realParameter[279], (modelica_real)data->simulationInfo->realParameter[280]);
  data->localData[0]->realVars[113] /* MatStm1.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp13, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
MatStm2._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[2].VP[1], MatStm2.comp[2].VP[2], MatStm2.comp[2].VP[3], MatStm2.comp[2].VP[4], MatStm2.comp[2].VP[5], MatStm2.comp[2].VP[6]}, 314.8885353767533)
*/
void flash1_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  real_array tmp14;
  array_alloc_scalar_real_array(&tmp14, 6, (modelica_real)data->simulationInfo->realParameter[511], (modelica_real)data->simulationInfo->realParameter[512], (modelica_real)data->simulationInfo->realParameter[513], (modelica_real)data->simulationInfo->realParameter[514], (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516]);
  data->localData[0]->realVars[163] /* MatStm2.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp14, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
MatStm2._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[1].VP[1], MatStm2.comp[1].VP[2], MatStm2.comp[1].VP[3], MatStm2.comp[1].VP[4], MatStm2.comp[1].VP[5], MatStm2.comp[1].VP[6]}, 314.8885353767533)
*/
void flash1_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  real_array tmp15;
  array_alloc_scalar_real_array(&tmp15, 6, (modelica_real)data->simulationInfo->realParameter[505], (modelica_real)data->simulationInfo->realParameter[506], (modelica_real)data->simulationInfo->realParameter[507], (modelica_real)data->simulationInfo->realParameter[508], (modelica_real)data->simulationInfo->realParameter[509], (modelica_real)data->simulationInfo->realParameter[510]);
  data->localData[0]->realVars[162] /* MatStm2.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp15, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[2].SH, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tc, 314.8885353767533)
*/
void flash1_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  real_array tmp16;
  real_array tmp17;
  array_alloc_scalar_real_array(&tmp16, 6, (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526], (modelica_real)data->simulationInfo->realParameter[527], (modelica_real)data->simulationInfo->realParameter[528]);
  array_alloc_scalar_real_array(&tmp17, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  data->localData[0]->realVars[181] /* MatStm2.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[488], tmp16, tmp17, data->simulationInfo->realParameter[498], 314.8885353767533);
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[2].SH, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tc, 314.8885353767533)
*/
void flash1_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  real_array tmp18;
  real_array tmp19;
  array_alloc_scalar_real_array(&tmp18, 6, (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526], (modelica_real)data->simulationInfo->realParameter[527], (modelica_real)data->simulationInfo->realParameter[528]);
  array_alloc_scalar_real_array(&tmp19, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  data->localData[0]->realVars[179] /* MatStm2.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[488], tmp18, tmp19, data->simulationInfo->realParameter[498], 314.8885353767533);
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, 314.8885353767533)
*/
void flash1_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  real_array tmp20;
  array_alloc_scalar_real_array(&tmp20, 6, (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526], (modelica_real)data->simulationInfo->realParameter[527], (modelica_real)data->simulationInfo->realParameter[528]);
  data->localData[0]->realVars[205] /* MatStm2.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp20, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm2.comp[2].LiqCp[1], MatStm2.comp[2].LiqCp[2], MatStm2.comp[2].LiqCp[3], MatStm2.comp[2].LiqCp[4], MatStm2.comp[2].LiqCp[5], MatStm2.comp[2].LiqCp[6]}, 314.8885353767533)
*/
void flash1_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  real_array tmp21;
  array_alloc_scalar_real_array(&tmp21, 6, (modelica_real)data->simulationInfo->realParameter[439], (modelica_real)data->simulationInfo->realParameter[440], (modelica_real)data->simulationInfo->realParameter[441], (modelica_real)data->simulationInfo->realParameter[442], (modelica_real)data->simulationInfo->realParameter[443], (modelica_real)data->simulationInfo->realParameter[444]);
  data->localData[0]->realVars[203] /* MatStm2.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp21, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, 314.8885353767533)
*/
void flash1_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  real_array tmp22;
  real_array tmp23;
  array_alloc_scalar_real_array(&tmp22, 6, (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522]);
  array_alloc_scalar_real_array(&tmp23, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  data->localData[0]->realVars[180] /* MatStm2.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[487], tmp22, tmp23, data->simulationInfo->realParameter[497], 314.8885353767533);
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, 314.8885353767533)
*/
void flash1_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  real_array tmp24;
  real_array tmp25;
  array_alloc_scalar_real_array(&tmp24, 6, (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522]);
  array_alloc_scalar_real_array(&tmp25, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  data->localData[0]->realVars[178] /* MatStm2.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[487], tmp24, tmp25, data->simulationInfo->realParameter[497], 314.8885353767533);
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, 314.8885353767533)
*/
void flash1_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  real_array tmp26;
  array_alloc_scalar_real_array(&tmp26, 6, (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522]);
  data->localData[0]->realVars[204] /* MatStm2.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp26, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm2.comp[1].LiqCp[1], MatStm2.comp[1].LiqCp[2], MatStm2.comp[1].LiqCp[3], MatStm2.comp[1].LiqCp[4], MatStm2.comp[1].LiqCp[5], MatStm2.comp[1].LiqCp[6]}, 314.8885353767533)
*/
void flash1_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  real_array tmp27;
  array_alloc_scalar_real_array(&tmp27, 6, (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434], (modelica_real)data->simulationInfo->realParameter[435], (modelica_real)data->simulationInfo->realParameter[436], (modelica_real)data->simulationInfo->realParameter[437], (modelica_real)data->simulationInfo->realParameter[438]);
  data->localData[0]->realVars[202] /* MatStm2.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp27, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
MatStm5._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm5.comp[2].VP[1], MatStm5.comp[2].VP[2], MatStm5.comp[2].VP[3], MatStm5.comp[2].VP[4], MatStm5.comp[2].VP[5], MatStm5.comp[2].VP[6]}, 314.8885353767533)
*/
void flash1_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  real_array tmp28;
  array_alloc_scalar_real_array(&tmp28, 6, (modelica_real)data->simulationInfo->realParameter[669], (modelica_real)data->simulationInfo->realParameter[670], (modelica_real)data->simulationInfo->realParameter[671], (modelica_real)data->simulationInfo->realParameter[672], (modelica_real)data->simulationInfo->realParameter[673], (modelica_real)data->simulationInfo->realParameter[674]);
  data->localData[0]->realVars[251] /* MatStm5.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp28, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
MatStm5._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm5.comp[1].VP[1], MatStm5.comp[1].VP[2], MatStm5.comp[1].VP[3], MatStm5.comp[1].VP[4], MatStm5.comp[1].VP[5], MatStm5.comp[1].VP[6]}, 314.8885353767533)
*/
void flash1_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  real_array tmp29;
  array_alloc_scalar_real_array(&tmp29, 6, (modelica_real)data->simulationInfo->realParameter[663], (modelica_real)data->simulationInfo->realParameter[664], (modelica_real)data->simulationInfo->realParameter[665], (modelica_real)data->simulationInfo->realParameter[666], (modelica_real)data->simulationInfo->realParameter[667], (modelica_real)data->simulationInfo->realParameter[668]);
  data->localData[0]->realVars[250] /* MatStm5.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp29, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm5.comp[2].SH, {MatStm5.comp[2].VapCp[1], MatStm5.comp[2].VapCp[2], MatStm5.comp[2].VapCp[3], MatStm5.comp[2].VapCp[4], MatStm5.comp[2].VapCp[5], MatStm5.comp[2].VapCp[6]}, {MatStm5.comp[2].HOV[1], MatStm5.comp[2].HOV[2], MatStm5.comp[2].HOV[3], MatStm5.comp[2].HOV[4], MatStm5.comp[2].HOV[5], MatStm5.comp[2].HOV[6]}, MatStm5.comp[2].Tc, 314.8885353767533)
*/
void flash1_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  real_array tmp30;
  real_array tmp31;
  array_alloc_scalar_real_array(&tmp30, 6, (modelica_real)data->simulationInfo->realParameter[681], (modelica_real)data->simulationInfo->realParameter[682], (modelica_real)data->simulationInfo->realParameter[683], (modelica_real)data->simulationInfo->realParameter[684], (modelica_real)data->simulationInfo->realParameter[685], (modelica_real)data->simulationInfo->realParameter[686]);
  array_alloc_scalar_real_array(&tmp31, 6, (modelica_real)data->simulationInfo->realParameter[581], (modelica_real)data->simulationInfo->realParameter[582], (modelica_real)data->simulationInfo->realParameter[583], (modelica_real)data->simulationInfo->realParameter[584], (modelica_real)data->simulationInfo->realParameter[585], (modelica_real)data->simulationInfo->realParameter[586]);
  data->localData[0]->realVars[269] /* MatStm5.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[646], tmp30, tmp31, data->simulationInfo->realParameter[656], 314.8885353767533);
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm5.comp[2].SH, {MatStm5.comp[2].VapCp[1], MatStm5.comp[2].VapCp[2], MatStm5.comp[2].VapCp[3], MatStm5.comp[2].VapCp[4], MatStm5.comp[2].VapCp[5], MatStm5.comp[2].VapCp[6]}, {MatStm5.comp[2].HOV[1], MatStm5.comp[2].HOV[2], MatStm5.comp[2].HOV[3], MatStm5.comp[2].HOV[4], MatStm5.comp[2].HOV[5], MatStm5.comp[2].HOV[6]}, MatStm5.comp[2].Tc, 314.8885353767533)
*/
void flash1_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  real_array tmp32;
  real_array tmp33;
  array_alloc_scalar_real_array(&tmp32, 6, (modelica_real)data->simulationInfo->realParameter[681], (modelica_real)data->simulationInfo->realParameter[682], (modelica_real)data->simulationInfo->realParameter[683], (modelica_real)data->simulationInfo->realParameter[684], (modelica_real)data->simulationInfo->realParameter[685], (modelica_real)data->simulationInfo->realParameter[686]);
  array_alloc_scalar_real_array(&tmp33, 6, (modelica_real)data->simulationInfo->realParameter[581], (modelica_real)data->simulationInfo->realParameter[582], (modelica_real)data->simulationInfo->realParameter[583], (modelica_real)data->simulationInfo->realParameter[584], (modelica_real)data->simulationInfo->realParameter[585], (modelica_real)data->simulationInfo->realParameter[586]);
  data->localData[0]->realVars[267] /* MatStm5.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[646], tmp32, tmp33, data->simulationInfo->realParameter[656], 314.8885353767533);
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm5.comp[2].VapCp[1], MatStm5.comp[2].VapCp[2], MatStm5.comp[2].VapCp[3], MatStm5.comp[2].VapCp[4], MatStm5.comp[2].VapCp[5], MatStm5.comp[2].VapCp[6]}, 314.8885353767533)
*/
void flash1_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  real_array tmp34;
  array_alloc_scalar_real_array(&tmp34, 6, (modelica_real)data->simulationInfo->realParameter[681], (modelica_real)data->simulationInfo->realParameter[682], (modelica_real)data->simulationInfo->realParameter[683], (modelica_real)data->simulationInfo->realParameter[684], (modelica_real)data->simulationInfo->realParameter[685], (modelica_real)data->simulationInfo->realParameter[686]);
  data->localData[0]->realVars[293] /* MatStm5.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp34, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm5.comp[2].LiqCp[1], MatStm5.comp[2].LiqCp[2], MatStm5.comp[2].LiqCp[3], MatStm5.comp[2].LiqCp[4], MatStm5.comp[2].LiqCp[5], MatStm5.comp[2].LiqCp[6]}, 314.8885353767533)
*/
void flash1_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  real_array tmp35;
  array_alloc_scalar_real_array(&tmp35, 6, (modelica_real)data->simulationInfo->realParameter[597], (modelica_real)data->simulationInfo->realParameter[598], (modelica_real)data->simulationInfo->realParameter[599], (modelica_real)data->simulationInfo->realParameter[600], (modelica_real)data->simulationInfo->realParameter[601], (modelica_real)data->simulationInfo->realParameter[602]);
  data->localData[0]->realVars[291] /* MatStm5.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp35, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm5.comp[1].SH, {MatStm5.comp[1].VapCp[1], MatStm5.comp[1].VapCp[2], MatStm5.comp[1].VapCp[3], MatStm5.comp[1].VapCp[4], MatStm5.comp[1].VapCp[5], MatStm5.comp[1].VapCp[6]}, {MatStm5.comp[1].HOV[1], MatStm5.comp[1].HOV[2], MatStm5.comp[1].HOV[3], MatStm5.comp[1].HOV[4], MatStm5.comp[1].HOV[5], MatStm5.comp[1].HOV[6]}, MatStm5.comp[1].Tc, 314.8885353767533)
*/
void flash1_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  real_array tmp36;
  real_array tmp37;
  array_alloc_scalar_real_array(&tmp36, 6, (modelica_real)data->simulationInfo->realParameter[675], (modelica_real)data->simulationInfo->realParameter[676], (modelica_real)data->simulationInfo->realParameter[677], (modelica_real)data->simulationInfo->realParameter[678], (modelica_real)data->simulationInfo->realParameter[679], (modelica_real)data->simulationInfo->realParameter[680]);
  array_alloc_scalar_real_array(&tmp37, 6, (modelica_real)data->simulationInfo->realParameter[575], (modelica_real)data->simulationInfo->realParameter[576], (modelica_real)data->simulationInfo->realParameter[577], (modelica_real)data->simulationInfo->realParameter[578], (modelica_real)data->simulationInfo->realParameter[579], (modelica_real)data->simulationInfo->realParameter[580]);
  data->localData[0]->realVars[268] /* MatStm5.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[645], tmp36, tmp37, data->simulationInfo->realParameter[655], 314.8885353767533);
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm5.comp[1].SH, {MatStm5.comp[1].VapCp[1], MatStm5.comp[1].VapCp[2], MatStm5.comp[1].VapCp[3], MatStm5.comp[1].VapCp[4], MatStm5.comp[1].VapCp[5], MatStm5.comp[1].VapCp[6]}, {MatStm5.comp[1].HOV[1], MatStm5.comp[1].HOV[2], MatStm5.comp[1].HOV[3], MatStm5.comp[1].HOV[4], MatStm5.comp[1].HOV[5], MatStm5.comp[1].HOV[6]}, MatStm5.comp[1].Tc, 314.8885353767533)
*/
void flash1_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  real_array tmp38;
  real_array tmp39;
  array_alloc_scalar_real_array(&tmp38, 6, (modelica_real)data->simulationInfo->realParameter[675], (modelica_real)data->simulationInfo->realParameter[676], (modelica_real)data->simulationInfo->realParameter[677], (modelica_real)data->simulationInfo->realParameter[678], (modelica_real)data->simulationInfo->realParameter[679], (modelica_real)data->simulationInfo->realParameter[680]);
  array_alloc_scalar_real_array(&tmp39, 6, (modelica_real)data->simulationInfo->realParameter[575], (modelica_real)data->simulationInfo->realParameter[576], (modelica_real)data->simulationInfo->realParameter[577], (modelica_real)data->simulationInfo->realParameter[578], (modelica_real)data->simulationInfo->realParameter[579], (modelica_real)data->simulationInfo->realParameter[580]);
  data->localData[0]->realVars[266] /* MatStm5.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[645], tmp38, tmp39, data->simulationInfo->realParameter[655], 314.8885353767533);
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm5.comp[1].VapCp[1], MatStm5.comp[1].VapCp[2], MatStm5.comp[1].VapCp[3], MatStm5.comp[1].VapCp[4], MatStm5.comp[1].VapCp[5], MatStm5.comp[1].VapCp[6]}, 314.8885353767533)
*/
void flash1_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  real_array tmp40;
  array_alloc_scalar_real_array(&tmp40, 6, (modelica_real)data->simulationInfo->realParameter[675], (modelica_real)data->simulationInfo->realParameter[676], (modelica_real)data->simulationInfo->realParameter[677], (modelica_real)data->simulationInfo->realParameter[678], (modelica_real)data->simulationInfo->realParameter[679], (modelica_real)data->simulationInfo->realParameter[680]);
  data->localData[0]->realVars[292] /* MatStm5.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp40, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm5.comp[1].LiqCp[1], MatStm5.comp[1].LiqCp[2], MatStm5.comp[1].LiqCp[3], MatStm5.comp[1].LiqCp[4], MatStm5.comp[1].LiqCp[5], MatStm5.comp[1].LiqCp[6]}, 314.8885353767533)
*/
void flash1_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  real_array tmp41;
  array_alloc_scalar_real_array(&tmp41, 6, (modelica_real)data->simulationInfo->realParameter[591], (modelica_real)data->simulationInfo->realParameter[592], (modelica_real)data->simulationInfo->realParameter[593], (modelica_real)data->simulationInfo->realParameter[594], (modelica_real)data->simulationInfo->realParameter[595], (modelica_real)data->simulationInfo->realParameter[596]);
  data->localData[0]->realVars[290] /* MatStm5.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp41, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
Flash1._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({Flash1.comp[2].VP[1], Flash1.comp[2].VP[2], Flash1.comp[2].VP[3], Flash1.comp[2].VP[4], Flash1.comp[2].VP[5], Flash1.comp[2].VP[6]}, 314.8885353767533)
*/
void flash1_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  real_array tmp42;
  array_alloc_scalar_real_array(&tmp42, 6, (modelica_real)data->simulationInfo->realParameter[195], (modelica_real)data->simulationInfo->realParameter[196], (modelica_real)data->simulationInfo->realParameter[197], (modelica_real)data->simulationInfo->realParameter[198], (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200]);
  data->localData[0]->realVars[13] /* Flash1.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp42, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
Flash1._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({Flash1.comp[1].VP[1], Flash1.comp[1].VP[2], Flash1.comp[1].VP[3], Flash1.comp[1].VP[4], Flash1.comp[1].VP[5], Flash1.comp[1].VP[6]}, 314.8885353767533)
*/
void flash1_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  real_array tmp43;
  array_alloc_scalar_real_array(&tmp43, 6, (modelica_real)data->simulationInfo->realParameter[189], (modelica_real)data->simulationInfo->realParameter[190], (modelica_real)data->simulationInfo->realParameter[191], (modelica_real)data->simulationInfo->realParameter[192], (modelica_real)data->simulationInfo->realParameter[193], (modelica_real)data->simulationInfo->realParameter[194]);
  data->localData[0]->realVars[12] /* Flash1.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp43, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
Flash1._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(Flash1.comp[2].SH, {Flash1.comp[2].VapCp[1], Flash1.comp[2].VapCp[2], Flash1.comp[2].VapCp[3], Flash1.comp[2].VapCp[4], Flash1.comp[2].VapCp[5], Flash1.comp[2].VapCp[6]}, {Flash1.comp[2].HOV[1], Flash1.comp[2].HOV[2], Flash1.comp[2].HOV[3], Flash1.comp[2].HOV[4], Flash1.comp[2].HOV[5], Flash1.comp[2].HOV[6]}, Flash1.comp[2].Tc, 314.8885353767533)
*/
void flash1_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  real_array tmp44;
  real_array tmp45;
  array_alloc_scalar_real_array(&tmp44, 6, (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210], (modelica_real)data->simulationInfo->realParameter[211], (modelica_real)data->simulationInfo->realParameter[212]);
  array_alloc_scalar_real_array(&tmp45, 6, (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110], (modelica_real)data->simulationInfo->realParameter[111], (modelica_real)data->simulationInfo->realParameter[112]);
  data->localData[0]->realVars[19] /* Flash1.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[172], tmp44, tmp45, data->simulationInfo->realParameter[182], 314.8885353767533);
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
Flash1._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(Flash1.comp[2].SH, {Flash1.comp[2].VapCp[1], Flash1.comp[2].VapCp[2], Flash1.comp[2].VapCp[3], Flash1.comp[2].VapCp[4], Flash1.comp[2].VapCp[5], Flash1.comp[2].VapCp[6]}, {Flash1.comp[2].HOV[1], Flash1.comp[2].HOV[2], Flash1.comp[2].HOV[3], Flash1.comp[2].HOV[4], Flash1.comp[2].HOV[5], Flash1.comp[2].HOV[6]}, Flash1.comp[2].Tc, 314.8885353767533)
*/
void flash1_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  real_array tmp46;
  real_array tmp47;
  array_alloc_scalar_real_array(&tmp46, 6, (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210], (modelica_real)data->simulationInfo->realParameter[211], (modelica_real)data->simulationInfo->realParameter[212]);
  array_alloc_scalar_real_array(&tmp47, 6, (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110], (modelica_real)data->simulationInfo->realParameter[111], (modelica_real)data->simulationInfo->realParameter[112]);
  data->localData[0]->realVars[17] /* Flash1.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[172], tmp46, tmp47, data->simulationInfo->realParameter[182], 314.8885353767533);
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
Flash1._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({Flash1.comp[2].VapCp[1], Flash1.comp[2].VapCp[2], Flash1.comp[2].VapCp[3], Flash1.comp[2].VapCp[4], Flash1.comp[2].VapCp[5], Flash1.comp[2].VapCp[6]}, 314.8885353767533)
*/
void flash1_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  real_array tmp48;
  array_alloc_scalar_real_array(&tmp48, 6, (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210], (modelica_real)data->simulationInfo->realParameter[211], (modelica_real)data->simulationInfo->realParameter[212]);
  data->localData[0]->realVars[31] /* Flash1.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp48, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
Flash1._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({Flash1.comp[2].LiqCp[1], Flash1.comp[2].LiqCp[2], Flash1.comp[2].LiqCp[3], Flash1.comp[2].LiqCp[4], Flash1.comp[2].LiqCp[5], Flash1.comp[2].LiqCp[6]}, 314.8885353767533)
*/
void flash1_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  real_array tmp49;
  array_alloc_scalar_real_array(&tmp49, 6, (modelica_real)data->simulationInfo->realParameter[123], (modelica_real)data->simulationInfo->realParameter[124], (modelica_real)data->simulationInfo->realParameter[125], (modelica_real)data->simulationInfo->realParameter[126], (modelica_real)data->simulationInfo->realParameter[127], (modelica_real)data->simulationInfo->realParameter[128]);
  data->localData[0]->realVars[29] /* Flash1.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp49, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
Flash1._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(Flash1.comp[1].SH, {Flash1.comp[1].VapCp[1], Flash1.comp[1].VapCp[2], Flash1.comp[1].VapCp[3], Flash1.comp[1].VapCp[4], Flash1.comp[1].VapCp[5], Flash1.comp[1].VapCp[6]}, {Flash1.comp[1].HOV[1], Flash1.comp[1].HOV[2], Flash1.comp[1].HOV[3], Flash1.comp[1].HOV[4], Flash1.comp[1].HOV[5], Flash1.comp[1].HOV[6]}, Flash1.comp[1].Tc, 314.8885353767533)
*/
void flash1_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  real_array tmp50;
  real_array tmp51;
  array_alloc_scalar_real_array(&tmp50, 6, (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204], (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206]);
  array_alloc_scalar_real_array(&tmp51, 6, (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104], (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106]);
  data->localData[0]->realVars[18] /* Flash1.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[171], tmp50, tmp51, data->simulationInfo->realParameter[181], 314.8885353767533);
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
Flash1._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(Flash1.comp[1].SH, {Flash1.comp[1].VapCp[1], Flash1.comp[1].VapCp[2], Flash1.comp[1].VapCp[3], Flash1.comp[1].VapCp[4], Flash1.comp[1].VapCp[5], Flash1.comp[1].VapCp[6]}, {Flash1.comp[1].HOV[1], Flash1.comp[1].HOV[2], Flash1.comp[1].HOV[3], Flash1.comp[1].HOV[4], Flash1.comp[1].HOV[5], Flash1.comp[1].HOV[6]}, Flash1.comp[1].Tc, 314.8885353767533)
*/
void flash1_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  real_array tmp52;
  real_array tmp53;
  array_alloc_scalar_real_array(&tmp52, 6, (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204], (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206]);
  array_alloc_scalar_real_array(&tmp53, 6, (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104], (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106]);
  data->localData[0]->realVars[16] /* Flash1.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[171], tmp52, tmp53, data->simulationInfo->realParameter[181], 314.8885353767533);
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
Flash1._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({Flash1.comp[1].VapCp[1], Flash1.comp[1].VapCp[2], Flash1.comp[1].VapCp[3], Flash1.comp[1].VapCp[4], Flash1.comp[1].VapCp[5], Flash1.comp[1].VapCp[6]}, 314.8885353767533)
*/
void flash1_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  real_array tmp54;
  array_alloc_scalar_real_array(&tmp54, 6, (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204], (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206]);
  data->localData[0]->realVars[30] /* Flash1.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp54, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
Flash1._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({Flash1.comp[1].LiqCp[1], Flash1.comp[1].LiqCp[2], Flash1.comp[1].LiqCp[3], Flash1.comp[1].LiqCp[4], Flash1.comp[1].LiqCp[5], Flash1.comp[1].LiqCp[6]}, 314.8885353767533)
*/
void flash1_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  real_array tmp55;
  array_alloc_scalar_real_array(&tmp55, 6, (modelica_real)data->simulationInfo->realParameter[117], (modelica_real)data->simulationInfo->realParameter[118], (modelica_real)data->simulationInfo->realParameter[119], (modelica_real)data->simulationInfo->realParameter[120], (modelica_real)data->simulationInfo->realParameter[121], (modelica_real)data->simulationInfo->realParameter[122]);
  data->localData[0]->realVars[28] /* Flash1.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp55, 314.8885353767533);
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,1] = 0.55
*/
void flash1_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,1] = 200.0 * MatStm1.compMolFrac[1,1]
*/
void flash1_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[99] /* MatStm1.compMolFlo[1,1] variable */ = (200.0) * (data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 63
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,2] = 0.45
*/
void flash1_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[106] /* MatStm1.compMolFrac[1,2] variable */ = 0.45;
  TRACE_POP
}

/*
equation index: 64
type: SIMPLE_ASSIGN
Flash1._Pbubl = MatStm1.compMolFrac[1,1] * exp(Flash1.comp[1].VP[2] + Flash1.comp[1].VP[3] / 314.8885353767533 + Flash1.comp[1].VP[4] * 5.752218720257029 + Flash1.comp[1].VP[5] * 314.8885353767533 ^ Flash1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp(Flash1.comp[2].VP[2] + Flash1.comp[2].VP[3] / 314.8885353767533 + Flash1.comp[2].VP[4] * 5.752218720257029 + Flash1.comp[2].VP[5] * 314.8885353767533 ^ Flash1.comp[2].VP[6])
*/
void flash1_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  tmp56 = 314.8885353767533;
  tmp57 = data->simulationInfo->realParameter[194];
  if(tmp56 < 0.0 && tmp57 != 0.0)
  {
    tmp59 = modf(tmp57, &tmp60);
    
    if(tmp59 > 0.5)
    {
      tmp59 -= 1.0;
      tmp60 += 1.0;
    }
    else if(tmp59 < -0.5)
    {
      tmp59 += 1.0;
      tmp60 -= 1.0;
    }
    
    if(fabs(tmp59) < 1e-10)
      tmp58 = pow(tmp56, tmp60);
    else
    {
      tmp62 = modf(1.0/tmp57, &tmp61);
      if(tmp62 > 0.5)
      {
        tmp62 -= 1.0;
        tmp61 += 1.0;
      }
      else if(tmp62 < -0.5)
      {
        tmp62 += 1.0;
        tmp61 -= 1.0;
      }
      if(fabs(tmp62) < 1e-10 && ((unsigned long)tmp61 & 1))
      {
        tmp58 = -pow(-tmp56, tmp59)*pow(tmp56, tmp60);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp56, tmp57);
      }
    }
  }
  else
  {
    tmp58 = pow(tmp56, tmp57);
  }
  if(isnan(tmp58) || isinf(tmp58))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp56, tmp57);
  }tmp63 = 314.8885353767533;
  tmp64 = data->simulationInfo->realParameter[200];
  if(tmp63 < 0.0 && tmp64 != 0.0)
  {
    tmp66 = modf(tmp64, &tmp67);
    
    if(tmp66 > 0.5)
    {
      tmp66 -= 1.0;
      tmp67 += 1.0;
    }
    else if(tmp66 < -0.5)
    {
      tmp66 += 1.0;
      tmp67 -= 1.0;
    }
    
    if(fabs(tmp66) < 1e-10)
      tmp65 = pow(tmp63, tmp67);
    else
    {
      tmp69 = modf(1.0/tmp64, &tmp68);
      if(tmp69 > 0.5)
      {
        tmp69 -= 1.0;
        tmp68 += 1.0;
      }
      else if(tmp69 < -0.5)
      {
        tmp69 += 1.0;
        tmp68 -= 1.0;
      }
      if(fabs(tmp69) < 1e-10 && ((unsigned long)tmp68 & 1))
      {
        tmp65 = -pow(-tmp63, tmp66)*pow(tmp63, tmp67);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp63, tmp64);
      }
    }
  }
  else
  {
    tmp65 = pow(tmp63, tmp64);
  }
  if(isnan(tmp65) || isinf(tmp65))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp63, tmp64);
  }
  data->localData[0]->realVars[10] /* Flash1.Pbubl variable */ = (data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[190] + DIVISION_SIM(data->simulationInfo->realParameter[191],314.8885353767533,"314.8885353767533",equationIndexes) + (data->simulationInfo->realParameter[192]) * (5.752218720257029) + (data->simulationInfo->realParameter[193]) * (tmp58))) + (data->localData[0]->realVars[106] /* MatStm1.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[196] + DIVISION_SIM(data->simulationInfo->realParameter[197],314.8885353767533,"314.8885353767533",equationIndexes) + (data->simulationInfo->realParameter[198]) * (5.752218720257029) + (data->simulationInfo->realParameter[199]) * (tmp65)));
  TRACE_POP
}

/*
equation index: 65
type: SIMPLE_ASSIGN
Flash1._Pdew = 1.0 / (MatStm1.compMolFrac[1,1] * exp((-Flash1.comp[1].VP[2]) - Flash1.comp[1].VP[3] / 314.8885353767533 - Flash1.comp[1].VP[4] * 5.752218720257029 - Flash1.comp[1].VP[5] * 314.8885353767533 ^ Flash1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp((-Flash1.comp[2].VP[2]) - Flash1.comp[2].VP[3] / 314.8885353767533 - Flash1.comp[2].VP[4] * 5.752218720257029 - Flash1.comp[2].VP[5] * 314.8885353767533 ^ Flash1.comp[2].VP[6]))
*/
void flash1_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  modelica_real tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_real tmp78;
  modelica_real tmp79;
  modelica_real tmp80;
  modelica_real tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  tmp70 = 314.8885353767533;
  tmp71 = data->simulationInfo->realParameter[194];
  if(tmp70 < 0.0 && tmp71 != 0.0)
  {
    tmp73 = modf(tmp71, &tmp74);
    
    if(tmp73 > 0.5)
    {
      tmp73 -= 1.0;
      tmp74 += 1.0;
    }
    else if(tmp73 < -0.5)
    {
      tmp73 += 1.0;
      tmp74 -= 1.0;
    }
    
    if(fabs(tmp73) < 1e-10)
      tmp72 = pow(tmp70, tmp74);
    else
    {
      tmp76 = modf(1.0/tmp71, &tmp75);
      if(tmp76 > 0.5)
      {
        tmp76 -= 1.0;
        tmp75 += 1.0;
      }
      else if(tmp76 < -0.5)
      {
        tmp76 += 1.0;
        tmp75 -= 1.0;
      }
      if(fabs(tmp76) < 1e-10 && ((unsigned long)tmp75 & 1))
      {
        tmp72 = -pow(-tmp70, tmp73)*pow(tmp70, tmp74);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp70, tmp71);
      }
    }
  }
  else
  {
    tmp72 = pow(tmp70, tmp71);
  }
  if(isnan(tmp72) || isinf(tmp72))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp70, tmp71);
  }tmp77 = 314.8885353767533;
  tmp78 = data->simulationInfo->realParameter[200];
  if(tmp77 < 0.0 && tmp78 != 0.0)
  {
    tmp80 = modf(tmp78, &tmp81);
    
    if(tmp80 > 0.5)
    {
      tmp80 -= 1.0;
      tmp81 += 1.0;
    }
    else if(tmp80 < -0.5)
    {
      tmp80 += 1.0;
      tmp81 -= 1.0;
    }
    
    if(fabs(tmp80) < 1e-10)
      tmp79 = pow(tmp77, tmp81);
    else
    {
      tmp83 = modf(1.0/tmp78, &tmp82);
      if(tmp83 > 0.5)
      {
        tmp83 -= 1.0;
        tmp82 += 1.0;
      }
      else if(tmp83 < -0.5)
      {
        tmp83 += 1.0;
        tmp82 -= 1.0;
      }
      if(fabs(tmp83) < 1e-10 && ((unsigned long)tmp82 & 1))
      {
        tmp79 = -pow(-tmp77, tmp80)*pow(tmp77, tmp81);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp77, tmp78);
      }
    }
  }
  else
  {
    tmp79 = pow(tmp77, tmp78);
  }
  if(isnan(tmp79) || isinf(tmp79))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp77, tmp78);
  }
  data->localData[0]->realVars[11] /* Flash1.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[190]) - (DIVISION_SIM(data->simulationInfo->realParameter[191],314.8885353767533,"314.8885353767533",equationIndexes)) - ((data->simulationInfo->realParameter[192]) * (5.752218720257029)) - ((data->simulationInfo->realParameter[193]) * (tmp72)))) + (data->localData[0]->realVars[106] /* MatStm1.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[196]) - (DIVISION_SIM(data->simulationInfo->realParameter[197],314.8885353767533,"314.8885353767533",equationIndexes)) - ((data->simulationInfo->realParameter[198]) * (5.752218720257029)) - ((data->simulationInfo->realParameter[199]) * (tmp79)))),"MatStm1.compMolFrac[1,1] * exp((-Flash1.comp[1].VP[2]) - Flash1.comp[1].VP[3] / 314.8885353767533 - Flash1.comp[1].VP[4] * 5.752218720257029 - Flash1.comp[1].VP[5] * 314.8885353767533 ^ Flash1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp((-Flash1.comp[2].VP[2]) - Flash1.comp[2].VP[3] / 314.8885353767533 - Flash1.comp[2].VP[4] * 5.752218720257029 - Flash1.comp[2].VP[5] * 314.8885353767533 ^ Flash1.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}

/*
equation index: 66
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,2] = 200.0 * MatStm1.compMolFrac[1,2]
*/
void flash1_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[100] /* MatStm1.compMolFlo[1,2] variable */ = (200.0) * (data->localData[0]->realVars[106] /* MatStm1.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
MatStm1._Pbubl = MatStm1.compMolFrac[1,1] * exp(MatStm1.comp[1].VP[2] + MatStm1.comp[1].VP[3] / 314.8885353767533 + MatStm1.comp[1].VP[4] * 5.752218720257029 + MatStm1.comp[1].VP[5] * 314.8885353767533 ^ MatStm1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp(MatStm1.comp[2].VP[2] + MatStm1.comp[2].VP[3] / 314.8885353767533 + MatStm1.comp[2].VP[4] * 5.752218720257029 + MatStm1.comp[2].VP[5] * 314.8885353767533 ^ MatStm1.comp[2].VP[6])
*/
void flash1_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  modelica_real tmp84;
  modelica_real tmp85;
  modelica_real tmp86;
  modelica_real tmp87;
  modelica_real tmp88;
  modelica_real tmp89;
  modelica_real tmp90;
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_real tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  modelica_real tmp96;
  modelica_real tmp97;
  tmp84 = 314.8885353767533;
  tmp85 = data->simulationInfo->realParameter[352];
  if(tmp84 < 0.0 && tmp85 != 0.0)
  {
    tmp87 = modf(tmp85, &tmp88);
    
    if(tmp87 > 0.5)
    {
      tmp87 -= 1.0;
      tmp88 += 1.0;
    }
    else if(tmp87 < -0.5)
    {
      tmp87 += 1.0;
      tmp88 -= 1.0;
    }
    
    if(fabs(tmp87) < 1e-10)
      tmp86 = pow(tmp84, tmp88);
    else
    {
      tmp90 = modf(1.0/tmp85, &tmp89);
      if(tmp90 > 0.5)
      {
        tmp90 -= 1.0;
        tmp89 += 1.0;
      }
      else if(tmp90 < -0.5)
      {
        tmp90 += 1.0;
        tmp89 -= 1.0;
      }
      if(fabs(tmp90) < 1e-10 && ((unsigned long)tmp89 & 1))
      {
        tmp86 = -pow(-tmp84, tmp87)*pow(tmp84, tmp88);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp84, tmp85);
      }
    }
  }
  else
  {
    tmp86 = pow(tmp84, tmp85);
  }
  if(isnan(tmp86) || isinf(tmp86))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp84, tmp85);
  }tmp91 = 314.8885353767533;
  tmp92 = data->simulationInfo->realParameter[358];
  if(tmp91 < 0.0 && tmp92 != 0.0)
  {
    tmp94 = modf(tmp92, &tmp95);
    
    if(tmp94 > 0.5)
    {
      tmp94 -= 1.0;
      tmp95 += 1.0;
    }
    else if(tmp94 < -0.5)
    {
      tmp94 += 1.0;
      tmp95 -= 1.0;
    }
    
    if(fabs(tmp94) < 1e-10)
      tmp93 = pow(tmp91, tmp95);
    else
    {
      tmp97 = modf(1.0/tmp92, &tmp96);
      if(tmp97 > 0.5)
      {
        tmp97 -= 1.0;
        tmp96 += 1.0;
      }
      else if(tmp97 < -0.5)
      {
        tmp97 += 1.0;
        tmp96 -= 1.0;
      }
      if(fabs(tmp97) < 1e-10 && ((unsigned long)tmp96 & 1))
      {
        tmp93 = -pow(-tmp91, tmp94)*pow(tmp91, tmp95);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp91, tmp92);
      }
    }
  }
  else
  {
    tmp93 = pow(tmp91, tmp92);
  }
  if(isnan(tmp93) || isinf(tmp93))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp91, tmp92);
  }
  data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */ = (data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[348] + DIVISION_SIM(data->simulationInfo->realParameter[349],314.8885353767533,"314.8885353767533",equationIndexes) + (data->simulationInfo->realParameter[350]) * (5.752218720257029) + (data->simulationInfo->realParameter[351]) * (tmp86))) + (data->localData[0]->realVars[106] /* MatStm1.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[354] + DIVISION_SIM(data->simulationInfo->realParameter[355],314.8885353767533,"314.8885353767533",equationIndexes) + (data->simulationInfo->realParameter[356]) * (5.752218720257029) + (data->simulationInfo->realParameter[357]) * (tmp93)));
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
MatStm1._Pdew = 1.0 / (MatStm1.compMolFrac[1,1] * exp((-MatStm1.comp[1].VP[2]) - MatStm1.comp[1].VP[3] / 314.8885353767533 - MatStm1.comp[1].VP[4] * 5.752218720257029 - MatStm1.comp[1].VP[5] * 314.8885353767533 ^ MatStm1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp((-MatStm1.comp[2].VP[2]) - MatStm1.comp[2].VP[3] / 314.8885353767533 - MatStm1.comp[2].VP[4] * 5.752218720257029 - MatStm1.comp[2].VP[5] * 314.8885353767533 ^ MatStm1.comp[2].VP[6]))
*/
void flash1_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  modelica_real tmp98;
  modelica_real tmp99;
  modelica_real tmp100;
  modelica_real tmp101;
  modelica_real tmp102;
  modelica_real tmp103;
  modelica_real tmp104;
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_real tmp107;
  modelica_real tmp108;
  modelica_real tmp109;
  modelica_real tmp110;
  modelica_real tmp111;
  tmp98 = 314.8885353767533;
  tmp99 = data->simulationInfo->realParameter[352];
  if(tmp98 < 0.0 && tmp99 != 0.0)
  {
    tmp101 = modf(tmp99, &tmp102);
    
    if(tmp101 > 0.5)
    {
      tmp101 -= 1.0;
      tmp102 += 1.0;
    }
    else if(tmp101 < -0.5)
    {
      tmp101 += 1.0;
      tmp102 -= 1.0;
    }
    
    if(fabs(tmp101) < 1e-10)
      tmp100 = pow(tmp98, tmp102);
    else
    {
      tmp104 = modf(1.0/tmp99, &tmp103);
      if(tmp104 > 0.5)
      {
        tmp104 -= 1.0;
        tmp103 += 1.0;
      }
      else if(tmp104 < -0.5)
      {
        tmp104 += 1.0;
        tmp103 -= 1.0;
      }
      if(fabs(tmp104) < 1e-10 && ((unsigned long)tmp103 & 1))
      {
        tmp100 = -pow(-tmp98, tmp101)*pow(tmp98, tmp102);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp98, tmp99);
      }
    }
  }
  else
  {
    tmp100 = pow(tmp98, tmp99);
  }
  if(isnan(tmp100) || isinf(tmp100))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp98, tmp99);
  }tmp105 = 314.8885353767533;
  tmp106 = data->simulationInfo->realParameter[358];
  if(tmp105 < 0.0 && tmp106 != 0.0)
  {
    tmp108 = modf(tmp106, &tmp109);
    
    if(tmp108 > 0.5)
    {
      tmp108 -= 1.0;
      tmp109 += 1.0;
    }
    else if(tmp108 < -0.5)
    {
      tmp108 += 1.0;
      tmp109 -= 1.0;
    }
    
    if(fabs(tmp108) < 1e-10)
      tmp107 = pow(tmp105, tmp109);
    else
    {
      tmp111 = modf(1.0/tmp106, &tmp110);
      if(tmp111 > 0.5)
      {
        tmp111 -= 1.0;
        tmp110 += 1.0;
      }
      else if(tmp111 < -0.5)
      {
        tmp111 += 1.0;
        tmp110 -= 1.0;
      }
      if(fabs(tmp111) < 1e-10 && ((unsigned long)tmp110 & 1))
      {
        tmp107 = -pow(-tmp105, tmp108)*pow(tmp105, tmp109);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp105, tmp106);
      }
    }
  }
  else
  {
    tmp107 = pow(tmp105, tmp106);
  }
  if(isnan(tmp107) || isinf(tmp107))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp105, tmp106);
  }
  data->localData[0]->realVars[71] /* MatStm1.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[348]) - (DIVISION_SIM(data->simulationInfo->realParameter[349],314.8885353767533,"314.8885353767533",equationIndexes)) - ((data->simulationInfo->realParameter[350]) * (5.752218720257029)) - ((data->simulationInfo->realParameter[351]) * (tmp100)))) + (data->localData[0]->realVars[106] /* MatStm1.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[354]) - (DIVISION_SIM(data->simulationInfo->realParameter[355],314.8885353767533,"314.8885353767533",equationIndexes)) - ((data->simulationInfo->realParameter[356]) * (5.752218720257029)) - ((data->simulationInfo->realParameter[357]) * (tmp107)))),"MatStm1.compMolFrac[1,1] * exp((-MatStm1.comp[1].VP[2]) - MatStm1.comp[1].VP[3] / 314.8885353767533 - MatStm1.comp[1].VP[4] * 5.752218720257029 - MatStm1.comp[1].VP[5] * 314.8885353767533 ^ MatStm1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp((-MatStm1.comp[2].VP[2]) - MatStm1.comp[2].VP[3] / 314.8885353767533 - MatStm1.comp[2].VP[4] * 5.752218720257029 - MatStm1.comp[2].VP[5] * 314.8885353767533 ^ MatStm1.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}
extern void flash1_eqFunction_345(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_344(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_343(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_342(DATA *data, threadData_t *threadData);


void flash1_eqFunction_73(DATA*, threadData_t*);
void flash1_eqFunction_74(DATA*, threadData_t*);
void flash1_eqFunction_75(DATA*, threadData_t*);
void flash1_eqFunction_76(DATA*, threadData_t*);
void flash1_eqFunction_77(DATA*, threadData_t*);
void flash1_eqFunction_78(DATA*, threadData_t*);
void flash1_eqFunction_83(DATA*, threadData_t*);
void flash1_eqFunction_82(DATA*, threadData_t*);
void flash1_eqFunction_81(DATA*, threadData_t*);
void flash1_eqFunction_80(DATA*, threadData_t*);
void flash1_eqFunction_79(DATA*, threadData_t*);
/*
equation index: 95
indexNonlinear: 0
type: NONLINEAR

vars: {MatStm1._totMolFlo[2], MatStm1._compMolFrac[2,2], MatStm1._compMolFrac[3,2], MatStm1._compMolFrac[2,1], MatStm1._compMolFrac[3,1]}
eqns: {73, 74, 75, 76, 77, 78, 83, 82, 81, 80, 79}
*/
void flash1_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 95 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,95};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 95 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  TRACE_POP
}

/*
equation index: 96
type: ALGORITHM

  (MatStm1.compMolEntr[2,2], MatStm1.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[2].AS, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tb, MatStm1.comp[2].Tc, 314.8885353767533, 101325.0, MatStm1.compMolFrac[2,2], MatStm1.compMolFrac[3,2]);
*/
void flash1_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368], (modelica_real)data->simulationInfo->realParameter[369], (modelica_real)data->simulationInfo->realParameter[370]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270]);
  data->localData[0]->realVars[96] /* MatStm1.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[242], tmp0, tmp1, data->simulationInfo->realParameter[338], data->simulationInfo->realParameter[340], 314.8885353767533, 101325.0, data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */, data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[98] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void flash1_eqFunction_373(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_372(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_375(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_374(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_369(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_370(DATA *data, threadData_t *threadData);


/*
equation index: 103
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, 314.8885353767533, 101325.0, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void flash1_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362], (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262], (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264]);
  data->localData[0]->realVars[95] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[241], tmp2, tmp3, data->simulationInfo->realParameter[337], data->simulationInfo->realParameter[339], 314.8885353767533, 101325.0, data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[97] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void flash1_eqFunction_386(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_381(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_377(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_387(DATA *data, threadData_t *threadData);


/*
equation index: 108
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:2 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void flash1_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[68] /* MatStm1.MW[3] variable */ = data->modelData->realVarsData[68].attribute /* MatStm1.MW[3] variable */.start;

  data->localData[0]->realVars[67] /* MatStm1.MW[2] variable */ = data->modelData->realVarsData[67].attribute /* MatStm1.MW[2] variable */.start;

  data->localData[0]->realVars[66] /* MatStm1.MW[1] variable */ = data->modelData->realVarsData[66].attribute /* MatStm1.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[66] /* MatStm1.MW[1] variable */ + ((&data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[323])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[67] /* MatStm1.MW[2] variable */ + ((&data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[323])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[68] /* MatStm1.MW[3] variable */ + ((&data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[323])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[66] /* MatStm1.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
extern void flash1_eqFunction_392(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_393(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_396(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_397(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_394(DATA *data, threadData_t *threadData);


/*
equation index: 114
type: LINEAR

<var>MatStm1._compMasFrac[3,1]</var>
<var>MatStm1._compMasFrac[2,1]</var>
<var>MatStm1._compMasFrac[1,1]</var>
<var>MatStm1._compMasFrac[2,2]</var>
<var>MatStm1._compMasFrac[3,2]</var>
<row>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then -MatStm1.compMasFrac[1,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,2] else -MatStm1.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,1] else MatStm1.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="0" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void flash1_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[85] /* MatStm1.compMasFrac[3,1] variable */,data->localData[1]->realVars[83] /* MatStm1.compMasFrac[2,1] variable */,data->localData[1]->realVars[81] /* MatStm1.compMasFrac[1,1] variable */,data->localData[1]->realVars[84] /* MatStm1.compMasFrac[2,2] variable */,data->localData[1]->realVars[86] /* MatStm1.compMasFrac[3,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 114 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,114};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 114 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[85] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[0];
  data->localData[0]->realVars[83] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[1];
  data->localData[0]->realVars[81] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[2];
  data->localData[0]->realVars[84] /* MatStm1.compMasFrac[2,2] variable */ = aux_x[3];
  data->localData[0]->realVars[86] /* MatStm1.compMasFrac[3,2] variable */ = aux_x[4];
  TRACE_POP
}
extern void flash1_eqFunction_395(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_371(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_382(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_384(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_383(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_378(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_380(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_379(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_388(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_390(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_389(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_341(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_340(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_339(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_338(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_337(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_336(DATA *data, threadData_t *threadData);


void flash1_eqFunction_132(DATA*, threadData_t*);
void flash1_eqFunction_133(DATA*, threadData_t*);
void flash1_eqFunction_138(DATA*, threadData_t*);
void flash1_eqFunction_137(DATA*, threadData_t*);
void flash1_eqFunction_136(DATA*, threadData_t*);
void flash1_eqFunction_135(DATA*, threadData_t*);
void flash1_eqFunction_134(DATA*, threadData_t*);
/*
equation index: 146
indexNonlinear: 1
type: NONLINEAR

vars: {Flash1._totMolFlo[3], MatStm2._compMolFrac[1,2], MatStm5._compMolFrac[1,2], MatStm2._compMolFrac[1,1], MatStm5._compMolFrac[1,1]}
eqns: {132, 133, 138, 137, 136, 135, 134}
*/
void flash1_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 146 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,146};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 146 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  TRACE_POP
}
extern void flash1_eqFunction_416(DATA *data, threadData_t *threadData);


/*
equation index: 148
type: ALGORITHM

  (Flash1.compMolEntr[2,1], Flash1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(Flash1.comp[1].AS, {Flash1.comp[1].VapCp[1], Flash1.comp[1].VapCp[2], Flash1.comp[1].VapCp[3], Flash1.comp[1].VapCp[4], Flash1.comp[1].VapCp[5], Flash1.comp[1].VapCp[6]}, {Flash1.comp[1].HOV[1], Flash1.comp[1].HOV[2], Flash1.comp[1].HOV[3], Flash1.comp[1].HOV[4], Flash1.comp[1].HOV[5], Flash1.comp[1].HOV[6]}, Flash1.comp[1].Tb, Flash1.comp[1].Tc, 314.8885353767533, 101325.0, MatStm2.compMolFrac[1,1], MatStm5.compMolFrac[1,1]);
*/
void flash1_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204], (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104], (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106]);
  data->localData[0]->realVars[22] /* Flash1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[83], tmp0, tmp1, data->simulationInfo->realParameter[179], data->simulationInfo->realParameter[181], 314.8885353767533, 101325.0, data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */, data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */ ,&data->localData[0]->realVars[24] /* Flash1.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void flash1_eqFunction_422(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_423(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_481(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_477(DATA *data, threadData_t *threadData);


/*
equation index: 153
type: SIMPLE_ASSIGN
MatStm5._Pbubl = MatStm5.compMolFrac[1,1] * exp(MatStm5.comp[1].VP[2] + MatStm5.comp[1].VP[3] / 314.8885353767533 + MatStm5.comp[1].VP[4] * 5.752218720257029 + MatStm5.comp[1].VP[5] * 314.8885353767533 ^ MatStm5.comp[1].VP[6]) + MatStm5.compMolFrac[1,2] * exp(MatStm5.comp[2].VP[2] + MatStm5.comp[2].VP[3] / 314.8885353767533 + MatStm5.comp[2].VP[4] * 5.752218720257029 + MatStm5.comp[2].VP[5] * 314.8885353767533 ^ MatStm5.comp[2].VP[6])
*/
void flash1_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  tmp2 = 314.8885353767533;
  tmp3 = data->simulationInfo->realParameter[668];
  if(tmp2 < 0.0 && tmp3 != 0.0)
  {
    tmp5 = modf(tmp3, &tmp6);
    
    if(tmp5 > 0.5)
    {
      tmp5 -= 1.0;
      tmp6 += 1.0;
    }
    else if(tmp5 < -0.5)
    {
      tmp5 += 1.0;
      tmp6 -= 1.0;
    }
    
    if(fabs(tmp5) < 1e-10)
      tmp4 = pow(tmp2, tmp6);
    else
    {
      tmp8 = modf(1.0/tmp3, &tmp7);
      if(tmp8 > 0.5)
      {
        tmp8 -= 1.0;
        tmp7 += 1.0;
      }
      else if(tmp8 < -0.5)
      {
        tmp8 += 1.0;
        tmp7 -= 1.0;
      }
      if(fabs(tmp8) < 1e-10 && ((unsigned long)tmp7 & 1))
      {
        tmp4 = -pow(-tmp2, tmp5)*pow(tmp2, tmp6);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2, tmp3);
      }
    }
  }
  else
  {
    tmp4 = pow(tmp2, tmp3);
  }
  if(isnan(tmp4) || isinf(tmp4))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp2, tmp3);
  }tmp9 = 314.8885353767533;
  tmp10 = data->simulationInfo->realParameter[674];
  if(tmp9 < 0.0 && tmp10 != 0.0)
  {
    tmp12 = modf(tmp10, &tmp13);
    
    if(tmp12 > 0.5)
    {
      tmp12 -= 1.0;
      tmp13 += 1.0;
    }
    else if(tmp12 < -0.5)
    {
      tmp12 += 1.0;
      tmp13 -= 1.0;
    }
    
    if(fabs(tmp12) < 1e-10)
      tmp11 = pow(tmp9, tmp13);
    else
    {
      tmp15 = modf(1.0/tmp10, &tmp14);
      if(tmp15 > 0.5)
      {
        tmp15 -= 1.0;
        tmp14 += 1.0;
      }
      else if(tmp15 < -0.5)
      {
        tmp15 += 1.0;
        tmp14 -= 1.0;
      }
      if(fabs(tmp15) < 1e-10 && ((unsigned long)tmp14 & 1))
      {
        tmp11 = -pow(-tmp9, tmp12)*pow(tmp9, tmp13);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp9, tmp10);
      }
    }
  }
  else
  {
    tmp11 = pow(tmp9, tmp10);
  }
  if(isnan(tmp11) || isinf(tmp11))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp9, tmp10);
  }
  data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */ = (data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[664] + DIVISION_SIM(data->simulationInfo->realParameter[665],314.8885353767533,"314.8885353767533",equationIndexes) + (data->simulationInfo->realParameter[666]) * (5.752218720257029) + (data->simulationInfo->realParameter[667]) * (tmp4))) + (data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[670] + DIVISION_SIM(data->simulationInfo->realParameter[671],314.8885353767533,"314.8885353767533",equationIndexes) + (data->simulationInfo->realParameter[672]) * (5.752218720257029) + (data->simulationInfo->realParameter[673]) * (tmp11)));
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
MatStm5._Pdew = 1.0 / (MatStm5.compMolFrac[1,1] * exp((-MatStm5.comp[1].VP[2]) - MatStm5.comp[1].VP[3] / 314.8885353767533 - MatStm5.comp[1].VP[4] * 5.752218720257029 - MatStm5.comp[1].VP[5] * 314.8885353767533 ^ MatStm5.comp[1].VP[6]) + MatStm5.compMolFrac[1,2] * exp((-MatStm5.comp[2].VP[2]) - MatStm5.comp[2].VP[3] / 314.8885353767533 - MatStm5.comp[2].VP[4] * 5.752218720257029 - MatStm5.comp[2].VP[5] * 314.8885353767533 ^ MatStm5.comp[2].VP[6]))
*/
void flash1_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  tmp16 = 314.8885353767533;
  tmp17 = data->simulationInfo->realParameter[668];
  if(tmp16 < 0.0 && tmp17 != 0.0)
  {
    tmp19 = modf(tmp17, &tmp20);
    
    if(tmp19 > 0.5)
    {
      tmp19 -= 1.0;
      tmp20 += 1.0;
    }
    else if(tmp19 < -0.5)
    {
      tmp19 += 1.0;
      tmp20 -= 1.0;
    }
    
    if(fabs(tmp19) < 1e-10)
      tmp18 = pow(tmp16, tmp20);
    else
    {
      tmp22 = modf(1.0/tmp17, &tmp21);
      if(tmp22 > 0.5)
      {
        tmp22 -= 1.0;
        tmp21 += 1.0;
      }
      else if(tmp22 < -0.5)
      {
        tmp22 += 1.0;
        tmp21 -= 1.0;
      }
      if(fabs(tmp22) < 1e-10 && ((unsigned long)tmp21 & 1))
      {
        tmp18 = -pow(-tmp16, tmp19)*pow(tmp16, tmp20);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp16, tmp17);
      }
    }
  }
  else
  {
    tmp18 = pow(tmp16, tmp17);
  }
  if(isnan(tmp18) || isinf(tmp18))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp16, tmp17);
  }tmp23 = 314.8885353767533;
  tmp24 = data->simulationInfo->realParameter[674];
  if(tmp23 < 0.0 && tmp24 != 0.0)
  {
    tmp26 = modf(tmp24, &tmp27);
    
    if(tmp26 > 0.5)
    {
      tmp26 -= 1.0;
      tmp27 += 1.0;
    }
    else if(tmp26 < -0.5)
    {
      tmp26 += 1.0;
      tmp27 -= 1.0;
    }
    
    if(fabs(tmp26) < 1e-10)
      tmp25 = pow(tmp23, tmp27);
    else
    {
      tmp29 = modf(1.0/tmp24, &tmp28);
      if(tmp29 > 0.5)
      {
        tmp29 -= 1.0;
        tmp28 += 1.0;
      }
      else if(tmp29 < -0.5)
      {
        tmp29 += 1.0;
        tmp28 -= 1.0;
      }
      if(fabs(tmp29) < 1e-10 && ((unsigned long)tmp28 & 1))
      {
        tmp25 = -pow(-tmp23, tmp26)*pow(tmp23, tmp27);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp23, tmp24);
      }
    }
  }
  else
  {
    tmp25 = pow(tmp23, tmp24);
  }
  if(isnan(tmp25) || isinf(tmp25))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp23, tmp24);
  }
  data->localData[0]->realVars[249] /* MatStm5.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[664]) - (DIVISION_SIM(data->simulationInfo->realParameter[665],314.8885353767533,"314.8885353767533",equationIndexes)) - ((data->simulationInfo->realParameter[666]) * (5.752218720257029)) - ((data->simulationInfo->realParameter[667]) * (tmp18)))) + (data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[670]) - (DIVISION_SIM(data->simulationInfo->realParameter[671],314.8885353767533,"314.8885353767533",equationIndexes)) - ((data->simulationInfo->realParameter[672]) * (5.752218720257029)) - ((data->simulationInfo->realParameter[673]) * (tmp25)))),"MatStm5.compMolFrac[1,1] * exp((-MatStm5.comp[1].VP[2]) - MatStm5.comp[1].VP[3] / 314.8885353767533 - MatStm5.comp[1].VP[4] * 5.752218720257029 - MatStm5.comp[1].VP[5] * 314.8885353767533 ^ MatStm5.comp[1].VP[6]) + MatStm5.compMolFrac[1,2] * exp((-MatStm5.comp[2].VP[2]) - MatStm5.comp[2].VP[3] / 314.8885353767533 - MatStm5.comp[2].VP[4] * 5.752218720257029 - MatStm5.comp[2].VP[5] * 314.8885353767533 ^ MatStm5.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}

/*
equation index: 155
type: ALGORITHM

  (Flash1.compMolEntr[2,2], Flash1.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(Flash1.comp[2].AS, {Flash1.comp[2].VapCp[1], Flash1.comp[2].VapCp[2], Flash1.comp[2].VapCp[3], Flash1.comp[2].VapCp[4], Flash1.comp[2].VapCp[5], Flash1.comp[2].VapCp[6]}, {Flash1.comp[2].HOV[1], Flash1.comp[2].HOV[2], Flash1.comp[2].HOV[3], Flash1.comp[2].HOV[4], Flash1.comp[2].HOV[5], Flash1.comp[2].HOV[6]}, Flash1.comp[2].Tb, Flash1.comp[2].Tc, 314.8885353767533, 101325.0, MatStm2.compMolFrac[1,2], MatStm5.compMolFrac[1,2]);
*/
void flash1_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  real_array tmp30;
  real_array tmp31;
  array_alloc_scalar_real_array(&tmp30, 6, (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210], (modelica_real)data->simulationInfo->realParameter[211], (modelica_real)data->simulationInfo->realParameter[212]);
  array_alloc_scalar_real_array(&tmp31, 6, (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110], (modelica_real)data->simulationInfo->realParameter[111], (modelica_real)data->simulationInfo->realParameter[112]);
  data->localData[0]->realVars[23] /* Flash1.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[84], tmp30, tmp31, data->simulationInfo->realParameter[180], data->simulationInfo->realParameter[182], 314.8885353767533, 101325.0, data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */, data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */ ,&data->localData[0]->realVars[25] /* Flash1.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void flash1_eqFunction_487(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_420(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_482(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_484(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_483(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_419(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_478(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_480(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_479(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_486(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_488(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_490(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_489(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_414(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_415(DATA *data, threadData_t *threadData);


/*
equation index: 171
type: SIMPLE_ASSIGN
MatStm2._Pbubl = MatStm2.compMolFrac[1,1] * exp(MatStm2.comp[1].VP[2] + MatStm2.comp[1].VP[3] / 314.8885353767533 + MatStm2.comp[1].VP[4] * 5.752218720257029 + MatStm2.comp[1].VP[5] * 314.8885353767533 ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp(MatStm2.comp[2].VP[2] + MatStm2.comp[2].VP[3] / 314.8885353767533 + MatStm2.comp[2].VP[4] * 5.752218720257029 + MatStm2.comp[2].VP[5] * 314.8885353767533 ^ MatStm2.comp[2].VP[6])
*/
void flash1_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  tmp32 = 314.8885353767533;
  tmp33 = data->simulationInfo->realParameter[510];
  if(tmp32 < 0.0 && tmp33 != 0.0)
  {
    tmp35 = modf(tmp33, &tmp36);
    
    if(tmp35 > 0.5)
    {
      tmp35 -= 1.0;
      tmp36 += 1.0;
    }
    else if(tmp35 < -0.5)
    {
      tmp35 += 1.0;
      tmp36 -= 1.0;
    }
    
    if(fabs(tmp35) < 1e-10)
      tmp34 = pow(tmp32, tmp36);
    else
    {
      tmp38 = modf(1.0/tmp33, &tmp37);
      if(tmp38 > 0.5)
      {
        tmp38 -= 1.0;
        tmp37 += 1.0;
      }
      else if(tmp38 < -0.5)
      {
        tmp38 += 1.0;
        tmp37 -= 1.0;
      }
      if(fabs(tmp38) < 1e-10 && ((unsigned long)tmp37 & 1))
      {
        tmp34 = -pow(-tmp32, tmp35)*pow(tmp32, tmp36);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp32, tmp33);
      }
    }
  }
  else
  {
    tmp34 = pow(tmp32, tmp33);
  }
  if(isnan(tmp34) || isinf(tmp34))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp32, tmp33);
  }tmp39 = 314.8885353767533;
  tmp40 = data->simulationInfo->realParameter[516];
  if(tmp39 < 0.0 && tmp40 != 0.0)
  {
    tmp42 = modf(tmp40, &tmp43);
    
    if(tmp42 > 0.5)
    {
      tmp42 -= 1.0;
      tmp43 += 1.0;
    }
    else if(tmp42 < -0.5)
    {
      tmp42 += 1.0;
      tmp43 -= 1.0;
    }
    
    if(fabs(tmp42) < 1e-10)
      tmp41 = pow(tmp39, tmp43);
    else
    {
      tmp45 = modf(1.0/tmp40, &tmp44);
      if(tmp45 > 0.5)
      {
        tmp45 -= 1.0;
        tmp44 += 1.0;
      }
      else if(tmp45 < -0.5)
      {
        tmp45 += 1.0;
        tmp44 -= 1.0;
      }
      if(fabs(tmp45) < 1e-10 && ((unsigned long)tmp44 & 1))
      {
        tmp41 = -pow(-tmp39, tmp42)*pow(tmp39, tmp43);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp39, tmp40);
      }
    }
  }
  else
  {
    tmp41 = pow(tmp39, tmp40);
  }
  if(isnan(tmp41) || isinf(tmp41))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp39, tmp40);
  }
  data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */ = (data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[506] + DIVISION_SIM(data->simulationInfo->realParameter[507],314.8885353767533,"314.8885353767533",equationIndexes) + (data->simulationInfo->realParameter[508]) * (5.752218720257029) + (data->simulationInfo->realParameter[509]) * (tmp34))) + (data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[512] + DIVISION_SIM(data->simulationInfo->realParameter[513],314.8885353767533,"314.8885353767533",equationIndexes) + (data->simulationInfo->realParameter[514]) * (5.752218720257029) + (data->simulationInfo->realParameter[515]) * (tmp41)));
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
MatStm2._Pdew = 1.0 / (MatStm2.compMolFrac[1,1] * exp((-MatStm2.comp[1].VP[2]) - MatStm2.comp[1].VP[3] / 314.8885353767533 - MatStm2.comp[1].VP[4] * 5.752218720257029 - MatStm2.comp[1].VP[5] * 314.8885353767533 ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp((-MatStm2.comp[2].VP[2]) - MatStm2.comp[2].VP[3] / 314.8885353767533 - MatStm2.comp[2].VP[4] * 5.752218720257029 - MatStm2.comp[2].VP[5] * 314.8885353767533 ^ MatStm2.comp[2].VP[6]))
*/
void flash1_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  tmp46 = 314.8885353767533;
  tmp47 = data->simulationInfo->realParameter[510];
  if(tmp46 < 0.0 && tmp47 != 0.0)
  {
    tmp49 = modf(tmp47, &tmp50);
    
    if(tmp49 > 0.5)
    {
      tmp49 -= 1.0;
      tmp50 += 1.0;
    }
    else if(tmp49 < -0.5)
    {
      tmp49 += 1.0;
      tmp50 -= 1.0;
    }
    
    if(fabs(tmp49) < 1e-10)
      tmp48 = pow(tmp46, tmp50);
    else
    {
      tmp52 = modf(1.0/tmp47, &tmp51);
      if(tmp52 > 0.5)
      {
        tmp52 -= 1.0;
        tmp51 += 1.0;
      }
      else if(tmp52 < -0.5)
      {
        tmp52 += 1.0;
        tmp51 -= 1.0;
      }
      if(fabs(tmp52) < 1e-10 && ((unsigned long)tmp51 & 1))
      {
        tmp48 = -pow(-tmp46, tmp49)*pow(tmp46, tmp50);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp46, tmp47);
      }
    }
  }
  else
  {
    tmp48 = pow(tmp46, tmp47);
  }
  if(isnan(tmp48) || isinf(tmp48))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp46, tmp47);
  }tmp53 = 314.8885353767533;
  tmp54 = data->simulationInfo->realParameter[516];
  if(tmp53 < 0.0 && tmp54 != 0.0)
  {
    tmp56 = modf(tmp54, &tmp57);
    
    if(tmp56 > 0.5)
    {
      tmp56 -= 1.0;
      tmp57 += 1.0;
    }
    else if(tmp56 < -0.5)
    {
      tmp56 += 1.0;
      tmp57 -= 1.0;
    }
    
    if(fabs(tmp56) < 1e-10)
      tmp55 = pow(tmp53, tmp57);
    else
    {
      tmp59 = modf(1.0/tmp54, &tmp58);
      if(tmp59 > 0.5)
      {
        tmp59 -= 1.0;
        tmp58 += 1.0;
      }
      else if(tmp59 < -0.5)
      {
        tmp59 += 1.0;
        tmp58 -= 1.0;
      }
      if(fabs(tmp59) < 1e-10 && ((unsigned long)tmp58 & 1))
      {
        tmp55 = -pow(-tmp53, tmp56)*pow(tmp53, tmp57);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp53, tmp54);
      }
    }
  }
  else
  {
    tmp55 = pow(tmp53, tmp54);
  }
  if(isnan(tmp55) || isinf(tmp55))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp53, tmp54);
  }
  data->localData[0]->realVars[161] /* MatStm2.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[506]) - (DIVISION_SIM(data->simulationInfo->realParameter[507],314.8885353767533,"314.8885353767533",equationIndexes)) - ((data->simulationInfo->realParameter[508]) * (5.752218720257029)) - ((data->simulationInfo->realParameter[509]) * (tmp48)))) + (data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[512]) - (DIVISION_SIM(data->simulationInfo->realParameter[513],314.8885353767533,"314.8885353767533",equationIndexes)) - ((data->simulationInfo->realParameter[514]) * (5.752218720257029)) - ((data->simulationInfo->realParameter[515]) * (tmp55)))),"MatStm2.compMolFrac[1,1] * exp((-MatStm2.comp[1].VP[2]) - MatStm2.comp[1].VP[3] / 314.8885353767533 - MatStm2.comp[1].VP[4] * 5.752218720257029 - MatStm2.comp[1].VP[5] * 314.8885353767533 ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp((-MatStm2.comp[2].VP[2]) - MatStm2.comp[2].VP[3] / 314.8885353767533 - MatStm2.comp[2].VP[4] * 5.752218720257029 - MatStm2.comp[2].VP[5] * 314.8885353767533 ^ MatStm2.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}

void flash1_eqFunction_173(DATA*, threadData_t*);
void flash1_eqFunction_174(DATA*, threadData_t*);
void flash1_eqFunction_175(DATA*, threadData_t*);
void flash1_eqFunction_176(DATA*, threadData_t*);
void flash1_eqFunction_177(DATA*, threadData_t*);
void flash1_eqFunction_182(DATA*, threadData_t*);
void flash1_eqFunction_181(DATA*, threadData_t*);
void flash1_eqFunction_180(DATA*, threadData_t*);
void flash1_eqFunction_179(DATA*, threadData_t*);
void flash1_eqFunction_178(DATA*, threadData_t*);
/*
equation index: 191
indexNonlinear: 2
type: NONLINEAR

vars: {MatStm2._totMolFlo[3], MatStm2._compMolFrac[2,1], MatStm2._compMolFrac[3,2], MatStm2._compMolFrac[2,2], MatStm2._compMolFrac[3,1]}
eqns: {173, 174, 175, 176, 177, 182, 181, 180, 179, 178}
*/
void flash1_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 191 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[238] /* MatStm2.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,191};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 191 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[238] /* MatStm2.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  TRACE_POP
}
extern void flash1_eqFunction_452(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_451(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_454(DATA *data, threadData_t *threadData);


/*
equation index: 195
type: ALGORITHM

  (MatStm2.compMolEntr[2,1], MatStm2.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[1].AS, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tb, MatStm2.comp[1].Tc, 314.8885353767533, 101325.0, MatStm2.compMolFrac[2,1], MatStm2.compMolFrac[3,1]);
*/
void flash1_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  data->localData[0]->realVars[184] /* MatStm2.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[399], tmp0, tmp1, data->simulationInfo->realParameter[495], data->simulationInfo->realParameter[497], 314.8885353767533, 101325.0, data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */, data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[186] /* MatStm2.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void flash1_eqFunction_447(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_446(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_453(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_450(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_449(DATA *data, threadData_t *threadData);


/*
equation index: 201
type: ALGORITHM

  (MatStm2.compMolEntr[2,2], MatStm2.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[2].AS, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tb, MatStm2.comp[2].Tc, 314.8885353767533, 101325.0, MatStm2.compMolFrac[2,2], MatStm2.compMolFrac[3,2]);
*/
void flash1_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526], (modelica_real)data->simulationInfo->realParameter[527], (modelica_real)data->simulationInfo->realParameter[528]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  data->localData[0]->realVars[185] /* MatStm2.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[400], tmp2, tmp3, data->simulationInfo->realParameter[496], data->simulationInfo->realParameter[498], 314.8885353767533, 101325.0, data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */, data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[187] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void flash1_eqFunction_462(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_458(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_459(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_467(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_460(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_455(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_456(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_466(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_457(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_463(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_464(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_468(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_465(DATA *data, threadData_t *threadData);


/*
equation index: 215
type: ALGORITHM

  MatStm2.MW[3] := $START.MatStm2.MW[3];
  MatStm2.MW[2] := $START.MatStm2.MW[2];
  MatStm2.MW[1] := $START.MatStm2.MW[1];
  for i in 1:2 loop
    MatStm2.MW[:] := {MatStm2.MW[1] + MatStm2.compMolFrac[1,i] * MatStm2.comp[i].MW, MatStm2.MW[2] + MatStm2.compMolFrac[2,i] * MatStm2.comp[i].MW, MatStm2.MW[3] + MatStm2.compMolFrac[3,i] * MatStm2.comp[i].MW};
  end for;
*/
void flash1_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[159] /* MatStm2.MW[3] variable */ = data->modelData->realVarsData[159].attribute /* MatStm2.MW[3] variable */.start;

  data->localData[0]->realVars[158] /* MatStm2.MW[2] variable */ = data->modelData->realVarsData[158].attribute /* MatStm2.MW[2] variable */.start;

  data->localData[0]->realVars[157] /* MatStm2.MW[1] variable */ = data->modelData->realVarsData[157].attribute /* MatStm2.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[157] /* MatStm2.MW[1] variable */ + ((&data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[481])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[158] /* MatStm2.MW[2] variable */ + ((&data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[481])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[159] /* MatStm2.MW[3] variable */ + ((&data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[481])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[157] /* MatStm2.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
extern void flash1_eqFunction_470(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_471(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_472(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_473(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_474(DATA *data, threadData_t *threadData);


/*
equation index: 221
type: LINEAR

<var>MatStm2._compMasFrac[3,2]</var>
<var>MatStm2._compMasFrac[3,1]</var>
<var>MatStm2._compMasFrac[2,1]</var>
<var>MatStm2._compMasFrac[1,1]</var>
<var>MatStm2._compMasFrac[2,2]</var>
<row>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,1] else MatStm2.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then -MatStm2.compMasFrac[1,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,2] else -MatStm2.compMasFrac[1,2]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101325.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void flash1_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[175] /* MatStm2.compMasFrac[3,2] variable */,data->localData[1]->realVars[174] /* MatStm2.compMasFrac[3,1] variable */,data->localData[1]->realVars[172] /* MatStm2.compMasFrac[2,1] variable */,data->localData[1]->realVars[170] /* MatStm2.compMasFrac[1,1] variable */,data->localData[1]->realVars[173] /* MatStm2.compMasFrac[2,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 221 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,221};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 221 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[175] /* MatStm2.compMasFrac[3,2] variable */ = aux_x[0];
  data->localData[0]->realVars[174] /* MatStm2.compMasFrac[3,1] variable */ = aux_x[1];
  data->localData[0]->realVars[172] /* MatStm2.compMasFrac[2,1] variable */ = aux_x[2];
  data->localData[0]->realVars[170] /* MatStm2.compMasFrac[1,1] variable */ = aux_x[3];
  data->localData[0]->realVars[173] /* MatStm2.compMasFrac[2,2] variable */ = aux_x[4];
  TRACE_POP
}
extern void flash1_eqFunction_475(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_417(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_418(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_491(DATA *data, threadData_t *threadData);


void flash1_eqFunction_226(DATA*, threadData_t*);
void flash1_eqFunction_227(DATA*, threadData_t*);
void flash1_eqFunction_228(DATA*, threadData_t*);
void flash1_eqFunction_229(DATA*, threadData_t*);
void flash1_eqFunction_230(DATA*, threadData_t*);
void flash1_eqFunction_235(DATA*, threadData_t*);
void flash1_eqFunction_234(DATA*, threadData_t*);
void flash1_eqFunction_233(DATA*, threadData_t*);
void flash1_eqFunction_232(DATA*, threadData_t*);
void flash1_eqFunction_231(DATA*, threadData_t*);
/*
equation index: 244
indexNonlinear: 3
type: NONLINEAR

vars: {MatStm5._totMolFlo[3], MatStm5._compMolFrac[2,2], MatStm5._compMolFrac[3,2], MatStm5._compMolFrac[2,1], MatStm5._compMolFrac[3,1]}
eqns: {226, 227, 228, 229, 230, 235, 234, 233, 232, 231}
*/
void flash1_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 244 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[1] = data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[2] = data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[3] = data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[4] = data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,244};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 244 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[1];
  data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[2];
  data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[3];
  data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[4];
  TRACE_POP
}

/*
equation index: 245
type: ALGORITHM

  (MatStm5.compMolEntr[2,2], MatStm5.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm5.comp[2].AS, {MatStm5.comp[2].VapCp[1], MatStm5.comp[2].VapCp[2], MatStm5.comp[2].VapCp[3], MatStm5.comp[2].VapCp[4], MatStm5.comp[2].VapCp[5], MatStm5.comp[2].VapCp[6]}, {MatStm5.comp[2].HOV[1], MatStm5.comp[2].HOV[2], MatStm5.comp[2].HOV[3], MatStm5.comp[2].HOV[4], MatStm5.comp[2].HOV[5], MatStm5.comp[2].HOV[6]}, MatStm5.comp[2].Tb, MatStm5.comp[2].Tc, 314.8885353767533, 101325.0, MatStm5.compMolFrac[2,2], MatStm5.compMolFrac[3,2]);
*/
void flash1_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[681], (modelica_real)data->simulationInfo->realParameter[682], (modelica_real)data->simulationInfo->realParameter[683], (modelica_real)data->simulationInfo->realParameter[684], (modelica_real)data->simulationInfo->realParameter[685], (modelica_real)data->simulationInfo->realParameter[686]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[581], (modelica_real)data->simulationInfo->realParameter[582], (modelica_real)data->simulationInfo->realParameter[583], (modelica_real)data->simulationInfo->realParameter[584], (modelica_real)data->simulationInfo->realParameter[585], (modelica_real)data->simulationInfo->realParameter[586]);
  data->localData[0]->realVars[273] /* MatStm5.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[558], tmp0, tmp1, data->simulationInfo->realParameter[654], data->simulationInfo->realParameter[656], 314.8885353767533, 101325.0, data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */, data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[275] /* MatStm5.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void flash1_eqFunction_516(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_515(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_520(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_521(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_518(DATA *data, threadData_t *threadData);


/*
equation index: 251
type: ALGORITHM

  (MatStm5.compMolEntr[2,1], MatStm5.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm5.comp[1].AS, {MatStm5.comp[1].VapCp[1], MatStm5.comp[1].VapCp[2], MatStm5.comp[1].VapCp[3], MatStm5.comp[1].VapCp[4], MatStm5.comp[1].VapCp[5], MatStm5.comp[1].VapCp[6]}, {MatStm5.comp[1].HOV[1], MatStm5.comp[1].HOV[2], MatStm5.comp[1].HOV[3], MatStm5.comp[1].HOV[4], MatStm5.comp[1].HOV[5], MatStm5.comp[1].HOV[6]}, MatStm5.comp[1].Tb, MatStm5.comp[1].Tc, 314.8885353767533, 101325.0, MatStm5.compMolFrac[2,1], MatStm5.compMolFrac[3,1]);
*/
void flash1_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[675], (modelica_real)data->simulationInfo->realParameter[676], (modelica_real)data->simulationInfo->realParameter[677], (modelica_real)data->simulationInfo->realParameter[678], (modelica_real)data->simulationInfo->realParameter[679], (modelica_real)data->simulationInfo->realParameter[680]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[575], (modelica_real)data->simulationInfo->realParameter[576], (modelica_real)data->simulationInfo->realParameter[577], (modelica_real)data->simulationInfo->realParameter[578], (modelica_real)data->simulationInfo->realParameter[579], (modelica_real)data->simulationInfo->realParameter[580]);
  data->localData[0]->realVars[272] /* MatStm5.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[557], tmp2, tmp3, data->simulationInfo->realParameter[653], data->simulationInfo->realParameter[655], 314.8885353767533, 101325.0, data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */, data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[274] /* MatStm5.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void flash1_eqFunction_525(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_529(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_526(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_532(DATA *data, threadData_t *threadData);


/*
equation index: 256
type: ALGORITHM

  MatStm5.MW[3] := $START.MatStm5.MW[3];
  MatStm5.MW[2] := $START.MatStm5.MW[2];
  MatStm5.MW[1] := $START.MatStm5.MW[1];
  for i in 1:2 loop
    MatStm5.MW[:] := {MatStm5.MW[1] + MatStm5.compMolFrac[1,i] * MatStm5.comp[i].MW, MatStm5.MW[2] + MatStm5.compMolFrac[2,i] * MatStm5.comp[i].MW, MatStm5.MW[3] + MatStm5.compMolFrac[3,i] * MatStm5.comp[i].MW};
  end for;
*/
void flash1_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[247] /* MatStm5.MW[3] variable */ = data->modelData->realVarsData[247].attribute /* MatStm5.MW[3] variable */.start;

  data->localData[0]->realVars[246] /* MatStm5.MW[2] variable */ = data->modelData->realVarsData[246].attribute /* MatStm5.MW[2] variable */.start;

  data->localData[0]->realVars[245] /* MatStm5.MW[1] variable */ = data->modelData->realVarsData[245].attribute /* MatStm5.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[245] /* MatStm5.MW[1] variable */ + ((&data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[639])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[246] /* MatStm5.MW[2] variable */ + ((&data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[639])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[247] /* MatStm5.MW[3] variable */ + ((&data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[639])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[245] /* MatStm5.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
extern void flash1_eqFunction_539(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_540(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_519(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_492(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_522(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_523(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_530(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_531(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_536(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_527(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_528(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_535(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_533(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_534(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_537(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_541(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_542(DATA *data, threadData_t *threadData);


/*
equation index: 274
type: LINEAR

<var>MatStm5._compMasFrac[3,1]</var>
<var>MatStm5._compMasFrac[1,1]</var>
<var>MatStm5._compMasFrac[2,2]</var>
<var>MatStm5._compMasFrac[3,2]</var>
<var>MatStm5._compMasFrac[2,1]</var>
<row>
  <cell>if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then -MatStm5.compMasFrac[1,2] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[3,2] else -MatStm5.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then MatStm5.compMasFlo[1,1] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[3,1] else MatStm5.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="1">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then -1.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="4">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then -0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then -MatStm5.totMasFlo[1] else if 101325.0 >= MatStm5.Pdew then -0.0 else -MatStm5.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void flash1_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[262] /* MatStm5.compMasFrac[3,1] variable */,data->localData[1]->realVars[258] /* MatStm5.compMasFrac[1,1] variable */,data->localData[1]->realVars[261] /* MatStm5.compMasFrac[2,2] variable */,data->localData[1]->realVars[263] /* MatStm5.compMasFrac[3,2] variable */,data->localData[1]->realVars[260] /* MatStm5.compMasFrac[2,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 274 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,274};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 274 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[262] /* MatStm5.compMasFrac[3,1] variable */ = aux_x[0];
  data->localData[0]->realVars[258] /* MatStm5.compMasFrac[1,1] variable */ = aux_x[1];
  data->localData[0]->realVars[261] /* MatStm5.compMasFrac[2,2] variable */ = aux_x[2];
  data->localData[0]->realVars[263] /* MatStm5.compMasFrac[3,2] variable */ = aux_x[3];
  data->localData[0]->realVars[260] /* MatStm5.compMasFrac[2,1] variable */ = aux_x[4];
  TRACE_POP
}
extern void flash1_eqFunction_543(DATA *data, threadData_t *threadData);

extern void flash1_eqFunction_544(DATA *data, threadData_t *threadData);


/*
equation index: 277
type: SIMPLE_ASSIGN
Flash1._gammaBubl[1] = 1.0
*/
void flash1_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->localData[0]->realVars[34] /* Flash1.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
Flash1._gammaDew[1] = 1.0
*/
void flash1_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->localData[0]->realVars[36] /* Flash1.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
Flash1._liqfugcoeff_bubl[1] = 1.0
*/
void flash1_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->localData[0]->realVars[39] /* Flash1.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
Flash1._vapfugcoeff_dew[1] = 1.0
*/
void flash1_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->localData[0]->realVars[62] /* Flash1.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
Flash1._gammaBubl[2] = 1.0
*/
void flash1_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->localData[0]->realVars[35] /* Flash1.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
Flash1._gammaDew[2] = 1.0
*/
void flash1_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->localData[0]->realVars[37] /* Flash1.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
Flash1._liqfugcoeff_bubl[2] = 1.0
*/
void flash1_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->localData[0]->realVars[40] /* Flash1.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 284
type: SIMPLE_ASSIGN
Flash1._vapfugcoeff_dew[2] = 1.0
*/
void flash1_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  data->localData[0]->realVars[63] /* Flash1.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 285
type: SIMPLE_ASSIGN
Flash1._resMolSpHeat[2] = 0.0
*/
void flash1_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->localData[0]->realVars[57] /* Flash1.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 286
type: SIMPLE_ASSIGN
Flash1._resMolSpHeat[3] = 0.0
*/
void flash1_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->localData[0]->realVars[58] /* Flash1.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 287
type: SIMPLE_ASSIGN
Flash1._resMolEnth[2] = 0.0
*/
void flash1_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->localData[0]->realVars[51] /* Flash1.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 288
type: SIMPLE_ASSIGN
Flash1._resMolEnth[3] = 0.0
*/
void flash1_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->localData[0]->realVars[52] /* Flash1.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 289
type: SIMPLE_ASSIGN
Flash1._resMolEntr[2] = 0.0
*/
void flash1_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  data->localData[0]->realVars[54] /* Flash1.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
Flash1._resMolEntr[3] = 0.0
*/
void flash1_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  data->localData[0]->realVars[55] /* Flash1.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
MatStm5._gammaBubl[1] = 1.0
*/
void flash1_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  data->localData[0]->realVars[296] /* MatStm5.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
MatStm5._gammaDew[1] = 1.0
*/
void flash1_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  data->localData[0]->realVars[298] /* MatStm5.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
MatStm5._liqfugcoeff_bubl[1] = 1.0
*/
void flash1_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  data->localData[0]->realVars[302] /* MatStm5.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
MatStm5._vapfugcoeff_dew[1] = 1.0
*/
void flash1_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  data->localData[0]->realVars[329] /* MatStm5.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
MatStm5._gammaBubl[2] = 1.0
*/
void flash1_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  data->localData[0]->realVars[297] /* MatStm5.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
MatStm5._gammaDew[2] = 1.0
*/
void flash1_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->localData[0]->realVars[299] /* MatStm5.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
MatStm5._liqfugcoeff_bubl[2] = 1.0
*/
void flash1_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  data->localData[0]->realVars[303] /* MatStm5.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
MatStm5._vapfugcoeff_dew[2] = 1.0
*/
void flash1_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  data->localData[0]->realVars[330] /* MatStm5.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
MatStm5._resMolSpHeat[2] = 0.0
*/
void flash1_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->localData[0]->realVars[320] /* MatStm5.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
MatStm5._resMolSpHeat[3] = 0.0
*/
void flash1_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  data->localData[0]->realVars[321] /* MatStm5.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 301
type: SIMPLE_ASSIGN
MatStm5._resMolEnth[2] = 0.0
*/
void flash1_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  data->localData[0]->realVars[314] /* MatStm5.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 302
type: SIMPLE_ASSIGN
MatStm5._resMolEnth[3] = 0.0
*/
void flash1_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  data->localData[0]->realVars[315] /* MatStm5.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
MatStm5._resMolEntr[2] = 0.0
*/
void flash1_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  data->localData[0]->realVars[317] /* MatStm5.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
MatStm5._resMolEntr[3] = 0.0
*/
void flash1_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  data->localData[0]->realVars[318] /* MatStm5.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 305
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[1] = 1.0
*/
void flash1_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->localData[0]->realVars[208] /* MatStm2.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 306
type: SIMPLE_ASSIGN
MatStm2._gammaDew[1] = 1.0
*/
void flash1_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->localData[0]->realVars[210] /* MatStm2.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 307
type: SIMPLE_ASSIGN
MatStm2._liqfugcoeff_bubl[1] = 1.0
*/
void flash1_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->localData[0]->realVars[214] /* MatStm2.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 308
type: SIMPLE_ASSIGN
MatStm2._vapfugcoeff_dew[1] = 1.0
*/
void flash1_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->localData[0]->realVars[241] /* MatStm2.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 309
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[2] = 1.0
*/
void flash1_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->localData[0]->realVars[209] /* MatStm2.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 310
type: SIMPLE_ASSIGN
MatStm2._gammaDew[2] = 1.0
*/
void flash1_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->localData[0]->realVars[211] /* MatStm2.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 311
type: SIMPLE_ASSIGN
MatStm2._liqfugcoeff_bubl[2] = 1.0
*/
void flash1_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  data->localData[0]->realVars[215] /* MatStm2.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 312
type: SIMPLE_ASSIGN
MatStm2._vapfugcoeff_dew[2] = 1.0
*/
void flash1_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->localData[0]->realVars[242] /* MatStm2.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[2] = 0.0
*/
void flash1_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  data->localData[0]->realVars[232] /* MatStm2.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 314
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[3] = 0.0
*/
void flash1_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->localData[0]->realVars[233] /* MatStm2.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[2] = 0.0
*/
void flash1_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->localData[0]->realVars[226] /* MatStm2.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[3] = 0.0
*/
void flash1_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->localData[0]->realVars[227] /* MatStm2.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 317
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[2] = 0.0
*/
void flash1_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  data->localData[0]->realVars[229] /* MatStm2.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 318
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[3] = 0.0
*/
void flash1_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  data->localData[0]->realVars[230] /* MatStm2.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 319
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[1] = 1.0
*/
void flash1_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  data->localData[0]->realVars[119] /* MatStm1.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 320
type: SIMPLE_ASSIGN
MatStm1._gammaDew[1] = 1.0
*/
void flash1_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->localData[0]->realVars[121] /* MatStm1.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 321
type: SIMPLE_ASSIGN
MatStm1._liqfugcoeff_bubl[1] = 1.0
*/
void flash1_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->localData[0]->realVars[125] /* MatStm1.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 322
type: SIMPLE_ASSIGN
MatStm1._vapfugcoeff_dew[1] = 1.0
*/
void flash1_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->localData[0]->realVars[153] /* MatStm1.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 323
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[2] = 1.0
*/
void flash1_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->localData[0]->realVars[120] /* MatStm1.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 324
type: SIMPLE_ASSIGN
MatStm1._gammaDew[2] = 1.0
*/
void flash1_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->localData[0]->realVars[122] /* MatStm1.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 325
type: SIMPLE_ASSIGN
MatStm1._liqfugcoeff_bubl[2] = 1.0
*/
void flash1_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  data->localData[0]->realVars[126] /* MatStm1.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 326
type: SIMPLE_ASSIGN
MatStm1._vapfugcoeff_dew[2] = 1.0
*/
void flash1_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->localData[0]->realVars[154] /* MatStm1.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 327
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[2] = 0.0
*/
void flash1_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->localData[0]->realVars[143] /* MatStm1.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 328
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[3] = 0.0
*/
void flash1_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->localData[0]->realVars[144] /* MatStm1.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[2] = 0.0
*/
void flash1_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->localData[0]->realVars[137] /* MatStm1.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 330
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[3] = 0.0
*/
void flash1_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->localData[0]->realVars[138] /* MatStm1.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[2] = 0.0
*/
void flash1_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->localData[0]->realVars[140] /* MatStm1.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[3] = 0.0
*/
void flash1_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->localData[0]->realVars[141] /* MatStm1.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[1] = 200.0
*/
void flash1_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->localData[0]->realVars[148] /* MatStm1.totMolFlo[1] variable */ = 200.0;
  TRACE_POP
}

/*
equation index: 334
type: SIMPLE_ASSIGN
MatStm1._P = 101325.0
*/
void flash1_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->localData[0]->realVars[69] /* MatStm1.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 335
type: SIMPLE_ASSIGN
MatStm1._T = 314.8885353767533
*/
void flash1_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->localData[0]->realVars[74] /* MatStm1.T variable */ = 314.8885353767533;
  TRACE_POP
}
OMC_DISABLE_OPT
void flash1_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  flash1_eqFunction_1(data, threadData);
  flash1_eqFunction_2(data, threadData);
  flash1_eqFunction_3(data, threadData);
  flash1_eqFunction_4(data, threadData);
  flash1_eqFunction_5(data, threadData);
  flash1_eqFunction_6(data, threadData);
  flash1_eqFunction_7(data, threadData);
  flash1_eqFunction_8(data, threadData);
  flash1_eqFunction_9(data, threadData);
  flash1_eqFunction_10(data, threadData);
  flash1_eqFunction_11(data, threadData);
  flash1_eqFunction_12(data, threadData);
  flash1_eqFunction_13(data, threadData);
  flash1_eqFunction_14(data, threadData);
  flash1_eqFunction_15(data, threadData);
  flash1_eqFunction_16(data, threadData);
  flash1_eqFunction_17(data, threadData);
  flash1_eqFunction_18(data, threadData);
  flash1_eqFunction_19(data, threadData);
  flash1_eqFunction_20(data, threadData);
  flash1_eqFunction_21(data, threadData);
  flash1_eqFunction_22(data, threadData);
  flash1_eqFunction_23(data, threadData);
  flash1_eqFunction_24(data, threadData);
  flash1_eqFunction_25(data, threadData);
  flash1_eqFunction_26(data, threadData);
  flash1_eqFunction_27(data, threadData);
  flash1_eqFunction_28(data, threadData);
  flash1_eqFunction_29(data, threadData);
  flash1_eqFunction_30(data, threadData);
  flash1_eqFunction_31(data, threadData);
  flash1_eqFunction_32(data, threadData);
  flash1_eqFunction_33(data, threadData);
  flash1_eqFunction_34(data, threadData);
  flash1_eqFunction_35(data, threadData);
  flash1_eqFunction_36(data, threadData);
  flash1_eqFunction_37(data, threadData);
  flash1_eqFunction_38(data, threadData);
  flash1_eqFunction_39(data, threadData);
  flash1_eqFunction_40(data, threadData);
  flash1_eqFunction_41(data, threadData);
  flash1_eqFunction_42(data, threadData);
  flash1_eqFunction_43(data, threadData);
  flash1_eqFunction_44(data, threadData);
  flash1_eqFunction_45(data, threadData);
  flash1_eqFunction_46(data, threadData);
  flash1_eqFunction_47(data, threadData);
  flash1_eqFunction_48(data, threadData);
  flash1_eqFunction_49(data, threadData);
  flash1_eqFunction_50(data, threadData);
  flash1_eqFunction_51(data, threadData);
  flash1_eqFunction_52(data, threadData);
  flash1_eqFunction_53(data, threadData);
  flash1_eqFunction_54(data, threadData);
  flash1_eqFunction_55(data, threadData);
  flash1_eqFunction_56(data, threadData);
  flash1_eqFunction_57(data, threadData);
  flash1_eqFunction_58(data, threadData);
  flash1_eqFunction_59(data, threadData);
  flash1_eqFunction_60(data, threadData);
  flash1_eqFunction_61(data, threadData);
  flash1_eqFunction_62(data, threadData);
  flash1_eqFunction_63(data, threadData);
  flash1_eqFunction_64(data, threadData);
  flash1_eqFunction_65(data, threadData);
  flash1_eqFunction_66(data, threadData);
  flash1_eqFunction_67(data, threadData);
  flash1_eqFunction_68(data, threadData);
  flash1_eqFunction_345(data, threadData);
  flash1_eqFunction_344(data, threadData);
  flash1_eqFunction_343(data, threadData);
  flash1_eqFunction_342(data, threadData);
  flash1_eqFunction_95(data, threadData);
  flash1_eqFunction_96(data, threadData);
  flash1_eqFunction_373(data, threadData);
  flash1_eqFunction_372(data, threadData);
  flash1_eqFunction_375(data, threadData);
  flash1_eqFunction_374(data, threadData);
  flash1_eqFunction_369(data, threadData);
  flash1_eqFunction_370(data, threadData);
  flash1_eqFunction_103(data, threadData);
  flash1_eqFunction_386(data, threadData);
  flash1_eqFunction_381(data, threadData);
  flash1_eqFunction_377(data, threadData);
  flash1_eqFunction_387(data, threadData);
  flash1_eqFunction_108(data, threadData);
  flash1_eqFunction_392(data, threadData);
  flash1_eqFunction_393(data, threadData);
  flash1_eqFunction_396(data, threadData);
  flash1_eqFunction_397(data, threadData);
  flash1_eqFunction_394(data, threadData);
  flash1_eqFunction_114(data, threadData);
  flash1_eqFunction_395(data, threadData);
  flash1_eqFunction_371(data, threadData);
  flash1_eqFunction_382(data, threadData);
  flash1_eqFunction_384(data, threadData);
  flash1_eqFunction_383(data, threadData);
  flash1_eqFunction_378(data, threadData);
  flash1_eqFunction_380(data, threadData);
  flash1_eqFunction_379(data, threadData);
  flash1_eqFunction_388(data, threadData);
  flash1_eqFunction_390(data, threadData);
  flash1_eqFunction_389(data, threadData);
  flash1_eqFunction_341(data, threadData);
  flash1_eqFunction_340(data, threadData);
  flash1_eqFunction_339(data, threadData);
  flash1_eqFunction_338(data, threadData);
  flash1_eqFunction_337(data, threadData);
  flash1_eqFunction_336(data, threadData);
  flash1_eqFunction_146(data, threadData);
  flash1_eqFunction_416(data, threadData);
  flash1_eqFunction_148(data, threadData);
  flash1_eqFunction_422(data, threadData);
  flash1_eqFunction_423(data, threadData);
  flash1_eqFunction_481(data, threadData);
  flash1_eqFunction_477(data, threadData);
  flash1_eqFunction_153(data, threadData);
  flash1_eqFunction_154(data, threadData);
  flash1_eqFunction_155(data, threadData);
  flash1_eqFunction_487(data, threadData);
  flash1_eqFunction_420(data, threadData);
  flash1_eqFunction_482(data, threadData);
  flash1_eqFunction_484(data, threadData);
  flash1_eqFunction_483(data, threadData);
  flash1_eqFunction_419(data, threadData);
  flash1_eqFunction_478(data, threadData);
  flash1_eqFunction_480(data, threadData);
  flash1_eqFunction_479(data, threadData);
  flash1_eqFunction_486(data, threadData);
  flash1_eqFunction_488(data, threadData);
  flash1_eqFunction_490(data, threadData);
  flash1_eqFunction_489(data, threadData);
  flash1_eqFunction_414(data, threadData);
  flash1_eqFunction_415(data, threadData);
  flash1_eqFunction_171(data, threadData);
  flash1_eqFunction_172(data, threadData);
  flash1_eqFunction_191(data, threadData);
  flash1_eqFunction_452(data, threadData);
  flash1_eqFunction_451(data, threadData);
  flash1_eqFunction_454(data, threadData);
  flash1_eqFunction_195(data, threadData);
  flash1_eqFunction_447(data, threadData);
  flash1_eqFunction_446(data, threadData);
  flash1_eqFunction_453(data, threadData);
  flash1_eqFunction_450(data, threadData);
  flash1_eqFunction_449(data, threadData);
  flash1_eqFunction_201(data, threadData);
  flash1_eqFunction_462(data, threadData);
  flash1_eqFunction_458(data, threadData);
  flash1_eqFunction_459(data, threadData);
  flash1_eqFunction_467(data, threadData);
  flash1_eqFunction_460(data, threadData);
  flash1_eqFunction_455(data, threadData);
  flash1_eqFunction_456(data, threadData);
  flash1_eqFunction_466(data, threadData);
  flash1_eqFunction_457(data, threadData);
  flash1_eqFunction_463(data, threadData);
  flash1_eqFunction_464(data, threadData);
  flash1_eqFunction_468(data, threadData);
  flash1_eqFunction_465(data, threadData);
  flash1_eqFunction_215(data, threadData);
  flash1_eqFunction_470(data, threadData);
  flash1_eqFunction_471(data, threadData);
  flash1_eqFunction_472(data, threadData);
  flash1_eqFunction_473(data, threadData);
  flash1_eqFunction_474(data, threadData);
  flash1_eqFunction_221(data, threadData);
  flash1_eqFunction_475(data, threadData);
  flash1_eqFunction_417(data, threadData);
  flash1_eqFunction_418(data, threadData);
  flash1_eqFunction_491(data, threadData);
  flash1_eqFunction_244(data, threadData);
  flash1_eqFunction_245(data, threadData);
  flash1_eqFunction_516(data, threadData);
  flash1_eqFunction_515(data, threadData);
  flash1_eqFunction_520(data, threadData);
  flash1_eqFunction_521(data, threadData);
  flash1_eqFunction_518(data, threadData);
  flash1_eqFunction_251(data, threadData);
  flash1_eqFunction_525(data, threadData);
  flash1_eqFunction_529(data, threadData);
  flash1_eqFunction_526(data, threadData);
  flash1_eqFunction_532(data, threadData);
  flash1_eqFunction_256(data, threadData);
  flash1_eqFunction_539(data, threadData);
  flash1_eqFunction_540(data, threadData);
  flash1_eqFunction_519(data, threadData);
  flash1_eqFunction_492(data, threadData);
  flash1_eqFunction_522(data, threadData);
  flash1_eqFunction_523(data, threadData);
  flash1_eqFunction_530(data, threadData);
  flash1_eqFunction_531(data, threadData);
  flash1_eqFunction_536(data, threadData);
  flash1_eqFunction_527(data, threadData);
  flash1_eqFunction_528(data, threadData);
  flash1_eqFunction_535(data, threadData);
  flash1_eqFunction_533(data, threadData);
  flash1_eqFunction_534(data, threadData);
  flash1_eqFunction_537(data, threadData);
  flash1_eqFunction_541(data, threadData);
  flash1_eqFunction_542(data, threadData);
  flash1_eqFunction_274(data, threadData);
  flash1_eqFunction_543(data, threadData);
  flash1_eqFunction_544(data, threadData);
  flash1_eqFunction_277(data, threadData);
  flash1_eqFunction_278(data, threadData);
  flash1_eqFunction_279(data, threadData);
  flash1_eqFunction_280(data, threadData);
  flash1_eqFunction_281(data, threadData);
  flash1_eqFunction_282(data, threadData);
  flash1_eqFunction_283(data, threadData);
  flash1_eqFunction_284(data, threadData);
  flash1_eqFunction_285(data, threadData);
  flash1_eqFunction_286(data, threadData);
  flash1_eqFunction_287(data, threadData);
  flash1_eqFunction_288(data, threadData);
  flash1_eqFunction_289(data, threadData);
  flash1_eqFunction_290(data, threadData);
  flash1_eqFunction_291(data, threadData);
  flash1_eqFunction_292(data, threadData);
  flash1_eqFunction_293(data, threadData);
  flash1_eqFunction_294(data, threadData);
  flash1_eqFunction_295(data, threadData);
  flash1_eqFunction_296(data, threadData);
  flash1_eqFunction_297(data, threadData);
  flash1_eqFunction_298(data, threadData);
  flash1_eqFunction_299(data, threadData);
  flash1_eqFunction_300(data, threadData);
  flash1_eqFunction_301(data, threadData);
  flash1_eqFunction_302(data, threadData);
  flash1_eqFunction_303(data, threadData);
  flash1_eqFunction_304(data, threadData);
  flash1_eqFunction_305(data, threadData);
  flash1_eqFunction_306(data, threadData);
  flash1_eqFunction_307(data, threadData);
  flash1_eqFunction_308(data, threadData);
  flash1_eqFunction_309(data, threadData);
  flash1_eqFunction_310(data, threadData);
  flash1_eqFunction_311(data, threadData);
  flash1_eqFunction_312(data, threadData);
  flash1_eqFunction_313(data, threadData);
  flash1_eqFunction_314(data, threadData);
  flash1_eqFunction_315(data, threadData);
  flash1_eqFunction_316(data, threadData);
  flash1_eqFunction_317(data, threadData);
  flash1_eqFunction_318(data, threadData);
  flash1_eqFunction_319(data, threadData);
  flash1_eqFunction_320(data, threadData);
  flash1_eqFunction_321(data, threadData);
  flash1_eqFunction_322(data, threadData);
  flash1_eqFunction_323(data, threadData);
  flash1_eqFunction_324(data, threadData);
  flash1_eqFunction_325(data, threadData);
  flash1_eqFunction_326(data, threadData);
  flash1_eqFunction_327(data, threadData);
  flash1_eqFunction_328(data, threadData);
  flash1_eqFunction_329(data, threadData);
  flash1_eqFunction_330(data, threadData);
  flash1_eqFunction_331(data, threadData);
  flash1_eqFunction_332(data, threadData);
  flash1_eqFunction_333(data, threadData);
  flash1_eqFunction_334(data, threadData);
  flash1_eqFunction_335(data, threadData);
  TRACE_POP
}


int flash1_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  flash1_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int flash1_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int flash1_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

