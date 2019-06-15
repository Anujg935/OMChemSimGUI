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
MatStm4._gamma[1] = 1.0
*/
void Flowsheet_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[438] /* MatStm4.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
MatStm4._gamma[2] = 1.0
*/
void Flowsheet_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[439] /* MatStm4.gamma[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
MatStm4._gamma[3] = 1.0
*/
void Flowsheet_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[440] /* MatStm4.gamma[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
MatStm4._resMolSpHeat[1] = 0.0
*/
void Flowsheet_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[467] /* MatStm4.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
MatStm4._resMolEnth[1] = 0.0
*/
void Flowsheet_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[461] /* MatStm4.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
MatStm4._resMolEntr[1] = 0.0
*/
void Flowsheet_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[464] /* MatStm4.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
MatStm4._Psat[3] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm4.comp[3].VP[1], MatStm4.comp[3].VP[2], MatStm4.comp[3].VP[3], MatStm4.comp[3].VP[4], MatStm4.comp[3].VP[5], MatStm4.comp[3].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[1122], (modelica_real)data->simulationInfo->realParameter[1123], (modelica_real)data->simulationInfo->realParameter[1124], (modelica_real)data->simulationInfo->realParameter[1125], (modelica_real)data->simulationInfo->realParameter[1126], (modelica_real)data->simulationInfo->realParameter[1127]);
  data->localData[0]->realVars[373] /* MatStm4.Psat[3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, 300.0);
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
MatStm4._K[3] = 9.869232667160129e-006 * MatStm4.Psat[3]
*/
void Flowsheet_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->localData[0]->realVars[364] /* MatStm4.K[3] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[373] /* MatStm4.Psat[3] variable */);
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
MatStm4._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm4.comp[2].VP[1], MatStm4.comp[2].VP[2], MatStm4.comp[2].VP[3], MatStm4.comp[2].VP[4], MatStm4.comp[2].VP[5], MatStm4.comp[2].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[1116], (modelica_real)data->simulationInfo->realParameter[1117], (modelica_real)data->simulationInfo->realParameter[1118], (modelica_real)data->simulationInfo->realParameter[1119], (modelica_real)data->simulationInfo->realParameter[1120], (modelica_real)data->simulationInfo->realParameter[1121]);
  data->localData[0]->realVars[372] /* MatStm4.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp1, 300.0);
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
MatStm4._K[2] = 9.869232667160129e-006 * MatStm4.Psat[2]
*/
void Flowsheet_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[363] /* MatStm4.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[372] /* MatStm4.Psat[2] variable */);
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
MatStm4._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm4.comp[1].VP[1], MatStm4.comp[1].VP[2], MatStm4.comp[1].VP[3], MatStm4.comp[1].VP[4], MatStm4.comp[1].VP[5], MatStm4.comp[1].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  real_array tmp2;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[1110], (modelica_real)data->simulationInfo->realParameter[1111], (modelica_real)data->simulationInfo->realParameter[1112], (modelica_real)data->simulationInfo->realParameter[1113], (modelica_real)data->simulationInfo->realParameter[1114], (modelica_real)data->simulationInfo->realParameter[1115]);
  data->localData[0]->realVars[371] /* MatStm4.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp2, 300.0);
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
MatStm4._K[1] = 9.869232667160129e-006 * MatStm4.Psat[1]
*/
void Flowsheet_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->realVars[362] /* MatStm4.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[371] /* MatStm4.Psat[1] variable */);
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[3,3] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm4.comp[3].SH, {MatStm4.comp[3].VapCp[1], MatStm4.comp[3].VapCp[2], MatStm4.comp[3].VapCp[3], MatStm4.comp[3].VapCp[4], MatStm4.comp[3].VapCp[5], MatStm4.comp[3].VapCp[6]}, {MatStm4.comp[3].HOV[1], MatStm4.comp[3].HOV[2], MatStm4.comp[3].HOV[3], MatStm4.comp[3].HOV[4], MatStm4.comp[3].HOV[5], MatStm4.comp[3].HOV[6]}, MatStm4.comp[3].Tc, 300.0)
*/
void Flowsheet_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  real_array tmp3;
  real_array tmp4;
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[1140], (modelica_real)data->simulationInfo->realParameter[1141], (modelica_real)data->simulationInfo->realParameter[1142], (modelica_real)data->simulationInfo->realParameter[1143], (modelica_real)data->simulationInfo->realParameter[1144], (modelica_real)data->simulationInfo->realParameter[1145]);
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[990], (modelica_real)data->simulationInfo->realParameter[991], (modelica_real)data->simulationInfo->realParameter[992], (modelica_real)data->simulationInfo->realParameter[993], (modelica_real)data->simulationInfo->realParameter[994], (modelica_real)data->simulationInfo->realParameter[995]);
  data->localData[0]->realVars[401] /* MatStm4.compMolEnth[3,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[1085], tmp3, tmp4, data->simulationInfo->realParameter[1100], 300.0);
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[2,3] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm4.comp[3].SH, {MatStm4.comp[3].VapCp[1], MatStm4.comp[3].VapCp[2], MatStm4.comp[3].VapCp[3], MatStm4.comp[3].VapCp[4], MatStm4.comp[3].VapCp[5], MatStm4.comp[3].VapCp[6]}, {MatStm4.comp[3].HOV[1], MatStm4.comp[3].HOV[2], MatStm4.comp[3].HOV[3], MatStm4.comp[3].HOV[4], MatStm4.comp[3].HOV[5], MatStm4.comp[3].HOV[6]}, MatStm4.comp[3].Tc, 300.0)
*/
void Flowsheet_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  real_array tmp5;
  real_array tmp6;
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[1140], (modelica_real)data->simulationInfo->realParameter[1141], (modelica_real)data->simulationInfo->realParameter[1142], (modelica_real)data->simulationInfo->realParameter[1143], (modelica_real)data->simulationInfo->realParameter[1144], (modelica_real)data->simulationInfo->realParameter[1145]);
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[990], (modelica_real)data->simulationInfo->realParameter[991], (modelica_real)data->simulationInfo->realParameter[992], (modelica_real)data->simulationInfo->realParameter[993], (modelica_real)data->simulationInfo->realParameter[994], (modelica_real)data->simulationInfo->realParameter[995]);
  data->localData[0]->realVars[398] /* MatStm4.compMolEnth[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[1085], tmp5, tmp6, data->simulationInfo->realParameter[1100], 300.0);
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[3,3] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm4.comp[3].VapCp[1], MatStm4.comp[3].VapCp[2], MatStm4.comp[3].VapCp[3], MatStm4.comp[3].VapCp[4], MatStm4.comp[3].VapCp[5], MatStm4.comp[3].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[1140], (modelica_real)data->simulationInfo->realParameter[1141], (modelica_real)data->simulationInfo->realParameter[1142], (modelica_real)data->simulationInfo->realParameter[1143], (modelica_real)data->simulationInfo->realParameter[1144], (modelica_real)data->simulationInfo->realParameter[1145]);
  data->localData[0]->realVars[437] /* MatStm4.compMolSpHeat[3,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp7, 300.0);
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[2,3] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm4.comp[3].LiqCp[1], MatStm4.comp[3].LiqCp[2], MatStm4.comp[3].LiqCp[3], MatStm4.comp[3].LiqCp[4], MatStm4.comp[3].LiqCp[5], MatStm4.comp[3].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  real_array tmp8;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[1014], (modelica_real)data->simulationInfo->realParameter[1015], (modelica_real)data->simulationInfo->realParameter[1016], (modelica_real)data->simulationInfo->realParameter[1017], (modelica_real)data->simulationInfo->realParameter[1018], (modelica_real)data->simulationInfo->realParameter[1019]);
  data->localData[0]->realVars[434] /* MatStm4.compMolSpHeat[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp8, 300.0);
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm4.comp[2].SH, {MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, {MatStm4.comp[2].HOV[1], MatStm4.comp[2].HOV[2], MatStm4.comp[2].HOV[3], MatStm4.comp[2].HOV[4], MatStm4.comp[2].HOV[5], MatStm4.comp[2].HOV[6]}, MatStm4.comp[2].Tc, 300.0)
*/
void Flowsheet_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  real_array tmp9;
  real_array tmp10;
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[1134], (modelica_real)data->simulationInfo->realParameter[1135], (modelica_real)data->simulationInfo->realParameter[1136], (modelica_real)data->simulationInfo->realParameter[1137], (modelica_real)data->simulationInfo->realParameter[1138], (modelica_real)data->simulationInfo->realParameter[1139]);
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[984], (modelica_real)data->simulationInfo->realParameter[985], (modelica_real)data->simulationInfo->realParameter[986], (modelica_real)data->simulationInfo->realParameter[987], (modelica_real)data->simulationInfo->realParameter[988], (modelica_real)data->simulationInfo->realParameter[989]);
  data->localData[0]->realVars[400] /* MatStm4.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[1084], tmp9, tmp10, data->simulationInfo->realParameter[1099], 300.0);
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm4.comp[2].SH, {MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, {MatStm4.comp[2].HOV[1], MatStm4.comp[2].HOV[2], MatStm4.comp[2].HOV[3], MatStm4.comp[2].HOV[4], MatStm4.comp[2].HOV[5], MatStm4.comp[2].HOV[6]}, MatStm4.comp[2].Tc, 300.0)
*/
void Flowsheet_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  real_array tmp11;
  real_array tmp12;
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[1134], (modelica_real)data->simulationInfo->realParameter[1135], (modelica_real)data->simulationInfo->realParameter[1136], (modelica_real)data->simulationInfo->realParameter[1137], (modelica_real)data->simulationInfo->realParameter[1138], (modelica_real)data->simulationInfo->realParameter[1139]);
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[984], (modelica_real)data->simulationInfo->realParameter[985], (modelica_real)data->simulationInfo->realParameter[986], (modelica_real)data->simulationInfo->realParameter[987], (modelica_real)data->simulationInfo->realParameter[988], (modelica_real)data->simulationInfo->realParameter[989]);
  data->localData[0]->realVars[397] /* MatStm4.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[1084], tmp11, tmp12, data->simulationInfo->realParameter[1099], 300.0);
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)data->simulationInfo->realParameter[1134], (modelica_real)data->simulationInfo->realParameter[1135], (modelica_real)data->simulationInfo->realParameter[1136], (modelica_real)data->simulationInfo->realParameter[1137], (modelica_real)data->simulationInfo->realParameter[1138], (modelica_real)data->simulationInfo->realParameter[1139]);
  data->localData[0]->realVars[436] /* MatStm4.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp13, 300.0);
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm4.comp[2].LiqCp[1], MatStm4.comp[2].LiqCp[2], MatStm4.comp[2].LiqCp[3], MatStm4.comp[2].LiqCp[4], MatStm4.comp[2].LiqCp[5], MatStm4.comp[2].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  real_array tmp14;
  array_alloc_scalar_real_array(&tmp14, 6, (modelica_real)data->simulationInfo->realParameter[1008], (modelica_real)data->simulationInfo->realParameter[1009], (modelica_real)data->simulationInfo->realParameter[1010], (modelica_real)data->simulationInfo->realParameter[1011], (modelica_real)data->simulationInfo->realParameter[1012], (modelica_real)data->simulationInfo->realParameter[1013]);
  data->localData[0]->realVars[433] /* MatStm4.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp14, 300.0);
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm4.comp[1].SH, {MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, {MatStm4.comp[1].HOV[1], MatStm4.comp[1].HOV[2], MatStm4.comp[1].HOV[3], MatStm4.comp[1].HOV[4], MatStm4.comp[1].HOV[5], MatStm4.comp[1].HOV[6]}, MatStm4.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  real_array tmp15;
  real_array tmp16;
  array_alloc_scalar_real_array(&tmp15, 6, (modelica_real)data->simulationInfo->realParameter[1128], (modelica_real)data->simulationInfo->realParameter[1129], (modelica_real)data->simulationInfo->realParameter[1130], (modelica_real)data->simulationInfo->realParameter[1131], (modelica_real)data->simulationInfo->realParameter[1132], (modelica_real)data->simulationInfo->realParameter[1133]);
  array_alloc_scalar_real_array(&tmp16, 6, (modelica_real)data->simulationInfo->realParameter[978], (modelica_real)data->simulationInfo->realParameter[979], (modelica_real)data->simulationInfo->realParameter[980], (modelica_real)data->simulationInfo->realParameter[981], (modelica_real)data->simulationInfo->realParameter[982], (modelica_real)data->simulationInfo->realParameter[983]);
  data->localData[0]->realVars[399] /* MatStm4.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[1083], tmp15, tmp16, data->simulationInfo->realParameter[1098], 300.0);
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm4.comp[1].SH, {MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, {MatStm4.comp[1].HOV[1], MatStm4.comp[1].HOV[2], MatStm4.comp[1].HOV[3], MatStm4.comp[1].HOV[4], MatStm4.comp[1].HOV[5], MatStm4.comp[1].HOV[6]}, MatStm4.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  real_array tmp17;
  real_array tmp18;
  array_alloc_scalar_real_array(&tmp17, 6, (modelica_real)data->simulationInfo->realParameter[1128], (modelica_real)data->simulationInfo->realParameter[1129], (modelica_real)data->simulationInfo->realParameter[1130], (modelica_real)data->simulationInfo->realParameter[1131], (modelica_real)data->simulationInfo->realParameter[1132], (modelica_real)data->simulationInfo->realParameter[1133]);
  array_alloc_scalar_real_array(&tmp18, 6, (modelica_real)data->simulationInfo->realParameter[978], (modelica_real)data->simulationInfo->realParameter[979], (modelica_real)data->simulationInfo->realParameter[980], (modelica_real)data->simulationInfo->realParameter[981], (modelica_real)data->simulationInfo->realParameter[982], (modelica_real)data->simulationInfo->realParameter[983]);
  data->localData[0]->realVars[396] /* MatStm4.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[1083], tmp17, tmp18, data->simulationInfo->realParameter[1098], 300.0);
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  real_array tmp19;
  array_alloc_scalar_real_array(&tmp19, 6, (modelica_real)data->simulationInfo->realParameter[1128], (modelica_real)data->simulationInfo->realParameter[1129], (modelica_real)data->simulationInfo->realParameter[1130], (modelica_real)data->simulationInfo->realParameter[1131], (modelica_real)data->simulationInfo->realParameter[1132], (modelica_real)data->simulationInfo->realParameter[1133]);
  data->localData[0]->realVars[435] /* MatStm4.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp19, 300.0);
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm4.comp[1].LiqCp[1], MatStm4.comp[1].LiqCp[2], MatStm4.comp[1].LiqCp[3], MatStm4.comp[1].LiqCp[4], MatStm4.comp[1].LiqCp[5], MatStm4.comp[1].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  real_array tmp20;
  array_alloc_scalar_real_array(&tmp20, 6, (modelica_real)data->simulationInfo->realParameter[1002], (modelica_real)data->simulationInfo->realParameter[1003], (modelica_real)data->simulationInfo->realParameter[1004], (modelica_real)data->simulationInfo->realParameter[1005], (modelica_real)data->simulationInfo->realParameter[1006], (modelica_real)data->simulationInfo->realParameter[1007]);
  data->localData[0]->realVars[432] /* MatStm4.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp20, 300.0);
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
MatStm3._Psat[3] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm3.comp[3].VP[1], MatStm3.comp[3].VP[2], MatStm3.comp[3].VP[3], MatStm3.comp[3].VP[4], MatStm3.comp[3].VP[5], MatStm3.comp[3].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  real_array tmp21;
  array_alloc_scalar_real_array(&tmp21, 6, (modelica_real)data->simulationInfo->realParameter[885], (modelica_real)data->simulationInfo->realParameter[886], (modelica_real)data->simulationInfo->realParameter[887], (modelica_real)data->simulationInfo->realParameter[888], (modelica_real)data->simulationInfo->realParameter[889], (modelica_real)data->simulationInfo->realParameter[890]);
  data->localData[0]->realVars[255] /* MatStm3.Psat[3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp21, 300.0);
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
MatStm3._K[3] = 9.869232667160129e-006 * MatStm3.Psat[3]
*/
void Flowsheet_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->localData[0]->realVars[246] /* MatStm3.K[3] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[255] /* MatStm3.Psat[3] variable */);
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
MatStm3._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm3.comp[2].VP[1], MatStm3.comp[2].VP[2], MatStm3.comp[2].VP[3], MatStm3.comp[2].VP[4], MatStm3.comp[2].VP[5], MatStm3.comp[2].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  real_array tmp22;
  array_alloc_scalar_real_array(&tmp22, 6, (modelica_real)data->simulationInfo->realParameter[879], (modelica_real)data->simulationInfo->realParameter[880], (modelica_real)data->simulationInfo->realParameter[881], (modelica_real)data->simulationInfo->realParameter[882], (modelica_real)data->simulationInfo->realParameter[883], (modelica_real)data->simulationInfo->realParameter[884]);
  data->localData[0]->realVars[254] /* MatStm3.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp22, 300.0);
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
MatStm3._K[2] = 9.869232667160129e-006 * MatStm3.Psat[2]
*/
void Flowsheet_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->localData[0]->realVars[245] /* MatStm3.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[254] /* MatStm3.Psat[2] variable */);
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
MatStm3._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm3.comp[1].VP[1], MatStm3.comp[1].VP[2], MatStm3.comp[1].VP[3], MatStm3.comp[1].VP[4], MatStm3.comp[1].VP[5], MatStm3.comp[1].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  real_array tmp23;
  array_alloc_scalar_real_array(&tmp23, 6, (modelica_real)data->simulationInfo->realParameter[873], (modelica_real)data->simulationInfo->realParameter[874], (modelica_real)data->simulationInfo->realParameter[875], (modelica_real)data->simulationInfo->realParameter[876], (modelica_real)data->simulationInfo->realParameter[877], (modelica_real)data->simulationInfo->realParameter[878]);
  data->localData[0]->realVars[253] /* MatStm3.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp23, 300.0);
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
MatStm3._K[1] = 9.869232667160129e-006 * MatStm3.Psat[1]
*/
void Flowsheet_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->realVars[244] /* MatStm3.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[253] /* MatStm3.Psat[1] variable */);
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[3,3] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm3.comp[3].SH, {MatStm3.comp[3].VapCp[1], MatStm3.comp[3].VapCp[2], MatStm3.comp[3].VapCp[3], MatStm3.comp[3].VapCp[4], MatStm3.comp[3].VapCp[5], MatStm3.comp[3].VapCp[6]}, {MatStm3.comp[3].HOV[1], MatStm3.comp[3].HOV[2], MatStm3.comp[3].HOV[3], MatStm3.comp[3].HOV[4], MatStm3.comp[3].HOV[5], MatStm3.comp[3].HOV[6]}, MatStm3.comp[3].Tc, 300.0)
*/
void Flowsheet_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  real_array tmp24;
  real_array tmp25;
  array_alloc_scalar_real_array(&tmp24, 6, (modelica_real)data->simulationInfo->realParameter[903], (modelica_real)data->simulationInfo->realParameter[904], (modelica_real)data->simulationInfo->realParameter[905], (modelica_real)data->simulationInfo->realParameter[906], (modelica_real)data->simulationInfo->realParameter[907], (modelica_real)data->simulationInfo->realParameter[908]);
  array_alloc_scalar_real_array(&tmp25, 6, (modelica_real)data->simulationInfo->realParameter[753], (modelica_real)data->simulationInfo->realParameter[754], (modelica_real)data->simulationInfo->realParameter[755], (modelica_real)data->simulationInfo->realParameter[756], (modelica_real)data->simulationInfo->realParameter[757], (modelica_real)data->simulationInfo->realParameter[758]);
  data->localData[0]->realVars[283] /* MatStm3.compMolEnth[3,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[848], tmp24, tmp25, data->simulationInfo->realParameter[863], 300.0);
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[2,3] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm3.comp[3].SH, {MatStm3.comp[3].VapCp[1], MatStm3.comp[3].VapCp[2], MatStm3.comp[3].VapCp[3], MatStm3.comp[3].VapCp[4], MatStm3.comp[3].VapCp[5], MatStm3.comp[3].VapCp[6]}, {MatStm3.comp[3].HOV[1], MatStm3.comp[3].HOV[2], MatStm3.comp[3].HOV[3], MatStm3.comp[3].HOV[4], MatStm3.comp[3].HOV[5], MatStm3.comp[3].HOV[6]}, MatStm3.comp[3].Tc, 300.0)
*/
void Flowsheet_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  real_array tmp26;
  real_array tmp27;
  array_alloc_scalar_real_array(&tmp26, 6, (modelica_real)data->simulationInfo->realParameter[903], (modelica_real)data->simulationInfo->realParameter[904], (modelica_real)data->simulationInfo->realParameter[905], (modelica_real)data->simulationInfo->realParameter[906], (modelica_real)data->simulationInfo->realParameter[907], (modelica_real)data->simulationInfo->realParameter[908]);
  array_alloc_scalar_real_array(&tmp27, 6, (modelica_real)data->simulationInfo->realParameter[753], (modelica_real)data->simulationInfo->realParameter[754], (modelica_real)data->simulationInfo->realParameter[755], (modelica_real)data->simulationInfo->realParameter[756], (modelica_real)data->simulationInfo->realParameter[757], (modelica_real)data->simulationInfo->realParameter[758]);
  data->localData[0]->realVars[280] /* MatStm3.compMolEnth[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[848], tmp26, tmp27, data->simulationInfo->realParameter[863], 300.0);
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[3,3] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm3.comp[3].VapCp[1], MatStm3.comp[3].VapCp[2], MatStm3.comp[3].VapCp[3], MatStm3.comp[3].VapCp[4], MatStm3.comp[3].VapCp[5], MatStm3.comp[3].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  real_array tmp28;
  array_alloc_scalar_real_array(&tmp28, 6, (modelica_real)data->simulationInfo->realParameter[903], (modelica_real)data->simulationInfo->realParameter[904], (modelica_real)data->simulationInfo->realParameter[905], (modelica_real)data->simulationInfo->realParameter[906], (modelica_real)data->simulationInfo->realParameter[907], (modelica_real)data->simulationInfo->realParameter[908]);
  data->localData[0]->realVars[319] /* MatStm3.compMolSpHeat[3,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp28, 300.0);
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[2,3] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm3.comp[3].LiqCp[1], MatStm3.comp[3].LiqCp[2], MatStm3.comp[3].LiqCp[3], MatStm3.comp[3].LiqCp[4], MatStm3.comp[3].LiqCp[5], MatStm3.comp[3].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  real_array tmp29;
  array_alloc_scalar_real_array(&tmp29, 6, (modelica_real)data->simulationInfo->realParameter[777], (modelica_real)data->simulationInfo->realParameter[778], (modelica_real)data->simulationInfo->realParameter[779], (modelica_real)data->simulationInfo->realParameter[780], (modelica_real)data->simulationInfo->realParameter[781], (modelica_real)data->simulationInfo->realParameter[782]);
  data->localData[0]->realVars[316] /* MatStm3.compMolSpHeat[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp29, 300.0);
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm3.comp[2].SH, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tc, 300.0)
*/
void Flowsheet_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  real_array tmp30;
  real_array tmp31;
  array_alloc_scalar_real_array(&tmp30, 6, (modelica_real)data->simulationInfo->realParameter[897], (modelica_real)data->simulationInfo->realParameter[898], (modelica_real)data->simulationInfo->realParameter[899], (modelica_real)data->simulationInfo->realParameter[900], (modelica_real)data->simulationInfo->realParameter[901], (modelica_real)data->simulationInfo->realParameter[902]);
  array_alloc_scalar_real_array(&tmp31, 6, (modelica_real)data->simulationInfo->realParameter[747], (modelica_real)data->simulationInfo->realParameter[748], (modelica_real)data->simulationInfo->realParameter[749], (modelica_real)data->simulationInfo->realParameter[750], (modelica_real)data->simulationInfo->realParameter[751], (modelica_real)data->simulationInfo->realParameter[752]);
  data->localData[0]->realVars[282] /* MatStm3.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[847], tmp30, tmp31, data->simulationInfo->realParameter[862], 300.0);
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm3.comp[2].SH, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tc, 300.0)
*/
void Flowsheet_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  real_array tmp32;
  real_array tmp33;
  array_alloc_scalar_real_array(&tmp32, 6, (modelica_real)data->simulationInfo->realParameter[897], (modelica_real)data->simulationInfo->realParameter[898], (modelica_real)data->simulationInfo->realParameter[899], (modelica_real)data->simulationInfo->realParameter[900], (modelica_real)data->simulationInfo->realParameter[901], (modelica_real)data->simulationInfo->realParameter[902]);
  array_alloc_scalar_real_array(&tmp33, 6, (modelica_real)data->simulationInfo->realParameter[747], (modelica_real)data->simulationInfo->realParameter[748], (modelica_real)data->simulationInfo->realParameter[749], (modelica_real)data->simulationInfo->realParameter[750], (modelica_real)data->simulationInfo->realParameter[751], (modelica_real)data->simulationInfo->realParameter[752]);
  data->localData[0]->realVars[279] /* MatStm3.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[847], tmp32, tmp33, data->simulationInfo->realParameter[862], 300.0);
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  real_array tmp34;
  array_alloc_scalar_real_array(&tmp34, 6, (modelica_real)data->simulationInfo->realParameter[897], (modelica_real)data->simulationInfo->realParameter[898], (modelica_real)data->simulationInfo->realParameter[899], (modelica_real)data->simulationInfo->realParameter[900], (modelica_real)data->simulationInfo->realParameter[901], (modelica_real)data->simulationInfo->realParameter[902]);
  data->localData[0]->realVars[318] /* MatStm3.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp34, 300.0);
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm3.comp[2].LiqCp[1], MatStm3.comp[2].LiqCp[2], MatStm3.comp[2].LiqCp[3], MatStm3.comp[2].LiqCp[4], MatStm3.comp[2].LiqCp[5], MatStm3.comp[2].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  real_array tmp35;
  array_alloc_scalar_real_array(&tmp35, 6, (modelica_real)data->simulationInfo->realParameter[771], (modelica_real)data->simulationInfo->realParameter[772], (modelica_real)data->simulationInfo->realParameter[773], (modelica_real)data->simulationInfo->realParameter[774], (modelica_real)data->simulationInfo->realParameter[775], (modelica_real)data->simulationInfo->realParameter[776]);
  data->localData[0]->realVars[315] /* MatStm3.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp35, 300.0);
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm3.comp[1].SH, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  real_array tmp36;
  real_array tmp37;
  array_alloc_scalar_real_array(&tmp36, 6, (modelica_real)data->simulationInfo->realParameter[891], (modelica_real)data->simulationInfo->realParameter[892], (modelica_real)data->simulationInfo->realParameter[893], (modelica_real)data->simulationInfo->realParameter[894], (modelica_real)data->simulationInfo->realParameter[895], (modelica_real)data->simulationInfo->realParameter[896]);
  array_alloc_scalar_real_array(&tmp37, 6, (modelica_real)data->simulationInfo->realParameter[741], (modelica_real)data->simulationInfo->realParameter[742], (modelica_real)data->simulationInfo->realParameter[743], (modelica_real)data->simulationInfo->realParameter[744], (modelica_real)data->simulationInfo->realParameter[745], (modelica_real)data->simulationInfo->realParameter[746]);
  data->localData[0]->realVars[281] /* MatStm3.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[846], tmp36, tmp37, data->simulationInfo->realParameter[861], 300.0);
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm3.comp[1].SH, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  real_array tmp38;
  real_array tmp39;
  array_alloc_scalar_real_array(&tmp38, 6, (modelica_real)data->simulationInfo->realParameter[891], (modelica_real)data->simulationInfo->realParameter[892], (modelica_real)data->simulationInfo->realParameter[893], (modelica_real)data->simulationInfo->realParameter[894], (modelica_real)data->simulationInfo->realParameter[895], (modelica_real)data->simulationInfo->realParameter[896]);
  array_alloc_scalar_real_array(&tmp39, 6, (modelica_real)data->simulationInfo->realParameter[741], (modelica_real)data->simulationInfo->realParameter[742], (modelica_real)data->simulationInfo->realParameter[743], (modelica_real)data->simulationInfo->realParameter[744], (modelica_real)data->simulationInfo->realParameter[745], (modelica_real)data->simulationInfo->realParameter[746]);
  data->localData[0]->realVars[278] /* MatStm3.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[846], tmp38, tmp39, data->simulationInfo->realParameter[861], 300.0);
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  real_array tmp40;
  array_alloc_scalar_real_array(&tmp40, 6, (modelica_real)data->simulationInfo->realParameter[891], (modelica_real)data->simulationInfo->realParameter[892], (modelica_real)data->simulationInfo->realParameter[893], (modelica_real)data->simulationInfo->realParameter[894], (modelica_real)data->simulationInfo->realParameter[895], (modelica_real)data->simulationInfo->realParameter[896]);
  data->localData[0]->realVars[317] /* MatStm3.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp40, 300.0);
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm3.comp[1].LiqCp[1], MatStm3.comp[1].LiqCp[2], MatStm3.comp[1].LiqCp[3], MatStm3.comp[1].LiqCp[4], MatStm3.comp[1].LiqCp[5], MatStm3.comp[1].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  real_array tmp41;
  array_alloc_scalar_real_array(&tmp41, 6, (modelica_real)data->simulationInfo->realParameter[765], (modelica_real)data->simulationInfo->realParameter[766], (modelica_real)data->simulationInfo->realParameter[767], (modelica_real)data->simulationInfo->realParameter[768], (modelica_real)data->simulationInfo->realParameter[769], (modelica_real)data->simulationInfo->realParameter[770]);
  data->localData[0]->realVars[314] /* MatStm3.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp41, 300.0);
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
MatStm2._Psat[3] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[3].VP[1], MatStm2.comp[3].VP[2], MatStm2.comp[3].VP[3], MatStm2.comp[3].VP[4], MatStm2.comp[3].VP[5], MatStm2.comp[3].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  real_array tmp42;
  array_alloc_scalar_real_array(&tmp42, 6, (modelica_real)data->simulationInfo->realParameter[648], (modelica_real)data->simulationInfo->realParameter[649], (modelica_real)data->simulationInfo->realParameter[650], (modelica_real)data->simulationInfo->realParameter[651], (modelica_real)data->simulationInfo->realParameter[652], (modelica_real)data->simulationInfo->realParameter[653]);
  data->localData[0]->realVars[137] /* MatStm2.Psat[3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp42, 300.0);
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
MatStm2._K[3] = 9.869232667160129e-006 * MatStm2.Psat[3]
*/
void Flowsheet_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[128] /* MatStm2.K[3] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[137] /* MatStm2.Psat[3] variable */);
  TRACE_POP
}

