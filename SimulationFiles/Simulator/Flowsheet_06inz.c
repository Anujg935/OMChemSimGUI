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
  data->localData[0]->realVars[58] /* MatStm1.gamma[1] variable */ = 1.0;
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
  data->localData[0]->realVars[59] /* MatStm1.gamma[2] variable */ = 1.0;
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
  data->localData[0]->realVars[83] /* MatStm1.resMolSpHeat[1] variable */ = 0.0;
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
  data->localData[0]->realVars[77] /* MatStm1.resMolEnth[1] variable */ = 0.0;
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
  data->localData[0]->realVars[80] /* MatStm1.resMolEntr[1] variable */ = 0.0;
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
  data->localData[0]->realVars[149] /* MatStm2.gamma[1] variable */ = 1.0;
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
  data->localData[0]->realVars[150] /* MatStm2.gamma[2] variable */ = 1.0;
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
  data->localData[0]->realVars[174] /* MatStm2.resMolSpHeat[1] variable */ = 0.0;
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
  data->localData[0]->realVars[168] /* MatStm2.resMolEnth[1] variable */ = 0.0;
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
  data->localData[0]->realVars[171] /* MatStm2.resMolEntr[1] variable */ = 0.0;
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
  data->localData[0]->realVars[239] /* MatStm3.gamma[1] variable */ = 1.0;
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
  data->localData[0]->realVars[240] /* MatStm3.gamma[2] variable */ = 1.0;
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
  data->localData[0]->realVars[264] /* MatStm3.resMolSpHeat[1] variable */ = 0.0;
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
  data->localData[0]->realVars[258] /* MatStm3.resMolEnth[1] variable */ = 0.0;
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
  data->localData[0]->realVars[261] /* MatStm3.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
MatStm3._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm3.comp[2].VP[1], MatStm3.comp[2].VP[2], MatStm3.comp[2].VP[3], MatStm3.comp[2].VP[4], MatStm3.comp[2].VP[5], MatStm3.comp[2].VP[6]}, 290.0)
*/
void Flowsheet_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[509], (modelica_real)data->simulationInfo->realParameter[510], (modelica_real)data->simulationInfo->realParameter[511], (modelica_real)data->simulationInfo->realParameter[512], (modelica_real)data->simulationInfo->realParameter[513], (modelica_real)data->simulationInfo->realParameter[514]);
  data->localData[0]->realVars[195] /* MatStm3.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, 290.0);
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
MatStm3._K[2] = 9.869232667160129e-006 * MatStm3.Psat[2]
*/
void Flowsheet_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[187] /* MatStm3.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[195] /* MatStm3.Psat[2] variable */);
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
MatStm3._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm3.comp[1].VP[1], MatStm3.comp[1].VP[2], MatStm3.comp[1].VP[3], MatStm3.comp[1].VP[4], MatStm3.comp[1].VP[5], MatStm3.comp[1].VP[6]}, 290.0)
*/
void Flowsheet_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[503], (modelica_real)data->simulationInfo->realParameter[504], (modelica_real)data->simulationInfo->realParameter[505], (modelica_real)data->simulationInfo->realParameter[506], (modelica_real)data->simulationInfo->realParameter[507], (modelica_real)data->simulationInfo->realParameter[508]);
  data->localData[0]->realVars[194] /* MatStm3.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp1, 290.0);
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
MatStm3._K[1] = 9.869232667160129e-006 * MatStm3.Psat[1]
*/
void Flowsheet_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[186] /* MatStm3.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[194] /* MatStm3.Psat[1] variable */);
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm3.comp[2].SH, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tc, 290.0)
*/
void Flowsheet_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426]);
  data->localData[0]->realVars[214] /* MatStm3.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[486], tmp2, tmp3, data->simulationInfo->realParameter[496], 290.0);
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm3.comp[2].SH, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tc, 290.0)
*/
void Flowsheet_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  real_array tmp4;
  real_array tmp5;
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426]);
  data->localData[0]->realVars[212] /* MatStm3.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[486], tmp4, tmp5, data->simulationInfo->realParameter[496], 290.0);
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, 290.0)
*/
void Flowsheet_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  real_array tmp6;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  data->localData[0]->realVars[238] /* MatStm3.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp6, 290.0);
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm3.comp[2].LiqCp[1], MatStm3.comp[2].LiqCp[2], MatStm3.comp[2].LiqCp[3], MatStm3.comp[2].LiqCp[4], MatStm3.comp[2].LiqCp[5], MatStm3.comp[2].LiqCp[6]}, 290.0)
*/
void Flowsheet_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[437], (modelica_real)data->simulationInfo->realParameter[438], (modelica_real)data->simulationInfo->realParameter[439], (modelica_real)data->simulationInfo->realParameter[440], (modelica_real)data->simulationInfo->realParameter[441], (modelica_real)data->simulationInfo->realParameter[442]);
  data->localData[0]->realVars[236] /* MatStm3.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp7, 290.0);
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm3.comp[1].SH, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tc, 290.0)
*/
void Flowsheet_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420]);
  data->localData[0]->realVars[213] /* MatStm3.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[485], tmp8, tmp9, data->simulationInfo->realParameter[495], 290.0);
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm3.comp[1].SH, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tc, 290.0)
*/
void Flowsheet_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420]);
  data->localData[0]->realVars[211] /* MatStm3.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[485], tmp10, tmp11, data->simulationInfo->realParameter[495], 290.0);
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, 290.0)
*/
void Flowsheet_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  real_array tmp12;
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  data->localData[0]->realVars[237] /* MatStm3.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp12, 290.0);
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm3.comp[1].LiqCp[1], MatStm3.comp[1].LiqCp[2], MatStm3.comp[1].LiqCp[3], MatStm3.comp[1].LiqCp[4], MatStm3.comp[1].LiqCp[5], MatStm3.comp[1].LiqCp[6]}, 290.0)
*/
void Flowsheet_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)data->simulationInfo->realParameter[431], (modelica_real)data->simulationInfo->realParameter[432], (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434], (modelica_real)data->simulationInfo->realParameter[435], (modelica_real)data->simulationInfo->realParameter[436]);
  data->localData[0]->realVars[235] /* MatStm3.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp13, 290.0);
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
MatStm2._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[2].VP[1], MatStm2.comp[2].VP[2], MatStm2.comp[2].VP[3], MatStm2.comp[2].VP[4], MatStm2.comp[2].VP[5], MatStm2.comp[2].VP[6]}, 310.0)
*/
void Flowsheet_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  real_array tmp14;
  array_alloc_scalar_real_array(&tmp14, 6, (modelica_real)data->simulationInfo->realParameter[351], (modelica_real)data->simulationInfo->realParameter[352], (modelica_real)data->simulationInfo->realParameter[353], (modelica_real)data->simulationInfo->realParameter[354], (modelica_real)data->simulationInfo->realParameter[355], (modelica_real)data->simulationInfo->realParameter[356]);
  data->localData[0]->realVars[105] /* MatStm2.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp14, 310.0);
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
MatStm2._K[2] = 9.869232667160129e-006 * MatStm2.Psat[2]
*/
void Flowsheet_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[97] /* MatStm2.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[105] /* MatStm2.Psat[2] variable */);
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
MatStm2._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[1].VP[1], MatStm2.comp[1].VP[2], MatStm2.comp[1].VP[3], MatStm2.comp[1].VP[4], MatStm2.comp[1].VP[5], MatStm2.comp[1].VP[6]}, 310.0)
*/
void Flowsheet_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  real_array tmp15;
  array_alloc_scalar_real_array(&tmp15, 6, (modelica_real)data->simulationInfo->realParameter[345], (modelica_real)data->simulationInfo->realParameter[346], (modelica_real)data->simulationInfo->realParameter[347], (modelica_real)data->simulationInfo->realParameter[348], (modelica_real)data->simulationInfo->realParameter[349], (modelica_real)data->simulationInfo->realParameter[350]);
  data->localData[0]->realVars[104] /* MatStm2.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp15, 310.0);
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
MatStm2._K[1] = 9.869232667160129e-006 * MatStm2.Psat[1]
*/
void Flowsheet_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->localData[0]->realVars[96] /* MatStm2.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[104] /* MatStm2.Psat[1] variable */);
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[2].SH, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tc, 310.0)
*/
void Flowsheet_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  real_array tmp16;
  real_array tmp17;
  array_alloc_scalar_real_array(&tmp16, 6, (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364], (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368]);
  array_alloc_scalar_real_array(&tmp17, 6, (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264], (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268]);
  data->localData[0]->realVars[124] /* MatStm2.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[328], tmp16, tmp17, data->simulationInfo->realParameter[338], 310.0);
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[2].SH, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tc, 310.0)
*/
void Flowsheet_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  real_array tmp18;
  real_array tmp19;
  array_alloc_scalar_real_array(&tmp18, 6, (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364], (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368]);
  array_alloc_scalar_real_array(&tmp19, 6, (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264], (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268]);
  data->localData[0]->realVars[122] /* MatStm2.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[328], tmp18, tmp19, data->simulationInfo->realParameter[338], 310.0);
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, 310.0)
*/
void Flowsheet_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  real_array tmp20;
  array_alloc_scalar_real_array(&tmp20, 6, (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364], (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368]);
  data->localData[0]->realVars[148] /* MatStm2.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp20, 310.0);
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm2.comp[2].LiqCp[1], MatStm2.comp[2].LiqCp[2], MatStm2.comp[2].LiqCp[3], MatStm2.comp[2].LiqCp[4], MatStm2.comp[2].LiqCp[5], MatStm2.comp[2].LiqCp[6]}, 310.0)
*/
void Flowsheet_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  real_array tmp21;
  array_alloc_scalar_real_array(&tmp21, 6, (modelica_real)data->simulationInfo->realParameter[279], (modelica_real)data->simulationInfo->realParameter[280], (modelica_real)data->simulationInfo->realParameter[281], (modelica_real)data->simulationInfo->realParameter[282], (modelica_real)data->simulationInfo->realParameter[283], (modelica_real)data->simulationInfo->realParameter[284]);
  data->localData[0]->realVars[146] /* MatStm2.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp21, 310.0);
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, 310.0)
*/
void Flowsheet_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  real_array tmp22;
  real_array tmp23;
  array_alloc_scalar_real_array(&tmp22, 6, (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358], (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362]);
  array_alloc_scalar_real_array(&tmp23, 6, (modelica_real)data->simulationInfo->realParameter[257], (modelica_real)data->simulationInfo->realParameter[258], (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262]);
  data->localData[0]->realVars[123] /* MatStm2.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[327], tmp22, tmp23, data->simulationInfo->realParameter[337], 310.0);
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, 310.0)
*/
void Flowsheet_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  real_array tmp24;
  real_array tmp25;
  array_alloc_scalar_real_array(&tmp24, 6, (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358], (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362]);
  array_alloc_scalar_real_array(&tmp25, 6, (modelica_real)data->simulationInfo->realParameter[257], (modelica_real)data->simulationInfo->realParameter[258], (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262]);
  data->localData[0]->realVars[121] /* MatStm2.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[327], tmp24, tmp25, data->simulationInfo->realParameter[337], 310.0);
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, 310.0)
*/
void Flowsheet_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  real_array tmp26;
  array_alloc_scalar_real_array(&tmp26, 6, (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358], (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362]);
  data->localData[0]->realVars[147] /* MatStm2.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp26, 310.0);
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm2.comp[1].LiqCp[1], MatStm2.comp[1].LiqCp[2], MatStm2.comp[1].LiqCp[3], MatStm2.comp[1].LiqCp[4], MatStm2.comp[1].LiqCp[5], MatStm2.comp[1].LiqCp[6]}, 310.0)
*/
void Flowsheet_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  real_array tmp27;
  array_alloc_scalar_real_array(&tmp27, 6, (modelica_real)data->simulationInfo->realParameter[273], (modelica_real)data->simulationInfo->realParameter[274], (modelica_real)data->simulationInfo->realParameter[275], (modelica_real)data->simulationInfo->realParameter[276], (modelica_real)data->simulationInfo->realParameter[277], (modelica_real)data->simulationInfo->realParameter[278]);
  data->localData[0]->realVars[145] /* MatStm2.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp27, 310.0);
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
MatStm3._compMolFrac[1,1] = 0.5
*/
void Flowsheet_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[227] /* MatStm3.compMolFrac[1,1] variable */ = 0.5;
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[1,1] = 100.0 * MatStm3.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[221] /* MatStm3.compMolFlo[1,1] variable */ = (100.0) * (data->localData[0]->realVars[227] /* MatStm3.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[1,1] = MatStm3.compMolFlo[1,1] * MatStm3.comp[1].MW
*/
void Flowsheet_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->localData[0]->realVars[197] /* MatStm3.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[221] /* MatStm3.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[479]);
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
MatStm3._compMolFrac[1,2] = 0.5
*/
void Flowsheet_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[228] /* MatStm3.compMolFrac[1,2] variable */ = 0.5;
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[1,2] = 100.0 * MatStm3.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->localData[0]->realVars[222] /* MatStm3.compMolFlo[1,2] variable */ = (100.0) * (data->localData[0]->realVars[228] /* MatStm3.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[1,2] = MatStm3.compMolFlo[1,2] * MatStm3.comp[2].MW
*/
void Flowsheet_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->localData[0]->realVars[198] /* MatStm3.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[222] /* MatStm3.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[480]);
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
MatStm3._Pbubl = MatStm3.compMolFrac[1,1] * exp(MatStm3.comp[1].VP[2] + MatStm3.comp[1].VP[3] / 290.0 + MatStm3.comp[1].VP[4] * 5.66988092298052 + MatStm3.comp[1].VP[5] * 290.0 ^ MatStm3.comp[1].VP[6]) + MatStm3.compMolFrac[1,2] * exp(MatStm3.comp[2].VP[2] + MatStm3.comp[2].VP[3] / 290.0 + MatStm3.comp[2].VP[4] * 5.66988092298052 + MatStm3.comp[2].VP[5] * 290.0 ^ MatStm3.comp[2].VP[6])
*/
void Flowsheet_eqFunction_46(DATA *data, threadData_t *threadData)
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
  tmp28 = 290.0;
  tmp29 = data->simulationInfo->realParameter[508];
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
  }tmp35 = 290.0;
  tmp36 = data->simulationInfo->realParameter[514];
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
  data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */ = (data->localData[0]->realVars[227] /* MatStm3.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[504] + DIVISION_SIM(data->simulationInfo->realParameter[505],290.0,"290.0",equationIndexes) + (data->simulationInfo->realParameter[506]) * (5.66988092298052) + (data->simulationInfo->realParameter[507]) * (tmp30))) + (data->localData[0]->realVars[228] /* MatStm3.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[510] + DIVISION_SIM(data->simulationInfo->realParameter[511],290.0,"290.0",equationIndexes) + (data->simulationInfo->realParameter[512]) * (5.66988092298052) + (data->simulationInfo->realParameter[513]) * (tmp37)));
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
MatStm3._Pdew = 1.0 / (MatStm3.compMolFrac[1,1] * exp((-MatStm3.comp[1].VP[2]) - MatStm3.comp[1].VP[3] / 290.0 - MatStm3.comp[1].VP[4] * 5.66988092298052 - MatStm3.comp[1].VP[5] * 290.0 ^ MatStm3.comp[1].VP[6]) + MatStm3.compMolFrac[1,2] * exp((-MatStm3.comp[2].VP[2]) - MatStm3.comp[2].VP[3] / 290.0 - MatStm3.comp[2].VP[4] * 5.66988092298052 - MatStm3.comp[2].VP[5] * 290.0 ^ MatStm3.comp[2].VP[6]))
*/
void Flowsheet_eqFunction_47(DATA *data, threadData_t *threadData)
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
  tmp42 = 290.0;
  tmp43 = data->simulationInfo->realParameter[508];
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
  }tmp49 = 290.0;
  tmp50 = data->simulationInfo->realParameter[514];
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
  data->localData[0]->realVars[193] /* MatStm3.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[227] /* MatStm3.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[504]) - (DIVISION_SIM(data->simulationInfo->realParameter[505],290.0,"290.0",equationIndexes)) - ((data->simulationInfo->realParameter[506]) * (5.66988092298052)) - ((data->simulationInfo->realParameter[507]) * (tmp44)))) + (data->localData[0]->realVars[228] /* MatStm3.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[510]) - (DIVISION_SIM(data->simulationInfo->realParameter[511],290.0,"290.0",equationIndexes)) - ((data->simulationInfo->realParameter[512]) * (5.66988092298052)) - ((data->simulationInfo->realParameter[513]) * (tmp51)))),"MatStm3.compMolFrac[1,1] * exp((-MatStm3.comp[1].VP[2]) - MatStm3.comp[1].VP[3] / 290.0 - MatStm3.comp[1].VP[4] * 5.66988092298052 - MatStm3.comp[1].VP[5] * 290.0 ^ MatStm3.comp[1].VP[6]) + MatStm3.compMolFrac[1,2] * exp((-MatStm3.comp[2].VP[2]) - MatStm3.comp[2].VP[3] / 290.0 - MatStm3.comp[2].VP[4] * 5.66988092298052 - MatStm3.comp[2].VP[5] * 290.0 ^ MatStm3.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
MatStm2._compMolFrac[1,1] = 0.5
*/
void Flowsheet_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->realVars[137] /* MatStm2.compMolFrac[1,1] variable */ = 0.5;
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[1,1] = 100.0 * MatStm2.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[131] /* MatStm2.compMolFlo[1,1] variable */ = (100.0) * (data->localData[0]->realVars[137] /* MatStm2.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[1,1] = MatStm2.compMolFlo[1,1] * MatStm2.comp[1].MW
*/
void Flowsheet_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[107] /* MatStm2.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[131] /* MatStm2.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[321]);
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,1] = 0.5 * (MatStm3.compMolFrac[1,1] + MatStm2.compMolFrac[1,1])
*/
void Flowsheet_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  data->localData[0]->realVars[46] /* MatStm1.compMolFrac[1,1] variable */ = (0.5) * (data->localData[0]->realVars[227] /* MatStm3.compMolFrac[1,1] variable */ + data->localData[0]->realVars[137] /* MatStm2.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
MatStm2._compMolFrac[1,2] = 0.5
*/
void Flowsheet_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[138] /* MatStm2.compMolFrac[1,2] variable */ = 0.5;
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[1,2] = 100.0 * MatStm2.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[132] /* MatStm2.compMolFlo[1,2] variable */ = (100.0) * (data->localData[0]->realVars[138] /* MatStm2.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[1,2] = MatStm2.compMolFlo[1,2] * MatStm2.comp[2].MW
*/
void Flowsheet_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  data->localData[0]->realVars[108] /* MatStm2.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[132] /* MatStm2.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[322]);
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
MatStm2._Pbubl = MatStm2.compMolFrac[1,1] * exp(MatStm2.comp[1].VP[2] + MatStm2.comp[1].VP[3] / 310.0 + MatStm2.comp[1].VP[4] * 5.736572297479192 + MatStm2.comp[1].VP[5] * 310.0 ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp(MatStm2.comp[2].VP[2] + MatStm2.comp[2].VP[3] / 310.0 + MatStm2.comp[2].VP[4] * 5.736572297479192 + MatStm2.comp[2].VP[5] * 310.0 ^ MatStm2.comp[2].VP[6])
*/
void Flowsheet_eqFunction_55(DATA *data, threadData_t *threadData)
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
  tmp56 = 310.0;
  tmp57 = data->simulationInfo->realParameter[350];
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
  }tmp63 = 310.0;
  tmp64 = data->simulationInfo->realParameter[356];
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
  data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */ = (data->localData[0]->realVars[137] /* MatStm2.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[346] + DIVISION_SIM(data->simulationInfo->realParameter[347],310.0,"310.0",equationIndexes) + (data->simulationInfo->realParameter[348]) * (5.736572297479192) + (data->simulationInfo->realParameter[349]) * (tmp58))) + (data->localData[0]->realVars[138] /* MatStm2.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[352] + DIVISION_SIM(data->simulationInfo->realParameter[353],310.0,"310.0",equationIndexes) + (data->simulationInfo->realParameter[354]) * (5.736572297479192) + (data->simulationInfo->realParameter[355]) * (tmp65)));
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
MatStm2._Pdew = 1.0 / (MatStm2.compMolFrac[1,1] * exp((-MatStm2.comp[1].VP[2]) - MatStm2.comp[1].VP[3] / 310.0 - MatStm2.comp[1].VP[4] * 5.736572297479192 - MatStm2.comp[1].VP[5] * 310.0 ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp((-MatStm2.comp[2].VP[2]) - MatStm2.comp[2].VP[3] / 310.0 - MatStm2.comp[2].VP[4] * 5.736572297479192 - MatStm2.comp[2].VP[5] * 310.0 ^ MatStm2.comp[2].VP[6]))
*/
void Flowsheet_eqFunction_56(DATA *data, threadData_t *threadData)
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
  tmp70 = 310.0;
  tmp71 = data->simulationInfo->realParameter[350];
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
  }tmp77 = 310.0;
  tmp78 = data->simulationInfo->realParameter[356];
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
  data->localData[0]->realVars[103] /* MatStm2.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[137] /* MatStm2.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[346]) - (DIVISION_SIM(data->simulationInfo->realParameter[347],310.0,"310.0",equationIndexes)) - ((data->simulationInfo->realParameter[348]) * (5.736572297479192)) - ((data->simulationInfo->realParameter[349]) * (tmp72)))) + (data->localData[0]->realVars[138] /* MatStm2.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[352]) - (DIVISION_SIM(data->simulationInfo->realParameter[353],310.0,"310.0",equationIndexes)) - ((data->simulationInfo->realParameter[354]) * (5.736572297479192)) - ((data->simulationInfo->realParameter[355]) * (tmp79)))),"MatStm2.compMolFrac[1,1] * exp((-MatStm2.comp[1].VP[2]) - MatStm2.comp[1].VP[3] / 310.0 - MatStm2.comp[1].VP[4] * 5.736572297479192 - MatStm2.comp[1].VP[5] * 310.0 ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp((-MatStm2.comp[2].VP[2]) - MatStm2.comp[2].VP[3] / 310.0 - MatStm2.comp[2].VP[4] * 5.736572297479192 - MatStm2.comp[2].VP[5] * 310.0 ^ MatStm2.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,2] = 0.5 * (MatStm3.compMolFrac[1,2] + MatStm2.compMolFrac[1,2])
*/
void Flowsheet_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->localData[0]->realVars[47] /* MatStm1.compMolFrac[1,2] variable */ = (0.5) * (data->localData[0]->realVars[228] /* MatStm3.compMolFrac[1,2] variable */ + data->localData[0]->realVars[138] /* MatStm2.compMolFrac[1,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_279(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_277(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_280(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_278(DATA *data, threadData_t *threadData);


void Flowsheet_eqFunction_62(DATA*, threadData_t*);
void Flowsheet_eqFunction_63(DATA*, threadData_t*);
void Flowsheet_eqFunction_64(DATA*, threadData_t*);
void Flowsheet_eqFunction_65(DATA*, threadData_t*);
void Flowsheet_eqFunction_66(DATA*, threadData_t*);
void Flowsheet_eqFunction_67(DATA*, threadData_t*);
void Flowsheet_eqFunction_68(DATA*, threadData_t*);
void Flowsheet_eqFunction_73(DATA*, threadData_t*);
void Flowsheet_eqFunction_72(DATA*, threadData_t*);
void Flowsheet_eqFunction_71(DATA*, threadData_t*);
void Flowsheet_eqFunction_70(DATA*, threadData_t*);
void Flowsheet_eqFunction_69(DATA*, threadData_t*);
/*
equation index: 86
indexNonlinear: 0
type: NONLINEAR

vars: {MatStm2._totMolFlo[2], MatStm2._compMolFrac[3,1], MatStm2._compMolFrac[2,1], MatStm2._compMolFrac[3,2], MatStm2._compMolFrac[2,2]}
eqns: {62, 63, 64, 65, 66, 67, 68, 73, 72, 71, 70, 69}
*/
void Flowsheet_eqFunction_86(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[141] /* MatStm2.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[139] /* MatStm2.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,86};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 86 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[141] /* MatStm2.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[139] /* MatStm2.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  TRACE_POP
}
extern void Flowsheet_eqFunction_306(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_307(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_312(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_311(DATA *data, threadData_t *threadData);


/*
equation index: 91
type: ALGORITHM

  (MatStm2.compMolEntr[2,2], MatStm2.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[2].AS, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tb, MatStm2.comp[2].Tc, 310.0, 101325.0, MatStm2.compMolFrac[2,2], MatStm2.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364], (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264], (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268]);
  data->localData[0]->realVars[128] /* MatStm2.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[240], tmp0, tmp1, data->simulationInfo->realParameter[336], data->simulationInfo->realParameter[338], 310.0, 101325.0, data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,2] variable */, data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[130] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_321(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_322(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_309(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_329(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_331(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_330(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_308(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_326(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_328(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_327(DATA *data, threadData_t *threadData);


/*
equation index: 102
type: ALGORITHM

  (MatStm2.compMolEntr[2,1], MatStm2.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[1].AS, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tb, MatStm2.comp[1].Tc, 310.0, 101325.0, MatStm2.compMolFrac[2,1], MatStm2.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358], (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[257], (modelica_real)data->simulationInfo->realParameter[258], (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262]);
  data->localData[0]->realVars[127] /* MatStm2.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[239], tmp2, tmp3, data->simulationInfo->realParameter[335], data->simulationInfo->realParameter[337], 310.0, 101325.0, data->localData[0]->realVars[139] /* MatStm2.compMolFrac[2,1] variable */, data->localData[0]->realVars[141] /* MatStm2.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[129] /* MatStm2.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_320(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_319(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_332(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_334(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_333(DATA *data, threadData_t *threadData);


/*
equation index: 108
type: ALGORITHM

  MatStm2.MW[3] := $START.MatStm2.MW[3];
  MatStm2.MW[2] := $START.MatStm2.MW[2];
  MatStm2.MW[1] := $START.MatStm2.MW[1];
  for i in 1:2 loop
    MatStm2.MW[:] := {MatStm2.MW[1] + MatStm2.compMolFrac[1,i] * MatStm2.comp[i].MW, MatStm2.MW[2] + MatStm2.compMolFrac[2,i] * MatStm2.comp[i].MW, MatStm2.MW[3] + MatStm2.compMolFrac[3,i] * MatStm2.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[100] /* MatStm2.MW[3] variable */ = data->modelData->realVarsData[100].attribute /* MatStm2.MW[3] variable */.start;

  data->localData[0]->realVars[99] /* MatStm2.MW[2] variable */ = data->modelData->realVarsData[99].attribute /* MatStm2.MW[2] variable */.start;

  data->localData[0]->realVars[98] /* MatStm2.MW[1] variable */ = data->modelData->realVarsData[98].attribute /* MatStm2.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[98] /* MatStm2.MW[1] variable */ + ((&data->localData[0]->realVars[137] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[99] /* MatStm2.MW[2] variable */ + ((&data->localData[0]->realVars[137] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[100] /* MatStm2.MW[3] variable */ + ((&data->localData[0]->realVars[137] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[98] /* MatStm2.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_314(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_323(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_315(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_317(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_324(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_316(DATA *data, threadData_t *threadData);


/*
equation index: 115
type: LINEAR

<var>MatStm2._compMasFrac[2,1]</var>
<var>MatStm2._compMasFrac[1,1]</var>
<var>MatStm2._compMasFrac[3,1]</var>
<var>MatStm2._compMasFrac[2,2]</var>
<var>MatStm2._compMasFrac[3,2]</var>
<row>
  <cell>if 101325.0 >= MatStm2.Pbubl then -MatStm2.compMasFrac[1,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,2] else -MatStm2.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,1] else MatStm2.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,1] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101325.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="4" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[115] /* MatStm2.compMasFrac[2,1] variable */,data->localData[1]->realVars[113] /* MatStm2.compMasFrac[1,1] variable */,data->localData[1]->realVars[117] /* MatStm2.compMasFrac[3,1] variable */,data->localData[1]->realVars[116] /* MatStm2.compMasFrac[2,2] variable */,data->localData[1]->realVars[118] /* MatStm2.compMasFrac[3,2] variable */ };
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
  data->localData[0]->realVars[115] /* MatStm2.compMasFrac[2,1] variable */ = aux_x[0];
  data->localData[0]->realVars[113] /* MatStm2.compMasFrac[1,1] variable */ = aux_x[1];
  data->localData[0]->realVars[117] /* MatStm2.compMasFrac[3,1] variable */ = aux_x[2];
  data->localData[0]->realVars[116] /* MatStm2.compMasFrac[2,2] variable */ = aux_x[3];
  data->localData[0]->realVars[118] /* MatStm2.compMasFrac[3,2] variable */ = aux_x[4];
  TRACE_POP
}

void Flowsheet_eqFunction_116(DATA*, threadData_t*);
void Flowsheet_eqFunction_117(DATA*, threadData_t*);
void Flowsheet_eqFunction_118(DATA*, threadData_t*);
void Flowsheet_eqFunction_119(DATA*, threadData_t*);
void Flowsheet_eqFunction_120(DATA*, threadData_t*);
void Flowsheet_eqFunction_121(DATA*, threadData_t*);
void Flowsheet_eqFunction_122(DATA*, threadData_t*);
void Flowsheet_eqFunction_127(DATA*, threadData_t*);
void Flowsheet_eqFunction_126(DATA*, threadData_t*);
void Flowsheet_eqFunction_125(DATA*, threadData_t*);
void Flowsheet_eqFunction_124(DATA*, threadData_t*);
void Flowsheet_eqFunction_123(DATA*, threadData_t*);
/*
equation index: 140
indexNonlinear: 1
type: NONLINEAR

vars: {MatStm3._totMolFlo[2], MatStm3._compMolFrac[2,1], MatStm3._compMolFrac[2,2], MatStm3._compMolFrac[3,1], MatStm3._compMolFrac[3,2]}
eqns: {116, 117, 118, 119, 120, 121, 122, 127, 126, 125, 124, 123}
*/
void Flowsheet_eqFunction_140(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[271] /* MatStm3.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[230] /* MatStm3.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[232] /* MatStm3.compMolFrac[3,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,140};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 140 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[271] /* MatStm3.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[230] /* MatStm3.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[232] /* MatStm3.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  TRACE_POP
}
extern void Flowsheet_eqFunction_371(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_372(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_364(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_363(DATA *data, threadData_t *threadData);


/*
equation index: 145
type: ALGORITHM

  (MatStm3.compMolEntr[2,1], MatStm3.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[1].AS, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tb, MatStm3.comp[1].Tc, 290.0, 101325.0, MatStm3.compMolFrac[2,1], MatStm3.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420]);
  data->localData[0]->realVars[217] /* MatStm3.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[397], tmp0, tmp1, data->simulationInfo->realParameter[493], data->simulationInfo->realParameter[495], 290.0, 101325.0, data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,1] variable */, data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[219] /* MatStm3.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_376(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_375(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_362(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_383(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_385(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_384(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_361(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_380(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_382(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_381(DATA *data, threadData_t *threadData);


/*
equation index: 156
type: ALGORITHM

  (MatStm3.compMolEntr[2,2], MatStm3.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[2].AS, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tb, MatStm3.comp[2].Tc, 290.0, 101325.0, MatStm3.compMolFrac[2,2], MatStm3.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426]);
  data->localData[0]->realVars[218] /* MatStm3.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[398], tmp2, tmp3, data->simulationInfo->realParameter[494], data->simulationInfo->realParameter[496], 290.0, 101325.0, data->localData[0]->realVars[230] /* MatStm3.compMolFrac[2,2] variable */, data->localData[0]->realVars[232] /* MatStm3.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[220] /* MatStm3.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_370(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_366(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_448(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_450(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_449(DATA *data, threadData_t *threadData);


/*
equation index: 162
type: ALGORITHM

  MatStm3.MW[3] := $START.MatStm3.MW[3];
  MatStm3.MW[2] := $START.MatStm3.MW[2];
  MatStm3.MW[1] := $START.MatStm3.MW[1];
  for i in 1:2 loop
    MatStm3.MW[:] := {MatStm3.MW[1] + MatStm3.compMolFrac[1,i] * MatStm3.comp[i].MW, MatStm3.MW[2] + MatStm3.compMolFrac[2,i] * MatStm3.comp[i].MW, MatStm3.MW[3] + MatStm3.compMolFrac[3,i] * MatStm3.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[190] /* MatStm3.MW[3] variable */ = data->modelData->realVarsData[190].attribute /* MatStm3.MW[3] variable */.start;

  data->localData[0]->realVars[189] /* MatStm3.MW[2] variable */ = data->modelData->realVarsData[189].attribute /* MatStm3.MW[2] variable */.start;

  data->localData[0]->realVars[188] /* MatStm3.MW[1] variable */ = data->modelData->realVarsData[188].attribute /* MatStm3.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[188] /* MatStm3.MW[1] variable */ + ((&data->localData[0]->realVars[227] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[189] /* MatStm3.MW[2] variable */ + ((&data->localData[0]->realVars[227] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[190] /* MatStm3.MW[3] variable */ + ((&data->localData[0]->realVars[227] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[188] /* MatStm3.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_377(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_373(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_368(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_379(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_374(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_369(DATA *data, threadData_t *threadData);


/*
equation index: 169
type: LINEAR

<var>MatStm3._compMasFrac[2,1]</var>
<var>MatStm3._compMasFrac[3,1]</var>
<var>MatStm3._compMasFrac[1,1]</var>
<var>MatStm3._compMasFrac[2,2]</var>
<var>MatStm3._compMasFrac[3,2]</var>
<row>
  <cell>if 101325.0 >= MatStm3.Pbubl then -MatStm3.compMasFrac[1,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,2] else -MatStm3.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,1] else MatStm3.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,1] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
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
void Flowsheet_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[205] /* MatStm3.compMasFrac[2,1] variable */,data->localData[1]->realVars[207] /* MatStm3.compMasFrac[3,1] variable */,data->localData[1]->realVars[203] /* MatStm3.compMasFrac[1,1] variable */,data->localData[1]->realVars[206] /* MatStm3.compMasFrac[2,2] variable */,data->localData[1]->realVars[208] /* MatStm3.compMasFrac[3,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 169 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,169};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 169 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[205] /* MatStm3.compMasFrac[2,1] variable */ = aux_x[0];
  data->localData[0]->realVars[207] /* MatStm3.compMasFrac[3,1] variable */ = aux_x[1];
  data->localData[0]->realVars[203] /* MatStm3.compMasFrac[1,1] variable */ = aux_x[2];
  data->localData[0]->realVars[206] /* MatStm3.compMasFrac[2,2] variable */ = aux_x[3];
  data->localData[0]->realVars[208] /* MatStm3.compMasFrac[3,2] variable */ = aux_x[4];
  TRACE_POP
}
extern void Flowsheet_eqFunction_386(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_387(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_388(DATA *data, threadData_t *threadData);


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
void Flowsheet_eqFunction_184(DATA*, threadData_t*);
void Flowsheet_eqFunction_185(DATA*, threadData_t*);
void Flowsheet_eqFunction_186(DATA*, threadData_t*);
void Flowsheet_eqFunction_187(DATA*, threadData_t*);
void Flowsheet_eqFunction_188(DATA*, threadData_t*);
void Flowsheet_eqFunction_189(DATA*, threadData_t*);
void Flowsheet_eqFunction_190(DATA*, threadData_t*);
void Flowsheet_eqFunction_191(DATA*, threadData_t*);
void Flowsheet_eqFunction_197(DATA*, threadData_t*);
void Flowsheet_eqFunction_196(DATA*, threadData_t*);
void Flowsheet_eqFunction_195(DATA*, threadData_t*);
void Flowsheet_eqFunction_194(DATA*, threadData_t*);
void Flowsheet_eqFunction_193(DATA*, threadData_t*);
void Flowsheet_eqFunction_192(DATA*, threadData_t*);
/*
equation index: 198
indexNonlinear: 2
type: NONLINEAR

vars: {MatStm1._totMolFlo[3], MatStm1._T, MatStm1._compMolFrac[3,2], MatStm1._compMolFrac[3,1], MatStm1._compMolFrac[2,1], MatStm1._compMolFrac[2,2]}
eqns: {173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 197, 196, 195, 194, 193, 192}
*/
void Flowsheet_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 198 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[91] /* MatStm1.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[15] /* MatStm1.T variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[51] /* MatStm1.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[50] /* MatStm1.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[48] /* MatStm1.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = data->localData[0]->realVars[49] /* MatStm1.compMolFrac[2,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,198};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 198 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[91] /* MatStm1.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[15] /* MatStm1.T variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[51] /* MatStm1.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[50] /* MatStm1.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[48] /* MatStm1.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  data->localData[0]->realVars[49] /* MatStm1.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  TRACE_POP
}
extern void Flowsheet_eqFunction_423(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_422(DATA *data, threadData_t *threadData);


/*
equation index: 201
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:2 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  data->localData[0]->realVars[9] /* MatStm1.MW[3] variable */ = data->modelData->realVarsData[9].attribute /* MatStm1.MW[3] variable */.start;

  data->localData[0]->realVars[8] /* MatStm1.MW[2] variable */ = data->modelData->realVarsData[8].attribute /* MatStm1.MW[2] variable */.start;

  data->localData[0]->realVars[7] /* MatStm1.MW[1] variable */ = data->modelData->realVarsData[7].attribute /* MatStm1.MW[1] variable */.start;

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 2);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp3, tmp5); $Pi += tmp4)
    {
      array_alloc_scalar_real_array(&tmp0, 3, (modelica_real)data->localData[0]->realVars[7] /* MatStm1.MW[1] variable */ + ((&data->localData[0]->realVars[46] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[8] /* MatStm1.MW[2] variable */ + ((&data->localData[0]->realVars[46] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[9] /* MatStm1.MW[3] variable */ + ((&data->localData[0]->realVars[46] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
      real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[7] /* MatStm1.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp0, &tmp2, &tmp1);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_425(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_426(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_427(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_431(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_429(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_428(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_420(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_421(DATA *data, threadData_t *threadData);


/*
equation index: 210
type: LINEAR

<var>MatStm1._compMasFrac[3,2]</var>
<var>MatStm1._compMasFrac[2,1]</var>
<var>MatStm1._compMasFrac[3,1]</var>
<var>MatStm1._compMasFrac[1,1]</var>
<var>MatStm1._compMasFrac[2,2]</var>
<row>
  <cell>if 101325.0 >= MatStm1.Pbubl then -MatStm1.compMasFrac[1,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,2] else -MatStm1.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,1] else MatStm1.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,1] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,210};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[27] /* MatStm1.compMasFrac[3,2] variable */,data->localData[1]->realVars[24] /* MatStm1.compMasFrac[2,1] variable */,data->localData[1]->realVars[26] /* MatStm1.compMasFrac[3,1] variable */,data->localData[1]->realVars[22] /* MatStm1.compMasFrac[1,1] variable */,data->localData[1]->realVars[25] /* MatStm1.compMasFrac[2,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 210 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,210};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 210 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[27] /* MatStm1.compMasFrac[3,2] variable */ = aux_x[0];
  data->localData[0]->realVars[24] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[1];
  data->localData[0]->realVars[26] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[2];
  data->localData[0]->realVars[22] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[3];
  data->localData[0]->realVars[25] /* MatStm1.compMasFrac[2,2] variable */ = aux_x[4];
  TRACE_POP
}

/*
equation index: 211
type: ALGORITHM

  (MatStm1.compMolEntr[2,2], MatStm1.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[2].AS, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tb, MatStm1.comp[2].Tc, MatStm1.T, 101325.0, MatStm1.compMolFrac[2,2], MatStm1.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  real_array tmp6;
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[37] /* MatStm1.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[82], tmp6, tmp7, data->simulationInfo->realParameter[178], data->simulationInfo->realParameter[180], data->localData[0]->realVars[15] /* MatStm1.T variable */, 101325.0, data->localData[0]->realVars[49] /* MatStm1.compMolFrac[2,2] variable */, data->localData[0]->realVars[51] /* MatStm1.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[39] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_433(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_434(DATA *data, threadData_t *threadData);


/*
equation index: 214
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, MatStm1.T, 101325.0, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[36] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[81], tmp8, tmp9, data->simulationInfo->realParameter[177], data->simulationInfo->realParameter[179], data->localData[0]->realVars[15] /* MatStm1.T variable */, 101325.0, data->localData[0]->realVars[48] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[50] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[38] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_436(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_437(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_438(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_440(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_439(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_441(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_442(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_443(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_444(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_445(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_447(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_446(DATA *data, threadData_t *threadData);


/*
equation index: 227
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[1] = 200.0
*/
void Flowsheet_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  data->localData[0]->realVars[89] /* MatStm1.totMolFlo[1] variable */ = 200.0;
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
MatStm1._P = 101325.0
*/
void Flowsheet_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  data->localData[0]->realVars[10] /* MatStm1.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  data->localData[0]->realVars[60] /* MatStm1.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
MatStm1._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->localData[0]->realVars[62] /* MatStm1.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
MatStm1._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  data->localData[0]->realVars[66] /* MatStm1.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
MatStm1._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  data->localData[0]->realVars[94] /* MatStm1.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[2] = 1.0
*/
void Flowsheet_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  data->localData[0]->realVars[61] /* MatStm1.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
MatStm1._gammaDew[2] = 1.0
*/
void Flowsheet_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  data->localData[0]->realVars[63] /* MatStm1.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
MatStm1._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  data->localData[0]->realVars[67] /* MatStm1.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
MatStm1._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->localData[0]->realVars[95] /* MatStm1.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  data->localData[0]->realVars[84] /* MatStm1.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->localData[0]->realVars[85] /* MatStm1.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  data->localData[0]->realVars[78] /* MatStm1.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->localData[0]->realVars[79] /* MatStm1.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->localData[0]->realVars[81] /* MatStm1.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->localData[0]->realVars[82] /* MatStm1.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->localData[0]->realVars[151] /* MatStm2.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
MatStm2._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->localData[0]->realVars[153] /* MatStm2.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
MatStm2._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->localData[0]->realVars[157] /* MatStm2.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
MatStm2._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->localData[0]->realVars[184] /* MatStm2.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[2] = 1.0
*/
void Flowsheet_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->localData[0]->realVars[152] /* MatStm2.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
MatStm2._gammaDew[2] = 1.0
*/
void Flowsheet_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->localData[0]->realVars[154] /* MatStm2.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
MatStm2._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->localData[0]->realVars[158] /* MatStm2.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
MatStm2._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->localData[0]->realVars[185] /* MatStm2.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->localData[0]->realVars[175] /* MatStm2.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->localData[0]->realVars[176] /* MatStm2.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->localData[0]->realVars[169] /* MatStm2.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->localData[0]->realVars[170] /* MatStm2.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->localData[0]->realVars[172] /* MatStm2.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->localData[0]->realVars[173] /* MatStm2.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
MatStm3._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->localData[0]->realVars[241] /* MatStm3.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
MatStm3._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->localData[0]->realVars[243] /* MatStm3.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
MatStm3._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->localData[0]->realVars[247] /* MatStm3.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
MatStm3._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->localData[0]->realVars[274] /* MatStm3.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
MatStm3._gammaBubl[2] = 1.0
*/
void Flowsheet_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->localData[0]->realVars[242] /* MatStm3.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
MatStm3._gammaDew[2] = 1.0
*/
void Flowsheet_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->localData[0]->realVars[244] /* MatStm3.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
MatStm3._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->localData[0]->realVars[248] /* MatStm3.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
MatStm3._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->localData[0]->realVars[275] /* MatStm3.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
MatStm3._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->localData[0]->realVars[265] /* MatStm3.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
MatStm3._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->localData[0]->realVars[266] /* MatStm3.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
MatStm3._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  data->localData[0]->realVars[259] /* MatStm3.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
MatStm3._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->localData[0]->realVars[260] /* MatStm3.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
MatStm3._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->localData[0]->realVars[262] /* MatStm3.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
MatStm3._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->localData[0]->realVars[263] /* MatStm3.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
MatStm3._P = 101325.0
*/
void Flowsheet_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->localData[0]->realVars[191] /* MatStm3.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
MatStm3._T = 290.0
*/
void Flowsheet_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->localData[0]->realVars[196] /* MatStm3.T variable */ = 290.0;
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[1] = 100.0
*/
void Flowsheet_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->localData[0]->realVars[270] /* MatStm3.totMolFlo[1] variable */ = 100.0;
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
MatStm2._P = 101325.0
*/
void Flowsheet_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->localData[0]->realVars[101] /* MatStm2.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
MatStm2._T = 310.0
*/
void Flowsheet_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  data->localData[0]->realVars[106] /* MatStm2.T variable */ = 310.0;
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[1] = 100.0
*/
void Flowsheet_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  data->localData[0]->realVars[180] /* MatStm2.totMolFlo[1] variable */ = 100.0;
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
  Flowsheet_eqFunction_279(data, threadData);
  Flowsheet_eqFunction_277(data, threadData);
  Flowsheet_eqFunction_280(data, threadData);
  Flowsheet_eqFunction_278(data, threadData);
  Flowsheet_eqFunction_86(data, threadData);
  Flowsheet_eqFunction_306(data, threadData);
  Flowsheet_eqFunction_307(data, threadData);
  Flowsheet_eqFunction_312(data, threadData);
  Flowsheet_eqFunction_311(data, threadData);
  Flowsheet_eqFunction_91(data, threadData);
  Flowsheet_eqFunction_321(data, threadData);
  Flowsheet_eqFunction_322(data, threadData);
  Flowsheet_eqFunction_309(data, threadData);
  Flowsheet_eqFunction_329(data, threadData);
  Flowsheet_eqFunction_331(data, threadData);
  Flowsheet_eqFunction_330(data, threadData);
  Flowsheet_eqFunction_308(data, threadData);
  Flowsheet_eqFunction_326(data, threadData);
  Flowsheet_eqFunction_328(data, threadData);
  Flowsheet_eqFunction_327(data, threadData);
  Flowsheet_eqFunction_102(data, threadData);
  Flowsheet_eqFunction_320(data, threadData);
  Flowsheet_eqFunction_319(data, threadData);
  Flowsheet_eqFunction_332(data, threadData);
  Flowsheet_eqFunction_334(data, threadData);
  Flowsheet_eqFunction_333(data, threadData);
  Flowsheet_eqFunction_108(data, threadData);
  Flowsheet_eqFunction_314(data, threadData);
  Flowsheet_eqFunction_323(data, threadData);
  Flowsheet_eqFunction_315(data, threadData);
  Flowsheet_eqFunction_317(data, threadData);
  Flowsheet_eqFunction_324(data, threadData);
  Flowsheet_eqFunction_316(data, threadData);
  Flowsheet_eqFunction_115(data, threadData);
  Flowsheet_eqFunction_140(data, threadData);
  Flowsheet_eqFunction_371(data, threadData);
  Flowsheet_eqFunction_372(data, threadData);
  Flowsheet_eqFunction_364(data, threadData);
  Flowsheet_eqFunction_363(data, threadData);
  Flowsheet_eqFunction_145(data, threadData);
  Flowsheet_eqFunction_376(data, threadData);
  Flowsheet_eqFunction_375(data, threadData);
  Flowsheet_eqFunction_362(data, threadData);
  Flowsheet_eqFunction_383(data, threadData);
  Flowsheet_eqFunction_385(data, threadData);
  Flowsheet_eqFunction_384(data, threadData);
  Flowsheet_eqFunction_361(data, threadData);
  Flowsheet_eqFunction_380(data, threadData);
  Flowsheet_eqFunction_382(data, threadData);
  Flowsheet_eqFunction_381(data, threadData);
  Flowsheet_eqFunction_156(data, threadData);
  Flowsheet_eqFunction_370(data, threadData);
  Flowsheet_eqFunction_366(data, threadData);
  Flowsheet_eqFunction_448(data, threadData);
  Flowsheet_eqFunction_450(data, threadData);
  Flowsheet_eqFunction_449(data, threadData);
  Flowsheet_eqFunction_162(data, threadData);
  Flowsheet_eqFunction_377(data, threadData);
  Flowsheet_eqFunction_373(data, threadData);
  Flowsheet_eqFunction_368(data, threadData);
  Flowsheet_eqFunction_379(data, threadData);
  Flowsheet_eqFunction_374(data, threadData);
  Flowsheet_eqFunction_369(data, threadData);
  Flowsheet_eqFunction_169(data, threadData);
  Flowsheet_eqFunction_386(data, threadData);
  Flowsheet_eqFunction_387(data, threadData);
  Flowsheet_eqFunction_388(data, threadData);
  Flowsheet_eqFunction_198(data, threadData);
  Flowsheet_eqFunction_423(data, threadData);
  Flowsheet_eqFunction_422(data, threadData);
  Flowsheet_eqFunction_201(data, threadData);
  Flowsheet_eqFunction_425(data, threadData);
  Flowsheet_eqFunction_426(data, threadData);
  Flowsheet_eqFunction_427(data, threadData);
  Flowsheet_eqFunction_431(data, threadData);
  Flowsheet_eqFunction_429(data, threadData);
  Flowsheet_eqFunction_428(data, threadData);
  Flowsheet_eqFunction_420(data, threadData);
  Flowsheet_eqFunction_421(data, threadData);
  Flowsheet_eqFunction_210(data, threadData);
  Flowsheet_eqFunction_211(data, threadData);
  Flowsheet_eqFunction_433(data, threadData);
  Flowsheet_eqFunction_434(data, threadData);
  Flowsheet_eqFunction_214(data, threadData);
  Flowsheet_eqFunction_436(data, threadData);
  Flowsheet_eqFunction_437(data, threadData);
  Flowsheet_eqFunction_438(data, threadData);
  Flowsheet_eqFunction_440(data, threadData);
  Flowsheet_eqFunction_439(data, threadData);
  Flowsheet_eqFunction_441(data, threadData);
  Flowsheet_eqFunction_442(data, threadData);
  Flowsheet_eqFunction_443(data, threadData);
  Flowsheet_eqFunction_444(data, threadData);
  Flowsheet_eqFunction_445(data, threadData);
  Flowsheet_eqFunction_447(data, threadData);
  Flowsheet_eqFunction_446(data, threadData);
  Flowsheet_eqFunction_227(data, threadData);
  Flowsheet_eqFunction_228(data, threadData);
  Flowsheet_eqFunction_229(data, threadData);
  Flowsheet_eqFunction_230(data, threadData);
  Flowsheet_eqFunction_231(data, threadData);
  Flowsheet_eqFunction_232(data, threadData);
  Flowsheet_eqFunction_233(data, threadData);
  Flowsheet_eqFunction_234(data, threadData);
  Flowsheet_eqFunction_235(data, threadData);
  Flowsheet_eqFunction_236(data, threadData);
  Flowsheet_eqFunction_237(data, threadData);
  Flowsheet_eqFunction_238(data, threadData);
  Flowsheet_eqFunction_239(data, threadData);
  Flowsheet_eqFunction_240(data, threadData);
  Flowsheet_eqFunction_241(data, threadData);
  Flowsheet_eqFunction_242(data, threadData);
  Flowsheet_eqFunction_243(data, threadData);
  Flowsheet_eqFunction_244(data, threadData);
  Flowsheet_eqFunction_245(data, threadData);
  Flowsheet_eqFunction_246(data, threadData);
  Flowsheet_eqFunction_247(data, threadData);
  Flowsheet_eqFunction_248(data, threadData);
  Flowsheet_eqFunction_249(data, threadData);
  Flowsheet_eqFunction_250(data, threadData);
  Flowsheet_eqFunction_251(data, threadData);
  Flowsheet_eqFunction_252(data, threadData);
  Flowsheet_eqFunction_253(data, threadData);
  Flowsheet_eqFunction_254(data, threadData);
  Flowsheet_eqFunction_255(data, threadData);
  Flowsheet_eqFunction_256(data, threadData);
  Flowsheet_eqFunction_257(data, threadData);
  Flowsheet_eqFunction_258(data, threadData);
  Flowsheet_eqFunction_259(data, threadData);
  Flowsheet_eqFunction_260(data, threadData);
  Flowsheet_eqFunction_261(data, threadData);
  Flowsheet_eqFunction_262(data, threadData);
  Flowsheet_eqFunction_263(data, threadData);
  Flowsheet_eqFunction_264(data, threadData);
  Flowsheet_eqFunction_265(data, threadData);
  Flowsheet_eqFunction_266(data, threadData);
  Flowsheet_eqFunction_267(data, threadData);
  Flowsheet_eqFunction_268(data, threadData);
  Flowsheet_eqFunction_269(data, threadData);
  Flowsheet_eqFunction_270(data, threadData);
  Flowsheet_eqFunction_271(data, threadData);
  Flowsheet_eqFunction_272(data, threadData);
  Flowsheet_eqFunction_273(data, threadData);
  Flowsheet_eqFunction_274(data, threadData);
  Flowsheet_eqFunction_275(data, threadData);
  Flowsheet_eqFunction_276(data, threadData);
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

