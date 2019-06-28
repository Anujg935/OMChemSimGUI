/* Initialization */
#include "mixer1_model.h"
#include "mixer1_11mix.h"
#include "mixer1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void mixer1_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
MatStm2._gamma[1] = 1.0
*/
void mixer1_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[58] /* MatStm2.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
MatStm2._gamma[2] = 1.0
*/
void mixer1_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[59] /* MatStm2.gamma[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[1] = 0.0
*/
void mixer1_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[83] /* MatStm2.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[1] = 0.0
*/
void mixer1_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[77] /* MatStm2.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[1] = 0.0
*/
void mixer1_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[80] /* MatStm2.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
MatStm3._gamma[1] = 1.0
*/
void mixer1_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[149] /* MatStm3.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
MatStm3._gamma[2] = 1.0
*/
void mixer1_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[150] /* MatStm3.gamma[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
MatStm3._resMolSpHeat[1] = 0.0
*/
void mixer1_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[174] /* MatStm3.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
MatStm3._resMolEnth[1] = 0.0
*/
void mixer1_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[168] /* MatStm3.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
MatStm3._resMolEntr[1] = 0.0
*/
void mixer1_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[171] /* MatStm3.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
MatStm4._gamma[1] = 1.0
*/
void mixer1_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[239] /* MatStm4.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
MatStm4._gamma[2] = 1.0
*/
void mixer1_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[240] /* MatStm4.gamma[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
MatStm4._resMolSpHeat[1] = 0.0
*/
void mixer1_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[264] /* MatStm4.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
MatStm4._resMolEnth[1] = 0.0
*/
void mixer1_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[258] /* MatStm4.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
MatStm4._resMolEntr[1] = 0.0
*/
void mixer1_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[261] /* MatStm4.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
MatStm4._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm4.comp[2].VP[1], MatStm4.comp[2].VP[2], MatStm4.comp[2].VP[3], MatStm4.comp[2].VP[4], MatStm4.comp[2].VP[5], MatStm4.comp[2].VP[6]}, 340.0)
*/
void mixer1_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[509], (modelica_real)data->simulationInfo->realParameter[510], (modelica_real)data->simulationInfo->realParameter[511], (modelica_real)data->simulationInfo->realParameter[512], (modelica_real)data->simulationInfo->realParameter[513], (modelica_real)data->simulationInfo->realParameter[514]);
  data->localData[0]->realVars[195] /* MatStm4.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, 340.0);
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
MatStm4._K[2] = 9.869622289554979e-006 * MatStm4.Psat[2]
*/
void mixer1_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[187] /* MatStm4.K[2] variable */ = (9.869622289554979e-006) * (data->localData[0]->realVars[195] /* MatStm4.Psat[2] variable */);
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
MatStm4._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm4.comp[1].VP[1], MatStm4.comp[1].VP[2], MatStm4.comp[1].VP[3], MatStm4.comp[1].VP[4], MatStm4.comp[1].VP[5], MatStm4.comp[1].VP[6]}, 340.0)
*/
void mixer1_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[503], (modelica_real)data->simulationInfo->realParameter[504], (modelica_real)data->simulationInfo->realParameter[505], (modelica_real)data->simulationInfo->realParameter[506], (modelica_real)data->simulationInfo->realParameter[507], (modelica_real)data->simulationInfo->realParameter[508]);
  data->localData[0]->realVars[194] /* MatStm4.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp1, 340.0);
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
MatStm4._K[1] = 9.869622289554979e-006 * MatStm4.Psat[1]
*/
void mixer1_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[186] /* MatStm4.K[1] variable */ = (9.869622289554979e-006) * (data->localData[0]->realVars[194] /* MatStm4.Psat[1] variable */);
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm4.comp[2].SH, {MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, {MatStm4.comp[2].HOV[1], MatStm4.comp[2].HOV[2], MatStm4.comp[2].HOV[3], MatStm4.comp[2].HOV[4], MatStm4.comp[2].HOV[5], MatStm4.comp[2].HOV[6]}, MatStm4.comp[2].Tc, 340.0)
*/
void mixer1_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426]);
  data->localData[0]->realVars[214] /* MatStm4.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[486], tmp2, tmp3, data->simulationInfo->realParameter[496], 340.0);
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm4.comp[2].SH, {MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, {MatStm4.comp[2].HOV[1], MatStm4.comp[2].HOV[2], MatStm4.comp[2].HOV[3], MatStm4.comp[2].HOV[4], MatStm4.comp[2].HOV[5], MatStm4.comp[2].HOV[6]}, MatStm4.comp[2].Tc, 340.0)
*/
void mixer1_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  real_array tmp4;
  real_array tmp5;
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426]);
  data->localData[0]->realVars[212] /* MatStm4.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[486], tmp4, tmp5, data->simulationInfo->realParameter[496], 340.0);
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, 340.0)
*/
void mixer1_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  real_array tmp6;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  data->localData[0]->realVars[238] /* MatStm4.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp6, 340.0);
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm4.comp[2].LiqCp[1], MatStm4.comp[2].LiqCp[2], MatStm4.comp[2].LiqCp[3], MatStm4.comp[2].LiqCp[4], MatStm4.comp[2].LiqCp[5], MatStm4.comp[2].LiqCp[6]}, 340.0)
*/
void mixer1_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[437], (modelica_real)data->simulationInfo->realParameter[438], (modelica_real)data->simulationInfo->realParameter[439], (modelica_real)data->simulationInfo->realParameter[440], (modelica_real)data->simulationInfo->realParameter[441], (modelica_real)data->simulationInfo->realParameter[442]);
  data->localData[0]->realVars[236] /* MatStm4.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp7, 340.0);
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm4.comp[1].SH, {MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, {MatStm4.comp[1].HOV[1], MatStm4.comp[1].HOV[2], MatStm4.comp[1].HOV[3], MatStm4.comp[1].HOV[4], MatStm4.comp[1].HOV[5], MatStm4.comp[1].HOV[6]}, MatStm4.comp[1].Tc, 340.0)
*/
void mixer1_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420]);
  data->localData[0]->realVars[213] /* MatStm4.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[485], tmp8, tmp9, data->simulationInfo->realParameter[495], 340.0);
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm4.comp[1].SH, {MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, {MatStm4.comp[1].HOV[1], MatStm4.comp[1].HOV[2], MatStm4.comp[1].HOV[3], MatStm4.comp[1].HOV[4], MatStm4.comp[1].HOV[5], MatStm4.comp[1].HOV[6]}, MatStm4.comp[1].Tc, 340.0)
*/
void mixer1_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420]);
  data->localData[0]->realVars[211] /* MatStm4.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[485], tmp10, tmp11, data->simulationInfo->realParameter[495], 340.0);
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, 340.0)
*/
void mixer1_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  real_array tmp12;
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  data->localData[0]->realVars[237] /* MatStm4.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp12, 340.0);
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm4.comp[1].LiqCp[1], MatStm4.comp[1].LiqCp[2], MatStm4.comp[1].LiqCp[3], MatStm4.comp[1].LiqCp[4], MatStm4.comp[1].LiqCp[5], MatStm4.comp[1].LiqCp[6]}, 340.0)
*/
void mixer1_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)data->simulationInfo->realParameter[431], (modelica_real)data->simulationInfo->realParameter[432], (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434], (modelica_real)data->simulationInfo->realParameter[435], (modelica_real)data->simulationInfo->realParameter[436]);
  data->localData[0]->realVars[235] /* MatStm4.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp13, 340.0);
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
MatStm3._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm3.comp[2].VP[1], MatStm3.comp[2].VP[2], MatStm3.comp[2].VP[3], MatStm3.comp[2].VP[4], MatStm3.comp[2].VP[5], MatStm3.comp[2].VP[6]}, 321.0)
*/
void mixer1_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  real_array tmp14;
  array_alloc_scalar_real_array(&tmp14, 6, (modelica_real)data->simulationInfo->realParameter[351], (modelica_real)data->simulationInfo->realParameter[352], (modelica_real)data->simulationInfo->realParameter[353], (modelica_real)data->simulationInfo->realParameter[354], (modelica_real)data->simulationInfo->realParameter[355], (modelica_real)data->simulationInfo->realParameter[356]);
  data->localData[0]->realVars[105] /* MatStm3.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp14, 321.0);
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
MatStm3._K[2] = 9.87049905243209e-006 * MatStm3.Psat[2]
*/
void mixer1_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[97] /* MatStm3.K[2] variable */ = (9.87049905243209e-006) * (data->localData[0]->realVars[105] /* MatStm3.Psat[2] variable */);
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
MatStm3._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm3.comp[1].VP[1], MatStm3.comp[1].VP[2], MatStm3.comp[1].VP[3], MatStm3.comp[1].VP[4], MatStm3.comp[1].VP[5], MatStm3.comp[1].VP[6]}, 321.0)
*/
void mixer1_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  real_array tmp15;
  array_alloc_scalar_real_array(&tmp15, 6, (modelica_real)data->simulationInfo->realParameter[345], (modelica_real)data->simulationInfo->realParameter[346], (modelica_real)data->simulationInfo->realParameter[347], (modelica_real)data->simulationInfo->realParameter[348], (modelica_real)data->simulationInfo->realParameter[349], (modelica_real)data->simulationInfo->realParameter[350]);
  data->localData[0]->realVars[104] /* MatStm3.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp15, 321.0);
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
MatStm3._K[1] = 9.87049905243209e-006 * MatStm3.Psat[1]
*/
void mixer1_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->localData[0]->realVars[96] /* MatStm3.K[1] variable */ = (9.87049905243209e-006) * (data->localData[0]->realVars[104] /* MatStm3.Psat[1] variable */);
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm3.comp[2].SH, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tc, 321.0)
*/
void mixer1_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  real_array tmp16;
  real_array tmp17;
  array_alloc_scalar_real_array(&tmp16, 6, (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364], (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368]);
  array_alloc_scalar_real_array(&tmp17, 6, (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264], (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268]);
  data->localData[0]->realVars[124] /* MatStm3.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[328], tmp16, tmp17, data->simulationInfo->realParameter[338], 321.0);
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm3.comp[2].SH, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tc, 321.0)
*/
void mixer1_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  real_array tmp18;
  real_array tmp19;
  array_alloc_scalar_real_array(&tmp18, 6, (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364], (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368]);
  array_alloc_scalar_real_array(&tmp19, 6, (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264], (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268]);
  data->localData[0]->realVars[122] /* MatStm3.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[328], tmp18, tmp19, data->simulationInfo->realParameter[338], 321.0);
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, 321.0)
*/
void mixer1_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  real_array tmp20;
  array_alloc_scalar_real_array(&tmp20, 6, (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364], (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368]);
  data->localData[0]->realVars[148] /* MatStm3.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp20, 321.0);
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm3.comp[2].LiqCp[1], MatStm3.comp[2].LiqCp[2], MatStm3.comp[2].LiqCp[3], MatStm3.comp[2].LiqCp[4], MatStm3.comp[2].LiqCp[5], MatStm3.comp[2].LiqCp[6]}, 321.0)
*/
void mixer1_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  real_array tmp21;
  array_alloc_scalar_real_array(&tmp21, 6, (modelica_real)data->simulationInfo->realParameter[279], (modelica_real)data->simulationInfo->realParameter[280], (modelica_real)data->simulationInfo->realParameter[281], (modelica_real)data->simulationInfo->realParameter[282], (modelica_real)data->simulationInfo->realParameter[283], (modelica_real)data->simulationInfo->realParameter[284]);
  data->localData[0]->realVars[146] /* MatStm3.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp21, 321.0);
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm3.comp[1].SH, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tc, 321.0)
*/
void mixer1_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  real_array tmp22;
  real_array tmp23;
  array_alloc_scalar_real_array(&tmp22, 6, (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358], (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362]);
  array_alloc_scalar_real_array(&tmp23, 6, (modelica_real)data->simulationInfo->realParameter[257], (modelica_real)data->simulationInfo->realParameter[258], (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262]);
  data->localData[0]->realVars[123] /* MatStm3.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[327], tmp22, tmp23, data->simulationInfo->realParameter[337], 321.0);
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm3.comp[1].SH, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tc, 321.0)
*/
void mixer1_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  real_array tmp24;
  real_array tmp25;
  array_alloc_scalar_real_array(&tmp24, 6, (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358], (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362]);
  array_alloc_scalar_real_array(&tmp25, 6, (modelica_real)data->simulationInfo->realParameter[257], (modelica_real)data->simulationInfo->realParameter[258], (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262]);
  data->localData[0]->realVars[121] /* MatStm3.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[327], tmp24, tmp25, data->simulationInfo->realParameter[337], 321.0);
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, 321.0)
*/
void mixer1_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  real_array tmp26;
  array_alloc_scalar_real_array(&tmp26, 6, (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358], (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362]);
  data->localData[0]->realVars[147] /* MatStm3.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp26, 321.0);
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm3.comp[1].LiqCp[1], MatStm3.comp[1].LiqCp[2], MatStm3.comp[1].LiqCp[3], MatStm3.comp[1].LiqCp[4], MatStm3.comp[1].LiqCp[5], MatStm3.comp[1].LiqCp[6]}, 321.0)
*/
void mixer1_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  real_array tmp27;
  array_alloc_scalar_real_array(&tmp27, 6, (modelica_real)data->simulationInfo->realParameter[273], (modelica_real)data->simulationInfo->realParameter[274], (modelica_real)data->simulationInfo->realParameter[275], (modelica_real)data->simulationInfo->realParameter[276], (modelica_real)data->simulationInfo->realParameter[277], (modelica_real)data->simulationInfo->realParameter[278]);
  data->localData[0]->realVars[145] /* MatStm3.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp27, 321.0);
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
MatStm3._compMolFrac[1,1] = 0.9
*/
void mixer1_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[137] /* MatStm3.compMolFrac[1,1] variable */ = 0.9;
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[1,1] = 100.0 * MatStm3.compMolFrac[1,1]
*/
void mixer1_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[131] /* MatStm3.compMolFlo[1,1] variable */ = (100.0) * (data->localData[0]->realVars[137] /* MatStm3.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[1,1] = MatStm3.compMolFlo[1,1] * MatStm3.comp[1].MW
*/
void mixer1_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->localData[0]->realVars[107] /* MatStm3.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[131] /* MatStm3.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[321]);
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
MatStm3._compMolFrac[1,2] = 0.1
*/
void mixer1_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[138] /* MatStm3.compMolFrac[1,2] variable */ = 0.1;
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[1,2] = 100.0 * MatStm3.compMolFrac[1,2]
*/
void mixer1_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->localData[0]->realVars[132] /* MatStm3.compMolFlo[1,2] variable */ = (100.0) * (data->localData[0]->realVars[138] /* MatStm3.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[1,2] = MatStm3.compMolFlo[1,2] * MatStm3.comp[2].MW
*/
void mixer1_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->localData[0]->realVars[108] /* MatStm3.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[132] /* MatStm3.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[322]);
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
MatStm3._Pbubl = MatStm3.compMolFrac[1,1] * exp(MatStm3.comp[1].VP[2] + MatStm3.comp[1].VP[3] / 321.0 + MatStm3.comp[1].VP[4] * 5.771441123130016 + MatStm3.comp[1].VP[5] * 321.0 ^ MatStm3.comp[1].VP[6]) + MatStm3.compMolFrac[1,2] * exp(MatStm3.comp[2].VP[2] + MatStm3.comp[2].VP[3] / 321.0 + MatStm3.comp[2].VP[4] * 5.771441123130016 + MatStm3.comp[2].VP[5] * 321.0 ^ MatStm3.comp[2].VP[6])
*/
void mixer1_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
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
  tmp28 = 321.0;
  tmp29 = data->simulationInfo->realParameter[350];
  if(tmp28 < 0.0 && tmp29 != 0.0)
  {
    tmp31 = modf(tmp29, &tmp32);
    
    if(tmp31 > 0.5)
    {
      tmp31 -= 1.0;
      tmp32 += 1.0;
    }
    else if(tmp31 < -0.5)
    {
      tmp31 += 1.0;
      tmp32 -= 1.0;
    }
    
    if(fabs(tmp31) < 1e-10)
      tmp30 = pow(tmp28, tmp32);
    else
    {
      tmp34 = modf(1.0/tmp29, &tmp33);
      if(tmp34 > 0.5)
      {
        tmp34 -= 1.0;
        tmp33 += 1.0;
      }
      else if(tmp34 < -0.5)
      {
        tmp34 += 1.0;
        tmp33 -= 1.0;
      }
      if(fabs(tmp34) < 1e-10 && ((unsigned long)tmp33 & 1))
      {
        tmp30 = -pow(-tmp28, tmp31)*pow(tmp28, tmp32);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp28, tmp29);
      }
    }
  }
  else
  {
    tmp30 = pow(tmp28, tmp29);
  }
  if(isnan(tmp30) || isinf(tmp30))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp28, tmp29);
  }tmp35 = 321.0;
  tmp36 = data->simulationInfo->realParameter[356];
  if(tmp35 < 0.0 && tmp36 != 0.0)
  {
    tmp38 = modf(tmp36, &tmp39);
    
    if(tmp38 > 0.5)
    {
      tmp38 -= 1.0;
      tmp39 += 1.0;
    }
    else if(tmp38 < -0.5)
    {
      tmp38 += 1.0;
      tmp39 -= 1.0;
    }
    
    if(fabs(tmp38) < 1e-10)
      tmp37 = pow(tmp35, tmp39);
    else
    {
      tmp41 = modf(1.0/tmp36, &tmp40);
      if(tmp41 > 0.5)
      {
        tmp41 -= 1.0;
        tmp40 += 1.0;
      }
      else if(tmp41 < -0.5)
      {
        tmp41 += 1.0;
        tmp40 -= 1.0;
      }
      if(fabs(tmp41) < 1e-10 && ((unsigned long)tmp40 & 1))
      {
        tmp37 = -pow(-tmp35, tmp38)*pow(tmp35, tmp39);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp35, tmp36);
      }
    }
  }
  else
  {
    tmp37 = pow(tmp35, tmp36);
  }
  if(isnan(tmp37) || isinf(tmp37))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp35, tmp36);
  }
  data->localData[0]->realVars[102] /* MatStm3.Pbubl variable */ = (data->localData[0]->realVars[137] /* MatStm3.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[346] + DIVISION_SIM(data->simulationInfo->realParameter[347],321.0,"321.0",equationIndexes) + (data->simulationInfo->realParameter[348]) * (5.771441123130016) + (data->simulationInfo->realParameter[349]) * (tmp30))) + (data->localData[0]->realVars[138] /* MatStm3.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[352] + DIVISION_SIM(data->simulationInfo->realParameter[353],321.0,"321.0",equationIndexes) + (data->simulationInfo->realParameter[354]) * (5.771441123130016) + (data->simulationInfo->realParameter[355]) * (tmp37)));
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
MatStm3._Pdew = 1.0 / (MatStm3.compMolFrac[1,1] * exp((-MatStm3.comp[1].VP[2]) - MatStm3.comp[1].VP[3] / 321.0 - MatStm3.comp[1].VP[4] * 5.771441123130016 - MatStm3.comp[1].VP[5] * 321.0 ^ MatStm3.comp[1].VP[6]) + MatStm3.compMolFrac[1,2] * exp((-MatStm3.comp[2].VP[2]) - MatStm3.comp[2].VP[3] / 321.0 - MatStm3.comp[2].VP[4] * 5.771441123130016 - MatStm3.comp[2].VP[5] * 321.0 ^ MatStm3.comp[2].VP[6]))
*/
void mixer1_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
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
  tmp42 = 321.0;
  tmp43 = data->simulationInfo->realParameter[350];
  if(tmp42 < 0.0 && tmp43 != 0.0)
  {
    tmp45 = modf(tmp43, &tmp46);
    
    if(tmp45 > 0.5)
    {
      tmp45 -= 1.0;
      tmp46 += 1.0;
    }
    else if(tmp45 < -0.5)
    {
      tmp45 += 1.0;
      tmp46 -= 1.0;
    }
    
    if(fabs(tmp45) < 1e-10)
      tmp44 = pow(tmp42, tmp46);
    else
    {
      tmp48 = modf(1.0/tmp43, &tmp47);
      if(tmp48 > 0.5)
      {
        tmp48 -= 1.0;
        tmp47 += 1.0;
      }
      else if(tmp48 < -0.5)
      {
        tmp48 += 1.0;
        tmp47 -= 1.0;
      }
      if(fabs(tmp48) < 1e-10 && ((unsigned long)tmp47 & 1))
      {
        tmp44 = -pow(-tmp42, tmp45)*pow(tmp42, tmp46);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp42, tmp43);
      }
    }
  }
  else
  {
    tmp44 = pow(tmp42, tmp43);
  }
  if(isnan(tmp44) || isinf(tmp44))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp42, tmp43);
  }tmp49 = 321.0;
  tmp50 = data->simulationInfo->realParameter[356];
  if(tmp49 < 0.0 && tmp50 != 0.0)
  {
    tmp52 = modf(tmp50, &tmp53);
    
    if(tmp52 > 0.5)
    {
      tmp52 -= 1.0;
      tmp53 += 1.0;
    }
    else if(tmp52 < -0.5)
    {
      tmp52 += 1.0;
      tmp53 -= 1.0;
    }
    
    if(fabs(tmp52) < 1e-10)
      tmp51 = pow(tmp49, tmp53);
    else
    {
      tmp55 = modf(1.0/tmp50, &tmp54);
      if(tmp55 > 0.5)
      {
        tmp55 -= 1.0;
        tmp54 += 1.0;
      }
      else if(tmp55 < -0.5)
      {
        tmp55 += 1.0;
        tmp54 -= 1.0;
      }
      if(fabs(tmp55) < 1e-10 && ((unsigned long)tmp54 & 1))
      {
        tmp51 = -pow(-tmp49, tmp52)*pow(tmp49, tmp53);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp49, tmp50);
      }
    }
  }
  else
  {
    tmp51 = pow(tmp49, tmp50);
  }
  if(isnan(tmp51) || isinf(tmp51))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp49, tmp50);
  }
  data->localData[0]->realVars[103] /* MatStm3.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[137] /* MatStm3.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[346]) - (DIVISION_SIM(data->simulationInfo->realParameter[347],321.0,"321.0",equationIndexes)) - ((data->simulationInfo->realParameter[348]) * (5.771441123130016)) - ((data->simulationInfo->realParameter[349]) * (tmp44)))) + (data->localData[0]->realVars[138] /* MatStm3.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[352]) - (DIVISION_SIM(data->simulationInfo->realParameter[353],321.0,"321.0",equationIndexes)) - ((data->simulationInfo->realParameter[354]) * (5.771441123130016)) - ((data->simulationInfo->realParameter[355]) * (tmp51)))),"MatStm3.compMolFrac[1,1] * exp((-MatStm3.comp[1].VP[2]) - MatStm3.comp[1].VP[3] / 321.0 - MatStm3.comp[1].VP[4] * 5.771441123130016 - MatStm3.comp[1].VP[5] * 321.0 ^ MatStm3.comp[1].VP[6]) + MatStm3.compMolFrac[1,2] * exp((-MatStm3.comp[2].VP[2]) - MatStm3.comp[2].VP[3] / 321.0 - MatStm3.comp[2].VP[4] * 5.771441123130016 - MatStm3.comp[2].VP[5] * 321.0 ^ MatStm3.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
MatStm4._compMolFrac[1,1] = 0.9
*/
void mixer1_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->realVars[227] /* MatStm4.compMolFrac[1,1] variable */ = 0.9;
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[1,1] = 100.0 * MatStm4.compMolFrac[1,1]
*/
void mixer1_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[221] /* MatStm4.compMolFlo[1,1] variable */ = (100.0) * (data->localData[0]->realVars[227] /* MatStm4.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[1,1] = MatStm4.compMolFlo[1,1] * MatStm4.comp[1].MW
*/
void mixer1_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[197] /* MatStm4.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[221] /* MatStm4.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[479]);
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
MatStm2._compMolFrac[1,1] = 0.5 * (MatStm3.compMolFrac[1,1] + MatStm4.compMolFrac[1,1])
*/
void mixer1_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  data->localData[0]->realVars[46] /* MatStm2.compMolFrac[1,1] variable */ = (0.5) * (data->localData[0]->realVars[137] /* MatStm3.compMolFrac[1,1] variable */ + data->localData[0]->realVars[227] /* MatStm4.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
MatStm4._compMolFrac[1,2] = 0.1
*/
void mixer1_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[228] /* MatStm4.compMolFrac[1,2] variable */ = 0.1;
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[1,2] = 100.0 * MatStm4.compMolFrac[1,2]
*/
void mixer1_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[222] /* MatStm4.compMolFlo[1,2] variable */ = (100.0) * (data->localData[0]->realVars[228] /* MatStm4.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[1,2] = MatStm4.compMolFlo[1,2] * MatStm4.comp[2].MW
*/
void mixer1_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  data->localData[0]->realVars[198] /* MatStm4.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[222] /* MatStm4.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[480]);
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
MatStm4._Pbubl = MatStm4.compMolFrac[1,1] * exp(MatStm4.comp[1].VP[2] + MatStm4.comp[1].VP[3] / 340.0 + MatStm4.comp[1].VP[4] * 5.828945617610208 + MatStm4.comp[1].VP[5] * 340.0 ^ MatStm4.comp[1].VP[6]) + MatStm4.compMolFrac[1,2] * exp(MatStm4.comp[2].VP[2] + MatStm4.comp[2].VP[3] / 340.0 + MatStm4.comp[2].VP[4] * 5.828945617610208 + MatStm4.comp[2].VP[5] * 340.0 ^ MatStm4.comp[2].VP[6])
*/
void mixer1_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
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
  tmp56 = 340.0;
  tmp57 = data->simulationInfo->realParameter[508];
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
  }tmp63 = 340.0;
  tmp64 = data->simulationInfo->realParameter[514];
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
  data->localData[0]->realVars[192] /* MatStm4.Pbubl variable */ = (data->localData[0]->realVars[227] /* MatStm4.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[504] + DIVISION_SIM(data->simulationInfo->realParameter[505],340.0,"340.0",equationIndexes) + (data->simulationInfo->realParameter[506]) * (5.828945617610208) + (data->simulationInfo->realParameter[507]) * (tmp58))) + (data->localData[0]->realVars[228] /* MatStm4.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[510] + DIVISION_SIM(data->simulationInfo->realParameter[511],340.0,"340.0",equationIndexes) + (data->simulationInfo->realParameter[512]) * (5.828945617610208) + (data->simulationInfo->realParameter[513]) * (tmp65)));
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
MatStm4._Pdew = 1.0 / (MatStm4.compMolFrac[1,1] * exp((-MatStm4.comp[1].VP[2]) - MatStm4.comp[1].VP[3] / 340.0 - MatStm4.comp[1].VP[4] * 5.828945617610208 - MatStm4.comp[1].VP[5] * 340.0 ^ MatStm4.comp[1].VP[6]) + MatStm4.compMolFrac[1,2] * exp((-MatStm4.comp[2].VP[2]) - MatStm4.comp[2].VP[3] / 340.0 - MatStm4.comp[2].VP[4] * 5.828945617610208 - MatStm4.comp[2].VP[5] * 340.0 ^ MatStm4.comp[2].VP[6]))
*/
void mixer1_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
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
  tmp70 = 340.0;
  tmp71 = data->simulationInfo->realParameter[508];
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
  }tmp77 = 340.0;
  tmp78 = data->simulationInfo->realParameter[514];
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
  data->localData[0]->realVars[193] /* MatStm4.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[227] /* MatStm4.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[504]) - (DIVISION_SIM(data->simulationInfo->realParameter[505],340.0,"340.0",equationIndexes)) - ((data->simulationInfo->realParameter[506]) * (5.828945617610208)) - ((data->simulationInfo->realParameter[507]) * (tmp72)))) + (data->localData[0]->realVars[228] /* MatStm4.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[510]) - (DIVISION_SIM(data->simulationInfo->realParameter[511],340.0,"340.0",equationIndexes)) - ((data->simulationInfo->realParameter[512]) * (5.828945617610208)) - ((data->simulationInfo->realParameter[513]) * (tmp79)))),"MatStm4.compMolFrac[1,1] * exp((-MatStm4.comp[1].VP[2]) - MatStm4.comp[1].VP[3] / 340.0 - MatStm4.comp[1].VP[4] * 5.828945617610208 - MatStm4.comp[1].VP[5] * 340.0 ^ MatStm4.comp[1].VP[6]) + MatStm4.compMolFrac[1,2] * exp((-MatStm4.comp[2].VP[2]) - MatStm4.comp[2].VP[3] / 340.0 - MatStm4.comp[2].VP[4] * 5.828945617610208 - MatStm4.comp[2].VP[5] * 340.0 ^ MatStm4.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
MatStm2._compMolFrac[1,2] = 0.5 * (MatStm3.compMolFrac[1,2] + MatStm4.compMolFrac[1,2])
*/
void mixer1_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->localData[0]->realVars[47] /* MatStm2.compMolFrac[1,2] variable */ = (0.5) * (data->localData[0]->realVars[138] /* MatStm3.compMolFrac[1,2] variable */ + data->localData[0]->realVars[228] /* MatStm4.compMolFrac[1,2] variable */);
  TRACE_POP
}
extern void mixer1_eqFunction_279(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_277(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_280(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_278(DATA *data, threadData_t *threadData);


void mixer1_eqFunction_62(DATA*, threadData_t*);
void mixer1_eqFunction_63(DATA*, threadData_t*);
void mixer1_eqFunction_64(DATA*, threadData_t*);
void mixer1_eqFunction_65(DATA*, threadData_t*);
void mixer1_eqFunction_66(DATA*, threadData_t*);
void mixer1_eqFunction_67(DATA*, threadData_t*);
void mixer1_eqFunction_68(DATA*, threadData_t*);
void mixer1_eqFunction_73(DATA*, threadData_t*);
void mixer1_eqFunction_72(DATA*, threadData_t*);
void mixer1_eqFunction_71(DATA*, threadData_t*);
void mixer1_eqFunction_70(DATA*, threadData_t*);
void mixer1_eqFunction_69(DATA*, threadData_t*);
/*
equation index: 86
indexNonlinear: 0
type: NONLINEAR

vars: {MatStm3._totMolFlo[3], MatStm3._compMolFrac[3,1], MatStm3._compMolFrac[2,1], MatStm3._compMolFrac[3,2], MatStm3._compMolFrac[2,2]}
eqns: {62, 63, 64, 65, 66, 67, 68, 73, 72, 71, 70, 69}
*/
void mixer1_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 86 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[182] /* MatStm3.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[141] /* MatStm3.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[139] /* MatStm3.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[142] /* MatStm3.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[140] /* MatStm3.compMolFrac[2,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,86};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 86 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[182] /* MatStm3.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[141] /* MatStm3.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[139] /* MatStm3.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[142] /* MatStm3.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[140] /* MatStm3.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  TRACE_POP
}
extern void mixer1_eqFunction_322(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_321(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_310(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_309(DATA *data, threadData_t *threadData);


/*
equation index: 91
type: ALGORITHM

  (MatStm3.compMolEntr[2,2], MatStm3.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[2].AS, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tb, MatStm3.comp[2].Tc, 321.0, 101312.0, MatStm3.compMolFrac[2,2], MatStm3.compMolFrac[3,2]);
*/
void mixer1_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364], (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264], (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268]);
  data->localData[0]->realVars[128] /* MatStm3.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[240], tmp0, tmp1, data->simulationInfo->realParameter[336], data->simulationInfo->realParameter[338], 321.0, 101312.0, data->localData[0]->realVars[140] /* MatStm3.compMolFrac[2,2] variable */, data->localData[0]->realVars[142] /* MatStm3.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[130] /* MatStm3.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void mixer1_eqFunction_306(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_307(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_312(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_329(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_331(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_330(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_311(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_326(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_328(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_327(DATA *data, threadData_t *threadData);


/*
equation index: 102
type: ALGORITHM

  (MatStm3.compMolEntr[2,1], MatStm3.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[1].AS, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tb, MatStm3.comp[1].Tc, 321.0, 101312.0, MatStm3.compMolFrac[2,1], MatStm3.compMolFrac[3,1]);
*/
void mixer1_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358], (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[257], (modelica_real)data->simulationInfo->realParameter[258], (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262]);
  data->localData[0]->realVars[127] /* MatStm3.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[239], tmp2, tmp3, data->simulationInfo->realParameter[335], data->simulationInfo->realParameter[337], 321.0, 101312.0, data->localData[0]->realVars[139] /* MatStm3.compMolFrac[2,1] variable */, data->localData[0]->realVars[141] /* MatStm3.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[129] /* MatStm3.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void mixer1_eqFunction_314(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_318(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_332(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_334(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_333(DATA *data, threadData_t *threadData);


/*
equation index: 108
type: ALGORITHM

  MatStm3.MW[3] := $START.MatStm3.MW[3];
  MatStm3.MW[2] := $START.MatStm3.MW[2];
  MatStm3.MW[1] := $START.MatStm3.MW[1];
  for i in 1:2 loop
    MatStm3.MW[:] := {MatStm3.MW[1] + MatStm3.compMolFrac[1,i] * MatStm3.comp[i].MW, MatStm3.MW[2] + MatStm3.compMolFrac[2,i] * MatStm3.comp[i].MW, MatStm3.MW[3] + MatStm3.compMolFrac[3,i] * MatStm3.comp[i].MW};
  end for;
*/
void mixer1_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[100] /* MatStm3.MW[3] variable */ = data->modelData->realVarsData[100].attribute /* MatStm3.MW[3] variable */.start;

  data->localData[0]->realVars[99] /* MatStm3.MW[2] variable */ = data->modelData->realVarsData[99].attribute /* MatStm3.MW[2] variable */.start;

  data->localData[0]->realVars[98] /* MatStm3.MW[1] variable */ = data->modelData->realVarsData[98].attribute /* MatStm3.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[98] /* MatStm3.MW[1] variable */ + ((&data->localData[0]->realVars[137] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[99] /* MatStm3.MW[2] variable */ + ((&data->localData[0]->realVars[137] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[100] /* MatStm3.MW[3] variable */ + ((&data->localData[0]->realVars[137] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[98] /* MatStm3.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
extern void mixer1_eqFunction_319(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_323(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_316(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_324(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_320(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_317(DATA *data, threadData_t *threadData);


/*
equation index: 115
type: LINEAR

<var>MatStm3._compMasFrac[2,1]</var>
<var>MatStm3._compMasFrac[3,1]</var>
<var>MatStm3._compMasFrac[1,1]</var>
<var>MatStm3._compMasFrac[2,2]</var>
<var>MatStm3._compMasFrac[3,2]</var>
<row>
  <cell>if 101312.0 >= MatStm3.Pbubl then -MatStm3.compMasFrac[1,2] else if 101312.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,2] else -MatStm3.compMasFrac[1,2]</cell>
  <cell>if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101312.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,1] else if 101312.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,1] else MatStm3.compMasFlo[1,1]</cell>
  <cell>if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,1] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="3">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="0">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then -1.0 else if 101312.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then -0.0 else if 101312.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101312.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="2">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else 0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void mixer1_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[115] /* MatStm3.compMasFrac[2,1] variable */,data->localData[1]->realVars[117] /* MatStm3.compMasFrac[3,1] variable */,data->localData[1]->realVars[113] /* MatStm3.compMasFrac[1,1] variable */,data->localData[1]->realVars[116] /* MatStm3.compMasFrac[2,2] variable */,data->localData[1]->realVars[118] /* MatStm3.compMasFrac[3,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 115 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,115};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 115 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[115] /* MatStm3.compMasFrac[2,1] variable */ = aux_x[0];
  data->localData[0]->realVars[117] /* MatStm3.compMasFrac[3,1] variable */ = aux_x[1];
  data->localData[0]->realVars[113] /* MatStm3.compMasFrac[1,1] variable */ = aux_x[2];
  data->localData[0]->realVars[116] /* MatStm3.compMasFrac[2,2] variable */ = aux_x[3];
  data->localData[0]->realVars[118] /* MatStm3.compMasFrac[3,2] variable */ = aux_x[4];
  TRACE_POP
}

void mixer1_eqFunction_116(DATA*, threadData_t*);
void mixer1_eqFunction_117(DATA*, threadData_t*);
void mixer1_eqFunction_118(DATA*, threadData_t*);
void mixer1_eqFunction_119(DATA*, threadData_t*);
void mixer1_eqFunction_120(DATA*, threadData_t*);
void mixer1_eqFunction_121(DATA*, threadData_t*);
void mixer1_eqFunction_122(DATA*, threadData_t*);
void mixer1_eqFunction_127(DATA*, threadData_t*);
void mixer1_eqFunction_126(DATA*, threadData_t*);
void mixer1_eqFunction_125(DATA*, threadData_t*);
void mixer1_eqFunction_124(DATA*, threadData_t*);
void mixer1_eqFunction_123(DATA*, threadData_t*);
/*
equation index: 140
indexNonlinear: 1
type: NONLINEAR

vars: {MatStm4._totMolFlo[2], MatStm4._compMolFrac[2,1], MatStm4._compMolFrac[2,2], MatStm4._compMolFrac[3,1], MatStm4._compMolFrac[3,2]}
eqns: {116, 117, 118, 119, 120, 121, 122, 127, 126, 125, 124, 123}
*/
void mixer1_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 140 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[271] /* MatStm4.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[229] /* MatStm4.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[230] /* MatStm4.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[231] /* MatStm4.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[232] /* MatStm4.compMolFrac[3,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,140};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 140 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[271] /* MatStm4.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[229] /* MatStm4.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[230] /* MatStm4.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[231] /* MatStm4.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[232] /* MatStm4.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  TRACE_POP
}
extern void mixer1_eqFunction_360(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_361(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_366(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_365(DATA *data, threadData_t *threadData);


/*
equation index: 145
type: ALGORITHM

  (MatStm4.compMolEntr[2,1], MatStm4.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm4.comp[1].AS, {MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, {MatStm4.comp[1].HOV[1], MatStm4.comp[1].HOV[2], MatStm4.comp[1].HOV[3], MatStm4.comp[1].HOV[4], MatStm4.comp[1].HOV[5], MatStm4.comp[1].HOV[6]}, MatStm4.comp[1].Tb, MatStm4.comp[1].Tc, 340.0, 101321.0, MatStm4.compMolFrac[2,1], MatStm4.compMolFrac[3,1]);
*/
void mixer1_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420]);
  data->localData[0]->realVars[217] /* MatStm4.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[397], tmp0, tmp1, data->simulationInfo->realParameter[493], data->simulationInfo->realParameter[495], 340.0, 101321.0, data->localData[0]->realVars[229] /* MatStm4.compMolFrac[2,1] variable */, data->localData[0]->realVars[231] /* MatStm4.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[219] /* MatStm4.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void mixer1_eqFunction_364(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_363(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_368(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_383(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_385(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_384(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_386(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_447(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_446(DATA *data, threadData_t *threadData);


void mixer1_eqFunction_155(DATA*, threadData_t*);
void mixer1_eqFunction_156(DATA*, threadData_t*);
void mixer1_eqFunction_157(DATA*, threadData_t*);
void mixer1_eqFunction_158(DATA*, threadData_t*);
void mixer1_eqFunction_159(DATA*, threadData_t*);
void mixer1_eqFunction_160(DATA*, threadData_t*);
void mixer1_eqFunction_161(DATA*, threadData_t*);
void mixer1_eqFunction_162(DATA*, threadData_t*);
void mixer1_eqFunction_163(DATA*, threadData_t*);
void mixer1_eqFunction_164(DATA*, threadData_t*);
void mixer1_eqFunction_165(DATA*, threadData_t*);
void mixer1_eqFunction_166(DATA*, threadData_t*);
void mixer1_eqFunction_167(DATA*, threadData_t*);
void mixer1_eqFunction_168(DATA*, threadData_t*);
void mixer1_eqFunction_169(DATA*, threadData_t*);
void mixer1_eqFunction_170(DATA*, threadData_t*);
void mixer1_eqFunction_171(DATA*, threadData_t*);
void mixer1_eqFunction_172(DATA*, threadData_t*);
void mixer1_eqFunction_173(DATA*, threadData_t*);
void mixer1_eqFunction_179(DATA*, threadData_t*);
void mixer1_eqFunction_178(DATA*, threadData_t*);
void mixer1_eqFunction_177(DATA*, threadData_t*);
void mixer1_eqFunction_176(DATA*, threadData_t*);
void mixer1_eqFunction_175(DATA*, threadData_t*);
void mixer1_eqFunction_174(DATA*, threadData_t*);
/*
equation index: 180
indexNonlinear: 2
type: NONLINEAR

vars: {MatStm2._totMolFlo[3], MatStm2._compMolFrac[2,1], MatStm2._compMolFrac[3,2], MatStm2._compMolFrac[2,2], MatStm2._T, MatStm2._compMolFrac[3,1]}
eqns: {155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 179, 178, 177, 176, 175, 174}
*/
void mixer1_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 180 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[91] /* MatStm2.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[48] /* MatStm2.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[51] /* MatStm2.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[49] /* MatStm2.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[15] /* MatStm2.T variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = data->localData[0]->realVars[50] /* MatStm2.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,180};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 180 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[91] /* MatStm2.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[48] /* MatStm2.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[51] /* MatStm2.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[49] /* MatStm2.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[15] /* MatStm2.T variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  data->localData[0]->realVars[50] /* MatStm2.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  TRACE_POP
}
extern void mixer1_eqFunction_419(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_418(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_421(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_420(DATA *data, threadData_t *threadData);


/*
equation index: 185
type: ALGORITHM

  MatStm2.MW[3] := $START.MatStm2.MW[3];
  MatStm2.MW[2] := $START.MatStm2.MW[2];
  MatStm2.MW[1] := $START.MatStm2.MW[1];
  for i in 1:2 loop
    MatStm2.MW[:] := {MatStm2.MW[1] + MatStm2.compMolFrac[1,i] * MatStm2.comp[i].MW, MatStm2.MW[2] + MatStm2.compMolFrac[2,i] * MatStm2.comp[i].MW, MatStm2.MW[3] + MatStm2.compMolFrac[3,i] * MatStm2.comp[i].MW};
  end for;
*/
void mixer1_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  data->localData[0]->realVars[9] /* MatStm2.MW[3] variable */ = data->modelData->realVarsData[9].attribute /* MatStm2.MW[3] variable */.start;

  data->localData[0]->realVars[8] /* MatStm2.MW[2] variable */ = data->modelData->realVarsData[8].attribute /* MatStm2.MW[2] variable */.start;

  data->localData[0]->realVars[7] /* MatStm2.MW[1] variable */ = data->modelData->realVarsData[7].attribute /* MatStm2.MW[1] variable */.start;

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 2);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp3, tmp5); $Pi += tmp4)
    {
      array_alloc_scalar_real_array(&tmp0, 3, (modelica_real)data->localData[0]->realVars[7] /* MatStm2.MW[1] variable */ + ((&data->localData[0]->realVars[46] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[8] /* MatStm2.MW[2] variable */ + ((&data->localData[0]->realVars[46] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[9] /* MatStm2.MW[3] variable */ + ((&data->localData[0]->realVars[46] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
      real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[7] /* MatStm2.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp0, &tmp2, &tmp1);
    }
  }
  TRACE_POP
}
extern void mixer1_eqFunction_427(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_424(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_429(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_425(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_423(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_426(DATA *data, threadData_t *threadData);


/*
equation index: 192
type: LINEAR

<var>MatStm2._compMasFrac[1,1]</var>
<var>MatStm2._compMasFrac[3,1]</var>
<var>MatStm2._compMasFrac[2,2]</var>
<var>MatStm2._compMasFrac[2,1]</var>
<var>MatStm2._compMasFrac[3,2]</var>
<row>
  <cell>if 101316.5 >= MatStm2.Pbubl then -MatStm2.compMasFrac[1,2] else if 101316.5 >= MatStm2.Pdew then MatStm2.compMasFlo[3,2] else -MatStm2.compMasFrac[1,2]</cell>
  <cell>if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then MatStm2.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then MatStm2.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then MatStm2.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101316.5 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,1] else if 101316.5 >= MatStm2.Pdew then MatStm2.compMasFlo[3,1] else MatStm2.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="2">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then -1.0 else if 101316.5 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101316.5 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then -0.0 else if 101316.5 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void mixer1_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[22] /* MatStm2.compMasFrac[1,1] variable */,data->localData[1]->realVars[26] /* MatStm2.compMasFrac[3,1] variable */,data->localData[1]->realVars[25] /* MatStm2.compMasFrac[2,2] variable */,data->localData[1]->realVars[24] /* MatStm2.compMasFrac[2,1] variable */,data->localData[1]->realVars[27] /* MatStm2.compMasFrac[3,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 192 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,192};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 192 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[22] /* MatStm2.compMasFrac[1,1] variable */ = aux_x[0];
  data->localData[0]->realVars[26] /* MatStm2.compMasFrac[3,1] variable */ = aux_x[1];
  data->localData[0]->realVars[25] /* MatStm2.compMasFrac[2,2] variable */ = aux_x[2];
  data->localData[0]->realVars[24] /* MatStm2.compMasFrac[2,1] variable */ = aux_x[3];
  data->localData[0]->realVars[27] /* MatStm2.compMasFrac[3,2] variable */ = aux_x[4];
  TRACE_POP
}
extern void mixer1_eqFunction_431(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_432(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_439(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_440(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_441(DATA *data, threadData_t *threadData);


/*
equation index: 198
type: ALGORITHM

  (MatStm2.compMolEntr[2,2], MatStm2.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[2].AS, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tb, MatStm2.comp[2].Tc, MatStm2.T, 101316.5, MatStm2.compMolFrac[2,2], MatStm2.compMolFrac[3,2]);
*/
void mixer1_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  real_array tmp6;
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[37] /* MatStm2.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[82], tmp6, tmp7, data->simulationInfo->realParameter[178], data->simulationInfo->realParameter[180], data->localData[0]->realVars[15] /* MatStm2.T variable */, 101316.5, data->localData[0]->realVars[49] /* MatStm2.compMolFrac[2,2] variable */, data->localData[0]->realVars[51] /* MatStm2.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[39] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void mixer1_eqFunction_442(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_443(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_445(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_444(DATA *data, threadData_t *threadData);


/*
equation index: 203
type: ALGORITHM

  (MatStm2.compMolEntr[2,1], MatStm2.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[1].AS, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tb, MatStm2.comp[1].Tc, MatStm2.T, 101316.5, MatStm2.compMolFrac[2,1], MatStm2.compMolFrac[3,1]);
*/
void mixer1_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[36] /* MatStm2.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[81], tmp8, tmp9, data->simulationInfo->realParameter[177], data->simulationInfo->realParameter[179], data->localData[0]->realVars[15] /* MatStm2.T variable */, 101316.5, data->localData[0]->realVars[48] /* MatStm2.compMolFrac[2,1] variable */, data->localData[0]->realVars[50] /* MatStm2.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[38] /* MatStm2.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void mixer1_eqFunction_435(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_434(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_436(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_438(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_437(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_367(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_380(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_382(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_381(DATA *data, threadData_t *threadData);


/*
equation index: 213
type: ALGORITHM

  (MatStm4.compMolEntr[2,2], MatStm4.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm4.comp[2].AS, {MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, {MatStm4.comp[2].HOV[1], MatStm4.comp[2].HOV[2], MatStm4.comp[2].HOV[3], MatStm4.comp[2].HOV[4], MatStm4.comp[2].HOV[5], MatStm4.comp[2].HOV[6]}, MatStm4.comp[2].Tb, MatStm4.comp[2].Tc, 340.0, 101321.0, MatStm4.compMolFrac[2,2], MatStm4.compMolFrac[3,2]);
*/
void mixer1_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426]);
  data->localData[0]->realVars[218] /* MatStm4.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[398], tmp10, tmp11, data->simulationInfo->realParameter[494], data->simulationInfo->realParameter[496], 340.0, 101321.0, data->localData[0]->realVars[230] /* MatStm4.compMolFrac[2,2] variable */, data->localData[0]->realVars[232] /* MatStm4.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[220] /* MatStm4.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void mixer1_eqFunction_370(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_376(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_448(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_450(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_449(DATA *data, threadData_t *threadData);


/*
equation index: 219
type: ALGORITHM

  MatStm4.MW[3] := $START.MatStm4.MW[3];
  MatStm4.MW[2] := $START.MatStm4.MW[2];
  MatStm4.MW[1] := $START.MatStm4.MW[1];
  for i in 1:2 loop
    MatStm4.MW[:] := {MatStm4.MW[1] + MatStm4.compMolFrac[1,i] * MatStm4.comp[i].MW, MatStm4.MW[2] + MatStm4.compMolFrac[2,i] * MatStm4.comp[i].MW, MatStm4.MW[3] + MatStm4.compMolFrac[3,i] * MatStm4.comp[i].MW};
  end for;
*/
void mixer1_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  real_array tmp12;
  index_spec_t tmp13;
  real_array tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  data->localData[0]->realVars[190] /* MatStm4.MW[3] variable */ = data->modelData->realVarsData[190].attribute /* MatStm4.MW[3] variable */.start;

  data->localData[0]->realVars[189] /* MatStm4.MW[2] variable */ = data->modelData->realVarsData[189].attribute /* MatStm4.MW[2] variable */.start;

  data->localData[0]->realVars[188] /* MatStm4.MW[1] variable */ = data->modelData->realVarsData[188].attribute /* MatStm4.MW[1] variable */.start;

  tmp15 = ((modelica_integer) 1); tmp16 = 1; tmp17 = ((modelica_integer) 2);
  if(!(((tmp16 > 0) && (tmp15 > tmp17)) || ((tmp16 < 0) && (tmp15 < tmp17))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp15, tmp17); $Pi += tmp16)
    {
      array_alloc_scalar_real_array(&tmp12, 3, (modelica_real)data->localData[0]->realVars[188] /* MatStm4.MW[1] variable */ + ((&data->localData[0]->realVars[227] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[189] /* MatStm4.MW[2] variable */ + ((&data->localData[0]->realVars[227] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[190] /* MatStm4.MW[3] variable */ + ((&data->localData[0]->realVars[227] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp13, 1, (1), (int*)0, 'W');
      real_array_create(&tmp14, (modelica_real*)&data->localData[0]->realVars[188] /* MatStm4.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp12, &tmp14, &tmp13);
    }
  }
  TRACE_POP
}
extern void mixer1_eqFunction_372(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_373(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_375(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_374(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_377(DATA *data, threadData_t *threadData);

extern void mixer1_eqFunction_379(DATA *data, threadData_t *threadData);


/*
equation index: 226
type: LINEAR

<var>MatStm4._compMasFrac[2,2]</var>
<var>MatStm4._compMasFrac[3,2]</var>
<var>MatStm4._compMasFrac[2,1]</var>
<var>MatStm4._compMasFrac[3,1]</var>
<var>MatStm4._compMasFrac[1,1]</var>
<row>
  <cell>if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then MatStm4.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101321.0 >= MatStm4.Pbubl then MatStm4.compMasFlo[1,1] else if 101321.0 >= MatStm4.Pdew then MatStm4.compMasFlo[3,1] else MatStm4.compMasFlo[1,1]</cell>
  <cell>if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then MatStm4.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then MatStm4.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101321.0 >= MatStm4.Pbubl then -MatStm4.compMasFrac[1,2] else if 101321.0 >= MatStm4.Pdew then MatStm4.compMasFlo[3,2] else -MatStm4.compMasFrac[1,2]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="0" col="2">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="3">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then -1.0 else if 101321.0 >= MatStm4.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then -0.0 else if 101321.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then -MatStm4.totMasFlo[1] else if 101321.0 >= MatStm4.Pdew then -0.0 else -MatStm4.totMasFlo[1])</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="4">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[3] else 1.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void mixer1_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[206] /* MatStm4.compMasFrac[2,2] variable */,data->localData[1]->realVars[208] /* MatStm4.compMasFrac[3,2] variable */,data->localData[1]->realVars[205] /* MatStm4.compMasFrac[2,1] variable */,data->localData[1]->realVars[207] /* MatStm4.compMasFrac[3,1] variable */,data->localData[1]->realVars[203] /* MatStm4.compMasFrac[1,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 226 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,226};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 226 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[206] /* MatStm4.compMasFrac[2,2] variable */ = aux_x[0];
  data->localData[0]->realVars[208] /* MatStm4.compMasFrac[3,2] variable */ = aux_x[1];
  data->localData[0]->realVars[205] /* MatStm4.compMasFrac[2,1] variable */ = aux_x[2];
  data->localData[0]->realVars[207] /* MatStm4.compMasFrac[3,1] variable */ = aux_x[3];
  data->localData[0]->realVars[203] /* MatStm4.compMasFrac[1,1] variable */ = aux_x[4];
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[1] = 200.0
*/
void mixer1_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  data->localData[0]->realVars[89] /* MatStm2.totMolFlo[1] variable */ = 200.0;
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
MatStm2._P = 101316.5
*/
void mixer1_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  data->localData[0]->realVars[10] /* MatStm2.P variable */ = 101316.5;
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[1] = 1.0
*/
void mixer1_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  data->localData[0]->realVars[60] /* MatStm2.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
MatStm2._gammaDew[1] = 1.0
*/
void mixer1_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->localData[0]->realVars[62] /* MatStm2.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
MatStm2._liqfugcoeff_bubl[1] = 1.0
*/
void mixer1_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  data->localData[0]->realVars[66] /* MatStm2.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
MatStm2._vapfugcoeff_dew[1] = 1.0
*/
void mixer1_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  data->localData[0]->realVars[94] /* MatStm2.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[2] = 1.0
*/
void mixer1_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  data->localData[0]->realVars[61] /* MatStm2.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
MatStm2._gammaDew[2] = 1.0
*/
void mixer1_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  data->localData[0]->realVars[63] /* MatStm2.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
MatStm2._liqfugcoeff_bubl[2] = 1.0
*/
void mixer1_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  data->localData[0]->realVars[67] /* MatStm2.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
MatStm2._vapfugcoeff_dew[2] = 1.0
*/
void mixer1_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->localData[0]->realVars[95] /* MatStm2.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[2] = 0.0
*/
void mixer1_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  data->localData[0]->realVars[84] /* MatStm2.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[3] = 0.0
*/
void mixer1_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->localData[0]->realVars[85] /* MatStm2.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[2] = 0.0
*/
void mixer1_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  data->localData[0]->realVars[78] /* MatStm2.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[3] = 0.0
*/
void mixer1_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->localData[0]->realVars[79] /* MatStm2.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[2] = 0.0
*/
void mixer1_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->localData[0]->realVars[81] /* MatStm2.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[3] = 0.0
*/
void mixer1_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->localData[0]->realVars[82] /* MatStm2.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
MatStm3._gammaBubl[1] = 1.0
*/
void mixer1_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->localData[0]->realVars[151] /* MatStm3.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
MatStm3._gammaDew[1] = 1.0
*/
void mixer1_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->localData[0]->realVars[153] /* MatStm3.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
MatStm3._liqfugcoeff_bubl[1] = 1.0
*/
void mixer1_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->localData[0]->realVars[157] /* MatStm3.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
MatStm3._vapfugcoeff_dew[1] = 1.0
*/
void mixer1_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->localData[0]->realVars[184] /* MatStm3.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
MatStm3._gammaBubl[2] = 1.0
*/
void mixer1_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->localData[0]->realVars[152] /* MatStm3.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
MatStm3._gammaDew[2] = 1.0
*/
void mixer1_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->localData[0]->realVars[154] /* MatStm3.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
MatStm3._liqfugcoeff_bubl[2] = 1.0
*/
void mixer1_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->localData[0]->realVars[158] /* MatStm3.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
MatStm3._vapfugcoeff_dew[2] = 1.0
*/
void mixer1_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->localData[0]->realVars[185] /* MatStm3.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
MatStm3._resMolSpHeat[2] = 0.0
*/
void mixer1_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->localData[0]->realVars[175] /* MatStm3.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
MatStm3._resMolSpHeat[3] = 0.0
*/
void mixer1_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->localData[0]->realVars[176] /* MatStm3.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
MatStm3._resMolEnth[2] = 0.0
*/
void mixer1_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->localData[0]->realVars[169] /* MatStm3.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
MatStm3._resMolEnth[3] = 0.0
*/
void mixer1_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->localData[0]->realVars[170] /* MatStm3.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
MatStm3._resMolEntr[2] = 0.0
*/
void mixer1_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->localData[0]->realVars[172] /* MatStm3.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
MatStm3._resMolEntr[3] = 0.0
*/
void mixer1_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->localData[0]->realVars[173] /* MatStm3.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
MatStm4._gammaBubl[1] = 1.0
*/
void mixer1_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->localData[0]->realVars[241] /* MatStm4.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
MatStm4._gammaDew[1] = 1.0
*/
void mixer1_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->localData[0]->realVars[243] /* MatStm4.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
MatStm4._liqfugcoeff_bubl[1] = 1.0
*/
void mixer1_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->localData[0]->realVars[247] /* MatStm4.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
MatStm4._vapfugcoeff_dew[1] = 1.0
*/
void mixer1_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->localData[0]->realVars[274] /* MatStm4.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
MatStm4._gammaBubl[2] = 1.0
*/
void mixer1_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->localData[0]->realVars[242] /* MatStm4.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
MatStm4._gammaDew[2] = 1.0
*/
void mixer1_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->localData[0]->realVars[244] /* MatStm4.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
MatStm4._liqfugcoeff_bubl[2] = 1.0
*/
void mixer1_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->localData[0]->realVars[248] /* MatStm4.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
MatStm4._vapfugcoeff_dew[2] = 1.0
*/
void mixer1_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->localData[0]->realVars[275] /* MatStm4.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
MatStm4._resMolSpHeat[2] = 0.0
*/
void mixer1_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->localData[0]->realVars[265] /* MatStm4.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
MatStm4._resMolSpHeat[3] = 0.0
*/
void mixer1_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->localData[0]->realVars[266] /* MatStm4.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
MatStm4._resMolEnth[2] = 0.0
*/
void mixer1_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  data->localData[0]->realVars[259] /* MatStm4.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
MatStm4._resMolEnth[3] = 0.0
*/
void mixer1_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->localData[0]->realVars[260] /* MatStm4.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
MatStm4._resMolEntr[2] = 0.0
*/
void mixer1_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->localData[0]->realVars[262] /* MatStm4.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
MatStm4._resMolEntr[3] = 0.0
*/
void mixer1_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->localData[0]->realVars[263] /* MatStm4.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
MatStm3._P = 101312.0
*/
void mixer1_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->localData[0]->realVars[101] /* MatStm3.P variable */ = 101312.0;
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
MatStm3._T = 321.0
*/
void mixer1_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->localData[0]->realVars[106] /* MatStm3.T variable */ = 321.0;
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[1] = 100.0
*/
void mixer1_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->localData[0]->realVars[180] /* MatStm3.totMolFlo[1] variable */ = 100.0;
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
MatStm4._P = 101321.0
*/
void mixer1_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->localData[0]->realVars[191] /* MatStm4.P variable */ = 101321.0;
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
MatStm4._T = 340.0
*/
void mixer1_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  data->localData[0]->realVars[196] /* MatStm4.T variable */ = 340.0;
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
MatStm4._totMolFlo[1] = 100.0
*/
void mixer1_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  data->localData[0]->realVars[270] /* MatStm4.totMolFlo[1] variable */ = 100.0;
  TRACE_POP
}
OMC_DISABLE_OPT
void mixer1_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  mixer1_eqFunction_1(data, threadData);
  mixer1_eqFunction_2(data, threadData);
  mixer1_eqFunction_3(data, threadData);
  mixer1_eqFunction_4(data, threadData);
  mixer1_eqFunction_5(data, threadData);
  mixer1_eqFunction_6(data, threadData);
  mixer1_eqFunction_7(data, threadData);
  mixer1_eqFunction_8(data, threadData);
  mixer1_eqFunction_9(data, threadData);
  mixer1_eqFunction_10(data, threadData);
  mixer1_eqFunction_11(data, threadData);
  mixer1_eqFunction_12(data, threadData);
  mixer1_eqFunction_13(data, threadData);
  mixer1_eqFunction_14(data, threadData);
  mixer1_eqFunction_15(data, threadData);
  mixer1_eqFunction_16(data, threadData);
  mixer1_eqFunction_17(data, threadData);
  mixer1_eqFunction_18(data, threadData);
  mixer1_eqFunction_19(data, threadData);
  mixer1_eqFunction_20(data, threadData);
  mixer1_eqFunction_21(data, threadData);
  mixer1_eqFunction_22(data, threadData);
  mixer1_eqFunction_23(data, threadData);
  mixer1_eqFunction_24(data, threadData);
  mixer1_eqFunction_25(data, threadData);
  mixer1_eqFunction_26(data, threadData);
  mixer1_eqFunction_27(data, threadData);
  mixer1_eqFunction_28(data, threadData);
  mixer1_eqFunction_29(data, threadData);
  mixer1_eqFunction_30(data, threadData);
  mixer1_eqFunction_31(data, threadData);
  mixer1_eqFunction_32(data, threadData);
  mixer1_eqFunction_33(data, threadData);
  mixer1_eqFunction_34(data, threadData);
  mixer1_eqFunction_35(data, threadData);
  mixer1_eqFunction_36(data, threadData);
  mixer1_eqFunction_37(data, threadData);
  mixer1_eqFunction_38(data, threadData);
  mixer1_eqFunction_39(data, threadData);
  mixer1_eqFunction_40(data, threadData);
  mixer1_eqFunction_41(data, threadData);
  mixer1_eqFunction_42(data, threadData);
  mixer1_eqFunction_43(data, threadData);
  mixer1_eqFunction_44(data, threadData);
  mixer1_eqFunction_45(data, threadData);
  mixer1_eqFunction_46(data, threadData);
  mixer1_eqFunction_47(data, threadData);
  mixer1_eqFunction_48(data, threadData);
  mixer1_eqFunction_49(data, threadData);
  mixer1_eqFunction_50(data, threadData);
  mixer1_eqFunction_51(data, threadData);
  mixer1_eqFunction_52(data, threadData);
  mixer1_eqFunction_53(data, threadData);
  mixer1_eqFunction_54(data, threadData);
  mixer1_eqFunction_55(data, threadData);
  mixer1_eqFunction_56(data, threadData);
  mixer1_eqFunction_57(data, threadData);
  mixer1_eqFunction_279(data, threadData);
  mixer1_eqFunction_277(data, threadData);
  mixer1_eqFunction_280(data, threadData);
  mixer1_eqFunction_278(data, threadData);
  mixer1_eqFunction_86(data, threadData);
  mixer1_eqFunction_322(data, threadData);
  mixer1_eqFunction_321(data, threadData);
  mixer1_eqFunction_310(data, threadData);
  mixer1_eqFunction_309(data, threadData);
  mixer1_eqFunction_91(data, threadData);
  mixer1_eqFunction_306(data, threadData);
  mixer1_eqFunction_307(data, threadData);
  mixer1_eqFunction_312(data, threadData);
  mixer1_eqFunction_329(data, threadData);
  mixer1_eqFunction_331(data, threadData);
  mixer1_eqFunction_330(data, threadData);
  mixer1_eqFunction_311(data, threadData);
  mixer1_eqFunction_326(data, threadData);
  mixer1_eqFunction_328(data, threadData);
  mixer1_eqFunction_327(data, threadData);
  mixer1_eqFunction_102(data, threadData);
  mixer1_eqFunction_314(data, threadData);
  mixer1_eqFunction_318(data, threadData);
  mixer1_eqFunction_332(data, threadData);
  mixer1_eqFunction_334(data, threadData);
  mixer1_eqFunction_333(data, threadData);
  mixer1_eqFunction_108(data, threadData);
  mixer1_eqFunction_319(data, threadData);
  mixer1_eqFunction_323(data, threadData);
  mixer1_eqFunction_316(data, threadData);
  mixer1_eqFunction_324(data, threadData);
  mixer1_eqFunction_320(data, threadData);
  mixer1_eqFunction_317(data, threadData);
  mixer1_eqFunction_115(data, threadData);
  mixer1_eqFunction_140(data, threadData);
  mixer1_eqFunction_360(data, threadData);
  mixer1_eqFunction_361(data, threadData);
  mixer1_eqFunction_366(data, threadData);
  mixer1_eqFunction_365(data, threadData);
  mixer1_eqFunction_145(data, threadData);
  mixer1_eqFunction_364(data, threadData);
  mixer1_eqFunction_363(data, threadData);
  mixer1_eqFunction_368(data, threadData);
  mixer1_eqFunction_383(data, threadData);
  mixer1_eqFunction_385(data, threadData);
  mixer1_eqFunction_384(data, threadData);
  mixer1_eqFunction_386(data, threadData);
  mixer1_eqFunction_447(data, threadData);
  mixer1_eqFunction_446(data, threadData);
  mixer1_eqFunction_180(data, threadData);
  mixer1_eqFunction_419(data, threadData);
  mixer1_eqFunction_418(data, threadData);
  mixer1_eqFunction_421(data, threadData);
  mixer1_eqFunction_420(data, threadData);
  mixer1_eqFunction_185(data, threadData);
  mixer1_eqFunction_427(data, threadData);
  mixer1_eqFunction_424(data, threadData);
  mixer1_eqFunction_429(data, threadData);
  mixer1_eqFunction_425(data, threadData);
  mixer1_eqFunction_423(data, threadData);
  mixer1_eqFunction_426(data, threadData);
  mixer1_eqFunction_192(data, threadData);
  mixer1_eqFunction_431(data, threadData);
  mixer1_eqFunction_432(data, threadData);
  mixer1_eqFunction_439(data, threadData);
  mixer1_eqFunction_440(data, threadData);
  mixer1_eqFunction_441(data, threadData);
  mixer1_eqFunction_198(data, threadData);
  mixer1_eqFunction_442(data, threadData);
  mixer1_eqFunction_443(data, threadData);
  mixer1_eqFunction_445(data, threadData);
  mixer1_eqFunction_444(data, threadData);
  mixer1_eqFunction_203(data, threadData);
  mixer1_eqFunction_435(data, threadData);
  mixer1_eqFunction_434(data, threadData);
  mixer1_eqFunction_436(data, threadData);
  mixer1_eqFunction_438(data, threadData);
  mixer1_eqFunction_437(data, threadData);
  mixer1_eqFunction_367(data, threadData);
  mixer1_eqFunction_380(data, threadData);
  mixer1_eqFunction_382(data, threadData);
  mixer1_eqFunction_381(data, threadData);
  mixer1_eqFunction_213(data, threadData);
  mixer1_eqFunction_370(data, threadData);
  mixer1_eqFunction_376(data, threadData);
  mixer1_eqFunction_448(data, threadData);
  mixer1_eqFunction_450(data, threadData);
  mixer1_eqFunction_449(data, threadData);
  mixer1_eqFunction_219(data, threadData);
  mixer1_eqFunction_372(data, threadData);
  mixer1_eqFunction_373(data, threadData);
  mixer1_eqFunction_375(data, threadData);
  mixer1_eqFunction_374(data, threadData);
  mixer1_eqFunction_377(data, threadData);
  mixer1_eqFunction_379(data, threadData);
  mixer1_eqFunction_226(data, threadData);
  mixer1_eqFunction_227(data, threadData);
  mixer1_eqFunction_228(data, threadData);
  mixer1_eqFunction_229(data, threadData);
  mixer1_eqFunction_230(data, threadData);
  mixer1_eqFunction_231(data, threadData);
  mixer1_eqFunction_232(data, threadData);
  mixer1_eqFunction_233(data, threadData);
  mixer1_eqFunction_234(data, threadData);
  mixer1_eqFunction_235(data, threadData);
  mixer1_eqFunction_236(data, threadData);
  mixer1_eqFunction_237(data, threadData);
  mixer1_eqFunction_238(data, threadData);
  mixer1_eqFunction_239(data, threadData);
  mixer1_eqFunction_240(data, threadData);
  mixer1_eqFunction_241(data, threadData);
  mixer1_eqFunction_242(data, threadData);
  mixer1_eqFunction_243(data, threadData);
  mixer1_eqFunction_244(data, threadData);
  mixer1_eqFunction_245(data, threadData);
  mixer1_eqFunction_246(data, threadData);
  mixer1_eqFunction_247(data, threadData);
  mixer1_eqFunction_248(data, threadData);
  mixer1_eqFunction_249(data, threadData);
  mixer1_eqFunction_250(data, threadData);
  mixer1_eqFunction_251(data, threadData);
  mixer1_eqFunction_252(data, threadData);
  mixer1_eqFunction_253(data, threadData);
  mixer1_eqFunction_254(data, threadData);
  mixer1_eqFunction_255(data, threadData);
  mixer1_eqFunction_256(data, threadData);
  mixer1_eqFunction_257(data, threadData);
  mixer1_eqFunction_258(data, threadData);
  mixer1_eqFunction_259(data, threadData);
  mixer1_eqFunction_260(data, threadData);
  mixer1_eqFunction_261(data, threadData);
  mixer1_eqFunction_262(data, threadData);
  mixer1_eqFunction_263(data, threadData);
  mixer1_eqFunction_264(data, threadData);
  mixer1_eqFunction_265(data, threadData);
  mixer1_eqFunction_266(data, threadData);
  mixer1_eqFunction_267(data, threadData);
  mixer1_eqFunction_268(data, threadData);
  mixer1_eqFunction_269(data, threadData);
  mixer1_eqFunction_270(data, threadData);
  mixer1_eqFunction_271(data, threadData);
  mixer1_eqFunction_272(data, threadData);
  mixer1_eqFunction_273(data, threadData);
  mixer1_eqFunction_274(data, threadData);
  mixer1_eqFunction_275(data, threadData);
  mixer1_eqFunction_276(data, threadData);
  TRACE_POP
}


int mixer1_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  mixer1_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int mixer1_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int mixer1_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

