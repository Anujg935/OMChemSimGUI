/* Initialization */
#include "Flowsheet_model.h"
#include "Flowsheet_11mix.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void Flowsheet_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
MatStm1._gamma[1] = 1.0
*/
void Flowsheet_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[64] /* MatStm1.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
MatStm1._gamma[2] = 1.0
*/
void Flowsheet_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[65] /* MatStm1.gamma[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[1] = 0.0
*/
void Flowsheet_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[89] /* MatStm1.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[1] = 0.0
*/
void Flowsheet_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[83] /* MatStm1.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[1] = 0.0
*/
void Flowsheet_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[86] /* MatStm1.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
MatStm2._gamma[1] = 1.0
*/
void Flowsheet_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[153] /* MatStm2.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
MatStm2._gamma[2] = 1.0
*/
void Flowsheet_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[154] /* MatStm2.gamma[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[1] = 0.0
*/
void Flowsheet_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[178] /* MatStm2.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[1] = 0.0
*/
void Flowsheet_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[172] /* MatStm2.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[1] = 0.0
*/
void Flowsheet_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[175] /* MatStm2.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
MatStm3._gamma[1] = 1.0
*/
void Flowsheet_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[241] /* MatStm3.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
MatStm3._gamma[2] = 1.0
*/
void Flowsheet_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[242] /* MatStm3.gamma[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
MatStm3._resMolSpHeat[1] = 0.0
*/
void Flowsheet_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[266] /* MatStm3.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
MatStm3._resMolEnth[1] = 0.0
*/
void Flowsheet_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[260] /* MatStm3.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
MatStm3._resMolEntr[1] = 0.0
*/
void Flowsheet_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[263] /* MatStm3.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
MatStm4._gamma[1] = 1.0
*/
void Flowsheet_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[331] /* MatStm4.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
MatStm4._gamma[2] = 1.0
*/
void Flowsheet_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[332] /* MatStm4.gamma[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
MatStm4._resMolSpHeat[1] = 0.0
*/
void Flowsheet_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[356] /* MatStm4.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
MatStm4._resMolEnth[1] = 0.0
*/
void Flowsheet_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[350] /* MatStm4.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
MatStm4._resMolEntr[1] = 0.0
*/
void Flowsheet_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[353] /* MatStm4.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
MatStm5._gamma[1] = 1.0
*/
void Flowsheet_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[421] /* MatStm5.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
MatStm5._gamma[2] = 1.0
*/
void Flowsheet_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[422] /* MatStm5.gamma[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
MatStm5._resMolSpHeat[1] = 0.0
*/
void Flowsheet_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[446] /* MatStm5.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
MatStm5._resMolEnth[1] = 0.0
*/
void Flowsheet_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[440] /* MatStm5.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
MatStm5._resMolEntr[1] = 0.0
*/
void Flowsheet_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[443] /* MatStm5.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
MatStm5._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm5.comp[2].VP[1], MatStm5.comp[2].VP[2], MatStm5.comp[2].VP[3], MatStm5.comp[2].VP[4], MatStm5.comp[2].VP[5], MatStm5.comp[2].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[825], (modelica_real)data->simulationInfo->realParameter[826], (modelica_real)data->simulationInfo->realParameter[827], (modelica_real)data->simulationInfo->realParameter[828], (modelica_real)data->simulationInfo->realParameter[829], (modelica_real)data->simulationInfo->realParameter[830]);
  data->localData[0]->realVars[377] /* MatStm5.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, 300.0);
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
MatStm5._K[2] = 9.869232667160129e-006 * MatStm5.Psat[2]
*/
void Flowsheet_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[369] /* MatStm5.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[377] /* MatStm5.Psat[2] variable */);
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
MatStm5._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm5.comp[1].VP[1], MatStm5.comp[1].VP[2], MatStm5.comp[1].VP[3], MatStm5.comp[1].VP[4], MatStm5.comp[1].VP[5], MatStm5.comp[1].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[819], (modelica_real)data->simulationInfo->realParameter[820], (modelica_real)data->simulationInfo->realParameter[821], (modelica_real)data->simulationInfo->realParameter[822], (modelica_real)data->simulationInfo->realParameter[823], (modelica_real)data->simulationInfo->realParameter[824]);
  data->localData[0]->realVars[376] /* MatStm5.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp1, 300.0);
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
MatStm5._K[1] = 9.869232667160129e-006 * MatStm5.Psat[1]
*/
void Flowsheet_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[368] /* MatStm5.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[376] /* MatStm5.Psat[1] variable */);
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm5.comp[2].SH, {MatStm5.comp[2].VapCp[1], MatStm5.comp[2].VapCp[2], MatStm5.comp[2].VapCp[3], MatStm5.comp[2].VapCp[4], MatStm5.comp[2].VapCp[5], MatStm5.comp[2].VapCp[6]}, {MatStm5.comp[2].HOV[1], MatStm5.comp[2].HOV[2], MatStm5.comp[2].HOV[3], MatStm5.comp[2].HOV[4], MatStm5.comp[2].HOV[5], MatStm5.comp[2].HOV[6]}, MatStm5.comp[2].Tc, 300.0)
*/
void Flowsheet_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[837], (modelica_real)data->simulationInfo->realParameter[838], (modelica_real)data->simulationInfo->realParameter[839], (modelica_real)data->simulationInfo->realParameter[840], (modelica_real)data->simulationInfo->realParameter[841], (modelica_real)data->simulationInfo->realParameter[842]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[737], (modelica_real)data->simulationInfo->realParameter[738], (modelica_real)data->simulationInfo->realParameter[739], (modelica_real)data->simulationInfo->realParameter[740], (modelica_real)data->simulationInfo->realParameter[741], (modelica_real)data->simulationInfo->realParameter[742]);
  data->localData[0]->realVars[396] /* MatStm5.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[802], tmp2, tmp3, data->simulationInfo->realParameter[812], 300.0);
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm5.comp[2].SH, {MatStm5.comp[2].VapCp[1], MatStm5.comp[2].VapCp[2], MatStm5.comp[2].VapCp[3], MatStm5.comp[2].VapCp[4], MatStm5.comp[2].VapCp[5], MatStm5.comp[2].VapCp[6]}, {MatStm5.comp[2].HOV[1], MatStm5.comp[2].HOV[2], MatStm5.comp[2].HOV[3], MatStm5.comp[2].HOV[4], MatStm5.comp[2].HOV[5], MatStm5.comp[2].HOV[6]}, MatStm5.comp[2].Tc, 300.0)
*/
void Flowsheet_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  real_array tmp4;
  real_array tmp5;
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[837], (modelica_real)data->simulationInfo->realParameter[838], (modelica_real)data->simulationInfo->realParameter[839], (modelica_real)data->simulationInfo->realParameter[840], (modelica_real)data->simulationInfo->realParameter[841], (modelica_real)data->simulationInfo->realParameter[842]);
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[737], (modelica_real)data->simulationInfo->realParameter[738], (modelica_real)data->simulationInfo->realParameter[739], (modelica_real)data->simulationInfo->realParameter[740], (modelica_real)data->simulationInfo->realParameter[741], (modelica_real)data->simulationInfo->realParameter[742]);
  data->localData[0]->realVars[394] /* MatStm5.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[802], tmp4, tmp5, data->simulationInfo->realParameter[812], 300.0);
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm5.comp[2].VapCp[1], MatStm5.comp[2].VapCp[2], MatStm5.comp[2].VapCp[3], MatStm5.comp[2].VapCp[4], MatStm5.comp[2].VapCp[5], MatStm5.comp[2].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  real_array tmp6;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[837], (modelica_real)data->simulationInfo->realParameter[838], (modelica_real)data->simulationInfo->realParameter[839], (modelica_real)data->simulationInfo->realParameter[840], (modelica_real)data->simulationInfo->realParameter[841], (modelica_real)data->simulationInfo->realParameter[842]);
  data->localData[0]->realVars[420] /* MatStm5.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp6, 300.0);
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm5.comp[2].LiqCp[1], MatStm5.comp[2].LiqCp[2], MatStm5.comp[2].LiqCp[3], MatStm5.comp[2].LiqCp[4], MatStm5.comp[2].LiqCp[5], MatStm5.comp[2].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[753], (modelica_real)data->simulationInfo->realParameter[754], (modelica_real)data->simulationInfo->realParameter[755], (modelica_real)data->simulationInfo->realParameter[756], (modelica_real)data->simulationInfo->realParameter[757], (modelica_real)data->simulationInfo->realParameter[758]);
  data->localData[0]->realVars[418] /* MatStm5.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp7, 300.0);
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm5.comp[1].SH, {MatStm5.comp[1].VapCp[1], MatStm5.comp[1].VapCp[2], MatStm5.comp[1].VapCp[3], MatStm5.comp[1].VapCp[4], MatStm5.comp[1].VapCp[5], MatStm5.comp[1].VapCp[6]}, {MatStm5.comp[1].HOV[1], MatStm5.comp[1].HOV[2], MatStm5.comp[1].HOV[3], MatStm5.comp[1].HOV[4], MatStm5.comp[1].HOV[5], MatStm5.comp[1].HOV[6]}, MatStm5.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[831], (modelica_real)data->simulationInfo->realParameter[832], (modelica_real)data->simulationInfo->realParameter[833], (modelica_real)data->simulationInfo->realParameter[834], (modelica_real)data->simulationInfo->realParameter[835], (modelica_real)data->simulationInfo->realParameter[836]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[731], (modelica_real)data->simulationInfo->realParameter[732], (modelica_real)data->simulationInfo->realParameter[733], (modelica_real)data->simulationInfo->realParameter[734], (modelica_real)data->simulationInfo->realParameter[735], (modelica_real)data->simulationInfo->realParameter[736]);
  data->localData[0]->realVars[395] /* MatStm5.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[801], tmp8, tmp9, data->simulationInfo->realParameter[811], 300.0);
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm5.comp[1].SH, {MatStm5.comp[1].VapCp[1], MatStm5.comp[1].VapCp[2], MatStm5.comp[1].VapCp[3], MatStm5.comp[1].VapCp[4], MatStm5.comp[1].VapCp[5], MatStm5.comp[1].VapCp[6]}, {MatStm5.comp[1].HOV[1], MatStm5.comp[1].HOV[2], MatStm5.comp[1].HOV[3], MatStm5.comp[1].HOV[4], MatStm5.comp[1].HOV[5], MatStm5.comp[1].HOV[6]}, MatStm5.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[831], (modelica_real)data->simulationInfo->realParameter[832], (modelica_real)data->simulationInfo->realParameter[833], (modelica_real)data->simulationInfo->realParameter[834], (modelica_real)data->simulationInfo->realParameter[835], (modelica_real)data->simulationInfo->realParameter[836]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[731], (modelica_real)data->simulationInfo->realParameter[732], (modelica_real)data->simulationInfo->realParameter[733], (modelica_real)data->simulationInfo->realParameter[734], (modelica_real)data->simulationInfo->realParameter[735], (modelica_real)data->simulationInfo->realParameter[736]);
  data->localData[0]->realVars[393] /* MatStm5.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[801], tmp10, tmp11, data->simulationInfo->realParameter[811], 300.0);
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm5.comp[1].VapCp[1], MatStm5.comp[1].VapCp[2], MatStm5.comp[1].VapCp[3], MatStm5.comp[1].VapCp[4], MatStm5.comp[1].VapCp[5], MatStm5.comp[1].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  real_array tmp12;
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[831], (modelica_real)data->simulationInfo->realParameter[832], (modelica_real)data->simulationInfo->realParameter[833], (modelica_real)data->simulationInfo->realParameter[834], (modelica_real)data->simulationInfo->realParameter[835], (modelica_real)data->simulationInfo->realParameter[836]);
  data->localData[0]->realVars[419] /* MatStm5.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp12, 300.0);
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm5.comp[1].LiqCp[1], MatStm5.comp[1].LiqCp[2], MatStm5.comp[1].LiqCp[3], MatStm5.comp[1].LiqCp[4], MatStm5.comp[1].LiqCp[5], MatStm5.comp[1].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)data->simulationInfo->realParameter[747], (modelica_real)data->simulationInfo->realParameter[748], (modelica_real)data->simulationInfo->realParameter[749], (modelica_real)data->simulationInfo->realParameter[750], (modelica_real)data->simulationInfo->realParameter[751], (modelica_real)data->simulationInfo->realParameter[752]);
  data->localData[0]->realVars[417] /* MatStm5.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp13, 300.0);
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
MatStm4._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm4.comp[2].VP[1], MatStm4.comp[2].VP[2], MatStm4.comp[2].VP[3], MatStm4.comp[2].VP[4], MatStm4.comp[2].VP[5], MatStm4.comp[2].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  real_array tmp14;
  array_alloc_scalar_real_array(&tmp14, 6, (modelica_real)data->simulationInfo->realParameter[667], (modelica_real)data->simulationInfo->realParameter[668], (modelica_real)data->simulationInfo->realParameter[669], (modelica_real)data->simulationInfo->realParameter[670], (modelica_real)data->simulationInfo->realParameter[671], (modelica_real)data->simulationInfo->realParameter[672]);
  data->localData[0]->realVars[287] /* MatStm4.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp14, 300.0);
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
MatStm4._K[2] = 9.869232667160129e-006 * MatStm4.Psat[2]
*/
void Flowsheet_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[279] /* MatStm4.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[287] /* MatStm4.Psat[2] variable */);
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
MatStm4._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm4.comp[1].VP[1], MatStm4.comp[1].VP[2], MatStm4.comp[1].VP[3], MatStm4.comp[1].VP[4], MatStm4.comp[1].VP[5], MatStm4.comp[1].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  real_array tmp15;
  array_alloc_scalar_real_array(&tmp15, 6, (modelica_real)data->simulationInfo->realParameter[661], (modelica_real)data->simulationInfo->realParameter[662], (modelica_real)data->simulationInfo->realParameter[663], (modelica_real)data->simulationInfo->realParameter[664], (modelica_real)data->simulationInfo->realParameter[665], (modelica_real)data->simulationInfo->realParameter[666]);
  data->localData[0]->realVars[286] /* MatStm4.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp15, 300.0);
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
MatStm4._K[1] = 9.869232667160129e-006 * MatStm4.Psat[1]
*/
void Flowsheet_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[278] /* MatStm4.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[286] /* MatStm4.Psat[1] variable */);
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm4.comp[2].SH, {MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, {MatStm4.comp[2].HOV[1], MatStm4.comp[2].HOV[2], MatStm4.comp[2].HOV[3], MatStm4.comp[2].HOV[4], MatStm4.comp[2].HOV[5], MatStm4.comp[2].HOV[6]}, MatStm4.comp[2].Tc, 300.0)
*/
void Flowsheet_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  real_array tmp16;
  real_array tmp17;
  array_alloc_scalar_real_array(&tmp16, 6, (modelica_real)data->simulationInfo->realParameter[679], (modelica_real)data->simulationInfo->realParameter[680], (modelica_real)data->simulationInfo->realParameter[681], (modelica_real)data->simulationInfo->realParameter[682], (modelica_real)data->simulationInfo->realParameter[683], (modelica_real)data->simulationInfo->realParameter[684]);
  array_alloc_scalar_real_array(&tmp17, 6, (modelica_real)data->simulationInfo->realParameter[579], (modelica_real)data->simulationInfo->realParameter[580], (modelica_real)data->simulationInfo->realParameter[581], (modelica_real)data->simulationInfo->realParameter[582], (modelica_real)data->simulationInfo->realParameter[583], (modelica_real)data->simulationInfo->realParameter[584]);
  data->localData[0]->realVars[306] /* MatStm4.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[644], tmp16, tmp17, data->simulationInfo->realParameter[654], 300.0);
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm4.comp[2].SH, {MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, {MatStm4.comp[2].HOV[1], MatStm4.comp[2].HOV[2], MatStm4.comp[2].HOV[3], MatStm4.comp[2].HOV[4], MatStm4.comp[2].HOV[5], MatStm4.comp[2].HOV[6]}, MatStm4.comp[2].Tc, 300.0)
*/
void Flowsheet_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  real_array tmp18;
  real_array tmp19;
  array_alloc_scalar_real_array(&tmp18, 6, (modelica_real)data->simulationInfo->realParameter[679], (modelica_real)data->simulationInfo->realParameter[680], (modelica_real)data->simulationInfo->realParameter[681], (modelica_real)data->simulationInfo->realParameter[682], (modelica_real)data->simulationInfo->realParameter[683], (modelica_real)data->simulationInfo->realParameter[684]);
  array_alloc_scalar_real_array(&tmp19, 6, (modelica_real)data->simulationInfo->realParameter[579], (modelica_real)data->simulationInfo->realParameter[580], (modelica_real)data->simulationInfo->realParameter[581], (modelica_real)data->simulationInfo->realParameter[582], (modelica_real)data->simulationInfo->realParameter[583], (modelica_real)data->simulationInfo->realParameter[584]);
  data->localData[0]->realVars[304] /* MatStm4.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[644], tmp18, tmp19, data->simulationInfo->realParameter[654], 300.0);
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  real_array tmp20;
  array_alloc_scalar_real_array(&tmp20, 6, (modelica_real)data->simulationInfo->realParameter[679], (modelica_real)data->simulationInfo->realParameter[680], (modelica_real)data->simulationInfo->realParameter[681], (modelica_real)data->simulationInfo->realParameter[682], (modelica_real)data->simulationInfo->realParameter[683], (modelica_real)data->simulationInfo->realParameter[684]);
  data->localData[0]->realVars[330] /* MatStm4.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp20, 300.0);
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm4.comp[2].LiqCp[1], MatStm4.comp[2].LiqCp[2], MatStm4.comp[2].LiqCp[3], MatStm4.comp[2].LiqCp[4], MatStm4.comp[2].LiqCp[5], MatStm4.comp[2].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  real_array tmp21;
  array_alloc_scalar_real_array(&tmp21, 6, (modelica_real)data->simulationInfo->realParameter[595], (modelica_real)data->simulationInfo->realParameter[596], (modelica_real)data->simulationInfo->realParameter[597], (modelica_real)data->simulationInfo->realParameter[598], (modelica_real)data->simulationInfo->realParameter[599], (modelica_real)data->simulationInfo->realParameter[600]);
  data->localData[0]->realVars[328] /* MatStm4.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp21, 300.0);
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm4.comp[1].SH, {MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, {MatStm4.comp[1].HOV[1], MatStm4.comp[1].HOV[2], MatStm4.comp[1].HOV[3], MatStm4.comp[1].HOV[4], MatStm4.comp[1].HOV[5], MatStm4.comp[1].HOV[6]}, MatStm4.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  real_array tmp22;
  real_array tmp23;
  array_alloc_scalar_real_array(&tmp22, 6, (modelica_real)data->simulationInfo->realParameter[673], (modelica_real)data->simulationInfo->realParameter[674], (modelica_real)data->simulationInfo->realParameter[675], (modelica_real)data->simulationInfo->realParameter[676], (modelica_real)data->simulationInfo->realParameter[677], (modelica_real)data->simulationInfo->realParameter[678]);
  array_alloc_scalar_real_array(&tmp23, 6, (modelica_real)data->simulationInfo->realParameter[573], (modelica_real)data->simulationInfo->realParameter[574], (modelica_real)data->simulationInfo->realParameter[575], (modelica_real)data->simulationInfo->realParameter[576], (modelica_real)data->simulationInfo->realParameter[577], (modelica_real)data->simulationInfo->realParameter[578]);
  data->localData[0]->realVars[305] /* MatStm4.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[643], tmp22, tmp23, data->simulationInfo->realParameter[653], 300.0);
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm4.comp[1].SH, {MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, {MatStm4.comp[1].HOV[1], MatStm4.comp[1].HOV[2], MatStm4.comp[1].HOV[3], MatStm4.comp[1].HOV[4], MatStm4.comp[1].HOV[5], MatStm4.comp[1].HOV[6]}, MatStm4.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  real_array tmp24;
  real_array tmp25;
  array_alloc_scalar_real_array(&tmp24, 6, (modelica_real)data->simulationInfo->realParameter[673], (modelica_real)data->simulationInfo->realParameter[674], (modelica_real)data->simulationInfo->realParameter[675], (modelica_real)data->simulationInfo->realParameter[676], (modelica_real)data->simulationInfo->realParameter[677], (modelica_real)data->simulationInfo->realParameter[678]);
  array_alloc_scalar_real_array(&tmp25, 6, (modelica_real)data->simulationInfo->realParameter[573], (modelica_real)data->simulationInfo->realParameter[574], (modelica_real)data->simulationInfo->realParameter[575], (modelica_real)data->simulationInfo->realParameter[576], (modelica_real)data->simulationInfo->realParameter[577], (modelica_real)data->simulationInfo->realParameter[578]);
  data->localData[0]->realVars[303] /* MatStm4.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[643], tmp24, tmp25, data->simulationInfo->realParameter[653], 300.0);
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  real_array tmp26;
  array_alloc_scalar_real_array(&tmp26, 6, (modelica_real)data->simulationInfo->realParameter[673], (modelica_real)data->simulationInfo->realParameter[674], (modelica_real)data->simulationInfo->realParameter[675], (modelica_real)data->simulationInfo->realParameter[676], (modelica_real)data->simulationInfo->realParameter[677], (modelica_real)data->simulationInfo->realParameter[678]);
  data->localData[0]->realVars[329] /* MatStm4.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp26, 300.0);
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm4.comp[1].LiqCp[1], MatStm4.comp[1].LiqCp[2], MatStm4.comp[1].LiqCp[3], MatStm4.comp[1].LiqCp[4], MatStm4.comp[1].LiqCp[5], MatStm4.comp[1].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  real_array tmp27;
  array_alloc_scalar_real_array(&tmp27, 6, (modelica_real)data->simulationInfo->realParameter[589], (modelica_real)data->simulationInfo->realParameter[590], (modelica_real)data->simulationInfo->realParameter[591], (modelica_real)data->simulationInfo->realParameter[592], (modelica_real)data->simulationInfo->realParameter[593], (modelica_real)data->simulationInfo->realParameter[594]);
  data->localData[0]->realVars[327] /* MatStm4.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp27, 300.0);
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
MatStm5._compMolFrac[1,1] = 0.9
*/
void Flowsheet_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */ = 0.9;
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[1,1] = 100.0 * MatStm5.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  data->localData[0]->realVars[403] /* MatStm5.compMolFlo[1,1] variable */ = (100.0) * (data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[1,1] = MatStm5.compMolFlo[1,1] * MatStm5.comp[1].MW
*/
void Flowsheet_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[403] /* MatStm5.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[795]);
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
MatStm5._compMolFrac[1,2] = 0.1
*/
void Flowsheet_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */ = 0.1;
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[1,2] = 100.0 * MatStm5.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  data->localData[0]->realVars[404] /* MatStm5.compMolFlo[1,2] variable */ = (100.0) * (data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[1,2] = MatStm5.compMolFlo[1,2] * MatStm5.comp[2].MW
*/
void Flowsheet_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[380] /* MatStm5.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[404] /* MatStm5.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[796]);
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
MatStm5._Pbubl = MatStm5.compMolFrac[1,1] * exp(MatStm5.comp[1].VP[2] + MatStm5.comp[1].VP[3] / 300.0 + MatStm5.comp[1].VP[4] * 5.703782474656201 + MatStm5.comp[1].VP[5] * 300.0 ^ MatStm5.comp[1].VP[6]) + MatStm5.compMolFrac[1,2] * exp(MatStm5.comp[2].VP[2] + MatStm5.comp[2].VP[3] / 300.0 + MatStm5.comp[2].VP[4] * 5.703782474656201 + MatStm5.comp[2].VP[5] * 300.0 ^ MatStm5.comp[2].VP[6])
*/
void Flowsheet_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
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
  tmp28 = 300.0;
  tmp29 = data->simulationInfo->realParameter[824];
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
  }tmp35 = 300.0;
  tmp36 = data->simulationInfo->realParameter[830];
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
  data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */ = (data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[820] + DIVISION_SIM(data->simulationInfo->realParameter[821],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[822]) * (5.703782474656201) + (data->simulationInfo->realParameter[823]) * (tmp30))) + (data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[826] + DIVISION_SIM(data->simulationInfo->realParameter[827],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[828]) * (5.703782474656201) + (data->simulationInfo->realParameter[829]) * (tmp37)));
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
MatStm5._Pdew = 1.0 / (MatStm5.compMolFrac[1,1] * exp((-MatStm5.comp[1].VP[2]) - MatStm5.comp[1].VP[3] / 300.0 - MatStm5.comp[1].VP[4] * 5.703782474656201 - MatStm5.comp[1].VP[5] * 300.0 ^ MatStm5.comp[1].VP[6]) + MatStm5.compMolFrac[1,2] * exp((-MatStm5.comp[2].VP[2]) - MatStm5.comp[2].VP[3] / 300.0 - MatStm5.comp[2].VP[4] * 5.703782474656201 - MatStm5.comp[2].VP[5] * 300.0 ^ MatStm5.comp[2].VP[6]))
*/
void Flowsheet_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
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
  tmp42 = 300.0;
  tmp43 = data->simulationInfo->realParameter[824];
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
  }tmp49 = 300.0;
  tmp50 = data->simulationInfo->realParameter[830];
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
  data->localData[0]->realVars[375] /* MatStm5.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[820]) - (DIVISION_SIM(data->simulationInfo->realParameter[821],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[822]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[823]) * (tmp44)))) + (data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[826]) - (DIVISION_SIM(data->simulationInfo->realParameter[827],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[828]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[829]) * (tmp51)))),"MatStm5.compMolFrac[1,1] * exp((-MatStm5.comp[1].VP[2]) - MatStm5.comp[1].VP[3] / 300.0 - MatStm5.comp[1].VP[4] * 5.703782474656201 - MatStm5.comp[1].VP[5] * 300.0 ^ MatStm5.comp[1].VP[6]) + MatStm5.compMolFrac[1,2] * exp((-MatStm5.comp[2].VP[2]) - MatStm5.comp[2].VP[3] / 300.0 - MatStm5.comp[2].VP[4] * 5.703782474656201 - MatStm5.comp[2].VP[5] * 300.0 ^ MatStm5.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
MatStm4._compMolFrac[1,1] = 0.8
*/
void Flowsheet_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[319] /* MatStm4.compMolFrac[1,1] variable */ = 0.8;
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[1,1] = 90.0 * MatStm4.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[313] /* MatStm4.compMolFlo[1,1] variable */ = (90.0) * (data->localData[0]->realVars[319] /* MatStm4.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[1,1] = MatStm4.compMolFlo[1,1] * MatStm4.comp[1].MW
*/
void Flowsheet_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->realVars[289] /* MatStm4.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[313] /* MatStm4.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[637]);
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,1] = 0.5263157894736842 * MatStm5.compMolFrac[1,1] + 0.4736842105263158 * MatStm4.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */ = (0.5263157894736842) * (data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */) + (0.4736842105263158) * (data->localData[0]->realVars[319] /* MatStm4.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
MatStm4._compMolFrac[1,2] = 0.2
*/
void Flowsheet_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[320] /* MatStm4.compMolFrac[1,2] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 63
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[1,2] = 90.0 * MatStm4.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[314] /* MatStm4.compMolFlo[1,2] variable */ = (90.0) * (data->localData[0]->realVars[320] /* MatStm4.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 64
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[1,2] = MatStm4.compMolFlo[1,2] * MatStm4.comp[2].MW
*/
void Flowsheet_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[290] /* MatStm4.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[314] /* MatStm4.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[638]);
  TRACE_POP
}

/*
equation index: 65
type: SIMPLE_ASSIGN
MatStm4._Pbubl = MatStm4.compMolFrac[1,1] * exp(MatStm4.comp[1].VP[2] + MatStm4.comp[1].VP[3] / 300.0 + MatStm4.comp[1].VP[4] * 5.703782474656201 + MatStm4.comp[1].VP[5] * 300.0 ^ MatStm4.comp[1].VP[6]) + MatStm4.compMolFrac[1,2] * exp(MatStm4.comp[2].VP[2] + MatStm4.comp[2].VP[3] / 300.0 + MatStm4.comp[2].VP[4] * 5.703782474656201 + MatStm4.comp[2].VP[5] * 300.0 ^ MatStm4.comp[2].VP[6])
*/
void Flowsheet_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
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
  tmp56 = 300.0;
  tmp57 = data->simulationInfo->realParameter[666];
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
  }tmp63 = 300.0;
  tmp64 = data->simulationInfo->realParameter[672];
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
  data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */ = (data->localData[0]->realVars[319] /* MatStm4.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[662] + DIVISION_SIM(data->simulationInfo->realParameter[663],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[664]) * (5.703782474656201) + (data->simulationInfo->realParameter[665]) * (tmp58))) + (data->localData[0]->realVars[320] /* MatStm4.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[668] + DIVISION_SIM(data->simulationInfo->realParameter[669],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[670]) * (5.703782474656201) + (data->simulationInfo->realParameter[671]) * (tmp65)));
  TRACE_POP
}

/*
equation index: 66
type: SIMPLE_ASSIGN
MatStm4._Pdew = 1.0 / (MatStm4.compMolFrac[1,1] * exp((-MatStm4.comp[1].VP[2]) - MatStm4.comp[1].VP[3] / 300.0 - MatStm4.comp[1].VP[4] * 5.703782474656201 - MatStm4.comp[1].VP[5] * 300.0 ^ MatStm4.comp[1].VP[6]) + MatStm4.compMolFrac[1,2] * exp((-MatStm4.comp[2].VP[2]) - MatStm4.comp[2].VP[3] / 300.0 - MatStm4.comp[2].VP[4] * 5.703782474656201 - MatStm4.comp[2].VP[5] * 300.0 ^ MatStm4.comp[2].VP[6]))
*/
void Flowsheet_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
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
  tmp70 = 300.0;
  tmp71 = data->simulationInfo->realParameter[666];
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
  }tmp77 = 300.0;
  tmp78 = data->simulationInfo->realParameter[672];
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
  data->localData[0]->realVars[285] /* MatStm4.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[319] /* MatStm4.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[662]) - (DIVISION_SIM(data->simulationInfo->realParameter[663],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[664]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[665]) * (tmp72)))) + (data->localData[0]->realVars[320] /* MatStm4.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[668]) - (DIVISION_SIM(data->simulationInfo->realParameter[669],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[670]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[671]) * (tmp79)))),"MatStm4.compMolFrac[1,1] * exp((-MatStm4.comp[1].VP[2]) - MatStm4.comp[1].VP[3] / 300.0 - MatStm4.comp[1].VP[4] * 5.703782474656201 - MatStm4.comp[1].VP[5] * 300.0 ^ MatStm4.comp[1].VP[6]) + MatStm4.compMolFrac[1,2] * exp((-MatStm4.comp[2].VP[2]) - MatStm4.comp[2].VP[3] / 300.0 - MatStm4.comp[2].VP[4] * 5.703782474656201 - MatStm4.comp[2].VP[5] * 300.0 ^ MatStm4.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,2] = 0.5263157894736842 * MatStm5.compMolFrac[1,2] + 0.4736842105263158 * MatStm4.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[53] /* MatStm1.compMolFrac[1,2] variable */ = (0.5263157894736842) * (data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */) + (0.4736842105263158) * (data->localData[0]->realVars[320] /* MatStm4.compMolFrac[1,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_474(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_472(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_475(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_473(DATA *data, threadData_t *threadData);


void Flowsheet_eqFunction_72(DATA*, threadData_t*);
void Flowsheet_eqFunction_73(DATA*, threadData_t*);
void Flowsheet_eqFunction_74(DATA*, threadData_t*);
void Flowsheet_eqFunction_75(DATA*, threadData_t*);
void Flowsheet_eqFunction_76(DATA*, threadData_t*);
void Flowsheet_eqFunction_77(DATA*, threadData_t*);
void Flowsheet_eqFunction_78(DATA*, threadData_t*);
void Flowsheet_eqFunction_83(DATA*, threadData_t*);
void Flowsheet_eqFunction_82(DATA*, threadData_t*);
void Flowsheet_eqFunction_81(DATA*, threadData_t*);
void Flowsheet_eqFunction_80(DATA*, threadData_t*);
void Flowsheet_eqFunction_79(DATA*, threadData_t*);
/*
equation index: 96
indexNonlinear: 0
type: NONLINEAR

vars: {MatStm4._totMolFlo[2], MatStm4._compMolFrac[3,1], MatStm4._compMolFrac[2,1], MatStm4._compMolFrac[3,2], MatStm4._compMolFrac[2,2]}
eqns: {72, 73, 74, 75, 76, 77, 78, 83, 82, 81, 80, 79}
*/
void Flowsheet_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 96 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[363] /* MatStm4.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[323] /* MatStm4.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[321] /* MatStm4.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[324] /* MatStm4.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[322] /* MatStm4.compMolFrac[2,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,96};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 96 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[363] /* MatStm4.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[323] /* MatStm4.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[321] /* MatStm4.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[324] /* MatStm4.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[322] /* MatStm4.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  TRACE_POP
}
extern void Flowsheet_eqFunction_506(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_507(DATA *data, threadData_t *threadData);


/*
equation index: 99
type: ALGORITHM

  (MatStm4.compMolEntr[2,2], MatStm4.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm4.comp[2].AS, {MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, {MatStm4.comp[2].HOV[1], MatStm4.comp[2].HOV[2], MatStm4.comp[2].HOV[3], MatStm4.comp[2].HOV[4], MatStm4.comp[2].HOV[5], MatStm4.comp[2].HOV[6]}, MatStm4.comp[2].Tb, MatStm4.comp[2].Tc, 300.0, 101325.0, MatStm4.compMolFrac[2,2], MatStm4.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[679], (modelica_real)data->simulationInfo->realParameter[680], (modelica_real)data->simulationInfo->realParameter[681], (modelica_real)data->simulationInfo->realParameter[682], (modelica_real)data->simulationInfo->realParameter[683], (modelica_real)data->simulationInfo->realParameter[684]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[579], (modelica_real)data->simulationInfo->realParameter[580], (modelica_real)data->simulationInfo->realParameter[581], (modelica_real)data->simulationInfo->realParameter[582], (modelica_real)data->simulationInfo->realParameter[583], (modelica_real)data->simulationInfo->realParameter[584]);
  data->localData[0]->realVars[310] /* MatStm4.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[556], tmp0, tmp1, data->simulationInfo->realParameter[652], data->simulationInfo->realParameter[654], 300.0, 101325.0, data->localData[0]->realVars[322] /* MatStm4.compMolFrac[2,2] variable */, data->localData[0]->realVars[324] /* MatStm4.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[312] /* MatStm4.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_505(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_504(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_502(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_503(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_511(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_524(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_526(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_525(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_510(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_521(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_523(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_522(DATA *data, threadData_t *threadData);


/*
equation index: 112
type: ALGORITHM

  (MatStm4.compMolEntr[2,1], MatStm4.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm4.comp[1].AS, {MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, {MatStm4.comp[1].HOV[1], MatStm4.comp[1].HOV[2], MatStm4.comp[1].HOV[3], MatStm4.comp[1].HOV[4], MatStm4.comp[1].HOV[5], MatStm4.comp[1].HOV[6]}, MatStm4.comp[1].Tb, MatStm4.comp[1].Tc, 300.0, 101325.0, MatStm4.compMolFrac[2,1], MatStm4.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[673], (modelica_real)data->simulationInfo->realParameter[674], (modelica_real)data->simulationInfo->realParameter[675], (modelica_real)data->simulationInfo->realParameter[676], (modelica_real)data->simulationInfo->realParameter[677], (modelica_real)data->simulationInfo->realParameter[678]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[573], (modelica_real)data->simulationInfo->realParameter[574], (modelica_real)data->simulationInfo->realParameter[575], (modelica_real)data->simulationInfo->realParameter[576], (modelica_real)data->simulationInfo->realParameter[577], (modelica_real)data->simulationInfo->realParameter[578]);
  data->localData[0]->realVars[309] /* MatStm4.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[555], tmp2, tmp3, data->simulationInfo->realParameter[651], data->simulationInfo->realParameter[653], 300.0, 101325.0, data->localData[0]->realVars[321] /* MatStm4.compMolFrac[2,1] variable */, data->localData[0]->realVars[323] /* MatStm4.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[311] /* MatStm4.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_509(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_520(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_527(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_529(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_528(DATA *data, threadData_t *threadData);


/*
equation index: 118
type: ALGORITHM

  MatStm4.MW[3] := $START.MatStm4.MW[3];
  MatStm4.MW[2] := $START.MatStm4.MW[2];
  MatStm4.MW[1] := $START.MatStm4.MW[1];
  for i in 1:2 loop
    MatStm4.MW[:] := {MatStm4.MW[1] + MatStm4.compMolFrac[1,i] * MatStm4.comp[i].MW, MatStm4.MW[2] + MatStm4.compMolFrac[2,i] * MatStm4.comp[i].MW, MatStm4.MW[3] + MatStm4.compMolFrac[3,i] * MatStm4.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[282] /* MatStm4.MW[3] variable */ = data->modelData->realVarsData[282].attribute /* MatStm4.MW[3] variable */.start;

  data->localData[0]->realVars[281] /* MatStm4.MW[2] variable */ = data->modelData->realVarsData[281].attribute /* MatStm4.MW[2] variable */.start;

  data->localData[0]->realVars[280] /* MatStm4.MW[1] variable */ = data->modelData->realVarsData[280].attribute /* MatStm4.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[280] /* MatStm4.MW[1] variable */ + ((&data->localData[0]->realVars[319] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[637])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[281] /* MatStm4.MW[2] variable */ + ((&data->localData[0]->realVars[319] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[637])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[282] /* MatStm4.MW[3] variable */ + ((&data->localData[0]->realVars[319] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[637])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[280] /* MatStm4.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_513(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_514(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_517(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_519(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_515(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_516(DATA *data, threadData_t *threadData);


/*
equation index: 125
type: LINEAR

<var>MatStm4._compMasFrac[3,2]</var>
<var>MatStm4._compMasFrac[2,1]</var>
<var>MatStm4._compMasFrac[3,1]</var>
<var>MatStm4._compMasFrac[1,1]</var>
<var>MatStm4._compMasFrac[2,2]</var>
<row>
  <cell>if 101325.0 >= MatStm4.Pbubl then -MatStm4.compMasFrac[1,2] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[3,2] else -MatStm4.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then MatStm4.compMasFlo[1,1] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[3,1] else MatStm4.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[2,1] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="1">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -1.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -MatStm4.totMasFlo[1] else if 101325.0 >= MatStm4.Pdew then -0.0 else -MatStm4.totMasFlo[1])</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[300] /* MatStm4.compMasFrac[3,2] variable */,data->localData[1]->realVars[297] /* MatStm4.compMasFrac[2,1] variable */,data->localData[1]->realVars[299] /* MatStm4.compMasFrac[3,1] variable */,data->localData[1]->realVars[295] /* MatStm4.compMasFrac[1,1] variable */,data->localData[1]->realVars[298] /* MatStm4.compMasFrac[2,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 125 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,125};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 125 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[300] /* MatStm4.compMasFrac[3,2] variable */ = aux_x[0];
  data->localData[0]->realVars[297] /* MatStm4.compMasFrac[2,1] variable */ = aux_x[1];
  data->localData[0]->realVars[299] /* MatStm4.compMasFrac[3,1] variable */ = aux_x[2];
  data->localData[0]->realVars[295] /* MatStm4.compMasFrac[1,1] variable */ = aux_x[3];
  data->localData[0]->realVars[298] /* MatStm4.compMasFrac[2,2] variable */ = aux_x[4];
  TRACE_POP
}

void Flowsheet_eqFunction_126(DATA*, threadData_t*);
void Flowsheet_eqFunction_127(DATA*, threadData_t*);
void Flowsheet_eqFunction_128(DATA*, threadData_t*);
void Flowsheet_eqFunction_129(DATA*, threadData_t*);
void Flowsheet_eqFunction_130(DATA*, threadData_t*);
void Flowsheet_eqFunction_131(DATA*, threadData_t*);
void Flowsheet_eqFunction_132(DATA*, threadData_t*);
void Flowsheet_eqFunction_137(DATA*, threadData_t*);
void Flowsheet_eqFunction_136(DATA*, threadData_t*);
void Flowsheet_eqFunction_135(DATA*, threadData_t*);
void Flowsheet_eqFunction_134(DATA*, threadData_t*);
void Flowsheet_eqFunction_133(DATA*, threadData_t*);
/*
equation index: 150
indexNonlinear: 1
type: NONLINEAR

vars: {MatStm5._totMolFlo[2], MatStm5._compMolFrac[2,1], MatStm5._compMolFrac[2,2], MatStm5._compMolFrac[3,2], MatStm5._compMolFrac[3,1]}
eqns: {126, 127, 128, 129, 130, 131, 132, 137, 136, 135, 134, 133}
*/
void Flowsheet_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 150 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[453] /* MatStm5.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,150};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 150 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[453] /* MatStm5.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  TRACE_POP
}

/*
equation index: 151
type: ALGORITHM

  (MatStm5.compMolEntr[2,1], MatStm5.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm5.comp[1].AS, {MatStm5.comp[1].VapCp[1], MatStm5.comp[1].VapCp[2], MatStm5.comp[1].VapCp[3], MatStm5.comp[1].VapCp[4], MatStm5.comp[1].VapCp[5], MatStm5.comp[1].VapCp[6]}, {MatStm5.comp[1].HOV[1], MatStm5.comp[1].HOV[2], MatStm5.comp[1].HOV[3], MatStm5.comp[1].HOV[4], MatStm5.comp[1].HOV[5], MatStm5.comp[1].HOV[6]}, MatStm5.comp[1].Tb, MatStm5.comp[1].Tc, 300.0, 101325.0, MatStm5.compMolFrac[2,1], MatStm5.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[831], (modelica_real)data->simulationInfo->realParameter[832], (modelica_real)data->simulationInfo->realParameter[833], (modelica_real)data->simulationInfo->realParameter[834], (modelica_real)data->simulationInfo->realParameter[835], (modelica_real)data->simulationInfo->realParameter[836]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[731], (modelica_real)data->simulationInfo->realParameter[732], (modelica_real)data->simulationInfo->realParameter[733], (modelica_real)data->simulationInfo->realParameter[734], (modelica_real)data->simulationInfo->realParameter[735], (modelica_real)data->simulationInfo->realParameter[736]);
  data->localData[0]->realVars[399] /* MatStm5.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[713], tmp0, tmp1, data->simulationInfo->realParameter[809], data->simulationInfo->realParameter[811], 300.0, 101325.0, data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */, data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[401] /* MatStm5.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_556(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_557(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_559(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_558(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_560(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_561(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_565(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_578(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_580(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_579(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_581(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_674(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_673(DATA *data, threadData_t *threadData);


void Flowsheet_eqFunction_165(DATA*, threadData_t*);
void Flowsheet_eqFunction_166(DATA*, threadData_t*);
void Flowsheet_eqFunction_167(DATA*, threadData_t*);
void Flowsheet_eqFunction_168(DATA*, threadData_t*);
void Flowsheet_eqFunction_169(DATA*, threadData_t*);
void Flowsheet_eqFunction_170(DATA*, threadData_t*);
void Flowsheet_eqFunction_171(DATA*, threadData_t*);
void Flowsheet_eqFunction_172(DATA*, threadData_t*);
void Flowsheet_eqFunction_173(DATA*, threadData_t*);
void Flowsheet_eqFunction_174(DATA*, threadData_t*);
void Flowsheet_eqFunction_175(DATA*, threadData_t*);
void Flowsheet_eqFunction_176(DATA*, threadData_t*);
void Flowsheet_eqFunction_177(DATA*, threadData_t*);
void Flowsheet_eqFunction_178(DATA*, threadData_t*);
void Flowsheet_eqFunction_179(DATA*, threadData_t*);
void Flowsheet_eqFunction_180(DATA*, threadData_t*);
void Flowsheet_eqFunction_181(DATA*, threadData_t*);
void Flowsheet_eqFunction_182(DATA*, threadData_t*);
void Flowsheet_eqFunction_183(DATA*, threadData_t*);
void Flowsheet_eqFunction_189(DATA*, threadData_t*);
void Flowsheet_eqFunction_188(DATA*, threadData_t*);
void Flowsheet_eqFunction_187(DATA*, threadData_t*);
void Flowsheet_eqFunction_186(DATA*, threadData_t*);
void Flowsheet_eqFunction_185(DATA*, threadData_t*);
void Flowsheet_eqFunction_184(DATA*, threadData_t*);
/*
equation index: 190
indexNonlinear: 2
type: NONLINEAR

vars: {MatStm1._totMolFlo[2], Splitter1._outT[2], MatStm1._compMolFrac[3,2], MatStm1._compMolFrac[2,2], MatStm1._compMolFrac[2,1], MatStm1._compMolFrac[3,1]}
eqns: {165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 189, 188, 187, 186, 185, 184}
*/
void Flowsheet_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 190 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[96] /* MatStm1.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,190};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 190 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[96] /* MatStm1.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  TRACE_POP
}
extern void Flowsheet_eqFunction_613(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_614(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_615(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_616(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_617(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_618(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_619(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_620(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_621(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_622(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_623(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_624(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_625(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_626(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_627(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_628(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_629(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_630(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_631(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_632(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_633(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_634(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_635(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_636(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_653(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_652(DATA *data, threadData_t *threadData);


/*
equation index: 217
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:2 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  data->localData[0]->realVars[17] /* MatStm1.MW[3] variable */ = data->modelData->realVarsData[17].attribute /* MatStm1.MW[3] variable */.start;

  data->localData[0]->realVars[16] /* MatStm1.MW[2] variable */ = data->modelData->realVarsData[16].attribute /* MatStm1.MW[2] variable */.start;

  data->localData[0]->realVars[15] /* MatStm1.MW[1] variable */ = data->modelData->realVarsData[15].attribute /* MatStm1.MW[1] variable */.start;

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 2);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp3, tmp5); $Pi += tmp4)
    {
      array_alloc_scalar_real_array(&tmp0, 3, (modelica_real)data->localData[0]->realVars[15] /* MatStm1.MW[1] variable */ + ((&data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[16] /* MatStm1.MW[2] variable */ + ((&data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[17] /* MatStm1.MW[3] variable */ + ((&data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
      real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[15] /* MatStm1.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp0, &tmp2, &tmp1);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_656(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_664(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_657(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_659(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_665(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_658(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_650(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_649(DATA *data, threadData_t *threadData);


/*
equation index: 226
type: LINEAR

<var>MatStm1._compMasFrac[1,1]</var>
<var>MatStm1._compMasFrac[3,1]</var>
<var>MatStm1._compMasFrac[2,2]</var>
<var>MatStm1._compMasFrac[2,1]</var>
<var>MatStm1._compMasFrac[3,2]</var>
<row>
  <cell>if 101325.0 >= MatStm1.Pbubl then -MatStm1.compMasFrac[1,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,2] else -MatStm1.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,1] else MatStm1.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[28] /* MatStm1.compMasFrac[1,1] variable */,data->localData[1]->realVars[32] /* MatStm1.compMasFrac[3,1] variable */,data->localData[1]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */,data->localData[1]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */,data->localData[1]->realVars[33] /* MatStm1.compMasFrac[3,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 226 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,226};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 226 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[28] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[0];
  data->localData[0]->realVars[32] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[1];
  data->localData[0]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */ = aux_x[2];
  data->localData[0]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[3];
  data->localData[0]->realVars[33] /* MatStm1.compMasFrac[3,2] variable */ = aux_x[4];
  TRACE_POP
}

/*
equation index: 227
type: ALGORITHM

  (MatStm1.compMolEntr[2,2], MatStm1.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[2].AS, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tb, MatStm1.comp[2].Tc, Splitter1.outT[2], 101325.0, MatStm1.compMolFrac[2,2], MatStm1.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  real_array tmp6;
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[43] /* MatStm1.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[82], tmp6, tmp7, data->simulationInfo->realParameter[178], data->simulationInfo->realParameter[180], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */, 101325.0, data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */, data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[45] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_645(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_646(DATA *data, threadData_t *threadData);


/*
equation index: 230
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, Splitter1.outT[2], 101325.0, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[42] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[81], tmp8, tmp9, data->simulationInfo->realParameter[177], data->simulationInfo->realParameter[179], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */, 101325.0, data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[44] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_661(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_662(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_667(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_669(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_668(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_647(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_654(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_648(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_663(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_670(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_672(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_671(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_564(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_575(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_577(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_576(DATA *data, threadData_t *threadData);


/*
equation index: 247
type: ALGORITHM

  (MatStm5.compMolEntr[2,2], MatStm5.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm5.comp[2].AS, {MatStm5.comp[2].VapCp[1], MatStm5.comp[2].VapCp[2], MatStm5.comp[2].VapCp[3], MatStm5.comp[2].VapCp[4], MatStm5.comp[2].VapCp[5], MatStm5.comp[2].VapCp[6]}, {MatStm5.comp[2].HOV[1], MatStm5.comp[2].HOV[2], MatStm5.comp[2].HOV[3], MatStm5.comp[2].HOV[4], MatStm5.comp[2].HOV[5], MatStm5.comp[2].HOV[6]}, MatStm5.comp[2].Tb, MatStm5.comp[2].Tc, 300.0, 101325.0, MatStm5.compMolFrac[2,2], MatStm5.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[837], (modelica_real)data->simulationInfo->realParameter[838], (modelica_real)data->simulationInfo->realParameter[839], (modelica_real)data->simulationInfo->realParameter[840], (modelica_real)data->simulationInfo->realParameter[841], (modelica_real)data->simulationInfo->realParameter[842]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[737], (modelica_real)data->simulationInfo->realParameter[738], (modelica_real)data->simulationInfo->realParameter[739], (modelica_real)data->simulationInfo->realParameter[740], (modelica_real)data->simulationInfo->realParameter[741], (modelica_real)data->simulationInfo->realParameter[742]);
  data->localData[0]->realVars[400] /* MatStm5.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[714], tmp10, tmp11, data->simulationInfo->realParameter[810], data->simulationInfo->realParameter[812], 300.0, 101325.0, data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */, data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[402] /* MatStm5.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_563(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_574(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_675(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_677(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_676(DATA *data, threadData_t *threadData);


/*
equation index: 253
type: ALGORITHM

  MatStm5.MW[3] := $START.MatStm5.MW[3];
  MatStm5.MW[2] := $START.MatStm5.MW[2];
  MatStm5.MW[1] := $START.MatStm5.MW[1];
  for i in 1:2 loop
    MatStm5.MW[:] := {MatStm5.MW[1] + MatStm5.compMolFrac[1,i] * MatStm5.comp[i].MW, MatStm5.MW[2] + MatStm5.compMolFrac[2,i] * MatStm5.comp[i].MW, MatStm5.MW[3] + MatStm5.compMolFrac[3,i] * MatStm5.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  real_array tmp12;
  index_spec_t tmp13;
  real_array tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  data->localData[0]->realVars[372] /* MatStm5.MW[3] variable */ = data->modelData->realVarsData[372].attribute /* MatStm5.MW[3] variable */.start;

  data->localData[0]->realVars[371] /* MatStm5.MW[2] variable */ = data->modelData->realVarsData[371].attribute /* MatStm5.MW[2] variable */.start;

  data->localData[0]->realVars[370] /* MatStm5.MW[1] variable */ = data->modelData->realVarsData[370].attribute /* MatStm5.MW[1] variable */.start;

  tmp15 = ((modelica_integer) 1); tmp16 = 1; tmp17 = ((modelica_integer) 2);
  if(!(((tmp16 > 0) && (tmp15 > tmp17)) || ((tmp16 < 0) && (tmp15 < tmp17))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp15, tmp17); $Pi += tmp16)
    {
      array_alloc_scalar_real_array(&tmp12, 3, (modelica_real)data->localData[0]->realVars[370] /* MatStm5.MW[1] variable */ + ((&data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[795])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[371] /* MatStm5.MW[2] variable */ + ((&data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[795])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[372] /* MatStm5.MW[3] variable */ + ((&data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[795])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp13, 1, (1), (int*)0, 'W');
      real_array_create(&tmp14, (modelica_real*)&data->localData[0]->realVars[370] /* MatStm5.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp12, &tmp14, &tmp13);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_568(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_569(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_571(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_573(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_567(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_570(DATA *data, threadData_t *threadData);


/*
equation index: 260
type: LINEAR

<var>MatStm5._compMasFrac[3,1]</var>
<var>MatStm5._compMasFrac[1,1]</var>
<var>MatStm5._compMasFrac[2,2]</var>
<var>MatStm5._compMasFrac[2,1]</var>
<var>MatStm5._compMasFrac[3,2]</var>
<row>
  <cell>if 101325.0 >= MatStm5.Pbubl then -MatStm5.compMasFrac[1,2] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[3,2] else -MatStm5.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then MatStm5.compMasFlo[1,1] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[3,1] else MatStm5.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then -1.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then -0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then -MatStm5.totMasFlo[1] else if 101325.0 >= MatStm5.Pdew then -0.0 else -MatStm5.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[389] /* MatStm5.compMasFrac[3,1] variable */,data->localData[1]->realVars[385] /* MatStm5.compMasFrac[1,1] variable */,data->localData[1]->realVars[388] /* MatStm5.compMasFrac[2,2] variable */,data->localData[1]->realVars[387] /* MatStm5.compMasFrac[2,1] variable */,data->localData[1]->realVars[390] /* MatStm5.compMasFrac[3,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 260 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,260};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 260 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[389] /* MatStm5.compMasFrac[3,1] variable */ = aux_x[0];
  data->localData[0]->realVars[385] /* MatStm5.compMasFrac[1,1] variable */ = aux_x[1];
  data->localData[0]->realVars[388] /* MatStm5.compMasFrac[2,2] variable */ = aux_x[2];
  data->localData[0]->realVars[387] /* MatStm5.compMasFrac[2,1] variable */ = aux_x[3];
  data->localData[0]->realVars[390] /* MatStm5.compMasFrac[3,2] variable */ = aux_x[4];
  TRACE_POP
}
extern void Flowsheet_eqFunction_678(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_679(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_680(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_681(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_682(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_683(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_684(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_685(DATA *data, threadData_t *threadData);


/*
equation index: 269
type: ALGORITHM

  Splitter1.MW := $START.Splitter1.MW;
  Splitter1.MW := 0.0;
  for i in 1:2 loop
    Splitter1.MW := Splitter1.MW + Splitter1.comp[i].MW * Splitter1.inMixMolFrac[i];
  end for;
*/
void Flowsheet_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  modelica_integer tmp18;
  modelica_integer tmp19;
  modelica_integer tmp20;
  data->localData[0]->realVars[460] /* Splitter1.MW variable */ = data->modelData->realVarsData[460].attribute /* Splitter1.MW variable */.start;

  data->localData[0]->realVars[460] /* Splitter1.MW variable */ = 0.0;

  tmp18 = ((modelica_integer) 1); tmp19 = 1; tmp20 = ((modelica_integer) 2);
  if(!(((tmp19 > 0) && (tmp18 > tmp20)) || ((tmp19 < 0) && (tmp18 < tmp20))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp18, tmp20); $Pi += tmp19)
    {
      data->localData[0]->realVars[460] /* Splitter1.MW variable */ = data->localData[0]->realVars[460] /* Splitter1.MW variable */ + ((&data->simulationInfo->realParameter[1111])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[461] /* Splitter1.inMixMolFrac[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_687(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_688(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_689(DATA *data, threadData_t *threadData);


/*
equation index: 273
type: SIMPLE_ASSIGN
MatStm3._Pdew = 1.0 / (MatStm3.compMolFrac[1,1] * exp((-MatStm3.comp[1].VP[2]) - MatStm3.comp[1].VP[3] / Splitter1.outT[2] - MatStm3.comp[1].VP[4] * log(Splitter1.outT[2]) - MatStm3.comp[1].VP[5] * Splitter1.outT[2] ^ MatStm3.comp[1].VP[6]) + MatStm3.compMolFrac[1,2] * exp((-MatStm3.comp[2].VP[2]) - MatStm3.comp[2].VP[3] / Splitter1.outT[2] - MatStm3.comp[2].VP[4] * log(Splitter1.outT[2]) - MatStm3.comp[2].VP[5] * Splitter1.outT[2] ^ MatStm3.comp[2].VP[6]))
*/
void Flowsheet_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
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
  tmp21 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  if(!(tmp21 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Splitter1.outT[2]) was %g should be > 0", tmp21);
  }tmp22 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  tmp23 = data->simulationInfo->realParameter[508];
  if(tmp22 < 0.0 && tmp23 != 0.0)
  {
    tmp25 = modf(tmp23, &tmp26);
    
    if(tmp25 > 0.5)
    {
      tmp25 -= 1.0;
      tmp26 += 1.0;
    }
    else if(tmp25 < -0.5)
    {
      tmp25 += 1.0;
      tmp26 -= 1.0;
    }
    
    if(fabs(tmp25) < 1e-10)
      tmp24 = pow(tmp22, tmp26);
    else
    {
      tmp28 = modf(1.0/tmp23, &tmp27);
      if(tmp28 > 0.5)
      {
        tmp28 -= 1.0;
        tmp27 += 1.0;
      }
      else if(tmp28 < -0.5)
      {
        tmp28 += 1.0;
        tmp27 -= 1.0;
      }
      if(fabs(tmp28) < 1e-10 && ((unsigned long)tmp27 & 1))
      {
        tmp24 = -pow(-tmp22, tmp25)*pow(tmp22, tmp26);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp22, tmp23);
      }
    }
  }
  else
  {
    tmp24 = pow(tmp22, tmp23);
  }
  if(isnan(tmp24) || isinf(tmp24))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp22, tmp23);
  }tmp29 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  if(!(tmp29 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Splitter1.outT[2]) was %g should be > 0", tmp29);
  }tmp30 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  tmp31 = data->simulationInfo->realParameter[514];
  if(tmp30 < 0.0 && tmp31 != 0.0)
  {
    tmp33 = modf(tmp31, &tmp34);
    
    if(tmp33 > 0.5)
    {
      tmp33 -= 1.0;
      tmp34 += 1.0;
    }
    else if(tmp33 < -0.5)
    {
      tmp33 += 1.0;
      tmp34 -= 1.0;
    }
    
    if(fabs(tmp33) < 1e-10)
      tmp32 = pow(tmp30, tmp34);
    else
    {
      tmp36 = modf(1.0/tmp31, &tmp35);
      if(tmp36 > 0.5)
      {
        tmp36 -= 1.0;
        tmp35 += 1.0;
      }
      else if(tmp36 < -0.5)
      {
        tmp36 += 1.0;
        tmp35 -= 1.0;
      }
      if(fabs(tmp36) < 1e-10 && ((unsigned long)tmp35 & 1))
      {
        tmp32 = -pow(-tmp30, tmp33)*pow(tmp30, tmp34);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp30, tmp31);
      }
    }
  }
  else
  {
    tmp32 = pow(tmp30, tmp31);
  }
  if(isnan(tmp32) || isinf(tmp32))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp30, tmp31);
  }
  data->localData[0]->realVars[196] /* MatStm3.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[229] /* MatStm3.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[504]) - (DIVISION_SIM(data->simulationInfo->realParameter[505],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes)) - ((data->simulationInfo->realParameter[506]) * (log(tmp21))) - ((data->simulationInfo->realParameter[507]) * (tmp24)))) + (data->localData[0]->realVars[230] /* MatStm3.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[510]) - (DIVISION_SIM(data->simulationInfo->realParameter[511],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes)) - ((data->simulationInfo->realParameter[512]) * (log(tmp29))) - ((data->simulationInfo->realParameter[513]) * (tmp32)))),"MatStm3.compMolFrac[1,1] * exp((-MatStm3.comp[1].VP[2]) - MatStm3.comp[1].VP[3] / Splitter1.outT[2] - MatStm3.comp[1].VP[4] * log(Splitter1.outT[2]) - MatStm3.comp[1].VP[5] * Splitter1.outT[2] ^ MatStm3.comp[1].VP[6]) + MatStm3.compMolFrac[1,2] * exp((-MatStm3.comp[2].VP[2]) - MatStm3.comp[2].VP[3] / Splitter1.outT[2] - MatStm3.comp[2].VP[4] * log(Splitter1.outT[2]) - MatStm3.comp[2].VP[5] * Splitter1.outT[2] ^ MatStm3.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
MatStm3._Pbubl = MatStm3.compMolFrac[1,1] * exp(MatStm3.comp[1].VP[2] + MatStm3.comp[1].VP[3] / Splitter1.outT[2] + MatStm3.comp[1].VP[4] * log(Splitter1.outT[2]) + MatStm3.comp[1].VP[5] * Splitter1.outT[2] ^ MatStm3.comp[1].VP[6]) + MatStm3.compMolFrac[1,2] * exp(MatStm3.comp[2].VP[2] + MatStm3.comp[2].VP[3] / Splitter1.outT[2] + MatStm3.comp[2].VP[4] * log(Splitter1.outT[2]) + MatStm3.comp[2].VP[5] * Splitter1.outT[2] ^ MatStm3.comp[2].VP[6])
*/
void Flowsheet_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
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
  tmp37 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  if(!(tmp37 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Splitter1.outT[2]) was %g should be > 0", tmp37);
  }tmp38 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  tmp39 = data->simulationInfo->realParameter[508];
  if(tmp38 < 0.0 && tmp39 != 0.0)
  {
    tmp41 = modf(tmp39, &tmp42);
    
    if(tmp41 > 0.5)
    {
      tmp41 -= 1.0;
      tmp42 += 1.0;
    }
    else if(tmp41 < -0.5)
    {
      tmp41 += 1.0;
      tmp42 -= 1.0;
    }
    
    if(fabs(tmp41) < 1e-10)
      tmp40 = pow(tmp38, tmp42);
    else
    {
      tmp44 = modf(1.0/tmp39, &tmp43);
      if(tmp44 > 0.5)
      {
        tmp44 -= 1.0;
        tmp43 += 1.0;
      }
      else if(tmp44 < -0.5)
      {
        tmp44 += 1.0;
        tmp43 -= 1.0;
      }
      if(fabs(tmp44) < 1e-10 && ((unsigned long)tmp43 & 1))
      {
        tmp40 = -pow(-tmp38, tmp41)*pow(tmp38, tmp42);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp38, tmp39);
      }
    }
  }
  else
  {
    tmp40 = pow(tmp38, tmp39);
  }
  if(isnan(tmp40) || isinf(tmp40))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp38, tmp39);
  }tmp45 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  if(!(tmp45 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Splitter1.outT[2]) was %g should be > 0", tmp45);
  }tmp46 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  tmp47 = data->simulationInfo->realParameter[514];
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
  }
  data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */ = (data->localData[0]->realVars[229] /* MatStm3.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[504] + DIVISION_SIM(data->simulationInfo->realParameter[505],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes) + (data->simulationInfo->realParameter[506]) * (log(tmp37)) + (data->simulationInfo->realParameter[507]) * (tmp40))) + (data->localData[0]->realVars[230] /* MatStm3.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[510] + DIVISION_SIM(data->simulationInfo->realParameter[511],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes) + (data->simulationInfo->realParameter[512]) * (log(tmp45)) + (data->simulationInfo->realParameter[513]) * (tmp48)));
  TRACE_POP
}
extern void Flowsheet_eqFunction_690(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_691(DATA *data, threadData_t *threadData);


void Flowsheet_eqFunction_277(DATA*, threadData_t*);
void Flowsheet_eqFunction_278(DATA*, threadData_t*);
void Flowsheet_eqFunction_279(DATA*, threadData_t*);
void Flowsheet_eqFunction_280(DATA*, threadData_t*);
void Flowsheet_eqFunction_281(DATA*, threadData_t*);
void Flowsheet_eqFunction_282(DATA*, threadData_t*);
void Flowsheet_eqFunction_283(DATA*, threadData_t*);
void Flowsheet_eqFunction_288(DATA*, threadData_t*);
void Flowsheet_eqFunction_287(DATA*, threadData_t*);
void Flowsheet_eqFunction_286(DATA*, threadData_t*);
void Flowsheet_eqFunction_285(DATA*, threadData_t*);
void Flowsheet_eqFunction_284(DATA*, threadData_t*);
/*
equation index: 301
indexNonlinear: 3
type: NONLINEAR

vars: {MatStm3._totMolFlo[2], MatStm3._compMolFrac[3,1], MatStm3._compMolFrac[3,2], MatStm3._compMolFrac[2,2], MatStm3._compMolFrac[2,1]}
eqns: {277, 278, 279, 280, 281, 282, 283, 288, 287, 286, 285, 284}
*/
void Flowsheet_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 301 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[272] /* MatStm3.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[1] = data->localData[0]->realVars[233] /* MatStm3.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[2] = data->localData[0]->realVars[234] /* MatStm3.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[3] = data->localData[0]->realVars[232] /* MatStm3.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[4] = data->localData[0]->realVars[231] /* MatStm3.compMolFrac[2,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,301};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 301 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[272] /* MatStm3.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  data->localData[0]->realVars[233] /* MatStm3.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[1];
  data->localData[0]->realVars[234] /* MatStm3.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[2];
  data->localData[0]->realVars[232] /* MatStm3.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[3];
  data->localData[0]->realVars[231] /* MatStm3.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[4];
  TRACE_POP
}
extern void Flowsheet_eqFunction_724(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_723(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_722(DATA *data, threadData_t *threadData);


/*
equation index: 305
type: ALGORITHM

  MatStm3.MW[3] := $START.MatStm3.MW[3];
  MatStm3.MW[2] := $START.MatStm3.MW[2];
  MatStm3.MW[1] := $START.MatStm3.MW[1];
  for i in 1:2 loop
    MatStm3.MW[:] := {MatStm3.MW[1] + MatStm3.compMolFrac[1,i] * MatStm3.comp[i].MW, MatStm3.MW[2] + MatStm3.compMolFrac[2,i] * MatStm3.comp[i].MW, MatStm3.MW[3] + MatStm3.compMolFrac[3,i] * MatStm3.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  data->localData[0]->realVars[194] /* MatStm3.MW[3] variable */ = data->modelData->realVarsData[194].attribute /* MatStm3.MW[3] variable */.start;

  data->localData[0]->realVars[193] /* MatStm3.MW[2] variable */ = data->modelData->realVarsData[193].attribute /* MatStm3.MW[2] variable */.start;

  data->localData[0]->realVars[192] /* MatStm3.MW[1] variable */ = data->modelData->realVarsData[192].attribute /* MatStm3.MW[1] variable */.start;

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 2);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp3, tmp5); $Pi += tmp4)
    {
      array_alloc_scalar_real_array(&tmp0, 3, (modelica_real)data->localData[0]->realVars[192] /* MatStm3.MW[1] variable */ + ((&data->localData[0]->realVars[229] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[193] /* MatStm3.MW[2] variable */ + ((&data->localData[0]->realVars[229] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[194] /* MatStm3.MW[3] variable */ + ((&data->localData[0]->realVars[229] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
      real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[192] /* MatStm3.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp0, &tmp2, &tmp1);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_740(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_741(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_744(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_745(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_742(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_743(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_725(DATA *data, threadData_t *threadData);


/*
equation index: 313
type: LINEAR

<var>MatStm3._compMasFrac[2,1]</var>
<var>MatStm3._compMasFrac[3,1]</var>
<var>MatStm3._compMasFrac[1,1]</var>
<var>MatStm3._compMasFrac[2,2]</var>
<var>MatStm3._compMasFrac[3,2]</var>
<row>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then -MatStm3.compMasFrac[1,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,2] else -MatStm3.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,1] else MatStm3.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,1] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="0" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -1.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101325.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else 0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[207] /* MatStm3.compMasFrac[2,1] variable */,data->localData[1]->realVars[209] /* MatStm3.compMasFrac[3,1] variable */,data->localData[1]->realVars[205] /* MatStm3.compMasFrac[1,1] variable */,data->localData[1]->realVars[208] /* MatStm3.compMasFrac[2,2] variable */,data->localData[1]->realVars[210] /* MatStm3.compMasFrac[3,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 313 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 3, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,313};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 313 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[207] /* MatStm3.compMasFrac[2,1] variable */ = aux_x[0];
  data->localData[0]->realVars[209] /* MatStm3.compMasFrac[3,1] variable */ = aux_x[1];
  data->localData[0]->realVars[205] /* MatStm3.compMasFrac[1,1] variable */ = aux_x[2];
  data->localData[0]->realVars[208] /* MatStm3.compMasFrac[2,2] variable */ = aux_x[3];
  data->localData[0]->realVars[210] /* MatStm3.compMasFrac[3,2] variable */ = aux_x[4];
  TRACE_POP
}
extern void Flowsheet_eqFunction_729(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_726(DATA *data, threadData_t *threadData);


/*
equation index: 316
type: ALGORITHM

  (MatStm3.compMolEntr[2,2], MatStm3.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[2].AS, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tb, MatStm3.comp[2].Tc, Splitter1.outT[2], 101325.0, MatStm3.compMolFrac[2,2], MatStm3.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  real_array tmp6;
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426]);
  data->localData[0]->realVars[220] /* MatStm3.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[398], tmp6, tmp7, data->simulationInfo->realParameter[494], data->simulationInfo->realParameter[496], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */, 101325.0, data->localData[0]->realVars[232] /* MatStm3.compMolFrac[2,2] variable */, data->localData[0]->realVars[234] /* MatStm3.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[222] /* MatStm3.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_720(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_730(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_731(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_738(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_719(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_727(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_728(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_737(DATA *data, threadData_t *threadData);


/*
equation index: 325
type: ALGORITHM

  (MatStm3.compMolEntr[2,1], MatStm3.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[1].AS, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tb, MatStm3.comp[1].Tc, Splitter1.outT[2], 101325.0, MatStm3.compMolFrac[2,1], MatStm3.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420]);
  data->localData[0]->realVars[219] /* MatStm3.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[397], tmp8, tmp9, data->simulationInfo->realParameter[493], data->simulationInfo->realParameter[495], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */, 101325.0, data->localData[0]->realVars[231] /* MatStm3.compMolFrac[2,1] variable */, data->localData[0]->realVars[233] /* MatStm3.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[221] /* MatStm3.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_734(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_733(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_735(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_736(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_747(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_748(DATA *data, threadData_t *threadData);


/*
equation index: 332
type: SIMPLE_ASSIGN
MatStm2._Pdew = 1.0 / (MatStm2.compMolFrac[1,1] * exp((-MatStm2.comp[1].VP[2]) - MatStm2.comp[1].VP[3] / Splitter1.outT[2] - MatStm2.comp[1].VP[4] * log(Splitter1.outT[2]) - MatStm2.comp[1].VP[5] * Splitter1.outT[2] ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp((-MatStm2.comp[2].VP[2]) - MatStm2.comp[2].VP[3] / Splitter1.outT[2] - MatStm2.comp[2].VP[4] * log(Splitter1.outT[2]) - MatStm2.comp[2].VP[5] * Splitter1.outT[2] ^ MatStm2.comp[2].VP[6]))
*/
void Flowsheet_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
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
  modelica_real tmp24;
  modelica_real tmp25;
  tmp10 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  if(!(tmp10 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Splitter1.outT[2]) was %g should be > 0", tmp10);
  }tmp11 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  tmp12 = data->simulationInfo->realParameter[350];
  if(tmp11 < 0.0 && tmp12 != 0.0)
  {
    tmp14 = modf(tmp12, &tmp15);
    
    if(tmp14 > 0.5)
    {
      tmp14 -= 1.0;
      tmp15 += 1.0;
    }
    else if(tmp14 < -0.5)
    {
      tmp14 += 1.0;
      tmp15 -= 1.0;
    }
    
    if(fabs(tmp14) < 1e-10)
      tmp13 = pow(tmp11, tmp15);
    else
    {
      tmp17 = modf(1.0/tmp12, &tmp16);
      if(tmp17 > 0.5)
      {
        tmp17 -= 1.0;
        tmp16 += 1.0;
      }
      else if(tmp17 < -0.5)
      {
        tmp17 += 1.0;
        tmp16 -= 1.0;
      }
      if(fabs(tmp17) < 1e-10 && ((unsigned long)tmp16 & 1))
      {
        tmp13 = -pow(-tmp11, tmp14)*pow(tmp11, tmp15);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp11, tmp12);
      }
    }
  }
  else
  {
    tmp13 = pow(tmp11, tmp12);
  }
  if(isnan(tmp13) || isinf(tmp13))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp11, tmp12);
  }tmp18 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  if(!(tmp18 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Splitter1.outT[2]) was %g should be > 0", tmp18);
  }tmp19 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  tmp20 = data->simulationInfo->realParameter[356];
  if(tmp19 < 0.0 && tmp20 != 0.0)
  {
    tmp22 = modf(tmp20, &tmp23);
    
    if(tmp22 > 0.5)
    {
      tmp22 -= 1.0;
      tmp23 += 1.0;
    }
    else if(tmp22 < -0.5)
    {
      tmp22 += 1.0;
      tmp23 -= 1.0;
    }
    
    if(fabs(tmp22) < 1e-10)
      tmp21 = pow(tmp19, tmp23);
    else
    {
      tmp25 = modf(1.0/tmp20, &tmp24);
      if(tmp25 > 0.5)
      {
        tmp25 -= 1.0;
        tmp24 += 1.0;
      }
      else if(tmp25 < -0.5)
      {
        tmp25 += 1.0;
        tmp24 -= 1.0;
      }
      if(fabs(tmp25) < 1e-10 && ((unsigned long)tmp24 & 1))
      {
        tmp21 = -pow(-tmp19, tmp22)*pow(tmp19, tmp23);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp19, tmp20);
      }
    }
  }
  else
  {
    tmp21 = pow(tmp19, tmp20);
  }
  if(isnan(tmp21) || isinf(tmp21))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp19, tmp20);
  }
  data->localData[0]->realVars[108] /* MatStm2.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[346]) - (DIVISION_SIM(data->simulationInfo->realParameter[347],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes)) - ((data->simulationInfo->realParameter[348]) * (log(tmp10))) - ((data->simulationInfo->realParameter[349]) * (tmp13)))) + (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[352]) - (DIVISION_SIM(data->simulationInfo->realParameter[353],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes)) - ((data->simulationInfo->realParameter[354]) * (log(tmp18))) - ((data->simulationInfo->realParameter[355]) * (tmp21)))),"MatStm2.compMolFrac[1,1] * exp((-MatStm2.comp[1].VP[2]) - MatStm2.comp[1].VP[3] / Splitter1.outT[2] - MatStm2.comp[1].VP[4] * log(Splitter1.outT[2]) - MatStm2.comp[1].VP[5] * Splitter1.outT[2] ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp((-MatStm2.comp[2].VP[2]) - MatStm2.comp[2].VP[3] / Splitter1.outT[2] - MatStm2.comp[2].VP[4] * log(Splitter1.outT[2]) - MatStm2.comp[2].VP[5] * Splitter1.outT[2] ^ MatStm2.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
MatStm2._Pbubl = MatStm2.compMolFrac[1,1] * exp(MatStm2.comp[1].VP[2] + MatStm2.comp[1].VP[3] / Splitter1.outT[2] + MatStm2.comp[1].VP[4] * log(Splitter1.outT[2]) + MatStm2.comp[1].VP[5] * Splitter1.outT[2] ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp(MatStm2.comp[2].VP[2] + MatStm2.comp[2].VP[3] / Splitter1.outT[2] + MatStm2.comp[2].VP[4] * log(Splitter1.outT[2]) + MatStm2.comp[2].VP[5] * Splitter1.outT[2] ^ MatStm2.comp[2].VP[6])
*/
void Flowsheet_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
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
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  tmp26 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  if(!(tmp26 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Splitter1.outT[2]) was %g should be > 0", tmp26);
  }tmp27 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  tmp28 = data->simulationInfo->realParameter[350];
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
  }tmp34 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  if(!(tmp34 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Splitter1.outT[2]) was %g should be > 0", tmp34);
  }tmp35 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
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
  data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[346] + DIVISION_SIM(data->simulationInfo->realParameter[347],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes) + (data->simulationInfo->realParameter[348]) * (log(tmp26)) + (data->simulationInfo->realParameter[349]) * (tmp29))) + (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[352] + DIVISION_SIM(data->simulationInfo->realParameter[353],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes) + (data->simulationInfo->realParameter[354]) * (log(tmp34)) + (data->simulationInfo->realParameter[355]) * (tmp37)));
  TRACE_POP
}
extern void Flowsheet_eqFunction_749(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_750(DATA *data, threadData_t *threadData);


void Flowsheet_eqFunction_336(DATA*, threadData_t*);
void Flowsheet_eqFunction_337(DATA*, threadData_t*);
void Flowsheet_eqFunction_338(DATA*, threadData_t*);
void Flowsheet_eqFunction_339(DATA*, threadData_t*);
void Flowsheet_eqFunction_340(DATA*, threadData_t*);
void Flowsheet_eqFunction_341(DATA*, threadData_t*);
void Flowsheet_eqFunction_342(DATA*, threadData_t*);
void Flowsheet_eqFunction_347(DATA*, threadData_t*);
void Flowsheet_eqFunction_346(DATA*, threadData_t*);
void Flowsheet_eqFunction_345(DATA*, threadData_t*);
void Flowsheet_eqFunction_344(DATA*, threadData_t*);
void Flowsheet_eqFunction_343(DATA*, threadData_t*);
/*
equation index: 360
indexNonlinear: 4
type: NONLINEAR

vars: {MatStm2._totMolFlo[2], MatStm2._compMolFrac[2,1], MatStm2._compMolFrac[2,2], MatStm2._compMolFrac[3,2], MatStm2._compMolFrac[3,1]}
eqns: {336, 337, 338, 339, 340, 341, 342, 347, 346, 345, 344, 343}
*/
void Flowsheet_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 360 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[184] /* MatStm2.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[1] = data->localData[0]->realVars[143] /* MatStm2.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[2] = data->localData[0]->realVars[144] /* MatStm2.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[3] = data->localData[0]->realVars[146] /* MatStm2.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[4] = data->localData[0]->realVars[145] /* MatStm2.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,360};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 360 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[184] /* MatStm2.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  data->localData[0]->realVars[143] /* MatStm2.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[1];
  data->localData[0]->realVars[144] /* MatStm2.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[2];
  data->localData[0]->realVars[146] /* MatStm2.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[3];
  data->localData[0]->realVars[145] /* MatStm2.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[4];
  TRACE_POP
}
extern void Flowsheet_eqFunction_780(DATA *data, threadData_t *threadData);


/*
equation index: 362
type: ALGORITHM

  MatStm2.MW[3] := $START.MatStm2.MW[3];
  MatStm2.MW[2] := $START.MatStm2.MW[2];
  MatStm2.MW[1] := $START.MatStm2.MW[1];
  for i in 1:2 loop
    MatStm2.MW[:] := {MatStm2.MW[1] + MatStm2.compMolFrac[1,i] * MatStm2.comp[i].MW, MatStm2.MW[2] + MatStm2.compMolFrac[2,i] * MatStm2.comp[i].MW, MatStm2.MW[3] + MatStm2.compMolFrac[3,i] * MatStm2.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  data->localData[0]->realVars[106] /* MatStm2.MW[3] variable */ = data->modelData->realVarsData[106].attribute /* MatStm2.MW[3] variable */.start;

  data->localData[0]->realVars[105] /* MatStm2.MW[2] variable */ = data->modelData->realVarsData[105].attribute /* MatStm2.MW[2] variable */.start;

  data->localData[0]->realVars[104] /* MatStm2.MW[1] variable */ = data->modelData->realVarsData[104].attribute /* MatStm2.MW[1] variable */.start;

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 2);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp3, tmp5); $Pi += tmp4)
    {
      array_alloc_scalar_real_array(&tmp0, 3, (modelica_real)data->localData[0]->realVars[104] /* MatStm2.MW[1] variable */ + ((&data->localData[0]->realVars[141] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[105] /* MatStm2.MW[2] variable */ + ((&data->localData[0]->realVars[141] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[106] /* MatStm2.MW[3] variable */ + ((&data->localData[0]->realVars[141] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
      real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[104] /* MatStm2.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp0, &tmp2, &tmp1);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_800(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_799(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_801(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_805(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_803(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_802(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_781(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_784(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_783(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_788(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_789(DATA *data, threadData_t *threadData);


/*
equation index: 374
type: LINEAR

<var>MatStm2._compMasFrac[2,2]</var>
<var>MatStm2._compMasFrac[3,2]</var>
<var>MatStm2._compMasFrac[2,1]</var>
<var>MatStm2._compMasFrac[1,1]</var>
<var>MatStm2._compMasFrac[3,1]</var>
<row>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,1] else MatStm2.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then -MatStm2.compMasFrac[1,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,2] else -MatStm2.compMasFrac[1,2]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101325.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="2" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 1.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[120] /* MatStm2.compMasFrac[2,2] variable */,data->localData[1]->realVars[122] /* MatStm2.compMasFrac[3,2] variable */,data->localData[1]->realVars[119] /* MatStm2.compMasFrac[2,1] variable */,data->localData[1]->realVars[117] /* MatStm2.compMasFrac[1,1] variable */,data->localData[1]->realVars[121] /* MatStm2.compMasFrac[3,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 374 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 4, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,374};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 374 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[120] /* MatStm2.compMasFrac[2,2] variable */ = aux_x[0];
  data->localData[0]->realVars[122] /* MatStm2.compMasFrac[3,2] variable */ = aux_x[1];
  data->localData[0]->realVars[119] /* MatStm2.compMasFrac[2,1] variable */ = aux_x[2];
  data->localData[0]->realVars[117] /* MatStm2.compMasFrac[1,1] variable */ = aux_x[3];
  data->localData[0]->realVars[121] /* MatStm2.compMasFrac[3,1] variable */ = aux_x[4];
  TRACE_POP
}

/*
equation index: 375
type: ALGORITHM

  (MatStm2.compMolEntr[2,2], MatStm2.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[2].AS, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tb, MatStm2.comp[2].Tc, Splitter1.outT[2], 101325.0, MatStm2.compMolFrac[2,2], MatStm2.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  real_array tmp6;
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364], (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368]);
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264], (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268]);
  data->localData[0]->realVars[132] /* MatStm2.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[240], tmp6, tmp7, data->simulationInfo->realParameter[336], data->simulationInfo->realParameter[338], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */, 101325.0, data->localData[0]->realVars[144] /* MatStm2.compMolFrac[2,2] variable */, data->localData[0]->realVars[146] /* MatStm2.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[134] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_779(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_792(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_793(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_797(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_778(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_790(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_791(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_796(DATA *data, threadData_t *threadData);


/*
equation index: 384
type: ALGORITHM

  (MatStm2.compMolEntr[2,1], MatStm2.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[1].AS, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tb, MatStm2.comp[1].Tc, Splitter1.outT[2], 101325.0, MatStm2.compMolFrac[2,1], MatStm2.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358], (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[257], (modelica_real)data->simulationInfo->realParameter[258], (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262]);
  data->localData[0]->realVars[131] /* MatStm2.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[239], tmp8, tmp9, data->simulationInfo->realParameter[335], data->simulationInfo->realParameter[337], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */, 101325.0, data->localData[0]->realVars[143] /* MatStm2.compMolFrac[2,1] variable */, data->localData[0]->realVars[145] /* MatStm2.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[133] /* MatStm2.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_787(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_786(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_794(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_795(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_806(DATA *data, threadData_t *threadData);


/*
equation index: 390
type: SIMPLE_ASSIGN
Splitter1._splRat[1] = 0.2631578947368421
*/
void Flowsheet_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  data->localData[0]->realVars[469] /* Splitter1.splRat[1] variable */ = 0.2631578947368421;
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
Splitter1._splRat[2] = 0.2631578947368421
*/
void Flowsheet_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  data->localData[0]->realVars[470] /* Splitter1.splRat[2] variable */ = 0.2631578947368421;
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[1] = 190.0
*/
void Flowsheet_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->localData[0]->realVars[95] /* MatStm1.totMolFlo[1] variable */ = 190.0;
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
Splitter1._outP[2] = 101325.0
*/
void Flowsheet_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  data->localData[0]->realVars[465] /* Splitter1.outP[2] variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->localData[0]->realVars[66] /* MatStm1.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
MatStm1._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->localData[0]->realVars[68] /* MatStm1.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
MatStm1._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->localData[0]->realVars[72] /* MatStm1.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
MatStm1._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->localData[0]->realVars[100] /* MatStm1.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[2] = 1.0
*/
void Flowsheet_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  data->localData[0]->realVars[67] /* MatStm1.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
MatStm1._gammaDew[2] = 1.0
*/
void Flowsheet_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->localData[0]->realVars[69] /* MatStm1.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
MatStm1._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->localData[0]->realVars[73] /* MatStm1.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
MatStm1._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  data->localData[0]->realVars[101] /* MatStm1.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  data->localData[0]->realVars[90] /* MatStm1.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  data->localData[0]->realVars[91] /* MatStm1.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->localData[0]->realVars[84] /* MatStm1.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  data->localData[0]->realVars[85] /* MatStm1.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  data->localData[0]->realVars[87] /* MatStm1.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->localData[0]->realVars[88] /* MatStm1.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->localData[0]->realVars[155] /* MatStm2.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
MatStm2._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->localData[0]->realVars[157] /* MatStm2.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
MatStm2._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->localData[0]->realVars[161] /* MatStm2.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
MatStm2._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  data->localData[0]->realVars[188] /* MatStm2.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[2] = 1.0
*/
void Flowsheet_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->localData[0]->realVars[156] /* MatStm2.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
MatStm2._gammaDew[2] = 1.0
*/
void Flowsheet_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->localData[0]->realVars[158] /* MatStm2.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
MatStm2._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->localData[0]->realVars[162] /* MatStm2.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
MatStm2._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->localData[0]->realVars[189] /* MatStm2.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  data->localData[0]->realVars[179] /* MatStm2.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->localData[0]->realVars[180] /* MatStm2.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->localData[0]->realVars[173] /* MatStm2.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->localData[0]->realVars[174] /* MatStm2.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->localData[0]->realVars[176] /* MatStm2.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->localData[0]->realVars[177] /* MatStm2.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
MatStm3._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  data->localData[0]->realVars[243] /* MatStm3.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
MatStm3._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->localData[0]->realVars[245] /* MatStm3.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
MatStm3._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->localData[0]->realVars[249] /* MatStm3.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
MatStm3._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->localData[0]->realVars[276] /* MatStm3.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
MatStm3._gammaBubl[2] = 1.0
*/
void Flowsheet_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  data->localData[0]->realVars[244] /* MatStm3.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
MatStm3._gammaDew[2] = 1.0
*/
void Flowsheet_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->localData[0]->realVars[246] /* MatStm3.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
MatStm3._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->localData[0]->realVars[250] /* MatStm3.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
MatStm3._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->localData[0]->realVars[277] /* MatStm3.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
MatStm3._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  data->localData[0]->realVars[267] /* MatStm3.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
MatStm3._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  data->localData[0]->realVars[268] /* MatStm3.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
MatStm3._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  data->localData[0]->realVars[261] /* MatStm3.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
MatStm3._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  data->localData[0]->realVars[262] /* MatStm3.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
MatStm3._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  data->localData[0]->realVars[264] /* MatStm3.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
MatStm3._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  data->localData[0]->realVars[265] /* MatStm3.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
MatStm4._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  data->localData[0]->realVars[333] /* MatStm4.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
MatStm4._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  data->localData[0]->realVars[335] /* MatStm4.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
MatStm4._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  data->localData[0]->realVars[339] /* MatStm4.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
MatStm4._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  data->localData[0]->realVars[366] /* MatStm4.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
MatStm4._gammaBubl[2] = 1.0
*/
void Flowsheet_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  data->localData[0]->realVars[334] /* MatStm4.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
MatStm4._gammaDew[2] = 1.0
*/
void Flowsheet_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  data->localData[0]->realVars[336] /* MatStm4.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
MatStm4._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  data->localData[0]->realVars[340] /* MatStm4.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
MatStm4._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  data->localData[0]->realVars[367] /* MatStm4.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
MatStm4._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  data->localData[0]->realVars[357] /* MatStm4.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
MatStm4._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  data->localData[0]->realVars[358] /* MatStm4.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
MatStm4._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  data->localData[0]->realVars[351] /* MatStm4.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
MatStm4._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  data->localData[0]->realVars[352] /* MatStm4.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
MatStm4._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  data->localData[0]->realVars[354] /* MatStm4.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
MatStm4._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  data->localData[0]->realVars[355] /* MatStm4.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
MatStm5._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  data->localData[0]->realVars[423] /* MatStm5.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
MatStm5._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  data->localData[0]->realVars[425] /* MatStm5.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
MatStm5._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  data->localData[0]->realVars[429] /* MatStm5.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
MatStm5._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  data->localData[0]->realVars[456] /* MatStm5.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
MatStm5._gammaBubl[2] = 1.0
*/
void Flowsheet_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  data->localData[0]->realVars[424] /* MatStm5.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
MatStm5._gammaDew[2] = 1.0
*/
void Flowsheet_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  data->localData[0]->realVars[426] /* MatStm5.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
MatStm5._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  data->localData[0]->realVars[430] /* MatStm5.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
MatStm5._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  data->localData[0]->realVars[457] /* MatStm5.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
MatStm5._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  data->localData[0]->realVars[447] /* MatStm5.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
MatStm5._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  data->localData[0]->realVars[448] /* MatStm5.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
MatStm5._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  data->localData[0]->realVars[441] /* MatStm5.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
MatStm5._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  data->localData[0]->realVars[442] /* MatStm5.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
MatStm5._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  data->localData[0]->realVars[444] /* MatStm5.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
MatStm5._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->localData[0]->realVars[445] /* MatStm5.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
MatStm5._P = 101325.0
*/
void Flowsheet_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  data->localData[0]->realVars[373] /* MatStm5.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
MatStm5._T = 300.0
*/
void Flowsheet_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  data->localData[0]->realVars[378] /* MatStm5.T variable */ = 300.0;
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
MatStm5._totMolFlo[1] = 100.0
*/
void Flowsheet_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->localData[0]->realVars[452] /* MatStm5.totMolFlo[1] variable */ = 100.0;
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
MatStm4._P = 101325.0
*/
void Flowsheet_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  data->localData[0]->realVars[283] /* MatStm4.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
MatStm4._T = 300.0
*/
void Flowsheet_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  data->localData[0]->realVars[288] /* MatStm4.T variable */ = 300.0;
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
MatStm4._totMolFlo[1] = 90.0
*/
void Flowsheet_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  data->localData[0]->realVars[362] /* MatStm4.totMolFlo[1] variable */ = 90.0;
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
Splitter1._specVal[1] = 50.0
*/
void Flowsheet_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  data->localData[0]->realVars[467] /* Splitter1.specVal[1] variable */ = 50.0;
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
Splitter1._specVal[2] = 50.0
*/
void Flowsheet_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  data->localData[0]->realVars[468] /* Splitter1.specVal[2] variable */ = 50.0;
  TRACE_POP
}
OMC_DISABLE_OPT
void Flowsheet_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  Flowsheet_eqFunction_1(data, threadData);
  Flowsheet_eqFunction_2(data, threadData);
  Flowsheet_eqFunction_3(data, threadData);
  Flowsheet_eqFunction_4(data, threadData);
  Flowsheet_eqFunction_5(data, threadData);
  Flowsheet_eqFunction_6(data, threadData);
  Flowsheet_eqFunction_7(data, threadData);
  Flowsheet_eqFunction_8(data, threadData);
  Flowsheet_eqFunction_9(data, threadData);
  Flowsheet_eqFunction_10(data, threadData);
  Flowsheet_eqFunction_11(data, threadData);
  Flowsheet_eqFunction_12(data, threadData);
  Flowsheet_eqFunction_13(data, threadData);
  Flowsheet_eqFunction_14(data, threadData);
  Flowsheet_eqFunction_15(data, threadData);
  Flowsheet_eqFunction_16(data, threadData);
  Flowsheet_eqFunction_17(data, threadData);
  Flowsheet_eqFunction_18(data, threadData);
  Flowsheet_eqFunction_19(data, threadData);
  Flowsheet_eqFunction_20(data, threadData);
  Flowsheet_eqFunction_21(data, threadData);
  Flowsheet_eqFunction_22(data, threadData);
  Flowsheet_eqFunction_23(data, threadData);
  Flowsheet_eqFunction_24(data, threadData);
  Flowsheet_eqFunction_25(data, threadData);
  Flowsheet_eqFunction_26(data, threadData);
  Flowsheet_eqFunction_27(data, threadData);
  Flowsheet_eqFunction_28(data, threadData);
  Flowsheet_eqFunction_29(data, threadData);
  Flowsheet_eqFunction_30(data, threadData);
  Flowsheet_eqFunction_31(data, threadData);
  Flowsheet_eqFunction_32(data, threadData);
  Flowsheet_eqFunction_33(data, threadData);
  Flowsheet_eqFunction_34(data, threadData);
  Flowsheet_eqFunction_35(data, threadData);
  Flowsheet_eqFunction_36(data, threadData);
  Flowsheet_eqFunction_37(data, threadData);
  Flowsheet_eqFunction_38(data, threadData);
  Flowsheet_eqFunction_39(data, threadData);
  Flowsheet_eqFunction_40(data, threadData);
  Flowsheet_eqFunction_41(data, threadData);
  Flowsheet_eqFunction_42(data, threadData);
  Flowsheet_eqFunction_43(data, threadData);
  Flowsheet_eqFunction_44(data, threadData);
  Flowsheet_eqFunction_45(data, threadData);
  Flowsheet_eqFunction_46(data, threadData);
  Flowsheet_eqFunction_47(data, threadData);
  Flowsheet_eqFunction_48(data, threadData);
  Flowsheet_eqFunction_49(data, threadData);
  Flowsheet_eqFunction_50(data, threadData);
  Flowsheet_eqFunction_51(data, threadData);
  Flowsheet_eqFunction_52(data, threadData);
  Flowsheet_eqFunction_53(data, threadData);
  Flowsheet_eqFunction_54(data, threadData);
  Flowsheet_eqFunction_55(data, threadData);
  Flowsheet_eqFunction_56(data, threadData);
  Flowsheet_eqFunction_57(data, threadData);
  Flowsheet_eqFunction_58(data, threadData);
  Flowsheet_eqFunction_59(data, threadData);
  Flowsheet_eqFunction_60(data, threadData);
  Flowsheet_eqFunction_61(data, threadData);
  Flowsheet_eqFunction_62(data, threadData);
  Flowsheet_eqFunction_63(data, threadData);
  Flowsheet_eqFunction_64(data, threadData);
  Flowsheet_eqFunction_65(data, threadData);
  Flowsheet_eqFunction_66(data, threadData);
  Flowsheet_eqFunction_67(data, threadData);
  Flowsheet_eqFunction_474(data, threadData);
  Flowsheet_eqFunction_472(data, threadData);
  Flowsheet_eqFunction_475(data, threadData);
  Flowsheet_eqFunction_473(data, threadData);
  Flowsheet_eqFunction_96(data, threadData);
  Flowsheet_eqFunction_506(data, threadData);
  Flowsheet_eqFunction_507(data, threadData);
  Flowsheet_eqFunction_99(data, threadData);
  Flowsheet_eqFunction_505(data, threadData);
  Flowsheet_eqFunction_504(data, threadData);
  Flowsheet_eqFunction_502(data, threadData);
  Flowsheet_eqFunction_503(data, threadData);
  Flowsheet_eqFunction_511(data, threadData);
  Flowsheet_eqFunction_524(data, threadData);
  Flowsheet_eqFunction_526(data, threadData);
  Flowsheet_eqFunction_525(data, threadData);
  Flowsheet_eqFunction_510(data, threadData);
  Flowsheet_eqFunction_521(data, threadData);
  Flowsheet_eqFunction_523(data, threadData);
  Flowsheet_eqFunction_522(data, threadData);
  Flowsheet_eqFunction_112(data, threadData);
  Flowsheet_eqFunction_509(data, threadData);
  Flowsheet_eqFunction_520(data, threadData);
  Flowsheet_eqFunction_527(data, threadData);
  Flowsheet_eqFunction_529(data, threadData);
  Flowsheet_eqFunction_528(data, threadData);
  Flowsheet_eqFunction_118(data, threadData);
  Flowsheet_eqFunction_513(data, threadData);
  Flowsheet_eqFunction_514(data, threadData);
  Flowsheet_eqFunction_517(data, threadData);
  Flowsheet_eqFunction_519(data, threadData);
  Flowsheet_eqFunction_515(data, threadData);
  Flowsheet_eqFunction_516(data, threadData);
  Flowsheet_eqFunction_125(data, threadData);
  Flowsheet_eqFunction_150(data, threadData);
  Flowsheet_eqFunction_151(data, threadData);
  Flowsheet_eqFunction_556(data, threadData);
  Flowsheet_eqFunction_557(data, threadData);
  Flowsheet_eqFunction_559(data, threadData);
  Flowsheet_eqFunction_558(data, threadData);
  Flowsheet_eqFunction_560(data, threadData);
  Flowsheet_eqFunction_561(data, threadData);
  Flowsheet_eqFunction_565(data, threadData);
  Flowsheet_eqFunction_578(data, threadData);
  Flowsheet_eqFunction_580(data, threadData);
  Flowsheet_eqFunction_579(data, threadData);
  Flowsheet_eqFunction_581(data, threadData);
  Flowsheet_eqFunction_674(data, threadData);
  Flowsheet_eqFunction_673(data, threadData);
  Flowsheet_eqFunction_190(data, threadData);
  Flowsheet_eqFunction_613(data, threadData);
  Flowsheet_eqFunction_614(data, threadData);
  Flowsheet_eqFunction_615(data, threadData);
  Flowsheet_eqFunction_616(data, threadData);
  Flowsheet_eqFunction_617(data, threadData);
  Flowsheet_eqFunction_618(data, threadData);
  Flowsheet_eqFunction_619(data, threadData);
  Flowsheet_eqFunction_620(data, threadData);
  Flowsheet_eqFunction_621(data, threadData);
  Flowsheet_eqFunction_622(data, threadData);
  Flowsheet_eqFunction_623(data, threadData);
  Flowsheet_eqFunction_624(data, threadData);
  Flowsheet_eqFunction_625(data, threadData);
  Flowsheet_eqFunction_626(data, threadData);
  Flowsheet_eqFunction_627(data, threadData);
  Flowsheet_eqFunction_628(data, threadData);
  Flowsheet_eqFunction_629(data, threadData);
  Flowsheet_eqFunction_630(data, threadData);
  Flowsheet_eqFunction_631(data, threadData);
  Flowsheet_eqFunction_632(data, threadData);
  Flowsheet_eqFunction_633(data, threadData);
  Flowsheet_eqFunction_634(data, threadData);
  Flowsheet_eqFunction_635(data, threadData);
  Flowsheet_eqFunction_636(data, threadData);
  Flowsheet_eqFunction_653(data, threadData);
  Flowsheet_eqFunction_652(data, threadData);
  Flowsheet_eqFunction_217(data, threadData);
  Flowsheet_eqFunction_656(data, threadData);
  Flowsheet_eqFunction_664(data, threadData);
  Flowsheet_eqFunction_657(data, threadData);
  Flowsheet_eqFunction_659(data, threadData);
  Flowsheet_eqFunction_665(data, threadData);
  Flowsheet_eqFunction_658(data, threadData);
  Flowsheet_eqFunction_650(data, threadData);
  Flowsheet_eqFunction_649(data, threadData);
  Flowsheet_eqFunction_226(data, threadData);
  Flowsheet_eqFunction_227(data, threadData);
  Flowsheet_eqFunction_645(data, threadData);
  Flowsheet_eqFunction_646(data, threadData);
  Flowsheet_eqFunction_230(data, threadData);
  Flowsheet_eqFunction_661(data, threadData);
  Flowsheet_eqFunction_662(data, threadData);
  Flowsheet_eqFunction_667(data, threadData);
  Flowsheet_eqFunction_669(data, threadData);
  Flowsheet_eqFunction_668(data, threadData);
  Flowsheet_eqFunction_647(data, threadData);
  Flowsheet_eqFunction_654(data, threadData);
  Flowsheet_eqFunction_648(data, threadData);
  Flowsheet_eqFunction_663(data, threadData);
  Flowsheet_eqFunction_670(data, threadData);
  Flowsheet_eqFunction_672(data, threadData);
  Flowsheet_eqFunction_671(data, threadData);
  Flowsheet_eqFunction_564(data, threadData);
  Flowsheet_eqFunction_575(data, threadData);
  Flowsheet_eqFunction_577(data, threadData);
  Flowsheet_eqFunction_576(data, threadData);
  Flowsheet_eqFunction_247(data, threadData);
  Flowsheet_eqFunction_563(data, threadData);
  Flowsheet_eqFunction_574(data, threadData);
  Flowsheet_eqFunction_675(data, threadData);
  Flowsheet_eqFunction_677(data, threadData);
  Flowsheet_eqFunction_676(data, threadData);
  Flowsheet_eqFunction_253(data, threadData);
  Flowsheet_eqFunction_568(data, threadData);
  Flowsheet_eqFunction_569(data, threadData);
  Flowsheet_eqFunction_571(data, threadData);
  Flowsheet_eqFunction_573(data, threadData);
  Flowsheet_eqFunction_567(data, threadData);
  Flowsheet_eqFunction_570(data, threadData);
  Flowsheet_eqFunction_260(data, threadData);
  Flowsheet_eqFunction_678(data, threadData);
  Flowsheet_eqFunction_679(data, threadData);
  Flowsheet_eqFunction_680(data, threadData);
  Flowsheet_eqFunction_681(data, threadData);
  Flowsheet_eqFunction_682(data, threadData);
  Flowsheet_eqFunction_683(data, threadData);
  Flowsheet_eqFunction_684(data, threadData);
  Flowsheet_eqFunction_685(data, threadData);
  Flowsheet_eqFunction_269(data, threadData);
  Flowsheet_eqFunction_687(data, threadData);
  Flowsheet_eqFunction_688(data, threadData);
  Flowsheet_eqFunction_689(data, threadData);
  Flowsheet_eqFunction_273(data, threadData);
  Flowsheet_eqFunction_274(data, threadData);
  Flowsheet_eqFunction_690(data, threadData);
  Flowsheet_eqFunction_691(data, threadData);
  Flowsheet_eqFunction_301(data, threadData);
  Flowsheet_eqFunction_724(data, threadData);
  Flowsheet_eqFunction_723(data, threadData);
  Flowsheet_eqFunction_722(data, threadData);
  Flowsheet_eqFunction_305(data, threadData);
  Flowsheet_eqFunction_740(data, threadData);
  Flowsheet_eqFunction_741(data, threadData);
  Flowsheet_eqFunction_744(data, threadData);
  Flowsheet_eqFunction_745(data, threadData);
  Flowsheet_eqFunction_742(data, threadData);
  Flowsheet_eqFunction_743(data, threadData);
  Flowsheet_eqFunction_725(data, threadData);
  Flowsheet_eqFunction_313(data, threadData);
  Flowsheet_eqFunction_729(data, threadData);
  Flowsheet_eqFunction_726(data, threadData);
  Flowsheet_eqFunction_316(data, threadData);
  Flowsheet_eqFunction_720(data, threadData);
  Flowsheet_eqFunction_730(data, threadData);
  Flowsheet_eqFunction_731(data, threadData);
  Flowsheet_eqFunction_738(data, threadData);
  Flowsheet_eqFunction_719(data, threadData);
  Flowsheet_eqFunction_727(data, threadData);
  Flowsheet_eqFunction_728(data, threadData);
  Flowsheet_eqFunction_737(data, threadData);
  Flowsheet_eqFunction_325(data, threadData);
  Flowsheet_eqFunction_734(data, threadData);
  Flowsheet_eqFunction_733(data, threadData);
  Flowsheet_eqFunction_735(data, threadData);
  Flowsheet_eqFunction_736(data, threadData);
  Flowsheet_eqFunction_747(data, threadData);
  Flowsheet_eqFunction_748(data, threadData);
  Flowsheet_eqFunction_332(data, threadData);
  Flowsheet_eqFunction_333(data, threadData);
  Flowsheet_eqFunction_749(data, threadData);
  Flowsheet_eqFunction_750(data, threadData);
  Flowsheet_eqFunction_360(data, threadData);
  Flowsheet_eqFunction_780(data, threadData);
  Flowsheet_eqFunction_362(data, threadData);
  Flowsheet_eqFunction_800(data, threadData);
  Flowsheet_eqFunction_799(data, threadData);
  Flowsheet_eqFunction_801(data, threadData);
  Flowsheet_eqFunction_805(data, threadData);
  Flowsheet_eqFunction_803(data, threadData);
  Flowsheet_eqFunction_802(data, threadData);
  Flowsheet_eqFunction_781(data, threadData);
  Flowsheet_eqFunction_784(data, threadData);
  Flowsheet_eqFunction_783(data, threadData);
  Flowsheet_eqFunction_788(data, threadData);
  Flowsheet_eqFunction_789(data, threadData);
  Flowsheet_eqFunction_374(data, threadData);
  Flowsheet_eqFunction_375(data, threadData);
  Flowsheet_eqFunction_779(data, threadData);
  Flowsheet_eqFunction_792(data, threadData);
  Flowsheet_eqFunction_793(data, threadData);
  Flowsheet_eqFunction_797(data, threadData);
  Flowsheet_eqFunction_778(data, threadData);
  Flowsheet_eqFunction_790(data, threadData);
  Flowsheet_eqFunction_791(data, threadData);
  Flowsheet_eqFunction_796(data, threadData);
  Flowsheet_eqFunction_384(data, threadData);
  Flowsheet_eqFunction_787(data, threadData);
  Flowsheet_eqFunction_786(data, threadData);
  Flowsheet_eqFunction_794(data, threadData);
  Flowsheet_eqFunction_795(data, threadData);
  Flowsheet_eqFunction_806(data, threadData);
  Flowsheet_eqFunction_390(data, threadData);
  Flowsheet_eqFunction_391(data, threadData);
  Flowsheet_eqFunction_392(data, threadData);
  Flowsheet_eqFunction_393(data, threadData);
  Flowsheet_eqFunction_394(data, threadData);
  Flowsheet_eqFunction_395(data, threadData);
  Flowsheet_eqFunction_396(data, threadData);
  Flowsheet_eqFunction_397(data, threadData);
  Flowsheet_eqFunction_398(data, threadData);
  Flowsheet_eqFunction_399(data, threadData);
  Flowsheet_eqFunction_400(data, threadData);
  Flowsheet_eqFunction_401(data, threadData);
  Flowsheet_eqFunction_402(data, threadData);
  Flowsheet_eqFunction_403(data, threadData);
  Flowsheet_eqFunction_404(data, threadData);
  Flowsheet_eqFunction_405(data, threadData);
  Flowsheet_eqFunction_406(data, threadData);
  Flowsheet_eqFunction_407(data, threadData);
  Flowsheet_eqFunction_408(data, threadData);
  Flowsheet_eqFunction_409(data, threadData);
  Flowsheet_eqFunction_410(data, threadData);
  Flowsheet_eqFunction_411(data, threadData);
  Flowsheet_eqFunction_412(data, threadData);
  Flowsheet_eqFunction_413(data, threadData);
  Flowsheet_eqFunction_414(data, threadData);
  Flowsheet_eqFunction_415(data, threadData);
  Flowsheet_eqFunction_416(data, threadData);
  Flowsheet_eqFunction_417(data, threadData);
  Flowsheet_eqFunction_418(data, threadData);
  Flowsheet_eqFunction_419(data, threadData);
  Flowsheet_eqFunction_420(data, threadData);
  Flowsheet_eqFunction_421(data, threadData);
  Flowsheet_eqFunction_422(data, threadData);
  Flowsheet_eqFunction_423(data, threadData);
  Flowsheet_eqFunction_424(data, threadData);
  Flowsheet_eqFunction_425(data, threadData);
  Flowsheet_eqFunction_426(data, threadData);
  Flowsheet_eqFunction_427(data, threadData);
  Flowsheet_eqFunction_428(data, threadData);
  Flowsheet_eqFunction_429(data, threadData);
  Flowsheet_eqFunction_430(data, threadData);
  Flowsheet_eqFunction_431(data, threadData);
  Flowsheet_eqFunction_432(data, threadData);
  Flowsheet_eqFunction_433(data, threadData);
  Flowsheet_eqFunction_434(data, threadData);
  Flowsheet_eqFunction_435(data, threadData);
  Flowsheet_eqFunction_436(data, threadData);
  Flowsheet_eqFunction_437(data, threadData);
  Flowsheet_eqFunction_438(data, threadData);
  Flowsheet_eqFunction_439(data, threadData);
  Flowsheet_eqFunction_440(data, threadData);
  Flowsheet_eqFunction_441(data, threadData);
  Flowsheet_eqFunction_442(data, threadData);
  Flowsheet_eqFunction_443(data, threadData);
  Flowsheet_eqFunction_444(data, threadData);
  Flowsheet_eqFunction_445(data, threadData);
  Flowsheet_eqFunction_446(data, threadData);
  Flowsheet_eqFunction_447(data, threadData);
  Flowsheet_eqFunction_448(data, threadData);
  Flowsheet_eqFunction_449(data, threadData);
  Flowsheet_eqFunction_450(data, threadData);
  Flowsheet_eqFunction_451(data, threadData);
  Flowsheet_eqFunction_452(data, threadData);
  Flowsheet_eqFunction_453(data, threadData);
  Flowsheet_eqFunction_454(data, threadData);
  Flowsheet_eqFunction_455(data, threadData);
  Flowsheet_eqFunction_456(data, threadData);
  Flowsheet_eqFunction_457(data, threadData);
  Flowsheet_eqFunction_458(data, threadData);
  Flowsheet_eqFunction_459(data, threadData);
  Flowsheet_eqFunction_460(data, threadData);
  Flowsheet_eqFunction_461(data, threadData);
  Flowsheet_eqFunction_462(data, threadData);
  Flowsheet_eqFunction_463(data, threadData);
  Flowsheet_eqFunction_464(data, threadData);
  Flowsheet_eqFunction_465(data, threadData);
  Flowsheet_eqFunction_466(data, threadData);
  Flowsheet_eqFunction_467(data, threadData);
  Flowsheet_eqFunction_468(data, threadData);
  Flowsheet_eqFunction_469(data, threadData);
  Flowsheet_eqFunction_470(data, threadData);
  Flowsheet_eqFunction_471(data, threadData);
  TRACE_POP
}


int Flowsheet_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  Flowsheet_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int Flowsheet_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int Flowsheet_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

