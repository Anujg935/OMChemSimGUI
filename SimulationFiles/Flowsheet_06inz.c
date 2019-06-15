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
  data->localData[0]->realVars[83] /* MatStm1.gamma[1] variable */ = 1.0;
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
  data->localData[0]->realVars[84] /* MatStm1.gamma[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
MatStm1._gamma[3] = 1.0
*/
void Flowsheet_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[85] /* MatStm1.gamma[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[1] = 0.0
*/
void Flowsheet_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[112] /* MatStm1.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[1] = 0.0
*/
void Flowsheet_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[106] /* MatStm1.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[1] = 0.0
*/
void Flowsheet_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[109] /* MatStm1.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
MatStm2._gamma[1] = 1.0
*/
void Flowsheet_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[202] /* MatStm2.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
MatStm2._gamma[2] = 1.0
*/
void Flowsheet_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[203] /* MatStm2.gamma[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
MatStm2._gamma[3] = 1.0
*/
void Flowsheet_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[204] /* MatStm2.gamma[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[1] = 0.0
*/
void Flowsheet_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[231] /* MatStm2.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[1] = 0.0
*/
void Flowsheet_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[225] /* MatStm2.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[1] = 0.0
*/
void Flowsheet_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[228] /* MatStm2.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
MatStm3._gamma[1] = 1.0
*/
void Flowsheet_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[320] /* MatStm3.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
MatStm3._gamma[2] = 1.0
*/
void Flowsheet_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[321] /* MatStm3.gamma[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
MatStm3._gamma[3] = 1.0
*/
void Flowsheet_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[322] /* MatStm3.gamma[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
MatStm3._resMolSpHeat[1] = 0.0
*/
void Flowsheet_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[349] /* MatStm3.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
MatStm3._resMolEnth[1] = 0.0
*/
void Flowsheet_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[343] /* MatStm3.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
MatStm3._resMolEntr[1] = 0.0
*/
void Flowsheet_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[346] /* MatStm3.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
MatStm3._Psat[3] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm3.comp[3].VP[1], MatStm3.comp[3].VP[2], MatStm3.comp[3].VP[3], MatStm3.comp[3].VP[4], MatStm3.comp[3].VP[5], MatStm3.comp[3].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[885], (modelica_real)data->simulationInfo->realParameter[886], (modelica_real)data->simulationInfo->realParameter[887], (modelica_real)data->simulationInfo->realParameter[888], (modelica_real)data->simulationInfo->realParameter[889], (modelica_real)data->simulationInfo->realParameter[890]);
  data->localData[0]->realVars[255] /* MatStm3.Psat[3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, 300.0);
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
MatStm3._K[3] = 9.869232667160129e-006 * MatStm3.Psat[3]
*/
void Flowsheet_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[246] /* MatStm3.K[3] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[255] /* MatStm3.Psat[3] variable */);
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
MatStm3._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm3.comp[2].VP[1], MatStm3.comp[2].VP[2], MatStm3.comp[2].VP[3], MatStm3.comp[2].VP[4], MatStm3.comp[2].VP[5], MatStm3.comp[2].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[879], (modelica_real)data->simulationInfo->realParameter[880], (modelica_real)data->simulationInfo->realParameter[881], (modelica_real)data->simulationInfo->realParameter[882], (modelica_real)data->simulationInfo->realParameter[883], (modelica_real)data->simulationInfo->realParameter[884]);
  data->localData[0]->realVars[254] /* MatStm3.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp1, 300.0);
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
MatStm3._K[2] = 9.869232667160129e-006 * MatStm3.Psat[2]
*/
void Flowsheet_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[245] /* MatStm3.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[254] /* MatStm3.Psat[2] variable */);
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
MatStm3._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm3.comp[1].VP[1], MatStm3.comp[1].VP[2], MatStm3.comp[1].VP[3], MatStm3.comp[1].VP[4], MatStm3.comp[1].VP[5], MatStm3.comp[1].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  real_array tmp2;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[873], (modelica_real)data->simulationInfo->realParameter[874], (modelica_real)data->simulationInfo->realParameter[875], (modelica_real)data->simulationInfo->realParameter[876], (modelica_real)data->simulationInfo->realParameter[877], (modelica_real)data->simulationInfo->realParameter[878]);
  data->localData[0]->realVars[253] /* MatStm3.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp2, 300.0);
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
MatStm3._K[1] = 9.869232667160129e-006 * MatStm3.Psat[1]
*/
void Flowsheet_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[244] /* MatStm3.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[253] /* MatStm3.Psat[1] variable */);
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[3,3] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm3.comp[3].SH, {MatStm3.comp[3].VapCp[1], MatStm3.comp[3].VapCp[2], MatStm3.comp[3].VapCp[3], MatStm3.comp[3].VapCp[4], MatStm3.comp[3].VapCp[5], MatStm3.comp[3].VapCp[6]}, {MatStm3.comp[3].HOV[1], MatStm3.comp[3].HOV[2], MatStm3.comp[3].HOV[3], MatStm3.comp[3].HOV[4], MatStm3.comp[3].HOV[5], MatStm3.comp[3].HOV[6]}, MatStm3.comp[3].Tc, 300.0)
*/
void Flowsheet_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  real_array tmp3;
  real_array tmp4;
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[903], (modelica_real)data->simulationInfo->realParameter[904], (modelica_real)data->simulationInfo->realParameter[905], (modelica_real)data->simulationInfo->realParameter[906], (modelica_real)data->simulationInfo->realParameter[907], (modelica_real)data->simulationInfo->realParameter[908]);
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[753], (modelica_real)data->simulationInfo->realParameter[754], (modelica_real)data->simulationInfo->realParameter[755], (modelica_real)data->simulationInfo->realParameter[756], (modelica_real)data->simulationInfo->realParameter[757], (modelica_real)data->simulationInfo->realParameter[758]);
  data->localData[0]->realVars[283] /* MatStm3.compMolEnth[3,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[848], tmp3, tmp4, data->simulationInfo->realParameter[863], 300.0);
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[2,3] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm3.comp[3].SH, {MatStm3.comp[3].VapCp[1], MatStm3.comp[3].VapCp[2], MatStm3.comp[3].VapCp[3], MatStm3.comp[3].VapCp[4], MatStm3.comp[3].VapCp[5], MatStm3.comp[3].VapCp[6]}, {MatStm3.comp[3].HOV[1], MatStm3.comp[3].HOV[2], MatStm3.comp[3].HOV[3], MatStm3.comp[3].HOV[4], MatStm3.comp[3].HOV[5], MatStm3.comp[3].HOV[6]}, MatStm3.comp[3].Tc, 300.0)
*/
void Flowsheet_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  real_array tmp5;
  real_array tmp6;
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[903], (modelica_real)data->simulationInfo->realParameter[904], (modelica_real)data->simulationInfo->realParameter[905], (modelica_real)data->simulationInfo->realParameter[906], (modelica_real)data->simulationInfo->realParameter[907], (modelica_real)data->simulationInfo->realParameter[908]);
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[753], (modelica_real)data->simulationInfo->realParameter[754], (modelica_real)data->simulationInfo->realParameter[755], (modelica_real)data->simulationInfo->realParameter[756], (modelica_real)data->simulationInfo->realParameter[757], (modelica_real)data->simulationInfo->realParameter[758]);
  data->localData[0]->realVars[280] /* MatStm3.compMolEnth[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[848], tmp5, tmp6, data->simulationInfo->realParameter[863], 300.0);
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[3,3] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm3.comp[3].VapCp[1], MatStm3.comp[3].VapCp[2], MatStm3.comp[3].VapCp[3], MatStm3.comp[3].VapCp[4], MatStm3.comp[3].VapCp[5], MatStm3.comp[3].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[903], (modelica_real)data->simulationInfo->realParameter[904], (modelica_real)data->simulationInfo->realParameter[905], (modelica_real)data->simulationInfo->realParameter[906], (modelica_real)data->simulationInfo->realParameter[907], (modelica_real)data->simulationInfo->realParameter[908]);
  data->localData[0]->realVars[319] /* MatStm3.compMolSpHeat[3,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp7, 300.0);
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[2,3] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm3.comp[3].LiqCp[1], MatStm3.comp[3].LiqCp[2], MatStm3.comp[3].LiqCp[3], MatStm3.comp[3].LiqCp[4], MatStm3.comp[3].LiqCp[5], MatStm3.comp[3].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  real_array tmp8;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[777], (modelica_real)data->simulationInfo->realParameter[778], (modelica_real)data->simulationInfo->realParameter[779], (modelica_real)data->simulationInfo->realParameter[780], (modelica_real)data->simulationInfo->realParameter[781], (modelica_real)data->simulationInfo->realParameter[782]);
  data->localData[0]->realVars[316] /* MatStm3.compMolSpHeat[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp8, 300.0);
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm3.comp[2].SH, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tc, 300.0)
*/
void Flowsheet_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  real_array tmp9;
  real_array tmp10;
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[897], (modelica_real)data->simulationInfo->realParameter[898], (modelica_real)data->simulationInfo->realParameter[899], (modelica_real)data->simulationInfo->realParameter[900], (modelica_real)data->simulationInfo->realParameter[901], (modelica_real)data->simulationInfo->realParameter[902]);
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[747], (modelica_real)data->simulationInfo->realParameter[748], (modelica_real)data->simulationInfo->realParameter[749], (modelica_real)data->simulationInfo->realParameter[750], (modelica_real)data->simulationInfo->realParameter[751], (modelica_real)data->simulationInfo->realParameter[752]);
  data->localData[0]->realVars[282] /* MatStm3.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[847], tmp9, tmp10, data->simulationInfo->realParameter[862], 300.0);
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm3.comp[2].SH, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tc, 300.0)
*/
void Flowsheet_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  real_array tmp11;
  real_array tmp12;
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[897], (modelica_real)data->simulationInfo->realParameter[898], (modelica_real)data->simulationInfo->realParameter[899], (modelica_real)data->simulationInfo->realParameter[900], (modelica_real)data->simulationInfo->realParameter[901], (modelica_real)data->simulationInfo->realParameter[902]);
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[747], (modelica_real)data->simulationInfo->realParameter[748], (modelica_real)data->simulationInfo->realParameter[749], (modelica_real)data->simulationInfo->realParameter[750], (modelica_real)data->simulationInfo->realParameter[751], (modelica_real)data->simulationInfo->realParameter[752]);
  data->localData[0]->realVars[279] /* MatStm3.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[847], tmp11, tmp12, data->simulationInfo->realParameter[862], 300.0);
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)data->simulationInfo->realParameter[897], (modelica_real)data->simulationInfo->realParameter[898], (modelica_real)data->simulationInfo->realParameter[899], (modelica_real)data->simulationInfo->realParameter[900], (modelica_real)data->simulationInfo->realParameter[901], (modelica_real)data->simulationInfo->realParameter[902]);
  data->localData[0]->realVars[318] /* MatStm3.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp13, 300.0);
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm3.comp[2].LiqCp[1], MatStm3.comp[2].LiqCp[2], MatStm3.comp[2].LiqCp[3], MatStm3.comp[2].LiqCp[4], MatStm3.comp[2].LiqCp[5], MatStm3.comp[2].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  real_array tmp14;
  array_alloc_scalar_real_array(&tmp14, 6, (modelica_real)data->simulationInfo->realParameter[771], (modelica_real)data->simulationInfo->realParameter[772], (modelica_real)data->simulationInfo->realParameter[773], (modelica_real)data->simulationInfo->realParameter[774], (modelica_real)data->simulationInfo->realParameter[775], (modelica_real)data->simulationInfo->realParameter[776]);
  data->localData[0]->realVars[315] /* MatStm3.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp14, 300.0);
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm3.comp[1].SH, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  real_array tmp15;
  real_array tmp16;
  array_alloc_scalar_real_array(&tmp15, 6, (modelica_real)data->simulationInfo->realParameter[891], (modelica_real)data->simulationInfo->realParameter[892], (modelica_real)data->simulationInfo->realParameter[893], (modelica_real)data->simulationInfo->realParameter[894], (modelica_real)data->simulationInfo->realParameter[895], (modelica_real)data->simulationInfo->realParameter[896]);
  array_alloc_scalar_real_array(&tmp16, 6, (modelica_real)data->simulationInfo->realParameter[741], (modelica_real)data->simulationInfo->realParameter[742], (modelica_real)data->simulationInfo->realParameter[743], (modelica_real)data->simulationInfo->realParameter[744], (modelica_real)data->simulationInfo->realParameter[745], (modelica_real)data->simulationInfo->realParameter[746]);
  data->localData[0]->realVars[281] /* MatStm3.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[846], tmp15, tmp16, data->simulationInfo->realParameter[861], 300.0);
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm3.comp[1].SH, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  real_array tmp17;
  real_array tmp18;
  array_alloc_scalar_real_array(&tmp17, 6, (modelica_real)data->simulationInfo->realParameter[891], (modelica_real)data->simulationInfo->realParameter[892], (modelica_real)data->simulationInfo->realParameter[893], (modelica_real)data->simulationInfo->realParameter[894], (modelica_real)data->simulationInfo->realParameter[895], (modelica_real)data->simulationInfo->realParameter[896]);
  array_alloc_scalar_real_array(&tmp18, 6, (modelica_real)data->simulationInfo->realParameter[741], (modelica_real)data->simulationInfo->realParameter[742], (modelica_real)data->simulationInfo->realParameter[743], (modelica_real)data->simulationInfo->realParameter[744], (modelica_real)data->simulationInfo->realParameter[745], (modelica_real)data->simulationInfo->realParameter[746]);
  data->localData[0]->realVars[278] /* MatStm3.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[846], tmp17, tmp18, data->simulationInfo->realParameter[861], 300.0);
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  real_array tmp19;
  array_alloc_scalar_real_array(&tmp19, 6, (modelica_real)data->simulationInfo->realParameter[891], (modelica_real)data->simulationInfo->realParameter[892], (modelica_real)data->simulationInfo->realParameter[893], (modelica_real)data->simulationInfo->realParameter[894], (modelica_real)data->simulationInfo->realParameter[895], (modelica_real)data->simulationInfo->realParameter[896]);
  data->localData[0]->realVars[317] /* MatStm3.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp19, 300.0);
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm3.comp[1].LiqCp[1], MatStm3.comp[1].LiqCp[2], MatStm3.comp[1].LiqCp[3], MatStm3.comp[1].LiqCp[4], MatStm3.comp[1].LiqCp[5], MatStm3.comp[1].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  real_array tmp20;
  array_alloc_scalar_real_array(&tmp20, 6, (modelica_real)data->simulationInfo->realParameter[765], (modelica_real)data->simulationInfo->realParameter[766], (modelica_real)data->simulationInfo->realParameter[767], (modelica_real)data->simulationInfo->realParameter[768], (modelica_real)data->simulationInfo->realParameter[769], (modelica_real)data->simulationInfo->realParameter[770]);
  data->localData[0]->realVars[314] /* MatStm3.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp20, 300.0);
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
MatStm2._Psat[3] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[3].VP[1], MatStm2.comp[3].VP[2], MatStm2.comp[3].VP[3], MatStm2.comp[3].VP[4], MatStm2.comp[3].VP[5], MatStm2.comp[3].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  real_array tmp21;
  array_alloc_scalar_real_array(&tmp21, 6, (modelica_real)data->simulationInfo->realParameter[648], (modelica_real)data->simulationInfo->realParameter[649], (modelica_real)data->simulationInfo->realParameter[650], (modelica_real)data->simulationInfo->realParameter[651], (modelica_real)data->simulationInfo->realParameter[652], (modelica_real)data->simulationInfo->realParameter[653]);
  data->localData[0]->realVars[137] /* MatStm2.Psat[3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp21, 300.0);
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
MatStm2._K[3] = 9.869232667160129e-006 * MatStm2.Psat[3]
*/
void Flowsheet_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->localData[0]->realVars[128] /* MatStm2.K[3] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[137] /* MatStm2.Psat[3] variable */);
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
MatStm2._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[2].VP[1], MatStm2.comp[2].VP[2], MatStm2.comp[2].VP[3], MatStm2.comp[2].VP[4], MatStm2.comp[2].VP[5], MatStm2.comp[2].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  real_array tmp22;
  array_alloc_scalar_real_array(&tmp22, 6, (modelica_real)data->simulationInfo->realParameter[642], (modelica_real)data->simulationInfo->realParameter[643], (modelica_real)data->simulationInfo->realParameter[644], (modelica_real)data->simulationInfo->realParameter[645], (modelica_real)data->simulationInfo->realParameter[646], (modelica_real)data->simulationInfo->realParameter[647]);
  data->localData[0]->realVars[136] /* MatStm2.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp22, 300.0);
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
MatStm2._K[2] = 9.869232667160129e-006 * MatStm2.Psat[2]
*/
void Flowsheet_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[127] /* MatStm2.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[136] /* MatStm2.Psat[2] variable */);
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
MatStm2._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[1].VP[1], MatStm2.comp[1].VP[2], MatStm2.comp[1].VP[3], MatStm2.comp[1].VP[4], MatStm2.comp[1].VP[5], MatStm2.comp[1].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  real_array tmp23;
  array_alloc_scalar_real_array(&tmp23, 6, (modelica_real)data->simulationInfo->realParameter[636], (modelica_real)data->simulationInfo->realParameter[637], (modelica_real)data->simulationInfo->realParameter[638], (modelica_real)data->simulationInfo->realParameter[639], (modelica_real)data->simulationInfo->realParameter[640], (modelica_real)data->simulationInfo->realParameter[641]);
  data->localData[0]->realVars[135] /* MatStm2.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp23, 300.0);
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
MatStm2._K[1] = 9.869232667160129e-006 * MatStm2.Psat[1]
*/
void Flowsheet_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->localData[0]->realVars[126] /* MatStm2.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[135] /* MatStm2.Psat[1] variable */);
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,3] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[3].SH, {MatStm2.comp[3].VapCp[1], MatStm2.comp[3].VapCp[2], MatStm2.comp[3].VapCp[3], MatStm2.comp[3].VapCp[4], MatStm2.comp[3].VapCp[5], MatStm2.comp[3].VapCp[6]}, {MatStm2.comp[3].HOV[1], MatStm2.comp[3].HOV[2], MatStm2.comp[3].HOV[3], MatStm2.comp[3].HOV[4], MatStm2.comp[3].HOV[5], MatStm2.comp[3].HOV[6]}, MatStm2.comp[3].Tc, 300.0)
*/
void Flowsheet_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  real_array tmp24;
  real_array tmp25;
  array_alloc_scalar_real_array(&tmp24, 6, (modelica_real)data->simulationInfo->realParameter[666], (modelica_real)data->simulationInfo->realParameter[667], (modelica_real)data->simulationInfo->realParameter[668], (modelica_real)data->simulationInfo->realParameter[669], (modelica_real)data->simulationInfo->realParameter[670], (modelica_real)data->simulationInfo->realParameter[671]);
  array_alloc_scalar_real_array(&tmp25, 6, (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521]);
  data->localData[0]->realVars[165] /* MatStm2.compMolEnth[3,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[611], tmp24, tmp25, data->simulationInfo->realParameter[626], 300.0);
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,3] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[3].SH, {MatStm2.comp[3].VapCp[1], MatStm2.comp[3].VapCp[2], MatStm2.comp[3].VapCp[3], MatStm2.comp[3].VapCp[4], MatStm2.comp[3].VapCp[5], MatStm2.comp[3].VapCp[6]}, {MatStm2.comp[3].HOV[1], MatStm2.comp[3].HOV[2], MatStm2.comp[3].HOV[3], MatStm2.comp[3].HOV[4], MatStm2.comp[3].HOV[5], MatStm2.comp[3].HOV[6]}, MatStm2.comp[3].Tc, 300.0)
*/
void Flowsheet_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  real_array tmp26;
  real_array tmp27;
  array_alloc_scalar_real_array(&tmp26, 6, (modelica_real)data->simulationInfo->realParameter[666], (modelica_real)data->simulationInfo->realParameter[667], (modelica_real)data->simulationInfo->realParameter[668], (modelica_real)data->simulationInfo->realParameter[669], (modelica_real)data->simulationInfo->realParameter[670], (modelica_real)data->simulationInfo->realParameter[671]);
  array_alloc_scalar_real_array(&tmp27, 6, (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521]);
  data->localData[0]->realVars[162] /* MatStm2.compMolEnth[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[611], tmp26, tmp27, data->simulationInfo->realParameter[626], 300.0);
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[3,3] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm2.comp[3].VapCp[1], MatStm2.comp[3].VapCp[2], MatStm2.comp[3].VapCp[3], MatStm2.comp[3].VapCp[4], MatStm2.comp[3].VapCp[5], MatStm2.comp[3].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  real_array tmp28;
  array_alloc_scalar_real_array(&tmp28, 6, (modelica_real)data->simulationInfo->realParameter[666], (modelica_real)data->simulationInfo->realParameter[667], (modelica_real)data->simulationInfo->realParameter[668], (modelica_real)data->simulationInfo->realParameter[669], (modelica_real)data->simulationInfo->realParameter[670], (modelica_real)data->simulationInfo->realParameter[671]);
  data->localData[0]->realVars[201] /* MatStm2.compMolSpHeat[3,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp28, 300.0);
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[2,3] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm2.comp[3].LiqCp[1], MatStm2.comp[3].LiqCp[2], MatStm2.comp[3].LiqCp[3], MatStm2.comp[3].LiqCp[4], MatStm2.comp[3].LiqCp[5], MatStm2.comp[3].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  real_array tmp29;
  array_alloc_scalar_real_array(&tmp29, 6, (modelica_real)data->simulationInfo->realParameter[540], (modelica_real)data->simulationInfo->realParameter[541], (modelica_real)data->simulationInfo->realParameter[542], (modelica_real)data->simulationInfo->realParameter[543], (modelica_real)data->simulationInfo->realParameter[544], (modelica_real)data->simulationInfo->realParameter[545]);
  data->localData[0]->realVars[198] /* MatStm2.compMolSpHeat[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp29, 300.0);
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[2].SH, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tc, 300.0)
*/
void Flowsheet_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  real_array tmp30;
  real_array tmp31;
  array_alloc_scalar_real_array(&tmp30, 6, (modelica_real)data->simulationInfo->realParameter[660], (modelica_real)data->simulationInfo->realParameter[661], (modelica_real)data->simulationInfo->realParameter[662], (modelica_real)data->simulationInfo->realParameter[663], (modelica_real)data->simulationInfo->realParameter[664], (modelica_real)data->simulationInfo->realParameter[665]);
  array_alloc_scalar_real_array(&tmp31, 6, (modelica_real)data->simulationInfo->realParameter[510], (modelica_real)data->simulationInfo->realParameter[511], (modelica_real)data->simulationInfo->realParameter[512], (modelica_real)data->simulationInfo->realParameter[513], (modelica_real)data->simulationInfo->realParameter[514], (modelica_real)data->simulationInfo->realParameter[515]);
  data->localData[0]->realVars[164] /* MatStm2.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[610], tmp30, tmp31, data->simulationInfo->realParameter[625], 300.0);
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[2].SH, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tc, 300.0)
*/
void Flowsheet_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  real_array tmp32;
  real_array tmp33;
  array_alloc_scalar_real_array(&tmp32, 6, (modelica_real)data->simulationInfo->realParameter[660], (modelica_real)data->simulationInfo->realParameter[661], (modelica_real)data->simulationInfo->realParameter[662], (modelica_real)data->simulationInfo->realParameter[663], (modelica_real)data->simulationInfo->realParameter[664], (modelica_real)data->simulationInfo->realParameter[665]);
  array_alloc_scalar_real_array(&tmp33, 6, (modelica_real)data->simulationInfo->realParameter[510], (modelica_real)data->simulationInfo->realParameter[511], (modelica_real)data->simulationInfo->realParameter[512], (modelica_real)data->simulationInfo->realParameter[513], (modelica_real)data->simulationInfo->realParameter[514], (modelica_real)data->simulationInfo->realParameter[515]);
  data->localData[0]->realVars[161] /* MatStm2.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[610], tmp32, tmp33, data->simulationInfo->realParameter[625], 300.0);
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  real_array tmp34;
  array_alloc_scalar_real_array(&tmp34, 6, (modelica_real)data->simulationInfo->realParameter[660], (modelica_real)data->simulationInfo->realParameter[661], (modelica_real)data->simulationInfo->realParameter[662], (modelica_real)data->simulationInfo->realParameter[663], (modelica_real)data->simulationInfo->realParameter[664], (modelica_real)data->simulationInfo->realParameter[665]);
  data->localData[0]->realVars[200] /* MatStm2.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp34, 300.0);
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm2.comp[2].LiqCp[1], MatStm2.comp[2].LiqCp[2], MatStm2.comp[2].LiqCp[3], MatStm2.comp[2].LiqCp[4], MatStm2.comp[2].LiqCp[5], MatStm2.comp[2].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  real_array tmp35;
  array_alloc_scalar_real_array(&tmp35, 6, (modelica_real)data->simulationInfo->realParameter[534], (modelica_real)data->simulationInfo->realParameter[535], (modelica_real)data->simulationInfo->realParameter[536], (modelica_real)data->simulationInfo->realParameter[537], (modelica_real)data->simulationInfo->realParameter[538], (modelica_real)data->simulationInfo->realParameter[539]);
  data->localData[0]->realVars[197] /* MatStm2.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp35, 300.0);
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  real_array tmp36;
  real_array tmp37;
  array_alloc_scalar_real_array(&tmp36, 6, (modelica_real)data->simulationInfo->realParameter[654], (modelica_real)data->simulationInfo->realParameter[655], (modelica_real)data->simulationInfo->realParameter[656], (modelica_real)data->simulationInfo->realParameter[657], (modelica_real)data->simulationInfo->realParameter[658], (modelica_real)data->simulationInfo->realParameter[659]);
  array_alloc_scalar_real_array(&tmp37, 6, (modelica_real)data->simulationInfo->realParameter[504], (modelica_real)data->simulationInfo->realParameter[505], (modelica_real)data->simulationInfo->realParameter[506], (modelica_real)data->simulationInfo->realParameter[507], (modelica_real)data->simulationInfo->realParameter[508], (modelica_real)data->simulationInfo->realParameter[509]);
  data->localData[0]->realVars[163] /* MatStm2.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[609], tmp36, tmp37, data->simulationInfo->realParameter[624], 300.0);
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  real_array tmp38;
  real_array tmp39;
  array_alloc_scalar_real_array(&tmp38, 6, (modelica_real)data->simulationInfo->realParameter[654], (modelica_real)data->simulationInfo->realParameter[655], (modelica_real)data->simulationInfo->realParameter[656], (modelica_real)data->simulationInfo->realParameter[657], (modelica_real)data->simulationInfo->realParameter[658], (modelica_real)data->simulationInfo->realParameter[659]);
  array_alloc_scalar_real_array(&tmp39, 6, (modelica_real)data->simulationInfo->realParameter[504], (modelica_real)data->simulationInfo->realParameter[505], (modelica_real)data->simulationInfo->realParameter[506], (modelica_real)data->simulationInfo->realParameter[507], (modelica_real)data->simulationInfo->realParameter[508], (modelica_real)data->simulationInfo->realParameter[509]);
  data->localData[0]->realVars[160] /* MatStm2.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[609], tmp38, tmp39, data->simulationInfo->realParameter[624], 300.0);
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  real_array tmp40;
  array_alloc_scalar_real_array(&tmp40, 6, (modelica_real)data->simulationInfo->realParameter[654], (modelica_real)data->simulationInfo->realParameter[655], (modelica_real)data->simulationInfo->realParameter[656], (modelica_real)data->simulationInfo->realParameter[657], (modelica_real)data->simulationInfo->realParameter[658], (modelica_real)data->simulationInfo->realParameter[659]);
  data->localData[0]->realVars[199] /* MatStm2.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp40, 300.0);
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm2.comp[1].LiqCp[1], MatStm2.comp[1].LiqCp[2], MatStm2.comp[1].LiqCp[3], MatStm2.comp[1].LiqCp[4], MatStm2.comp[1].LiqCp[5], MatStm2.comp[1].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  real_array tmp41;
  array_alloc_scalar_real_array(&tmp41, 6, (modelica_real)data->simulationInfo->realParameter[528], (modelica_real)data->simulationInfo->realParameter[529], (modelica_real)data->simulationInfo->realParameter[530], (modelica_real)data->simulationInfo->realParameter[531], (modelica_real)data->simulationInfo->realParameter[532], (modelica_real)data->simulationInfo->realParameter[533]);
  data->localData[0]->realVars[196] /* MatStm2.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp41, 300.0);
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
MatStm3._compMolFrac[1,1] = 0.5
*/
void Flowsheet_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */ = 0.5;
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[1,1] = 100.0 * MatStm3.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[293] /* MatStm3.compMolFlo[1,1] variable */ = (100.0) * (data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[1,1] = MatStm3.compMolFlo[1,1] * MatStm3.comp[1].MW
*/
void Flowsheet_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->localData[0]->realVars[257] /* MatStm3.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[293] /* MatStm3.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[837]);
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
MatStm3._compMolFrac[1,2] = 0.4
*/
void Flowsheet_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[303] /* MatStm3.compMolFrac[1,2] variable */ = 0.4;
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[1,2] = 100.0 * MatStm3.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[294] /* MatStm3.compMolFlo[1,2] variable */ = (100.0) * (data->localData[0]->realVars[303] /* MatStm3.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[1,2] = MatStm3.compMolFlo[1,2] * MatStm3.comp[2].MW
*/
void Flowsheet_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->realVars[258] /* MatStm3.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[294] /* MatStm3.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[838]);
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
MatStm3._compMolFrac[1,3] = 0.1
*/
void Flowsheet_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[304] /* MatStm3.compMolFrac[1,3] variable */ = 0.1;
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[1,3] = 100.0 * MatStm3.compMolFrac[1,3]
*/
void Flowsheet_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[295] /* MatStm3.compMolFlo[1,3] variable */ = (100.0) * (data->localData[0]->realVars[304] /* MatStm3.compMolFrac[1,3] variable */);
  TRACE_POP
}

/*
equation index: 63
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[1,3] = MatStm3.compMolFlo[1,3] * MatStm3.comp[3].MW
*/
void Flowsheet_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[259] /* MatStm3.compMasFlo[1,3] variable */ = (data->localData[0]->realVars[295] /* MatStm3.compMolFlo[1,3] variable */) * (data->simulationInfo->realParameter[839]);
  TRACE_POP
}

