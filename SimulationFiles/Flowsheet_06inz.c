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
MatStm1._resMolSpHeat[1] = 0.0
*/
void Flowsheet_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[225] /* MatStm1.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[1] = 0.0
*/
void Flowsheet_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[219] /* MatStm1.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[1] = 0.0
*/
void Flowsheet_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[222] /* MatStm1.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[1] = 0.0
*/
void Flowsheet_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[407] /* MatStm2.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[1] = 0.0
*/
void Flowsheet_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[401] /* MatStm2.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[1] = 0.0
*/
void Flowsheet_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[404] /* MatStm2.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
MatStm3._resMolSpHeat[1] = 0.0
*/
void Flowsheet_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[590] /* MatStm3.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
MatStm3._resMolEnth[1] = 0.0
*/
void Flowsheet_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[584] /* MatStm3.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
MatStm3._resMolEntr[1] = 0.0
*/
void Flowsheet_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[587] /* MatStm3.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
MatStm3._tau[4,4] = exp((-MatStm3.a[4,4]) / 310.0)
*/
void Flowsheet_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[614] /* MatStm3.tau[4,4] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[593]),310.0,"310.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
MatStm3._tau[4,3] = exp((-MatStm3.a[4,3]) / 310.0)
*/
void Flowsheet_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[613] /* MatStm3.tau[4,3] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[592]),310.0,"310.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
MatStm3._tau[4,2] = exp((-MatStm3.a[4,2]) / 310.0)
*/
void Flowsheet_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[612] /* MatStm3.tau[4,2] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[591]),310.0,"310.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
MatStm3._tau[4,1] = exp((-MatStm3.a[4,1]) / 310.0)
*/
void Flowsheet_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[611] /* MatStm3.tau[4,1] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[590]),310.0,"310.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
MatStm3._tau[3,4] = exp((-MatStm3.a[3,4]) / 310.0)
*/
void Flowsheet_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[610] /* MatStm3.tau[3,4] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[589]),310.0,"310.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
MatStm3._tau[3,3] = exp((-MatStm3.a[3,3]) / 310.0)
*/
void Flowsheet_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[609] /* MatStm3.tau[3,3] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[588]),310.0,"310.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
MatStm3._tau[3,2] = exp((-MatStm3.a[3,2]) / 310.0)
*/
void Flowsheet_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[608] /* MatStm3.tau[3,2] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[587]),310.0,"310.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
MatStm3._tau[3,1] = exp((-MatStm3.a[3,1]) / 310.0)
*/
void Flowsheet_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[607] /* MatStm3.tau[3,1] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[586]),310.0,"310.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
MatStm3._tau[2,4] = exp((-MatStm3.a[2,4]) / 310.0)
*/
void Flowsheet_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[606] /* MatStm3.tau[2,4] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[585]),310.0,"310.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
MatStm3._tau[2,3] = exp((-MatStm3.a[2,3]) / 310.0)
*/
void Flowsheet_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[605] /* MatStm3.tau[2,3] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[584]),310.0,"310.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
MatStm3._tau[2,2] = exp((-MatStm3.a[2,2]) / 310.0)
*/
void Flowsheet_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[604] /* MatStm3.tau[2,2] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[583]),310.0,"310.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
MatStm3._tau[2,1] = exp((-MatStm3.a[2,1]) / 310.0)
*/
void Flowsheet_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[603] /* MatStm3.tau[2,1] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[582]),310.0,"310.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
MatStm3._tau[1,4] = exp((-MatStm3.a[1,4]) / 310.0)
*/
void Flowsheet_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[602] /* MatStm3.tau[1,4] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[581]),310.0,"310.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
MatStm3._tau[1,3] = exp((-MatStm3.a[1,3]) / 310.0)
*/
void Flowsheet_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[601] /* MatStm3.tau[1,3] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[580]),310.0,"310.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
MatStm3._tau[1,2] = exp((-MatStm3.a[1,2]) / 310.0)
*/
void Flowsheet_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[600] /* MatStm3.tau[1,2] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[579]),310.0,"310.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
MatStm3._tau[1,1] = exp((-MatStm3.a[1,1]) / 310.0)
*/
void Flowsheet_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[599] /* MatStm3.tau[1,1] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[578]),310.0,"310.0",equationIndexes));
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
MatStm3._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm3.comp[2].VP[1], MatStm3.comp[2].VP[2], MatStm3.comp[2].VP[3], MatStm3.comp[2].VP[4], MatStm3.comp[2].VP[5], MatStm3.comp[2].VP[6]}, 310.0)
*/
void Flowsheet_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[708], (modelica_real)data->simulationInfo->realParameter[709], (modelica_real)data->simulationInfo->realParameter[710], (modelica_real)data->simulationInfo->realParameter[711], (modelica_real)data->simulationInfo->realParameter[712], (modelica_real)data->simulationInfo->realParameter[713]);
  data->localData[0]->realVars[483] /* MatStm3.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, 310.0);
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
MatStm3._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm3.comp[1].VP[1], MatStm3.comp[1].VP[2], MatStm3.comp[1].VP[3], MatStm3.comp[1].VP[4], MatStm3.comp[1].VP[5], MatStm3.comp[1].VP[6]}, 310.0)
*/
void Flowsheet_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[702], (modelica_real)data->simulationInfo->realParameter[703], (modelica_real)data->simulationInfo->realParameter[704], (modelica_real)data->simulationInfo->realParameter[705], (modelica_real)data->simulationInfo->realParameter[706], (modelica_real)data->simulationInfo->realParameter[707]);
  data->localData[0]->realVars[482] /* MatStm3.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp1, 310.0);
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm3.comp[2].SH, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tc, 310.0)
*/
void Flowsheet_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[720], (modelica_real)data->simulationInfo->realParameter[721], (modelica_real)data->simulationInfo->realParameter[722], (modelica_real)data->simulationInfo->realParameter[723], (modelica_real)data->simulationInfo->realParameter[724], (modelica_real)data->simulationInfo->realParameter[725]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[620], (modelica_real)data->simulationInfo->realParameter[621], (modelica_real)data->simulationInfo->realParameter[622], (modelica_real)data->simulationInfo->realParameter[623], (modelica_real)data->simulationInfo->realParameter[624], (modelica_real)data->simulationInfo->realParameter[625]);
  data->localData[0]->realVars[514] /* MatStm3.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[685], tmp2, tmp3, data->simulationInfo->realParameter[695], 310.0);
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm3.comp[2].SH, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tc, 310.0)
*/
void Flowsheet_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  real_array tmp4;
  real_array tmp5;
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[720], (modelica_real)data->simulationInfo->realParameter[721], (modelica_real)data->simulationInfo->realParameter[722], (modelica_real)data->simulationInfo->realParameter[723], (modelica_real)data->simulationInfo->realParameter[724], (modelica_real)data->simulationInfo->realParameter[725]);
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[620], (modelica_real)data->simulationInfo->realParameter[621], (modelica_real)data->simulationInfo->realParameter[622], (modelica_real)data->simulationInfo->realParameter[623], (modelica_real)data->simulationInfo->realParameter[624], (modelica_real)data->simulationInfo->realParameter[625]);
  data->localData[0]->realVars[512] /* MatStm3.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[685], tmp4, tmp5, data->simulationInfo->realParameter[695], 310.0);
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, 310.0)
*/
void Flowsheet_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  real_array tmp6;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[720], (modelica_real)data->simulationInfo->realParameter[721], (modelica_real)data->simulationInfo->realParameter[722], (modelica_real)data->simulationInfo->realParameter[723], (modelica_real)data->simulationInfo->realParameter[724], (modelica_real)data->simulationInfo->realParameter[725]);
  data->localData[0]->realVars[538] /* MatStm3.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp6, 310.0);
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm3.comp[2].LiqCp[1], MatStm3.comp[2].LiqCp[2], MatStm3.comp[2].LiqCp[3], MatStm3.comp[2].LiqCp[4], MatStm3.comp[2].LiqCp[5], MatStm3.comp[2].LiqCp[6]}, 310.0)
*/
void Flowsheet_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[636], (modelica_real)data->simulationInfo->realParameter[637], (modelica_real)data->simulationInfo->realParameter[638], (modelica_real)data->simulationInfo->realParameter[639], (modelica_real)data->simulationInfo->realParameter[640], (modelica_real)data->simulationInfo->realParameter[641]);
  data->localData[0]->realVars[536] /* MatStm3.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp7, 310.0);
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm3.comp[1].SH, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tc, 310.0)
*/
void Flowsheet_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[714], (modelica_real)data->simulationInfo->realParameter[715], (modelica_real)data->simulationInfo->realParameter[716], (modelica_real)data->simulationInfo->realParameter[717], (modelica_real)data->simulationInfo->realParameter[718], (modelica_real)data->simulationInfo->realParameter[719]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[614], (modelica_real)data->simulationInfo->realParameter[615], (modelica_real)data->simulationInfo->realParameter[616], (modelica_real)data->simulationInfo->realParameter[617], (modelica_real)data->simulationInfo->realParameter[618], (modelica_real)data->simulationInfo->realParameter[619]);
  data->localData[0]->realVars[513] /* MatStm3.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[684], tmp8, tmp9, data->simulationInfo->realParameter[694], 310.0);
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm3.comp[1].SH, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tc, 310.0)
*/
void Flowsheet_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[714], (modelica_real)data->simulationInfo->realParameter[715], (modelica_real)data->simulationInfo->realParameter[716], (modelica_real)data->simulationInfo->realParameter[717], (modelica_real)data->simulationInfo->realParameter[718], (modelica_real)data->simulationInfo->realParameter[719]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[614], (modelica_real)data->simulationInfo->realParameter[615], (modelica_real)data->simulationInfo->realParameter[616], (modelica_real)data->simulationInfo->realParameter[617], (modelica_real)data->simulationInfo->realParameter[618], (modelica_real)data->simulationInfo->realParameter[619]);
  data->localData[0]->realVars[511] /* MatStm3.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[684], tmp10, tmp11, data->simulationInfo->realParameter[694], 310.0);
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, 310.0)
*/
void Flowsheet_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  real_array tmp12;
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[714], (modelica_real)data->simulationInfo->realParameter[715], (modelica_real)data->simulationInfo->realParameter[716], (modelica_real)data->simulationInfo->realParameter[717], (modelica_real)data->simulationInfo->realParameter[718], (modelica_real)data->simulationInfo->realParameter[719]);
  data->localData[0]->realVars[537] /* MatStm3.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp12, 310.0);
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm3.comp[1].LiqCp[1], MatStm3.comp[1].LiqCp[2], MatStm3.comp[1].LiqCp[3], MatStm3.comp[1].LiqCp[4], MatStm3.comp[1].LiqCp[5], MatStm3.comp[1].LiqCp[6]}, 310.0)
*/
void Flowsheet_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)data->simulationInfo->realParameter[630], (modelica_real)data->simulationInfo->realParameter[631], (modelica_real)data->simulationInfo->realParameter[632], (modelica_real)data->simulationInfo->realParameter[633], (modelica_real)data->simulationInfo->realParameter[634], (modelica_real)data->simulationInfo->realParameter[635]);
  data->localData[0]->realVars[535] /* MatStm3.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp13, 310.0);
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
MatStm1._tau[4,4] = exp((-0.003125) * MatStm1.a[4,4])
*/
void Flowsheet_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[249] /* MatStm1.tau[4,4] variable */ = exp((-0.003125) * (data->simulationInfo->realParameter[197]));
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
MatStm1._tau[4,3] = exp((-0.003125) * MatStm1.a[4,3])
*/
void Flowsheet_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[248] /* MatStm1.tau[4,3] variable */ = exp((-0.003125) * (data->simulationInfo->realParameter[196]));
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
MatStm1._tau[4,2] = exp((-0.003125) * MatStm1.a[4,2])
*/
void Flowsheet_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->localData[0]->realVars[247] /* MatStm1.tau[4,2] variable */ = exp((-0.003125) * (data->simulationInfo->realParameter[195]));
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
MatStm1._tau[4,1] = exp((-0.003125) * MatStm1.a[4,1])
*/
void Flowsheet_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[246] /* MatStm1.tau[4,1] variable */ = exp((-0.003125) * (data->simulationInfo->realParameter[194]));
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
MatStm1._tau[3,4] = exp((-0.003125) * MatStm1.a[3,4])
*/
void Flowsheet_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[245] /* MatStm1.tau[3,4] variable */ = exp((-0.003125) * (data->simulationInfo->realParameter[193]));
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
MatStm1._tau[3,3] = exp((-0.003125) * MatStm1.a[3,3])
*/
void Flowsheet_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[244] /* MatStm1.tau[3,3] variable */ = exp((-0.003125) * (data->simulationInfo->realParameter[192]));
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
MatStm1._tau[3,2] = exp((-0.003125) * MatStm1.a[3,2])
*/
void Flowsheet_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->localData[0]->realVars[243] /* MatStm1.tau[3,2] variable */ = exp((-0.003125) * (data->simulationInfo->realParameter[191]));
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
MatStm1._tau[3,1] = exp((-0.003125) * MatStm1.a[3,1])
*/
void Flowsheet_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[242] /* MatStm1.tau[3,1] variable */ = exp((-0.003125) * (data->simulationInfo->realParameter[190]));
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
MatStm1._tau[2,4] = exp((-0.003125) * MatStm1.a[2,4])
*/
void Flowsheet_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->localData[0]->realVars[241] /* MatStm1.tau[2,4] variable */ = exp((-0.003125) * (data->simulationInfo->realParameter[189]));
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
MatStm1._tau[2,3] = exp((-0.003125) * MatStm1.a[2,3])
*/
void Flowsheet_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->localData[0]->realVars[240] /* MatStm1.tau[2,3] variable */ = exp((-0.003125) * (data->simulationInfo->realParameter[188]));
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
MatStm1._tau[2,2] = exp((-0.003125) * MatStm1.a[2,2])
*/
void Flowsheet_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->localData[0]->realVars[239] /* MatStm1.tau[2,2] variable */ = exp((-0.003125) * (data->simulationInfo->realParameter[187]));
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
MatStm1._tau[2,1] = exp((-0.003125) * MatStm1.a[2,1])
*/
void Flowsheet_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->realVars[238] /* MatStm1.tau[2,1] variable */ = exp((-0.003125) * (data->simulationInfo->realParameter[186]));
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
MatStm1._tau[1,4] = exp((-0.003125) * MatStm1.a[1,4])
*/
void Flowsheet_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->realVars[237] /* MatStm1.tau[1,4] variable */ = exp((-0.003125) * (data->simulationInfo->realParameter[185]));
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
MatStm1._tau[1,3] = exp((-0.003125) * MatStm1.a[1,3])
*/
void Flowsheet_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[236] /* MatStm1.tau[1,3] variable */ = exp((-0.003125) * (data->simulationInfo->realParameter[184]));
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
MatStm1._tau[1,2] = exp((-0.003125) * MatStm1.a[1,2])
*/
void Flowsheet_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[235] /* MatStm1.tau[1,2] variable */ = exp((-0.003125) * (data->simulationInfo->realParameter[183]));
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
MatStm1._tau[1,1] = exp((-0.003125) * MatStm1.a[1,1])
*/
void Flowsheet_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  data->localData[0]->realVars[234] /* MatStm1.tau[1,1] variable */ = exp((-0.003125) * (data->simulationInfo->realParameter[182]));
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
MatStm1._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[2].VP[1], MatStm1.comp[2].VP[2], MatStm1.comp[2].VP[3], MatStm1.comp[2].VP[4], MatStm1.comp[2].VP[5], MatStm1.comp[2].VP[6]}, 320.0)
*/
void Flowsheet_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  real_array tmp14;
  array_alloc_scalar_real_array(&tmp14, 6, (modelica_real)data->simulationInfo->realParameter[312], (modelica_real)data->simulationInfo->realParameter[313], (modelica_real)data->simulationInfo->realParameter[314], (modelica_real)data->simulationInfo->realParameter[315], (modelica_real)data->simulationInfo->realParameter[316], (modelica_real)data->simulationInfo->realParameter[317]);
  data->localData[0]->realVars[118] /* MatStm1.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp14, 320.0);
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
MatStm1._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[1].VP[1], MatStm1.comp[1].VP[2], MatStm1.comp[1].VP[3], MatStm1.comp[1].VP[4], MatStm1.comp[1].VP[5], MatStm1.comp[1].VP[6]}, 320.0)
*/
void Flowsheet_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  real_array tmp15;
  array_alloc_scalar_real_array(&tmp15, 6, (modelica_real)data->simulationInfo->realParameter[306], (modelica_real)data->simulationInfo->realParameter[307], (modelica_real)data->simulationInfo->realParameter[308], (modelica_real)data->simulationInfo->realParameter[309], (modelica_real)data->simulationInfo->realParameter[310], (modelica_real)data->simulationInfo->realParameter[311]);
  data->localData[0]->realVars[117] /* MatStm1.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp15, 320.0);
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, 320.0)
*/
void Flowsheet_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  real_array tmp16;
  real_array tmp17;
  array_alloc_scalar_real_array(&tmp16, 6, (modelica_real)data->simulationInfo->realParameter[324], (modelica_real)data->simulationInfo->realParameter[325], (modelica_real)data->simulationInfo->realParameter[326], (modelica_real)data->simulationInfo->realParameter[327], (modelica_real)data->simulationInfo->realParameter[328], (modelica_real)data->simulationInfo->realParameter[329]);
  array_alloc_scalar_real_array(&tmp17, 6, (modelica_real)data->simulationInfo->realParameter[224], (modelica_real)data->simulationInfo->realParameter[225], (modelica_real)data->simulationInfo->realParameter[226], (modelica_real)data->simulationInfo->realParameter[227], (modelica_real)data->simulationInfo->realParameter[228], (modelica_real)data->simulationInfo->realParameter[229]);
  data->localData[0]->realVars[149] /* MatStm1.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[289], tmp16, tmp17, data->simulationInfo->realParameter[299], 320.0);
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, 320.0)
*/
void Flowsheet_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  real_array tmp18;
  real_array tmp19;
  array_alloc_scalar_real_array(&tmp18, 6, (modelica_real)data->simulationInfo->realParameter[324], (modelica_real)data->simulationInfo->realParameter[325], (modelica_real)data->simulationInfo->realParameter[326], (modelica_real)data->simulationInfo->realParameter[327], (modelica_real)data->simulationInfo->realParameter[328], (modelica_real)data->simulationInfo->realParameter[329]);
  array_alloc_scalar_real_array(&tmp19, 6, (modelica_real)data->simulationInfo->realParameter[224], (modelica_real)data->simulationInfo->realParameter[225], (modelica_real)data->simulationInfo->realParameter[226], (modelica_real)data->simulationInfo->realParameter[227], (modelica_real)data->simulationInfo->realParameter[228], (modelica_real)data->simulationInfo->realParameter[229]);
  data->localData[0]->realVars[147] /* MatStm1.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[289], tmp18, tmp19, data->simulationInfo->realParameter[299], 320.0);
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, 320.0)
*/
void Flowsheet_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  real_array tmp20;
  array_alloc_scalar_real_array(&tmp20, 6, (modelica_real)data->simulationInfo->realParameter[324], (modelica_real)data->simulationInfo->realParameter[325], (modelica_real)data->simulationInfo->realParameter[326], (modelica_real)data->simulationInfo->realParameter[327], (modelica_real)data->simulationInfo->realParameter[328], (modelica_real)data->simulationInfo->realParameter[329]);
  data->localData[0]->realVars[173] /* MatStm1.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp20, 320.0);
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[2].LiqCp[1], MatStm1.comp[2].LiqCp[2], MatStm1.comp[2].LiqCp[3], MatStm1.comp[2].LiqCp[4], MatStm1.comp[2].LiqCp[5], MatStm1.comp[2].LiqCp[6]}, 320.0)
*/
void Flowsheet_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  real_array tmp21;
  array_alloc_scalar_real_array(&tmp21, 6, (modelica_real)data->simulationInfo->realParameter[240], (modelica_real)data->simulationInfo->realParameter[241], (modelica_real)data->simulationInfo->realParameter[242], (modelica_real)data->simulationInfo->realParameter[243], (modelica_real)data->simulationInfo->realParameter[244], (modelica_real)data->simulationInfo->realParameter[245]);
  data->localData[0]->realVars[171] /* MatStm1.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp21, 320.0);
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, 320.0)
*/
void Flowsheet_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  real_array tmp22;
  real_array tmp23;
  array_alloc_scalar_real_array(&tmp22, 6, (modelica_real)data->simulationInfo->realParameter[318], (modelica_real)data->simulationInfo->realParameter[319], (modelica_real)data->simulationInfo->realParameter[320], (modelica_real)data->simulationInfo->realParameter[321], (modelica_real)data->simulationInfo->realParameter[322], (modelica_real)data->simulationInfo->realParameter[323]);
  array_alloc_scalar_real_array(&tmp23, 6, (modelica_real)data->simulationInfo->realParameter[218], (modelica_real)data->simulationInfo->realParameter[219], (modelica_real)data->simulationInfo->realParameter[220], (modelica_real)data->simulationInfo->realParameter[221], (modelica_real)data->simulationInfo->realParameter[222], (modelica_real)data->simulationInfo->realParameter[223]);
  data->localData[0]->realVars[148] /* MatStm1.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[288], tmp22, tmp23, data->simulationInfo->realParameter[298], 320.0);
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, 320.0)
*/
void Flowsheet_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  real_array tmp24;
  real_array tmp25;
  array_alloc_scalar_real_array(&tmp24, 6, (modelica_real)data->simulationInfo->realParameter[318], (modelica_real)data->simulationInfo->realParameter[319], (modelica_real)data->simulationInfo->realParameter[320], (modelica_real)data->simulationInfo->realParameter[321], (modelica_real)data->simulationInfo->realParameter[322], (modelica_real)data->simulationInfo->realParameter[323]);
  array_alloc_scalar_real_array(&tmp25, 6, (modelica_real)data->simulationInfo->realParameter[218], (modelica_real)data->simulationInfo->realParameter[219], (modelica_real)data->simulationInfo->realParameter[220], (modelica_real)data->simulationInfo->realParameter[221], (modelica_real)data->simulationInfo->realParameter[222], (modelica_real)data->simulationInfo->realParameter[223]);
  data->localData[0]->realVars[146] /* MatStm1.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[288], tmp24, tmp25, data->simulationInfo->realParameter[298], 320.0);
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, 320.0)
*/
void Flowsheet_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  real_array tmp26;
  array_alloc_scalar_real_array(&tmp26, 6, (modelica_real)data->simulationInfo->realParameter[318], (modelica_real)data->simulationInfo->realParameter[319], (modelica_real)data->simulationInfo->realParameter[320], (modelica_real)data->simulationInfo->realParameter[321], (modelica_real)data->simulationInfo->realParameter[322], (modelica_real)data->simulationInfo->realParameter[323]);
  data->localData[0]->realVars[172] /* MatStm1.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp26, 320.0);
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[1].LiqCp[1], MatStm1.comp[1].LiqCp[2], MatStm1.comp[1].LiqCp[3], MatStm1.comp[1].LiqCp[4], MatStm1.comp[1].LiqCp[5], MatStm1.comp[1].LiqCp[6]}, 320.0)
*/
void Flowsheet_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  real_array tmp27;
  array_alloc_scalar_real_array(&tmp27, 6, (modelica_real)data->simulationInfo->realParameter[234], (modelica_real)data->simulationInfo->realParameter[235], (modelica_real)data->simulationInfo->realParameter[236], (modelica_real)data->simulationInfo->realParameter[237], (modelica_real)data->simulationInfo->realParameter[238], (modelica_real)data->simulationInfo->realParameter[239]);
  data->localData[0]->realVars[170] /* MatStm1.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp27, 320.0);
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
MatStm1._q[1] = MatStm1.V[1,1] * MatStm1.Q[1,1] + MatStm1.V[1,2] * MatStm1.Q[1,2] + MatStm1.V[1,3] * MatStm1.Q[1,3] + MatStm1.V[1,4] * MatStm1.Q[1,4]
*/
void Flowsheet_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[215] /* MatStm1.q[1] variable */ = (data->simulationInfo->realParameter[174]) * (data->simulationInfo->realParameter[158]) + (data->simulationInfo->realParameter[175]) * (data->simulationInfo->realParameter[159]) + (data->simulationInfo->realParameter[176]) * (data->simulationInfo->realParameter[160]) + (data->simulationInfo->realParameter[177]) * (data->simulationInfo->realParameter[161]);
  TRACE_POP
}