/*
equation index: 63
type: SIMPLE_ASSIGN
MatStm2._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[2].VP[1], MatStm2.comp[2].VP[2], MatStm2.comp[2].VP[3], MatStm2.comp[2].VP[4], MatStm2.comp[2].VP[5], MatStm2.comp[2].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  real_array tmp43;
  array_alloc_scalar_real_array(&tmp43, 6, (modelica_real)data->simulationInfo->realParameter[642], (modelica_real)data->simulationInfo->realParameter[643], (modelica_real)data->simulationInfo->realParameter[644], (modelica_real)data->simulationInfo->realParameter[645], (modelica_real)data->simulationInfo->realParameter[646], (modelica_real)data->simulationInfo->realParameter[647]);
  data->localData[0]->realVars[136] /* MatStm2.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp43, 300.0);
  TRACE_POP
}

/*
equation index: 64
type: SIMPLE_ASSIGN
MatStm2._K[2] = 9.869232667160129e-006 * MatStm2.Psat[2]
*/
void Flowsheet_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[127] /* MatStm2.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[136] /* MatStm2.Psat[2] variable */);
  TRACE_POP
}

/*
equation index: 65
type: SIMPLE_ASSIGN
MatStm2._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[1].VP[1], MatStm2.comp[1].VP[2], MatStm2.comp[1].VP[3], MatStm2.comp[1].VP[4], MatStm2.comp[1].VP[5], MatStm2.comp[1].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  real_array tmp44;
  array_alloc_scalar_real_array(&tmp44, 6, (modelica_real)data->simulationInfo->realParameter[636], (modelica_real)data->simulationInfo->realParameter[637], (modelica_real)data->simulationInfo->realParameter[638], (modelica_real)data->simulationInfo->realParameter[639], (modelica_real)data->simulationInfo->realParameter[640], (modelica_real)data->simulationInfo->realParameter[641]);
  data->localData[0]->realVars[135] /* MatStm2.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp44, 300.0);
  TRACE_POP
}

/*
equation index: 66
type: SIMPLE_ASSIGN
MatStm2._K[1] = 9.869232667160129e-006 * MatStm2.Psat[1]
*/
void Flowsheet_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[126] /* MatStm2.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[135] /* MatStm2.Psat[1] variable */);
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,3] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[3].SH, {MatStm2.comp[3].VapCp[1], MatStm2.comp[3].VapCp[2], MatStm2.comp[3].VapCp[3], MatStm2.comp[3].VapCp[4], MatStm2.comp[3].VapCp[5], MatStm2.comp[3].VapCp[6]}, {MatStm2.comp[3].HOV[1], MatStm2.comp[3].HOV[2], MatStm2.comp[3].HOV[3], MatStm2.comp[3].HOV[4], MatStm2.comp[3].HOV[5], MatStm2.comp[3].HOV[6]}, MatStm2.comp[3].Tc, 300.0)
*/
void Flowsheet_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  real_array tmp45;
  real_array tmp46;
  array_alloc_scalar_real_array(&tmp45, 6, (modelica_real)data->simulationInfo->realParameter[666], (modelica_real)data->simulationInfo->realParameter[667], (modelica_real)data->simulationInfo->realParameter[668], (modelica_real)data->simulationInfo->realParameter[669], (modelica_real)data->simulationInfo->realParameter[670], (modelica_real)data->simulationInfo->realParameter[671]);
  array_alloc_scalar_real_array(&tmp46, 6, (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521]);
  data->localData[0]->realVars[165] /* MatStm2.compMolEnth[3,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[611], tmp45, tmp46, data->simulationInfo->realParameter[626], 300.0);
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,3] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[3].SH, {MatStm2.comp[3].VapCp[1], MatStm2.comp[3].VapCp[2], MatStm2.comp[3].VapCp[3], MatStm2.comp[3].VapCp[4], MatStm2.comp[3].VapCp[5], MatStm2.comp[3].VapCp[6]}, {MatStm2.comp[3].HOV[1], MatStm2.comp[3].HOV[2], MatStm2.comp[3].HOV[3], MatStm2.comp[3].HOV[4], MatStm2.comp[3].HOV[5], MatStm2.comp[3].HOV[6]}, MatStm2.comp[3].Tc, 300.0)
*/
void Flowsheet_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  real_array tmp47;
  real_array tmp48;
  array_alloc_scalar_real_array(&tmp47, 6, (modelica_real)data->simulationInfo->realParameter[666], (modelica_real)data->simulationInfo->realParameter[667], (modelica_real)data->simulationInfo->realParameter[668], (modelica_real)data->simulationInfo->realParameter[669], (modelica_real)data->simulationInfo->realParameter[670], (modelica_real)data->simulationInfo->realParameter[671]);
  array_alloc_scalar_real_array(&tmp48, 6, (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521]);
  data->localData[0]->realVars[162] /* MatStm2.compMolEnth[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[611], tmp47, tmp48, data->simulationInfo->realParameter[626], 300.0);
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[3,3] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm2.comp[3].VapCp[1], MatStm2.comp[3].VapCp[2], MatStm2.comp[3].VapCp[3], MatStm2.comp[3].VapCp[4], MatStm2.comp[3].VapCp[5], MatStm2.comp[3].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  real_array tmp49;
  array_alloc_scalar_real_array(&tmp49, 6, (modelica_real)data->simulationInfo->realParameter[666], (modelica_real)data->simulationInfo->realParameter[667], (modelica_real)data->simulationInfo->realParameter[668], (modelica_real)data->simulationInfo->realParameter[669], (modelica_real)data->simulationInfo->realParameter[670], (modelica_real)data->simulationInfo->realParameter[671]);
  data->localData[0]->realVars[201] /* MatStm2.compMolSpHeat[3,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp49, 300.0);
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[2,3] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm2.comp[3].LiqCp[1], MatStm2.comp[3].LiqCp[2], MatStm2.comp[3].LiqCp[3], MatStm2.comp[3].LiqCp[4], MatStm2.comp[3].LiqCp[5], MatStm2.comp[3].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  real_array tmp50;
  array_alloc_scalar_real_array(&tmp50, 6, (modelica_real)data->simulationInfo->realParameter[540], (modelica_real)data->simulationInfo->realParameter[541], (modelica_real)data->simulationInfo->realParameter[542], (modelica_real)data->simulationInfo->realParameter[543], (modelica_real)data->simulationInfo->realParameter[544], (modelica_real)data->simulationInfo->realParameter[545]);
  data->localData[0]->realVars[198] /* MatStm2.compMolSpHeat[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp50, 300.0);
  TRACE_POP
}

/*
equation index: 71
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[2].SH, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tc, 300.0)
*/
void Flowsheet_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  real_array tmp51;
  real_array tmp52;
  array_alloc_scalar_real_array(&tmp51, 6, (modelica_real)data->simulationInfo->realParameter[660], (modelica_real)data->simulationInfo->realParameter[661], (modelica_real)data->simulationInfo->realParameter[662], (modelica_real)data->simulationInfo->realParameter[663], (modelica_real)data->simulationInfo->realParameter[664], (modelica_real)data->simulationInfo->realParameter[665]);
  array_alloc_scalar_real_array(&tmp52, 6, (modelica_real)data->simulationInfo->realParameter[510], (modelica_real)data->simulationInfo->realParameter[511], (modelica_real)data->simulationInfo->realParameter[512], (modelica_real)data->simulationInfo->realParameter[513], (modelica_real)data->simulationInfo->realParameter[514], (modelica_real)data->simulationInfo->realParameter[515]);
  data->localData[0]->realVars[164] /* MatStm2.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[610], tmp51, tmp52, data->simulationInfo->realParameter[625], 300.0);
  TRACE_POP
}

/*
equation index: 72
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[2].SH, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tc, 300.0)
*/
void Flowsheet_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  real_array tmp53;
  real_array tmp54;
  array_alloc_scalar_real_array(&tmp53, 6, (modelica_real)data->simulationInfo->realParameter[660], (modelica_real)data->simulationInfo->realParameter[661], (modelica_real)data->simulationInfo->realParameter[662], (modelica_real)data->simulationInfo->realParameter[663], (modelica_real)data->simulationInfo->realParameter[664], (modelica_real)data->simulationInfo->realParameter[665]);
  array_alloc_scalar_real_array(&tmp54, 6, (modelica_real)data->simulationInfo->realParameter[510], (modelica_real)data->simulationInfo->realParameter[511], (modelica_real)data->simulationInfo->realParameter[512], (modelica_real)data->simulationInfo->realParameter[513], (modelica_real)data->simulationInfo->realParameter[514], (modelica_real)data->simulationInfo->realParameter[515]);
  data->localData[0]->realVars[161] /* MatStm2.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[610], tmp53, tmp54, data->simulationInfo->realParameter[625], 300.0);
  TRACE_POP
}

/*
equation index: 73
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  real_array tmp55;
  array_alloc_scalar_real_array(&tmp55, 6, (modelica_real)data->simulationInfo->realParameter[660], (modelica_real)data->simulationInfo->realParameter[661], (modelica_real)data->simulationInfo->realParameter[662], (modelica_real)data->simulationInfo->realParameter[663], (modelica_real)data->simulationInfo->realParameter[664], (modelica_real)data->simulationInfo->realParameter[665]);
  data->localData[0]->realVars[200] /* MatStm2.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp55, 300.0);
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm2.comp[2].LiqCp[1], MatStm2.comp[2].LiqCp[2], MatStm2.comp[2].LiqCp[3], MatStm2.comp[2].LiqCp[4], MatStm2.comp[2].LiqCp[5], MatStm2.comp[2].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  real_array tmp56;
  array_alloc_scalar_real_array(&tmp56, 6, (modelica_real)data->simulationInfo->realParameter[534], (modelica_real)data->simulationInfo->realParameter[535], (modelica_real)data->simulationInfo->realParameter[536], (modelica_real)data->simulationInfo->realParameter[537], (modelica_real)data->simulationInfo->realParameter[538], (modelica_real)data->simulationInfo->realParameter[539]);
  data->localData[0]->realVars[197] /* MatStm2.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp56, 300.0);
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  real_array tmp57;
  real_array tmp58;
  array_alloc_scalar_real_array(&tmp57, 6, (modelica_real)data->simulationInfo->realParameter[654], (modelica_real)data->simulationInfo->realParameter[655], (modelica_real)data->simulationInfo->realParameter[656], (modelica_real)data->simulationInfo->realParameter[657], (modelica_real)data->simulationInfo->realParameter[658], (modelica_real)data->simulationInfo->realParameter[659]);
  array_alloc_scalar_real_array(&tmp58, 6, (modelica_real)data->simulationInfo->realParameter[504], (modelica_real)data->simulationInfo->realParameter[505], (modelica_real)data->simulationInfo->realParameter[506], (modelica_real)data->simulationInfo->realParameter[507], (modelica_real)data->simulationInfo->realParameter[508], (modelica_real)data->simulationInfo->realParameter[509]);
  data->localData[0]->realVars[163] /* MatStm2.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[609], tmp57, tmp58, data->simulationInfo->realParameter[624], 300.0);
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  real_array tmp59;
  real_array tmp60;
  array_alloc_scalar_real_array(&tmp59, 6, (modelica_real)data->simulationInfo->realParameter[654], (modelica_real)data->simulationInfo->realParameter[655], (modelica_real)data->simulationInfo->realParameter[656], (modelica_real)data->simulationInfo->realParameter[657], (modelica_real)data->simulationInfo->realParameter[658], (modelica_real)data->simulationInfo->realParameter[659]);
  array_alloc_scalar_real_array(&tmp60, 6, (modelica_real)data->simulationInfo->realParameter[504], (modelica_real)data->simulationInfo->realParameter[505], (modelica_real)data->simulationInfo->realParameter[506], (modelica_real)data->simulationInfo->realParameter[507], (modelica_real)data->simulationInfo->realParameter[508], (modelica_real)data->simulationInfo->realParameter[509]);
  data->localData[0]->realVars[160] /* MatStm2.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[609], tmp59, tmp60, data->simulationInfo->realParameter[624], 300.0);
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  real_array tmp61;
  array_alloc_scalar_real_array(&tmp61, 6, (modelica_real)data->simulationInfo->realParameter[654], (modelica_real)data->simulationInfo->realParameter[655], (modelica_real)data->simulationInfo->realParameter[656], (modelica_real)data->simulationInfo->realParameter[657], (modelica_real)data->simulationInfo->realParameter[658], (modelica_real)data->simulationInfo->realParameter[659]);
  data->localData[0]->realVars[199] /* MatStm2.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp61, 300.0);
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm2.comp[1].LiqCp[1], MatStm2.comp[1].LiqCp[2], MatStm2.comp[1].LiqCp[3], MatStm2.comp[1].LiqCp[4], MatStm2.comp[1].LiqCp[5], MatStm2.comp[1].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  real_array tmp62;
  array_alloc_scalar_real_array(&tmp62, 6, (modelica_real)data->simulationInfo->realParameter[528], (modelica_real)data->simulationInfo->realParameter[529], (modelica_real)data->simulationInfo->realParameter[530], (modelica_real)data->simulationInfo->realParameter[531], (modelica_real)data->simulationInfo->realParameter[532], (modelica_real)data->simulationInfo->realParameter[533]);
  data->localData[0]->realVars[196] /* MatStm2.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp62, 300.0);
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
MatStm4._compMolFrac[1,1] = 0.5
*/
void Flowsheet_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  data->localData[0]->realVars[420] /* MatStm4.compMolFrac[1,1] variable */ = 0.5;
  TRACE_POP
}

