/* Initialization */
#include "splitter1_model.h"
#include "splitter1_11mix.h"
#include "splitter1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void splitter1_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
MatStm4._gamma[1] = 1.0
*/
void splitter1_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[150] /* MatStm4.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
MatStm4._gamma[2] = 1.0
*/
void splitter1_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[151] /* MatStm4.gamma[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
MatStm4._resMolSpHeat[1] = 0.0
*/
void splitter1_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[175] /* MatStm4.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
MatStm4._resMolEnth[1] = 0.0
*/
void splitter1_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[169] /* MatStm4.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
MatStm4._resMolEntr[1] = 0.0
*/
void splitter1_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[172] /* MatStm4.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
MatStm5._gamma[1] = 1.0
*/
void splitter1_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[238] /* MatStm5.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
MatStm5._gamma[2] = 1.0
*/
void splitter1_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[239] /* MatStm5.gamma[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
MatStm5._resMolSpHeat[1] = 0.0
*/
void splitter1_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[263] /* MatStm5.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
MatStm5._resMolEnth[1] = 0.0
*/
void splitter1_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[257] /* MatStm5.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
MatStm5._resMolEntr[1] = 0.0
*/
void splitter1_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[260] /* MatStm5.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
MatStm3._gamma[1] = 1.0
*/
void splitter1_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[61] /* MatStm3.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
MatStm3._gamma[2] = 1.0
*/
void splitter1_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[62] /* MatStm3.gamma[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
MatStm3._resMolSpHeat[1] = 0.0
*/
void splitter1_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[86] /* MatStm3.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
MatStm3._resMolEnth[1] = 0.0
*/
void splitter1_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[80] /* MatStm3.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
MatStm3._resMolEntr[1] = 0.0
*/
void splitter1_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[83] /* MatStm3.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
MatStm3._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm3.comp[2].VP[1], MatStm3.comp[2].VP[2], MatStm3.comp[2].VP[3], MatStm3.comp[2].VP[4], MatStm3.comp[2].VP[5], MatStm3.comp[2].VP[6]}, 315.0287067347126)
*/
void splitter1_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[193], (modelica_real)data->simulationInfo->realParameter[194], (modelica_real)data->simulationInfo->realParameter[195], (modelica_real)data->simulationInfo->realParameter[196], (modelica_real)data->simulationInfo->realParameter[197], (modelica_real)data->simulationInfo->realParameter[198]);
  data->localData[0]->realVars[17] /* MatStm3.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, 315.0287067347126);
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
MatStm3._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm3.comp[1].VP[1], MatStm3.comp[1].VP[2], MatStm3.comp[1].VP[3], MatStm3.comp[1].VP[4], MatStm3.comp[1].VP[5], MatStm3.comp[1].VP[6]}, 315.0287067347126)
*/
void splitter1_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[187], (modelica_real)data->simulationInfo->realParameter[188], (modelica_real)data->simulationInfo->realParameter[189], (modelica_real)data->simulationInfo->realParameter[190], (modelica_real)data->simulationInfo->realParameter[191], (modelica_real)data->simulationInfo->realParameter[192]);
  data->localData[0]->realVars[16] /* MatStm3.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp1, 315.0287067347126);
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm3.comp[2].SH, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tc, 315.0287067347126)
*/
void splitter1_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[36] /* MatStm3.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[170], tmp2, tmp3, data->simulationInfo->realParameter[180], 315.0287067347126);
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm3.comp[2].SH, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tc, 315.0287067347126)
*/
void splitter1_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  real_array tmp4;
  real_array tmp5;
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[34] /* MatStm3.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[170], tmp4, tmp5, data->simulationInfo->realParameter[180], 315.0287067347126);
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, 315.0287067347126)
*/
void splitter1_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  real_array tmp6;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  data->localData[0]->realVars[60] /* MatStm3.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp6, 315.0287067347126);
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm3.comp[2].LiqCp[1], MatStm3.comp[2].LiqCp[2], MatStm3.comp[2].LiqCp[3], MatStm3.comp[2].LiqCp[4], MatStm3.comp[2].LiqCp[5], MatStm3.comp[2].LiqCp[6]}, 315.0287067347126)
*/
void splitter1_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[121], (modelica_real)data->simulationInfo->realParameter[122], (modelica_real)data->simulationInfo->realParameter[123], (modelica_real)data->simulationInfo->realParameter[124], (modelica_real)data->simulationInfo->realParameter[125], (modelica_real)data->simulationInfo->realParameter[126]);
  data->localData[0]->realVars[58] /* MatStm3.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp7, 315.0287067347126);
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm3.comp[1].SH, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tc, 315.0287067347126)
*/
void splitter1_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[35] /* MatStm3.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[169], tmp8, tmp9, data->simulationInfo->realParameter[179], 315.0287067347126);
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm3.comp[1].SH, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tc, 315.0287067347126)
*/
void splitter1_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[33] /* MatStm3.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[169], tmp10, tmp11, data->simulationInfo->realParameter[179], 315.0287067347126);
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, 315.0287067347126)
*/
void splitter1_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  real_array tmp12;
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  data->localData[0]->realVars[59] /* MatStm3.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp12, 315.0287067347126);
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm3.comp[1].LiqCp[1], MatStm3.comp[1].LiqCp[2], MatStm3.comp[1].LiqCp[3], MatStm3.comp[1].LiqCp[4], MatStm3.comp[1].LiqCp[5], MatStm3.comp[1].LiqCp[6]}, 315.0287067347126)
*/
void splitter1_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)data->simulationInfo->realParameter[115], (modelica_real)data->simulationInfo->realParameter[116], (modelica_real)data->simulationInfo->realParameter[117], (modelica_real)data->simulationInfo->realParameter[118], (modelica_real)data->simulationInfo->realParameter[119], (modelica_real)data->simulationInfo->realParameter[120]);
  data->localData[0]->realVars[57] /* MatStm3.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp13, 315.0287067347126);
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
MatStm5._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm5.comp[2].VP[1], MatStm5.comp[2].VP[2], MatStm5.comp[2].VP[3], MatStm5.comp[2].VP[4], MatStm5.comp[2].VP[5], MatStm5.comp[2].VP[6]}, 315.0287067347126)
*/
void splitter1_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  real_array tmp14;
  array_alloc_scalar_real_array(&tmp14, 6, (modelica_real)data->simulationInfo->realParameter[509], (modelica_real)data->simulationInfo->realParameter[510], (modelica_real)data->simulationInfo->realParameter[511], (modelica_real)data->simulationInfo->realParameter[512], (modelica_real)data->simulationInfo->realParameter[513], (modelica_real)data->simulationInfo->realParameter[514]);
  data->localData[0]->realVars[195] /* MatStm5.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp14, 315.0287067347126);
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
MatStm5._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm5.comp[1].VP[1], MatStm5.comp[1].VP[2], MatStm5.comp[1].VP[3], MatStm5.comp[1].VP[4], MatStm5.comp[1].VP[5], MatStm5.comp[1].VP[6]}, 315.0287067347126)
*/
void splitter1_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  real_array tmp15;
  array_alloc_scalar_real_array(&tmp15, 6, (modelica_real)data->simulationInfo->realParameter[503], (modelica_real)data->simulationInfo->realParameter[504], (modelica_real)data->simulationInfo->realParameter[505], (modelica_real)data->simulationInfo->realParameter[506], (modelica_real)data->simulationInfo->realParameter[507], (modelica_real)data->simulationInfo->realParameter[508]);
  data->localData[0]->realVars[194] /* MatStm5.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp15, 315.0287067347126);
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm5.comp[2].SH, {MatStm5.comp[2].VapCp[1], MatStm5.comp[2].VapCp[2], MatStm5.comp[2].VapCp[3], MatStm5.comp[2].VapCp[4], MatStm5.comp[2].VapCp[5], MatStm5.comp[2].VapCp[6]}, {MatStm5.comp[2].HOV[1], MatStm5.comp[2].HOV[2], MatStm5.comp[2].HOV[3], MatStm5.comp[2].HOV[4], MatStm5.comp[2].HOV[5], MatStm5.comp[2].HOV[6]}, MatStm5.comp[2].Tc, 315.0287067347126)
*/
void splitter1_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  real_array tmp16;
  real_array tmp17;
  array_alloc_scalar_real_array(&tmp16, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  array_alloc_scalar_real_array(&tmp17, 6, (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426]);
  data->localData[0]->realVars[213] /* MatStm5.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[486], tmp16, tmp17, data->simulationInfo->realParameter[496], 315.0287067347126);
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm5.comp[2].SH, {MatStm5.comp[2].VapCp[1], MatStm5.comp[2].VapCp[2], MatStm5.comp[2].VapCp[3], MatStm5.comp[2].VapCp[4], MatStm5.comp[2].VapCp[5], MatStm5.comp[2].VapCp[6]}, {MatStm5.comp[2].HOV[1], MatStm5.comp[2].HOV[2], MatStm5.comp[2].HOV[3], MatStm5.comp[2].HOV[4], MatStm5.comp[2].HOV[5], MatStm5.comp[2].HOV[6]}, MatStm5.comp[2].Tc, 315.0287067347126)
*/
void splitter1_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  real_array tmp18;
  real_array tmp19;
  array_alloc_scalar_real_array(&tmp18, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  array_alloc_scalar_real_array(&tmp19, 6, (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426]);
  data->localData[0]->realVars[211] /* MatStm5.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[486], tmp18, tmp19, data->simulationInfo->realParameter[496], 315.0287067347126);
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm5.comp[2].VapCp[1], MatStm5.comp[2].VapCp[2], MatStm5.comp[2].VapCp[3], MatStm5.comp[2].VapCp[4], MatStm5.comp[2].VapCp[5], MatStm5.comp[2].VapCp[6]}, 315.0287067347126)
*/
void splitter1_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  real_array tmp20;
  array_alloc_scalar_real_array(&tmp20, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  data->localData[0]->realVars[237] /* MatStm5.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp20, 315.0287067347126);
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm5.comp[2].LiqCp[1], MatStm5.comp[2].LiqCp[2], MatStm5.comp[2].LiqCp[3], MatStm5.comp[2].LiqCp[4], MatStm5.comp[2].LiqCp[5], MatStm5.comp[2].LiqCp[6]}, 315.0287067347126)
*/
void splitter1_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  real_array tmp21;
  array_alloc_scalar_real_array(&tmp21, 6, (modelica_real)data->simulationInfo->realParameter[437], (modelica_real)data->simulationInfo->realParameter[438], (modelica_real)data->simulationInfo->realParameter[439], (modelica_real)data->simulationInfo->realParameter[440], (modelica_real)data->simulationInfo->realParameter[441], (modelica_real)data->simulationInfo->realParameter[442]);
  data->localData[0]->realVars[235] /* MatStm5.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp21, 315.0287067347126);
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm5.comp[1].SH, {MatStm5.comp[1].VapCp[1], MatStm5.comp[1].VapCp[2], MatStm5.comp[1].VapCp[3], MatStm5.comp[1].VapCp[4], MatStm5.comp[1].VapCp[5], MatStm5.comp[1].VapCp[6]}, {MatStm5.comp[1].HOV[1], MatStm5.comp[1].HOV[2], MatStm5.comp[1].HOV[3], MatStm5.comp[1].HOV[4], MatStm5.comp[1].HOV[5], MatStm5.comp[1].HOV[6]}, MatStm5.comp[1].Tc, 315.0287067347126)
*/
void splitter1_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  real_array tmp22;
  real_array tmp23;
  array_alloc_scalar_real_array(&tmp22, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  array_alloc_scalar_real_array(&tmp23, 6, (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420]);
  data->localData[0]->realVars[212] /* MatStm5.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[485], tmp22, tmp23, data->simulationInfo->realParameter[495], 315.0287067347126);
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm5.comp[1].SH, {MatStm5.comp[1].VapCp[1], MatStm5.comp[1].VapCp[2], MatStm5.comp[1].VapCp[3], MatStm5.comp[1].VapCp[4], MatStm5.comp[1].VapCp[5], MatStm5.comp[1].VapCp[6]}, {MatStm5.comp[1].HOV[1], MatStm5.comp[1].HOV[2], MatStm5.comp[1].HOV[3], MatStm5.comp[1].HOV[4], MatStm5.comp[1].HOV[5], MatStm5.comp[1].HOV[6]}, MatStm5.comp[1].Tc, 315.0287067347126)
*/
void splitter1_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  real_array tmp24;
  real_array tmp25;
  array_alloc_scalar_real_array(&tmp24, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  array_alloc_scalar_real_array(&tmp25, 6, (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420]);
  data->localData[0]->realVars[210] /* MatStm5.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[485], tmp24, tmp25, data->simulationInfo->realParameter[495], 315.0287067347126);
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm5.comp[1].VapCp[1], MatStm5.comp[1].VapCp[2], MatStm5.comp[1].VapCp[3], MatStm5.comp[1].VapCp[4], MatStm5.comp[1].VapCp[5], MatStm5.comp[1].VapCp[6]}, 315.0287067347126)
*/
void splitter1_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  real_array tmp26;
  array_alloc_scalar_real_array(&tmp26, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  data->localData[0]->realVars[236] /* MatStm5.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp26, 315.0287067347126);
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm5.comp[1].LiqCp[1], MatStm5.comp[1].LiqCp[2], MatStm5.comp[1].LiqCp[3], MatStm5.comp[1].LiqCp[4], MatStm5.comp[1].LiqCp[5], MatStm5.comp[1].LiqCp[6]}, 315.0287067347126)
*/
void splitter1_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  real_array tmp27;
  array_alloc_scalar_real_array(&tmp27, 6, (modelica_real)data->simulationInfo->realParameter[431], (modelica_real)data->simulationInfo->realParameter[432], (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434], (modelica_real)data->simulationInfo->realParameter[435], (modelica_real)data->simulationInfo->realParameter[436]);
  data->localData[0]->realVars[234] /* MatStm5.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp27, 315.0287067347126);
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
MatStm4._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm4.comp[2].VP[1], MatStm4.comp[2].VP[2], MatStm4.comp[2].VP[3], MatStm4.comp[2].VP[4], MatStm4.comp[2].VP[5], MatStm4.comp[2].VP[6]}, 315.0287067347126)
*/
void splitter1_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  real_array tmp28;
  array_alloc_scalar_real_array(&tmp28, 6, (modelica_real)data->simulationInfo->realParameter[351], (modelica_real)data->simulationInfo->realParameter[352], (modelica_real)data->simulationInfo->realParameter[353], (modelica_real)data->simulationInfo->realParameter[354], (modelica_real)data->simulationInfo->realParameter[355], (modelica_real)data->simulationInfo->realParameter[356]);
  data->localData[0]->realVars[107] /* MatStm4.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp28, 315.0287067347126);
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
MatStm4._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm4.comp[1].VP[1], MatStm4.comp[1].VP[2], MatStm4.comp[1].VP[3], MatStm4.comp[1].VP[4], MatStm4.comp[1].VP[5], MatStm4.comp[1].VP[6]}, 315.0287067347126)
*/
void splitter1_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  real_array tmp29;
  array_alloc_scalar_real_array(&tmp29, 6, (modelica_real)data->simulationInfo->realParameter[345], (modelica_real)data->simulationInfo->realParameter[346], (modelica_real)data->simulationInfo->realParameter[347], (modelica_real)data->simulationInfo->realParameter[348], (modelica_real)data->simulationInfo->realParameter[349], (modelica_real)data->simulationInfo->realParameter[350]);
  data->localData[0]->realVars[106] /* MatStm4.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp29, 315.0287067347126);
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm4.comp[2].SH, {MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, {MatStm4.comp[2].HOV[1], MatStm4.comp[2].HOV[2], MatStm4.comp[2].HOV[3], MatStm4.comp[2].HOV[4], MatStm4.comp[2].HOV[5], MatStm4.comp[2].HOV[6]}, MatStm4.comp[2].Tc, 315.0287067347126)
*/
void splitter1_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  real_array tmp30;
  real_array tmp31;
  array_alloc_scalar_real_array(&tmp30, 6, (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364], (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368]);
  array_alloc_scalar_real_array(&tmp31, 6, (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264], (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268]);
  data->localData[0]->realVars[125] /* MatStm4.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[328], tmp30, tmp31, data->simulationInfo->realParameter[338], 315.0287067347126);
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm4.comp[2].SH, {MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, {MatStm4.comp[2].HOV[1], MatStm4.comp[2].HOV[2], MatStm4.comp[2].HOV[3], MatStm4.comp[2].HOV[4], MatStm4.comp[2].HOV[5], MatStm4.comp[2].HOV[6]}, MatStm4.comp[2].Tc, 315.0287067347126)
*/
void splitter1_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  real_array tmp32;
  real_array tmp33;
  array_alloc_scalar_real_array(&tmp32, 6, (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364], (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368]);
  array_alloc_scalar_real_array(&tmp33, 6, (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264], (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268]);
  data->localData[0]->realVars[123] /* MatStm4.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[328], tmp32, tmp33, data->simulationInfo->realParameter[338], 315.0287067347126);
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, 315.0287067347126)
*/
void splitter1_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  real_array tmp34;
  array_alloc_scalar_real_array(&tmp34, 6, (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364], (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368]);
  data->localData[0]->realVars[149] /* MatStm4.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp34, 315.0287067347126);
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm4.comp[2].LiqCp[1], MatStm4.comp[2].LiqCp[2], MatStm4.comp[2].LiqCp[3], MatStm4.comp[2].LiqCp[4], MatStm4.comp[2].LiqCp[5], MatStm4.comp[2].LiqCp[6]}, 315.0287067347126)
*/
void splitter1_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  real_array tmp35;
  array_alloc_scalar_real_array(&tmp35, 6, (modelica_real)data->simulationInfo->realParameter[279], (modelica_real)data->simulationInfo->realParameter[280], (modelica_real)data->simulationInfo->realParameter[281], (modelica_real)data->simulationInfo->realParameter[282], (modelica_real)data->simulationInfo->realParameter[283], (modelica_real)data->simulationInfo->realParameter[284]);
  data->localData[0]->realVars[147] /* MatStm4.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp35, 315.0287067347126);
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm4.comp[1].SH, {MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, {MatStm4.comp[1].HOV[1], MatStm4.comp[1].HOV[2], MatStm4.comp[1].HOV[3], MatStm4.comp[1].HOV[4], MatStm4.comp[1].HOV[5], MatStm4.comp[1].HOV[6]}, MatStm4.comp[1].Tc, 315.0287067347126)
*/
void splitter1_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  real_array tmp36;
  real_array tmp37;
  array_alloc_scalar_real_array(&tmp36, 6, (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358], (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362]);
  array_alloc_scalar_real_array(&tmp37, 6, (modelica_real)data->simulationInfo->realParameter[257], (modelica_real)data->simulationInfo->realParameter[258], (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262]);
  data->localData[0]->realVars[124] /* MatStm4.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[327], tmp36, tmp37, data->simulationInfo->realParameter[337], 315.0287067347126);
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm4.comp[1].SH, {MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, {MatStm4.comp[1].HOV[1], MatStm4.comp[1].HOV[2], MatStm4.comp[1].HOV[3], MatStm4.comp[1].HOV[4], MatStm4.comp[1].HOV[5], MatStm4.comp[1].HOV[6]}, MatStm4.comp[1].Tc, 315.0287067347126)
*/
void splitter1_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  real_array tmp38;
  real_array tmp39;
  array_alloc_scalar_real_array(&tmp38, 6, (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358], (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362]);
  array_alloc_scalar_real_array(&tmp39, 6, (modelica_real)data->simulationInfo->realParameter[257], (modelica_real)data->simulationInfo->realParameter[258], (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262]);
  data->localData[0]->realVars[122] /* MatStm4.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[327], tmp38, tmp39, data->simulationInfo->realParameter[337], 315.0287067347126);
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, 315.0287067347126)
*/
void splitter1_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  real_array tmp40;
  array_alloc_scalar_real_array(&tmp40, 6, (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358], (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362]);
  data->localData[0]->realVars[148] /* MatStm4.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp40, 315.0287067347126);
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm4.comp[1].LiqCp[1], MatStm4.comp[1].LiqCp[2], MatStm4.comp[1].LiqCp[3], MatStm4.comp[1].LiqCp[4], MatStm4.comp[1].LiqCp[5], MatStm4.comp[1].LiqCp[6]}, 315.0287067347126)
*/
void splitter1_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  real_array tmp41;
  array_alloc_scalar_real_array(&tmp41, 6, (modelica_real)data->simulationInfo->realParameter[273], (modelica_real)data->simulationInfo->realParameter[274], (modelica_real)data->simulationInfo->realParameter[275], (modelica_real)data->simulationInfo->realParameter[276], (modelica_real)data->simulationInfo->realParameter[277], (modelica_real)data->simulationInfo->realParameter[278]);
  data->localData[0]->realVars[146] /* MatStm4.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp41, 315.0287067347126);
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
MatStm3._compMolFrac[1,1] = 0.6
*/
void splitter1_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->localData[0]->realVars[49] /* MatStm3.compMolFrac[1,1] variable */ = 0.6;
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[1,1] = 200.0 * MatStm3.compMolFrac[1,1]
*/
void splitter1_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->realVars[43] /* MatStm3.compMolFlo[1,1] variable */ = (200.0) * (data->localData[0]->realVars[49] /* MatStm3.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
MatStm3._compMolFrac[1,2] = 0.4
*/
void splitter1_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->realVars[50] /* MatStm3.compMolFrac[1,2] variable */ = 0.4;
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[1,2] = 200.0 * MatStm3.compMolFrac[1,2]
*/
void splitter1_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[44] /* MatStm3.compMolFlo[1,2] variable */ = (200.0) * (data->localData[0]->realVars[50] /* MatStm3.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
MatStm3._Pbubl = MatStm3.compMolFrac[1,1] * exp(MatStm3.comp[1].VP[2] + MatStm3.comp[1].VP[3] / 315.0287067347126 + MatStm3.comp[1].VP[4] * 5.752663767164471 + MatStm3.comp[1].VP[5] * 315.0287067347126 ^ MatStm3.comp[1].VP[6]) + MatStm3.compMolFrac[1,2] * exp(MatStm3.comp[2].VP[2] + MatStm3.comp[2].VP[3] / 315.0287067347126 + MatStm3.comp[2].VP[4] * 5.752663767164471 + MatStm3.comp[2].VP[5] * 315.0287067347126 ^ MatStm3.comp[2].VP[6])
*/
void splitter1_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
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
  tmp42 = 315.0287067347126;
  tmp43 = data->simulationInfo->realParameter[192];
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
  }tmp49 = 315.0287067347126;
  tmp50 = data->simulationInfo->realParameter[198];
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
  data->localData[0]->realVars[14] /* MatStm3.Pbubl variable */ = (data->localData[0]->realVars[49] /* MatStm3.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[188] + DIVISION_SIM(data->simulationInfo->realParameter[189],315.0287067347126,"315.0287067347126",equationIndexes) + (data->simulationInfo->realParameter[190]) * (5.752663767164471) + (data->simulationInfo->realParameter[191]) * (tmp44))) + (data->localData[0]->realVars[50] /* MatStm3.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[194] + DIVISION_SIM(data->simulationInfo->realParameter[195],315.0287067347126,"315.0287067347126",equationIndexes) + (data->simulationInfo->realParameter[196]) * (5.752663767164471) + (data->simulationInfo->realParameter[197]) * (tmp51)));
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
MatStm3._Pdew = 1.0 / (MatStm3.compMolFrac[1,1] * exp((-MatStm3.comp[1].VP[2]) - MatStm3.comp[1].VP[3] / 315.0287067347126 - MatStm3.comp[1].VP[4] * 5.752663767164471 - MatStm3.comp[1].VP[5] * 315.0287067347126 ^ MatStm3.comp[1].VP[6]) + MatStm3.compMolFrac[1,2] * exp((-MatStm3.comp[2].VP[2]) - MatStm3.comp[2].VP[3] / 315.0287067347126 - MatStm3.comp[2].VP[4] * 5.752663767164471 - MatStm3.comp[2].VP[5] * 315.0287067347126 ^ MatStm3.comp[2].VP[6]))
*/
void splitter1_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
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
  tmp56 = 315.0287067347126;
  tmp57 = data->simulationInfo->realParameter[192];
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
  }tmp63 = 315.0287067347126;
  tmp64 = data->simulationInfo->realParameter[198];
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
  data->localData[0]->realVars[15] /* MatStm3.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[49] /* MatStm3.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[188]) - (DIVISION_SIM(data->simulationInfo->realParameter[189],315.0287067347126,"315.0287067347126",equationIndexes)) - ((data->simulationInfo->realParameter[190]) * (5.752663767164471)) - ((data->simulationInfo->realParameter[191]) * (tmp58)))) + (data->localData[0]->realVars[50] /* MatStm3.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[194]) - (DIVISION_SIM(data->simulationInfo->realParameter[195],315.0287067347126,"315.0287067347126",equationIndexes)) - ((data->simulationInfo->realParameter[196]) * (5.752663767164471)) - ((data->simulationInfo->realParameter[197]) * (tmp65)))),"MatStm3.compMolFrac[1,1] * exp((-MatStm3.comp[1].VP[2]) - MatStm3.comp[1].VP[3] / 315.0287067347126 - MatStm3.comp[1].VP[4] * 5.752663767164471 - MatStm3.comp[1].VP[5] * 315.0287067347126 ^ MatStm3.comp[1].VP[6]) + MatStm3.compMolFrac[1,2] * exp((-MatStm3.comp[2].VP[2]) - MatStm3.comp[2].VP[3] / 315.0287067347126 - MatStm3.comp[2].VP[4] * 5.752663767164471 - MatStm3.comp[2].VP[5] * 315.0287067347126 ^ MatStm3.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}
extern void splitter1_eqFunction_299(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_298(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_297(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_296(DATA *data, threadData_t *threadData);


void splitter1_eqFunction_56(DATA*, threadData_t*);
void splitter1_eqFunction_57(DATA*, threadData_t*);
void splitter1_eqFunction_58(DATA*, threadData_t*);
void splitter1_eqFunction_59(DATA*, threadData_t*);
void splitter1_eqFunction_60(DATA*, threadData_t*);
void splitter1_eqFunction_61(DATA*, threadData_t*);
void splitter1_eqFunction_62(DATA*, threadData_t*);
void splitter1_eqFunction_67(DATA*, threadData_t*);
void splitter1_eqFunction_66(DATA*, threadData_t*);
void splitter1_eqFunction_65(DATA*, threadData_t*);
void splitter1_eqFunction_64(DATA*, threadData_t*);
void splitter1_eqFunction_63(DATA*, threadData_t*);
/*
equation index: 80
indexNonlinear: 0
type: NONLINEAR

vars: {MatStm3._totMolFlo[3], MatStm3._compMolFrac[2,1], MatStm3._compMolFrac[3,1], MatStm3._compMolFrac[3,2], MatStm3._compMolFrac[2,2]}
eqns: {56, 57, 58, 59, 60, 61, 62, 67, 66, 65, 64, 63}
*/
void splitter1_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 80 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[94] /* MatStm3.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[51] /* MatStm3.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[53] /* MatStm3.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[54] /* MatStm3.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[52] /* MatStm3.compMolFrac[2,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,80};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 80 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[94] /* MatStm3.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[51] /* MatStm3.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[53] /* MatStm3.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[54] /* MatStm3.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[52] /* MatStm3.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  TRACE_POP
}
extern void splitter1_eqFunction_331(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_330(DATA *data, threadData_t *threadData);


/*
equation index: 83
type: ALGORITHM

  (MatStm3.compMolEntr[2,2], MatStm3.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[2].AS, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tb, MatStm3.comp[2].Tc, 315.0287067347126, 101325.0, MatStm3.compMolFrac[2,2], MatStm3.compMolFrac[3,2]);
*/
void splitter1_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[40] /* MatStm3.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[82], tmp0, tmp1, data->simulationInfo->realParameter[178], data->simulationInfo->realParameter[180], 315.0287067347126, 101325.0, data->localData[0]->realVars[52] /* MatStm3.compMolFrac[2,2] variable */, data->localData[0]->realVars[54] /* MatStm3.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[42] /* MatStm3.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void splitter1_eqFunction_329(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_328(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_325(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_326(DATA *data, threadData_t *threadData);


/*
equation index: 88
type: ALGORITHM

  (MatStm3.compMolEntr[2,1], MatStm3.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[1].AS, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tb, MatStm3.comp[1].Tc, 315.0287067347126, 101325.0, MatStm3.compMolFrac[2,1], MatStm3.compMolFrac[3,1]);
*/
void splitter1_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[39] /* MatStm3.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[81], tmp2, tmp3, data->simulationInfo->realParameter[177], data->simulationInfo->realParameter[179], 315.0287067347126, 101325.0, data->localData[0]->realVars[51] /* MatStm3.compMolFrac[2,1] variable */, data->localData[0]->realVars[53] /* MatStm3.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[41] /* MatStm3.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void splitter1_eqFunction_341(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_336(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_332(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_342(DATA *data, threadData_t *threadData);


/*
equation index: 93
type: ALGORITHM

  MatStm3.MW[3] := $START.MatStm3.MW[3];
  MatStm3.MW[2] := $START.MatStm3.MW[2];
  MatStm3.MW[1] := $START.MatStm3.MW[1];
  for i in 1:2 loop
    MatStm3.MW[:] := {MatStm3.MW[1] + MatStm3.compMolFrac[1,i] * MatStm3.comp[i].MW, MatStm3.MW[2] + MatStm3.compMolFrac[2,i] * MatStm3.comp[i].MW, MatStm3.MW[3] + MatStm3.compMolFrac[3,i] * MatStm3.comp[i].MW};
  end for;
*/
void splitter1_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[12] /* MatStm3.MW[3] variable */ = data->modelData->realVarsData[12].attribute /* MatStm3.MW[3] variable */.start;

  data->localData[0]->realVars[11] /* MatStm3.MW[2] variable */ = data->modelData->realVarsData[11].attribute /* MatStm3.MW[2] variable */.start;

  data->localData[0]->realVars[10] /* MatStm3.MW[1] variable */ = data->modelData->realVarsData[10].attribute /* MatStm3.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[10] /* MatStm3.MW[1] variable */ + ((&data->localData[0]->realVars[49] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[11] /* MatStm3.MW[2] variable */ + ((&data->localData[0]->realVars[49] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[12] /* MatStm3.MW[3] variable */ + ((&data->localData[0]->realVars[49] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[10] /* MatStm3.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
extern void splitter1_eqFunction_349(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_351(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_347(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_350(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_337(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_339(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_338(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_333(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_335(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_334(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_343(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_345(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_344(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_348(DATA *data, threadData_t *threadData);


/*
equation index: 108
type: LINEAR

<var>MatStm3._compMasFrac[3,2]</var>
<var>MatStm3._compMasFrac[2,2]</var>
<var>MatStm3._compMasFrac[1,1]</var>
<var>MatStm3._compMasFrac[3,1]</var>
<var>MatStm3._compMasFrac[2,1]</var>
<row>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,1] else MatStm3.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then -MatStm3.compMasFrac[1,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,2] else -MatStm3.compMasFrac[1,2]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101325.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -1.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void splitter1_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[30] /* MatStm3.compMasFrac[3,2] variable */,data->localData[1]->realVars[28] /* MatStm3.compMasFrac[2,2] variable */,data->localData[1]->realVars[25] /* MatStm3.compMasFrac[1,1] variable */,data->localData[1]->realVars[29] /* MatStm3.compMasFrac[3,1] variable */,data->localData[1]->realVars[27] /* MatStm3.compMasFrac[2,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 108 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,108};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 108 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[30] /* MatStm3.compMasFrac[3,2] variable */ = aux_x[0];
  data->localData[0]->realVars[28] /* MatStm3.compMasFrac[2,2] variable */ = aux_x[1];
  data->localData[0]->realVars[25] /* MatStm3.compMasFrac[1,1] variable */ = aux_x[2];
  data->localData[0]->realVars[29] /* MatStm3.compMasFrac[3,1] variable */ = aux_x[3];
  data->localData[0]->realVars[27] /* MatStm3.compMasFrac[2,1] variable */ = aux_x[4];
  TRACE_POP
}
extern void splitter1_eqFunction_352(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_295(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_294(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_293(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_292(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_354(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_355(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_356(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_357(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_358(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_359(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_360(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_361(DATA *data, threadData_t *threadData);


/*
equation index: 122
type: ALGORITHM

  Splitter1.MW := $START.Splitter1.MW;
  Splitter1.MW := 0.0;
  for i in 1:2 loop
    Splitter1.MW := Splitter1.MW + Splitter1.comp[i].MW * Splitter1.inMixMolFrac[i];
  end for;
*/
void splitter1_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  data->localData[0]->realVars[275] /* Splitter1.MW variable */ = data->modelData->realVarsData[275].attribute /* Splitter1.MW variable */.start;

  data->localData[0]->realVars[275] /* Splitter1.MW variable */ = 0.0;

  tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = ((modelica_integer) 2);
  if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp10, tmp12); $Pi += tmp11)
    {
      data->localData[0]->realVars[275] /* Splitter1.MW variable */ = data->localData[0]->realVars[275] /* Splitter1.MW variable */ + ((&data->simulationInfo->realParameter[637])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[276] /* Splitter1.inMixMolFrac[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]);
    }
  }
  TRACE_POP
}
extern void splitter1_eqFunction_363(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_364(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_365(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_366(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_367(DATA *data, threadData_t *threadData);


/*
equation index: 128
type: SIMPLE_ASSIGN
MatStm5._Pbubl = MatStm5.compMolFrac[1,1] * exp(MatStm5.comp[1].VP[2] + MatStm5.comp[1].VP[3] / 315.0287067347126 + MatStm5.comp[1].VP[4] * 5.752663767164471 + MatStm5.comp[1].VP[5] * 315.0287067347126 ^ MatStm5.comp[1].VP[6]) + MatStm5.compMolFrac[1,2] * exp(MatStm5.comp[2].VP[2] + MatStm5.comp[2].VP[3] / 315.0287067347126 + MatStm5.comp[2].VP[4] * 5.752663767164471 + MatStm5.comp[2].VP[5] * 315.0287067347126 ^ MatStm5.comp[2].VP[6])
*/
void splitter1_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
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
  tmp13 = 315.0287067347126;
  tmp14 = data->simulationInfo->realParameter[508];
  if(tmp13 < 0.0 && tmp14 != 0.0)
  {
    tmp16 = modf(tmp14, &tmp17);
    
    if(tmp16 > 0.5)
    {
      tmp16 -= 1.0;
      tmp17 += 1.0;
    }
    else if(tmp16 < -0.5)
    {
      tmp16 += 1.0;
      tmp17 -= 1.0;
    }
    
    if(fabs(tmp16) < 1e-10)
      tmp15 = pow(tmp13, tmp17);
    else
    {
      tmp19 = modf(1.0/tmp14, &tmp18);
      if(tmp19 > 0.5)
      {
        tmp19 -= 1.0;
        tmp18 += 1.0;
      }
      else if(tmp19 < -0.5)
      {
        tmp19 += 1.0;
        tmp18 -= 1.0;
      }
      if(fabs(tmp19) < 1e-10 && ((unsigned long)tmp18 & 1))
      {
        tmp15 = -pow(-tmp13, tmp16)*pow(tmp13, tmp17);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp13, tmp14);
      }
    }
  }
  else
  {
    tmp15 = pow(tmp13, tmp14);
  }
  if(isnan(tmp15) || isinf(tmp15))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp13, tmp14);
  }tmp20 = 315.0287067347126;
  tmp21 = data->simulationInfo->realParameter[514];
  if(tmp20 < 0.0 && tmp21 != 0.0)
  {
    tmp23 = modf(tmp21, &tmp24);
    
    if(tmp23 > 0.5)
    {
      tmp23 -= 1.0;
      tmp24 += 1.0;
    }
    else if(tmp23 < -0.5)
    {
      tmp23 += 1.0;
      tmp24 -= 1.0;
    }
    
    if(fabs(tmp23) < 1e-10)
      tmp22 = pow(tmp20, tmp24);
    else
    {
      tmp26 = modf(1.0/tmp21, &tmp25);
      if(tmp26 > 0.5)
      {
        tmp26 -= 1.0;
        tmp25 += 1.0;
      }
      else if(tmp26 < -0.5)
      {
        tmp26 += 1.0;
        tmp25 -= 1.0;
      }
      if(fabs(tmp26) < 1e-10 && ((unsigned long)tmp25 & 1))
      {
        tmp22 = -pow(-tmp20, tmp23)*pow(tmp20, tmp24);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp20, tmp21);
      }
    }
  }
  else
  {
    tmp22 = pow(tmp20, tmp21);
  }
  if(isnan(tmp22) || isinf(tmp22))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp20, tmp21);
  }
  data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */ = (data->localData[0]->realVars[226] /* MatStm5.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[504] + DIVISION_SIM(data->simulationInfo->realParameter[505],315.0287067347126,"315.0287067347126",equationIndexes) + (data->simulationInfo->realParameter[506]) * (5.752663767164471) + (data->simulationInfo->realParameter[507]) * (tmp15))) + (data->localData[0]->realVars[227] /* MatStm5.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[510] + DIVISION_SIM(data->simulationInfo->realParameter[511],315.0287067347126,"315.0287067347126",equationIndexes) + (data->simulationInfo->realParameter[512]) * (5.752663767164471) + (data->simulationInfo->realParameter[513]) * (tmp22)));
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
MatStm5._Pdew = 1.0 / (MatStm5.compMolFrac[1,1] * exp((-MatStm5.comp[1].VP[2]) - MatStm5.comp[1].VP[3] / 315.0287067347126 - MatStm5.comp[1].VP[4] * 5.752663767164471 - MatStm5.comp[1].VP[5] * 315.0287067347126 ^ MatStm5.comp[1].VP[6]) + MatStm5.compMolFrac[1,2] * exp((-MatStm5.comp[2].VP[2]) - MatStm5.comp[2].VP[3] / 315.0287067347126 - MatStm5.comp[2].VP[4] * 5.752663767164471 - MatStm5.comp[2].VP[5] * 315.0287067347126 ^ MatStm5.comp[2].VP[6]))
*/
void splitter1_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  modelica_real tmp27;
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
  tmp27 = 315.0287067347126;
  tmp28 = data->simulationInfo->realParameter[508];
  if(tmp27 < 0.0 && tmp28 != 0.0)
  {
    tmp30 = modf(tmp28, &tmp31);
    
    if(tmp30 > 0.5)
    {
      tmp30 -= 1.0;
      tmp31 += 1.0;
    }
    else if(tmp30 < -0.5)
    {
      tmp30 += 1.0;
      tmp31 -= 1.0;
    }
    
    if(fabs(tmp30) < 1e-10)
      tmp29 = pow(tmp27, tmp31);
    else
    {
      tmp33 = modf(1.0/tmp28, &tmp32);
      if(tmp33 > 0.5)
      {
        tmp33 -= 1.0;
        tmp32 += 1.0;
      }
      else if(tmp33 < -0.5)
      {
        tmp33 += 1.0;
        tmp32 -= 1.0;
      }
      if(fabs(tmp33) < 1e-10 && ((unsigned long)tmp32 & 1))
      {
        tmp29 = -pow(-tmp27, tmp30)*pow(tmp27, tmp31);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp27, tmp28);
      }
    }
  }
  else
  {
    tmp29 = pow(tmp27, tmp28);
  }
  if(isnan(tmp29) || isinf(tmp29))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp27, tmp28);
  }tmp34 = 315.0287067347126;
  tmp35 = data->simulationInfo->realParameter[514];
  if(tmp34 < 0.0 && tmp35 != 0.0)
  {
    tmp37 = modf(tmp35, &tmp38);
    
    if(tmp37 > 0.5)
    {
      tmp37 -= 1.0;
      tmp38 += 1.0;
    }
    else if(tmp37 < -0.5)
    {
      tmp37 += 1.0;
      tmp38 -= 1.0;
    }
    
    if(fabs(tmp37) < 1e-10)
      tmp36 = pow(tmp34, tmp38);
    else
    {
      tmp40 = modf(1.0/tmp35, &tmp39);
      if(tmp40 > 0.5)
      {
        tmp40 -= 1.0;
        tmp39 += 1.0;
      }
      else if(tmp40 < -0.5)
      {
        tmp40 += 1.0;
        tmp39 -= 1.0;
      }
      if(fabs(tmp40) < 1e-10 && ((unsigned long)tmp39 & 1))
      {
        tmp36 = -pow(-tmp34, tmp37)*pow(tmp34, tmp38);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp34, tmp35);
      }
    }
  }
  else
  {
    tmp36 = pow(tmp34, tmp35);
  }
  if(isnan(tmp36) || isinf(tmp36))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp34, tmp35);
  }
  data->localData[0]->realVars[193] /* MatStm5.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[226] /* MatStm5.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[504]) - (DIVISION_SIM(data->simulationInfo->realParameter[505],315.0287067347126,"315.0287067347126",equationIndexes)) - ((data->simulationInfo->realParameter[506]) * (5.752663767164471)) - ((data->simulationInfo->realParameter[507]) * (tmp29)))) + (data->localData[0]->realVars[227] /* MatStm5.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[510]) - (DIVISION_SIM(data->simulationInfo->realParameter[511],315.0287067347126,"315.0287067347126",equationIndexes)) - ((data->simulationInfo->realParameter[512]) * (5.752663767164471)) - ((data->simulationInfo->realParameter[513]) * (tmp36)))),"MatStm5.compMolFrac[1,1] * exp((-MatStm5.comp[1].VP[2]) - MatStm5.comp[1].VP[3] / 315.0287067347126 - MatStm5.comp[1].VP[4] * 5.752663767164471 - MatStm5.comp[1].VP[5] * 315.0287067347126 ^ MatStm5.comp[1].VP[6]) + MatStm5.compMolFrac[1,2] * exp((-MatStm5.comp[2].VP[2]) - MatStm5.comp[2].VP[3] / 315.0287067347126 - MatStm5.comp[2].VP[4] * 5.752663767164471 - MatStm5.comp[2].VP[5] * 315.0287067347126 ^ MatStm5.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}

void splitter1_eqFunction_130(DATA*, threadData_t*);
void splitter1_eqFunction_131(DATA*, threadData_t*);
void splitter1_eqFunction_132(DATA*, threadData_t*);
void splitter1_eqFunction_133(DATA*, threadData_t*);
void splitter1_eqFunction_134(DATA*, threadData_t*);
void splitter1_eqFunction_135(DATA*, threadData_t*);
void splitter1_eqFunction_136(DATA*, threadData_t*);
void splitter1_eqFunction_141(DATA*, threadData_t*);
void splitter1_eqFunction_140(DATA*, threadData_t*);
void splitter1_eqFunction_139(DATA*, threadData_t*);
void splitter1_eqFunction_138(DATA*, threadData_t*);
void splitter1_eqFunction_137(DATA*, threadData_t*);
/*
equation index: 154
indexNonlinear: 1
type: NONLINEAR

vars: {MatStm5._totMolFlo[2], MatStm5._compMolFrac[3,1], MatStm5._compMolFrac[3,2], MatStm5._compMolFrac[2,2], MatStm5._compMolFrac[2,1]}
eqns: {130, 131, 132, 133, 134, 135, 136, 141, 140, 139, 138, 137}
*/
void splitter1_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 154 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[269] /* MatStm5.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[230] /* MatStm5.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[231] /* MatStm5.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[229] /* MatStm5.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[228] /* MatStm5.compMolFrac[2,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,154};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 154 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[269] /* MatStm5.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[230] /* MatStm5.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[231] /* MatStm5.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[229] /* MatStm5.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[228] /* MatStm5.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  TRACE_POP
}
extern void splitter1_eqFunction_396(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_395(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_401(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_400(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_398(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_397(DATA *data, threadData_t *threadData);


/*
equation index: 161
type: ALGORITHM

  (MatStm5.compMolEntr[2,1], MatStm5.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm5.comp[1].AS, {MatStm5.comp[1].VapCp[1], MatStm5.comp[1].VapCp[2], MatStm5.comp[1].VapCp[3], MatStm5.comp[1].VapCp[4], MatStm5.comp[1].VapCp[5], MatStm5.comp[1].VapCp[6]}, {MatStm5.comp[1].HOV[1], MatStm5.comp[1].HOV[2], MatStm5.comp[1].HOV[3], MatStm5.comp[1].HOV[4], MatStm5.comp[1].HOV[5], MatStm5.comp[1].HOV[6]}, MatStm5.comp[1].Tb, MatStm5.comp[1].Tc, 315.0287067347126, 101325.0, MatStm5.compMolFrac[2,1], MatStm5.compMolFrac[3,1]);
*/
void splitter1_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420]);
  data->localData[0]->realVars[216] /* MatStm5.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[397], tmp0, tmp1, data->simulationInfo->realParameter[493], data->simulationInfo->realParameter[495], 315.0287067347126, 101325.0, data->localData[0]->realVars[228] /* MatStm5.compMolFrac[2,1] variable */, data->localData[0]->realVars[230] /* MatStm5.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[218] /* MatStm5.compMolEntr[3,1] variable */);
  TRACE_POP
}

/*
equation index: 162
type: ALGORITHM

  (MatStm5.compMolEntr[2,2], MatStm5.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm5.comp[2].AS, {MatStm5.comp[2].VapCp[1], MatStm5.comp[2].VapCp[2], MatStm5.comp[2].VapCp[3], MatStm5.comp[2].VapCp[4], MatStm5.comp[2].VapCp[5], MatStm5.comp[2].VapCp[6]}, {MatStm5.comp[2].HOV[1], MatStm5.comp[2].HOV[2], MatStm5.comp[2].HOV[3], MatStm5.comp[2].HOV[4], MatStm5.comp[2].HOV[5], MatStm5.comp[2].HOV[6]}, MatStm5.comp[2].Tb, MatStm5.comp[2].Tc, 315.0287067347126, 101325.0, MatStm5.compMolFrac[2,2], MatStm5.compMolFrac[3,2]);
*/
void splitter1_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426]);
  data->localData[0]->realVars[217] /* MatStm5.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[398], tmp2, tmp3, data->simulationInfo->realParameter[494], data->simulationInfo->realParameter[496], 315.0287067347126, 101325.0, data->localData[0]->realVars[229] /* MatStm5.compMolFrac[2,2] variable */, data->localData[0]->realVars[231] /* MatStm5.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[219] /* MatStm5.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void splitter1_eqFunction_403(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_407(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_404(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_410(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_408(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_414(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_409(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_405(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_413(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_406(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_411(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_415(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_412(DATA *data, threadData_t *threadData);


/*
equation index: 176
type: ALGORITHM

  MatStm5.MW[3] := $START.MatStm5.MW[3];
  MatStm5.MW[2] := $START.MatStm5.MW[2];
  MatStm5.MW[1] := $START.MatStm5.MW[1];
  for i in 1:2 loop
    MatStm5.MW[:] := {MatStm5.MW[1] + MatStm5.compMolFrac[1,i] * MatStm5.comp[i].MW, MatStm5.MW[2] + MatStm5.compMolFrac[2,i] * MatStm5.comp[i].MW, MatStm5.MW[3] + MatStm5.compMolFrac[3,i] * MatStm5.comp[i].MW};
  end for;
*/
void splitter1_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[191] /* MatStm5.MW[3] variable */ = data->modelData->realVarsData[191].attribute /* MatStm5.MW[3] variable */.start;

  data->localData[0]->realVars[190] /* MatStm5.MW[2] variable */ = data->modelData->realVarsData[190].attribute /* MatStm5.MW[2] variable */.start;

  data->localData[0]->realVars[189] /* MatStm5.MW[1] variable */ = data->modelData->realVarsData[189].attribute /* MatStm5.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[189] /* MatStm5.MW[1] variable */ + ((&data->localData[0]->realVars[226] /* MatStm5.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[190] /* MatStm5.MW[2] variable */ + ((&data->localData[0]->realVars[226] /* MatStm5.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[191] /* MatStm5.MW[3] variable */ + ((&data->localData[0]->realVars[226] /* MatStm5.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[189] /* MatStm5.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
extern void splitter1_eqFunction_421(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_418(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_420(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_422(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_417(DATA *data, threadData_t *threadData);


/*
equation index: 182
type: LINEAR

<var>MatStm5._compMasFrac[1,1]</var>
<var>MatStm5._compMasFrac[2,2]</var>
<var>MatStm5._compMasFrac[3,2]</var>
<var>MatStm5._compMasFrac[2,1]</var>
<var>MatStm5._compMasFrac[3,1]</var>
<row>
  <cell>if 101325.0 >= MatStm5.Pbubl then MatStm5.compMasFlo[1,1] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[3,1] else MatStm5.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then -MatStm5.compMasFrac[1,2] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[3,2] else -MatStm5.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[2,2] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then -MatStm5.totMasFlo[1] else if 101325.0 >= MatStm5.Pdew then -0.0 else -MatStm5.totMasFlo[1])</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then -0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="1" col="0">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then -1.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="4" col="3">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else 1.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void splitter1_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[202] /* MatStm5.compMasFrac[1,1] variable */,data->localData[1]->realVars[205] /* MatStm5.compMasFrac[2,2] variable */,data->localData[1]->realVars[207] /* MatStm5.compMasFrac[3,2] variable */,data->localData[1]->realVars[204] /* MatStm5.compMasFrac[2,1] variable */,data->localData[1]->realVars[206] /* MatStm5.compMasFrac[3,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 182 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,182};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 182 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[202] /* MatStm5.compMasFrac[1,1] variable */ = aux_x[0];
  data->localData[0]->realVars[205] /* MatStm5.compMasFrac[2,2] variable */ = aux_x[1];
  data->localData[0]->realVars[207] /* MatStm5.compMasFrac[3,2] variable */ = aux_x[2];
  data->localData[0]->realVars[204] /* MatStm5.compMasFrac[2,1] variable */ = aux_x[3];
  data->localData[0]->realVars[206] /* MatStm5.compMasFrac[3,1] variable */ = aux_x[4];
  TRACE_POP
}
extern void splitter1_eqFunction_419(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_424(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_425(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_426(DATA *data, threadData_t *threadData);


/*
equation index: 187
type: SIMPLE_ASSIGN
MatStm4._Pbubl = MatStm4.compMolFrac[1,1] * exp(MatStm4.comp[1].VP[2] + MatStm4.comp[1].VP[3] / 315.0287067347126 + MatStm4.comp[1].VP[4] * 5.752663767164471 + MatStm4.comp[1].VP[5] * 315.0287067347126 ^ MatStm4.comp[1].VP[6]) + MatStm4.compMolFrac[1,2] * exp(MatStm4.comp[2].VP[2] + MatStm4.comp[2].VP[3] / 315.0287067347126 + MatStm4.comp[2].VP[4] * 5.752663767164471 + MatStm4.comp[2].VP[5] * 315.0287067347126 ^ MatStm4.comp[2].VP[6])
*/
void splitter1_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  tmp10 = 315.0287067347126;
  tmp11 = data->simulationInfo->realParameter[350];
  if(tmp10 < 0.0 && tmp11 != 0.0)
  {
    tmp13 = modf(tmp11, &tmp14);
    
    if(tmp13 > 0.5)
    {
      tmp13 -= 1.0;
      tmp14 += 1.0;
    }
    else if(tmp13 < -0.5)
    {
      tmp13 += 1.0;
      tmp14 -= 1.0;
    }
    
    if(fabs(tmp13) < 1e-10)
      tmp12 = pow(tmp10, tmp14);
    else
    {
      tmp16 = modf(1.0/tmp11, &tmp15);
      if(tmp16 > 0.5)
      {
        tmp16 -= 1.0;
        tmp15 += 1.0;
      }
      else if(tmp16 < -0.5)
      {
        tmp16 += 1.0;
        tmp15 -= 1.0;
      }
      if(fabs(tmp16) < 1e-10 && ((unsigned long)tmp15 & 1))
      {
        tmp12 = -pow(-tmp10, tmp13)*pow(tmp10, tmp14);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp10, tmp11);
      }
    }
  }
  else
  {
    tmp12 = pow(tmp10, tmp11);
  }
  if(isnan(tmp12) || isinf(tmp12))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp10, tmp11);
  }tmp17 = 315.0287067347126;
  tmp18 = data->simulationInfo->realParameter[356];
  if(tmp17 < 0.0 && tmp18 != 0.0)
  {
    tmp20 = modf(tmp18, &tmp21);
    
    if(tmp20 > 0.5)
    {
      tmp20 -= 1.0;
      tmp21 += 1.0;
    }
    else if(tmp20 < -0.5)
    {
      tmp20 += 1.0;
      tmp21 -= 1.0;
    }
    
    if(fabs(tmp20) < 1e-10)
      tmp19 = pow(tmp17, tmp21);
    else
    {
      tmp23 = modf(1.0/tmp18, &tmp22);
      if(tmp23 > 0.5)
      {
        tmp23 -= 1.0;
        tmp22 += 1.0;
      }
      else if(tmp23 < -0.5)
      {
        tmp23 += 1.0;
        tmp22 -= 1.0;
      }
      if(fabs(tmp23) < 1e-10 && ((unsigned long)tmp22 & 1))
      {
        tmp19 = -pow(-tmp17, tmp20)*pow(tmp17, tmp21);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
      }
    }
  }
  else
  {
    tmp19 = pow(tmp17, tmp18);
  }
  if(isnan(tmp19) || isinf(tmp19))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
  }
  data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */ = (data->localData[0]->realVars[138] /* MatStm4.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[346] + DIVISION_SIM(data->simulationInfo->realParameter[347],315.0287067347126,"315.0287067347126",equationIndexes) + (data->simulationInfo->realParameter[348]) * (5.752663767164471) + (data->simulationInfo->realParameter[349]) * (tmp12))) + (data->localData[0]->realVars[139] /* MatStm4.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[352] + DIVISION_SIM(data->simulationInfo->realParameter[353],315.0287067347126,"315.0287067347126",equationIndexes) + (data->simulationInfo->realParameter[354]) * (5.752663767164471) + (data->simulationInfo->realParameter[355]) * (tmp19)));
  TRACE_POP
}

/*
equation index: 188
type: SIMPLE_ASSIGN
MatStm4._Pdew = 1.0 / (MatStm4.compMolFrac[1,1] * exp((-MatStm4.comp[1].VP[2]) - MatStm4.comp[1].VP[3] / 315.0287067347126 - MatStm4.comp[1].VP[4] * 5.752663767164471 - MatStm4.comp[1].VP[5] * 315.0287067347126 ^ MatStm4.comp[1].VP[6]) + MatStm4.compMolFrac[1,2] * exp((-MatStm4.comp[2].VP[2]) - MatStm4.comp[2].VP[3] / 315.0287067347126 - MatStm4.comp[2].VP[4] * 5.752663767164471 - MatStm4.comp[2].VP[5] * 315.0287067347126 ^ MatStm4.comp[2].VP[6]))
*/
void splitter1_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
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
  tmp24 = 315.0287067347126;
  tmp25 = data->simulationInfo->realParameter[350];
  if(tmp24 < 0.0 && tmp25 != 0.0)
  {
    tmp27 = modf(tmp25, &tmp28);
    
    if(tmp27 > 0.5)
    {
      tmp27 -= 1.0;
      tmp28 += 1.0;
    }
    else if(tmp27 < -0.5)
    {
      tmp27 += 1.0;
      tmp28 -= 1.0;
    }
    
    if(fabs(tmp27) < 1e-10)
      tmp26 = pow(tmp24, tmp28);
    else
    {
      tmp30 = modf(1.0/tmp25, &tmp29);
      if(tmp30 > 0.5)
      {
        tmp30 -= 1.0;
        tmp29 += 1.0;
      }
      else if(tmp30 < -0.5)
      {
        tmp30 += 1.0;
        tmp29 -= 1.0;
      }
      if(fabs(tmp30) < 1e-10 && ((unsigned long)tmp29 & 1))
      {
        tmp26 = -pow(-tmp24, tmp27)*pow(tmp24, tmp28);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp24, tmp25);
      }
    }
  }
  else
  {
    tmp26 = pow(tmp24, tmp25);
  }
  if(isnan(tmp26) || isinf(tmp26))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp24, tmp25);
  }tmp31 = 315.0287067347126;
  tmp32 = data->simulationInfo->realParameter[356];
  if(tmp31 < 0.0 && tmp32 != 0.0)
  {
    tmp34 = modf(tmp32, &tmp35);
    
    if(tmp34 > 0.5)
    {
      tmp34 -= 1.0;
      tmp35 += 1.0;
    }
    else if(tmp34 < -0.5)
    {
      tmp34 += 1.0;
      tmp35 -= 1.0;
    }
    
    if(fabs(tmp34) < 1e-10)
      tmp33 = pow(tmp31, tmp35);
    else
    {
      tmp37 = modf(1.0/tmp32, &tmp36);
      if(tmp37 > 0.5)
      {
        tmp37 -= 1.0;
        tmp36 += 1.0;
      }
      else if(tmp37 < -0.5)
      {
        tmp37 += 1.0;
        tmp36 -= 1.0;
      }
      if(fabs(tmp37) < 1e-10 && ((unsigned long)tmp36 & 1))
      {
        tmp33 = -pow(-tmp31, tmp34)*pow(tmp31, tmp35);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp31, tmp32);
      }
    }
  }
  else
  {
    tmp33 = pow(tmp31, tmp32);
  }
  if(isnan(tmp33) || isinf(tmp33))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp31, tmp32);
  }
  data->localData[0]->realVars[105] /* MatStm4.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[138] /* MatStm4.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[346]) - (DIVISION_SIM(data->simulationInfo->realParameter[347],315.0287067347126,"315.0287067347126",equationIndexes)) - ((data->simulationInfo->realParameter[348]) * (5.752663767164471)) - ((data->simulationInfo->realParameter[349]) * (tmp26)))) + (data->localData[0]->realVars[139] /* MatStm4.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[352]) - (DIVISION_SIM(data->simulationInfo->realParameter[353],315.0287067347126,"315.0287067347126",equationIndexes)) - ((data->simulationInfo->realParameter[354]) * (5.752663767164471)) - ((data->simulationInfo->realParameter[355]) * (tmp33)))),"MatStm4.compMolFrac[1,1] * exp((-MatStm4.comp[1].VP[2]) - MatStm4.comp[1].VP[3] / 315.0287067347126 - MatStm4.comp[1].VP[4] * 5.752663767164471 - MatStm4.comp[1].VP[5] * 315.0287067347126 ^ MatStm4.comp[1].VP[6]) + MatStm4.compMolFrac[1,2] * exp((-MatStm4.comp[2].VP[2]) - MatStm4.comp[2].VP[3] / 315.0287067347126 - MatStm4.comp[2].VP[4] * 5.752663767164471 - MatStm4.comp[2].VP[5] * 315.0287067347126 ^ MatStm4.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}

void splitter1_eqFunction_189(DATA*, threadData_t*);
void splitter1_eqFunction_190(DATA*, threadData_t*);
void splitter1_eqFunction_191(DATA*, threadData_t*);
void splitter1_eqFunction_192(DATA*, threadData_t*);
void splitter1_eqFunction_193(DATA*, threadData_t*);
void splitter1_eqFunction_194(DATA*, threadData_t*);
void splitter1_eqFunction_195(DATA*, threadData_t*);
void splitter1_eqFunction_200(DATA*, threadData_t*);
void splitter1_eqFunction_199(DATA*, threadData_t*);
void splitter1_eqFunction_198(DATA*, threadData_t*);
void splitter1_eqFunction_197(DATA*, threadData_t*);
void splitter1_eqFunction_196(DATA*, threadData_t*);
/*
equation index: 213
indexNonlinear: 2
type: NONLINEAR

vars: {MatStm4._totMolFlo[3], MatStm4._compMolFrac[2,1], MatStm4._compMolFrac[3,1], MatStm4._compMolFrac[3,2], MatStm4._compMolFrac[2,2]}
eqns: {189, 190, 191, 192, 193, 194, 195, 200, 199, 198, 197, 196}
*/
void splitter1_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 213 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[182] /* MatStm4.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[140] /* MatStm4.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[142] /* MatStm4.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[143] /* MatStm4.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[141] /* MatStm4.compMolFrac[2,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,213};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 213 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[182] /* MatStm4.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[140] /* MatStm4.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[142] /* MatStm4.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[143] /* MatStm4.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[141] /* MatStm4.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  TRACE_POP
}
extern void splitter1_eqFunction_458(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_457(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_455(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_456(DATA *data, threadData_t *threadData);


/*
equation index: 218
type: ALGORITHM

  (MatStm4.compMolEntr[2,2], MatStm4.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm4.comp[2].AS, {MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, {MatStm4.comp[2].HOV[1], MatStm4.comp[2].HOV[2], MatStm4.comp[2].HOV[3], MatStm4.comp[2].HOV[4], MatStm4.comp[2].HOV[5], MatStm4.comp[2].HOV[6]}, MatStm4.comp[2].Tb, MatStm4.comp[2].Tc, 315.0287067347126, 101325.0, MatStm4.compMolFrac[2,2], MatStm4.compMolFrac[3,2]);
*/
void splitter1_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364], (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264], (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268]);
  data->localData[0]->realVars[129] /* MatStm4.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[240], tmp0, tmp1, data->simulationInfo->realParameter[336], data->simulationInfo->realParameter[338], 315.0287067347126, 101325.0, data->localData[0]->realVars[141] /* MatStm4.compMolFrac[2,2] variable */, data->localData[0]->realVars[143] /* MatStm4.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[131] /* MatStm4.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void splitter1_eqFunction_459(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_460(DATA *data, threadData_t *threadData);


/*
equation index: 221
type: ALGORITHM

  (MatStm4.compMolEntr[2,1], MatStm4.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm4.comp[1].AS, {MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, {MatStm4.comp[1].HOV[1], MatStm4.comp[1].HOV[2], MatStm4.comp[1].HOV[3], MatStm4.comp[1].HOV[4], MatStm4.comp[1].HOV[5], MatStm4.comp[1].HOV[6]}, MatStm4.comp[1].Tb, MatStm4.comp[1].Tc, 315.0287067347126, 101325.0, MatStm4.compMolFrac[2,1], MatStm4.compMolFrac[3,1]);
*/
void splitter1_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358], (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[257], (modelica_real)data->simulationInfo->realParameter[258], (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262]);
  data->localData[0]->realVars[128] /* MatStm4.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[239], tmp2, tmp3, data->simulationInfo->realParameter[335], data->simulationInfo->realParameter[337], 315.0287067347126, 101325.0, data->localData[0]->realVars[140] /* MatStm4.compMolFrac[2,1] variable */, data->localData[0]->realVars[142] /* MatStm4.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[130] /* MatStm4.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void splitter1_eqFunction_462(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_466(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_467(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_473(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_468(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_463(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_464(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_472(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_465(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_469(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_470(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_474(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_471(DATA *data, threadData_t *threadData);


/*
equation index: 235
type: ALGORITHM

  MatStm4.MW[3] := $START.MatStm4.MW[3];
  MatStm4.MW[2] := $START.MatStm4.MW[2];
  MatStm4.MW[1] := $START.MatStm4.MW[1];
  for i in 1:2 loop
    MatStm4.MW[:] := {MatStm4.MW[1] + MatStm4.compMolFrac[1,i] * MatStm4.comp[i].MW, MatStm4.MW[2] + MatStm4.compMolFrac[2,i] * MatStm4.comp[i].MW, MatStm4.MW[3] + MatStm4.compMolFrac[3,i] * MatStm4.comp[i].MW};
  end for;
*/
void splitter1_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[103] /* MatStm4.MW[3] variable */ = data->modelData->realVarsData[103].attribute /* MatStm4.MW[3] variable */.start;

  data->localData[0]->realVars[102] /* MatStm4.MW[2] variable */ = data->modelData->realVarsData[102].attribute /* MatStm4.MW[2] variable */.start;

  data->localData[0]->realVars[101] /* MatStm4.MW[1] variable */ = data->modelData->realVarsData[101].attribute /* MatStm4.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[101] /* MatStm4.MW[1] variable */ + ((&data->localData[0]->realVars[138] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[102] /* MatStm4.MW[2] variable */ + ((&data->localData[0]->realVars[138] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[103] /* MatStm4.MW[3] variable */ + ((&data->localData[0]->realVars[138] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[101] /* MatStm4.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
extern void splitter1_eqFunction_478(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_476(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_477(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_479(DATA *data, threadData_t *threadData);

extern void splitter1_eqFunction_480(DATA *data, threadData_t *threadData);


/*
equation index: 241
type: LINEAR

<var>MatStm4._compMasFrac[1,1]</var>
<var>MatStm4._compMasFrac[2,2]</var>
<var>MatStm4._compMasFrac[3,2]</var>
<var>MatStm4._compMasFrac[2,1]</var>
<var>MatStm4._compMasFrac[3,1]</var>
<row>
  <cell>if 101325.0 >= MatStm4.Pbubl then MatStm4.compMasFlo[1,1] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[3,1] else MatStm4.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then -MatStm4.compMasFrac[1,2] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[3,2] else -MatStm4.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[2,2] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -MatStm4.totMasFlo[1] else if 101325.0 >= MatStm4.Pdew then -0.0 else -MatStm4.totMasFlo[1])</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="1" col="0">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -1.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="4" col="3">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void splitter1_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[114] /* MatStm4.compMasFrac[1,1] variable */,data->localData[1]->realVars[117] /* MatStm4.compMasFrac[2,2] variable */,data->localData[1]->realVars[119] /* MatStm4.compMasFrac[3,2] variable */,data->localData[1]->realVars[116] /* MatStm4.compMasFrac[2,1] variable */,data->localData[1]->realVars[118] /* MatStm4.compMasFrac[3,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 241 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,241};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 241 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[114] /* MatStm4.compMasFrac[1,1] variable */ = aux_x[0];
  data->localData[0]->realVars[117] /* MatStm4.compMasFrac[2,2] variable */ = aux_x[1];
  data->localData[0]->realVars[119] /* MatStm4.compMasFrac[3,2] variable */ = aux_x[2];
  data->localData[0]->realVars[116] /* MatStm4.compMasFrac[2,1] variable */ = aux_x[3];
  data->localData[0]->realVars[118] /* MatStm4.compMasFrac[3,1] variable */ = aux_x[4];
  TRACE_POP
}
extern void splitter1_eqFunction_481(DATA *data, threadData_t *threadData);


/*
equation index: 243
type: SIMPLE_ASSIGN
Splitter1._splRat[2] = 0.25
*/
void splitter1_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->localData[0]->realVars[283] /* Splitter1.splRat[2] variable */ = 0.25;
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
Splitter1._splRat[1] = 0.25
*/
void splitter1_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->localData[0]->realVars[282] /* Splitter1.splRat[1] variable */ = 0.25;
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
MatStm4._gammaBubl[1] = 1.0
*/
void splitter1_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->localData[0]->realVars[152] /* MatStm4.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
MatStm4._gammaDew[1] = 1.0
*/
void splitter1_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->localData[0]->realVars[154] /* MatStm4.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
MatStm4._liqfugcoeff_bubl[1] = 1.0
*/
void splitter1_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->localData[0]->realVars[158] /* MatStm4.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
MatStm4._vapfugcoeff_dew[1] = 1.0
*/
void splitter1_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->localData[0]->realVars[185] /* MatStm4.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
MatStm4._gammaBubl[2] = 1.0
*/
void splitter1_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->localData[0]->realVars[153] /* MatStm4.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
MatStm4._gammaDew[2] = 1.0
*/
void splitter1_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->localData[0]->realVars[155] /* MatStm4.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
MatStm4._liqfugcoeff_bubl[2] = 1.0
*/
void splitter1_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->localData[0]->realVars[159] /* MatStm4.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
MatStm4._vapfugcoeff_dew[2] = 1.0
*/
void splitter1_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->localData[0]->realVars[186] /* MatStm4.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
MatStm4._resMolSpHeat[2] = 0.0
*/
void splitter1_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->localData[0]->realVars[176] /* MatStm4.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
MatStm4._resMolSpHeat[3] = 0.0
*/
void splitter1_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->localData[0]->realVars[177] /* MatStm4.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
MatStm4._resMolEnth[2] = 0.0
*/
void splitter1_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->localData[0]->realVars[170] /* MatStm4.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
MatStm4._resMolEnth[3] = 0.0
*/
void splitter1_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->localData[0]->realVars[171] /* MatStm4.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
MatStm4._resMolEntr[2] = 0.0
*/
void splitter1_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->localData[0]->realVars[173] /* MatStm4.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
MatStm4._resMolEntr[3] = 0.0
*/
void splitter1_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->localData[0]->realVars[174] /* MatStm4.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
MatStm5._gammaBubl[1] = 1.0
*/
void splitter1_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->localData[0]->realVars[240] /* MatStm5.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
MatStm5._gammaDew[1] = 1.0
*/
void splitter1_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->localData[0]->realVars[242] /* MatStm5.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
MatStm5._liqfugcoeff_bubl[1] = 1.0
*/
void splitter1_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->localData[0]->realVars[246] /* MatStm5.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
MatStm5._vapfugcoeff_dew[1] = 1.0
*/
void splitter1_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->localData[0]->realVars[273] /* MatStm5.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
MatStm5._gammaBubl[2] = 1.0
*/
void splitter1_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->localData[0]->realVars[241] /* MatStm5.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
MatStm5._gammaDew[2] = 1.0
*/
void splitter1_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->localData[0]->realVars[243] /* MatStm5.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
MatStm5._liqfugcoeff_bubl[2] = 1.0
*/
void splitter1_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->localData[0]->realVars[247] /* MatStm5.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
MatStm5._vapfugcoeff_dew[2] = 1.0
*/
void splitter1_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->localData[0]->realVars[274] /* MatStm5.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
MatStm5._resMolSpHeat[2] = 0.0
*/
void splitter1_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  data->localData[0]->realVars[264] /* MatStm5.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
MatStm5._resMolSpHeat[3] = 0.0
*/
void splitter1_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->localData[0]->realVars[265] /* MatStm5.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
MatStm5._resMolEnth[2] = 0.0
*/
void splitter1_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->localData[0]->realVars[258] /* MatStm5.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
MatStm5._resMolEnth[3] = 0.0
*/
void splitter1_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->localData[0]->realVars[259] /* MatStm5.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
MatStm5._resMolEntr[2] = 0.0
*/
void splitter1_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->localData[0]->realVars[261] /* MatStm5.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
MatStm5._resMolEntr[3] = 0.0
*/
void splitter1_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->localData[0]->realVars[262] /* MatStm5.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
MatStm3._gammaBubl[1] = 1.0
*/
void splitter1_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->localData[0]->realVars[63] /* MatStm3.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
MatStm3._gammaDew[1] = 1.0
*/
void splitter1_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->localData[0]->realVars[65] /* MatStm3.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
MatStm3._liqfugcoeff_bubl[1] = 1.0
*/
void splitter1_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  data->localData[0]->realVars[69] /* MatStm3.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
MatStm3._vapfugcoeff_dew[1] = 1.0
*/
void splitter1_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  data->localData[0]->realVars[97] /* MatStm3.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
MatStm3._gammaBubl[2] = 1.0
*/
void splitter1_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->localData[0]->realVars[64] /* MatStm3.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
MatStm3._gammaDew[2] = 1.0
*/
void splitter1_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->localData[0]->realVars[66] /* MatStm3.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
MatStm3._liqfugcoeff_bubl[2] = 1.0
*/
void splitter1_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->localData[0]->realVars[70] /* MatStm3.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
MatStm3._vapfugcoeff_dew[2] = 1.0
*/
void splitter1_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->localData[0]->realVars[98] /* MatStm3.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
MatStm3._resMolSpHeat[2] = 0.0
*/
void splitter1_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->localData[0]->realVars[87] /* MatStm3.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
MatStm3._resMolSpHeat[3] = 0.0
*/
void splitter1_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->localData[0]->realVars[88] /* MatStm3.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
MatStm3._resMolEnth[2] = 0.0
*/
void splitter1_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->localData[0]->realVars[81] /* MatStm3.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 284
type: SIMPLE_ASSIGN
MatStm3._resMolEnth[3] = 0.0
*/
void splitter1_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  data->localData[0]->realVars[82] /* MatStm3.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 285
type: SIMPLE_ASSIGN
MatStm3._resMolEntr[2] = 0.0
*/
void splitter1_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->localData[0]->realVars[84] /* MatStm3.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 286
type: SIMPLE_ASSIGN
MatStm3._resMolEntr[3] = 0.0
*/
void splitter1_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->localData[0]->realVars[85] /* MatStm3.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 287
type: SIMPLE_ASSIGN
Splitter1._specVal[1] = 50.0
*/
void splitter1_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->localData[0]->realVars[280] /* Splitter1.specVal[1] variable */ = 50.0;
  TRACE_POP
}

/*
equation index: 288
type: SIMPLE_ASSIGN
Splitter1._specVal[2] = 50.0
*/
void splitter1_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->localData[0]->realVars[281] /* Splitter1.specVal[2] variable */ = 50.0;
  TRACE_POP
}

/*
equation index: 289
type: SIMPLE_ASSIGN
MatStm3._P = 101325.0
*/
void splitter1_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  data->localData[0]->realVars[13] /* MatStm3.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
MatStm3._T = 315.0287067347126
*/
void splitter1_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  data->localData[0]->realVars[18] /* MatStm3.T variable */ = 315.0287067347126;
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[1] = 200.0
*/
void splitter1_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  data->localData[0]->realVars[92] /* MatStm3.totMolFlo[1] variable */ = 200.0;
  TRACE_POP
}
OMC_DISABLE_OPT
void splitter1_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  splitter1_eqFunction_1(data, threadData);
  splitter1_eqFunction_2(data, threadData);
  splitter1_eqFunction_3(data, threadData);
  splitter1_eqFunction_4(data, threadData);
  splitter1_eqFunction_5(data, threadData);
  splitter1_eqFunction_6(data, threadData);
  splitter1_eqFunction_7(data, threadData);
  splitter1_eqFunction_8(data, threadData);
  splitter1_eqFunction_9(data, threadData);
  splitter1_eqFunction_10(data, threadData);
  splitter1_eqFunction_11(data, threadData);
  splitter1_eqFunction_12(data, threadData);
  splitter1_eqFunction_13(data, threadData);
  splitter1_eqFunction_14(data, threadData);
  splitter1_eqFunction_15(data, threadData);
  splitter1_eqFunction_16(data, threadData);
  splitter1_eqFunction_17(data, threadData);
  splitter1_eqFunction_18(data, threadData);
  splitter1_eqFunction_19(data, threadData);
  splitter1_eqFunction_20(data, threadData);
  splitter1_eqFunction_21(data, threadData);
  splitter1_eqFunction_22(data, threadData);
  splitter1_eqFunction_23(data, threadData);
  splitter1_eqFunction_24(data, threadData);
  splitter1_eqFunction_25(data, threadData);
  splitter1_eqFunction_26(data, threadData);
  splitter1_eqFunction_27(data, threadData);
  splitter1_eqFunction_28(data, threadData);
  splitter1_eqFunction_29(data, threadData);
  splitter1_eqFunction_30(data, threadData);
  splitter1_eqFunction_31(data, threadData);
  splitter1_eqFunction_32(data, threadData);
  splitter1_eqFunction_33(data, threadData);
  splitter1_eqFunction_34(data, threadData);
  splitter1_eqFunction_35(data, threadData);
  splitter1_eqFunction_36(data, threadData);
  splitter1_eqFunction_37(data, threadData);
  splitter1_eqFunction_38(data, threadData);
  splitter1_eqFunction_39(data, threadData);
  splitter1_eqFunction_40(data, threadData);
  splitter1_eqFunction_41(data, threadData);
  splitter1_eqFunction_42(data, threadData);
  splitter1_eqFunction_43(data, threadData);
  splitter1_eqFunction_44(data, threadData);
  splitter1_eqFunction_45(data, threadData);
  splitter1_eqFunction_46(data, threadData);
  splitter1_eqFunction_47(data, threadData);
  splitter1_eqFunction_48(data, threadData);
  splitter1_eqFunction_49(data, threadData);
  splitter1_eqFunction_50(data, threadData);
  splitter1_eqFunction_51(data, threadData);
  splitter1_eqFunction_299(data, threadData);
  splitter1_eqFunction_298(data, threadData);
  splitter1_eqFunction_297(data, threadData);
  splitter1_eqFunction_296(data, threadData);
  splitter1_eqFunction_80(data, threadData);
  splitter1_eqFunction_331(data, threadData);
  splitter1_eqFunction_330(data, threadData);
  splitter1_eqFunction_83(data, threadData);
  splitter1_eqFunction_329(data, threadData);
  splitter1_eqFunction_328(data, threadData);
  splitter1_eqFunction_325(data, threadData);
  splitter1_eqFunction_326(data, threadData);
  splitter1_eqFunction_88(data, threadData);
  splitter1_eqFunction_341(data, threadData);
  splitter1_eqFunction_336(data, threadData);
  splitter1_eqFunction_332(data, threadData);
  splitter1_eqFunction_342(data, threadData);
  splitter1_eqFunction_93(data, threadData);
  splitter1_eqFunction_349(data, threadData);
  splitter1_eqFunction_351(data, threadData);
  splitter1_eqFunction_347(data, threadData);
  splitter1_eqFunction_350(data, threadData);
  splitter1_eqFunction_337(data, threadData);
  splitter1_eqFunction_339(data, threadData);
  splitter1_eqFunction_338(data, threadData);
  splitter1_eqFunction_333(data, threadData);
  splitter1_eqFunction_335(data, threadData);
  splitter1_eqFunction_334(data, threadData);
  splitter1_eqFunction_343(data, threadData);
  splitter1_eqFunction_345(data, threadData);
  splitter1_eqFunction_344(data, threadData);
  splitter1_eqFunction_348(data, threadData);
  splitter1_eqFunction_108(data, threadData);
  splitter1_eqFunction_352(data, threadData);
  splitter1_eqFunction_295(data, threadData);
  splitter1_eqFunction_294(data, threadData);
  splitter1_eqFunction_293(data, threadData);
  splitter1_eqFunction_292(data, threadData);
  splitter1_eqFunction_354(data, threadData);
  splitter1_eqFunction_355(data, threadData);
  splitter1_eqFunction_356(data, threadData);
  splitter1_eqFunction_357(data, threadData);
  splitter1_eqFunction_358(data, threadData);
  splitter1_eqFunction_359(data, threadData);
  splitter1_eqFunction_360(data, threadData);
  splitter1_eqFunction_361(data, threadData);
  splitter1_eqFunction_122(data, threadData);
  splitter1_eqFunction_363(data, threadData);
  splitter1_eqFunction_364(data, threadData);
  splitter1_eqFunction_365(data, threadData);
  splitter1_eqFunction_366(data, threadData);
  splitter1_eqFunction_367(data, threadData);
  splitter1_eqFunction_128(data, threadData);
  splitter1_eqFunction_129(data, threadData);
  splitter1_eqFunction_154(data, threadData);
  splitter1_eqFunction_396(data, threadData);
  splitter1_eqFunction_395(data, threadData);
  splitter1_eqFunction_401(data, threadData);
  splitter1_eqFunction_400(data, threadData);
  splitter1_eqFunction_398(data, threadData);
  splitter1_eqFunction_397(data, threadData);
  splitter1_eqFunction_161(data, threadData);
  splitter1_eqFunction_162(data, threadData);
  splitter1_eqFunction_403(data, threadData);
  splitter1_eqFunction_407(data, threadData);
  splitter1_eqFunction_404(data, threadData);
  splitter1_eqFunction_410(data, threadData);
  splitter1_eqFunction_408(data, threadData);
  splitter1_eqFunction_414(data, threadData);
  splitter1_eqFunction_409(data, threadData);
  splitter1_eqFunction_405(data, threadData);
  splitter1_eqFunction_413(data, threadData);
  splitter1_eqFunction_406(data, threadData);
  splitter1_eqFunction_411(data, threadData);
  splitter1_eqFunction_415(data, threadData);
  splitter1_eqFunction_412(data, threadData);
  splitter1_eqFunction_176(data, threadData);
  splitter1_eqFunction_421(data, threadData);
  splitter1_eqFunction_418(data, threadData);
  splitter1_eqFunction_420(data, threadData);
  splitter1_eqFunction_422(data, threadData);
  splitter1_eqFunction_417(data, threadData);
  splitter1_eqFunction_182(data, threadData);
  splitter1_eqFunction_419(data, threadData);
  splitter1_eqFunction_424(data, threadData);
  splitter1_eqFunction_425(data, threadData);
  splitter1_eqFunction_426(data, threadData);
  splitter1_eqFunction_187(data, threadData);
  splitter1_eqFunction_188(data, threadData);
  splitter1_eqFunction_213(data, threadData);
  splitter1_eqFunction_458(data, threadData);
  splitter1_eqFunction_457(data, threadData);
  splitter1_eqFunction_455(data, threadData);
  splitter1_eqFunction_456(data, threadData);
  splitter1_eqFunction_218(data, threadData);
  splitter1_eqFunction_459(data, threadData);
  splitter1_eqFunction_460(data, threadData);
  splitter1_eqFunction_221(data, threadData);
  splitter1_eqFunction_462(data, threadData);
  splitter1_eqFunction_466(data, threadData);
  splitter1_eqFunction_467(data, threadData);
  splitter1_eqFunction_473(data, threadData);
  splitter1_eqFunction_468(data, threadData);
  splitter1_eqFunction_463(data, threadData);
  splitter1_eqFunction_464(data, threadData);
  splitter1_eqFunction_472(data, threadData);
  splitter1_eqFunction_465(data, threadData);
  splitter1_eqFunction_469(data, threadData);
  splitter1_eqFunction_470(data, threadData);
  splitter1_eqFunction_474(data, threadData);
  splitter1_eqFunction_471(data, threadData);
  splitter1_eqFunction_235(data, threadData);
  splitter1_eqFunction_478(data, threadData);
  splitter1_eqFunction_476(data, threadData);
  splitter1_eqFunction_477(data, threadData);
  splitter1_eqFunction_479(data, threadData);
  splitter1_eqFunction_480(data, threadData);
  splitter1_eqFunction_241(data, threadData);
  splitter1_eqFunction_481(data, threadData);
  splitter1_eqFunction_243(data, threadData);
  splitter1_eqFunction_244(data, threadData);
  splitter1_eqFunction_245(data, threadData);
  splitter1_eqFunction_246(data, threadData);
  splitter1_eqFunction_247(data, threadData);
  splitter1_eqFunction_248(data, threadData);
  splitter1_eqFunction_249(data, threadData);
  splitter1_eqFunction_250(data, threadData);
  splitter1_eqFunction_251(data, threadData);
  splitter1_eqFunction_252(data, threadData);
  splitter1_eqFunction_253(data, threadData);
  splitter1_eqFunction_254(data, threadData);
  splitter1_eqFunction_255(data, threadData);
  splitter1_eqFunction_256(data, threadData);
  splitter1_eqFunction_257(data, threadData);
  splitter1_eqFunction_258(data, threadData);
  splitter1_eqFunction_259(data, threadData);
  splitter1_eqFunction_260(data, threadData);
  splitter1_eqFunction_261(data, threadData);
  splitter1_eqFunction_262(data, threadData);
  splitter1_eqFunction_263(data, threadData);
  splitter1_eqFunction_264(data, threadData);
  splitter1_eqFunction_265(data, threadData);
  splitter1_eqFunction_266(data, threadData);
  splitter1_eqFunction_267(data, threadData);
  splitter1_eqFunction_268(data, threadData);
  splitter1_eqFunction_269(data, threadData);
  splitter1_eqFunction_270(data, threadData);
  splitter1_eqFunction_271(data, threadData);
  splitter1_eqFunction_272(data, threadData);
  splitter1_eqFunction_273(data, threadData);
  splitter1_eqFunction_274(data, threadData);
  splitter1_eqFunction_275(data, threadData);
  splitter1_eqFunction_276(data, threadData);
  splitter1_eqFunction_277(data, threadData);
  splitter1_eqFunction_278(data, threadData);
  splitter1_eqFunction_279(data, threadData);
  splitter1_eqFunction_280(data, threadData);
  splitter1_eqFunction_281(data, threadData);
  splitter1_eqFunction_282(data, threadData);
  splitter1_eqFunction_283(data, threadData);
  splitter1_eqFunction_284(data, threadData);
  splitter1_eqFunction_285(data, threadData);
  splitter1_eqFunction_286(data, threadData);
  splitter1_eqFunction_287(data, threadData);
  splitter1_eqFunction_288(data, threadData);
  splitter1_eqFunction_289(data, threadData);
  splitter1_eqFunction_290(data, threadData);
  splitter1_eqFunction_291(data, threadData);
  TRACE_POP
}


int splitter1_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  splitter1_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int splitter1_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int splitter1_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