/*
equation index: 63
type: SIMPLE_ASSIGN
MatStm1._e[1,1] = MatStm1.V[1,1] * MatStm1.Q[1,1] / MatStm1.q[1]
*/
void Flowsheet_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */ = (data->simulationInfo->realParameter[174]) * (DIVISION_SIM(data->simulationInfo->realParameter[158],data->localData[0]->realVars[215] /* MatStm1.q[1] variable */,"MatStm1.q[1]",equationIndexes));
  TRACE_POP
}

/*
equation index: 64
type: SIMPLE_ASSIGN
MatStm1._e[2,1] = MatStm1.V[1,2] * MatStm1.Q[1,2] / MatStm1.q[1]
*/
void Flowsheet_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[178] /* MatStm1.e[2,1] variable */ = (data->simulationInfo->realParameter[175]) * (DIVISION_SIM(data->simulationInfo->realParameter[159],data->localData[0]->realVars[215] /* MatStm1.q[1] variable */,"MatStm1.q[1]",equationIndexes));
  TRACE_POP
}

/*
equation index: 65
type: SIMPLE_ASSIGN
MatStm1._e[3,1] = MatStm1.V[1,3] * MatStm1.Q[1,3] / MatStm1.q[1]
*/
void Flowsheet_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[180] /* MatStm1.e[3,1] variable */ = (data->simulationInfo->realParameter[176]) * (DIVISION_SIM(data->simulationInfo->realParameter[160],data->localData[0]->realVars[215] /* MatStm1.q[1] variable */,"MatStm1.q[1]",equationIndexes));
  TRACE_POP
}

/*
equation index: 66
type: SIMPLE_ASSIGN
MatStm1._e[4,1] = MatStm1.V[1,4] * MatStm1.Q[1,4] / MatStm1.q[1]
*/
void Flowsheet_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[182] /* MatStm1.e[4,1] variable */ = (data->simulationInfo->realParameter[177]) * (DIVISION_SIM(data->simulationInfo->realParameter[161],data->localData[0]->realVars[215] /* MatStm1.q[1] variable */,"MatStm1.q[1]",equationIndexes));
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
MatStm1._r[1] = MatStm1.V[1,1] * MatStm1.R[1,1] + MatStm1.V[1,2] * MatStm1.R[1,2] + MatStm1.V[1,3] * MatStm1.R[1,3] + MatStm1.V[1,4] * MatStm1.R[1,4]
*/
void Flowsheet_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[217] /* MatStm1.r[1] variable */ = (data->simulationInfo->realParameter[174]) * (data->simulationInfo->realParameter[166]) + (data->simulationInfo->realParameter[175]) * (data->simulationInfo->realParameter[167]) + (data->simulationInfo->realParameter[176]) * (data->simulationInfo->realParameter[168]) + (data->simulationInfo->realParameter[177]) * (data->simulationInfo->realParameter[169]);
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
MatStm1._q[2] = MatStm1.V[2,1] * MatStm1.Q[2,1] + MatStm1.V[2,2] * MatStm1.Q[2,2] + MatStm1.V[2,3] * MatStm1.Q[2,3] + MatStm1.V[2,4] * MatStm1.Q[2,4]
*/
void Flowsheet_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[216] /* MatStm1.q[2] variable */ = (data->simulationInfo->realParameter[178]) * (data->simulationInfo->realParameter[162]) + (data->simulationInfo->realParameter[179]) * (data->simulationInfo->realParameter[163]) + (data->simulationInfo->realParameter[180]) * (data->simulationInfo->realParameter[164]) + (data->simulationInfo->realParameter[181]) * (data->simulationInfo->realParameter[165]);
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
MatStm1._e[1,2] = MatStm1.V[2,1] * MatStm1.Q[2,1] / MatStm1.q[2]
*/
void Flowsheet_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->localData[0]->realVars[177] /* MatStm1.e[1,2] variable */ = (data->simulationInfo->realParameter[178]) * (DIVISION_SIM(data->simulationInfo->realParameter[162],data->localData[0]->realVars[216] /* MatStm1.q[2] variable */,"MatStm1.q[2]",equationIndexes));
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
MatStm1._e[2,2] = MatStm1.V[2,2] * MatStm1.Q[2,2] / MatStm1.q[2]
*/
void Flowsheet_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->localData[0]->realVars[179] /* MatStm1.e[2,2] variable */ = (data->simulationInfo->realParameter[179]) * (DIVISION_SIM(data->simulationInfo->realParameter[163],data->localData[0]->realVars[216] /* MatStm1.q[2] variable */,"MatStm1.q[2]",equationIndexes));
  TRACE_POP
}