/*
equation index: 64
type: SIMPLE_ASSIGN
MatStm3._Pbubl = MatStm3.compMolFrac[1,1] * exp(MatStm3.comp[1].VP[2] + MatStm3.comp[1].VP[3] / 300.0 + MatStm3.comp[1].VP[4] * 5.703782474656201 + MatStm3.comp[1].VP[5] * 300.0 ^ MatStm3.comp[1].VP[6]) + MatStm3.compMolFrac[1,2] * exp(MatStm3.comp[2].VP[2] + MatStm3.comp[2].VP[3] / 300.0 + MatStm3.comp[2].VP[4] * 5.703782474656201 + MatStm3.comp[2].VP[5] * 300.0 ^ MatStm3.comp[2].VP[6]) + MatStm3.compMolFrac[1,3] * exp(MatStm3.comp[3].VP[2] + MatStm3.comp[3].VP[3] / 300.0 + MatStm3.comp[3].VP[4] * 5.703782474656201 + MatStm3.comp[3].VP[5] * 300.0 ^ MatStm3.comp[3].VP[6])
*/
void Flowsheet_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
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
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  tmp42 = 300.0;
  tmp43 = data->simulationInfo->realParameter[878];
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
  tmp50 = data->simulationInfo->realParameter[884];
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
  }tmp56 = 300.0;
  tmp57 = data->simulationInfo->realParameter[890];
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
  }
  data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */ = (data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[874] + DIVISION_SIM(data->simulationInfo->realParameter[875],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[876]) * (5.703782474656201) + (data->simulationInfo->realParameter[877]) * (tmp44))) + (data->localData[0]->realVars[303] /* MatStm3.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[880] + DIVISION_SIM(data->simulationInfo->realParameter[881],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[882]) * (5.703782474656201) + (data->simulationInfo->realParameter[883]) * (tmp51))) + (data->localData[0]->realVars[304] /* MatStm3.compMolFrac[1,3] variable */) * (exp(data->simulationInfo->realParameter[886] + DIVISION_SIM(data->simulationInfo->realParameter[887],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[888]) * (5.703782474656201) + (data->simulationInfo->realParameter[889]) * (tmp58)));
  TRACE_POP
}

