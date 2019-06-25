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
  data->localData[0]->realVars[82] /* MatStm1.resMolSpHeat[1] variable */ = 0.0;
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
  data->localData[0]->realVars[76] /* MatStm1.resMolEnth[1] variable */ = 0.0;
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
  data->localData[0]->realVars[79] /* MatStm1.resMolEntr[1] variable */ = 0.0;
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
  data->localData[0]->realVars[148] /* MatStm2.gamma[1] variable */ = 1.0;
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
  data->localData[0]->realVars[149] /* MatStm2.gamma[2] variable */ = 1.0;
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
  data->localData[0]->realVars[173] /* MatStm2.resMolSpHeat[1] variable */ = 0.0;
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
  data->localData[0]->realVars[167] /* MatStm2.resMolEnth[1] variable */ = 0.0;
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
  data->localData[0]->realVars[170] /* MatStm2.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
MatStm1._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[2].VP[1], MatStm1.comp[2].VP[2], MatStm1.comp[2].VP[3], MatStm1.comp[2].VP[4], MatStm1.comp[2].VP[5], MatStm1.comp[2].VP[6]}, 310.0)
*/
void Flowsheet_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[193], (modelica_real)data->simulationInfo->realParameter[194], (modelica_real)data->simulationInfo->realParameter[195], (modelica_real)data->simulationInfo->realParameter[196], (modelica_real)data->simulationInfo->realParameter[197], (modelica_real)data->simulationInfo->realParameter[198]);
  data->localData[0]->realVars[14] /* MatStm1.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, 310.0);
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
MatStm1._K[2] = 9.869232667160129e-006 * MatStm1.Psat[2]
*/
void Flowsheet_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[6] /* MatStm1.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[14] /* MatStm1.Psat[2] variable */);
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
MatStm1._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[1].VP[1], MatStm1.comp[1].VP[2], MatStm1.comp[1].VP[3], MatStm1.comp[1].VP[4], MatStm1.comp[1].VP[5], MatStm1.comp[1].VP[6]}, 310.0)
*/
void Flowsheet_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[187], (modelica_real)data->simulationInfo->realParameter[188], (modelica_real)data->simulationInfo->realParameter[189], (modelica_real)data->simulationInfo->realParameter[190], (modelica_real)data->simulationInfo->realParameter[191], (modelica_real)data->simulationInfo->realParameter[192]);
  data->localData[0]->realVars[13] /* MatStm1.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp1, 310.0);
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
MatStm1._K[1] = 9.869232667160129e-006 * MatStm1.Psat[1]
*/
void Flowsheet_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[5] /* MatStm1.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[13] /* MatStm1.Psat[1] variable */);
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, 310.0)
*/
void Flowsheet_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[33] /* MatStm1.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[170], tmp2, tmp3, data->simulationInfo->realParameter[180], 310.0);
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, 310.0)
*/
void Flowsheet_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  real_array tmp4;
  real_array tmp5;
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[31] /* MatStm1.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[170], tmp4, tmp5, data->simulationInfo->realParameter[180], 310.0);
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, 310.0)
*/
void Flowsheet_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  real_array tmp6;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  data->localData[0]->realVars[57] /* MatStm1.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp6, 310.0);
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[2].LiqCp[1], MatStm1.comp[2].LiqCp[2], MatStm1.comp[2].LiqCp[3], MatStm1.comp[2].LiqCp[4], MatStm1.comp[2].LiqCp[5], MatStm1.comp[2].LiqCp[6]}, 310.0)
*/
void Flowsheet_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[121], (modelica_real)data->simulationInfo->realParameter[122], (modelica_real)data->simulationInfo->realParameter[123], (modelica_real)data->simulationInfo->realParameter[124], (modelica_real)data->simulationInfo->realParameter[125], (modelica_real)data->simulationInfo->realParameter[126]);
  data->localData[0]->realVars[55] /* MatStm1.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp7, 310.0);
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, 310.0)
*/
void Flowsheet_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[32] /* MatStm1.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[169], tmp8, tmp9, data->simulationInfo->realParameter[179], 310.0);
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, 310.0)
*/
void Flowsheet_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[30] /* MatStm1.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[169], tmp10, tmp11, data->simulationInfo->realParameter[179], 310.0);
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, 310.0)
*/
void Flowsheet_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  real_array tmp12;
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  data->localData[0]->realVars[56] /* MatStm1.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp12, 310.0);
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[1].LiqCp[1], MatStm1.comp[1].LiqCp[2], MatStm1.comp[1].LiqCp[3], MatStm1.comp[1].LiqCp[4], MatStm1.comp[1].LiqCp[5], MatStm1.comp[1].LiqCp[6]}, 310.0)
*/
void Flowsheet_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)data->simulationInfo->realParameter[115], (modelica_real)data->simulationInfo->realParameter[116], (modelica_real)data->simulationInfo->realParameter[117], (modelica_real)data->simulationInfo->realParameter[118], (modelica_real)data->simulationInfo->realParameter[119], (modelica_real)data->simulationInfo->realParameter[120]);
  data->localData[0]->realVars[54] /* MatStm1.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp13, 310.0);
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,1] = 0.3
*/
void Flowsheet_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[46] /* MatStm1.compMolFrac[1,1] variable */ = 0.3;
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,1] = 95.0 * MatStm1.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[40] /* MatStm1.compMolFlo[1,1] variable */ = (95.0) * (data->localData[0]->realVars[46] /* MatStm1.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,1] = MatStm1.compMolFlo[1,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[40] /* MatStm1.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[163]);
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,2] = 0.7
*/
void Flowsheet_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->localData[0]->realVars[47] /* MatStm1.compMolFrac[1,2] variable */ = 0.7;
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,2] = 95.0 * MatStm1.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[41] /* MatStm1.compMolFlo[1,2] variable */ = (95.0) * (data->localData[0]->realVars[47] /* MatStm1.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,2] = MatStm1.compMolFlo[1,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[17] /* MatStm1.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[41] /* MatStm1.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[164]);
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
MatStm1._Pbubl = MatStm1.compMolFrac[1,1] * exp(MatStm1.comp[1].VP[2] + MatStm1.comp[1].VP[3] / 310.0 + MatStm1.comp[1].VP[4] * 5.736572297479192 + MatStm1.comp[1].VP[5] * 310.0 ^ MatStm1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp(MatStm1.comp[2].VP[2] + MatStm1.comp[2].VP[3] / 310.0 + MatStm1.comp[2].VP[4] * 5.736572297479192 + MatStm1.comp[2].VP[5] * 310.0 ^ MatStm1.comp[2].VP[6])
*/
void Flowsheet_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
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
  modelica_real tmp27;
  tmp14 = 310.0;
  tmp15 = data->simulationInfo->realParameter[192];
  if(tmp14 < 0.0 && tmp15 != 0.0)
  {
    tmp17 = modf(tmp15, &tmp18);
    
    if(tmp17 > 0.5)
    {
      tmp17 -= 1.0;
      tmp18 += 1.0;
    }
    else if(tmp17 < -0.5)
    {
      tmp17 += 1.0;
      tmp18 -= 1.0;
    }
    
    if(fabs(tmp17) < 1e-10)
      tmp16 = pow(tmp14, tmp18);
    else
    {
      tmp20 = modf(1.0/tmp15, &tmp19);
      if(tmp20 > 0.5)
      {
        tmp20 -= 1.0;
        tmp19 += 1.0;
      }
      else if(tmp20 < -0.5)
      {
        tmp20 += 1.0;
        tmp19 -= 1.0;
      }
      if(fabs(tmp20) < 1e-10 && ((unsigned long)tmp19 & 1))
      {
        tmp16 = -pow(-tmp14, tmp17)*pow(tmp14, tmp18);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp14, tmp15);
      }
    }
  }
  else
  {
    tmp16 = pow(tmp14, tmp15);
  }
  if(isnan(tmp16) || isinf(tmp16))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp14, tmp15);
  }tmp21 = 310.0;
  tmp22 = data->simulationInfo->realParameter[198];
  if(tmp21 < 0.0 && tmp22 != 0.0)
  {
    tmp24 = modf(tmp22, &tmp25);
    
    if(tmp24 > 0.5)
    {
      tmp24 -= 1.0;
      tmp25 += 1.0;
    }
    else if(tmp24 < -0.5)
    {
      tmp24 += 1.0;
      tmp25 -= 1.0;
    }
    
    if(fabs(tmp24) < 1e-10)
      tmp23 = pow(tmp21, tmp25);
    else
    {
      tmp27 = modf(1.0/tmp22, &tmp26);
      if(tmp27 > 0.5)
      {
        tmp27 -= 1.0;
        tmp26 += 1.0;
      }
      else if(tmp27 < -0.5)
      {
        tmp27 += 1.0;
        tmp26 -= 1.0;
      }
      if(fabs(tmp27) < 1e-10 && ((unsigned long)tmp26 & 1))
      {
        tmp23 = -pow(-tmp21, tmp24)*pow(tmp21, tmp25);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp21, tmp22);
      }
    }
  }
  else
  {
    tmp23 = pow(tmp21, tmp22);
  }
  if(isnan(tmp23) || isinf(tmp23))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp21, tmp22);
  }
  data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */ = (data->localData[0]->realVars[46] /* MatStm1.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[188] + DIVISION_SIM(data->simulationInfo->realParameter[189],310.0,"310.0",equationIndexes) + (data->simulationInfo->realParameter[190]) * (5.736572297479192) + (data->simulationInfo->realParameter[191]) * (tmp16))) + (data->localData[0]->realVars[47] /* MatStm1.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[194] + DIVISION_SIM(data->simulationInfo->realParameter[195],310.0,"310.0",equationIndexes) + (data->simulationInfo->realParameter[196]) * (5.736572297479192) + (data->simulationInfo->realParameter[197]) * (tmp23)));
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
MatStm1._Pdew = 1.0 / (MatStm1.compMolFrac[1,1] * exp((-MatStm1.comp[1].VP[2]) - MatStm1.comp[1].VP[3] / 310.0 - MatStm1.comp[1].VP[4] * 5.736572297479192 - MatStm1.comp[1].VP[5] * 310.0 ^ MatStm1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp((-MatStm1.comp[2].VP[2]) - MatStm1.comp[2].VP[3] / 310.0 - MatStm1.comp[2].VP[4] * 5.736572297479192 - MatStm1.comp[2].VP[5] * 310.0 ^ MatStm1.comp[2].VP[6]))
*/
void Flowsheet_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
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
  tmp28 = 310.0;
  tmp29 = data->simulationInfo->realParameter[192];
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
  }tmp35 = 310.0;
  tmp36 = data->simulationInfo->realParameter[198];
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
  data->localData[0]->realVars[12] /* MatStm1.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[46] /* MatStm1.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[188]) - (DIVISION_SIM(data->simulationInfo->realParameter[189],310.0,"310.0",equationIndexes)) - ((data->simulationInfo->realParameter[190]) * (5.736572297479192)) - ((data->simulationInfo->realParameter[191]) * (tmp30)))) + (data->localData[0]->realVars[47] /* MatStm1.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[194]) - (DIVISION_SIM(data->simulationInfo->realParameter[195],310.0,"310.0",equationIndexes)) - ((data->simulationInfo->realParameter[196]) * (5.736572297479192)) - ((data->simulationInfo->realParameter[197]) * (tmp37)))),"MatStm1.compMolFrac[1,1] * exp((-MatStm1.comp[1].VP[2]) - MatStm1.comp[1].VP[3] / 310.0 - MatStm1.comp[1].VP[4] * 5.736572297479192 - MatStm1.comp[1].VP[5] * 310.0 ^ MatStm1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp((-MatStm1.comp[2].VP[2]) - MatStm1.comp[2].VP[3] / 310.0 - MatStm1.comp[2].VP[4] * 5.736572297479192 - MatStm1.comp[2].VP[5] * 310.0 ^ MatStm1.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}

void Flowsheet_eqFunction_31(DATA*, threadData_t*);
void Flowsheet_eqFunction_32(DATA*, threadData_t*);
void Flowsheet_eqFunction_33(DATA*, threadData_t*);
void Flowsheet_eqFunction_34(DATA*, threadData_t*);
void Flowsheet_eqFunction_35(DATA*, threadData_t*);
void Flowsheet_eqFunction_36(DATA*, threadData_t*);
void Flowsheet_eqFunction_37(DATA*, threadData_t*);
void Flowsheet_eqFunction_42(DATA*, threadData_t*);
void Flowsheet_eqFunction_41(DATA*, threadData_t*);
void Flowsheet_eqFunction_40(DATA*, threadData_t*);
void Flowsheet_eqFunction_39(DATA*, threadData_t*);
void Flowsheet_eqFunction_38(DATA*, threadData_t*);
/*
equation index: 55
indexNonlinear: 0
type: NONLINEAR

vars: {MatStm1._totMolFlo[2], MatStm1._compMolFrac[2,1], MatStm1._compMolFrac[3,2], MatStm1._compMolFrac[3,1], MatStm1._compMolFrac[2,2]}
eqns: {31, 32, 33, 34, 35, 36, 37, 42, 41, 40, 39, 38}
*/
void Flowsheet_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 55 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[89] /* MatStm1.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[48] /* MatStm1.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[51] /* MatStm1.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[50] /* MatStm1.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[49] /* MatStm1.compMolFrac[2,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,55};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 55 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[89] /* MatStm1.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[48] /* MatStm1.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[51] /* MatStm1.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[50] /* MatStm1.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[49] /* MatStm1.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  TRACE_POP
}
extern void Flowsheet_eqFunction_206(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_207(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_212(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_211(DATA *data, threadData_t *threadData);


/*
equation index: 60
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, 310.0, 101325.0, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[36] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[81], tmp0, tmp1, data->simulationInfo->realParameter[177], data->simulationInfo->realParameter[179], 310.0, 101325.0, data->localData[0]->realVars[48] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[50] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[38] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_222(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_221(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_210(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_229(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_231(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_230(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_209(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_226(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_228(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_227(DATA *data, threadData_t *threadData);


/*
equation index: 71
type: ALGORITHM

  (MatStm1.compMolEntr[2,2], MatStm1.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[2].AS, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tb, MatStm1.comp[2].Tc, 310.0, 101325.0, MatStm1.compMolFrac[2,2], MatStm1.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[37] /* MatStm1.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[82], tmp2, tmp3, data->simulationInfo->realParameter[178], data->simulationInfo->realParameter[180], 310.0, 101325.0, data->localData[0]->realVars[49] /* MatStm1.compMolFrac[2,2] variable */, data->localData[0]->realVars[51] /* MatStm1.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[39] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_220(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_214(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_232(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_234(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_233(DATA *data, threadData_t *threadData);


/*
equation index: 77
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:2 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[9] /* MatStm1.MW[3] variable */ = data->modelData->realVarsData[9].attribute /* MatStm1.MW[3] variable */.start;

  data->localData[0]->realVars[8] /* MatStm1.MW[2] variable */ = data->modelData->realVarsData[8].attribute /* MatStm1.MW[2] variable */.start;

  data->localData[0]->realVars[7] /* MatStm1.MW[1] variable */ = data->modelData->realVarsData[7].attribute /* MatStm1.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[7] /* MatStm1.MW[1] variable */ + ((&data->localData[0]->realVars[46] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[8] /* MatStm1.MW[2] variable */ + ((&data->localData[0]->realVars[46] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[9] /* MatStm1.MW[3] variable */ + ((&data->localData[0]->realVars[46] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[7] /* MatStm1.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_218(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_223(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_216(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_225(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_219(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_217(DATA *data, threadData_t *threadData);


/*
equation index: 84
type: LINEAR

<var>MatStm1._compMasFrac[3,1]</var>
<var>MatStm1._compMasFrac[1,1]</var>
<var>MatStm1._compMasFrac[3,2]</var>
<var>MatStm1._compMasFrac[2,1]</var>
<var>MatStm1._compMasFrac[2,2]</var>
<row>
  <cell>if 101325.0 >= MatStm1.Pbubl then -MatStm1.compMasFrac[1,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,2] else -MatStm1.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,1] else MatStm1.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[26] /* MatStm1.compMasFrac[3,1] variable */,data->localData[1]->realVars[22] /* MatStm1.compMasFrac[1,1] variable */,data->localData[1]->realVars[27] /* MatStm1.compMasFrac[3,2] variable */,data->localData[1]->realVars[24] /* MatStm1.compMasFrac[2,1] variable */,data->localData[1]->realVars[25] /* MatStm1.compMasFrac[2,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 84 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,84};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 84 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[26] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[0];
  data->localData[0]->realVars[22] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[1];
  data->localData[0]->realVars[27] /* MatStm1.compMasFrac[3,2] variable */ = aux_x[2];
  data->localData[0]->realVars[24] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[3];
  data->localData[0]->realVars[25] /* MatStm1.compMasFrac[2,2] variable */ = aux_x[4];
  TRACE_POP
}
extern void Flowsheet_eqFunction_235(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_238(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_236(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_237(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_239(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_302(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_240(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_241(DATA *data, threadData_t *threadData);


void Flowsheet_eqFunction_93(DATA*, threadData_t*);
void Flowsheet_eqFunction_94(DATA*, threadData_t*);
void Flowsheet_eqFunction_95(DATA*, threadData_t*);
void Flowsheet_eqFunction_96(DATA*, threadData_t*);
void Flowsheet_eqFunction_97(DATA*, threadData_t*);
void Flowsheet_eqFunction_98(DATA*, threadData_t*);
void Flowsheet_eqFunction_99(DATA*, threadData_t*);
void Flowsheet_eqFunction_100(DATA*, threadData_t*);
void Flowsheet_eqFunction_101(DATA*, threadData_t*);
void Flowsheet_eqFunction_102(DATA*, threadData_t*);
void Flowsheet_eqFunction_103(DATA*, threadData_t*);
void Flowsheet_eqFunction_104(DATA*, threadData_t*);
void Flowsheet_eqFunction_105(DATA*, threadData_t*);
void Flowsheet_eqFunction_106(DATA*, threadData_t*);
void Flowsheet_eqFunction_107(DATA*, threadData_t*);
void Flowsheet_eqFunction_108(DATA*, threadData_t*);
void Flowsheet_eqFunction_109(DATA*, threadData_t*);
void Flowsheet_eqFunction_110(DATA*, threadData_t*);
void Flowsheet_eqFunction_111(DATA*, threadData_t*);
void Flowsheet_eqFunction_117(DATA*, threadData_t*);
void Flowsheet_eqFunction_116(DATA*, threadData_t*);
void Flowsheet_eqFunction_115(DATA*, threadData_t*);
void Flowsheet_eqFunction_114(DATA*, threadData_t*);
void Flowsheet_eqFunction_113(DATA*, threadData_t*);
void Flowsheet_eqFunction_112(DATA*, threadData_t*);
/*
equation index: 118
indexNonlinear: 1
type: NONLINEAR

vars: {MatStm2._totMolFlo[3], MatStm2._compMolFrac[2,1], MatStm2._compMolFrac[2,2], MatStm2._compMolFrac[3,2], MatStm2._T, MatStm2._compMolFrac[3,1]}
eqns: {93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 117, 116, 115, 114, 113, 112}
*/
void Flowsheet_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 118 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[180] /* MatStm2.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[138] /* MatStm2.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[139] /* MatStm2.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[141] /* MatStm2.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[105] /* MatStm2.T variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[140] /* MatStm2.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,118};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 118 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[180] /* MatStm2.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[138] /* MatStm2.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[139] /* MatStm2.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[141] /* MatStm2.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[105] /* MatStm2.T variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[140] /* MatStm2.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  TRACE_POP
}
extern void Flowsheet_eqFunction_280(DATA *data, threadData_t *threadData);


/*
equation index: 120
type: ALGORITHM

  MatStm2.MW[3] := $START.MatStm2.MW[3];
  MatStm2.MW[2] := $START.MatStm2.MW[2];
  MatStm2.MW[1] := $START.MatStm2.MW[1];
  for i in 1:2 loop
    MatStm2.MW[:] := {MatStm2.MW[1] + MatStm2.compMolFrac[1,i] * MatStm2.comp[i].MW, MatStm2.MW[2] + MatStm2.compMolFrac[2,i] * MatStm2.comp[i].MW, MatStm2.MW[3] + MatStm2.compMolFrac[3,i] * MatStm2.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  data->localData[0]->realVars[99] /* MatStm2.MW[3] variable */ = data->modelData->realVarsData[99].attribute /* MatStm2.MW[3] variable */.start;

  data->localData[0]->realVars[98] /* MatStm2.MW[2] variable */ = data->modelData->realVarsData[98].attribute /* MatStm2.MW[2] variable */.start;

  data->localData[0]->realVars[97] /* MatStm2.MW[1] variable */ = data->modelData->realVarsData[97].attribute /* MatStm2.MW[1] variable */.start;

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 2);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp3, tmp5); $Pi += tmp4)
    {
      array_alloc_scalar_real_array(&tmp0, 3, (modelica_real)data->localData[0]->realVars[97] /* MatStm2.MW[1] variable */ + ((&data->localData[0]->realVars[136] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[98] /* MatStm2.MW[2] variable */ + ((&data->localData[0]->realVars[136] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[99] /* MatStm2.MW[3] variable */ + ((&data->localData[0]->realVars[136] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
      real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[97] /* MatStm2.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp0, &tmp2, &tmp1);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_295(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_296(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_273(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_274(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_275(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_276(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_277(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_278(DATA *data, threadData_t *threadData);


/*
equation index: 129
type: ALGORITHM

  (MatStm2.compMolEntr[2,2], MatStm2.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[2].AS, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tb, MatStm2.comp[2].Tc, MatStm2.T, 0.0, MatStm2.compMolFrac[2,2], MatStm2.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  real_array tmp6;
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364], (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368]);
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264], (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268]);
  data->localData[0]->realVars[127] /* MatStm2.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[240], tmp6, tmp7, data->simulationInfo->realParameter[336], data->simulationInfo->realParameter[338], data->localData[0]->realVars[105] /* MatStm2.T variable */, 0.0, data->localData[0]->realVars[139] /* MatStm2.compMolFrac[2,2] variable */, data->localData[0]->realVars[141] /* MatStm2.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[129] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_283(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_282(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_294(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_299(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_293(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_297(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_281(DATA *data, threadData_t *threadData);


/*
equation index: 137
type: LINEAR

<var>MatStm2._compMasFrac[2,2]</var>
<var>MatStm2._compMasFrac[3,2]</var>
<var>MatStm2._compMasFrac[2,1]</var>
<var>MatStm2._compMasFrac[1,1]</var>
<var>MatStm2._compMasFrac[3,1]</var>
<row>
  <cell>if 0.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,1] else if 0.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,1] else MatStm2.compMasFlo[1,1]</cell>
  <cell>if 0.0 >= MatStm2.Pbubl then 0.0 else if 0.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,2] else 0.0</cell>
  <cell>if 0.0 >= MatStm2.Pbubl then 0.0 else if 0.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,1] else 0.0</cell>
  <cell>if 0.0 >= MatStm2.Pbubl then 0.0 else if 0.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,1] else 0.0</cell>
  <cell>if 0.0 >= MatStm2.Pbubl then -MatStm2.compMasFrac[1,2] else if 0.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,2] else -MatStm2.compMasFrac[1,2]</cell>
</row>
<matrix>
  <cell row="0" col="3">
    <residual>-(if 0.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 0.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 0.0 >= MatStm2.Pbubl then -0.0 else if 0.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="1" col="0">
    <residual>-(if 0.0 >= MatStm2.Pbubl then 0.0 else if 0.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 0.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 0.0 >= MatStm2.Pbubl then -1.0 else if 0.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 0.0 >= MatStm2.Pbubl then 0.0 else if 0.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 0.0 >= MatStm2.Pbubl then 0.0 else if 0.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 0.0 >= MatStm2.Pbubl then 0.0 else if 0.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="2" col="4">
    <residual>-(if 0.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 0.0 >= MatStm2.Pbubl then 0.0 else if 0.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 0.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 0.0 >= MatStm2.Pbubl then 0.0 else if 0.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 0.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 0.0 >= MatStm2.Pbubl then 0.0 else if 0.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 1.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[115] /* MatStm2.compMasFrac[2,2] variable */,data->localData[1]->realVars[117] /* MatStm2.compMasFrac[3,2] variable */,data->localData[1]->realVars[114] /* MatStm2.compMasFrac[2,1] variable */,data->localData[1]->realVars[112] /* MatStm2.compMasFrac[1,1] variable */,data->localData[1]->realVars[116] /* MatStm2.compMasFrac[3,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 137 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,137};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 137 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[115] /* MatStm2.compMasFrac[2,2] variable */ = aux_x[0];
  data->localData[0]->realVars[117] /* MatStm2.compMasFrac[3,2] variable */ = aux_x[1];
  data->localData[0]->realVars[114] /* MatStm2.compMasFrac[2,1] variable */ = aux_x[2];
  data->localData[0]->realVars[112] /* MatStm2.compMasFrac[1,1] variable */ = aux_x[3];
  data->localData[0]->realVars[116] /* MatStm2.compMasFrac[3,1] variable */ = aux_x[4];
  TRACE_POP
}
extern void Flowsheet_eqFunction_289(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_290(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_291(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_301(DATA *data, threadData_t *threadData);


/*
equation index: 142
type: ALGORITHM

  (MatStm2.compMolEntr[2,1], MatStm2.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[1].AS, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tb, MatStm2.comp[1].Tc, MatStm2.T, 0.0, MatStm2.compMolFrac[2,1], MatStm2.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358], (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[257], (modelica_real)data->simulationInfo->realParameter[258], (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262]);
  data->localData[0]->realVars[126] /* MatStm2.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[239], tmp8, tmp9, data->simulationInfo->realParameter[335], data->simulationInfo->realParameter[337], data->localData[0]->realVars[105] /* MatStm2.T variable */, 0.0, data->localData[0]->realVars[138] /* MatStm2.compMolFrac[2,1] variable */, data->localData[0]->realVars[140] /* MatStm2.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[128] /* MatStm2.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_285(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_286(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_287(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_288(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_300(DATA *data, threadData_t *threadData);


/*
equation index: 148
type: SIMPLE_ASSIGN
MatStm2._P = 0.0
*/
void Flowsheet_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  data->localData[0]->realVars[100] /* MatStm2.P variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->localData[0]->realVars[60] /* MatStm1.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
MatStm1._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->localData[0]->realVars[62] /* MatStm1.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 151
type: SIMPLE_ASSIGN
MatStm1._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->localData[0]->realVars[66] /* MatStm1.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
MatStm1._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->localData[0]->realVars[93] /* MatStm1.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[2] = 1.0
*/
void Flowsheet_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->localData[0]->realVars[61] /* MatStm1.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
MatStm1._gammaDew[2] = 1.0
*/
void Flowsheet_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->localData[0]->realVars[63] /* MatStm1.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
MatStm1._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  data->localData[0]->realVars[67] /* MatStm1.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
MatStm1._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->localData[0]->realVars[94] /* MatStm1.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  data->localData[0]->realVars[83] /* MatStm1.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  data->localData[0]->realVars[84] /* MatStm1.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 159
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  data->localData[0]->realVars[77] /* MatStm1.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 160
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  data->localData[0]->realVars[78] /* MatStm1.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 161
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->localData[0]->realVars[80] /* MatStm1.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 162
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  data->localData[0]->realVars[81] /* MatStm1.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 163
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  data->localData[0]->realVars[150] /* MatStm2.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 164
type: SIMPLE_ASSIGN
MatStm2._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  data->localData[0]->realVars[152] /* MatStm2.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 165
type: SIMPLE_ASSIGN
MatStm2._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  data->localData[0]->realVars[156] /* MatStm2.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 166
type: SIMPLE_ASSIGN
MatStm2._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  data->localData[0]->realVars[183] /* MatStm2.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 167
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[2] = 1.0
*/
void Flowsheet_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->localData[0]->realVars[151] /* MatStm2.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 168
type: SIMPLE_ASSIGN
MatStm2._gammaDew[2] = 1.0
*/
void Flowsheet_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->localData[0]->realVars[153] /* MatStm2.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 169
type: SIMPLE_ASSIGN
MatStm2._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->localData[0]->realVars[157] /* MatStm2.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 170
type: SIMPLE_ASSIGN
MatStm2._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->localData[0]->realVars[184] /* MatStm2.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->localData[0]->realVars[174] /* MatStm2.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->localData[0]->realVars[175] /* MatStm2.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->localData[0]->realVars[168] /* MatStm2.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 174
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->localData[0]->realVars[169] /* MatStm2.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->localData[0]->realVars[171] /* MatStm2.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->localData[0]->realVars[172] /* MatStm2.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
Valve1._pressDrop = 101325.0
*/
void Flowsheet_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->localData[0]->realVars[185] /* Valve1.pressDrop variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
MatStm1._P = 101325.0
*/
void Flowsheet_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->localData[0]->realVars[10] /* MatStm1.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
MatStm1._T = 310.0
*/
void Flowsheet_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->localData[0]->realVars[15] /* MatStm1.T variable */ = 310.0;
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[1] = 95.0
*/
void Flowsheet_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->localData[0]->realVars[88] /* MatStm1.totMolFlo[1] variable */ = 95.0;
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
  Flowsheet_eqFunction_55(data, threadData);
  Flowsheet_eqFunction_206(data, threadData);
  Flowsheet_eqFunction_207(data, threadData);
  Flowsheet_eqFunction_212(data, threadData);
  Flowsheet_eqFunction_211(data, threadData);
  Flowsheet_eqFunction_60(data, threadData);
  Flowsheet_eqFunction_222(data, threadData);
  Flowsheet_eqFunction_221(data, threadData);
  Flowsheet_eqFunction_210(data, threadData);
  Flowsheet_eqFunction_229(data, threadData);
  Flowsheet_eqFunction_231(data, threadData);
  Flowsheet_eqFunction_230(data, threadData);
  Flowsheet_eqFunction_209(data, threadData);
  Flowsheet_eqFunction_226(data, threadData);
  Flowsheet_eqFunction_228(data, threadData);
  Flowsheet_eqFunction_227(data, threadData);
  Flowsheet_eqFunction_71(data, threadData);
  Flowsheet_eqFunction_220(data, threadData);
  Flowsheet_eqFunction_214(data, threadData);
  Flowsheet_eqFunction_232(data, threadData);
  Flowsheet_eqFunction_234(data, threadData);
  Flowsheet_eqFunction_233(data, threadData);
  Flowsheet_eqFunction_77(data, threadData);
  Flowsheet_eqFunction_218(data, threadData);
  Flowsheet_eqFunction_223(data, threadData);
  Flowsheet_eqFunction_216(data, threadData);
  Flowsheet_eqFunction_225(data, threadData);
  Flowsheet_eqFunction_219(data, threadData);
  Flowsheet_eqFunction_217(data, threadData);
  Flowsheet_eqFunction_84(data, threadData);
  Flowsheet_eqFunction_235(data, threadData);
  Flowsheet_eqFunction_238(data, threadData);
  Flowsheet_eqFunction_236(data, threadData);
  Flowsheet_eqFunction_237(data, threadData);
  Flowsheet_eqFunction_239(data, threadData);
  Flowsheet_eqFunction_302(data, threadData);
  Flowsheet_eqFunction_240(data, threadData);
  Flowsheet_eqFunction_241(data, threadData);
  Flowsheet_eqFunction_118(data, threadData);
  Flowsheet_eqFunction_280(data, threadData);
  Flowsheet_eqFunction_120(data, threadData);
  Flowsheet_eqFunction_295(data, threadData);
  Flowsheet_eqFunction_296(data, threadData);
  Flowsheet_eqFunction_273(data, threadData);
  Flowsheet_eqFunction_274(data, threadData);
  Flowsheet_eqFunction_275(data, threadData);
  Flowsheet_eqFunction_276(data, threadData);
  Flowsheet_eqFunction_277(data, threadData);
  Flowsheet_eqFunction_278(data, threadData);
  Flowsheet_eqFunction_129(data, threadData);
  Flowsheet_eqFunction_283(data, threadData);
  Flowsheet_eqFunction_282(data, threadData);
  Flowsheet_eqFunction_294(data, threadData);
  Flowsheet_eqFunction_299(data, threadData);
  Flowsheet_eqFunction_293(data, threadData);
  Flowsheet_eqFunction_297(data, threadData);
  Flowsheet_eqFunction_281(data, threadData);
  Flowsheet_eqFunction_137(data, threadData);
  Flowsheet_eqFunction_289(data, threadData);
  Flowsheet_eqFunction_290(data, threadData);
  Flowsheet_eqFunction_291(data, threadData);
  Flowsheet_eqFunction_301(data, threadData);
  Flowsheet_eqFunction_142(data, threadData);
  Flowsheet_eqFunction_285(data, threadData);
  Flowsheet_eqFunction_286(data, threadData);
  Flowsheet_eqFunction_287(data, threadData);
  Flowsheet_eqFunction_288(data, threadData);
  Flowsheet_eqFunction_300(data, threadData);
  Flowsheet_eqFunction_148(data, threadData);
  Flowsheet_eqFunction_149(data, threadData);
  Flowsheet_eqFunction_150(data, threadData);
  Flowsheet_eqFunction_151(data, threadData);
  Flowsheet_eqFunction_152(data, threadData);
  Flowsheet_eqFunction_153(data, threadData);
  Flowsheet_eqFunction_154(data, threadData);
  Flowsheet_eqFunction_155(data, threadData);
  Flowsheet_eqFunction_156(data, threadData);
  Flowsheet_eqFunction_157(data, threadData);
  Flowsheet_eqFunction_158(data, threadData);
  Flowsheet_eqFunction_159(data, threadData);
  Flowsheet_eqFunction_160(data, threadData);
  Flowsheet_eqFunction_161(data, threadData);
  Flowsheet_eqFunction_162(data, threadData);
  Flowsheet_eqFunction_163(data, threadData);
  Flowsheet_eqFunction_164(data, threadData);
  Flowsheet_eqFunction_165(data, threadData);
  Flowsheet_eqFunction_166(data, threadData);
  Flowsheet_eqFunction_167(data, threadData);
  Flowsheet_eqFunction_168(data, threadData);
  Flowsheet_eqFunction_169(data, threadData);
  Flowsheet_eqFunction_170(data, threadData);
  Flowsheet_eqFunction_171(data, threadData);
  Flowsheet_eqFunction_172(data, threadData);
  Flowsheet_eqFunction_173(data, threadData);
  Flowsheet_eqFunction_174(data, threadData);
  Flowsheet_eqFunction_175(data, threadData);
  Flowsheet_eqFunction_176(data, threadData);
  Flowsheet_eqFunction_177(data, threadData);
  Flowsheet_eqFunction_178(data, threadData);
  Flowsheet_eqFunction_179(data, threadData);
  Flowsheet_eqFunction_180(data, threadData);
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