/*
equation index: 71
type: SIMPLE_ASSIGN
MatStm1._e[3,2] = MatStm1.V[2,3] * MatStm1.Q[2,3] / MatStm1.q[2]
*/
void Flowsheet_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->localData[0]->realVars[181] /* MatStm1.e[3,2] variable */ = (data->simulationInfo->realParameter[180]) * (DIVISION_SIM(data->simulationInfo->realParameter[164],data->localData[0]->realVars[216] /* MatStm1.q[2] variable */,"MatStm1.q[2]",equationIndexes));
  TRACE_POP
}

/*
equation index: 72
type: SIMPLE_ASSIGN
MatStm1._e[4,2] = MatStm1.V[2,4] * MatStm1.Q[2,4] / MatStm1.q[2]
*/
void Flowsheet_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[183] /* MatStm1.e[4,2] variable */ = (data->simulationInfo->realParameter[181]) * (DIVISION_SIM(data->simulationInfo->realParameter[165],data->localData[0]->realVars[216] /* MatStm1.q[2] variable */,"MatStm1.q[2]",equationIndexes));
  TRACE_POP
}

/*
equation index: 73
type: SIMPLE_ASSIGN
MatStm1._r[2] = MatStm1.V[2,1] * MatStm1.R[2,1] + MatStm1.V[2,2] * MatStm1.R[2,2] + MatStm1.V[2,3] * MatStm1.R[2,3] + MatStm1.V[2,4] * MatStm1.R[2,4]
*/
void Flowsheet_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[218] /* MatStm1.r[2] variable */ = (data->simulationInfo->realParameter[178]) * (data->simulationInfo->realParameter[170]) + (data->simulationInfo->realParameter[179]) * (data->simulationInfo->realParameter[171]) + (data->simulationInfo->realParameter[180]) * (data->simulationInfo->realParameter[172]) + (data->simulationInfo->realParameter[181]) * (data->simulationInfo->realParameter[173]);
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
MatStm2._q[1] = MatStm2.V[1,1] * MatStm2.Q[1,1] + MatStm2.V[1,2] * MatStm2.Q[1,2] + MatStm2.V[1,3] * MatStm2.Q[1,3] + MatStm2.V[1,4] * MatStm2.Q[1,4]
*/
void Flowsheet_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[397] /* MatStm2.q[1] variable */ = (data->simulationInfo->realParameter[372]) * (data->simulationInfo->realParameter[356]) + (data->simulationInfo->realParameter[373]) * (data->simulationInfo->realParameter[357]) + (data->simulationInfo->realParameter[374]) * (data->simulationInfo->realParameter[358]) + (data->simulationInfo->realParameter[375]) * (data->simulationInfo->realParameter[359]);
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
MatStm2._e[1,1] = MatStm2.V[1,1] * MatStm2.Q[1,1] / MatStm2.q[1]
*/
void Flowsheet_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */ = (data->simulationInfo->realParameter[372]) * (DIVISION_SIM(data->simulationInfo->realParameter[356],data->localData[0]->realVars[397] /* MatStm2.q[1] variable */,"MatStm2.q[1]",equationIndexes));
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
MatStm2._e[2,1] = MatStm2.V[1,2] * MatStm2.Q[1,2] / MatStm2.q[1]
*/
void Flowsheet_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[360] /* MatStm2.e[2,1] variable */ = (data->simulationInfo->realParameter[373]) * (DIVISION_SIM(data->simulationInfo->realParameter[357],data->localData[0]->realVars[397] /* MatStm2.q[1] variable */,"MatStm2.q[1]",equationIndexes));
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
MatStm2._e[3,1] = MatStm2.V[1,3] * MatStm2.Q[1,3] / MatStm2.q[1]
*/
void Flowsheet_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->localData[0]->realVars[362] /* MatStm2.e[3,1] variable */ = (data->simulationInfo->realParameter[374]) * (DIVISION_SIM(data->simulationInfo->realParameter[358],data->localData[0]->realVars[397] /* MatStm2.q[1] variable */,"MatStm2.q[1]",equationIndexes));
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
MatStm2._e[4,1] = MatStm2.V[1,4] * MatStm2.Q[1,4] / MatStm2.q[1]
*/
void Flowsheet_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  data->localData[0]->realVars[364] /* MatStm2.e[4,1] variable */ = (data->simulationInfo->realParameter[375]) * (DIVISION_SIM(data->simulationInfo->realParameter[359],data->localData[0]->realVars[397] /* MatStm2.q[1] variable */,"MatStm2.q[1]",equationIndexes));
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
MatStm2._r[1] = MatStm2.V[1,1] * MatStm2.R[1,1] + MatStm2.V[1,2] * MatStm2.R[1,2] + MatStm2.V[1,3] * MatStm2.R[1,3] + MatStm2.V[1,4] * MatStm2.R[1,4]
*/
void Flowsheet_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  data->localData[0]->realVars[399] /* MatStm2.r[1] variable */ = (data->simulationInfo->realParameter[372]) * (data->simulationInfo->realParameter[364]) + (data->simulationInfo->realParameter[373]) * (data->simulationInfo->realParameter[365]) + (data->simulationInfo->realParameter[374]) * (data->simulationInfo->realParameter[366]) + (data->simulationInfo->realParameter[375]) * (data->simulationInfo->realParameter[367]);
  TRACE_POP
}

/*
equation index: 80
type: SIMPLE_ASSIGN
MatStm2._q[2] = MatStm2.V[2,1] * MatStm2.Q[2,1] + MatStm2.V[2,2] * MatStm2.Q[2,2] + MatStm2.V[2,3] * MatStm2.Q[2,3] + MatStm2.V[2,4] * MatStm2.Q[2,4]
*/
void Flowsheet_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  data->localData[0]->realVars[398] /* MatStm2.q[2] variable */ = (data->simulationInfo->realParameter[376]) * (data->simulationInfo->realParameter[360]) + (data->simulationInfo->realParameter[377]) * (data->simulationInfo->realParameter[361]) + (data->simulationInfo->realParameter[378]) * (data->simulationInfo->realParameter[362]) + (data->simulationInfo->realParameter[379]) * (data->simulationInfo->realParameter[363]);
  TRACE_POP
}

/*
equation index: 81
type: SIMPLE_ASSIGN
MatStm2._e[1,2] = MatStm2.V[2,1] * MatStm2.Q[2,1] / MatStm2.q[2]
*/
void Flowsheet_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  data->localData[0]->realVars[359] /* MatStm2.e[1,2] variable */ = (data->simulationInfo->realParameter[376]) * (DIVISION_SIM(data->simulationInfo->realParameter[360],data->localData[0]->realVars[398] /* MatStm2.q[2] variable */,"MatStm2.q[2]",equationIndexes));
  TRACE_POP
}

/*
equation index: 82
type: SIMPLE_ASSIGN
MatStm2._e[2,2] = MatStm2.V[2,2] * MatStm2.Q[2,2] / MatStm2.q[2]
*/
void Flowsheet_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  data->localData[0]->realVars[361] /* MatStm2.e[2,2] variable */ = (data->simulationInfo->realParameter[377]) * (DIVISION_SIM(data->simulationInfo->realParameter[361],data->localData[0]->realVars[398] /* MatStm2.q[2] variable */,"MatStm2.q[2]",equationIndexes));
  TRACE_POP
}

/*
equation index: 83
type: SIMPLE_ASSIGN
MatStm2._e[3,2] = MatStm2.V[2,3] * MatStm2.Q[2,3] / MatStm2.q[2]
*/
void Flowsheet_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  data->localData[0]->realVars[363] /* MatStm2.e[3,2] variable */ = (data->simulationInfo->realParameter[378]) * (DIVISION_SIM(data->simulationInfo->realParameter[362],data->localData[0]->realVars[398] /* MatStm2.q[2] variable */,"MatStm2.q[2]",equationIndexes));
  TRACE_POP
}

/*
equation index: 84
type: SIMPLE_ASSIGN
MatStm2._e[4,2] = MatStm2.V[2,4] * MatStm2.Q[2,4] / MatStm2.q[2]
*/
void Flowsheet_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  data->localData[0]->realVars[365] /* MatStm2.e[4,2] variable */ = (data->simulationInfo->realParameter[379]) * (DIVISION_SIM(data->simulationInfo->realParameter[363],data->localData[0]->realVars[398] /* MatStm2.q[2] variable */,"MatStm2.q[2]",equationIndexes));
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
MatStm2._r[2] = MatStm2.V[2,1] * MatStm2.R[2,1] + MatStm2.V[2,2] * MatStm2.R[2,2] + MatStm2.V[2,3] * MatStm2.R[2,3] + MatStm2.V[2,4] * MatStm2.R[2,4]
*/
void Flowsheet_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  data->localData[0]->realVars[400] /* MatStm2.r[2] variable */ = (data->simulationInfo->realParameter[376]) * (data->simulationInfo->realParameter[368]) + (data->simulationInfo->realParameter[377]) * (data->simulationInfo->realParameter[369]) + (data->simulationInfo->realParameter[378]) * (data->simulationInfo->realParameter[370]) + (data->simulationInfo->realParameter[379]) * (data->simulationInfo->realParameter[371]);
  TRACE_POP
}

/*
equation index: 86
type: SIMPLE_ASSIGN
MatStm3._q[1] = MatStm3.V[1,1] * MatStm3.Q[1,1] + MatStm3.V[1,2] * MatStm3.Q[1,2] + MatStm3.V[1,3] * MatStm3.Q[1,3] + MatStm3.V[1,4] * MatStm3.Q[1,4]
*/
void Flowsheet_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  data->localData[0]->realVars[580] /* MatStm3.q[1] variable */ = (data->simulationInfo->realParameter[570]) * (data->simulationInfo->realParameter[554]) + (data->simulationInfo->realParameter[571]) * (data->simulationInfo->realParameter[555]) + (data->simulationInfo->realParameter[572]) * (data->simulationInfo->realParameter[556]) + (data->simulationInfo->realParameter[573]) * (data->simulationInfo->realParameter[557]);
  TRACE_POP
}

/*
equation index: 87
type: SIMPLE_ASSIGN
MatStm3._e[1,1] = MatStm3.V[1,1] * MatStm3.Q[1,1] / MatStm3.q[1]
*/
void Flowsheet_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */ = (data->simulationInfo->realParameter[570]) * (DIVISION_SIM(data->simulationInfo->realParameter[554],data->localData[0]->realVars[580] /* MatStm3.q[1] variable */,"MatStm3.q[1]",equationIndexes));
  TRACE_POP
}

/*
equation index: 88
type: SIMPLE_ASSIGN
MatStm3._e[2,1] = MatStm3.V[1,2] * MatStm3.Q[1,2] / MatStm3.q[1]
*/
void Flowsheet_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  data->localData[0]->realVars[543] /* MatStm3.e[2,1] variable */ = (data->simulationInfo->realParameter[571]) * (DIVISION_SIM(data->simulationInfo->realParameter[555],data->localData[0]->realVars[580] /* MatStm3.q[1] variable */,"MatStm3.q[1]",equationIndexes));
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
MatStm3._e[3,1] = MatStm3.V[1,3] * MatStm3.Q[1,3] / MatStm3.q[1]
*/
void Flowsheet_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  data->localData[0]->realVars[545] /* MatStm3.e[3,1] variable */ = (data->simulationInfo->realParameter[572]) * (DIVISION_SIM(data->simulationInfo->realParameter[556],data->localData[0]->realVars[580] /* MatStm3.q[1] variable */,"MatStm3.q[1]",equationIndexes));
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
MatStm3._e[4,1] = MatStm3.V[1,4] * MatStm3.Q[1,4] / MatStm3.q[1]
*/
void Flowsheet_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  data->localData[0]->realVars[547] /* MatStm3.e[4,1] variable */ = (data->simulationInfo->realParameter[573]) * (DIVISION_SIM(data->simulationInfo->realParameter[557],data->localData[0]->realVars[580] /* MatStm3.q[1] variable */,"MatStm3.q[1]",equationIndexes));
  TRACE_POP
}

/*
equation index: 91
type: SIMPLE_ASSIGN
MatStm3._r[1] = MatStm3.V[1,1] * MatStm3.R[1,1] + MatStm3.V[1,2] * MatStm3.R[1,2] + MatStm3.V[1,3] * MatStm3.R[1,3] + MatStm3.V[1,4] * MatStm3.R[1,4]
*/
void Flowsheet_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  data->localData[0]->realVars[582] /* MatStm3.r[1] variable */ = (data->simulationInfo->realParameter[570]) * (data->simulationInfo->realParameter[562]) + (data->simulationInfo->realParameter[571]) * (data->simulationInfo->realParameter[563]) + (data->simulationInfo->realParameter[572]) * (data->simulationInfo->realParameter[564]) + (data->simulationInfo->realParameter[573]) * (data->simulationInfo->realParameter[565]);
  TRACE_POP
}