/*
equation index: 65
type: SIMPLE_ASSIGN
MatStm3._Pdew = 1.0 / (MatStm3.compMolFrac[1,1] * exp((-MatStm3.comp[1].VP[2]) - MatStm3.comp[1].VP[3] / 300.0 - MatStm3.comp[1].VP[4] * 5.703782474656201 - MatStm3.comp[1].VP[5] * 300.0 ^ MatStm3.comp[1].VP[6]) + MatStm3.compMolFrac[1,2] * exp((-MatStm3.comp[2].VP[2]) - MatStm3.comp[2].VP[3] / 300.0 - MatStm3.comp[2].VP[4] * 5.703782474656201 - MatStm3.comp[2].VP[5] * 300.0 ^ MatStm3.comp[2].VP[6]) + MatStm3.compMolFrac[1,3] * exp((-MatStm3.comp[3].VP[2]) - MatStm3.comp[3].VP[3] / 300.0 - MatStm3.comp[3].VP[4] * 5.703782474656201 - MatStm3.comp[3].VP[5] * 300.0 ^ MatStm3.comp[3].VP[6]))
*/
void Flowsheet_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
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
  tmp63 = 300.0;
  tmp64 = data->simulationInfo->realParameter[878];
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
  }tmp70 = 300.0;
  tmp71 = data->simulationInfo->realParameter[884];
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
  tmp78 = data->simulationInfo->realParameter[890];
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
  data->localData[0]->realVars[252] /* MatStm3.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[874]) - (DIVISION_SIM(data->simulationInfo->realParameter[875],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[876]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[877]) * (tmp65)))) + (data->localData[0]->realVars[303] /* MatStm3.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[880]) - (DIVISION_SIM(data->simulationInfo->realParameter[881],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[882]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[883]) * (tmp72)))) + (data->localData[0]->realVars[304] /* MatStm3.compMolFrac[1,3] variable */) * (exp((-data->simulationInfo->realParameter[886]) - (DIVISION_SIM(data->simulationInfo->realParameter[887],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[888]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[889]) * (tmp79)))),"MatStm3.compMolFrac[1,1] * exp((-MatStm3.comp[1].VP[2]) - MatStm3.comp[1].VP[3] / 300.0 - MatStm3.comp[1].VP[4] * 5.703782474656201 - MatStm3.comp[1].VP[5] * 300.0 ^ MatStm3.comp[1].VP[6]) + MatStm3.compMolFrac[1,2] * exp((-MatStm3.comp[2].VP[2]) - MatStm3.comp[2].VP[3] / 300.0 - MatStm3.comp[2].VP[4] * 5.703782474656201 - MatStm3.comp[2].VP[5] * 300.0 ^ MatStm3.comp[2].VP[6]) + MatStm3.compMolFrac[1,3] * exp((-MatStm3.comp[3].VP[2]) - MatStm3.comp[3].VP[3] / 300.0 - MatStm3.comp[3].VP[4] * 5.703782474656201 - MatStm3.comp[3].VP[5] * 300.0 ^ MatStm3.comp[3].VP[6])",equationIndexes);
  TRACE_POP
}