/*
equation index: 80
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[1,1] = 100.0 * MatStm4.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  data->localData[0]->realVars[411] /* MatStm4.compMolFlo[1,1] variable */ = (100.0) * (data->localData[0]->realVars[420] /* MatStm4.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 81
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[1,1] = MatStm4.compMolFlo[1,1] * MatStm4.comp[1].MW
*/
void Flowsheet_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  data->localData[0]->realVars[375] /* MatStm4.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[411] /* MatStm4.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[1074]);
  TRACE_POP
}

/*
equation index: 82
type: SIMPLE_ASSIGN
MatStm4._compMolFrac[1,2] = 0.4
*/
void Flowsheet_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  data->localData[0]->realVars[421] /* MatStm4.compMolFrac[1,2] variable */ = 0.4;
  TRACE_POP
}

/*
equation index: 83
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[1,2] = 100.0 * MatStm4.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  data->localData[0]->realVars[412] /* MatStm4.compMolFlo[1,2] variable */ = (100.0) * (data->localData[0]->realVars[421] /* MatStm4.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 84
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[1,2] = MatStm4.compMolFlo[1,2] * MatStm4.comp[2].MW
*/
void Flowsheet_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  data->localData[0]->realVars[376] /* MatStm4.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[412] /* MatStm4.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[1075]);
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
MatStm4._compMolFrac[1,3] = 0.1
*/
void Flowsheet_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  data->localData[0]->realVars[422] /* MatStm4.compMolFrac[1,3] variable */ = 0.1;
  TRACE_POP
}

/*
equation index: 86
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[1,3] = 100.0 * MatStm4.compMolFrac[1,3]
*/
void Flowsheet_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  data->localData[0]->realVars[413] /* MatStm4.compMolFlo[1,3] variable */ = (100.0) * (data->localData[0]->realVars[422] /* MatStm4.compMolFrac[1,3] variable */);
  TRACE_POP
}

/*
equation index: 87
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[1,3] = MatStm4.compMolFlo[1,3] * MatStm4.comp[3].MW
*/
void Flowsheet_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  data->localData[0]->realVars[377] /* MatStm4.compMasFlo[1,3] variable */ = (data->localData[0]->realVars[413] /* MatStm4.compMolFlo[1,3] variable */) * (data->simulationInfo->realParameter[1076]);
  TRACE_POP
}

/*
equation index: 88
type: SIMPLE_ASSIGN
MatStm4._Pbubl = MatStm4.compMolFrac[1,1] * exp(MatStm4.comp[1].VP[2] + MatStm4.comp[1].VP[3] / 300.0 + MatStm4.comp[1].VP[4] * 5.703782474656201 + MatStm4.comp[1].VP[5] * 300.0 ^ MatStm4.comp[1].VP[6]) + MatStm4.compMolFrac[1,2] * exp(MatStm4.comp[2].VP[2] + MatStm4.comp[2].VP[3] / 300.0 + MatStm4.comp[2].VP[4] * 5.703782474656201 + MatStm4.comp[2].VP[5] * 300.0 ^ MatStm4.comp[2].VP[6]) + MatStm4.compMolFrac[1,3] * exp(MatStm4.comp[3].VP[2] + MatStm4.comp[3].VP[3] / 300.0 + MatStm4.comp[3].VP[4] * 5.703782474656201 + MatStm4.comp[3].VP[5] * 300.0 ^ MatStm4.comp[3].VP[6])
*/
void Flowsheet_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
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
  tmp64 = data->simulationInfo->realParameter[1115];
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
  tmp71 = data->simulationInfo->realParameter[1121];
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
  tmp78 = data->simulationInfo->realParameter[1127];
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
  data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */ = (data->localData[0]->realVars[420] /* MatStm4.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[1111] + DIVISION_SIM(data->simulationInfo->realParameter[1112],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[1113]) * (5.703782474656201) + (data->simulationInfo->realParameter[1114]) * (tmp65))) + (data->localData[0]->realVars[421] /* MatStm4.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[1117] + DIVISION_SIM(data->simulationInfo->realParameter[1118],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[1119]) * (5.703782474656201) + (data->simulationInfo->realParameter[1120]) * (tmp72))) + (data->localData[0]->realVars[422] /* MatStm4.compMolFrac[1,3] variable */) * (exp(data->simulationInfo->realParameter[1123] + DIVISION_SIM(data->simulationInfo->realParameter[1124],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[1125]) * (5.703782474656201) + (data->simulationInfo->realParameter[1126]) * (tmp79)));
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
MatStm4._Pdew = 1.0 / (MatStm4.compMolFrac[1,1] * exp((-MatStm4.comp[1].VP[2]) - MatStm4.comp[1].VP[3] / 300.0 - MatStm4.comp[1].VP[4] * 5.703782474656201 - MatStm4.comp[1].VP[5] * 300.0 ^ MatStm4.comp[1].VP[6]) + MatStm4.compMolFrac[1,2] * exp((-MatStm4.comp[2].VP[2]) - MatStm4.comp[2].VP[3] / 300.0 - MatStm4.comp[2].VP[4] * 5.703782474656201 - MatStm4.comp[2].VP[5] * 300.0 ^ MatStm4.comp[2].VP[6]) + MatStm4.compMolFrac[1,3] * exp((-MatStm4.comp[3].VP[2]) - MatStm4.comp[3].VP[3] / 300.0 - MatStm4.comp[3].VP[4] * 5.703782474656201 - MatStm4.comp[3].VP[5] * 300.0 ^ MatStm4.comp[3].VP[6]))
*/
void Flowsheet_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
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
  tmp85 = data->simulationInfo->realParameter[1115];
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
  tmp92 = data->simulationInfo->realParameter[1121];
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
  tmp99 = data->simulationInfo->realParameter[1127];
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
  data->localData[0]->realVars[370] /* MatStm4.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[420] /* MatStm4.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[1111]) - (DIVISION_SIM(data->simulationInfo->realParameter[1112],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[1113]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[1114]) * (tmp86)))) + (data->localData[0]->realVars[421] /* MatStm4.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[1117]) - (DIVISION_SIM(data->simulationInfo->realParameter[1118],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[1119]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[1120]) * (tmp93)))) + (data->localData[0]->realVars[422] /* MatStm4.compMolFrac[1,3] variable */) * (exp((-data->simulationInfo->realParameter[1123]) - (DIVISION_SIM(data->simulationInfo->realParameter[1124],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[1125]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[1126]) * (tmp100)))),"MatStm4.compMolFrac[1,1] * exp((-MatStm4.comp[1].VP[2]) - MatStm4.comp[1].VP[3] / 300.0 - MatStm4.comp[1].VP[4] * 5.703782474656201 - MatStm4.comp[1].VP[5] * 300.0 ^ MatStm4.comp[1].VP[6]) + MatStm4.compMolFrac[1,2] * exp((-MatStm4.comp[2].VP[2]) - MatStm4.comp[2].VP[3] / 300.0 - MatStm4.comp[2].VP[4] * 5.703782474656201 - MatStm4.comp[2].VP[5] * 300.0 ^ MatStm4.comp[2].VP[6]) + MatStm4.compMolFrac[1,3] * exp((-MatStm4.comp[3].VP[2]) - MatStm4.comp[3].VP[3] / 300.0 - MatStm4.comp[3].VP[4] * 5.703782474656201 - MatStm4.comp[3].VP[5] * 300.0 ^ MatStm4.comp[3].VP[6])",equationIndexes);
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
MatStm3._compMolFrac[1,1] = 0.5
*/
void Flowsheet_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */ = 0.5;
  TRACE_POP
}

/*
equation index: 91
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[1,1] = 100.0 * MatStm3.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  data->localData[0]->realVars[293] /* MatStm3.compMolFlo[1,1] variable */ = (100.0) * (data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 92
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[1,1] = MatStm3.compMolFlo[1,1] * MatStm3.comp[1].MW
*/
void Flowsheet_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  data->localData[0]->realVars[257] /* MatStm3.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[293] /* MatStm3.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[837]);
  TRACE_POP
}

/*
equation index: 93
type: SIMPLE_ASSIGN
MatStm3._compMolFrac[1,2] = 0.4
*/
void Flowsheet_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  data->localData[0]->realVars[303] /* MatStm3.compMolFrac[1,2] variable */ = 0.4;
  TRACE_POP
}

/*
equation index: 94
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[1,2] = 100.0 * MatStm3.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  data->localData[0]->realVars[294] /* MatStm3.compMolFlo[1,2] variable */ = (100.0) * (data->localData[0]->realVars[303] /* MatStm3.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 95
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[1,2] = MatStm3.compMolFlo[1,2] * MatStm3.comp[2].MW
*/
void Flowsheet_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  data->localData[0]->realVars[258] /* MatStm3.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[294] /* MatStm3.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[838]);
  TRACE_POP
}

/*
equation index: 96
type: SIMPLE_ASSIGN
MatStm3._compMolFrac[1,3] = 0.1
*/
void Flowsheet_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  data->localData[0]->realVars[304] /* MatStm3.compMolFrac[1,3] variable */ = 0.1;
  TRACE_POP
}