/*
equation index: 92
type: SIMPLE_ASSIGN
MatStm3._q[2] = MatStm3.V[2,1] * MatStm3.Q[2,1] + MatStm3.V[2,2] * MatStm3.Q[2,2] + MatStm3.V[2,3] * MatStm3.Q[2,3] + MatStm3.V[2,4] * MatStm3.Q[2,4]
*/
void Flowsheet_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  data->localData[0]->realVars[581] /* MatStm3.q[2] variable */ = (data->simulationInfo->realParameter[574]) * (data->simulationInfo->realParameter[558]) + (data->simulationInfo->realParameter[575]) * (data->simulationInfo->realParameter[559]) + (data->simulationInfo->realParameter[576]) * (data->simulationInfo->realParameter[560]) + (data->simulationInfo->realParameter[577]) * (data->simulationInfo->realParameter[561]);
  TRACE_POP
}

/*
equation index: 93
type: SIMPLE_ASSIGN
MatStm3._e[1,2] = MatStm3.V[2,1] * MatStm3.Q[2,1] / MatStm3.q[2]
*/
void Flowsheet_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  data->localData[0]->realVars[542] /* MatStm3.e[1,2] variable */ = (data->simulationInfo->realParameter[574]) * (DIVISION_SIM(data->simulationInfo->realParameter[558],data->localData[0]->realVars[581] /* MatStm3.q[2] variable */,"MatStm3.q[2]",equationIndexes));
  TRACE_POP
}

/*
equation index: 94
type: SIMPLE_ASSIGN
MatStm3._e[2,2] = MatStm3.V[2,2] * MatStm3.Q[2,2] / MatStm3.q[2]
*/
void Flowsheet_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  data->localData[0]->realVars[544] /* MatStm3.e[2,2] variable */ = (data->simulationInfo->realParameter[575]) * (DIVISION_SIM(data->simulationInfo->realParameter[559],data->localData[0]->realVars[581] /* MatStm3.q[2] variable */,"MatStm3.q[2]",equationIndexes));
  TRACE_POP
}

/*
equation index: 95
type: SIMPLE_ASSIGN
MatStm3._e[3,2] = MatStm3.V[2,3] * MatStm3.Q[2,3] / MatStm3.q[2]
*/
void Flowsheet_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  data->localData[0]->realVars[546] /* MatStm3.e[3,2] variable */ = (data->simulationInfo->realParameter[576]) * (DIVISION_SIM(data->simulationInfo->realParameter[560],data->localData[0]->realVars[581] /* MatStm3.q[2] variable */,"MatStm3.q[2]",equationIndexes));
  TRACE_POP
}

/*
equation index: 96
type: SIMPLE_ASSIGN
MatStm3._e[4,2] = MatStm3.V[2,4] * MatStm3.Q[2,4] / MatStm3.q[2]
*/
void Flowsheet_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  data->localData[0]->realVars[548] /* MatStm3.e[4,2] variable */ = (data->simulationInfo->realParameter[577]) * (DIVISION_SIM(data->simulationInfo->realParameter[561],data->localData[0]->realVars[581] /* MatStm3.q[2] variable */,"MatStm3.q[2]",equationIndexes));
  TRACE_POP
}

/*
equation index: 97
type: SIMPLE_ASSIGN
MatStm3._r[2] = MatStm3.V[2,1] * MatStm3.R[2,1] + MatStm3.V[2,2] * MatStm3.R[2,2] + MatStm3.V[2,3] * MatStm3.R[2,3] + MatStm3.V[2,4] * MatStm3.R[2,4]
*/
void Flowsheet_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  data->localData[0]->realVars[583] /* MatStm3.r[2] variable */ = (data->simulationInfo->realParameter[574]) * (data->simulationInfo->realParameter[566]) + (data->simulationInfo->realParameter[575]) * (data->simulationInfo->realParameter[567]) + (data->simulationInfo->realParameter[576]) * (data->simulationInfo->realParameter[568]) + (data->simulationInfo->realParameter[577]) * (data->simulationInfo->realParameter[569]);
  TRACE_POP
}

/*
equation index: 98
type: SIMPLE_ASSIGN
MatStm3._compMolFrac[1,1] = 0.3
*/
void Flowsheet_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */ = 0.3;
  TRACE_POP
}

/*
equation index: 99
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[1,1] = 80.0 * MatStm3.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  data->localData[0]->realVars[521] /* MatStm3.compMolFlo[1,1] variable */ = (80.0) * (data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 100
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[1,1] = MatStm3.compMolFlo[1,1] * MatStm3.comp[1].MW
*/
void Flowsheet_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  data->localData[0]->realVars[497] /* MatStm3.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[521] /* MatStm3.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[678]);
  TRACE_POP
}

/*
equation index: 101
type: SIMPLE_ASSIGN
MatStm3._compMolFrac[1,2] = 0.7
*/
void Flowsheet_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */ = 0.7;
  TRACE_POP
}

/*
equation index: 102
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[1,2] = 80.0 * MatStm3.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  data->localData[0]->realVars[522] /* MatStm3.compMolFlo[1,2] variable */ = (80.0) * (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 103
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[1,2] = MatStm3.compMolFlo[1,2] * MatStm3.comp[2].MW
*/
void Flowsheet_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  data->localData[0]->realVars[498] /* MatStm3.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[522] /* MatStm3.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[679]);
  TRACE_POP
}

/*
equation index: 104
type: SIMPLE_ASSIGN
MatStm3._J_bubl[1] = MatStm3.r[1] / (MatStm3.r[1] * MatStm3.compMolFrac[1,1] + MatStm3.r[2] * MatStm3.compMolFrac[1,2])
*/
void Flowsheet_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  data->localData[0]->realVars[464] /* MatStm3.J_bubl[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[582] /* MatStm3.r[1] variable */,(data->localData[0]->realVars[582] /* MatStm3.r[1] variable */) * (data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) + (data->localData[0]->realVars[583] /* MatStm3.r[2] variable */) * (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */),"MatStm3.r[1] * MatStm3.compMolFrac[1,1] + MatStm3.r[2] * MatStm3.compMolFrac[1,2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 105
type: SIMPLE_ASSIGN
MatStm3._L_bubl[1] = MatStm3.q[1] / (MatStm3.q[1] * MatStm3.compMolFrac[1,1] + MatStm3.q[2] * MatStm3.compMolFrac[1,2])
*/
void Flowsheet_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->localData[0]->realVars[472] /* MatStm3.L_bubl[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[580] /* MatStm3.q[1] variable */,(data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) + (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */),"MatStm3.q[1] * MatStm3.compMolFrac[1,1] + MatStm3.q[2] * MatStm3.compMolFrac[1,2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 106
type: SIMPLE_ASSIGN
MatStm3._gammac_bubl[1] = exp(1.0 + log(MatStm3.J_bubl[1]) + (-5.0) * MatStm3.q[1] * (1.0 + log(MatStm3.J_bubl[1] / MatStm3.L_bubl[1]) - MatStm3.J_bubl[1] / MatStm3.L_bubl[1]) - MatStm3.J_bubl[1])
*/
void Flowsheet_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  modelica_real tmp28;
  modelica_real tmp29;
  tmp28 = data->localData[0]->realVars[464] /* MatStm3.J_bubl[1] variable */;
  if(!(tmp28 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J_bubl[1]) was %g should be > 0", tmp28);
  }tmp29 = DIVISION_SIM(data->localData[0]->realVars[464] /* MatStm3.J_bubl[1] variable */,data->localData[0]->realVars[472] /* MatStm3.L_bubl[1] variable */,"MatStm3.L_bubl[1]",equationIndexes);
  if(!(tmp29 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J_bubl[1] / MatStm3.L_bubl[1]) was %g should be > 0", tmp29);
  }
  data->localData[0]->realVars[557] /* MatStm3.gammac_bubl[1] variable */ = exp(1.0 + log(tmp28) + (-5.0) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (1.0 + log(tmp29) - (DIVISION_SIM(data->localData[0]->realVars[464] /* MatStm3.J_bubl[1] variable */,data->localData[0]->realVars[472] /* MatStm3.L_bubl[1] variable */,"MatStm3.L_bubl[1]",equationIndexes)))) - data->localData[0]->realVars[464] /* MatStm3.J_bubl[1] variable */);
  TRACE_POP
}

/*
equation index: 107
type: SIMPLE_ASSIGN
MatStm3._J_bubl[2] = MatStm3.r[2] / (MatStm3.r[1] * MatStm3.compMolFrac[1,1] + MatStm3.r[2] * MatStm3.compMolFrac[1,2])
*/
void Flowsheet_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->localData[0]->realVars[465] /* MatStm3.J_bubl[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[583] /* MatStm3.r[2] variable */,(data->localData[0]->realVars[582] /* MatStm3.r[1] variable */) * (data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) + (data->localData[0]->realVars[583] /* MatStm3.r[2] variable */) * (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */),"MatStm3.r[1] * MatStm3.compMolFrac[1,1] + MatStm3.r[2] * MatStm3.compMolFrac[1,2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 108
type: SIMPLE_ASSIGN
MatStm3._L_bubl[2] = MatStm3.q[2] / (MatStm3.q[1] * MatStm3.compMolFrac[1,1] + MatStm3.q[2] * MatStm3.compMolFrac[1,2])
*/
void Flowsheet_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  data->localData[0]->realVars[473] /* MatStm3.L_bubl[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[581] /* MatStm3.q[2] variable */,(data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) + (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */),"MatStm3.q[1] * MatStm3.compMolFrac[1,1] + MatStm3.q[2] * MatStm3.compMolFrac[1,2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 109
type: SIMPLE_ASSIGN
MatStm3._gammac_bubl[2] = exp(1.0 + log(MatStm3.J_bubl[2]) + (-5.0) * MatStm3.q[2] * (1.0 + log(MatStm3.J_bubl[2] / MatStm3.L_bubl[2]) - MatStm3.J_bubl[2] / MatStm3.L_bubl[2]) - MatStm3.J_bubl[2])
*/
void Flowsheet_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  modelica_real tmp30;
  modelica_real tmp31;
  tmp30 = data->localData[0]->realVars[465] /* MatStm3.J_bubl[2] variable */;
  if(!(tmp30 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J_bubl[2]) was %g should be > 0", tmp30);
  }tmp31 = DIVISION_SIM(data->localData[0]->realVars[465] /* MatStm3.J_bubl[2] variable */,data->localData[0]->realVars[473] /* MatStm3.L_bubl[2] variable */,"MatStm3.L_bubl[2]",equationIndexes);
  if(!(tmp31 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J_bubl[2] / MatStm3.L_bubl[2]) was %g should be > 0", tmp31);
  }
  data->localData[0]->realVars[558] /* MatStm3.gammac_bubl[2] variable */ = exp(1.0 + log(tmp30) + (-5.0) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (1.0 + log(tmp31) - (DIVISION_SIM(data->localData[0]->realVars[465] /* MatStm3.J_bubl[2] variable */,data->localData[0]->realVars[473] /* MatStm3.L_bubl[2] variable */,"MatStm3.L_bubl[2]",equationIndexes)))) - data->localData[0]->realVars[465] /* MatStm3.J_bubl[2] variable */);
  TRACE_POP
}