/*
equation index: 66
type: SIMPLE_ASSIGN
MatStm2._compMolFrac[1,1] = 0.5
*/
void Flowsheet_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */ = 0.5;
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[1,1] = 100.0 * MatStm2.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[175] /* MatStm2.compMolFlo[1,1] variable */ = (100.0) * (data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[1,1] = MatStm2.compMolFlo[1,1] * MatStm2.comp[1].MW
*/
void Flowsheet_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[139] /* MatStm2.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[175] /* MatStm2.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[600]);
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,1] = 0.5 * (MatStm3.compMolFrac[1,1] + MatStm2.compMolFrac[1,1])
*/
void Flowsheet_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */ = (0.5) * (data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */ + data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
MatStm2._compMolFrac[1,2] = 0.4
*/
void Flowsheet_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->localData[0]->realVars[185] /* MatStm2.compMolFrac[1,2] variable */ = 0.4;
  TRACE_POP
}

/*
equation index: 71
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[1,2] = 100.0 * MatStm2.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->localData[0]->realVars[176] /* MatStm2.compMolFlo[1,2] variable */ = (100.0) * (data->localData[0]->realVars[185] /* MatStm2.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 72
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[1,2] = MatStm2.compMolFlo[1,2] * MatStm2.comp[2].MW
*/
void Flowsheet_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[140] /* MatStm2.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[176] /* MatStm2.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[601]);
  TRACE_POP
}

/*
equation index: 73
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,2] = 0.5 * (MatStm3.compMolFrac[1,2] + MatStm2.compMolFrac[1,2])
*/
void Flowsheet_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[66] /* MatStm1.compMolFrac[1,2] variable */ = (0.5) * (data->localData[0]->realVars[303] /* MatStm3.compMolFrac[1,2] variable */ + data->localData[0]->realVars[185] /* MatStm2.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
MatStm2._compMolFrac[1,3] = 0.1
*/
void Flowsheet_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[186] /* MatStm2.compMolFrac[1,3] variable */ = 0.1;
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[1,3] = 100.0 * MatStm2.compMolFrac[1,3]
*/
void Flowsheet_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->localData[0]->realVars[177] /* MatStm2.compMolFlo[1,3] variable */ = (100.0) * (data->localData[0]->realVars[186] /* MatStm2.compMolFrac[1,3] variable */);
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[1,3] = MatStm2.compMolFlo[1,3] * MatStm2.comp[3].MW
*/
void Flowsheet_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[141] /* MatStm2.compMasFlo[1,3] variable */ = (data->localData[0]->realVars[177] /* MatStm2.compMolFlo[1,3] variable */) * (data->simulationInfo->realParameter[602]);
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
MatStm2._Pbubl = MatStm2.compMolFrac[1,1] * exp(MatStm2.comp[1].VP[2] + MatStm2.comp[1].VP[3] / 300.0 + MatStm2.comp[1].VP[4] * 5.703782474656201 + MatStm2.comp[1].VP[5] * 300.0 ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp(MatStm2.comp[2].VP[2] + MatStm2.comp[2].VP[3] / 300.0 + MatStm2.comp[2].VP[4] * 5.703782474656201 + MatStm2.comp[2].VP[5] * 300.0 ^ MatStm2.comp[2].VP[6]) + MatStm2.compMolFrac[1,3] * exp(MatStm2.comp[3].VP[2] + MatStm2.comp[3].VP[3] / 300.0 + MatStm2.comp[3].VP[4] * 5.703782474656201 + MatStm2.comp[3].VP[5] * 300.0 ^ MatStm2.comp[3].VP[6])
*/
void Flowsheet_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
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
  modelica_real tmp98;
  modelica_real tmp99;
  modelica_real tmp100;
  modelica_real tmp101;
  modelica_real tmp102;
  modelica_real tmp103;
  modelica_real tmp104;
  tmp84 = 300.0;
  tmp85 = data->simulationInfo->realParameter[641];
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
  }tmp91 = 300.0;
  tmp92 = data->simulationInfo->realParameter[647];
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
  }tmp98 = 300.0;
  tmp99 = data->simulationInfo->realParameter[653];
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
  }
  data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */ = (data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[637] + DIVISION_SIM(data->simulationInfo->realParameter[638],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[639]) * (5.703782474656201) + (data->simulationInfo->realParameter[640]) * (tmp86))) + (data->localData[0]->realVars[185] /* MatStm2.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[643] + DIVISION_SIM(data->simulationInfo->realParameter[644],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[645]) * (5.703782474656201) + (data->simulationInfo->realParameter[646]) * (tmp93))) + (data->localData[0]->realVars[186] /* MatStm2.compMolFrac[1,3] variable */) * (exp(data->simulationInfo->realParameter[649] + DIVISION_SIM(data->simulationInfo->realParameter[650],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[651]) * (5.703782474656201) + (data->simulationInfo->realParameter[652]) * (tmp100)));
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
MatStm2._Pdew = 1.0 / (MatStm2.compMolFrac[1,1] * exp((-MatStm2.comp[1].VP[2]) - MatStm2.comp[1].VP[3] / 300.0 - MatStm2.comp[1].VP[4] * 5.703782474656201 - MatStm2.comp[1].VP[5] * 300.0 ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp((-MatStm2.comp[2].VP[2]) - MatStm2.comp[2].VP[3] / 300.0 - MatStm2.comp[2].VP[4] * 5.703782474656201 - MatStm2.comp[2].VP[5] * 300.0 ^ MatStm2.comp[2].VP[6]) + MatStm2.compMolFrac[1,3] * exp((-MatStm2.comp[3].VP[2]) - MatStm2.comp[3].VP[3] / 300.0 - MatStm2.comp[3].VP[4] * 5.703782474656201 - MatStm2.comp[3].VP[5] * 300.0 ^ MatStm2.comp[3].VP[6]))
*/
void Flowsheet_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_real tmp107;
  modelica_real tmp108;
  modelica_real tmp109;
  modelica_real tmp110;
  modelica_real tmp111;
  modelica_real tmp112;
  modelica_real tmp113;
  modelica_real tmp114;
  modelica_real tmp115;
  modelica_real tmp116;
  modelica_real tmp117;
  modelica_real tmp118;
  modelica_real tmp119;
  modelica_real tmp120;
  modelica_real tmp121;
  modelica_real tmp122;
  modelica_real tmp123;
  modelica_real tmp124;
  modelica_real tmp125;
  tmp105 = 300.0;
  tmp106 = data->simulationInfo->realParameter[641];
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
  }tmp112 = 300.0;
  tmp113 = data->simulationInfo->realParameter[647];
  if(tmp112 < 0.0 && tmp113 != 0.0)
  {
    tmp115 = modf(tmp113, &tmp116);
    
    if(tmp115 > 0.5)
    {
      tmp115 -= 1.0;
      tmp116 += 1.0;
    }
    else if(tmp115 < -0.5)
    {
      tmp115 += 1.0;
      tmp116 -= 1.0;
    }
    
    if(fabs(tmp115) < 1e-10)
      tmp114 = pow(tmp112, tmp116);
    else
    {
      tmp118 = modf(1.0/tmp113, &tmp117);
      if(tmp118 > 0.5)
      {
        tmp118 -= 1.0;
        tmp117 += 1.0;
      }
      else if(tmp118 < -0.5)
      {
        tmp118 += 1.0;
        tmp117 -= 1.0;
      }
      if(fabs(tmp118) < 1e-10 && ((unsigned long)tmp117 & 1))
      {
        tmp114 = -pow(-tmp112, tmp115)*pow(tmp112, tmp116);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp112, tmp113);
      }
    }
  }
  else
  {
    tmp114 = pow(tmp112, tmp113);
  }
  if(isnan(tmp114) || isinf(tmp114))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp112, tmp113);
  }tmp119 = 300.0;
  tmp120 = data->simulationInfo->realParameter[653];
  if(tmp119 < 0.0 && tmp120 != 0.0)
  {
    tmp122 = modf(tmp120, &tmp123);
    
    if(tmp122 > 0.5)
    {
      tmp122 -= 1.0;
      tmp123 += 1.0;
    }
    else if(tmp122 < -0.5)
    {
      tmp122 += 1.0;
      tmp123 -= 1.0;
    }
    
    if(fabs(tmp122) < 1e-10)
      tmp121 = pow(tmp119, tmp123);
    else
    {
      tmp125 = modf(1.0/tmp120, &tmp124);
      if(tmp125 > 0.5)
      {
        tmp125 -= 1.0;
        tmp124 += 1.0;
      }
      else if(tmp125 < -0.5)
      {
        tmp125 += 1.0;
        tmp124 -= 1.0;
      }
      if(fabs(tmp125) < 1e-10 && ((unsigned long)tmp124 & 1))
      {
        tmp121 = -pow(-tmp119, tmp122)*pow(tmp119, tmp123);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp119, tmp120);
      }
    }
  }
  else
  {
    tmp121 = pow(tmp119, tmp120);
  }
  if(isnan(tmp121) || isinf(tmp121))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp119, tmp120);
  }
  data->localData[0]->realVars[134] /* MatStm2.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[637]) - (DIVISION_SIM(data->simulationInfo->realParameter[638],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[639]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[640]) * (tmp107)))) + (data->localData[0]->realVars[185] /* MatStm2.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[643]) - (DIVISION_SIM(data->simulationInfo->realParameter[644],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[645]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[646]) * (tmp114)))) + (data->localData[0]->realVars[186] /* MatStm2.compMolFrac[1,3] variable */) * (exp((-data->simulationInfo->realParameter[649]) - (DIVISION_SIM(data->simulationInfo->realParameter[650],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[651]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[652]) * (tmp121)))),"MatStm2.compMolFrac[1,1] * exp((-MatStm2.comp[1].VP[2]) - MatStm2.comp[1].VP[3] / 300.0 - MatStm2.comp[1].VP[4] * 5.703782474656201 - MatStm2.comp[1].VP[5] * 300.0 ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp((-MatStm2.comp[2].VP[2]) - MatStm2.comp[2].VP[3] / 300.0 - MatStm2.comp[2].VP[4] * 5.703782474656201 - MatStm2.comp[2].VP[5] * 300.0 ^ MatStm2.comp[2].VP[6]) + MatStm2.compMolFrac[1,3] * exp((-MatStm2.comp[3].VP[2]) - MatStm2.comp[3].VP[3] / 300.0 - MatStm2.comp[3].VP[4] * 5.703782474656201 - MatStm2.comp[3].VP[5] * 300.0 ^ MatStm2.comp[3].VP[6])",equationIndexes);
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,3] = 0.5 * (MatStm3.compMolFrac[1,3] + MatStm2.compMolFrac[1,3])
*/
void Flowsheet_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  data->localData[0]->realVars[67] /* MatStm1.compMolFrac[1,3] variable */ = (0.5) * (data->localData[0]->realVars[304] /* MatStm3.compMolFrac[1,3] variable */ + data->localData[0]->realVars[186] /* MatStm2.compMolFrac[1,3] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_358(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_356(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_354(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_359(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_357(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_355(DATA *data, threadData_t *threadData);


void Flowsheet_eqFunction_86(DATA*, threadData_t*);
void Flowsheet_eqFunction_87(DATA*, threadData_t*);
void Flowsheet_eqFunction_88(DATA*, threadData_t*);
void Flowsheet_eqFunction_89(DATA*, threadData_t*);
void Flowsheet_eqFunction_90(DATA*, threadData_t*);
void Flowsheet_eqFunction_91(DATA*, threadData_t*);
void Flowsheet_eqFunction_92(DATA*, threadData_t*);
void Flowsheet_eqFunction_93(DATA*, threadData_t*);
void Flowsheet_eqFunction_94(DATA*, threadData_t*);
void Flowsheet_eqFunction_101(DATA*, threadData_t*);
void Flowsheet_eqFunction_100(DATA*, threadData_t*);
void Flowsheet_eqFunction_99(DATA*, threadData_t*);
void Flowsheet_eqFunction_98(DATA*, threadData_t*);
void Flowsheet_eqFunction_97(DATA*, threadData_t*);
void Flowsheet_eqFunction_96(DATA*, threadData_t*);
void Flowsheet_eqFunction_95(DATA*, threadData_t*);
/*
equation index: 118
indexNonlinear: 0
type: NONLINEAR

vars: {MatStm2._totMolFlo[2], MatStm2._compMolFrac[3,1], MatStm2._compMolFrac[2,1], MatStm2._compMolFrac[3,3], MatStm2._compMolFrac[2,2], MatStm2._compMolFrac[3,2], MatStm2._compMolFrac[2,3]}
eqns: {86, 87, 88, 89, 90, 91, 92, 93, 94, 101, 100, 99, 98, 97, 96, 95}
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
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,118};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 118 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  TRACE_POP
}
extern void Flowsheet_eqFunction_410(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_411(DATA *data, threadData_t *threadData);


/*
equation index: 121
type: ALGORITHM

  (MatStm2.compMolEntr[2,3], MatStm2.compMolEntr[3,3]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[3].AS, {MatStm2.comp[3].VapCp[1], MatStm2.comp[3].VapCp[2], MatStm2.comp[3].VapCp[3], MatStm2.comp[3].VapCp[4], MatStm2.comp[3].VapCp[5], MatStm2.comp[3].VapCp[6]}, {MatStm2.comp[3].HOV[1], MatStm2.comp[3].HOV[2], MatStm2.comp[3].HOV[3], MatStm2.comp[3].HOV[4], MatStm2.comp[3].HOV[5], MatStm2.comp[3].HOV[6]}, MatStm2.comp[3].Tb, MatStm2.comp[3].Tc, 300.0, 101325.0, MatStm2.compMolFrac[2,3], MatStm2.compMolFrac[3,3]);
*/
void Flowsheet_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[666], (modelica_real)data->simulationInfo->realParameter[667], (modelica_real)data->simulationInfo->realParameter[668], (modelica_real)data->simulationInfo->realParameter[669], (modelica_real)data->simulationInfo->realParameter[670], (modelica_real)data->simulationInfo->realParameter[671]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521]);
  data->localData[0]->realVars[171] /* MatStm2.compMolEntr[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[479], tmp0, tmp1, data->simulationInfo->realParameter[623], data->simulationInfo->realParameter[626], 300.0, 101325.0, data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */, data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */ ,&data->localData[0]->realVars[174] /* MatStm2.compMolEntr[3,3] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_395(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_394(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_398(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_397(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_407(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_406(DATA *data, threadData_t *threadData);


/*
equation index: 128
type: ALGORITHM

  (MatStm2.compMolEntr[2,2], MatStm2.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[2].AS, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tb, MatStm2.comp[2].Tc, 300.0, 101325.0, MatStm2.compMolFrac[2,2], MatStm2.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[660], (modelica_real)data->simulationInfo->realParameter[661], (modelica_real)data->simulationInfo->realParameter[662], (modelica_real)data->simulationInfo->realParameter[663], (modelica_real)data->simulationInfo->realParameter[664], (modelica_real)data->simulationInfo->realParameter[665]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[510], (modelica_real)data->simulationInfo->realParameter[511], (modelica_real)data->simulationInfo->realParameter[512], (modelica_real)data->simulationInfo->realParameter[513], (modelica_real)data->simulationInfo->realParameter[514], (modelica_real)data->simulationInfo->realParameter[515]);
  data->localData[0]->realVars[170] /* MatStm2.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[478], tmp2, tmp3, data->simulationInfo->realParameter[622], data->simulationInfo->realParameter[625], 300.0, 101325.0, data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */, data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[173] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_400(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_419(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_422(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_421(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_420(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_399(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_415(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_418(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_417(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_416(DATA *data, threadData_t *threadData);


/*
equation index: 139
type: ALGORITHM

  (MatStm2.compMolEntr[2,1], MatStm2.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[1].AS, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tb, MatStm2.comp[1].Tc, 300.0, 101325.0, MatStm2.compMolFrac[2,1], MatStm2.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  real_array tmp4;
  real_array tmp5;
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[654], (modelica_real)data->simulationInfo->realParameter[655], (modelica_real)data->simulationInfo->realParameter[656], (modelica_real)data->simulationInfo->realParameter[657], (modelica_real)data->simulationInfo->realParameter[658], (modelica_real)data->simulationInfo->realParameter[659]);
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[504], (modelica_real)data->simulationInfo->realParameter[505], (modelica_real)data->simulationInfo->realParameter[506], (modelica_real)data->simulationInfo->realParameter[507], (modelica_real)data->simulationInfo->realParameter[508], (modelica_real)data->simulationInfo->realParameter[509]);
  data->localData[0]->realVars[169] /* MatStm2.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[477], tmp4, tmp5, data->simulationInfo->realParameter[621], data->simulationInfo->realParameter[624], 300.0, 101325.0, data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */, data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[172] /* MatStm2.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_405(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_402(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_423(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_426(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_425(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_424(DATA *data, threadData_t *threadData);


/*
equation index: 146
type: ALGORITHM

  MatStm2.MW[3] := $START.MatStm2.MW[3];
  MatStm2.MW[2] := $START.MatStm2.MW[2];
  MatStm2.MW[1] := $START.MatStm2.MW[1];
  for i in 1:3 loop
    MatStm2.MW[:] := {MatStm2.MW[1] + MatStm2.compMolFrac[1,i] * MatStm2.comp[i].MW, MatStm2.MW[2] + MatStm2.compMolFrac[2,i] * MatStm2.comp[i].MW, MatStm2.MW[3] + MatStm2.compMolFrac[3,i] * MatStm2.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  real_array tmp6;
  index_spec_t tmp7;
  real_array tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  data->localData[0]->realVars[131] /* MatStm2.MW[3] variable */ = data->modelData->realVarsData[131].attribute /* MatStm2.MW[3] variable */.start;

  data->localData[0]->realVars[130] /* MatStm2.MW[2] variable */ = data->modelData->realVarsData[130].attribute /* MatStm2.MW[2] variable */.start;

  data->localData[0]->realVars[129] /* MatStm2.MW[1] variable */ = data->modelData->realVarsData[129].attribute /* MatStm2.MW[1] variable */.start;

  tmp9 = ((modelica_integer) 1); tmp10 = 1; tmp11 = ((modelica_integer) 3);
  if(!(((tmp10 > 0) && (tmp9 > tmp11)) || ((tmp10 < 0) && (tmp9 < tmp11))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp9, tmp11); $Pi += tmp10)
    {
      array_alloc_scalar_real_array(&tmp6, 3, (modelica_real)data->localData[0]->realVars[129] /* MatStm2.MW[1] variable */ + ((&data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[600])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[130] /* MatStm2.MW[2] variable */ + ((&data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[600])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[131] /* MatStm2.MW[3] variable */ + ((&data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[600])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]));
      create_index_spec(&tmp7, 1, (1), (int*)0, 'W');
      real_array_create(&tmp8, (modelica_real*)&data->localData[0]->realVars[129] /* MatStm2.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp6, &tmp8, &tmp7);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_404(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_412(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_414(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_408(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_409(DATA *data, threadData_t *threadData);


/*
equation index: 152
type: LINEAR

<var>MatStm2._compMasFrac[2,1]</var>
<var>MatStm2._compMasFrac[1,1]</var>
<var>MatStm2._compMasFrac[1,2]</var>
<var>MatStm2._compMasFrac[2,2]</var>
<var>MatStm2._compMasFrac[2,3]</var>
<var>MatStm2._compMasFrac[3,2]</var>
<var>MatStm2._compMasFrac[1,3]</var>
<var>MatStm2._compMasFrac[3,1]</var>
<var>MatStm2._compMasFrac[3,3]</var>
<row>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,3] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,2] else MatStm2.compMasFlo[1,3]</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,2] else MatStm2.compMasFlo[1,2]</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,2] else MatStm2.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,1] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="6">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="0" col="8">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="7">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 0.0)</residual>
  </cell><cell row="1" col="8">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="6">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="2" col="7">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="5">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="3" col="6">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101325.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="4" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="4" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="4" col="5">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="5" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="5" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="5" col="5">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="6" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101325.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="6" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="7" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101325.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="7" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else -0.0)</residual>
  </cell><cell row="8" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="8" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="8" col="7">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  /* Linear equation system */
  int retValue;
  double aux_x[9] = { data->localData[1]->realVars[151] /* MatStm2.compMasFrac[2,1] variable */,data->localData[1]->realVars[148] /* MatStm2.compMasFrac[1,1] variable */,data->localData[1]->realVars[149] /* MatStm2.compMasFrac[1,2] variable */,data->localData[1]->realVars[152] /* MatStm2.compMasFrac[2,2] variable */,data->localData[1]->realVars[153] /* MatStm2.compMasFrac[2,3] variable */,data->localData[1]->realVars[155] /* MatStm2.compMasFrac[3,2] variable */,data->localData[1]->realVars[150] /* MatStm2.compMasFrac[1,3] variable */,data->localData[1]->realVars[154] /* MatStm2.compMasFrac[3,1] variable */,data->localData[1]->realVars[156] /* MatStm2.compMasFrac[3,3] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 152 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,152};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 152 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[151] /* MatStm2.compMasFrac[2,1] variable */ = aux_x[0];
  data->localData[0]->realVars[148] /* MatStm2.compMasFrac[1,1] variable */ = aux_x[1];
  data->localData[0]->realVars[149] /* MatStm2.compMasFrac[1,2] variable */ = aux_x[2];
  data->localData[0]->realVars[152] /* MatStm2.compMasFrac[2,2] variable */ = aux_x[3];
  data->localData[0]->realVars[153] /* MatStm2.compMasFrac[2,3] variable */ = aux_x[4];
  data->localData[0]->realVars[155] /* MatStm2.compMasFrac[3,2] variable */ = aux_x[5];
  data->localData[0]->realVars[150] /* MatStm2.compMasFrac[1,3] variable */ = aux_x[6];
  data->localData[0]->realVars[154] /* MatStm2.compMasFrac[3,1] variable */ = aux_x[7];
  data->localData[0]->realVars[156] /* MatStm2.compMasFrac[3,3] variable */ = aux_x[8];
  TRACE_POP
}

void Flowsheet_eqFunction_153(DATA*, threadData_t*);
void Flowsheet_eqFunction_154(DATA*, threadData_t*);
void Flowsheet_eqFunction_155(DATA*, threadData_t*);
void Flowsheet_eqFunction_156(DATA*, threadData_t*);
void Flowsheet_eqFunction_157(DATA*, threadData_t*);
void Flowsheet_eqFunction_158(DATA*, threadData_t*);
void Flowsheet_eqFunction_159(DATA*, threadData_t*);
void Flowsheet_eqFunction_160(DATA*, threadData_t*);
void Flowsheet_eqFunction_161(DATA*, threadData_t*);
void Flowsheet_eqFunction_168(DATA*, threadData_t*);
void Flowsheet_eqFunction_167(DATA*, threadData_t*);
void Flowsheet_eqFunction_166(DATA*, threadData_t*);
void Flowsheet_eqFunction_165(DATA*, threadData_t*);
void Flowsheet_eqFunction_164(DATA*, threadData_t*);
void Flowsheet_eqFunction_163(DATA*, threadData_t*);
void Flowsheet_eqFunction_162(DATA*, threadData_t*);
/*
equation index: 185
indexNonlinear: 1
type: NONLINEAR

vars: {MatStm3._totMolFlo[2], MatStm3._compMolFrac[3,1], MatStm3._compMolFrac[2,2], MatStm3._compMolFrac[2,1], MatStm3._compMolFrac[3,2], MatStm3._compMolFrac[2,3], MatStm3._compMolFrac[3,3]}
eqns: {153, 154, 155, 156, 157, 158, 159, 160, 161, 168, 167, 166, 165, 164, 163, 162}
*/
void Flowsheet_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 185 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,185};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 185 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  TRACE_POP
}
extern void Flowsheet_eqFunction_478(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_477(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_461(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_462(DATA *data, threadData_t *threadData);


/*
equation index: 190
type: ALGORITHM

  (MatStm3.compMolEntr[2,3], MatStm3.compMolEntr[3,3]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[3].AS, {MatStm3.comp[3].VapCp[1], MatStm3.comp[3].VapCp[2], MatStm3.comp[3].VapCp[3], MatStm3.comp[3].VapCp[4], MatStm3.comp[3].VapCp[5], MatStm3.comp[3].VapCp[6]}, {MatStm3.comp[3].HOV[1], MatStm3.comp[3].HOV[2], MatStm3.comp[3].HOV[3], MatStm3.comp[3].HOV[4], MatStm3.comp[3].HOV[5], MatStm3.comp[3].HOV[6]}, MatStm3.comp[3].Tb, MatStm3.comp[3].Tc, 300.0, 101325.0, MatStm3.compMolFrac[2,3], MatStm3.compMolFrac[3,3]);
*/
void Flowsheet_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[903], (modelica_real)data->simulationInfo->realParameter[904], (modelica_real)data->simulationInfo->realParameter[905], (modelica_real)data->simulationInfo->realParameter[906], (modelica_real)data->simulationInfo->realParameter[907], (modelica_real)data->simulationInfo->realParameter[908]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[753], (modelica_real)data->simulationInfo->realParameter[754], (modelica_real)data->simulationInfo->realParameter[755], (modelica_real)data->simulationInfo->realParameter[756], (modelica_real)data->simulationInfo->realParameter[757], (modelica_real)data->simulationInfo->realParameter[758]);
  data->localData[0]->realVars[289] /* MatStm3.compMolEntr[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[716], tmp0, tmp1, data->simulationInfo->realParameter[860], data->simulationInfo->realParameter[863], 300.0, 101325.0, data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */, data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */ ,&data->localData[0]->realVars[292] /* MatStm3.compMolEntr[3,3] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_466(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_465(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_464(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_463(DATA *data, threadData_t *threadData);


/*
equation index: 195
type: ALGORITHM

  (MatStm3.compMolEntr[2,1], MatStm3.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[1].AS, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tb, MatStm3.comp[1].Tc, 300.0, 101325.0, MatStm3.compMolFrac[2,1], MatStm3.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[891], (modelica_real)data->simulationInfo->realParameter[892], (modelica_real)data->simulationInfo->realParameter[893], (modelica_real)data->simulationInfo->realParameter[894], (modelica_real)data->simulationInfo->realParameter[895], (modelica_real)data->simulationInfo->realParameter[896]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[741], (modelica_real)data->simulationInfo->realParameter[742], (modelica_real)data->simulationInfo->realParameter[743], (modelica_real)data->simulationInfo->realParameter[744], (modelica_real)data->simulationInfo->realParameter[745], (modelica_real)data->simulationInfo->realParameter[746]);
  data->localData[0]->realVars[287] /* MatStm3.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[714], tmp2, tmp3, data->simulationInfo->realParameter[858], data->simulationInfo->realParameter[861], 300.0, 101325.0, data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */, data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[290] /* MatStm3.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_469(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_486(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_489(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_488(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_487(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_490(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_568(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_567(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_566(DATA *data, threadData_t *threadData);


void Flowsheet_eqFunction_205(DATA*, threadData_t*);
void Flowsheet_eqFunction_206(DATA*, threadData_t*);
void Flowsheet_eqFunction_207(DATA*, threadData_t*);
void Flowsheet_eqFunction_208(DATA*, threadData_t*);
void Flowsheet_eqFunction_209(DATA*, threadData_t*);
void Flowsheet_eqFunction_210(DATA*, threadData_t*);
void Flowsheet_eqFunction_211(DATA*, threadData_t*);
void Flowsheet_eqFunction_212(DATA*, threadData_t*);
void Flowsheet_eqFunction_213(DATA*, threadData_t*);
void Flowsheet_eqFunction_214(DATA*, threadData_t*);
void Flowsheet_eqFunction_215(DATA*, threadData_t*);
void Flowsheet_eqFunction_216(DATA*, threadData_t*);
void Flowsheet_eqFunction_217(DATA*, threadData_t*);
void Flowsheet_eqFunction_218(DATA*, threadData_t*);
void Flowsheet_eqFunction_219(DATA*, threadData_t*);
void Flowsheet_eqFunction_220(DATA*, threadData_t*);
void Flowsheet_eqFunction_221(DATA*, threadData_t*);
void Flowsheet_eqFunction_222(DATA*, threadData_t*);
void Flowsheet_eqFunction_223(DATA*, threadData_t*);
void Flowsheet_eqFunction_224(DATA*, threadData_t*);
void Flowsheet_eqFunction_225(DATA*, threadData_t*);
void Flowsheet_eqFunction_226(DATA*, threadData_t*);
void Flowsheet_eqFunction_227(DATA*, threadData_t*);
void Flowsheet_eqFunction_228(DATA*, threadData_t*);
void Flowsheet_eqFunction_229(DATA*, threadData_t*);
void Flowsheet_eqFunction_237(DATA*, threadData_t*);
void Flowsheet_eqFunction_236(DATA*, threadData_t*);
void Flowsheet_eqFunction_235(DATA*, threadData_t*);
void Flowsheet_eqFunction_234(DATA*, threadData_t*);
void Flowsheet_eqFunction_233(DATA*, threadData_t*);
void Flowsheet_eqFunction_232(DATA*, threadData_t*);
void Flowsheet_eqFunction_231(DATA*, threadData_t*);
void Flowsheet_eqFunction_230(DATA*, threadData_t*);
/*
equation index: 238
indexNonlinear: 2
type: NONLINEAR

vars: {MatStm1._totMolFlo[2], MatStm1._T, MatStm1._compMolFrac[3,3], MatStm1._compMolFrac[2,1], MatStm1._compMolFrac[3,1], MatStm1._compMolFrac[3,2], MatStm1._compMolFrac[2,2], MatStm1._compMolFrac[2,3]}
eqns: {205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 237, 236, 235, 234, 233, 232, 231, 230}
*/
void Flowsheet_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 238 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[6] = data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[7] = data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,238};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 238 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[19] /* MatStm1.T variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[6];
  data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[7];
  TRACE_POP
}
extern void Flowsheet_eqFunction_536(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_537(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_532(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_533(DATA *data, threadData_t *threadData);


/*
equation index: 243
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:3 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  data->localData[0]->realVars[12] /* MatStm1.MW[3] variable */ = data->modelData->realVarsData[12].attribute /* MatStm1.MW[3] variable */.start;

  data->localData[0]->realVars[11] /* MatStm1.MW[2] variable */ = data->modelData->realVarsData[11].attribute /* MatStm1.MW[2] variable */.start;

  data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */ = data->modelData->realVarsData[10].attribute /* MatStm1.MW[1] variable */.start;

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 3);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp3, tmp5); $Pi += tmp4)
    {
      array_alloc_scalar_real_array(&tmp0, 3, (modelica_real)data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */ + ((&data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[363])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[11] /* MatStm1.MW[2] variable */ + ((&data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[363])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[12] /* MatStm1.MW[3] variable */ + ((&data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[363])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]));
      create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
      real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp0, &tmp2, &tmp1);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_541(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_539(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_542(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_540(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_544(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_534(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_535(DATA *data, threadData_t *threadData);


/*
equation index: 251
type: LINEAR

<var>MatStm1._compMasFrac[3,1]</var>
<var>MatStm1._compMasFrac[1,1]</var>
<var>MatStm1._compMasFrac[1,2]</var>
<var>MatStm1._compMasFrac[2,2]</var>
<var>MatStm1._compMasFrac[2,1]</var>
<var>MatStm1._compMasFrac[1,3]</var>
<var>MatStm1._compMasFrac[3,2]</var>
<var>MatStm1._compMasFrac[2,3]</var>
<var>MatStm1._compMasFrac[3,3]</var>
<row>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,3] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,2] else MatStm1.compMasFlo[1,3]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,2] else MatStm1.compMasFlo[1,2]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,2] else MatStm1.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,1] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="5">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="0" col="7">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="8">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 0.0)</residual>
  </cell><cell row="1" col="7">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="8">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="6">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="7">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="5">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="3" col="6">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="5">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="5" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="5" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="5" col="6">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="6" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="6" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="7" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="7" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else -0.0)</residual>
  </cell><cell row="8" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="8" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="8" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  /* Linear equation system */
  int retValue;
  double aux_x[9] = { data->localData[1]->realVars[35] /* MatStm1.compMasFrac[3,1] variable */,data->localData[1]->realVars[29] /* MatStm1.compMasFrac[1,1] variable */,data->localData[1]->realVars[30] /* MatStm1.compMasFrac[1,2] variable */,data->localData[1]->realVars[33] /* MatStm1.compMasFrac[2,2] variable */,data->localData[1]->realVars[32] /* MatStm1.compMasFrac[2,1] variable */,data->localData[1]->realVars[31] /* MatStm1.compMasFrac[1,3] variable */,data->localData[1]->realVars[36] /* MatStm1.compMasFrac[3,2] variable */,data->localData[1]->realVars[34] /* MatStm1.compMasFrac[2,3] variable */,data->localData[1]->realVars[37] /* MatStm1.compMasFrac[3,3] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 251 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,251};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 251 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[35] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[0];
  data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[1];
  data->localData[0]->realVars[30] /* MatStm1.compMasFrac[1,2] variable */ = aux_x[2];
  data->localData[0]->realVars[33] /* MatStm1.compMasFrac[2,2] variable */ = aux_x[3];
  data->localData[0]->realVars[32] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[4];
  data->localData[0]->realVars[31] /* MatStm1.compMasFrac[1,3] variable */ = aux_x[5];
  data->localData[0]->realVars[36] /* MatStm1.compMasFrac[3,2] variable */ = aux_x[6];
  data->localData[0]->realVars[34] /* MatStm1.compMasFrac[2,3] variable */ = aux_x[7];
  data->localData[0]->realVars[37] /* MatStm1.compMasFrac[3,3] variable */ = aux_x[8];
  TRACE_POP
}

/*
equation index: 252
type: ALGORITHM

  (MatStm1.compMolEntr[2,3], MatStm1.compMolEntr[3,3]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[3].AS, {MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, {MatStm1.comp[3].HOV[1], MatStm1.comp[3].HOV[2], MatStm1.comp[3].HOV[3], MatStm1.comp[3].HOV[4], MatStm1.comp[3].HOV[5], MatStm1.comp[3].HOV[6]}, MatStm1.comp[3].Tb, MatStm1.comp[3].Tc, MatStm1.T, 101325.0, MatStm1.compMolFrac[2,3], MatStm1.compMolFrac[3,3]);
*/
void Flowsheet_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  real_array tmp6;
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[429], (modelica_real)data->simulationInfo->realParameter[430], (modelica_real)data->simulationInfo->realParameter[431], (modelica_real)data->simulationInfo->realParameter[432], (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434]);
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[279], (modelica_real)data->simulationInfo->realParameter[280], (modelica_real)data->simulationInfo->realParameter[281], (modelica_real)data->simulationInfo->realParameter[282], (modelica_real)data->simulationInfo->realParameter[283], (modelica_real)data->simulationInfo->realParameter[284]);
  data->localData[0]->realVars[52] /* MatStm1.compMolEntr[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[242], tmp6, tmp7, data->simulationInfo->realParameter[386], data->simulationInfo->realParameter[389], data->localData[0]->realVars[19] /* MatStm1.T variable */, 101325.0, data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */, data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */ ,&data->localData[0]->realVars[55] /* MatStm1.compMolEntr[3,3] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_546(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_547(DATA *data, threadData_t *threadData);


/*
equation index: 255
type: ALGORITHM

  (MatStm1.compMolEntr[2,2], MatStm1.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[2].AS, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tb, MatStm1.comp[2].Tc, MatStm1.T, 101325.0, MatStm1.compMolFrac[2,2], MatStm1.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[273], (modelica_real)data->simulationInfo->realParameter[274], (modelica_real)data->simulationInfo->realParameter[275], (modelica_real)data->simulationInfo->realParameter[276], (modelica_real)data->simulationInfo->realParameter[277], (modelica_real)data->simulationInfo->realParameter[278]);
  data->localData[0]->realVars[51] /* MatStm1.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[241], tmp8, tmp9, data->simulationInfo->realParameter[385], data->simulationInfo->realParameter[388], data->localData[0]->realVars[19] /* MatStm1.T variable */, 101325.0, data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */, data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[54] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_549(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_550(DATA *data, threadData_t *threadData);


/*
equation index: 258
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, MatStm1.T, 101325.0, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270], (modelica_real)data->simulationInfo->realParameter[271], (modelica_real)data->simulationInfo->realParameter[272]);
  data->localData[0]->realVars[50] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[240], tmp10, tmp11, data->simulationInfo->realParameter[384], data->simulationInfo->realParameter[387], data->localData[0]->realVars[19] /* MatStm1.T variable */, 101325.0, data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[53] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_553(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_552(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_554(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_557(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_556(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_555(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_558(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_559(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_560(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_561(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_562(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_565(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_564(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_563(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_468(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_482(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_485(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_484(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_483(DATA *data, threadData_t *threadData);


/*
equation index: 278
type: ALGORITHM

  (MatStm3.compMolEntr[2,2], MatStm3.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[2].AS, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tb, MatStm3.comp[2].Tc, 300.0, 101325.0, MatStm3.compMolFrac[2,2], MatStm3.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  real_array tmp12;
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[897], (modelica_real)data->simulationInfo->realParameter[898], (modelica_real)data->simulationInfo->realParameter[899], (modelica_real)data->simulationInfo->realParameter[900], (modelica_real)data->simulationInfo->realParameter[901], (modelica_real)data->simulationInfo->realParameter[902]);
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)data->simulationInfo->realParameter[747], (modelica_real)data->simulationInfo->realParameter[748], (modelica_real)data->simulationInfo->realParameter[749], (modelica_real)data->simulationInfo->realParameter[750], (modelica_real)data->simulationInfo->realParameter[751], (modelica_real)data->simulationInfo->realParameter[752]);
  data->localData[0]->realVars[288] /* MatStm3.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[715], tmp12, tmp13, data->simulationInfo->realParameter[859], data->simulationInfo->realParameter[862], 300.0, 101325.0, data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */, data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[291] /* MatStm3.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_473(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_474(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_569(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_572(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_571(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_570(DATA *data, threadData_t *threadData);


/*
equation index: 285
type: ALGORITHM

  MatStm3.MW[3] := $START.MatStm3.MW[3];
  MatStm3.MW[2] := $START.MatStm3.MW[2];
  MatStm3.MW[1] := $START.MatStm3.MW[1];
  for i in 1:3 loop
    MatStm3.MW[:] := {MatStm3.MW[1] + MatStm3.compMolFrac[1,i] * MatStm3.comp[i].MW, MatStm3.MW[2] + MatStm3.compMolFrac[2,i] * MatStm3.comp[i].MW, MatStm3.MW[3] + MatStm3.compMolFrac[3,i] * MatStm3.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  real_array tmp14;
  index_spec_t tmp15;
  real_array tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  modelica_integer tmp19;
  data->localData[0]->realVars[249] /* MatStm3.MW[3] variable */ = data->modelData->realVarsData[249].attribute /* MatStm3.MW[3] variable */.start;

  data->localData[0]->realVars[248] /* MatStm3.MW[2] variable */ = data->modelData->realVarsData[248].attribute /* MatStm3.MW[2] variable */.start;

  data->localData[0]->realVars[247] /* MatStm3.MW[1] variable */ = data->modelData->realVarsData[247].attribute /* MatStm3.MW[1] variable */.start;

  tmp17 = ((modelica_integer) 1); tmp18 = 1; tmp19 = ((modelica_integer) 3);
  if(!(((tmp18 > 0) && (tmp17 > tmp19)) || ((tmp18 < 0) && (tmp17 < tmp19))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp17, tmp19); $Pi += tmp18)
    {
      array_alloc_scalar_real_array(&tmp14, 3, (modelica_real)data->localData[0]->realVars[247] /* MatStm3.MW[1] variable */ + ((&data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[837])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[248] /* MatStm3.MW[2] variable */ + ((&data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[837])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[249] /* MatStm3.MW[3] variable */ + ((&data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[837])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]));
      create_index_spec(&tmp15, 1, (1), (int*)0, 'W');
      real_array_create(&tmp16, (modelica_real*)&data->localData[0]->realVars[247] /* MatStm3.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp14, &tmp16, &tmp15);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_475(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_479(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_471(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_480(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_476(DATA *data, threadData_t *threadData);


/*
equation index: 291
type: LINEAR

<var>MatStm3._compMasFrac[2,2]</var>
<var>MatStm3._compMasFrac[1,2]</var>
<var>MatStm3._compMasFrac[1,1]</var>
<var>MatStm3._compMasFrac[2,1]</var>
<var>MatStm3._compMasFrac[2,3]</var>
<var>MatStm3._compMasFrac[3,2]</var>
<var>MatStm3._compMasFrac[1,3]</var>
<var>MatStm3._compMasFrac[3,3]</var>
<var>MatStm3._compMasFrac[3,1]</var>
<row>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,3] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,2] else MatStm3.compMasFlo[1,3]</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,2] else MatStm3.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,2] else MatStm3.compMasFlo[1,2]</cell>
</row>
<matrix>
  <cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -1.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="0" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="6">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="0" col="8">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="7">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="8">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else 0.0)</residual>
  </cell><cell row="2" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="6">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -1.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="7">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="3" col="5">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="3" col="6">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101325.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -1.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="4" col="5">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="5" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="5" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="5" col="5">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="6" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="6" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="6" col="8">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="7" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else -0.0)</residual>
  </cell><cell row="7" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101325.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell><cell row="8" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="8" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101325.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  /* Linear equation system */
  int retValue;
  double aux_x[9] = { data->localData[1]->realVars[270] /* MatStm3.compMasFrac[2,2] variable */,data->localData[1]->realVars[267] /* MatStm3.compMasFrac[1,2] variable */,data->localData[1]->realVars[266] /* MatStm3.compMasFrac[1,1] variable */,data->localData[1]->realVars[269] /* MatStm3.compMasFrac[2,1] variable */,data->localData[1]->realVars[271] /* MatStm3.compMasFrac[2,3] variable */,data->localData[1]->realVars[273] /* MatStm3.compMasFrac[3,2] variable */,data->localData[1]->realVars[268] /* MatStm3.compMasFrac[1,3] variable */,data->localData[1]->realVars[274] /* MatStm3.compMasFrac[3,3] variable */,data->localData[1]->realVars[272] /* MatStm3.compMasFrac[3,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 291 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,291};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 291 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[270] /* MatStm3.compMasFrac[2,2] variable */ = aux_x[0];
  data->localData[0]->realVars[267] /* MatStm3.compMasFrac[1,2] variable */ = aux_x[1];
  data->localData[0]->realVars[266] /* MatStm3.compMasFrac[1,1] variable */ = aux_x[2];
  data->localData[0]->realVars[269] /* MatStm3.compMasFrac[2,1] variable */ = aux_x[3];
  data->localData[0]->realVars[271] /* MatStm3.compMasFrac[2,3] variable */ = aux_x[4];
  data->localData[0]->realVars[273] /* MatStm3.compMasFrac[3,2] variable */ = aux_x[5];
  data->localData[0]->realVars[268] /* MatStm3.compMasFrac[1,3] variable */ = aux_x[6];
  data->localData[0]->realVars[274] /* MatStm3.compMasFrac[3,3] variable */ = aux_x[7];
  data->localData[0]->realVars[272] /* MatStm3.compMasFrac[3,1] variable */ = aux_x[8];
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[1] = 200.0
*/
void Flowsheet_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  data->localData[0]->realVars[118] /* MatStm1.totMolFlo[1] variable */ = 200.0;
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
MatStm1._P = 101325.0
*/
void Flowsheet_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  data->localData[0]->realVars[13] /* MatStm1.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  data->localData[0]->realVars[86] /* MatStm1.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
MatStm1._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  data->localData[0]->realVars[89] /* MatStm1.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
MatStm1._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->localData[0]->realVars[94] /* MatStm1.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
MatStm1._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  data->localData[0]->realVars[123] /* MatStm1.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[2] = 1.0
*/
void Flowsheet_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  data->localData[0]->realVars[87] /* MatStm1.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
MatStm1._gammaDew[2] = 1.0
*/
void Flowsheet_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->localData[0]->realVars[90] /* MatStm1.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
MatStm1._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  data->localData[0]->realVars[95] /* MatStm1.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 301
type: SIMPLE_ASSIGN
MatStm1._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  data->localData[0]->realVars[124] /* MatStm1.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 302
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[3] = 1.0
*/
void Flowsheet_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  data->localData[0]->realVars[88] /* MatStm1.gammaBubl[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
MatStm1._gammaDew[3] = 1.0
*/
void Flowsheet_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  data->localData[0]->realVars[91] /* MatStm1.gammaDew[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
MatStm1._liqfugcoeff_bubl[3] = 1.0
*/
void Flowsheet_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  data->localData[0]->realVars[96] /* MatStm1.liqfugcoeff_bubl[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 305
type: SIMPLE_ASSIGN
MatStm1._vapfugcoeff_dew[3] = 1.0
*/
void Flowsheet_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->localData[0]->realVars[125] /* MatStm1.vapfugcoeff_dew[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 306
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->localData[0]->realVars[113] /* MatStm1.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 307
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->localData[0]->realVars[114] /* MatStm1.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 308
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->localData[0]->realVars[107] /* MatStm1.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 309
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->localData[0]->realVars[108] /* MatStm1.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 310
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->localData[0]->realVars[110] /* MatStm1.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 311
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  data->localData[0]->realVars[111] /* MatStm1.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 312
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->localData[0]->realVars[205] /* MatStm2.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
MatStm2._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  data->localData[0]->realVars[208] /* MatStm2.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 314
type: SIMPLE_ASSIGN
MatStm2._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->localData[0]->realVars[213] /* MatStm2.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
MatStm2._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->localData[0]->realVars[241] /* MatStm2.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[2] = 1.0
*/
void Flowsheet_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->localData[0]->realVars[206] /* MatStm2.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 317
type: SIMPLE_ASSIGN
MatStm2._gammaDew[2] = 1.0
*/
void Flowsheet_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  data->localData[0]->realVars[209] /* MatStm2.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 318
type: SIMPLE_ASSIGN
MatStm2._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  data->localData[0]->realVars[214] /* MatStm2.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 319
type: SIMPLE_ASSIGN
MatStm2._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  data->localData[0]->realVars[242] /* MatStm2.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 320
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[3] = 1.0
*/
void Flowsheet_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->localData[0]->realVars[207] /* MatStm2.gammaBubl[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 321
type: SIMPLE_ASSIGN
MatStm2._gammaDew[3] = 1.0
*/
void Flowsheet_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->localData[0]->realVars[210] /* MatStm2.gammaDew[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 322
type: SIMPLE_ASSIGN
MatStm2._liqfugcoeff_bubl[3] = 1.0
*/
void Flowsheet_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->localData[0]->realVars[215] /* MatStm2.liqfugcoeff_bubl[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 323
type: SIMPLE_ASSIGN
MatStm2._vapfugcoeff_dew[3] = 1.0
*/
void Flowsheet_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->localData[0]->realVars[243] /* MatStm2.vapfugcoeff_dew[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 324
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->localData[0]->realVars[232] /* MatStm2.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 325
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  data->localData[0]->realVars[233] /* MatStm2.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 326
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->localData[0]->realVars[226] /* MatStm2.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 327
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->localData[0]->realVars[227] /* MatStm2.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 328
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->localData[0]->realVars[229] /* MatStm2.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->localData[0]->realVars[230] /* MatStm2.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 330
type: SIMPLE_ASSIGN
MatStm3._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->localData[0]->realVars[323] /* MatStm3.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
MatStm3._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->localData[0]->realVars[326] /* MatStm3.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
MatStm3._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->localData[0]->realVars[331] /* MatStm3.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
MatStm3._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->localData[0]->realVars[359] /* MatStm3.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 334
type: SIMPLE_ASSIGN
MatStm3._gammaBubl[2] = 1.0
*/
void Flowsheet_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->localData[0]->realVars[324] /* MatStm3.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 335
type: SIMPLE_ASSIGN
MatStm3._gammaDew[2] = 1.0
*/
void Flowsheet_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->localData[0]->realVars[327] /* MatStm3.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 336
type: SIMPLE_ASSIGN
MatStm3._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->localData[0]->realVars[332] /* MatStm3.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 337
type: SIMPLE_ASSIGN
MatStm3._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->localData[0]->realVars[360] /* MatStm3.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 338
type: SIMPLE_ASSIGN
MatStm3._gammaBubl[3] = 1.0
*/
void Flowsheet_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->localData[0]->realVars[325] /* MatStm3.gammaBubl[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 339
type: SIMPLE_ASSIGN
MatStm3._gammaDew[3] = 1.0
*/
void Flowsheet_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->localData[0]->realVars[328] /* MatStm3.gammaDew[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 340
type: SIMPLE_ASSIGN
MatStm3._liqfugcoeff_bubl[3] = 1.0
*/
void Flowsheet_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->localData[0]->realVars[333] /* MatStm3.liqfugcoeff_bubl[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 341
type: SIMPLE_ASSIGN
MatStm3._vapfugcoeff_dew[3] = 1.0
*/
void Flowsheet_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  data->localData[0]->realVars[361] /* MatStm3.vapfugcoeff_dew[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 342
type: SIMPLE_ASSIGN
MatStm3._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  data->localData[0]->realVars[350] /* MatStm3.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 343
type: SIMPLE_ASSIGN
MatStm3._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  data->localData[0]->realVars[351] /* MatStm3.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
MatStm3._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  data->localData[0]->realVars[344] /* MatStm3.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
MatStm3._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  data->localData[0]->realVars[345] /* MatStm3.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
MatStm3._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  data->localData[0]->realVars[347] /* MatStm3.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
MatStm3._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->localData[0]->realVars[348] /* MatStm3.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
MatStm3._P = 101325.0
*/
void Flowsheet_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->localData[0]->realVars[250] /* MatStm3.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
MatStm3._T = 300.0
*/
void Flowsheet_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->localData[0]->realVars[256] /* MatStm3.T variable */ = 300.0;
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[1] = 100.0
*/
void Flowsheet_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->localData[0]->realVars[355] /* MatStm3.totMolFlo[1] variable */ = 100.0;
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
MatStm2._P = 101325.0
*/
void Flowsheet_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->localData[0]->realVars[132] /* MatStm2.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
MatStm2._T = 300.0
*/
void Flowsheet_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  data->localData[0]->realVars[138] /* MatStm2.T variable */ = 300.0;
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[1] = 100.0
*/
void Flowsheet_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->localData[0]->realVars[237] /* MatStm2.totMolFlo[1] variable */ = 100.0;
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
  Flowsheet_eqFunction_358(data, threadData);
  Flowsheet_eqFunction_356(data, threadData);
  Flowsheet_eqFunction_354(data, threadData);
  Flowsheet_eqFunction_359(data, threadData);
  Flowsheet_eqFunction_357(data, threadData);
  Flowsheet_eqFunction_355(data, threadData);
  Flowsheet_eqFunction_118(data, threadData);
  Flowsheet_eqFunction_410(data, threadData);
  Flowsheet_eqFunction_411(data, threadData);
  Flowsheet_eqFunction_121(data, threadData);
  Flowsheet_eqFunction_395(data, threadData);
  Flowsheet_eqFunction_394(data, threadData);
  Flowsheet_eqFunction_398(data, threadData);
  Flowsheet_eqFunction_397(data, threadData);
  Flowsheet_eqFunction_407(data, threadData);
  Flowsheet_eqFunction_406(data, threadData);
  Flowsheet_eqFunction_128(data, threadData);
  Flowsheet_eqFunction_400(data, threadData);
  Flowsheet_eqFunction_419(data, threadData);
  Flowsheet_eqFunction_422(data, threadData);
  Flowsheet_eqFunction_421(data, threadData);
  Flowsheet_eqFunction_420(data, threadData);
  Flowsheet_eqFunction_399(data, threadData);
  Flowsheet_eqFunction_415(data, threadData);
  Flowsheet_eqFunction_418(data, threadData);
  Flowsheet_eqFunction_417(data, threadData);
  Flowsheet_eqFunction_416(data, threadData);
  Flowsheet_eqFunction_139(data, threadData);
  Flowsheet_eqFunction_405(data, threadData);
  Flowsheet_eqFunction_402(data, threadData);
  Flowsheet_eqFunction_423(data, threadData);
  Flowsheet_eqFunction_426(data, threadData);
  Flowsheet_eqFunction_425(data, threadData);
  Flowsheet_eqFunction_424(data, threadData);
  Flowsheet_eqFunction_146(data, threadData);
  Flowsheet_eqFunction_404(data, threadData);
  Flowsheet_eqFunction_412(data, threadData);
  Flowsheet_eqFunction_414(data, threadData);
  Flowsheet_eqFunction_408(data, threadData);
  Flowsheet_eqFunction_409(data, threadData);
  Flowsheet_eqFunction_152(data, threadData);
  Flowsheet_eqFunction_185(data, threadData);
  Flowsheet_eqFunction_478(data, threadData);
  Flowsheet_eqFunction_477(data, threadData);
  Flowsheet_eqFunction_461(data, threadData);
  Flowsheet_eqFunction_462(data, threadData);
  Flowsheet_eqFunction_190(data, threadData);
  Flowsheet_eqFunction_466(data, threadData);
  Flowsheet_eqFunction_465(data, threadData);
  Flowsheet_eqFunction_464(data, threadData);
  Flowsheet_eqFunction_463(data, threadData);
  Flowsheet_eqFunction_195(data, threadData);
  Flowsheet_eqFunction_469(data, threadData);
  Flowsheet_eqFunction_486(data, threadData);
  Flowsheet_eqFunction_489(data, threadData);
  Flowsheet_eqFunction_488(data, threadData);
  Flowsheet_eqFunction_487(data, threadData);
  Flowsheet_eqFunction_490(data, threadData);
  Flowsheet_eqFunction_568(data, threadData);
  Flowsheet_eqFunction_567(data, threadData);
  Flowsheet_eqFunction_566(data, threadData);
  Flowsheet_eqFunction_238(data, threadData);
  Flowsheet_eqFunction_536(data, threadData);
  Flowsheet_eqFunction_537(data, threadData);
  Flowsheet_eqFunction_532(data, threadData);
  Flowsheet_eqFunction_533(data, threadData);
  Flowsheet_eqFunction_243(data, threadData);
  Flowsheet_eqFunction_541(data, threadData);
  Flowsheet_eqFunction_539(data, threadData);
  Flowsheet_eqFunction_542(data, threadData);
  Flowsheet_eqFunction_540(data, threadData);
  Flowsheet_eqFunction_544(data, threadData);
  Flowsheet_eqFunction_534(data, threadData);
  Flowsheet_eqFunction_535(data, threadData);
  Flowsheet_eqFunction_251(data, threadData);
  Flowsheet_eqFunction_252(data, threadData);
  Flowsheet_eqFunction_546(data, threadData);
  Flowsheet_eqFunction_547(data, threadData);
  Flowsheet_eqFunction_255(data, threadData);
  Flowsheet_eqFunction_549(data, threadData);
  Flowsheet_eqFunction_550(data, threadData);
  Flowsheet_eqFunction_258(data, threadData);
  Flowsheet_eqFunction_553(data, threadData);
  Flowsheet_eqFunction_552(data, threadData);
  Flowsheet_eqFunction_554(data, threadData);
  Flowsheet_eqFunction_557(data, threadData);
  Flowsheet_eqFunction_556(data, threadData);
  Flowsheet_eqFunction_555(data, threadData);
  Flowsheet_eqFunction_558(data, threadData);
  Flowsheet_eqFunction_559(data, threadData);
  Flowsheet_eqFunction_560(data, threadData);
  Flowsheet_eqFunction_561(data, threadData);
  Flowsheet_eqFunction_562(data, threadData);
  Flowsheet_eqFunction_565(data, threadData);
  Flowsheet_eqFunction_564(data, threadData);
  Flowsheet_eqFunction_563(data, threadData);
  Flowsheet_eqFunction_468(data, threadData);
  Flowsheet_eqFunction_482(data, threadData);
  Flowsheet_eqFunction_485(data, threadData);
  Flowsheet_eqFunction_484(data, threadData);
  Flowsheet_eqFunction_483(data, threadData);
  Flowsheet_eqFunction_278(data, threadData);
  Flowsheet_eqFunction_473(data, threadData);
  Flowsheet_eqFunction_474(data, threadData);
  Flowsheet_eqFunction_569(data, threadData);
  Flowsheet_eqFunction_572(data, threadData);
  Flowsheet_eqFunction_571(data, threadData);
  Flowsheet_eqFunction_570(data, threadData);
  Flowsheet_eqFunction_285(data, threadData);
  Flowsheet_eqFunction_475(data, threadData);
  Flowsheet_eqFunction_479(data, threadData);
  Flowsheet_eqFunction_471(data, threadData);
  Flowsheet_eqFunction_480(data, threadData);
  Flowsheet_eqFunction_476(data, threadData);
  Flowsheet_eqFunction_291(data, threadData);
  Flowsheet_eqFunction_292(data, threadData);
  Flowsheet_eqFunction_293(data, threadData);
  Flowsheet_eqFunction_294(data, threadData);
  Flowsheet_eqFunction_295(data, threadData);
  Flowsheet_eqFunction_296(data, threadData);
  Flowsheet_eqFunction_297(data, threadData);
  Flowsheet_eqFunction_298(data, threadData);
  Flowsheet_eqFunction_299(data, threadData);
  Flowsheet_eqFunction_300(data, threadData);
  Flowsheet_eqFunction_301(data, threadData);
  Flowsheet_eqFunction_302(data, threadData);
  Flowsheet_eqFunction_303(data, threadData);
  Flowsheet_eqFunction_304(data, threadData);
  Flowsheet_eqFunction_305(data, threadData);
  Flowsheet_eqFunction_306(data, threadData);
  Flowsheet_eqFunction_307(data, threadData);
  Flowsheet_eqFunction_308(data, threadData);
  Flowsheet_eqFunction_309(data, threadData);
  Flowsheet_eqFunction_310(data, threadData);
  Flowsheet_eqFunction_311(data, threadData);
  Flowsheet_eqFunction_312(data, threadData);
  Flowsheet_eqFunction_313(data, threadData);
  Flowsheet_eqFunction_314(data, threadData);
  Flowsheet_eqFunction_315(data, threadData);
  Flowsheet_eqFunction_316(data, threadData);
  Flowsheet_eqFunction_317(data, threadData);
  Flowsheet_eqFunction_318(data, threadData);
  Flowsheet_eqFunction_319(data, threadData);
  Flowsheet_eqFunction_320(data, threadData);
  Flowsheet_eqFunction_321(data, threadData);
  Flowsheet_eqFunction_322(data, threadData);
  Flowsheet_eqFunction_323(data, threadData);
  Flowsheet_eqFunction_324(data, threadData);
  Flowsheet_eqFunction_325(data, threadData);
  Flowsheet_eqFunction_326(data, threadData);
  Flowsheet_eqFunction_327(data, threadData);
  Flowsheet_eqFunction_328(data, threadData);
  Flowsheet_eqFunction_329(data, threadData);
  Flowsheet_eqFunction_330(data, threadData);
  Flowsheet_eqFunction_331(data, threadData);
  Flowsheet_eqFunction_332(data, threadData);
  Flowsheet_eqFunction_333(data, threadData);
  Flowsheet_eqFunction_334(data, threadData);
  Flowsheet_eqFunction_335(data, threadData);
  Flowsheet_eqFunction_336(data, threadData);
  Flowsheet_eqFunction_337(data, threadData);
  Flowsheet_eqFunction_338(data, threadData);
  Flowsheet_eqFunction_339(data, threadData);
  Flowsheet_eqFunction_340(data, threadData);
  Flowsheet_eqFunction_341(data, threadData);
  Flowsheet_eqFunction_342(data, threadData);
  Flowsheet_eqFunction_343(data, threadData);
  Flowsheet_eqFunction_344(data, threadData);
  Flowsheet_eqFunction_345(data, threadData);
  Flowsheet_eqFunction_346(data, threadData);
  Flowsheet_eqFunction_347(data, threadData);
  Flowsheet_eqFunction_348(data, threadData);
  Flowsheet_eqFunction_349(data, threadData);
  Flowsheet_eqFunction_350(data, threadData);
  Flowsheet_eqFunction_351(data, threadData);
  Flowsheet_eqFunction_352(data, threadData);
  Flowsheet_eqFunction_353(data, threadData);
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