/*
equation index: 97
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[1,3] = 100.0 * MatStm3.compMolFrac[1,3]
*/
void Flowsheet_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  data->localData[0]->realVars[295] /* MatStm3.compMolFlo[1,3] variable */ = (100.0) * (data->localData[0]->realVars[304] /* MatStm3.compMolFrac[1,3] variable */);
  TRACE_POP
}

/*
equation index: 98
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[1,3] = MatStm3.compMolFlo[1,3] * MatStm3.comp[3].MW
*/
void Flowsheet_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  data->localData[0]->realVars[259] /* MatStm3.compMasFlo[1,3] variable */ = (data->localData[0]->realVars[295] /* MatStm3.compMolFlo[1,3] variable */) * (data->simulationInfo->realParameter[839]);
  TRACE_POP
}

/*
equation index: 99
type: SIMPLE_ASSIGN
MatStm3._Pbubl = MatStm3.compMolFrac[1,1] * exp(MatStm3.comp[1].VP[2] + MatStm3.comp[1].VP[3] / 300.0 + MatStm3.comp[1].VP[4] * 5.703782474656201 + MatStm3.comp[1].VP[5] * 300.0 ^ MatStm3.comp[1].VP[6]) + MatStm3.compMolFrac[1,2] * exp(MatStm3.comp[2].VP[2] + MatStm3.comp[2].VP[3] / 300.0 + MatStm3.comp[2].VP[4] * 5.703782474656201 + MatStm3.comp[2].VP[5] * 300.0 ^ MatStm3.comp[2].VP[6]) + MatStm3.compMolFrac[1,3] * exp(MatStm3.comp[3].VP[2] + MatStm3.comp[3].VP[3] / 300.0 + MatStm3.comp[3].VP[4] * 5.703782474656201 + MatStm3.comp[3].VP[5] * 300.0 ^ MatStm3.comp[3].VP[6])
*/
void Flowsheet_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
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
  tmp106 = data->simulationInfo->realParameter[878];
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
  tmp113 = data->simulationInfo->realParameter[884];
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
  tmp120 = data->simulationInfo->realParameter[890];
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
  data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */ = (data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[874] + DIVISION_SIM(data->simulationInfo->realParameter[875],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[876]) * (5.703782474656201) + (data->simulationInfo->realParameter[877]) * (tmp107))) + (data->localData[0]->realVars[303] /* MatStm3.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[880] + DIVISION_SIM(data->simulationInfo->realParameter[881],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[882]) * (5.703782474656201) + (data->simulationInfo->realParameter[883]) * (tmp114))) + (data->localData[0]->realVars[304] /* MatStm3.compMolFrac[1,3] variable */) * (exp(data->simulationInfo->realParameter[886] + DIVISION_SIM(data->simulationInfo->realParameter[887],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[888]) * (5.703782474656201) + (data->simulationInfo->realParameter[889]) * (tmp121)));
  TRACE_POP
}

/*
equation index: 100
type: SIMPLE_ASSIGN
MatStm3._Pdew = 1.0 / (MatStm3.compMolFrac[1,1] * exp((-MatStm3.comp[1].VP[2]) - MatStm3.comp[1].VP[3] / 300.0 - MatStm3.comp[1].VP[4] * 5.703782474656201 - MatStm3.comp[1].VP[5] * 300.0 ^ MatStm3.comp[1].VP[6]) + MatStm3.compMolFrac[1,2] * exp((-MatStm3.comp[2].VP[2]) - MatStm3.comp[2].VP[3] / 300.0 - MatStm3.comp[2].VP[4] * 5.703782474656201 - MatStm3.comp[2].VP[5] * 300.0 ^ MatStm3.comp[2].VP[6]) + MatStm3.compMolFrac[1,3] * exp((-MatStm3.comp[3].VP[2]) - MatStm3.comp[3].VP[3] / 300.0 - MatStm3.comp[3].VP[4] * 5.703782474656201 - MatStm3.comp[3].VP[5] * 300.0 ^ MatStm3.comp[3].VP[6]))
*/
void Flowsheet_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  modelica_real tmp126;
  modelica_real tmp127;
  modelica_real tmp128;
  modelica_real tmp129;
  modelica_real tmp130;
  modelica_real tmp131;
  modelica_real tmp132;
  modelica_real tmp133;
  modelica_real tmp134;
  modelica_real tmp135;
  modelica_real tmp136;
  modelica_real tmp137;
  modelica_real tmp138;
  modelica_real tmp139;
  modelica_real tmp140;
  modelica_real tmp141;
  modelica_real tmp142;
  modelica_real tmp143;
  modelica_real tmp144;
  modelica_real tmp145;
  modelica_real tmp146;
  tmp126 = 300.0;
  tmp127 = data->simulationInfo->realParameter[878];
  if(tmp126 < 0.0 && tmp127 != 0.0)
  {
    tmp129 = modf(tmp127, &tmp130);
    
    if(tmp129 > 0.5)
    {
      tmp129 -= 1.0;
      tmp130 += 1.0;
    }
    else if(tmp129 < -0.5)
    {
      tmp129 += 1.0;
      tmp130 -= 1.0;
    }
    
    if(fabs(tmp129) < 1e-10)
      tmp128 = pow(tmp126, tmp130);
    else
    {
      tmp132 = modf(1.0/tmp127, &tmp131);
      if(tmp132 > 0.5)
      {
        tmp132 -= 1.0;
        tmp131 += 1.0;
      }
      else if(tmp132 < -0.5)
      {
        tmp132 += 1.0;
        tmp131 -= 1.0;
      }
      if(fabs(tmp132) < 1e-10 && ((unsigned long)tmp131 & 1))
      {
        tmp128 = -pow(-tmp126, tmp129)*pow(tmp126, tmp130);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp126, tmp127);
      }
    }
  }
  else
  {
    tmp128 = pow(tmp126, tmp127);
  }
  if(isnan(tmp128) || isinf(tmp128))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp126, tmp127);
  }tmp133 = 300.0;
  tmp134 = data->simulationInfo->realParameter[884];
  if(tmp133 < 0.0 && tmp134 != 0.0)
  {
    tmp136 = modf(tmp134, &tmp137);
    
    if(tmp136 > 0.5)
    {
      tmp136 -= 1.0;
      tmp137 += 1.0;
    }
    else if(tmp136 < -0.5)
    {
      tmp136 += 1.0;
      tmp137 -= 1.0;
    }
    
    if(fabs(tmp136) < 1e-10)
      tmp135 = pow(tmp133, tmp137);
    else
    {
      tmp139 = modf(1.0/tmp134, &tmp138);
      if(tmp139 > 0.5)
      {
        tmp139 -= 1.0;
        tmp138 += 1.0;
      }
      else if(tmp139 < -0.5)
      {
        tmp139 += 1.0;
        tmp138 -= 1.0;
      }
      if(fabs(tmp139) < 1e-10 && ((unsigned long)tmp138 & 1))
      {
        tmp135 = -pow(-tmp133, tmp136)*pow(tmp133, tmp137);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp133, tmp134);
      }
    }
  }
  else
  {
    tmp135 = pow(tmp133, tmp134);
  }
  if(isnan(tmp135) || isinf(tmp135))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp133, tmp134);
  }tmp140 = 300.0;
  tmp141 = data->simulationInfo->realParameter[890];
  if(tmp140 < 0.0 && tmp141 != 0.0)
  {
    tmp143 = modf(tmp141, &tmp144);
    
    if(tmp143 > 0.5)
    {
      tmp143 -= 1.0;
      tmp144 += 1.0;
    }
    else if(tmp143 < -0.5)
    {
      tmp143 += 1.0;
      tmp144 -= 1.0;
    }
    
    if(fabs(tmp143) < 1e-10)
      tmp142 = pow(tmp140, tmp144);
    else
    {
      tmp146 = modf(1.0/tmp141, &tmp145);
      if(tmp146 > 0.5)
      {
        tmp146 -= 1.0;
        tmp145 += 1.0;
      }
      else if(tmp146 < -0.5)
      {
        tmp146 += 1.0;
        tmp145 -= 1.0;
      }
      if(fabs(tmp146) < 1e-10 && ((unsigned long)tmp145 & 1))
      {
        tmp142 = -pow(-tmp140, tmp143)*pow(tmp140, tmp144);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp140, tmp141);
      }
    }
  }
  else
  {
    tmp142 = pow(tmp140, tmp141);
  }
  if(isnan(tmp142) || isinf(tmp142))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp140, tmp141);
  }
  data->localData[0]->realVars[252] /* MatStm3.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[874]) - (DIVISION_SIM(data->simulationInfo->realParameter[875],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[876]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[877]) * (tmp128)))) + (data->localData[0]->realVars[303] /* MatStm3.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[880]) - (DIVISION_SIM(data->simulationInfo->realParameter[881],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[882]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[883]) * (tmp135)))) + (data->localData[0]->realVars[304] /* MatStm3.compMolFrac[1,3] variable */) * (exp((-data->simulationInfo->realParameter[886]) - (DIVISION_SIM(data->simulationInfo->realParameter[887],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[888]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[889]) * (tmp142)))),"MatStm3.compMolFrac[1,1] * exp((-MatStm3.comp[1].VP[2]) - MatStm3.comp[1].VP[3] / 300.0 - MatStm3.comp[1].VP[4] * 5.703782474656201 - MatStm3.comp[1].VP[5] * 300.0 ^ MatStm3.comp[1].VP[6]) + MatStm3.compMolFrac[1,2] * exp((-MatStm3.comp[2].VP[2]) - MatStm3.comp[2].VP[3] / 300.0 - MatStm3.comp[2].VP[4] * 5.703782474656201 - MatStm3.comp[2].VP[5] * 300.0 ^ MatStm3.comp[2].VP[6]) + MatStm3.compMolFrac[1,3] * exp((-MatStm3.comp[3].VP[2]) - MatStm3.comp[3].VP[3] / 300.0 - MatStm3.comp[3].VP[4] * 5.703782474656201 - MatStm3.comp[3].VP[5] * 300.0 ^ MatStm3.comp[3].VP[6])",equationIndexes);
  TRACE_POP
}

/*
equation index: 101
type: SIMPLE_ASSIGN
MatStm2._compMolFrac[1,1] = 0.5
*/
void Flowsheet_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */ = 0.5;
  TRACE_POP
}

/*
equation index: 102
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[1,1] = 100.0 * MatStm2.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  data->localData[0]->realVars[175] /* MatStm2.compMolFlo[1,1] variable */ = (100.0) * (data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 103
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[1,1] = MatStm2.compMolFlo[1,1] * MatStm2.comp[1].MW
*/
void Flowsheet_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  data->localData[0]->realVars[139] /* MatStm2.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[175] /* MatStm2.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[600]);
  TRACE_POP
}

/*
equation index: 104
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,1] = 0.3333333333333333 * (MatStm4.compMolFrac[1,1] + MatStm3.compMolFrac[1,1] + MatStm2.compMolFrac[1,1])
*/
void Flowsheet_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */ = (0.3333333333333333) * (data->localData[0]->realVars[420] /* MatStm4.compMolFrac[1,1] variable */ + data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */ + data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 105
type: SIMPLE_ASSIGN
MatStm2._compMolFrac[1,2] = 0.4
*/
void Flowsheet_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->localData[0]->realVars[185] /* MatStm2.compMolFrac[1,2] variable */ = 0.4;
  TRACE_POP
}

/*
equation index: 106
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[1,2] = 100.0 * MatStm2.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  data->localData[0]->realVars[176] /* MatStm2.compMolFlo[1,2] variable */ = (100.0) * (data->localData[0]->realVars[185] /* MatStm2.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 107
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[1,2] = MatStm2.compMolFlo[1,2] * MatStm2.comp[2].MW
*/
void Flowsheet_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->localData[0]->realVars[140] /* MatStm2.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[176] /* MatStm2.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[601]);
  TRACE_POP
}

/*
equation index: 108
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,2] = 0.3333333333333333 * (MatStm4.compMolFrac[1,2] + MatStm3.compMolFrac[1,2] + MatStm2.compMolFrac[1,2])
*/
void Flowsheet_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  data->localData[0]->realVars[66] /* MatStm1.compMolFrac[1,2] variable */ = (0.3333333333333333) * (data->localData[0]->realVars[421] /* MatStm4.compMolFrac[1,2] variable */ + data->localData[0]->realVars[303] /* MatStm3.compMolFrac[1,2] variable */ + data->localData[0]->realVars[185] /* MatStm2.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 109
type: SIMPLE_ASSIGN
MatStm2._compMolFrac[1,3] = 0.1
*/
void Flowsheet_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  data->localData[0]->realVars[186] /* MatStm2.compMolFrac[1,3] variable */ = 0.1;
  TRACE_POP
}

/*
equation index: 110
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[1,3] = 100.0 * MatStm2.compMolFrac[1,3]
*/
void Flowsheet_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  data->localData[0]->realVars[177] /* MatStm2.compMolFlo[1,3] variable */ = (100.0) * (data->localData[0]->realVars[186] /* MatStm2.compMolFrac[1,3] variable */);
  TRACE_POP
}

/*
equation index: 111
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[1,3] = MatStm2.compMolFlo[1,3] * MatStm2.comp[3].MW
*/
void Flowsheet_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  data->localData[0]->realVars[141] /* MatStm2.compMasFlo[1,3] variable */ = (data->localData[0]->realVars[177] /* MatStm2.compMolFlo[1,3] variable */) * (data->simulationInfo->realParameter[602]);
  TRACE_POP
}

/*
equation index: 112
type: SIMPLE_ASSIGN
MatStm2._Pbubl = MatStm2.compMolFrac[1,1] * exp(MatStm2.comp[1].VP[2] + MatStm2.comp[1].VP[3] / 300.0 + MatStm2.comp[1].VP[4] * 5.703782474656201 + MatStm2.comp[1].VP[5] * 300.0 ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp(MatStm2.comp[2].VP[2] + MatStm2.comp[2].VP[3] / 300.0 + MatStm2.comp[2].VP[4] * 5.703782474656201 + MatStm2.comp[2].VP[5] * 300.0 ^ MatStm2.comp[2].VP[6]) + MatStm2.compMolFrac[1,3] * exp(MatStm2.comp[3].VP[2] + MatStm2.comp[3].VP[3] / 300.0 + MatStm2.comp[3].VP[4] * 5.703782474656201 + MatStm2.comp[3].VP[5] * 300.0 ^ MatStm2.comp[3].VP[6])
*/
void Flowsheet_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  modelica_real tmp147;
  modelica_real tmp148;
  modelica_real tmp149;
  modelica_real tmp150;
  modelica_real tmp151;
  modelica_real tmp152;
  modelica_real tmp153;
  modelica_real tmp154;
  modelica_real tmp155;
  modelica_real tmp156;
  modelica_real tmp157;
  modelica_real tmp158;
  modelica_real tmp159;
  modelica_real tmp160;
  modelica_real tmp161;
  modelica_real tmp162;
  modelica_real tmp163;
  modelica_real tmp164;
  modelica_real tmp165;
  modelica_real tmp166;
  modelica_real tmp167;
  tmp147 = 300.0;
  tmp148 = data->simulationInfo->realParameter[641];
  if(tmp147 < 0.0 && tmp148 != 0.0)
  {
    tmp150 = modf(tmp148, &tmp151);
    
    if(tmp150 > 0.5)
    {
      tmp150 -= 1.0;
      tmp151 += 1.0;
    }
    else if(tmp150 < -0.5)
    {
      tmp150 += 1.0;
      tmp151 -= 1.0;
    }
    
    if(fabs(tmp150) < 1e-10)
      tmp149 = pow(tmp147, tmp151);
    else
    {
      tmp153 = modf(1.0/tmp148, &tmp152);
      if(tmp153 > 0.5)
      {
        tmp153 -= 1.0;
        tmp152 += 1.0;
      }
      else if(tmp153 < -0.5)
      {
        tmp153 += 1.0;
        tmp152 -= 1.0;
      }
      if(fabs(tmp153) < 1e-10 && ((unsigned long)tmp152 & 1))
      {
        tmp149 = -pow(-tmp147, tmp150)*pow(tmp147, tmp151);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp147, tmp148);
      }
    }
  }
  else
  {
    tmp149 = pow(tmp147, tmp148);
  }
  if(isnan(tmp149) || isinf(tmp149))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp147, tmp148);
  }tmp154 = 300.0;
  tmp155 = data->simulationInfo->realParameter[647];
  if(tmp154 < 0.0 && tmp155 != 0.0)
  {
    tmp157 = modf(tmp155, &tmp158);
    
    if(tmp157 > 0.5)
    {
      tmp157 -= 1.0;
      tmp158 += 1.0;
    }
    else if(tmp157 < -0.5)
    {
      tmp157 += 1.0;
      tmp158 -= 1.0;
    }
    
    if(fabs(tmp157) < 1e-10)
      tmp156 = pow(tmp154, tmp158);
    else
    {
      tmp160 = modf(1.0/tmp155, &tmp159);
      if(tmp160 > 0.5)
      {
        tmp160 -= 1.0;
        tmp159 += 1.0;
      }
      else if(tmp160 < -0.5)
      {
        tmp160 += 1.0;
        tmp159 -= 1.0;
      }
      if(fabs(tmp160) < 1e-10 && ((unsigned long)tmp159 & 1))
      {
        tmp156 = -pow(-tmp154, tmp157)*pow(tmp154, tmp158);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp154, tmp155);
      }
    }
  }
  else
  {
    tmp156 = pow(tmp154, tmp155);
  }
  if(isnan(tmp156) || isinf(tmp156))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp154, tmp155);
  }tmp161 = 300.0;
  tmp162 = data->simulationInfo->realParameter[653];
  if(tmp161 < 0.0 && tmp162 != 0.0)
  {
    tmp164 = modf(tmp162, &tmp165);
    
    if(tmp164 > 0.5)
    {
      tmp164 -= 1.0;
      tmp165 += 1.0;
    }
    else if(tmp164 < -0.5)
    {
      tmp164 += 1.0;
      tmp165 -= 1.0;
    }
    
    if(fabs(tmp164) < 1e-10)
      tmp163 = pow(tmp161, tmp165);
    else
    {
      tmp167 = modf(1.0/tmp162, &tmp166);
      if(tmp167 > 0.5)
      {
        tmp167 -= 1.0;
        tmp166 += 1.0;
      }
      else if(tmp167 < -0.5)
      {
        tmp167 += 1.0;
        tmp166 -= 1.0;
      }
      if(fabs(tmp167) < 1e-10 && ((unsigned long)tmp166 & 1))
      {
        tmp163 = -pow(-tmp161, tmp164)*pow(tmp161, tmp165);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp161, tmp162);
      }
    }
  }
  else
  {
    tmp163 = pow(tmp161, tmp162);
  }
  if(isnan(tmp163) || isinf(tmp163))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp161, tmp162);
  }
  data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */ = (data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[637] + DIVISION_SIM(data->simulationInfo->realParameter[638],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[639]) * (5.703782474656201) + (data->simulationInfo->realParameter[640]) * (tmp149))) + (data->localData[0]->realVars[185] /* MatStm2.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[643] + DIVISION_SIM(data->simulationInfo->realParameter[644],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[645]) * (5.703782474656201) + (data->simulationInfo->realParameter[646]) * (tmp156))) + (data->localData[0]->realVars[186] /* MatStm2.compMolFrac[1,3] variable */) * (exp(data->simulationInfo->realParameter[649] + DIVISION_SIM(data->simulationInfo->realParameter[650],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[651]) * (5.703782474656201) + (data->simulationInfo->realParameter[652]) * (tmp163)));
  TRACE_POP
}