/*
equation index: 110
type: SIMPLE_ASSIGN
MatStm3._theta_bubl[4] = (MatStm3.compMolFrac[1,1] * MatStm3.q[1] * MatStm3.e[4,1] + MatStm3.compMolFrac[1,2] * MatStm3.q[2] * MatStm3.e[4,2]) / (MatStm3.compMolFrac[1,1] * MatStm3.q[1] + MatStm3.compMolFrac[1,2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  data->localData[0]->realVars[622] /* MatStm3.theta_bubl[4] variable */ = DIVISION_SIM((data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[547] /* MatStm3.e[4,1] variable */)) + (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[548] /* MatStm3.e[4,2] variable */)),(data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.compMolFrac[1,1] * MatStm3.q[1] + MatStm3.compMolFrac[1,2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 111
type: SIMPLE_ASSIGN
MatStm3._theta_bubl[3] = (MatStm3.compMolFrac[1,1] * MatStm3.q[1] * MatStm3.e[3,1] + MatStm3.compMolFrac[1,2] * MatStm3.q[2] * MatStm3.e[3,2]) / (MatStm3.compMolFrac[1,1] * MatStm3.q[1] + MatStm3.compMolFrac[1,2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  data->localData[0]->realVars[621] /* MatStm3.theta_bubl[3] variable */ = DIVISION_SIM((data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[545] /* MatStm3.e[3,1] variable */)) + (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[546] /* MatStm3.e[3,2] variable */)),(data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.compMolFrac[1,1] * MatStm3.q[1] + MatStm3.compMolFrac[1,2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 112
type: SIMPLE_ASSIGN
MatStm3._theta_bubl[2] = (MatStm3.compMolFrac[1,1] * MatStm3.q[1] * MatStm3.e[2,1] + MatStm3.compMolFrac[1,2] * MatStm3.q[2] * MatStm3.e[2,2]) / (MatStm3.compMolFrac[1,1] * MatStm3.q[1] + MatStm3.compMolFrac[1,2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  data->localData[0]->realVars[620] /* MatStm3.theta_bubl[2] variable */ = DIVISION_SIM((data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[543] /* MatStm3.e[2,1] variable */)) + (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[544] /* MatStm3.e[2,2] variable */)),(data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.compMolFrac[1,1] * MatStm3.q[1] + MatStm3.compMolFrac[1,2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 113
type: SIMPLE_ASSIGN
MatStm3._theta_bubl[1] = (MatStm3.compMolFrac[1,1] * MatStm3.q[1] * MatStm3.e[1,1] + MatStm3.compMolFrac[1,2] * MatStm3.q[2] * MatStm3.e[1,2]) / (MatStm3.compMolFrac[1,1] * MatStm3.q[1] + MatStm3.compMolFrac[1,2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  data->localData[0]->realVars[619] /* MatStm3.theta_bubl[1] variable */ = DIVISION_SIM((data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */)) + (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[542] /* MatStm3.e[1,2] variable */)),(data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.compMolFrac[1,1] * MatStm3.q[1] + MatStm3.compMolFrac[1,2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 114
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,1] = 0.9
*/
void Flowsheet_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */ = 0.9;
  TRACE_POP
}

/*
equation index: 115
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,1] = 70.0 * MatStm1.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  data->localData[0]->realVars[156] /* MatStm1.compMolFlo[1,1] variable */ = (70.0) * (data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,1] = MatStm1.compMolFlo[1,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->localData[0]->realVars[132] /* MatStm1.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[156] /* MatStm1.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[282]);
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
MatStm2._compMolFrac[1,1] = 0.5333333333333333 * MatStm3.compMolFrac[1,1] + 0.4666666666666667 * MatStm1.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */ = (0.5333333333333333) * (data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) + (0.4666666666666667) * (data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,2] = 0.1
*/
void Flowsheet_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */ = 0.1;
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,2] = 70.0 * MatStm1.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->localData[0]->realVars[157] /* MatStm1.compMolFlo[1,2] variable */ = (70.0) * (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,2] = MatStm1.compMolFlo[1,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->localData[0]->realVars[133] /* MatStm1.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[157] /* MatStm1.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[283]);
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
MatStm1._J_bubl[1] = MatStm1.r[1] / (MatStm1.r[1] * MatStm1.compMolFrac[1,1] + MatStm1.r[2] * MatStm1.compMolFrac[1,2])
*/
void Flowsheet_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->localData[0]->realVars[99] /* MatStm1.J_bubl[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[217] /* MatStm1.r[1] variable */,(data->localData[0]->realVars[217] /* MatStm1.r[1] variable */) * (data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) + (data->localData[0]->realVars[218] /* MatStm1.r[2] variable */) * (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */),"MatStm1.r[1] * MatStm1.compMolFrac[1,1] + MatStm1.r[2] * MatStm1.compMolFrac[1,2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
MatStm1._L_bubl[1] = MatStm1.q[1] / (MatStm1.q[1] * MatStm1.compMolFrac[1,1] + MatStm1.q[2] * MatStm1.compMolFrac[1,2])
*/
void Flowsheet_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  data->localData[0]->realVars[107] /* MatStm1.L_bubl[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[215] /* MatStm1.q[1] variable */,(data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) + (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */),"MatStm1.q[1] * MatStm1.compMolFrac[1,1] + MatStm1.q[2] * MatStm1.compMolFrac[1,2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
MatStm1._gammac_bubl[1] = exp(1.0 + log(MatStm1.J_bubl[1]) + (-5.0) * MatStm1.q[1] * (1.0 + log(MatStm1.J_bubl[1] / MatStm1.L_bubl[1]) - MatStm1.J_bubl[1] / MatStm1.L_bubl[1]) - MatStm1.J_bubl[1])
*/
void Flowsheet_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  modelica_real tmp32;
  modelica_real tmp33;
  tmp32 = data->localData[0]->realVars[99] /* MatStm1.J_bubl[1] variable */;
  if(!(tmp32 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J_bubl[1]) was %g should be > 0", tmp32);
  }tmp33 = DIVISION_SIM(data->localData[0]->realVars[99] /* MatStm1.J_bubl[1] variable */,data->localData[0]->realVars[107] /* MatStm1.L_bubl[1] variable */,"MatStm1.L_bubl[1]",equationIndexes);
  if(!(tmp33 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J_bubl[1] / MatStm1.L_bubl[1]) was %g should be > 0", tmp33);
  }
  data->localData[0]->realVars[192] /* MatStm1.gammac_bubl[1] variable */ = exp(1.0 + log(tmp32) + (-5.0) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (1.0 + log(tmp33) - (DIVISION_SIM(data->localData[0]->realVars[99] /* MatStm1.J_bubl[1] variable */,data->localData[0]->realVars[107] /* MatStm1.L_bubl[1] variable */,"MatStm1.L_bubl[1]",equationIndexes)))) - data->localData[0]->realVars[99] /* MatStm1.J_bubl[1] variable */);
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
MatStm1._J_bubl[2] = MatStm1.r[2] / (MatStm1.r[1] * MatStm1.compMolFrac[1,1] + MatStm1.r[2] * MatStm1.compMolFrac[1,2])
*/
void Flowsheet_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->localData[0]->realVars[100] /* MatStm1.J_bubl[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[218] /* MatStm1.r[2] variable */,(data->localData[0]->realVars[217] /* MatStm1.r[1] variable */) * (data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) + (data->localData[0]->realVars[218] /* MatStm1.r[2] variable */) * (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */),"MatStm1.r[1] * MatStm1.compMolFrac[1,1] + MatStm1.r[2] * MatStm1.compMolFrac[1,2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 125
type: SIMPLE_ASSIGN
MatStm1._L_bubl[2] = MatStm1.q[2] / (MatStm1.q[1] * MatStm1.compMolFrac[1,1] + MatStm1.q[2] * MatStm1.compMolFrac[1,2])
*/
void Flowsheet_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->localData[0]->realVars[108] /* MatStm1.L_bubl[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[216] /* MatStm1.q[2] variable */,(data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) + (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */),"MatStm1.q[1] * MatStm1.compMolFrac[1,1] + MatStm1.q[2] * MatStm1.compMolFrac[1,2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 126
type: SIMPLE_ASSIGN
MatStm1._gammac_bubl[2] = exp(1.0 + log(MatStm1.J_bubl[2]) + (-5.0) * MatStm1.q[2] * (1.0 + log(MatStm1.J_bubl[2] / MatStm1.L_bubl[2]) - MatStm1.J_bubl[2] / MatStm1.L_bubl[2]) - MatStm1.J_bubl[2])
*/
void Flowsheet_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  modelica_real tmp34;
  modelica_real tmp35;
  tmp34 = data->localData[0]->realVars[100] /* MatStm1.J_bubl[2] variable */;
  if(!(tmp34 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J_bubl[2]) was %g should be > 0", tmp34);
  }tmp35 = DIVISION_SIM(data->localData[0]->realVars[100] /* MatStm1.J_bubl[2] variable */,data->localData[0]->realVars[108] /* MatStm1.L_bubl[2] variable */,"MatStm1.L_bubl[2]",equationIndexes);
  if(!(tmp35 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J_bubl[2] / MatStm1.L_bubl[2]) was %g should be > 0", tmp35);
  }
  data->localData[0]->realVars[193] /* MatStm1.gammac_bubl[2] variable */ = exp(1.0 + log(tmp34) + (-5.0) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (1.0 + log(tmp35) - (DIVISION_SIM(data->localData[0]->realVars[100] /* MatStm1.J_bubl[2] variable */,data->localData[0]->realVars[108] /* MatStm1.L_bubl[2] variable */,"MatStm1.L_bubl[2]",equationIndexes)))) - data->localData[0]->realVars[100] /* MatStm1.J_bubl[2] variable */);
  TRACE_POP
}

/*
equation index: 127
type: SIMPLE_ASSIGN
MatStm2._compMolFrac[1,2] = 0.5333333333333333 * MatStm3.compMolFrac[1,2] + 0.4666666666666667 * MatStm1.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */ = (0.5333333333333333) * (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */) + (0.4666666666666667) * (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 128
type: SIMPLE_ASSIGN
MatStm1._theta_bubl[4] = (MatStm1.compMolFrac[1,1] * MatStm1.q[1] * MatStm1.e[4,1] + MatStm1.compMolFrac[1,2] * MatStm1.q[2] * MatStm1.e[4,2]) / (MatStm1.compMolFrac[1,1] * MatStm1.q[1] + MatStm1.compMolFrac[1,2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->localData[0]->realVars[257] /* MatStm1.theta_bubl[4] variable */ = DIVISION_SIM((data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[182] /* MatStm1.e[4,1] variable */)) + (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[183] /* MatStm1.e[4,2] variable */)),(data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.compMolFrac[1,1] * MatStm1.q[1] + MatStm1.compMolFrac[1,2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
MatStm1._theta_bubl[3] = (MatStm1.compMolFrac[1,1] * MatStm1.q[1] * MatStm1.e[3,1] + MatStm1.compMolFrac[1,2] * MatStm1.q[2] * MatStm1.e[3,2]) / (MatStm1.compMolFrac[1,1] * MatStm1.q[1] + MatStm1.compMolFrac[1,2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->localData[0]->realVars[256] /* MatStm1.theta_bubl[3] variable */ = DIVISION_SIM((data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[180] /* MatStm1.e[3,1] variable */)) + (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[181] /* MatStm1.e[3,2] variable */)),(data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.compMolFrac[1,1] * MatStm1.q[1] + MatStm1.compMolFrac[1,2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
MatStm1._theta_bubl[2] = (MatStm1.compMolFrac[1,1] * MatStm1.q[1] * MatStm1.e[2,1] + MatStm1.compMolFrac[1,2] * MatStm1.q[2] * MatStm1.e[2,2]) / (MatStm1.compMolFrac[1,1] * MatStm1.q[1] + MatStm1.compMolFrac[1,2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  data->localData[0]->realVars[255] /* MatStm1.theta_bubl[2] variable */ = DIVISION_SIM((data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[178] /* MatStm1.e[2,1] variable */)) + (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[179] /* MatStm1.e[2,2] variable */)),(data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.compMolFrac[1,1] * MatStm1.q[1] + MatStm1.compMolFrac[1,2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 131
type: SIMPLE_ASSIGN
MatStm1._theta_bubl[1] = (MatStm1.compMolFrac[1,1] * MatStm1.q[1] * MatStm1.e[1,1] + MatStm1.compMolFrac[1,2] * MatStm1.q[2] * MatStm1.e[1,2]) / (MatStm1.compMolFrac[1,1] * MatStm1.q[1] + MatStm1.compMolFrac[1,2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->localData[0]->realVars[254] /* MatStm1.theta_bubl[1] variable */ = DIVISION_SIM((data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */)) + (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[177] /* MatStm1.e[1,2] variable */)),(data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.compMolFrac[1,1] * MatStm1.q[1] + MatStm1.compMolFrac[1,2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}
extern void Flowsheet_eqFunction_501(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_500(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_499(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_498(DATA *data, threadData_t *threadData);


void Flowsheet_eqFunction_136(DATA*, threadData_t*);
void Flowsheet_eqFunction_137(DATA*, threadData_t*);
void Flowsheet_eqFunction_138(DATA*, threadData_t*);
void Flowsheet_eqFunction_139(DATA*, threadData_t*);
void Flowsheet_eqFunction_140(DATA*, threadData_t*);
void Flowsheet_eqFunction_141(DATA*, threadData_t*);
void Flowsheet_eqFunction_142(DATA*, threadData_t*);
void Flowsheet_eqFunction_143(DATA*, threadData_t*);
void Flowsheet_eqFunction_144(DATA*, threadData_t*);
void Flowsheet_eqFunction_145(DATA*, threadData_t*);
void Flowsheet_eqFunction_146(DATA*, threadData_t*);
void Flowsheet_eqFunction_147(DATA*, threadData_t*);
void Flowsheet_eqFunction_148(DATA*, threadData_t*);
void Flowsheet_eqFunction_149(DATA*, threadData_t*);
void Flowsheet_eqFunction_150(DATA*, threadData_t*);
void Flowsheet_eqFunction_151(DATA*, threadData_t*);
void Flowsheet_eqFunction_152(DATA*, threadData_t*);
void Flowsheet_eqFunction_153(DATA*, threadData_t*);
void Flowsheet_eqFunction_154(DATA*, threadData_t*);
void Flowsheet_eqFunction_155(DATA*, threadData_t*);
void Flowsheet_eqFunction_156(DATA*, threadData_t*);
void Flowsheet_eqFunction_157(DATA*, threadData_t*);
void Flowsheet_eqFunction_158(DATA*, threadData_t*);
void Flowsheet_eqFunction_159(DATA*, threadData_t*);
void Flowsheet_eqFunction_160(DATA*, threadData_t*);
void Flowsheet_eqFunction_161(DATA*, threadData_t*);
void Flowsheet_eqFunction_162(DATA*, threadData_t*);
void Flowsheet_eqFunction_163(DATA*, threadData_t*);
void Flowsheet_eqFunction_164(DATA*, threadData_t*);
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
void Flowsheet_eqFunction_190(DATA*, threadData_t*);
void Flowsheet_eqFunction_189(DATA*, threadData_t*);
void Flowsheet_eqFunction_188(DATA*, threadData_t*);
void Flowsheet_eqFunction_187(DATA*, threadData_t*);
void Flowsheet_eqFunction_186(DATA*, threadData_t*);
void Flowsheet_eqFunction_185(DATA*, threadData_t*);
void Flowsheet_eqFunction_184(DATA*, threadData_t*);
/*
equation index: 191
indexNonlinear: 0
type: NONLINEAR

vars: {MatStm1._dewLiqMolFrac[2], MatStm1._dewLiqMolFrac[1], MatStm1._totMolFlo[3], MatStm1._compMolFrac[3,2], MatStm1._compMolFrac[2,1], MatStm1._compMolFrac[3,1], MatStm1._compMolFrac[2,2]}
eqns: {136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 190, 189, 188, 187, 186, 185, 184}
*/
void Flowsheet_eqFunction_191(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[267] /* MatStm1.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,191};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 191 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[267] /* MatStm1.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  TRACE_POP
}
extern void Flowsheet_eqFunction_596(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_595(DATA *data, threadData_t *threadData);


/*
equation index: 194
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:2 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  data->localData[0]->realVars[113] /* MatStm1.MW[3] variable */ = data->modelData->realVarsData[113].attribute /* MatStm1.MW[3] variable */.start;

  data->localData[0]->realVars[112] /* MatStm1.MW[2] variable */ = data->modelData->realVarsData[112].attribute /* MatStm1.MW[2] variable */.start;

  data->localData[0]->realVars[111] /* MatStm1.MW[1] variable */ = data->modelData->realVarsData[111].attribute /* MatStm1.MW[1] variable */.start;

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 2);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp3, tmp5); $Pi += tmp4)
    {
      array_alloc_scalar_real_array(&tmp0, 3, (modelica_real)data->localData[0]->realVars[111] /* MatStm1.MW[1] variable */ + ((&data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[282])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[112] /* MatStm1.MW[2] variable */ + ((&data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[282])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[113] /* MatStm1.MW[3] variable */ + ((&data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[282])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
      real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[111] /* MatStm1.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp0, &tmp2, &tmp1);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_593(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_597(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_588(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_598(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_594(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_589(DATA *data, threadData_t *threadData);


/*
equation index: 201
type: ALGORITHM

  (MatStm1.compMolEntr[2,2], MatStm1.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[2].AS, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tb, MatStm1.comp[2].Tc, 320.0, 101325.0, MatStm1.compMolFrac[2,2], MatStm1.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  real_array tmp6;
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[324], (modelica_real)data->simulationInfo->realParameter[325], (modelica_real)data->simulationInfo->realParameter[326], (modelica_real)data->simulationInfo->realParameter[327], (modelica_real)data->simulationInfo->realParameter[328], (modelica_real)data->simulationInfo->realParameter[329]);
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[224], (modelica_real)data->simulationInfo->realParameter[225], (modelica_real)data->simulationInfo->realParameter[226], (modelica_real)data->simulationInfo->realParameter[227], (modelica_real)data->simulationInfo->realParameter[228], (modelica_real)data->simulationInfo->realParameter[229]);
  data->localData[0]->realVars[153] /* MatStm1.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[201], tmp6, tmp7, data->simulationInfo->realParameter[297], data->simulationInfo->realParameter[299], 320.0, 101325.0, data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */, data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[155] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_580(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_581(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_583(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_582(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_586(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_603(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_605(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_604(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_585(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_600(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_602(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_601(DATA *data, threadData_t *threadData);


/*
equation index: 214
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, 320.0, 101325.0, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[318], (modelica_real)data->simulationInfo->realParameter[319], (modelica_real)data->simulationInfo->realParameter[320], (modelica_real)data->simulationInfo->realParameter[321], (modelica_real)data->simulationInfo->realParameter[322], (modelica_real)data->simulationInfo->realParameter[323]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[218], (modelica_real)data->simulationInfo->realParameter[219], (modelica_real)data->simulationInfo->realParameter[220], (modelica_real)data->simulationInfo->realParameter[221], (modelica_real)data->simulationInfo->realParameter[222], (modelica_real)data->simulationInfo->realParameter[223]);
  data->localData[0]->realVars[152] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[200], tmp8, tmp9, data->simulationInfo->realParameter[296], data->simulationInfo->realParameter[298], 320.0, 101325.0, data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[154] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_592(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_591(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_606(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_608(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_607(DATA *data, threadData_t *threadData);


/*
equation index: 220
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
void Flowsheet_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[143] /* MatStm1.compMasFrac[3,2] variable */,data->localData[1]->realVars[140] /* MatStm1.compMasFrac[2,1] variable */,data->localData[1]->realVars[142] /* MatStm1.compMasFrac[3,1] variable */,data->localData[1]->realVars[138] /* MatStm1.compMasFrac[1,1] variable */,data->localData[1]->realVars[141] /* MatStm1.compMasFrac[2,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 220 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,220};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 220 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[143] /* MatStm1.compMasFrac[3,2] variable */ = aux_x[0];
  data->localData[0]->realVars[140] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[1];
  data->localData[0]->realVars[142] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[2];
  data->localData[0]->realVars[138] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[3];
  data->localData[0]->realVars[141] /* MatStm1.compMasFrac[2,2] variable */ = aux_x[4];
  TRACE_POP
}
extern void Flowsheet_eqFunction_496(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_494(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_497(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_495(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_491(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_490(DATA *data, threadData_t *threadData);


/*
equation index: 227
type: SIMPLE_ASSIGN
MatStm2._gammac_bubl[1] = exp(1.0 + log(MatStm2.J_bubl[1]) + (-5.0) * MatStm2.q[1] * (1.0 + log(MatStm2.J_bubl[1] / MatStm2.L_bubl[1]) - MatStm2.J_bubl[1] / MatStm2.L_bubl[1]) - MatStm2.J_bubl[1])
*/
void Flowsheet_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  modelica_real tmp10;
  modelica_real tmp11;
  tmp10 = data->localData[0]->realVars[281] /* MatStm2.J_bubl[1] variable */;
  if(!(tmp10 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J_bubl[1]) was %g should be > 0", tmp10);
  }tmp11 = DIVISION_SIM(data->localData[0]->realVars[281] /* MatStm2.J_bubl[1] variable */,data->localData[0]->realVars[289] /* MatStm2.L_bubl[1] variable */,"MatStm2.L_bubl[1]",equationIndexes);
  if(!(tmp11 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J_bubl[1] / MatStm2.L_bubl[1]) was %g should be > 0", tmp11);
  }
  data->localData[0]->realVars[374] /* MatStm2.gammac_bubl[1] variable */ = exp(1.0 + log(tmp10) + (-5.0) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (1.0 + log(tmp11) - (DIVISION_SIM(data->localData[0]->realVars[281] /* MatStm2.J_bubl[1] variable */,data->localData[0]->realVars[289] /* MatStm2.L_bubl[1] variable */,"MatStm2.L_bubl[1]",equationIndexes)))) - data->localData[0]->realVars[281] /* MatStm2.J_bubl[1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_487(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_486(DATA *data, threadData_t *threadData);


/*
equation index: 230
type: SIMPLE_ASSIGN
MatStm2._gammac_bubl[2] = exp(1.0 + log(MatStm2.J_bubl[2]) + (-5.0) * MatStm2.q[2] * (1.0 + log(MatStm2.J_bubl[2] / MatStm2.L_bubl[2]) - MatStm2.J_bubl[2] / MatStm2.L_bubl[2]) - MatStm2.J_bubl[2])
*/
void Flowsheet_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  modelica_real tmp12;
  modelica_real tmp13;
  tmp12 = data->localData[0]->realVars[282] /* MatStm2.J_bubl[2] variable */;
  if(!(tmp12 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J_bubl[2]) was %g should be > 0", tmp12);
  }tmp13 = DIVISION_SIM(data->localData[0]->realVars[282] /* MatStm2.J_bubl[2] variable */,data->localData[0]->realVars[290] /* MatStm2.L_bubl[2] variable */,"MatStm2.L_bubl[2]",equationIndexes);
  if(!(tmp13 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J_bubl[2] / MatStm2.L_bubl[2]) was %g should be > 0", tmp13);
  }
  data->localData[0]->realVars[375] /* MatStm2.gammac_bubl[2] variable */ = exp(1.0 + log(tmp12) + (-5.0) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (1.0 + log(tmp13) - (DIVISION_SIM(data->localData[0]->realVars[282] /* MatStm2.J_bubl[2] variable */,data->localData[0]->realVars[290] /* MatStm2.L_bubl[2] variable */,"MatStm2.L_bubl[2]",equationIndexes)))) - data->localData[0]->realVars[282] /* MatStm2.J_bubl[2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_485(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_484(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_483(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_482(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_481(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_480(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_479(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_478(DATA *data, threadData_t *threadData);


void Flowsheet_eqFunction_239(DATA*, threadData_t*);
void Flowsheet_eqFunction_240(DATA*, threadData_t*);
void Flowsheet_eqFunction_241(DATA*, threadData_t*);
void Flowsheet_eqFunction_242(DATA*, threadData_t*);
void Flowsheet_eqFunction_243(DATA*, threadData_t*);
void Flowsheet_eqFunction_244(DATA*, threadData_t*);
void Flowsheet_eqFunction_245(DATA*, threadData_t*);
void Flowsheet_eqFunction_246(DATA*, threadData_t*);
void Flowsheet_eqFunction_247(DATA*, threadData_t*);
void Flowsheet_eqFunction_248(DATA*, threadData_t*);
void Flowsheet_eqFunction_249(DATA*, threadData_t*);
void Flowsheet_eqFunction_250(DATA*, threadData_t*);
void Flowsheet_eqFunction_251(DATA*, threadData_t*);
void Flowsheet_eqFunction_252(DATA*, threadData_t*);
void Flowsheet_eqFunction_253(DATA*, threadData_t*);
void Flowsheet_eqFunction_254(DATA*, threadData_t*);
void Flowsheet_eqFunction_255(DATA*, threadData_t*);
void Flowsheet_eqFunction_256(DATA*, threadData_t*);
void Flowsheet_eqFunction_257(DATA*, threadData_t*);
void Flowsheet_eqFunction_258(DATA*, threadData_t*);
void Flowsheet_eqFunction_259(DATA*, threadData_t*);
void Flowsheet_eqFunction_260(DATA*, threadData_t*);
void Flowsheet_eqFunction_261(DATA*, threadData_t*);
void Flowsheet_eqFunction_262(DATA*, threadData_t*);
void Flowsheet_eqFunction_263(DATA*, threadData_t*);
void Flowsheet_eqFunction_264(DATA*, threadData_t*);
void Flowsheet_eqFunction_265(DATA*, threadData_t*);
void Flowsheet_eqFunction_266(DATA*, threadData_t*);
void Flowsheet_eqFunction_267(DATA*, threadData_t*);
void Flowsheet_eqFunction_268(DATA*, threadData_t*);
void Flowsheet_eqFunction_269(DATA*, threadData_t*);
void Flowsheet_eqFunction_270(DATA*, threadData_t*);
void Flowsheet_eqFunction_271(DATA*, threadData_t*);
void Flowsheet_eqFunction_272(DATA*, threadData_t*);
void Flowsheet_eqFunction_273(DATA*, threadData_t*);
void Flowsheet_eqFunction_274(DATA*, threadData_t*);
void Flowsheet_eqFunction_275(DATA*, threadData_t*);
void Flowsheet_eqFunction_276(DATA*, threadData_t*);
void Flowsheet_eqFunction_277(DATA*, threadData_t*);
void Flowsheet_eqFunction_278(DATA*, threadData_t*);
void Flowsheet_eqFunction_279(DATA*, threadData_t*);
void Flowsheet_eqFunction_280(DATA*, threadData_t*);
void Flowsheet_eqFunction_281(DATA*, threadData_t*);
void Flowsheet_eqFunction_282(DATA*, threadData_t*);
void Flowsheet_eqFunction_283(DATA*, threadData_t*);
void Flowsheet_eqFunction_284(DATA*, threadData_t*);
void Flowsheet_eqFunction_285(DATA*, threadData_t*);
void Flowsheet_eqFunction_286(DATA*, threadData_t*);
void Flowsheet_eqFunction_293(DATA*, threadData_t*);
void Flowsheet_eqFunction_292(DATA*, threadData_t*);
void Flowsheet_eqFunction_291(DATA*, threadData_t*);
void Flowsheet_eqFunction_290(DATA*, threadData_t*);
void Flowsheet_eqFunction_289(DATA*, threadData_t*);
void Flowsheet_eqFunction_288(DATA*, threadData_t*);
void Flowsheet_eqFunction_287(DATA*, threadData_t*);
/*
equation index: 294
indexNonlinear: 1
type: NONLINEAR

vars: {MatStm3._dewLiqMolFrac[2], MatStm3._dewLiqMolFrac[1], MatStm3._totMolFlo[2], MatStm3._compMolFrac[3,2], MatStm3._compMolFrac[2,1], MatStm3._compMolFrac[3,1], MatStm3._compMolFrac[2,2]}
eqns: {239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 293, 292, 291, 290, 289, 288, 287}
*/
void Flowsheet_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 294 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[631] /* MatStm3.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,294};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 294 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[631] /* MatStm3.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  TRACE_POP
}
extern void Flowsheet_eqFunction_691(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_692(DATA *data, threadData_t *threadData);


/*
equation index: 297
type: ALGORITHM

  MatStm3.MW[3] := $START.MatStm3.MW[3];
  MatStm3.MW[2] := $START.MatStm3.MW[2];
  MatStm3.MW[1] := $START.MatStm3.MW[1];
  for i in 1:2 loop
    MatStm3.MW[:] := {MatStm3.MW[1] + MatStm3.compMolFrac[1,i] * MatStm3.comp[i].MW, MatStm3.MW[2] + MatStm3.compMolFrac[2,i] * MatStm3.comp[i].MW, MatStm3.MW[3] + MatStm3.compMolFrac[3,i] * MatStm3.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  data->localData[0]->realVars[478] /* MatStm3.MW[3] variable */ = data->modelData->realVarsData[478].attribute /* MatStm3.MW[3] variable */.start;

  data->localData[0]->realVars[477] /* MatStm3.MW[2] variable */ = data->modelData->realVarsData[477].attribute /* MatStm3.MW[2] variable */.start;

  data->localData[0]->realVars[476] /* MatStm3.MW[1] variable */ = data->modelData->realVarsData[476].attribute /* MatStm3.MW[1] variable */.start;

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 2);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp3, tmp5); $Pi += tmp4)
    {
      array_alloc_scalar_real_array(&tmp0, 3, (modelica_real)data->localData[0]->realVars[476] /* MatStm3.MW[1] variable */ + ((&data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[678])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[477] /* MatStm3.MW[2] variable */ + ((&data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[678])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[478] /* MatStm3.MW[3] variable */ + ((&data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[678])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
      real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[476] /* MatStm3.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp0, &tmp2, &tmp1);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_705(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_703(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_706(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_704(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_708(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_709(DATA *data, threadData_t *threadData);


/*
equation index: 304
type: ALGORITHM

  (MatStm3.compMolEntr[2,2], MatStm3.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[2].AS, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tb, MatStm3.comp[2].Tc, 310.0, 101325.0, MatStm3.compMolFrac[2,2], MatStm3.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  real_array tmp6;
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[720], (modelica_real)data->simulationInfo->realParameter[721], (modelica_real)data->simulationInfo->realParameter[722], (modelica_real)data->simulationInfo->realParameter[723], (modelica_real)data->simulationInfo->realParameter[724], (modelica_real)data->simulationInfo->realParameter[725]);
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[620], (modelica_real)data->simulationInfo->realParameter[621], (modelica_real)data->simulationInfo->realParameter[622], (modelica_real)data->simulationInfo->realParameter[623], (modelica_real)data->simulationInfo->realParameter[624], (modelica_real)data->simulationInfo->realParameter[625]);
  data->localData[0]->realVars[518] /* MatStm3.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[597], tmp6, tmp7, data->simulationInfo->realParameter[693], data->simulationInfo->realParameter[695], 310.0, 101325.0, data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */, data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[520] /* MatStm3.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_696(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_695(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_694(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_693(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_699(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_714(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_716(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_715(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_698(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_711(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_713(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_712(DATA *data, threadData_t *threadData);


/*
equation index: 317
type: ALGORITHM

  (MatStm3.compMolEntr[2,1], MatStm3.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[1].AS, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tb, MatStm3.comp[1].Tc, 310.0, 101325.0, MatStm3.compMolFrac[2,1], MatStm3.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[714], (modelica_real)data->simulationInfo->realParameter[715], (modelica_real)data->simulationInfo->realParameter[716], (modelica_real)data->simulationInfo->realParameter[717], (modelica_real)data->simulationInfo->realParameter[718], (modelica_real)data->simulationInfo->realParameter[719]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[614], (modelica_real)data->simulationInfo->realParameter[615], (modelica_real)data->simulationInfo->realParameter[616], (modelica_real)data->simulationInfo->realParameter[617], (modelica_real)data->simulationInfo->realParameter[618], (modelica_real)data->simulationInfo->realParameter[619]);
  data->localData[0]->realVars[517] /* MatStm3.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[596], tmp8, tmp9, data->simulationInfo->realParameter[692], data->simulationInfo->realParameter[694], 310.0, 101325.0, data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */, data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[519] /* MatStm3.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_701(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_707(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_860(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_862(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_861(DATA *data, threadData_t *threadData);


/*
equation index: 323
type: LINEAR

<var>MatStm3._compMasFrac[1,1]</var>
<var>MatStm3._compMasFrac[3,1]</var>
<var>MatStm3._compMasFrac[2,2]</var>
<var>MatStm3._compMasFrac[2,1]</var>
<var>MatStm3._compMasFrac[3,2]</var>
<row>
  <cell>if 101325.0 >= MatStm3.Pbubl then -MatStm3.compMasFrac[1,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,2] else -MatStm3.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,1] else MatStm3.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -1.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101325.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[503] /* MatStm3.compMasFrac[1,1] variable */,data->localData[1]->realVars[507] /* MatStm3.compMasFrac[3,1] variable */,data->localData[1]->realVars[506] /* MatStm3.compMasFrac[2,2] variable */,data->localData[1]->realVars[505] /* MatStm3.compMasFrac[2,1] variable */,data->localData[1]->realVars[508] /* MatStm3.compMasFrac[3,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 323 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,323};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 323 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[503] /* MatStm3.compMasFrac[1,1] variable */ = aux_x[0];
  data->localData[0]->realVars[507] /* MatStm3.compMasFrac[3,1] variable */ = aux_x[1];
  data->localData[0]->realVars[506] /* MatStm3.compMasFrac[2,2] variable */ = aux_x[2];
  data->localData[0]->realVars[505] /* MatStm3.compMasFrac[2,1] variable */ = aux_x[3];
  data->localData[0]->realVars[508] /* MatStm3.compMasFrac[3,2] variable */ = aux_x[4];
  TRACE_POP
}
extern void Flowsheet_eqFunction_717(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_859(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_858(DATA *data, threadData_t *threadData);


void Flowsheet_eqFunction_327(DATA*, threadData_t*);
void Flowsheet_eqFunction_328(DATA*, threadData_t*);
void Flowsheet_eqFunction_329(DATA*, threadData_t*);
void Flowsheet_eqFunction_330(DATA*, threadData_t*);
void Flowsheet_eqFunction_331(DATA*, threadData_t*);
void Flowsheet_eqFunction_332(DATA*, threadData_t*);
void Flowsheet_eqFunction_333(DATA*, threadData_t*);
void Flowsheet_eqFunction_334(DATA*, threadData_t*);
void Flowsheet_eqFunction_335(DATA*, threadData_t*);
void Flowsheet_eqFunction_336(DATA*, threadData_t*);
void Flowsheet_eqFunction_337(DATA*, threadData_t*);
void Flowsheet_eqFunction_338(DATA*, threadData_t*);
void Flowsheet_eqFunction_339(DATA*, threadData_t*);
void Flowsheet_eqFunction_340(DATA*, threadData_t*);
void Flowsheet_eqFunction_341(DATA*, threadData_t*);
void Flowsheet_eqFunction_342(DATA*, threadData_t*);
void Flowsheet_eqFunction_343(DATA*, threadData_t*);
void Flowsheet_eqFunction_344(DATA*, threadData_t*);
void Flowsheet_eqFunction_345(DATA*, threadData_t*);
void Flowsheet_eqFunction_346(DATA*, threadData_t*);
void Flowsheet_eqFunction_347(DATA*, threadData_t*);
void Flowsheet_eqFunction_348(DATA*, threadData_t*);
void Flowsheet_eqFunction_349(DATA*, threadData_t*);
void Flowsheet_eqFunction_350(DATA*, threadData_t*);
void Flowsheet_eqFunction_351(DATA*, threadData_t*);
void Flowsheet_eqFunction_352(DATA*, threadData_t*);
void Flowsheet_eqFunction_353(DATA*, threadData_t*);
void Flowsheet_eqFunction_354(DATA*, threadData_t*);
void Flowsheet_eqFunction_355(DATA*, threadData_t*);
void Flowsheet_eqFunction_356(DATA*, threadData_t*);
void Flowsheet_eqFunction_357(DATA*, threadData_t*);
void Flowsheet_eqFunction_358(DATA*, threadData_t*);
void Flowsheet_eqFunction_359(DATA*, threadData_t*);
void Flowsheet_eqFunction_360(DATA*, threadData_t*);
void Flowsheet_eqFunction_361(DATA*, threadData_t*);
void Flowsheet_eqFunction_362(DATA*, threadData_t*);
void Flowsheet_eqFunction_363(DATA*, threadData_t*);
void Flowsheet_eqFunction_364(DATA*, threadData_t*);
void Flowsheet_eqFunction_365(DATA*, threadData_t*);
void Flowsheet_eqFunction_366(DATA*, threadData_t*);
void Flowsheet_eqFunction_367(DATA*, threadData_t*);
void Flowsheet_eqFunction_368(DATA*, threadData_t*);
void Flowsheet_eqFunction_369(DATA*, threadData_t*);
void Flowsheet_eqFunction_370(DATA*, threadData_t*);
void Flowsheet_eqFunction_371(DATA*, threadData_t*);
void Flowsheet_eqFunction_372(DATA*, threadData_t*);
void Flowsheet_eqFunction_373(DATA*, threadData_t*);
void Flowsheet_eqFunction_374(DATA*, threadData_t*);
void Flowsheet_eqFunction_375(DATA*, threadData_t*);
void Flowsheet_eqFunction_376(DATA*, threadData_t*);
void Flowsheet_eqFunction_377(DATA*, threadData_t*);
void Flowsheet_eqFunction_378(DATA*, threadData_t*);
void Flowsheet_eqFunction_379(DATA*, threadData_t*);
void Flowsheet_eqFunction_380(DATA*, threadData_t*);
void Flowsheet_eqFunction_381(DATA*, threadData_t*);
void Flowsheet_eqFunction_382(DATA*, threadData_t*);
void Flowsheet_eqFunction_383(DATA*, threadData_t*);
void Flowsheet_eqFunction_384(DATA*, threadData_t*);
void Flowsheet_eqFunction_385(DATA*, threadData_t*);
void Flowsheet_eqFunction_386(DATA*, threadData_t*);
void Flowsheet_eqFunction_387(DATA*, threadData_t*);
void Flowsheet_eqFunction_388(DATA*, threadData_t*);
void Flowsheet_eqFunction_389(DATA*, threadData_t*);
void Flowsheet_eqFunction_390(DATA*, threadData_t*);
void Flowsheet_eqFunction_391(DATA*, threadData_t*);
void Flowsheet_eqFunction_392(DATA*, threadData_t*);
void Flowsheet_eqFunction_393(DATA*, threadData_t*);
void Flowsheet_eqFunction_394(DATA*, threadData_t*);
void Flowsheet_eqFunction_395(DATA*, threadData_t*);
void Flowsheet_eqFunction_396(DATA*, threadData_t*);
void Flowsheet_eqFunction_397(DATA*, threadData_t*);
void Flowsheet_eqFunction_398(DATA*, threadData_t*);
void Flowsheet_eqFunction_399(DATA*, threadData_t*);
void Flowsheet_eqFunction_400(DATA*, threadData_t*);
void Flowsheet_eqFunction_410(DATA*, threadData_t*);
void Flowsheet_eqFunction_409(DATA*, threadData_t*);
void Flowsheet_eqFunction_408(DATA*, threadData_t*);
void Flowsheet_eqFunction_407(DATA*, threadData_t*);
void Flowsheet_eqFunction_406(DATA*, threadData_t*);
void Flowsheet_eqFunction_405(DATA*, threadData_t*);
void Flowsheet_eqFunction_404(DATA*, threadData_t*);
void Flowsheet_eqFunction_403(DATA*, threadData_t*);
void Flowsheet_eqFunction_402(DATA*, threadData_t*);
void Flowsheet_eqFunction_401(DATA*, threadData_t*);
/*
equation index: 411
indexNonlinear: 2
type: NONLINEAR

vars: {MatStm2._dewLiqMolFrac[2], MatStm2._dewLiqMolFrac[1], MatStm2._theta_dew[2], MatStm2._theta_dew[3], MatStm2._totMolFlo[2], MatStm2._T, MatStm2._compMolFrac[3,1], MatStm2._compMolFrac[2,2], MatStm2._compMolFrac[3,2], MatStm2._compMolFrac[2,1]}
eqns: {327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 410, 409, 408, 407, 406, 405, 404, 403, 402, 401}
*/
void Flowsheet_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 411 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[441] /* MatStm2.theta_dew[2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[442] /* MatStm2.theta_dew[3] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[448] /* MatStm2.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = data->localData[0]->realVars[313] /* MatStm2.T variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[6] = data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[7] = data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[8] = data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[9] = data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,411};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 411 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[441] /* MatStm2.theta_dew[2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[442] /* MatStm2.theta_dew[3] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[448] /* MatStm2.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  data->localData[0]->realVars[313] /* MatStm2.T variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[6];
  data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[7];
  data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[8];
  data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[9];
  TRACE_POP
}
extern void Flowsheet_eqFunction_833(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_832(DATA *data, threadData_t *threadData);


/*
equation index: 414
type: ALGORITHM

  MatStm2.MW[3] := $START.MatStm2.MW[3];
  MatStm2.MW[2] := $START.MatStm2.MW[2];
  MatStm2.MW[1] := $START.MatStm2.MW[1];
  for i in 1:2 loop
    MatStm2.MW[:] := {MatStm2.MW[1] + MatStm2.compMolFrac[1,i] * MatStm2.comp[i].MW, MatStm2.MW[2] + MatStm2.compMolFrac[2,i] * MatStm2.comp[i].MW, MatStm2.MW[3] + MatStm2.compMolFrac[3,i] * MatStm2.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  data->localData[0]->realVars[295] /* MatStm2.MW[3] variable */ = data->modelData->realVarsData[295].attribute /* MatStm2.MW[3] variable */.start;

  data->localData[0]->realVars[294] /* MatStm2.MW[2] variable */ = data->modelData->realVarsData[294].attribute /* MatStm2.MW[2] variable */.start;

  data->localData[0]->realVars[293] /* MatStm2.MW[1] variable */ = data->modelData->realVarsData[293].attribute /* MatStm2.MW[1] variable */.start;

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 2);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp3, tmp5); $Pi += tmp4)
    {
      array_alloc_scalar_real_array(&tmp0, 3, (modelica_real)data->localData[0]->realVars[293] /* MatStm2.MW[1] variable */ + ((&data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[480])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[294] /* MatStm2.MW[2] variable */ + ((&data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[480])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[295] /* MatStm2.MW[3] variable */ + ((&data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[480])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
      real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[293] /* MatStm2.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp0, &tmp2, &tmp1);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_837(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_838(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_835(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_840(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_836(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_839(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_830(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_831(DATA *data, threadData_t *threadData);


/*
equation index: 423
type: LINEAR

<var>MatStm2._compMasFrac[3,1]</var>
<var>MatStm2._compMasFrac[1,1]</var>
<var>MatStm2._compMasFrac[2,2]</var>
<var>MatStm2._compMasFrac[2,1]</var>
<var>MatStm2._compMasFrac[3,2]</var>
<row>
  <cell>if 101325.0 >= MatStm2.Pbubl then -MatStm2.compMasFrac[1,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,2] else -MatStm2.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,1] else MatStm2.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101325.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[324] /* MatStm2.compMasFrac[3,1] variable */,data->localData[1]->realVars[320] /* MatStm2.compMasFrac[1,1] variable */,data->localData[1]->realVars[323] /* MatStm2.compMasFrac[2,2] variable */,data->localData[1]->realVars[322] /* MatStm2.compMasFrac[2,1] variable */,data->localData[1]->realVars[325] /* MatStm2.compMasFrac[3,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 423 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,423};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 423 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[324] /* MatStm2.compMasFrac[3,1] variable */ = aux_x[0];
  data->localData[0]->realVars[320] /* MatStm2.compMasFrac[1,1] variable */ = aux_x[1];
  data->localData[0]->realVars[323] /* MatStm2.compMasFrac[2,2] variable */ = aux_x[2];
  data->localData[0]->realVars[322] /* MatStm2.compMasFrac[2,1] variable */ = aux_x[3];
  data->localData[0]->realVars[325] /* MatStm2.compMasFrac[3,2] variable */ = aux_x[4];
  TRACE_POP
}

/*
equation index: 424
type: ALGORITHM

  (MatStm2.compMolEntr[2,2], MatStm2.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[2].AS, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tb, MatStm2.comp[2].Tc, MatStm2.T, 101325.0, MatStm2.compMolFrac[2,2], MatStm2.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  real_array tmp6;
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526], (modelica_real)data->simulationInfo->realParameter[527]);
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427]);
  data->localData[0]->realVars[335] /* MatStm2.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[399], tmp6, tmp7, data->simulationInfo->realParameter[495], data->simulationInfo->realParameter[497], data->localData[0]->realVars[313] /* MatStm2.T variable */, 101325.0, data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */, data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[337] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_843(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_844(DATA *data, threadData_t *threadData);


/*
equation index: 427
type: ALGORITHM

  (MatStm2.compMolEntr[2,1], MatStm2.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[1].AS, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tb, MatStm2.comp[1].Tc, MatStm2.T, 101325.0, MatStm2.compMolFrac[2,1], MatStm2.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421]);
  data->localData[0]->realVars[334] /* MatStm2.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[398], tmp8, tmp9, data->simulationInfo->realParameter[494], data->simulationInfo->realParameter[496], data->localData[0]->realVars[313] /* MatStm2.T variable */, 101325.0, data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */, data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[336] /* MatStm2.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_847(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_846(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_848(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_850(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_849(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_851(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_852(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_853(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_854(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_855(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_857(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_856(DATA *data, threadData_t *threadData);


/*
equation index: 440
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[1] = 150.0
*/
void Flowsheet_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  data->localData[0]->realVars[447] /* MatStm2.totMolFlo[1] variable */ = 150.0;
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
MatStm2._P = 101325.0
*/
void Flowsheet_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  data->localData[0]->realVars[296] /* MatStm2.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  data->localData[0]->realVars[226] /* MatStm1.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  data->localData[0]->realVars[227] /* MatStm1.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  data->localData[0]->realVars[220] /* MatStm1.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  data->localData[0]->realVars[221] /* MatStm1.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  data->localData[0]->realVars[223] /* MatStm1.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  data->localData[0]->realVars[224] /* MatStm1.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
MatStm1._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  data->localData[0]->realVars[204] /* MatStm1.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
MatStm1._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  data->localData[0]->realVars[269] /* MatStm1.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
MatStm1._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  data->localData[0]->realVars[205] /* MatStm1.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
MatStm1._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  data->localData[0]->realVars[270] /* MatStm1.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  data->localData[0]->realVars[408] /* MatStm2.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  data->localData[0]->realVars[409] /* MatStm2.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  data->localData[0]->realVars[402] /* MatStm2.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  data->localData[0]->realVars[403] /* MatStm2.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  data->localData[0]->realVars[405] /* MatStm2.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  data->localData[0]->realVars[406] /* MatStm2.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
MatStm2._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  data->localData[0]->realVars[386] /* MatStm2.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
MatStm2._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  data->localData[0]->realVars[452] /* MatStm2.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
MatStm2._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  data->localData[0]->realVars[387] /* MatStm2.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
MatStm2._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  data->localData[0]->realVars[453] /* MatStm2.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
MatStm3._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  data->localData[0]->realVars[591] /* MatStm3.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
MatStm3._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->localData[0]->realVars[592] /* MatStm3.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
MatStm3._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  data->localData[0]->realVars[585] /* MatStm3.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
MatStm3._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  data->localData[0]->realVars[586] /* MatStm3.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
MatStm3._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->localData[0]->realVars[588] /* MatStm3.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
MatStm3._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  data->localData[0]->realVars[589] /* MatStm3.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
MatStm3._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  data->localData[0]->realVars[569] /* MatStm3.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
MatStm3._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  data->localData[0]->realVars[634] /* MatStm3.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
MatStm3._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  data->localData[0]->realVars[570] /* MatStm3.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
MatStm3._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  data->localData[0]->realVars[635] /* MatStm3.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
MatStm3._P = 101325.0
*/
void Flowsheet_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  data->localData[0]->realVars[479] /* MatStm3.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
MatStm3._T = 310.0
*/
void Flowsheet_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->localData[0]->realVars[496] /* MatStm3.T variable */ = 310.0;
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[1] = 80.0
*/
void Flowsheet_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->localData[0]->realVars[630] /* MatStm3.totMolFlo[1] variable */ = 80.0;
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
MatStm1._P = 101325.0
*/
void Flowsheet_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->localData[0]->realVars[114] /* MatStm1.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
MatStm1._T = 320.0
*/
void Flowsheet_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  data->localData[0]->realVars[131] /* MatStm1.T variable */ = 320.0;
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[1] = 70.0
*/
void Flowsheet_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  data->localData[0]->realVars[265] /* MatStm1.totMolFlo[1] variable */ = 70.0;
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
  Flowsheet_eqFunction_68(data, threadData);
  Flowsheet_eqFunction_69(data, threadData);
  Flowsheet_eqFunction_70(data, threadData);
  Flowsheet_eqFunction_71(data, threadData);
  Flowsheet_eqFunction_72(data, threadData);
  Flowsheet_eqFunction_73(data, threadData);
  Flowsheet_eqFunction_74(data, threadData);
  Flowsheet_eqFunction_75(data, threadData);
  Flowsheet_eqFunction_76(data, threadData);
  Flowsheet_eqFunction_77(data, threadData);
  Flowsheet_eqFunction_78(data, threadData);
  Flowsheet_eqFunction_79(data, threadData);
  Flowsheet_eqFunction_80(data, threadData);
  Flowsheet_eqFunction_81(data, threadData);
  Flowsheet_eqFunction_82(data, threadData);
  Flowsheet_eqFunction_83(data, threadData);
  Flowsheet_eqFunction_84(data, threadData);
  Flowsheet_eqFunction_85(data, threadData);
  Flowsheet_eqFunction_86(data, threadData);
  Flowsheet_eqFunction_87(data, threadData);
  Flowsheet_eqFunction_88(data, threadData);
  Flowsheet_eqFunction_89(data, threadData);
  Flowsheet_eqFunction_90(data, threadData);
  Flowsheet_eqFunction_91(data, threadData);
  Flowsheet_eqFunction_92(data, threadData);
  Flowsheet_eqFunction_93(data, threadData);
  Flowsheet_eqFunction_94(data, threadData);
  Flowsheet_eqFunction_95(data, threadData);
  Flowsheet_eqFunction_96(data, threadData);
  Flowsheet_eqFunction_97(data, threadData);
  Flowsheet_eqFunction_98(data, threadData);
  Flowsheet_eqFunction_99(data, threadData);
  Flowsheet_eqFunction_100(data, threadData);
  Flowsheet_eqFunction_101(data, threadData);
  Flowsheet_eqFunction_102(data, threadData);
  Flowsheet_eqFunction_103(data, threadData);
  Flowsheet_eqFunction_104(data, threadData);
  Flowsheet_eqFunction_105(data, threadData);
  Flowsheet_eqFunction_106(data, threadData);
  Flowsheet_eqFunction_107(data, threadData);
  Flowsheet_eqFunction_108(data, threadData);
  Flowsheet_eqFunction_109(data, threadData);
  Flowsheet_eqFunction_110(data, threadData);
  Flowsheet_eqFunction_111(data, threadData);
  Flowsheet_eqFunction_112(data, threadData);
  Flowsheet_eqFunction_113(data, threadData);
  Flowsheet_eqFunction_114(data, threadData);
  Flowsheet_eqFunction_115(data, threadData);
  Flowsheet_eqFunction_116(data, threadData);
  Flowsheet_eqFunction_117(data, threadData);
  Flowsheet_eqFunction_118(data, threadData);
  Flowsheet_eqFunction_119(data, threadData);
  Flowsheet_eqFunction_120(data, threadData);
  Flowsheet_eqFunction_121(data, threadData);
  Flowsheet_eqFunction_122(data, threadData);
  Flowsheet_eqFunction_123(data, threadData);
  Flowsheet_eqFunction_124(data, threadData);
  Flowsheet_eqFunction_125(data, threadData);
  Flowsheet_eqFunction_126(data, threadData);
  Flowsheet_eqFunction_127(data, threadData);
  Flowsheet_eqFunction_128(data, threadData);
  Flowsheet_eqFunction_129(data, threadData);
  Flowsheet_eqFunction_130(data, threadData);
  Flowsheet_eqFunction_131(data, threadData);
  Flowsheet_eqFunction_501(data, threadData);
  Flowsheet_eqFunction_500(data, threadData);
  Flowsheet_eqFunction_499(data, threadData);
  Flowsheet_eqFunction_498(data, threadData);
  Flowsheet_eqFunction_191(data, threadData);
  Flowsheet_eqFunction_596(data, threadData);
  Flowsheet_eqFunction_595(data, threadData);
  Flowsheet_eqFunction_194(data, threadData);
  Flowsheet_eqFunction_593(data, threadData);
  Flowsheet_eqFunction_597(data, threadData);
  Flowsheet_eqFunction_588(data, threadData);
  Flowsheet_eqFunction_598(data, threadData);
  Flowsheet_eqFunction_594(data, threadData);
  Flowsheet_eqFunction_589(data, threadData);
  Flowsheet_eqFunction_201(data, threadData);
  Flowsheet_eqFunction_580(data, threadData);
  Flowsheet_eqFunction_581(data, threadData);
  Flowsheet_eqFunction_583(data, threadData);
  Flowsheet_eqFunction_582(data, threadData);
  Flowsheet_eqFunction_586(data, threadData);
  Flowsheet_eqFunction_603(data, threadData);
  Flowsheet_eqFunction_605(data, threadData);
  Flowsheet_eqFunction_604(data, threadData);
  Flowsheet_eqFunction_585(data, threadData);
  Flowsheet_eqFunction_600(data, threadData);
  Flowsheet_eqFunction_602(data, threadData);
  Flowsheet_eqFunction_601(data, threadData);
  Flowsheet_eqFunction_214(data, threadData);
  Flowsheet_eqFunction_592(data, threadData);
  Flowsheet_eqFunction_591(data, threadData);
  Flowsheet_eqFunction_606(data, threadData);
  Flowsheet_eqFunction_608(data, threadData);
  Flowsheet_eqFunction_607(data, threadData);
  Flowsheet_eqFunction_220(data, threadData);
  Flowsheet_eqFunction_496(data, threadData);
  Flowsheet_eqFunction_494(data, threadData);
  Flowsheet_eqFunction_497(data, threadData);
  Flowsheet_eqFunction_495(data, threadData);
  Flowsheet_eqFunction_491(data, threadData);
  Flowsheet_eqFunction_490(data, threadData);
  Flowsheet_eqFunction_227(data, threadData);
  Flowsheet_eqFunction_487(data, threadData);
  Flowsheet_eqFunction_486(data, threadData);
  Flowsheet_eqFunction_230(data, threadData);
  Flowsheet_eqFunction_485(data, threadData);
  Flowsheet_eqFunction_484(data, threadData);
  Flowsheet_eqFunction_483(data, threadData);
  Flowsheet_eqFunction_482(data, threadData);
  Flowsheet_eqFunction_481(data, threadData);
  Flowsheet_eqFunction_480(data, threadData);
  Flowsheet_eqFunction_479(data, threadData);
  Flowsheet_eqFunction_478(data, threadData);
  Flowsheet_eqFunction_294(data, threadData);
  Flowsheet_eqFunction_691(data, threadData);
  Flowsheet_eqFunction_692(data, threadData);
  Flowsheet_eqFunction_297(data, threadData);
  Flowsheet_eqFunction_705(data, threadData);
  Flowsheet_eqFunction_703(data, threadData);
  Flowsheet_eqFunction_706(data, threadData);
  Flowsheet_eqFunction_704(data, threadData);
  Flowsheet_eqFunction_708(data, threadData);
  Flowsheet_eqFunction_709(data, threadData);
  Flowsheet_eqFunction_304(data, threadData);
  Flowsheet_eqFunction_696(data, threadData);
  Flowsheet_eqFunction_695(data, threadData);
  Flowsheet_eqFunction_694(data, threadData);
  Flowsheet_eqFunction_693(data, threadData);
  Flowsheet_eqFunction_699(data, threadData);
  Flowsheet_eqFunction_714(data, threadData);
  Flowsheet_eqFunction_716(data, threadData);
  Flowsheet_eqFunction_715(data, threadData);
  Flowsheet_eqFunction_698(data, threadData);
  Flowsheet_eqFunction_711(data, threadData);
  Flowsheet_eqFunction_713(data, threadData);
  Flowsheet_eqFunction_712(data, threadData);
  Flowsheet_eqFunction_317(data, threadData);
  Flowsheet_eqFunction_701(data, threadData);
  Flowsheet_eqFunction_707(data, threadData);
  Flowsheet_eqFunction_860(data, threadData);
  Flowsheet_eqFunction_862(data, threadData);
  Flowsheet_eqFunction_861(data, threadData);
  Flowsheet_eqFunction_323(data, threadData);
  Flowsheet_eqFunction_717(data, threadData);
  Flowsheet_eqFunction_859(data, threadData);
  Flowsheet_eqFunction_858(data, threadData);
  Flowsheet_eqFunction_411(data, threadData);
  Flowsheet_eqFunction_833(data, threadData);
  Flowsheet_eqFunction_832(data, threadData);
  Flowsheet_eqFunction_414(data, threadData);
  Flowsheet_eqFunction_837(data, threadData);
  Flowsheet_eqFunction_838(data, threadData);
  Flowsheet_eqFunction_835(data, threadData);
  Flowsheet_eqFunction_840(data, threadData);
  Flowsheet_eqFunction_836(data, threadData);
  Flowsheet_eqFunction_839(data, threadData);
  Flowsheet_eqFunction_830(data, threadData);
  Flowsheet_eqFunction_831(data, threadData);
  Flowsheet_eqFunction_423(data, threadData);
  Flowsheet_eqFunction_424(data, threadData);
  Flowsheet_eqFunction_843(data, threadData);
  Flowsheet_eqFunction_844(data, threadData);
  Flowsheet_eqFunction_427(data, threadData);
  Flowsheet_eqFunction_847(data, threadData);
  Flowsheet_eqFunction_846(data, threadData);
  Flowsheet_eqFunction_848(data, threadData);
  Flowsheet_eqFunction_850(data, threadData);
  Flowsheet_eqFunction_849(data, threadData);
  Flowsheet_eqFunction_851(data, threadData);
  Flowsheet_eqFunction_852(data, threadData);
  Flowsheet_eqFunction_853(data, threadData);
  Flowsheet_eqFunction_854(data, threadData);
  Flowsheet_eqFunction_855(data, threadData);
  Flowsheet_eqFunction_857(data, threadData);
  Flowsheet_eqFunction_856(data, threadData);
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
  Flowsheet_eqFunction_472(data, threadData);
  Flowsheet_eqFunction_473(data, threadData);
  Flowsheet_eqFunction_474(data, threadData);
  Flowsheet_eqFunction_475(data, threadData);
  Flowsheet_eqFunction_476(data, threadData);
  Flowsheet_eqFunction_477(data, threadData);
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