/*
equation index: 113
type: SIMPLE_ASSIGN
MatStm2._Pdew = 1.0 / (MatStm2.compMolFrac[1,1] * exp((-MatStm2.comp[1].VP[2]) - MatStm2.comp[1].VP[3] / 300.0 - MatStm2.comp[1].VP[4] * 5.703782474656201 - MatStm2.comp[1].VP[5] * 300.0 ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp((-MatStm2.comp[2].VP[2]) - MatStm2.comp[2].VP[3] / 300.0 - MatStm2.comp[2].VP[4] * 5.703782474656201 - MatStm2.comp[2].VP[5] * 300.0 ^ MatStm2.comp[2].VP[6]) + MatStm2.compMolFrac[1,3] * exp((-MatStm2.comp[3].VP[2]) - MatStm2.comp[3].VP[3] / 300.0 - MatStm2.comp[3].VP[4] * 5.703782474656201 - MatStm2.comp[3].VP[5] * 300.0 ^ MatStm2.comp[3].VP[6]))
*/
void Flowsheet_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  modelica_real tmp168;
  modelica_real tmp169;
  modelica_real tmp170;
  modelica_real tmp171;
  modelica_real tmp172;
  modelica_real tmp173;
  modelica_real tmp174;
  modelica_real tmp175;
  modelica_real tmp176;
  modelica_real tmp177;
  modelica_real tmp178;
  modelica_real tmp179;
  modelica_real tmp180;
  modelica_real tmp181;
  modelica_real tmp182;
  modelica_real tmp183;
  modelica_real tmp184;
  modelica_real tmp185;
  modelica_real tmp186;
  modelica_real tmp187;
  modelica_real tmp188;
  tmp168 = 300.0;
  tmp169 = data->simulationInfo->realParameter[641];
  if(tmp168 < 0.0 && tmp169 != 0.0)
  {
    tmp171 = modf(tmp169, &tmp172);
    
    if(tmp171 > 0.5)
    {
      tmp171 -= 1.0;
      tmp172 += 1.0;
    }
    else if(tmp171 < -0.5)
    {
      tmp171 += 1.0;
      tmp172 -= 1.0;
    }
    
    if(fabs(tmp171) < 1e-10)
      tmp170 = pow(tmp168, tmp172);
    else
    {
      tmp174 = modf(1.0/tmp169, &tmp173);
      if(tmp174 > 0.5)
      {
        tmp174 -= 1.0;
        tmp173 += 1.0;
      }
      else if(tmp174 < -0.5)
      {
        tmp174 += 1.0;
        tmp173 -= 1.0;
      }
      if(fabs(tmp174) < 1e-10 && ((unsigned long)tmp173 & 1))
      {
        tmp170 = -pow(-tmp168, tmp171)*pow(tmp168, tmp172);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp168, tmp169);
      }
    }
  }
  else
  {
    tmp170 = pow(tmp168, tmp169);
  }
  if(isnan(tmp170) || isinf(tmp170))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp168, tmp169);
  }tmp175 = 300.0;
  tmp176 = data->simulationInfo->realParameter[647];
  if(tmp175 < 0.0 && tmp176 != 0.0)
  {
    tmp178 = modf(tmp176, &tmp179);
    
    if(tmp178 > 0.5)
    {
      tmp178 -= 1.0;
      tmp179 += 1.0;
    }
    else if(tmp178 < -0.5)
    {
      tmp178 += 1.0;
      tmp179 -= 1.0;
    }
    
    if(fabs(tmp178) < 1e-10)
      tmp177 = pow(tmp175, tmp179);
    else
    {
      tmp181 = modf(1.0/tmp176, &tmp180);
      if(tmp181 > 0.5)
      {
        tmp181 -= 1.0;
        tmp180 += 1.0;
      }
      else if(tmp181 < -0.5)
      {
        tmp181 += 1.0;
        tmp180 -= 1.0;
      }
      if(fabs(tmp181) < 1e-10 && ((unsigned long)tmp180 & 1))
      {
        tmp177 = -pow(-tmp175, tmp178)*pow(tmp175, tmp179);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp175, tmp176);
      }
    }
  }
  else
  {
    tmp177 = pow(tmp175, tmp176);
  }
  if(isnan(tmp177) || isinf(tmp177))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp175, tmp176);
  }tmp182 = 300.0;
  tmp183 = data->simulationInfo->realParameter[653];
  if(tmp182 < 0.0 && tmp183 != 0.0)
  {
    tmp185 = modf(tmp183, &tmp186);
    
    if(tmp185 > 0.5)
    {
      tmp185 -= 1.0;
      tmp186 += 1.0;
    }
    else if(tmp185 < -0.5)
    {
      tmp185 += 1.0;
      tmp186 -= 1.0;
    }
    
    if(fabs(tmp185) < 1e-10)
      tmp184 = pow(tmp182, tmp186);
    else
    {
      tmp188 = modf(1.0/tmp183, &tmp187);
      if(tmp188 > 0.5)
      {
        tmp188 -= 1.0;
        tmp187 += 1.0;
      }
      else if(tmp188 < -0.5)
      {
        tmp188 += 1.0;
        tmp187 -= 1.0;
      }
      if(fabs(tmp188) < 1e-10 && ((unsigned long)tmp187 & 1))
      {
        tmp184 = -pow(-tmp182, tmp185)*pow(tmp182, tmp186);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp182, tmp183);
      }
    }
  }
  else
  {
    tmp184 = pow(tmp182, tmp183);
  }
  if(isnan(tmp184) || isinf(tmp184))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp182, tmp183);
  }
  data->localData[0]->realVars[134] /* MatStm2.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[637]) - (DIVISION_SIM(data->simulationInfo->realParameter[638],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[639]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[640]) * (tmp170)))) + (data->localData[0]->realVars[185] /* MatStm2.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[643]) - (DIVISION_SIM(data->simulationInfo->realParameter[644],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[645]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[646]) * (tmp177)))) + (data->localData[0]->realVars[186] /* MatStm2.compMolFrac[1,3] variable */) * (exp((-data->simulationInfo->realParameter[649]) - (DIVISION_SIM(data->simulationInfo->realParameter[650],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[651]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[652]) * (tmp184)))),"MatStm2.compMolFrac[1,1] * exp((-MatStm2.comp[1].VP[2]) - MatStm2.comp[1].VP[3] / 300.0 - MatStm2.comp[1].VP[4] * 5.703782474656201 - MatStm2.comp[1].VP[5] * 300.0 ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp((-MatStm2.comp[2].VP[2]) - MatStm2.comp[2].VP[3] / 300.0 - MatStm2.comp[2].VP[4] * 5.703782474656201 - MatStm2.comp[2].VP[5] * 300.0 ^ MatStm2.comp[2].VP[6]) + MatStm2.compMolFrac[1,3] * exp((-MatStm2.comp[3].VP[2]) - MatStm2.comp[3].VP[3] / 300.0 - MatStm2.comp[3].VP[4] * 5.703782474656201 - MatStm2.comp[3].VP[5] * 300.0 ^ MatStm2.comp[3].VP[6])",equationIndexes);
  TRACE_POP
}

/*
equation index: 114
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,3] = 0.3333333333333333 * (MatStm4.compMolFrac[1,3] + MatStm3.compMolFrac[1,3] + MatStm2.compMolFrac[1,3])
*/
void Flowsheet_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  data->localData[0]->realVars[67] /* MatStm1.compMolFrac[1,3] variable */ = (0.3333333333333333) * (data->localData[0]->realVars[422] /* MatStm4.compMolFrac[1,3] variable */ + data->localData[0]->realVars[304] /* MatStm3.compMolFrac[1,3] variable */ + data->localData[0]->realVars[186] /* MatStm2.compMolFrac[1,3] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_481(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_479(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_477(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_482(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_480(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_478(DATA *data, threadData_t *threadData);


void Flowsheet_eqFunction_121(DATA*, threadData_t*);
void Flowsheet_eqFunction_122(DATA*, threadData_t*);
void Flowsheet_eqFunction_123(DATA*, threadData_t*);
void Flowsheet_eqFunction_124(DATA*, threadData_t*);
void Flowsheet_eqFunction_125(DATA*, threadData_t*);
void Flowsheet_eqFunction_126(DATA*, threadData_t*);
void Flowsheet_eqFunction_127(DATA*, threadData_t*);
void Flowsheet_eqFunction_128(DATA*, threadData_t*);
void Flowsheet_eqFunction_129(DATA*, threadData_t*);
void Flowsheet_eqFunction_136(DATA*, threadData_t*);
void Flowsheet_eqFunction_135(DATA*, threadData_t*);
void Flowsheet_eqFunction_134(DATA*, threadData_t*);
void Flowsheet_eqFunction_133(DATA*, threadData_t*);
void Flowsheet_eqFunction_132(DATA*, threadData_t*);
void Flowsheet_eqFunction_131(DATA*, threadData_t*);
void Flowsheet_eqFunction_130(DATA*, threadData_t*);
/*
equation index: 153
indexNonlinear: 0
type: NONLINEAR

vars: {MatStm2._totMolFlo[3], MatStm2._compMolFrac[2,1], MatStm2._compMolFrac[3,1], MatStm2._compMolFrac[3,2], MatStm2._compMolFrac[2,3], MatStm2._compMolFrac[3,3], MatStm2._compMolFrac[2,2]}
eqns: {121, 122, 123, 124, 125, 126, 127, 128, 129, 136, 135, 134, 133, 132, 131, 130}
*/
void Flowsheet_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 153 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,153};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 153 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  TRACE_POP
}
extern void Flowsheet_eqFunction_534(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_533(DATA *data, threadData_t *threadData);


/*
equation index: 156
type: ALGORITHM

  (MatStm2.compMolEntr[2,2], MatStm2.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[2].AS, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tb, MatStm2.comp[2].Tc, 300.0, 101325.0, MatStm2.compMolFrac[2,2], MatStm2.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[660], (modelica_real)data->simulationInfo->realParameter[661], (modelica_real)data->simulationInfo->realParameter[662], (modelica_real)data->simulationInfo->realParameter[663], (modelica_real)data->simulationInfo->realParameter[664], (modelica_real)data->simulationInfo->realParameter[665]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[510], (modelica_real)data->simulationInfo->realParameter[511], (modelica_real)data->simulationInfo->realParameter[512], (modelica_real)data->simulationInfo->realParameter[513], (modelica_real)data->simulationInfo->realParameter[514], (modelica_real)data->simulationInfo->realParameter[515]);
  data->localData[0]->realVars[170] /* MatStm2.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[478], tmp0, tmp1, data->simulationInfo->realParameter[622], data->simulationInfo->realParameter[625], 300.0, 101325.0, data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */, data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[173] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_517(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_516(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_519(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_520(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_523(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_522(DATA *data, threadData_t *threadData);


/*
equation index: 163
type: ALGORITHM

  (MatStm2.compMolEntr[2,3], MatStm2.compMolEntr[3,3]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[3].AS, {MatStm2.comp[3].VapCp[1], MatStm2.comp[3].VapCp[2], MatStm2.comp[3].VapCp[3], MatStm2.comp[3].VapCp[4], MatStm2.comp[3].VapCp[5], MatStm2.comp[3].VapCp[6]}, {MatStm2.comp[3].HOV[1], MatStm2.comp[3].HOV[2], MatStm2.comp[3].HOV[3], MatStm2.comp[3].HOV[4], MatStm2.comp[3].HOV[5], MatStm2.comp[3].HOV[6]}, MatStm2.comp[3].Tb, MatStm2.comp[3].Tc, 300.0, 101325.0, MatStm2.compMolFrac[2,3], MatStm2.compMolFrac[3,3]);
*/
void Flowsheet_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[666], (modelica_real)data->simulationInfo->realParameter[667], (modelica_real)data->simulationInfo->realParameter[668], (modelica_real)data->simulationInfo->realParameter[669], (modelica_real)data->simulationInfo->realParameter[670], (modelica_real)data->simulationInfo->realParameter[671]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521]);
  data->localData[0]->realVars[171] /* MatStm2.compMolEntr[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[479], tmp2, tmp3, data->simulationInfo->realParameter[623], data->simulationInfo->realParameter[626], 300.0, 101325.0, data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */, data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */ ,&data->localData[0]->realVars[174] /* MatStm2.compMolEntr[3,3] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_527(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_542(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_545(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_544(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_543(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_526(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_538(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_541(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_540(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_539(DATA *data, threadData_t *threadData);


/*
equation index: 174
type: ALGORITHM

  (MatStm2.compMolEntr[2,1], MatStm2.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[1].AS, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tb, MatStm2.comp[1].Tc, 300.0, 101325.0, MatStm2.compMolFrac[2,1], MatStm2.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  real_array tmp4;
  real_array tmp5;
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[654], (modelica_real)data->simulationInfo->realParameter[655], (modelica_real)data->simulationInfo->realParameter[656], (modelica_real)data->simulationInfo->realParameter[657], (modelica_real)data->simulationInfo->realParameter[658], (modelica_real)data->simulationInfo->realParameter[659]);
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[504], (modelica_real)data->simulationInfo->realParameter[505], (modelica_real)data->simulationInfo->realParameter[506], (modelica_real)data->simulationInfo->realParameter[507], (modelica_real)data->simulationInfo->realParameter[508], (modelica_real)data->simulationInfo->realParameter[509]);
  data->localData[0]->realVars[169] /* MatStm2.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[477], tmp4, tmp5, data->simulationInfo->realParameter[621], data->simulationInfo->realParameter[624], 300.0, 101325.0, data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */, data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[172] /* MatStm2.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_525(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_532(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_546(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_549(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_548(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_547(DATA *data, threadData_t *threadData);


/*
equation index: 181
type: ALGORITHM

  MatStm2.MW[3] := $START.MatStm2.MW[3];
  MatStm2.MW[2] := $START.MatStm2.MW[2];
  MatStm2.MW[1] := $START.MatStm2.MW[1];
  for i in 1:3 loop
    MatStm2.MW[:] := {MatStm2.MW[1] + MatStm2.compMolFrac[1,i] * MatStm2.comp[i].MW, MatStm2.MW[2] + MatStm2.compMolFrac[2,i] * MatStm2.comp[i].MW, MatStm2.MW[3] + MatStm2.compMolFrac[3,i] * MatStm2.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
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
extern void Flowsheet_eqFunction_535(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_530(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_536(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_529(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_531(DATA *data, threadData_t *threadData);


/*
equation index: 187
type: LINEAR

<var>MatStm2._compMasFrac[3,2]</var>
<var>MatStm2._compMasFrac[3,1]</var>
<var>MatStm2._compMasFrac[2,1]</var>
<var>MatStm2._compMasFrac[2,2]</var>
<var>MatStm2._compMasFrac[3,3]</var>
<var>MatStm2._compMasFrac[2,3]</var>
<var>MatStm2._compMasFrac[1,2]</var>
<var>MatStm2._compMasFrac[1,1]</var>
<var>MatStm2._compMasFrac[1,3]</var>
<row>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,2] else MatStm2.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,2] else MatStm2.compMasFlo[1,2]</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,3] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,2] else MatStm2.compMasFlo[1,3]</cell>
</row>
<matrix>
  <cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="0" col="5">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="8">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="1" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="7">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="1" col="8">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="2" col="6">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else -0.0)</residual>
  </cell><cell row="2" col="7">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101325.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="5">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="6">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 0.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="5">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="5" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="5" col="6">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101325.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="6" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="6" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="6" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="7" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="7" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="7" col="7">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="8" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="8" col="8">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101325.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  /* Linear equation system */
  int retValue;
  double aux_x[9] = { data->localData[1]->realVars[155] /* MatStm2.compMasFrac[3,2] variable */,data->localData[1]->realVars[154] /* MatStm2.compMasFrac[3,1] variable */,data->localData[1]->realVars[151] /* MatStm2.compMasFrac[2,1] variable */,data->localData[1]->realVars[152] /* MatStm2.compMasFrac[2,2] variable */,data->localData[1]->realVars[156] /* MatStm2.compMasFrac[3,3] variable */,data->localData[1]->realVars[153] /* MatStm2.compMasFrac[2,3] variable */,data->localData[1]->realVars[149] /* MatStm2.compMasFrac[1,2] variable */,data->localData[1]->realVars[148] /* MatStm2.compMasFrac[1,1] variable */,data->localData[1]->realVars[150] /* MatStm2.compMasFrac[1,3] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 187 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,187};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 187 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[155] /* MatStm2.compMasFrac[3,2] variable */ = aux_x[0];
  data->localData[0]->realVars[154] /* MatStm2.compMasFrac[3,1] variable */ = aux_x[1];
  data->localData[0]->realVars[151] /* MatStm2.compMasFrac[2,1] variable */ = aux_x[2];
  data->localData[0]->realVars[152] /* MatStm2.compMasFrac[2,2] variable */ = aux_x[3];
  data->localData[0]->realVars[156] /* MatStm2.compMasFrac[3,3] variable */ = aux_x[4];
  data->localData[0]->realVars[153] /* MatStm2.compMasFrac[2,3] variable */ = aux_x[5];
  data->localData[0]->realVars[149] /* MatStm2.compMasFrac[1,2] variable */ = aux_x[6];
  data->localData[0]->realVars[148] /* MatStm2.compMasFrac[1,1] variable */ = aux_x[7];
  data->localData[0]->realVars[150] /* MatStm2.compMasFrac[1,3] variable */ = aux_x[8];
  TRACE_POP
}

void Flowsheet_eqFunction_188(DATA*, threadData_t*);
void Flowsheet_eqFunction_189(DATA*, threadData_t*);
void Flowsheet_eqFunction_190(DATA*, threadData_t*);
void Flowsheet_eqFunction_191(DATA*, threadData_t*);
void Flowsheet_eqFunction_192(DATA*, threadData_t*);
void Flowsheet_eqFunction_193(DATA*, threadData_t*);
void Flowsheet_eqFunction_194(DATA*, threadData_t*);
void Flowsheet_eqFunction_195(DATA*, threadData_t*);
void Flowsheet_eqFunction_196(DATA*, threadData_t*);
void Flowsheet_eqFunction_203(DATA*, threadData_t*);
void Flowsheet_eqFunction_202(DATA*, threadData_t*);
void Flowsheet_eqFunction_201(DATA*, threadData_t*);
void Flowsheet_eqFunction_200(DATA*, threadData_t*);
void Flowsheet_eqFunction_199(DATA*, threadData_t*);
void Flowsheet_eqFunction_198(DATA*, threadData_t*);
void Flowsheet_eqFunction_197(DATA*, threadData_t*);
/*
equation index: 220
indexNonlinear: 1
type: NONLINEAR

vars: {MatStm3._totMolFlo[3], MatStm3._compMolFrac[3,1], MatStm3._compMolFrac[2,2], MatStm3._compMolFrac[2,1], MatStm3._compMolFrac[3,2], MatStm3._compMolFrac[3,3], MatStm3._compMolFrac[2,3]}
eqns: {188, 189, 190, 191, 192, 193, 194, 195, 196, 203, 202, 201, 200, 199, 198, 197}
*/
void Flowsheet_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 220 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,220};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 220 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  TRACE_POP
}
extern void Flowsheet_eqFunction_584(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_585(DATA *data, threadData_t *threadData);


/*
equation index: 223
type: ALGORITHM

  (MatStm3.compMolEntr[2,3], MatStm3.compMolEntr[3,3]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[3].AS, {MatStm3.comp[3].VapCp[1], MatStm3.comp[3].VapCp[2], MatStm3.comp[3].VapCp[3], MatStm3.comp[3].VapCp[4], MatStm3.comp[3].VapCp[5], MatStm3.comp[3].VapCp[6]}, {MatStm3.comp[3].HOV[1], MatStm3.comp[3].HOV[2], MatStm3.comp[3].HOV[3], MatStm3.comp[3].HOV[4], MatStm3.comp[3].HOV[5], MatStm3.comp[3].HOV[6]}, MatStm3.comp[3].Tb, MatStm3.comp[3].Tc, 300.0, 101325.0, MatStm3.compMolFrac[2,3], MatStm3.compMolFrac[3,3]);
*/
void Flowsheet_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[903], (modelica_real)data->simulationInfo->realParameter[904], (modelica_real)data->simulationInfo->realParameter[905], (modelica_real)data->simulationInfo->realParameter[906], (modelica_real)data->simulationInfo->realParameter[907], (modelica_real)data->simulationInfo->realParameter[908]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[753], (modelica_real)data->simulationInfo->realParameter[754], (modelica_real)data->simulationInfo->realParameter[755], (modelica_real)data->simulationInfo->realParameter[756], (modelica_real)data->simulationInfo->realParameter[757], (modelica_real)data->simulationInfo->realParameter[758]);
  data->localData[0]->realVars[289] /* MatStm3.compMolEntr[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[716], tmp0, tmp1, data->simulationInfo->realParameter[860], data->simulationInfo->realParameter[863], 300.0, 101325.0, data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */, data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */ ,&data->localData[0]->realVars[292] /* MatStm3.compMolEntr[3,3] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_597(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_596(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_587(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_586(DATA *data, threadData_t *threadData);


/*
equation index: 228
type: ALGORITHM

  (MatStm3.compMolEntr[2,1], MatStm3.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[1].AS, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tb, MatStm3.comp[1].Tc, 300.0, 101325.0, MatStm3.compMolFrac[2,1], MatStm3.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[891], (modelica_real)data->simulationInfo->realParameter[892], (modelica_real)data->simulationInfo->realParameter[893], (modelica_real)data->simulationInfo->realParameter[894], (modelica_real)data->simulationInfo->realParameter[895], (modelica_real)data->simulationInfo->realParameter[896]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[741], (modelica_real)data->simulationInfo->realParameter[742], (modelica_real)data->simulationInfo->realParameter[743], (modelica_real)data->simulationInfo->realParameter[744], (modelica_real)data->simulationInfo->realParameter[745], (modelica_real)data->simulationInfo->realParameter[746]);
  data->localData[0]->realVars[287] /* MatStm3.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[714], tmp2, tmp3, data->simulationInfo->realParameter[858], data->simulationInfo->realParameter[861], 300.0, 101325.0, data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */, data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[290] /* MatStm3.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_601(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_600(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_590(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_609(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_612(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_611(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_610(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_589(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_605(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_608(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_607(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_606(DATA *data, threadData_t *threadData);


/*
equation index: 241
type: ALGORITHM

  (MatStm3.compMolEntr[2,2], MatStm3.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[2].AS, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tb, MatStm3.comp[2].Tc, 300.0, 101325.0, MatStm3.compMolFrac[2,2], MatStm3.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  real_array tmp4;
  real_array tmp5;
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[897], (modelica_real)data->simulationInfo->realParameter[898], (modelica_real)data->simulationInfo->realParameter[899], (modelica_real)data->simulationInfo->realParameter[900], (modelica_real)data->simulationInfo->realParameter[901], (modelica_real)data->simulationInfo->realParameter[902]);
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[747], (modelica_real)data->simulationInfo->realParameter[748], (modelica_real)data->simulationInfo->realParameter[749], (modelica_real)data->simulationInfo->realParameter[750], (modelica_real)data->simulationInfo->realParameter[751], (modelica_real)data->simulationInfo->realParameter[752]);
  data->localData[0]->realVars[288] /* MatStm3.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[715], tmp4, tmp5, data->simulationInfo->realParameter[859], data->simulationInfo->realParameter[862], 300.0, 101325.0, data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */, data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[291] /* MatStm3.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_594(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_595(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_613(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_616(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_615(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_614(DATA *data, threadData_t *threadData);


/*
equation index: 248
type: ALGORITHM

  MatStm3.MW[3] := $START.MatStm3.MW[3];
  MatStm3.MW[2] := $START.MatStm3.MW[2];
  MatStm3.MW[1] := $START.MatStm3.MW[1];
  for i in 1:3 loop
    MatStm3.MW[:] := {MatStm3.MW[1] + MatStm3.compMolFrac[1,i] * MatStm3.comp[i].MW, MatStm3.MW[2] + MatStm3.compMolFrac[2,i] * MatStm3.comp[i].MW, MatStm3.MW[3] + MatStm3.compMolFrac[3,i] * MatStm3.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  real_array tmp6;
  index_spec_t tmp7;
  real_array tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  data->localData[0]->realVars[249] /* MatStm3.MW[3] variable */ = data->modelData->realVarsData[249].attribute /* MatStm3.MW[3] variable */.start;

  data->localData[0]->realVars[248] /* MatStm3.MW[2] variable */ = data->modelData->realVarsData[248].attribute /* MatStm3.MW[2] variable */.start;

  data->localData[0]->realVars[247] /* MatStm3.MW[1] variable */ = data->modelData->realVarsData[247].attribute /* MatStm3.MW[1] variable */.start;

  tmp9 = ((modelica_integer) 1); tmp10 = 1; tmp11 = ((modelica_integer) 3);
  if(!(((tmp10 > 0) && (tmp9 > tmp11)) || ((tmp10 < 0) && (tmp9 < tmp11))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp9, tmp11); $Pi += tmp10)
    {
      array_alloc_scalar_real_array(&tmp6, 3, (modelica_real)data->localData[0]->realVars[247] /* MatStm3.MW[1] variable */ + ((&data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[837])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[248] /* MatStm3.MW[2] variable */ + ((&data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[837])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[249] /* MatStm3.MW[3] variable */ + ((&data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[837])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]));
      create_index_spec(&tmp7, 1, (1), (int*)0, 'W');
      real_array_create(&tmp8, (modelica_real*)&data->localData[0]->realVars[247] /* MatStm3.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp6, &tmp8, &tmp7);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_598(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_602(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_592(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_599(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_603(DATA *data, threadData_t *threadData);


/*
equation index: 254
type: LINEAR

<var>MatStm3._compMasFrac[3,1]</var>
<var>MatStm3._compMasFrac[1,1]</var>
<var>MatStm3._compMasFrac[1,2]</var>
<var>MatStm3._compMasFrac[3,3]</var>
<var>MatStm3._compMasFrac[2,3]</var>
<var>MatStm3._compMasFrac[1,3]</var>
<var>MatStm3._compMasFrac[3,2]</var>
<var>MatStm3._compMasFrac[2,2]</var>
<var>MatStm3._compMasFrac[2,1]</var>
<row>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,3] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,2] else MatStm3.compMasFlo[1,3]</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,2] else MatStm3.compMasFlo[1,2]</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,2] else MatStm3.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,1] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="0" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -1.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="0" col="5">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="0" col="8">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="6">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="7">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="8">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -1.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="6">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="7">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="5">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101325.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell><cell row="3" col="6">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="5">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -1.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="5" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else 0.0)</residual>
  </cell><cell row="5" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="5" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="6" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101325.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell><cell row="6" col="7">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="7" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101325.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell><cell row="7" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else -0.0)</residual>
  </cell><cell row="8" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="8" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="8" col="8">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  /* Linear equation system */
  int retValue;
  double aux_x[9] = { data->localData[1]->realVars[272] /* MatStm3.compMasFrac[3,1] variable */,data->localData[1]->realVars[266] /* MatStm3.compMasFrac[1,1] variable */,data->localData[1]->realVars[267] /* MatStm3.compMasFrac[1,2] variable */,data->localData[1]->realVars[274] /* MatStm3.compMasFrac[3,3] variable */,data->localData[1]->realVars[271] /* MatStm3.compMasFrac[2,3] variable */,data->localData[1]->realVars[268] /* MatStm3.compMasFrac[1,3] variable */,data->localData[1]->realVars[273] /* MatStm3.compMasFrac[3,2] variable */,data->localData[1]->realVars[270] /* MatStm3.compMasFrac[2,2] variable */,data->localData[1]->realVars[269] /* MatStm3.compMasFrac[2,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 254 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,254};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 254 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[272] /* MatStm3.compMasFrac[3,1] variable */ = aux_x[0];
  data->localData[0]->realVars[266] /* MatStm3.compMasFrac[1,1] variable */ = aux_x[1];
  data->localData[0]->realVars[267] /* MatStm3.compMasFrac[1,2] variable */ = aux_x[2];
  data->localData[0]->realVars[274] /* MatStm3.compMasFrac[3,3] variable */ = aux_x[3];
  data->localData[0]->realVars[271] /* MatStm3.compMasFrac[2,3] variable */ = aux_x[4];
  data->localData[0]->realVars[268] /* MatStm3.compMasFrac[1,3] variable */ = aux_x[5];
  data->localData[0]->realVars[273] /* MatStm3.compMasFrac[3,2] variable */ = aux_x[6];
  data->localData[0]->realVars[270] /* MatStm3.compMasFrac[2,2] variable */ = aux_x[7];
  data->localData[0]->realVars[269] /* MatStm3.compMasFrac[2,1] variable */ = aux_x[8];
  TRACE_POP
}

void Flowsheet_eqFunction_255(DATA*, threadData_t*);
void Flowsheet_eqFunction_256(DATA*, threadData_t*);
void Flowsheet_eqFunction_257(DATA*, threadData_t*);
void Flowsheet_eqFunction_258(DATA*, threadData_t*);
void Flowsheet_eqFunction_259(DATA*, threadData_t*);
void Flowsheet_eqFunction_260(DATA*, threadData_t*);
void Flowsheet_eqFunction_261(DATA*, threadData_t*);
void Flowsheet_eqFunction_262(DATA*, threadData_t*);
void Flowsheet_eqFunction_263(DATA*, threadData_t*);
void Flowsheet_eqFunction_270(DATA*, threadData_t*);
void Flowsheet_eqFunction_269(DATA*, threadData_t*);
void Flowsheet_eqFunction_268(DATA*, threadData_t*);
void Flowsheet_eqFunction_267(DATA*, threadData_t*);
void Flowsheet_eqFunction_266(DATA*, threadData_t*);
void Flowsheet_eqFunction_265(DATA*, threadData_t*);
void Flowsheet_eqFunction_264(DATA*, threadData_t*);
/*
equation index: 287
indexNonlinear: 2
type: NONLINEAR

vars: {MatStm4._totMolFlo[2], MatStm4._compMolFrac[3,1], MatStm4._compMolFrac[2,1], MatStm4._compMolFrac[3,3], MatStm4._compMolFrac[3,2], MatStm4._compMolFrac[2,2], MatStm4._compMolFrac[2,3]}
eqns: {255, 256, 257, 258, 259, 260, 261, 262, 263, 270, 269, 268, 267, 266, 265, 264}
*/
void Flowsheet_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 287 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[6] = data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,287};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 287 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[6];
  TRACE_POP
}
extern void Flowsheet_eqFunction_664(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_663(DATA *data, threadData_t *threadData);


/*
equation index: 290
type: ALGORITHM

  (MatStm4.compMolEntr[2,3], MatStm4.compMolEntr[3,3]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm4.comp[3].AS, {MatStm4.comp[3].VapCp[1], MatStm4.comp[3].VapCp[2], MatStm4.comp[3].VapCp[3], MatStm4.comp[3].VapCp[4], MatStm4.comp[3].VapCp[5], MatStm4.comp[3].VapCp[6]}, {MatStm4.comp[3].HOV[1], MatStm4.comp[3].HOV[2], MatStm4.comp[3].HOV[3], MatStm4.comp[3].HOV[4], MatStm4.comp[3].HOV[5], MatStm4.comp[3].HOV[6]}, MatStm4.comp[3].Tb, MatStm4.comp[3].Tc, 300.0, 101325.0, MatStm4.compMolFrac[2,3], MatStm4.compMolFrac[3,3]);
*/
void Flowsheet_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[1140], (modelica_real)data->simulationInfo->realParameter[1141], (modelica_real)data->simulationInfo->realParameter[1142], (modelica_real)data->simulationInfo->realParameter[1143], (modelica_real)data->simulationInfo->realParameter[1144], (modelica_real)data->simulationInfo->realParameter[1145]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[990], (modelica_real)data->simulationInfo->realParameter[991], (modelica_real)data->simulationInfo->realParameter[992], (modelica_real)data->simulationInfo->realParameter[993], (modelica_real)data->simulationInfo->realParameter[994], (modelica_real)data->simulationInfo->realParameter[995]);
  data->localData[0]->realVars[407] /* MatStm4.compMolEntr[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[953], tmp0, tmp1, data->simulationInfo->realParameter[1097], data->simulationInfo->realParameter[1100], 300.0, 101325.0, data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */, data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */ ,&data->localData[0]->realVars[410] /* MatStm4.compMolEntr[3,3] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_650(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_651(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_668(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_667(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_655(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_654(DATA *data, threadData_t *threadData);


/*
equation index: 297
type: ALGORITHM

  (MatStm4.compMolEntr[2,2], MatStm4.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm4.comp[2].AS, {MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, {MatStm4.comp[2].HOV[1], MatStm4.comp[2].HOV[2], MatStm4.comp[2].HOV[3], MatStm4.comp[2].HOV[4], MatStm4.comp[2].HOV[5], MatStm4.comp[2].HOV[6]}, MatStm4.comp[2].Tb, MatStm4.comp[2].Tc, 300.0, 101325.0, MatStm4.compMolFrac[2,2], MatStm4.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[1134], (modelica_real)data->simulationInfo->realParameter[1135], (modelica_real)data->simulationInfo->realParameter[1136], (modelica_real)data->simulationInfo->realParameter[1137], (modelica_real)data->simulationInfo->realParameter[1138], (modelica_real)data->simulationInfo->realParameter[1139]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[984], (modelica_real)data->simulationInfo->realParameter[985], (modelica_real)data->simulationInfo->realParameter[986], (modelica_real)data->simulationInfo->realParameter[987], (modelica_real)data->simulationInfo->realParameter[988], (modelica_real)data->simulationInfo->realParameter[989]);
  data->localData[0]->realVars[406] /* MatStm4.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[952], tmp2, tmp3, data->simulationInfo->realParameter[1096], data->simulationInfo->realParameter[1099], 300.0, 101325.0, data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */, data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[409] /* MatStm4.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_657(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_676(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_679(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_678(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_677(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_680(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_758(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_757(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_756(DATA *data, threadData_t *threadData);


void Flowsheet_eqFunction_307(DATA*, threadData_t*);
void Flowsheet_eqFunction_308(DATA*, threadData_t*);
void Flowsheet_eqFunction_309(DATA*, threadData_t*);
void Flowsheet_eqFunction_310(DATA*, threadData_t*);
void Flowsheet_eqFunction_311(DATA*, threadData_t*);
void Flowsheet_eqFunction_312(DATA*, threadData_t*);
void Flowsheet_eqFunction_313(DATA*, threadData_t*);
void Flowsheet_eqFunction_314(DATA*, threadData_t*);
void Flowsheet_eqFunction_315(DATA*, threadData_t*);
void Flowsheet_eqFunction_316(DATA*, threadData_t*);
void Flowsheet_eqFunction_317(DATA*, threadData_t*);
void Flowsheet_eqFunction_318(DATA*, threadData_t*);
void Flowsheet_eqFunction_319(DATA*, threadData_t*);
void Flowsheet_eqFunction_320(DATA*, threadData_t*);
void Flowsheet_eqFunction_321(DATA*, threadData_t*);
void Flowsheet_eqFunction_322(DATA*, threadData_t*);
void Flowsheet_eqFunction_323(DATA*, threadData_t*);
void Flowsheet_eqFunction_324(DATA*, threadData_t*);
void Flowsheet_eqFunction_325(DATA*, threadData_t*);
void Flowsheet_eqFunction_326(DATA*, threadData_t*);
void Flowsheet_eqFunction_327(DATA*, threadData_t*);
void Flowsheet_eqFunction_328(DATA*, threadData_t*);
void Flowsheet_eqFunction_329(DATA*, threadData_t*);
void Flowsheet_eqFunction_330(DATA*, threadData_t*);
void Flowsheet_eqFunction_331(DATA*, threadData_t*);
void Flowsheet_eqFunction_339(DATA*, threadData_t*);
void Flowsheet_eqFunction_338(DATA*, threadData_t*);
void Flowsheet_eqFunction_337(DATA*, threadData_t*);
void Flowsheet_eqFunction_336(DATA*, threadData_t*);
void Flowsheet_eqFunction_335(DATA*, threadData_t*);
void Flowsheet_eqFunction_334(DATA*, threadData_t*);
void Flowsheet_eqFunction_333(DATA*, threadData_t*);
void Flowsheet_eqFunction_332(DATA*, threadData_t*);
/*
equation index: 340
indexNonlinear: 3
type: NONLINEAR

vars: {MatStm1._totMolFlo[3], MatStm1._compMolFrac[2,1], MatStm1._compMolFrac[3,1], MatStm1._T, MatStm1._compMolFrac[3,3], MatStm1._compMolFrac[2,3], MatStm1._compMolFrac[2,2], MatStm1._compMolFrac[3,2]}
eqns: {307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 339, 338, 337, 336, 335, 334, 333, 332}
*/
void Flowsheet_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 340 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[1] = data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[2] = data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[3] = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[4] = data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[5] = data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[6] = data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[7] = data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,340};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 340 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[1];
  data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[2];
  data->localData[0]->realVars[19] /* MatStm1.T variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[3];
  data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[4];
  data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[5];
  data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[6];
  data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[7];
  TRACE_POP
}
extern void Flowsheet_eqFunction_724(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_725(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_722(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_723(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_727(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_726(DATA *data, threadData_t *threadData);


/*
equation index: 347
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:3 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
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
extern void Flowsheet_eqFunction_732(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_729(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_730(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_734(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_731(DATA *data, threadData_t *threadData);


/*
equation index: 353
type: LINEAR

<var>MatStm1._compMasFrac[2,1]</var>
<var>MatStm1._compMasFrac[1,3]</var>
<var>MatStm1._compMasFrac[3,2]</var>
<var>MatStm1._compMasFrac[2,2]</var>
<var>MatStm1._compMasFrac[2,3]</var>
<var>MatStm1._compMasFrac[1,2]</var>
<var>MatStm1._compMasFrac[1,1]</var>
<var>MatStm1._compMasFrac[3,1]</var>
<var>MatStm1._compMasFrac[3,3]</var>
<row>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,2] else MatStm1.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,2] else MatStm1.compMasFlo[1,2]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,3] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,2] else MatStm1.compMasFlo[1,3]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,1] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="8">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="7">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 0.0)</residual>
  </cell><cell row="1" col="8">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="2" col="6">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="7">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="5">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else -0.0)</residual>
  </cell><cell row="3" col="6">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="4" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="4" col="5">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="5" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="5" col="5">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="6" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="6" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="6" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="7" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="7" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="8" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="8" col="6">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="8" col="7">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  /* Linear equation system */
  int retValue;
  double aux_x[9] = { data->localData[1]->realVars[32] /* MatStm1.compMasFrac[2,1] variable */,data->localData[1]->realVars[31] /* MatStm1.compMasFrac[1,3] variable */,data->localData[1]->realVars[36] /* MatStm1.compMasFrac[3,2] variable */,data->localData[1]->realVars[33] /* MatStm1.compMasFrac[2,2] variable */,data->localData[1]->realVars[34] /* MatStm1.compMasFrac[2,3] variable */,data->localData[1]->realVars[30] /* MatStm1.compMasFrac[1,2] variable */,data->localData[1]->realVars[29] /* MatStm1.compMasFrac[1,1] variable */,data->localData[1]->realVars[35] /* MatStm1.compMasFrac[3,1] variable */,data->localData[1]->realVars[37] /* MatStm1.compMasFrac[3,3] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 353 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,353};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 353 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[32] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[0];
  data->localData[0]->realVars[31] /* MatStm1.compMasFrac[1,3] variable */ = aux_x[1];
  data->localData[0]->realVars[36] /* MatStm1.compMasFrac[3,2] variable */ = aux_x[2];
  data->localData[0]->realVars[33] /* MatStm1.compMasFrac[2,2] variable */ = aux_x[3];
  data->localData[0]->realVars[34] /* MatStm1.compMasFrac[2,3] variable */ = aux_x[4];
  data->localData[0]->realVars[30] /* MatStm1.compMasFrac[1,2] variable */ = aux_x[5];
  data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[6];
  data->localData[0]->realVars[35] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[7];
  data->localData[0]->realVars[37] /* MatStm1.compMasFrac[3,3] variable */ = aux_x[8];
  TRACE_POP
}

/*
equation index: 354
type: ALGORITHM

  (MatStm1.compMolEntr[2,3], MatStm1.compMolEntr[3,3]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[3].AS, {MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, {MatStm1.comp[3].HOV[1], MatStm1.comp[3].HOV[2], MatStm1.comp[3].HOV[3], MatStm1.comp[3].HOV[4], MatStm1.comp[3].HOV[5], MatStm1.comp[3].HOV[6]}, MatStm1.comp[3].Tb, MatStm1.comp[3].Tc, MatStm1.T, 101325.0, MatStm1.compMolFrac[2,3], MatStm1.compMolFrac[3,3]);
*/
void Flowsheet_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  real_array tmp6;
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[429], (modelica_real)data->simulationInfo->realParameter[430], (modelica_real)data->simulationInfo->realParameter[431], (modelica_real)data->simulationInfo->realParameter[432], (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434]);
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[279], (modelica_real)data->simulationInfo->realParameter[280], (modelica_real)data->simulationInfo->realParameter[281], (modelica_real)data->simulationInfo->realParameter[282], (modelica_real)data->simulationInfo->realParameter[283], (modelica_real)data->simulationInfo->realParameter[284]);
  data->localData[0]->realVars[52] /* MatStm1.compMolEntr[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[242], tmp6, tmp7, data->simulationInfo->realParameter[386], data->simulationInfo->realParameter[389], data->localData[0]->realVars[19] /* MatStm1.T variable */, 101325.0, data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */, data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */ ,&data->localData[0]->realVars[55] /* MatStm1.compMolEntr[3,3] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_736(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_737(DATA *data, threadData_t *threadData);


/*
equation index: 357
type: ALGORITHM

  (MatStm1.compMolEntr[2,2], MatStm1.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[2].AS, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tb, MatStm1.comp[2].Tc, MatStm1.T, 101325.0, MatStm1.compMolFrac[2,2], MatStm1.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[273], (modelica_real)data->simulationInfo->realParameter[274], (modelica_real)data->simulationInfo->realParameter[275], (modelica_real)data->simulationInfo->realParameter[276], (modelica_real)data->simulationInfo->realParameter[277], (modelica_real)data->simulationInfo->realParameter[278]);
  data->localData[0]->realVars[51] /* MatStm1.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[241], tmp8, tmp9, data->simulationInfo->realParameter[385], data->simulationInfo->realParameter[388], data->localData[0]->realVars[19] /* MatStm1.T variable */, 101325.0, data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */, data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[54] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_739(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_740(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_748(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_750(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_749(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_751(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_752(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_755(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_754(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_753(DATA *data, threadData_t *threadData);


/*
equation index: 368
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, MatStm1.T, 101325.0, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270], (modelica_real)data->simulationInfo->realParameter[271], (modelica_real)data->simulationInfo->realParameter[272]);
  data->localData[0]->realVars[50] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[240], tmp10, tmp11, data->simulationInfo->realParameter[384], data->simulationInfo->realParameter[387], data->localData[0]->realVars[19] /* MatStm1.T variable */, 101325.0, data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[53] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_743(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_742(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_744(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_747(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_746(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_745(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_656(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_672(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_675(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_674(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_673(DATA *data, threadData_t *threadData);


/*
equation index: 380
type: ALGORITHM

  (MatStm4.compMolEntr[2,1], MatStm4.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm4.comp[1].AS, {MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, {MatStm4.comp[1].HOV[1], MatStm4.comp[1].HOV[2], MatStm4.comp[1].HOV[3], MatStm4.comp[1].HOV[4], MatStm4.comp[1].HOV[5], MatStm4.comp[1].HOV[6]}, MatStm4.comp[1].Tb, MatStm4.comp[1].Tc, 300.0, 101325.0, MatStm4.compMolFrac[2,1], MatStm4.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  real_array tmp12;
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[1128], (modelica_real)data->simulationInfo->realParameter[1129], (modelica_real)data->simulationInfo->realParameter[1130], (modelica_real)data->simulationInfo->realParameter[1131], (modelica_real)data->simulationInfo->realParameter[1132], (modelica_real)data->simulationInfo->realParameter[1133]);
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)data->simulationInfo->realParameter[978], (modelica_real)data->simulationInfo->realParameter[979], (modelica_real)data->simulationInfo->realParameter[980], (modelica_real)data->simulationInfo->realParameter[981], (modelica_real)data->simulationInfo->realParameter[982], (modelica_real)data->simulationInfo->realParameter[983]);
  data->localData[0]->realVars[405] /* MatStm4.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[951], tmp12, tmp13, data->simulationInfo->realParameter[1095], data->simulationInfo->realParameter[1098], 300.0, 101325.0, data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */, data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[408] /* MatStm4.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_659(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_662(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_759(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_762(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_761(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_760(DATA *data, threadData_t *threadData);


/*
equation index: 387
type: ALGORITHM

  MatStm4.MW[3] := $START.MatStm4.MW[3];
  MatStm4.MW[2] := $START.MatStm4.MW[2];
  MatStm4.MW[1] := $START.MatStm4.MW[1];
  for i in 1:3 loop
    MatStm4.MW[:] := {MatStm4.MW[1] + MatStm4.compMolFrac[1,i] * MatStm4.comp[i].MW, MatStm4.MW[2] + MatStm4.compMolFrac[2,i] * MatStm4.comp[i].MW, MatStm4.MW[3] + MatStm4.compMolFrac[3,i] * MatStm4.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  real_array tmp14;
  index_spec_t tmp15;
  real_array tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  modelica_integer tmp19;
  data->localData[0]->realVars[367] /* MatStm4.MW[3] variable */ = data->modelData->realVarsData[367].attribute /* MatStm4.MW[3] variable */.start;

  data->localData[0]->realVars[366] /* MatStm4.MW[2] variable */ = data->modelData->realVarsData[366].attribute /* MatStm4.MW[2] variable */.start;

  data->localData[0]->realVars[365] /* MatStm4.MW[1] variable */ = data->modelData->realVarsData[365].attribute /* MatStm4.MW[1] variable */.start;

  tmp17 = ((modelica_integer) 1); tmp18 = 1; tmp19 = ((modelica_integer) 3);
  if(!(((tmp18 > 0) && (tmp17 > tmp19)) || ((tmp18 < 0) && (tmp17 < tmp19))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp17, tmp19); $Pi += tmp18)
    {
      array_alloc_scalar_real_array(&tmp14, 3, (modelica_real)data->localData[0]->realVars[365] /* MatStm4.MW[1] variable */ + ((&data->localData[0]->realVars[420] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[1074])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[366] /* MatStm4.MW[2] variable */ + ((&data->localData[0]->realVars[420] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[1074])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[367] /* MatStm4.MW[3] variable */ + ((&data->localData[0]->realVars[420] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[1074])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]));
      create_index_spec(&tmp15, 1, (1), (int*)0, 'W');
      real_array_create(&tmp16, (modelica_real*)&data->localData[0]->realVars[365] /* MatStm4.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp14, &tmp16, &tmp15);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_665(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_669(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_661(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_666(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_670(DATA *data, threadData_t *threadData);


/*
equation index: 393
type: LINEAR

<var>MatStm4._compMasFrac[2,2]</var>
<var>MatStm4._compMasFrac[3,3]</var>
<var>MatStm4._compMasFrac[3,1]</var>
<var>MatStm4._compMasFrac[2,1]</var>
<var>MatStm4._compMasFrac[3,2]</var>
<var>MatStm4._compMasFrac[1,3]</var>
<var>MatStm4._compMasFrac[2,3]</var>
<var>MatStm4._compMasFrac[1,2]</var>
<var>MatStm4._compMasFrac[1,1]</var>
<row>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[1,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then MatStm4.compMasFlo[1,1] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[1,2] else MatStm4.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[2,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[3,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then MatStm4.compMasFlo[1,3] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[3,2] else MatStm4.compMasFlo[1,3]</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[3,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then MatStm4.compMasFlo[1,2] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[2,2] else MatStm4.compMasFlo[1,2]</cell>
</row>
<matrix>
  <cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="0" col="3">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="5">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="0" col="8">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -1.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="1" col="7">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[1] else -0.0)</residual>
  </cell><cell row="1" col="8">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -MatStm4.totMasFlo[1] else if 101325.0 >= MatStm4.Pdew then -0.0 else -MatStm4.totMasFlo[1])</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="4">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="6">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="7">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -1.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="3" col="5">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -1.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="3" col="6">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="5">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -MatStm4.totMasFlo[1] else if 101325.0 >= MatStm4.Pdew then -0.0 else -MatStm4.totMasFlo[1])</residual>
  </cell><cell row="5" col="0">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="5" col="3">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="5" col="4">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="6" col="2">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="6" col="3">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="6" col="8">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="7" col="1">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="7" col="2">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[3] else 0.0)</residual>
  </cell><cell row="7" col="6">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="8" col="0">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="8" col="7">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -MatStm4.totMasFlo[1] else if 101325.0 >= MatStm4.Pdew then -0.0 else -MatStm4.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  /* Linear equation system */
  int retValue;
  double aux_x[9] = { data->localData[1]->realVars[388] /* MatStm4.compMasFrac[2,2] variable */,data->localData[1]->realVars[392] /* MatStm4.compMasFrac[3,3] variable */,data->localData[1]->realVars[390] /* MatStm4.compMasFrac[3,1] variable */,data->localData[1]->realVars[387] /* MatStm4.compMasFrac[2,1] variable */,data->localData[1]->realVars[391] /* MatStm4.compMasFrac[3,2] variable */,data->localData[1]->realVars[386] /* MatStm4.compMasFrac[1,3] variable */,data->localData[1]->realVars[389] /* MatStm4.compMasFrac[2,3] variable */,data->localData[1]->realVars[385] /* MatStm4.compMasFrac[1,2] variable */,data->localData[1]->realVars[384] /* MatStm4.compMasFrac[1,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 393 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 3, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,393};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 393 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[388] /* MatStm4.compMasFrac[2,2] variable */ = aux_x[0];
  data->localData[0]->realVars[392] /* MatStm4.compMasFrac[3,3] variable */ = aux_x[1];
  data->localData[0]->realVars[390] /* MatStm4.compMasFrac[3,1] variable */ = aux_x[2];
  data->localData[0]->realVars[387] /* MatStm4.compMasFrac[2,1] variable */ = aux_x[3];
  data->localData[0]->realVars[391] /* MatStm4.compMasFrac[3,2] variable */ = aux_x[4];
  data->localData[0]->realVars[386] /* MatStm4.compMasFrac[1,3] variable */ = aux_x[5];
  data->localData[0]->realVars[389] /* MatStm4.compMasFrac[2,3] variable */ = aux_x[6];
  data->localData[0]->realVars[385] /* MatStm4.compMasFrac[1,2] variable */ = aux_x[7];
  data->localData[0]->realVars[384] /* MatStm4.compMasFrac[1,1] variable */ = aux_x[8];
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[1] = 300.0
*/
void Flowsheet_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->localData[0]->realVars[118] /* MatStm1.totMolFlo[1] variable */ = 300.0;
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
MatStm1._P = 101325.0
*/
void Flowsheet_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->localData[0]->realVars[13] /* MatStm1.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->localData[0]->realVars[86] /* MatStm1.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
MatStm1._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->localData[0]->realVars[89] /* MatStm1.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
MatStm1._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  data->localData[0]->realVars[94] /* MatStm1.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
MatStm1._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->localData[0]->realVars[123] /* MatStm1.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[2] = 1.0
*/
void Flowsheet_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->localData[0]->realVars[87] /* MatStm1.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
MatStm1._gammaDew[2] = 1.0
*/
void Flowsheet_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  data->localData[0]->realVars[90] /* MatStm1.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
MatStm1._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  data->localData[0]->realVars[95] /* MatStm1.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
MatStm1._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  data->localData[0]->realVars[124] /* MatStm1.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[3] = 1.0
*/
void Flowsheet_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->localData[0]->realVars[88] /* MatStm1.gammaBubl[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
MatStm1._gammaDew[3] = 1.0
*/
void Flowsheet_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  data->localData[0]->realVars[91] /* MatStm1.gammaDew[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
MatStm1._liqfugcoeff_bubl[3] = 1.0
*/
void Flowsheet_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  data->localData[0]->realVars[96] /* MatStm1.liqfugcoeff_bubl[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
MatStm1._vapfugcoeff_dew[3] = 1.0
*/
void Flowsheet_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->localData[0]->realVars[125] /* MatStm1.vapfugcoeff_dew[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->localData[0]->realVars[113] /* MatStm1.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->localData[0]->realVars[114] /* MatStm1.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->localData[0]->realVars[107] /* MatStm1.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  data->localData[0]->realVars[108] /* MatStm1.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->localData[0]->realVars[110] /* MatStm1.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->localData[0]->realVars[111] /* MatStm1.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->localData[0]->realVars[205] /* MatStm2.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
MatStm2._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->localData[0]->realVars[208] /* MatStm2.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
MatStm2._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  data->localData[0]->realVars[213] /* MatStm2.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
MatStm2._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->localData[0]->realVars[241] /* MatStm2.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[2] = 1.0
*/
void Flowsheet_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->localData[0]->realVars[206] /* MatStm2.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
MatStm2._gammaDew[2] = 1.0
*/
void Flowsheet_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->localData[0]->realVars[209] /* MatStm2.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
MatStm2._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->localData[0]->realVars[214] /* MatStm2.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
MatStm2._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->localData[0]->realVars[242] /* MatStm2.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[3] = 1.0
*/
void Flowsheet_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  data->localData[0]->realVars[207] /* MatStm2.gammaBubl[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
MatStm2._gammaDew[3] = 1.0
*/
void Flowsheet_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->localData[0]->realVars[210] /* MatStm2.gammaDew[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
MatStm2._liqfugcoeff_bubl[3] = 1.0
*/
void Flowsheet_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->localData[0]->realVars[215] /* MatStm2.liqfugcoeff_bubl[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
MatStm2._vapfugcoeff_dew[3] = 1.0
*/
void Flowsheet_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->localData[0]->realVars[243] /* MatStm2.vapfugcoeff_dew[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  data->localData[0]->realVars[232] /* MatStm2.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->localData[0]->realVars[233] /* MatStm2.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->localData[0]->realVars[226] /* MatStm2.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->localData[0]->realVars[227] /* MatStm2.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  data->localData[0]->realVars[229] /* MatStm2.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  data->localData[0]->realVars[230] /* MatStm2.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
MatStm3._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  data->localData[0]->realVars[323] /* MatStm3.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
MatStm3._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  data->localData[0]->realVars[326] /* MatStm3.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
MatStm3._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  data->localData[0]->realVars[331] /* MatStm3.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
MatStm3._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  data->localData[0]->realVars[359] /* MatStm3.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
MatStm3._gammaBubl[2] = 1.0
*/
void Flowsheet_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  data->localData[0]->realVars[324] /* MatStm3.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
MatStm3._gammaDew[2] = 1.0
*/
void Flowsheet_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  data->localData[0]->realVars[327] /* MatStm3.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
MatStm3._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  data->localData[0]->realVars[332] /* MatStm3.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
MatStm3._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  data->localData[0]->realVars[360] /* MatStm3.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
MatStm3._gammaBubl[3] = 1.0
*/
void Flowsheet_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  data->localData[0]->realVars[325] /* MatStm3.gammaBubl[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
MatStm3._gammaDew[3] = 1.0
*/
void Flowsheet_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  data->localData[0]->realVars[328] /* MatStm3.gammaDew[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
MatStm3._liqfugcoeff_bubl[3] = 1.0
*/
void Flowsheet_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  data->localData[0]->realVars[333] /* MatStm3.liqfugcoeff_bubl[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
MatStm3._vapfugcoeff_dew[3] = 1.0
*/
void Flowsheet_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  data->localData[0]->realVars[361] /* MatStm3.vapfugcoeff_dew[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
MatStm3._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  data->localData[0]->realVars[350] /* MatStm3.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
MatStm3._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  data->localData[0]->realVars[351] /* MatStm3.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
MatStm3._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  data->localData[0]->realVars[344] /* MatStm3.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
MatStm3._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  data->localData[0]->realVars[345] /* MatStm3.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
MatStm3._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  data->localData[0]->realVars[347] /* MatStm3.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
MatStm3._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  data->localData[0]->realVars[348] /* MatStm3.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
MatStm4._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  data->localData[0]->realVars[441] /* MatStm4.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
MatStm4._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  data->localData[0]->realVars[444] /* MatStm4.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
MatStm4._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  data->localData[0]->realVars[449] /* MatStm4.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
MatStm4._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  data->localData[0]->realVars[477] /* MatStm4.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
MatStm4._gammaBubl[2] = 1.0
*/
void Flowsheet_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  data->localData[0]->realVars[442] /* MatStm4.gammaBubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
MatStm4._gammaDew[2] = 1.0
*/
void Flowsheet_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  data->localData[0]->realVars[445] /* MatStm4.gammaDew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
MatStm4._liqfugcoeff_bubl[2] = 1.0
*/
void Flowsheet_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  data->localData[0]->realVars[450] /* MatStm4.liqfugcoeff_bubl[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
MatStm4._vapfugcoeff_dew[2] = 1.0
*/
void Flowsheet_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  data->localData[0]->realVars[478] /* MatStm4.vapfugcoeff_dew[2] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
MatStm4._gammaBubl[3] = 1.0
*/
void Flowsheet_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  data->localData[0]->realVars[443] /* MatStm4.gammaBubl[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
MatStm4._gammaDew[3] = 1.0
*/
void Flowsheet_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  data->localData[0]->realVars[446] /* MatStm4.gammaDew[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
MatStm4._liqfugcoeff_bubl[3] = 1.0
*/
void Flowsheet_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  data->localData[0]->realVars[451] /* MatStm4.liqfugcoeff_bubl[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
MatStm4._vapfugcoeff_dew[3] = 1.0
*/
void Flowsheet_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  data->localData[0]->realVars[479] /* MatStm4.vapfugcoeff_dew[3] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
MatStm4._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  data->localData[0]->realVars[468] /* MatStm4.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
MatStm4._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->localData[0]->realVars[469] /* MatStm4.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
MatStm4._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  data->localData[0]->realVars[462] /* MatStm4.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
MatStm4._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  data->localData[0]->realVars[463] /* MatStm4.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
MatStm4._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->localData[0]->realVars[465] /* MatStm4.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
MatStm4._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  data->localData[0]->realVars[466] /* MatStm4.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
MatStm4._P = 101325.0
*/
void Flowsheet_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  data->localData[0]->realVars[368] /* MatStm4.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
MatStm4._T = 300.0
*/
void Flowsheet_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  data->localData[0]->realVars[374] /* MatStm4.T variable */ = 300.0;
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
MatStm4._totMolFlo[1] = 100.0
*/
void Flowsheet_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  data->localData[0]->realVars[473] /* MatStm4.totMolFlo[1] variable */ = 100.0;
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
MatStm3._P = 101325.0
*/
void Flowsheet_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  data->localData[0]->realVars[250] /* MatStm3.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
MatStm3._T = 300.0
*/
void Flowsheet_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  data->localData[0]->realVars[256] /* MatStm3.T variable */ = 300.0;
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[1] = 100.0
*/
void Flowsheet_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->localData[0]->realVars[355] /* MatStm3.totMolFlo[1] variable */ = 100.0;
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
MatStm2._P = 101325.0
*/
void Flowsheet_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->localData[0]->realVars[132] /* MatStm2.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
MatStm2._T = 300.0
*/
void Flowsheet_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->localData[0]->realVars[138] /* MatStm2.T variable */ = 300.0;
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[1] = 100.0
*/
void Flowsheet_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
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
  Flowsheet_eqFunction_481(data, threadData);
  Flowsheet_eqFunction_479(data, threadData);
  Flowsheet_eqFunction_477(data, threadData);
  Flowsheet_eqFunction_482(data, threadData);
  Flowsheet_eqFunction_480(data, threadData);
  Flowsheet_eqFunction_478(data, threadData);
  Flowsheet_eqFunction_153(data, threadData);
  Flowsheet_eqFunction_534(data, threadData);
  Flowsheet_eqFunction_533(data, threadData);
  Flowsheet_eqFunction_156(data, threadData);
  Flowsheet_eqFunction_517(data, threadData);
  Flowsheet_eqFunction_516(data, threadData);
  Flowsheet_eqFunction_519(data, threadData);
  Flowsheet_eqFunction_520(data, threadData);
  Flowsheet_eqFunction_523(data, threadData);
  Flowsheet_eqFunction_522(data, threadData);
  Flowsheet_eqFunction_163(data, threadData);
  Flowsheet_eqFunction_527(data, threadData);
  Flowsheet_eqFunction_542(data, threadData);
  Flowsheet_eqFunction_545(data, threadData);
  Flowsheet_eqFunction_544(data, threadData);
  Flowsheet_eqFunction_543(data, threadData);
  Flowsheet_eqFunction_526(data, threadData);
  Flowsheet_eqFunction_538(data, threadData);
  Flowsheet_eqFunction_541(data, threadData);
  Flowsheet_eqFunction_540(data, threadData);
  Flowsheet_eqFunction_539(data, threadData);
  Flowsheet_eqFunction_174(data, threadData);
  Flowsheet_eqFunction_525(data, threadData);
  Flowsheet_eqFunction_532(data, threadData);
  Flowsheet_eqFunction_546(data, threadData);
  Flowsheet_eqFunction_549(data, threadData);
  Flowsheet_eqFunction_548(data, threadData);
  Flowsheet_eqFunction_547(data, threadData);
  Flowsheet_eqFunction_181(data, threadData);
  Flowsheet_eqFunction_535(data, threadData);
  Flowsheet_eqFunction_530(data, threadData);
  Flowsheet_eqFunction_536(data, threadData);
  Flowsheet_eqFunction_529(data, threadData);
  Flowsheet_eqFunction_531(data, threadData);
  Flowsheet_eqFunction_187(data, threadData);
  Flowsheet_eqFunction_220(data, threadData);
  Flowsheet_eqFunction_584(data, threadData);
  Flowsheet_eqFunction_585(data, threadData);
  Flowsheet_eqFunction_223(data, threadData);
  Flowsheet_eqFunction_597(data, threadData);
  Flowsheet_eqFunction_596(data, threadData);
  Flowsheet_eqFunction_587(data, threadData);
  Flowsheet_eqFunction_586(data, threadData);
  Flowsheet_eqFunction_228(data, threadData);
  Flowsheet_eqFunction_601(data, threadData);
  Flowsheet_eqFunction_600(data, threadData);
  Flowsheet_eqFunction_590(data, threadData);
  Flowsheet_eqFunction_609(data, threadData);
  Flowsheet_eqFunction_612(data, threadData);
  Flowsheet_eqFunction_611(data, threadData);
  Flowsheet_eqFunction_610(data, threadData);
  Flowsheet_eqFunction_589(data, threadData);
  Flowsheet_eqFunction_605(data, threadData);
  Flowsheet_eqFunction_608(data, threadData);
  Flowsheet_eqFunction_607(data, threadData);
  Flowsheet_eqFunction_606(data, threadData);
  Flowsheet_eqFunction_241(data, threadData);
  Flowsheet_eqFunction_594(data, threadData);
  Flowsheet_eqFunction_595(data, threadData);
  Flowsheet_eqFunction_613(data, threadData);
  Flowsheet_eqFunction_616(data, threadData);
  Flowsheet_eqFunction_615(data, threadData);
  Flowsheet_eqFunction_614(data, threadData);
  Flowsheet_eqFunction_248(data, threadData);
  Flowsheet_eqFunction_598(data, threadData);
  Flowsheet_eqFunction_602(data, threadData);
  Flowsheet_eqFunction_592(data, threadData);
  Flowsheet_eqFunction_599(data, threadData);
  Flowsheet_eqFunction_603(data, threadData);
  Flowsheet_eqFunction_254(data, threadData);
  Flowsheet_eqFunction_287(data, threadData);
  Flowsheet_eqFunction_664(data, threadData);
  Flowsheet_eqFunction_663(data, threadData);
  Flowsheet_eqFunction_290(data, threadData);
  Flowsheet_eqFunction_650(data, threadData);
  Flowsheet_eqFunction_651(data, threadData);
  Flowsheet_eqFunction_668(data, threadData);
  Flowsheet_eqFunction_667(data, threadData);
  Flowsheet_eqFunction_655(data, threadData);
  Flowsheet_eqFunction_654(data, threadData);
  Flowsheet_eqFunction_297(data, threadData);
  Flowsheet_eqFunction_657(data, threadData);
  Flowsheet_eqFunction_676(data, threadData);
  Flowsheet_eqFunction_679(data, threadData);
  Flowsheet_eqFunction_678(data, threadData);
  Flowsheet_eqFunction_677(data, threadData);
  Flowsheet_eqFunction_680(data, threadData);
  Flowsheet_eqFunction_758(data, threadData);
  Flowsheet_eqFunction_757(data, threadData);
  Flowsheet_eqFunction_756(data, threadData);
  Flowsheet_eqFunction_340(data, threadData);
  Flowsheet_eqFunction_724(data, threadData);
  Flowsheet_eqFunction_725(data, threadData);
  Flowsheet_eqFunction_722(data, threadData);
  Flowsheet_eqFunction_723(data, threadData);
  Flowsheet_eqFunction_727(data, threadData);
  Flowsheet_eqFunction_726(data, threadData);
  Flowsheet_eqFunction_347(data, threadData);
  Flowsheet_eqFunction_732(data, threadData);
  Flowsheet_eqFunction_729(data, threadData);
  Flowsheet_eqFunction_730(data, threadData);
  Flowsheet_eqFunction_734(data, threadData);
  Flowsheet_eqFunction_731(data, threadData);
  Flowsheet_eqFunction_353(data, threadData);
  Flowsheet_eqFunction_354(data, threadData);
  Flowsheet_eqFunction_736(data, threadData);
  Flowsheet_eqFunction_737(data, threadData);
  Flowsheet_eqFunction_357(data, threadData);
  Flowsheet_eqFunction_739(data, threadData);
  Flowsheet_eqFunction_740(data, threadData);
  Flowsheet_eqFunction_748(data, threadData);
  Flowsheet_eqFunction_750(data, threadData);
  Flowsheet_eqFunction_749(data, threadData);
  Flowsheet_eqFunction_751(data, threadData);
  Flowsheet_eqFunction_752(data, threadData);
  Flowsheet_eqFunction_755(data, threadData);
  Flowsheet_eqFunction_754(data, threadData);
  Flowsheet_eqFunction_753(data, threadData);
  Flowsheet_eqFunction_368(data, threadData);
  Flowsheet_eqFunction_743(data, threadData);
  Flowsheet_eqFunction_742(data, threadData);
  Flowsheet_eqFunction_744(data, threadData);
  Flowsheet_eqFunction_747(data, threadData);
  Flowsheet_eqFunction_746(data, threadData);
  Flowsheet_eqFunction_745(data, threadData);
  Flowsheet_eqFunction_656(data, threadData);
  Flowsheet_eqFunction_672(data, threadData);
  Flowsheet_eqFunction_675(data, threadData);
  Flowsheet_eqFunction_674(data, threadData);
  Flowsheet_eqFunction_673(data, threadData);
  Flowsheet_eqFunction_380(data, threadData);
  Flowsheet_eqFunction_659(data, threadData);
  Flowsheet_eqFunction_662(data, threadData);
  Flowsheet_eqFunction_759(data, threadData);
  Flowsheet_eqFunction_762(data, threadData);
  Flowsheet_eqFunction_761(data, threadData);
  Flowsheet_eqFunction_760(data, threadData);
  Flowsheet_eqFunction_387(data, threadData);
  Flowsheet_eqFunction_665(data, threadData);
  Flowsheet_eqFunction_669(data, threadData);
  Flowsheet_eqFunction_661(data, threadData);
  Flowsheet_eqFunction_666(data, threadData);
  Flowsheet_eqFunction_670(data, threadData);
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
  Flowsheet_eqFunction_472(data, threadData);
  Flowsheet_eqFunction_473(data, threadData);
  Flowsheet_eqFunction_474(data, threadData);
  Flowsheet_eqFunction_475(data, threadData);
  Flowsheet_eqFunction_476(data, threadData);
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

