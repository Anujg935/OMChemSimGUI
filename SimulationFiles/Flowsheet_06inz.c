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
  data->localData[0]->realVars[62] /* MatStm1.gamma[1] variable */ = 1.0;
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
  data->localData[0]->realVars[63] /* MatStm1.gamma[2] variable */ = 1.0;
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
  data->localData[0]->realVars[87] /* MatStm1.resMolSpHeat[1] variable */ = 0.0;
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
  data->localData[0]->realVars[81] /* MatStm1.resMolEnth[1] variable */ = 0.0;
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
  data->localData[0]->realVars[84] /* MatStm1.resMolEntr[1] variable */ = 0.0;
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
  data->localData[0]->realVars[151] /* MatStm2.gamma[1] variable */ = 1.0;
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
  data->localData[0]->realVars[152] /* MatStm2.gamma[2] variable */ = 1.0;
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
  data->localData[0]->realVars[176] /* MatStm2.resMolSpHeat[1] variable */ = 0.0;
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
  data->localData[0]->realVars[170] /* MatStm2.resMolEnth[1] variable */ = 0.0;
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
  data->localData[0]->realVars[173] /* MatStm2.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
MatStm2._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[2].VP[1], MatStm2.comp[2].VP[2], MatStm2.comp[2].VP[3], MatStm2.comp[2].VP[4], MatStm2.comp[2].VP[5], MatStm2.comp[2].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[511], (modelica_real)data->simulationInfo->realParameter[512], (modelica_real)data->simulationInfo->realParameter[513], (modelica_real)data->simulationInfo->realParameter[514], (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516]);
  data->localData[0]->realVars[107] /* MatStm2.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, 300.0);
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
MatStm2._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[1].VP[1], MatStm2.comp[1].VP[2], MatStm2.comp[1].VP[3], MatStm2.comp[1].VP[4], MatStm2.comp[1].VP[5], MatStm2.comp[1].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[505], (modelica_real)data->simulationInfo->realParameter[506], (modelica_real)data->simulationInfo->realParameter[507], (modelica_real)data->simulationInfo->realParameter[508], (modelica_real)data->simulationInfo->realParameter[509], (modelica_real)data->simulationInfo->realParameter[510]);
  data->localData[0]->realVars[106] /* MatStm2.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp1, 300.0);
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[2].SH, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tc, 300.0)
*/
void Flowsheet_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526], (modelica_real)data->simulationInfo->realParameter[527], (modelica_real)data->simulationInfo->realParameter[528]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  data->localData[0]->realVars[126] /* MatStm2.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[488], tmp2, tmp3, data->simulationInfo->realParameter[498], 300.0);
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[2].SH, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tc, 300.0)
*/
void Flowsheet_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  real_array tmp4;
  real_array tmp5;
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526], (modelica_real)data->simulationInfo->realParameter[527], (modelica_real)data->simulationInfo->realParameter[528]);
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  data->localData[0]->realVars[124] /* MatStm2.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[488], tmp4, tmp5, data->simulationInfo->realParameter[498], 300.0);
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  real_array tmp6;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526], (modelica_real)data->simulationInfo->realParameter[527], (modelica_real)data->simulationInfo->realParameter[528]);
  data->localData[0]->realVars[150] /* MatStm2.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp6, 300.0);
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm2.comp[2].LiqCp[1], MatStm2.comp[2].LiqCp[2], MatStm2.comp[2].LiqCp[3], MatStm2.comp[2].LiqCp[4], MatStm2.comp[2].LiqCp[5], MatStm2.comp[2].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[439], (modelica_real)data->simulationInfo->realParameter[440], (modelica_real)data->simulationInfo->realParameter[441], (modelica_real)data->simulationInfo->realParameter[442], (modelica_real)data->simulationInfo->realParameter[443], (modelica_real)data->simulationInfo->realParameter[444]);
  data->localData[0]->realVars[148] /* MatStm2.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp7, 300.0);
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  data->localData[0]->realVars[125] /* MatStm2.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[487], tmp8, tmp9, data->simulationInfo->realParameter[497], 300.0);
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  data->localData[0]->realVars[123] /* MatStm2.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[487], tmp10, tmp11, data->simulationInfo->realParameter[497], 300.0);
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  real_array tmp12;
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522]);
  data->localData[0]->realVars[149] /* MatStm2.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp12, 300.0);
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm2.comp[1].LiqCp[1], MatStm2.comp[1].LiqCp[2], MatStm2.comp[1].LiqCp[3], MatStm2.comp[1].LiqCp[4], MatStm2.comp[1].LiqCp[5], MatStm2.comp[1].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434], (modelica_real)data->simulationInfo->realParameter[435], (modelica_real)data->simulationInfo->realParameter[436], (modelica_real)data->simulationInfo->realParameter[437], (modelica_real)data->simulationInfo->realParameter[438]);
  data->localData[0]->realVars[147] /* MatStm2.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp13, 300.0);
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
Heater1._outP = 101321.0 - Heater1.pressDrop
*/
void Flowsheet_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[7] /* Heater1.outP variable */ = 101321.0 - data->simulationInfo->realParameter[238];
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
MatStm2._compMolFrac[1,1] = 0.2
*/
void Flowsheet_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,1] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[1,1] = 100.0 * MatStm2.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[133] /* MatStm2.compMolFlo[1,1] variable */ = (100.0) * (data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
MatStm2._compMolFrac[1,2] = 0.8
*/
void Flowsheet_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[140] /* MatStm2.compMolFrac[1,2] variable */ = 0.8;
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[1,2] = 100.0 * MatStm2.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[134] /* MatStm2.compMolFlo[1,2] variable */ = (100.0) * (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
MatStm2._Pbubl = MatStm2.compMolFrac[1,1] * exp(MatStm2.comp[1].VP[2] + MatStm2.comp[1].VP[3] / 300.0 + MatStm2.comp[1].VP[4] * 5.703782474656201 + MatStm2.comp[1].VP[5] * 300.0 ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp(MatStm2.comp[2].VP[2] + MatStm2.comp[2].VP[3] / 300.0 + MatStm2.comp[2].VP[4] * 5.703782474656201 + MatStm2.comp[2].VP[5] * 300.0 ^ MatStm2.comp[2].VP[6])
*/
void Flowsheet_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
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
  tmp14 = 300.0;
  tmp15 = data->simulationInfo->realParameter[510];
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
  }tmp21 = 300.0;
  tmp22 = data->simulationInfo->realParameter[516];
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
  data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */ = (data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[506] + DIVISION_SIM(data->simulationInfo->realParameter[507],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[508]) * (5.703782474656201) + (data->simulationInfo->realParameter[509]) * (tmp16))) + (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[512] + DIVISION_SIM(data->simulationInfo->realParameter[513],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[514]) * (5.703782474656201) + (data->simulationInfo->realParameter[515]) * (tmp23)));
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
MatStm2._Pdew = 1.0 / (MatStm2.compMolFrac[1,1] * exp((-MatStm2.comp[1].VP[2]) - MatStm2.comp[1].VP[3] / 300.0 - MatStm2.comp[1].VP[4] * 5.703782474656201 - MatStm2.comp[1].VP[5] * 300.0 ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp((-MatStm2.comp[2].VP[2]) - MatStm2.comp[2].VP[3] / 300.0 - MatStm2.comp[2].VP[4] * 5.703782474656201 - MatStm2.comp[2].VP[5] * 300.0 ^ MatStm2.comp[2].VP[6]))
*/
void Flowsheet_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
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
  tmp29 = data->simulationInfo->realParameter[510];
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
  tmp36 = data->simulationInfo->realParameter[516];
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
  data->localData[0]->realVars[105] /* MatStm2.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[506]) - (DIVISION_SIM(data->simulationInfo->realParameter[507],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[508]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[509]) * (tmp30)))) + (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[512]) - (DIVISION_SIM(data->simulationInfo->realParameter[513],300.0,"300.0",equationIndexes)) - ((data->simulationInfo->realParameter[514]) * (5.703782474656201)) - ((data->simulationInfo->realParameter[515]) * (tmp37)))),"MatStm2.compMolFrac[1,1] * exp((-MatStm2.comp[1].VP[2]) - MatStm2.comp[1].VP[3] / 300.0 - MatStm2.comp[1].VP[4] * 5.703782474656201 - MatStm2.comp[1].VP[5] * 300.0 ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp((-MatStm2.comp[2].VP[2]) - MatStm2.comp[2].VP[3] / 300.0 - MatStm2.comp[2].VP[4] * 5.703782474656201 - MatStm2.comp[2].VP[5] * 300.0 ^ MatStm2.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}
extern void Flowsheet_eqFunction_184(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_183(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_182(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_181(DATA *data, threadData_t *threadData);


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
equation index: 54
indexNonlinear: 0
type: NONLINEAR

vars: {MatStm2._totMolFlo[3], MatStm2._compMolFrac[2,1], MatStm2._compMolFrac[3,1], MatStm2._compMolFrac[3,2], MatStm2._compMolFrac[2,2]}
eqns: {32, 33, 34, 35, 36, 37, 42, 41, 40, 39, 38}
*/
void Flowsheet_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 54 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,54};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 54 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  TRACE_POP
}
extern void Flowsheet_eqFunction_211(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_212(DATA *data, threadData_t *threadData);


/*
equation index: 57
type: ALGORITHM

  (MatStm2.compMolEntr[2,1], MatStm2.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[1].AS, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tb, MatStm2.comp[1].Tc, 300.0, 101321.0, MatStm2.compMolFrac[2,1], MatStm2.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  data->localData[0]->realVars[129] /* MatStm2.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[399], tmp0, tmp1, data->simulationInfo->realParameter[495], data->simulationInfo->realParameter[497], 300.0, 101321.0, data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */, data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[131] /* MatStm2.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_214(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_213(DATA *data, threadData_t *threadData);


/*
equation index: 60
type: ALGORITHM

  (MatStm2.compMolEntr[2,2], MatStm2.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[2].AS, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tb, MatStm2.comp[2].Tc, 300.0, 101321.0, MatStm2.compMolFrac[2,2], MatStm2.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526], (modelica_real)data->simulationInfo->realParameter[527], (modelica_real)data->simulationInfo->realParameter[528]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  data->localData[0]->realVars[130] /* MatStm2.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[400], tmp2, tmp3, data->simulationInfo->realParameter[496], data->simulationInfo->realParameter[498], 300.0, 101321.0, data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */, data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[132] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_226(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_221(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_216(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_227(DATA *data, threadData_t *threadData);


/*
equation index: 65
type: ALGORITHM

  MatStm2.MW[3] := $START.MatStm2.MW[3];
  MatStm2.MW[2] := $START.MatStm2.MW[2];
  MatStm2.MW[1] := $START.MatStm2.MW[1];
  for i in 1:2 loop
    MatStm2.MW[:] := {MatStm2.MW[1] + MatStm2.compMolFrac[1,i] * MatStm2.comp[i].MW, MatStm2.MW[2] + MatStm2.compMolFrac[2,i] * MatStm2.comp[i].MW, MatStm2.MW[3] + MatStm2.compMolFrac[3,i] * MatStm2.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[102] /* MatStm2.MW[3] variable */ = data->modelData->realVarsData[102].attribute /* MatStm2.MW[3] variable */.start;

  data->localData[0]->realVars[101] /* MatStm2.MW[2] variable */ = data->modelData->realVarsData[101].attribute /* MatStm2.MW[2] variable */.start;

  data->localData[0]->realVars[100] /* MatStm2.MW[1] variable */ = data->modelData->realVarsData[100].attribute /* MatStm2.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[100] /* MatStm2.MW[1] variable */ + ((&data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[481])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[101] /* MatStm2.MW[2] variable */ + ((&data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[481])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[102] /* MatStm2.MW[3] variable */ + ((&data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[481])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[100] /* MatStm2.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_232(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_233(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_210(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_222(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_224(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_223(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_217(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_219(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_218(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_228(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_230(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_229(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_236(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_237(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_209(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_208(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_234(DATA *data, threadData_t *threadData);


/*
equation index: 83
type: LINEAR

<var>MatStm2._compMasFrac[2,2]</var>
<var>MatStm2._compMasFrac[3,2]</var>
<var>MatStm2._compMasFrac[2,1]</var>
<var>MatStm2._compMasFrac[1,1]</var>
<var>MatStm2._compMasFrac[3,1]</var>
<row>
  <cell>if 101321.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,1] else if 101321.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,1] else MatStm2.compMasFlo[1,1]</cell>
  <cell>if 101321.0 >= MatStm2.Pbubl then 0.0 else if 101321.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101321.0 >= MatStm2.Pbubl then 0.0 else if 101321.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101321.0 >= MatStm2.Pbubl then 0.0 else if 101321.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101321.0 >= MatStm2.Pbubl then -MatStm2.compMasFrac[1,2] else if 101321.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,2] else -MatStm2.compMasFrac[1,2]</cell>
</row>
<matrix>
  <cell row="0" col="3">
    <residual>-(if 101321.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101321.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101321.0 >= MatStm2.Pbubl then -0.0 else if 101321.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101321.0 >= MatStm2.Pbubl then 0.0 else if 101321.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101321.0 >= MatStm2.Pbubl then 0.0 else if 101321.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101321.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101321.0 >= MatStm2.Pbubl then 0.0 else if 101321.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101321.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101321.0 >= MatStm2.Pbubl then -1.0 else if 101321.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="4">
    <residual>-(if 101321.0 >= MatStm2.Pbubl then 0.0 else if 101321.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101321.0 >= MatStm2.Pbubl then 0.0 else if 101321.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101321.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101321.0 >= MatStm2.Pbubl then 0.0 else if 101321.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101321.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101321.0 >= MatStm2.Pbubl then 0.0 else if 101321.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 1.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[118] /* MatStm2.compMasFrac[2,2] variable */,data->localData[1]->realVars[120] /* MatStm2.compMasFrac[3,2] variable */,data->localData[1]->realVars[117] /* MatStm2.compMasFrac[2,1] variable */,data->localData[1]->realVars[115] /* MatStm2.compMasFrac[1,1] variable */,data->localData[1]->realVars[119] /* MatStm2.compMasFrac[3,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 83 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,83};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 83 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[118] /* MatStm2.compMasFrac[2,2] variable */ = aux_x[0];
  data->localData[0]->realVars[120] /* MatStm2.compMasFrac[3,2] variable */ = aux_x[1];
  data->localData[0]->realVars[117] /* MatStm2.compMasFrac[2,1] variable */ = aux_x[2];
  data->localData[0]->realVars[115] /* MatStm2.compMasFrac[1,1] variable */ = aux_x[3];
  data->localData[0]->realVars[119] /* MatStm2.compMasFrac[3,1] variable */ = aux_x[4];
  TRACE_POP
}
extern void Flowsheet_eqFunction_235(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_220(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_239(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_240(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_241(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_242(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_243(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_244(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_245(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_246(DATA *data, threadData_t *threadData);


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
void Flowsheet_eqFunction_112(DATA*, threadData_t*);
void Flowsheet_eqFunction_118(DATA*, threadData_t*);
void Flowsheet_eqFunction_117(DATA*, threadData_t*);
void Flowsheet_eqFunction_116(DATA*, threadData_t*);
void Flowsheet_eqFunction_115(DATA*, threadData_t*);
void Flowsheet_eqFunction_114(DATA*, threadData_t*);
void Flowsheet_eqFunction_113(DATA*, threadData_t*);
/*
equation index: 119
indexNonlinear: 1
type: NONLINEAR

vars: {MatStm1._totMolFlo[3], MatStm1._compMolFrac[3,1], MatStm1._compMolFrac[3,2], MatStm1._compMolFrac[2,2], Heater1._outT, MatStm1._compMolFrac[2,1]}
eqns: {94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 118, 117, 116, 115, 114, 113}
*/
void Flowsheet_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 119 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[55] /* MatStm1.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[53] /* MatStm1.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[8] /* Heater1.outT variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,119};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 119 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[55] /* MatStm1.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[53] /* MatStm1.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[8] /* Heater1.outT variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  TRACE_POP
}
extern void Flowsheet_eqFunction_279(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_278(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_280(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_281(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_282(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_283(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_284(DATA *data, threadData_t *threadData);


/*
equation index: 127
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, Heater1.outT, Heater1.outP, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362], (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262], (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264]);
  data->localData[0]->realVars[40] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[241], tmp0, tmp1, data->simulationInfo->realParameter[337], data->simulationInfo->realParameter[339], data->localData[0]->realVars[8] /* Heater1.outT variable */, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[42] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_285(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_288(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_286(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_289(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_290(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_305(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_291(DATA *data, threadData_t *threadData);


/*
equation index: 135
type: ALGORITHM

  (MatStm1.compMolEntr[2,2], MatStm1.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[2].AS, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tb, MatStm1.comp[2].Tc, Heater1.outT, Heater1.outP, MatStm1.compMolFrac[2,2], MatStm1.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368], (modelica_real)data->simulationInfo->realParameter[369], (modelica_real)data->simulationInfo->realParameter[370]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270]);
  data->localData[0]->realVars[41] /* MatStm1.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[242], tmp2, tmp3, data->simulationInfo->realParameter[338], data->simulationInfo->realParameter[340], data->localData[0]->realVars[8] /* Heater1.outT variable */, data->localData[0]->realVars[7] /* Heater1.outP variable */, data->localData[0]->realVars[53] /* MatStm1.compMolFrac[2,2] variable */, data->localData[0]->realVars[55] /* MatStm1.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[43] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_294(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_293(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_295(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_306(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_296(DATA *data, threadData_t *threadData);


/*
equation index: 141
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:2 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[15] /* MatStm1.MW[3] variable */ = data->modelData->realVarsData[15].attribute /* MatStm1.MW[3] variable */.start;

  data->localData[0]->realVars[14] /* MatStm1.MW[2] variable */ = data->modelData->realVarsData[14].attribute /* MatStm1.MW[2] variable */.start;

  data->localData[0]->realVars[13] /* MatStm1.MW[1] variable */ = data->modelData->realVarsData[13].attribute /* MatStm1.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[13] /* MatStm1.MW[1] variable */ + ((&data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[323])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[14] /* MatStm1.MW[2] variable */ + ((&data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[323])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[15] /* MatStm1.MW[3] variable */ + ((&data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[323])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[13] /* MatStm1.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_299(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_301(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_302(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_303(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_298(DATA *data, threadData_t *threadData);


/*
equation index: 147
type: LINEAR

<var>MatStm1._compMasFrac[3,2]</var>
<var>MatStm1._compMasFrac[2,1]</var>
<var>MatStm1._compMasFrac[2,2]</var>
<var>MatStm1._compMasFrac[3,1]</var>
<var>MatStm1._compMasFrac[1,1]</var>
<row>
  <cell>if Heater1.outP >= MatStm1.Pbubl then MatStm1.compMasFlo[1,1] else if Heater1.outP >= MatStm1.Pdew then MatStm1.compMasFlo[3,1] else MatStm1.compMasFlo[1,1]</cell>
  <cell>if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then MatStm1.compMasFlo[1,1] else 0.0</cell>
  <cell>if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then MatStm1.compMasFlo[2,2] else 0.0</cell>
  <cell>if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then MatStm1.compMasFlo[2,1] else 0.0</cell>
  <cell>if Heater1.outP >= MatStm1.Pbubl then -MatStm1.compMasFrac[1,2] else if Heater1.outP >= MatStm1.Pdew then MatStm1.compMasFlo[3,2] else -MatStm1.compMasFrac[1,2]</cell>
</row>
<matrix>
  <cell row="0" col="3">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then -0.0 else if Heater1.outP >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if Heater1.outP >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="1" col="1">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="4">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then -1.0 else if Heater1.outP >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="4" col="2">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[31] /* MatStm1.compMasFrac[3,2] variable */,data->localData[1]->realVars[28] /* MatStm1.compMasFrac[2,1] variable */,data->localData[1]->realVars[29] /* MatStm1.compMasFrac[2,2] variable */,data->localData[1]->realVars[30] /* MatStm1.compMasFrac[3,1] variable */,data->localData[1]->realVars[26] /* MatStm1.compMasFrac[1,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 147 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,147};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 147 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[31] /* MatStm1.compMasFrac[3,2] variable */ = aux_x[0];
  data->localData[0]->realVars[28] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[1];
  data->localData[0]->realVars[29] /* MatStm1.compMasFrac[2,2] variable */ = aux_x[2];
  data->localData[0]->realVars[30] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[3];
  data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[4];
  TRACE_POP
}
extern void Flowsheet_eqFunction_300(DATA *data, threadData_t *threadData);


/*
equation index: 149
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->localData[0]->realVars[64] /* MatStm1.gammaBubl[1] variable */ = 1.0;
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
  data->localData[0]->realVars[66] /* MatStm1.gammaDew[1] variable */ = 1.0;
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
  data->localData[0]->realVars[70] /* MatStm1.liqfugcoeff_bubl[1] variable */ = 1.0;
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
  data->localData[0]->realVars[96] /* MatStm1.vapfugcoeff_dew[1] variable */ = 1.0;
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
  data->localData[0]->realVars[65] /* MatStm1.gammaBubl[2] variable */ = 1.0;
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
  data->localData[0]->realVars[67] /* MatStm1.gammaDew[2] variable */ = 1.0;
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
  data->localData[0]->realVars[71] /* MatStm1.liqfugcoeff_bubl[2] variable */ = 1.0;
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
  data->localData[0]->realVars[97] /* MatStm1.vapfugcoeff_dew[2] variable */ = 1.0;
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
  data->localData[0]->realVars[88] /* MatStm1.resMolSpHeat[2] variable */ = 0.0;
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
  data->localData[0]->realVars[89] /* MatStm1.resMolSpHeat[3] variable */ = 0.0;
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
  data->localData[0]->realVars[82] /* MatStm1.resMolEnth[2] variable */ = 0.0;
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
  data->localData[0]->realVars[83] /* MatStm1.resMolEnth[3] variable */ = 0.0;
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
  data->localData[0]->realVars[85] /* MatStm1.resMolEntr[2] variable */ = 0.0;
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
  data->localData[0]->realVars[86] /* MatStm1.resMolEntr[3] variable */ = 0.0;
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
  data->localData[0]->realVars[153] /* MatStm2.gammaBubl[1] variable */ = 1.0;
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
  data->localData[0]->realVars[155] /* MatStm2.gammaDew[1] variable */ = 1.0;
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
  data->localData[0]->realVars[159] /* MatStm2.liqfugcoeff_bubl[1] variable */ = 1.0;
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
  data->localData[0]->realVars[186] /* MatStm2.vapfugcoeff_dew[1] variable */ = 1.0;
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
  data->localData[0]->realVars[154] /* MatStm2.gammaBubl[2] variable */ = 1.0;
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
  data->localData[0]->realVars[156] /* MatStm2.gammaDew[2] variable */ = 1.0;
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
  data->localData[0]->realVars[160] /* MatStm2.liqfugcoeff_bubl[2] variable */ = 1.0;
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
  data->localData[0]->realVars[187] /* MatStm2.vapfugcoeff_dew[2] variable */ = 1.0;
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
  data->localData[0]->realVars[177] /* MatStm2.resMolSpHeat[2] variable */ = 0.0;
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
  data->localData[0]->realVars[178] /* MatStm2.resMolSpHeat[3] variable */ = 0.0;
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
  data->localData[0]->realVars[171] /* MatStm2.resMolEnth[2] variable */ = 0.0;
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
  data->localData[0]->realVars[172] /* MatStm2.resMolEnth[3] variable */ = 0.0;
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
  data->localData[0]->realVars[174] /* MatStm2.resMolEntr[2] variable */ = 0.0;
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
  data->localData[0]->realVars[175] /* MatStm2.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
MatStm2._P = 101321.0
*/
void Flowsheet_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->localData[0]->realVars[103] /* MatStm2.P variable */ = 101321.0;
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
MatStm2._T = 300.0
*/
void Flowsheet_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->localData[0]->realVars[108] /* MatStm2.T variable */ = 300.0;
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[1] = 100.0
*/
void Flowsheet_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->localData[0]->realVars[182] /* MatStm2.totMolFlo[1] variable */ = 100.0;
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
Heater1._heatAdd = 2000000.0
*/
void Flowsheet_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->localData[0]->realVars[5] /* Heater1.heatAdd variable */ = 2000000.0;
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
  Flowsheet_eqFunction_184(data, threadData);
  Flowsheet_eqFunction_183(data, threadData);
  Flowsheet_eqFunction_182(data, threadData);
  Flowsheet_eqFunction_181(data, threadData);
  Flowsheet_eqFunction_54(data, threadData);
  Flowsheet_eqFunction_211(data, threadData);
  Flowsheet_eqFunction_212(data, threadData);
  Flowsheet_eqFunction_57(data, threadData);
  Flowsheet_eqFunction_214(data, threadData);
  Flowsheet_eqFunction_213(data, threadData);
  Flowsheet_eqFunction_60(data, threadData);
  Flowsheet_eqFunction_226(data, threadData);
  Flowsheet_eqFunction_221(data, threadData);
  Flowsheet_eqFunction_216(data, threadData);
  Flowsheet_eqFunction_227(data, threadData);
  Flowsheet_eqFunction_65(data, threadData);
  Flowsheet_eqFunction_232(data, threadData);
  Flowsheet_eqFunction_233(data, threadData);
  Flowsheet_eqFunction_210(data, threadData);
  Flowsheet_eqFunction_222(data, threadData);
  Flowsheet_eqFunction_224(data, threadData);
  Flowsheet_eqFunction_223(data, threadData);
  Flowsheet_eqFunction_217(data, threadData);
  Flowsheet_eqFunction_219(data, threadData);
  Flowsheet_eqFunction_218(data, threadData);
  Flowsheet_eqFunction_228(data, threadData);
  Flowsheet_eqFunction_230(data, threadData);
  Flowsheet_eqFunction_229(data, threadData);
  Flowsheet_eqFunction_236(data, threadData);
  Flowsheet_eqFunction_237(data, threadData);
  Flowsheet_eqFunction_209(data, threadData);
  Flowsheet_eqFunction_208(data, threadData);
  Flowsheet_eqFunction_234(data, threadData);
  Flowsheet_eqFunction_83(data, threadData);
  Flowsheet_eqFunction_235(data, threadData);
  Flowsheet_eqFunction_220(data, threadData);
  Flowsheet_eqFunction_239(data, threadData);
  Flowsheet_eqFunction_240(data, threadData);
  Flowsheet_eqFunction_241(data, threadData);
  Flowsheet_eqFunction_242(data, threadData);
  Flowsheet_eqFunction_243(data, threadData);
  Flowsheet_eqFunction_244(data, threadData);
  Flowsheet_eqFunction_245(data, threadData);
  Flowsheet_eqFunction_246(data, threadData);
  Flowsheet_eqFunction_119(data, threadData);
  Flowsheet_eqFunction_279(data, threadData);
  Flowsheet_eqFunction_278(data, threadData);
  Flowsheet_eqFunction_280(data, threadData);
  Flowsheet_eqFunction_281(data, threadData);
  Flowsheet_eqFunction_282(data, threadData);
  Flowsheet_eqFunction_283(data, threadData);
  Flowsheet_eqFunction_284(data, threadData);
  Flowsheet_eqFunction_127(data, threadData);
  Flowsheet_eqFunction_285(data, threadData);
  Flowsheet_eqFunction_288(data, threadData);
  Flowsheet_eqFunction_286(data, threadData);
  Flowsheet_eqFunction_289(data, threadData);
  Flowsheet_eqFunction_290(data, threadData);
  Flowsheet_eqFunction_305(data, threadData);
  Flowsheet_eqFunction_291(data, threadData);
  Flowsheet_eqFunction_135(data, threadData);
  Flowsheet_eqFunction_294(data, threadData);
  Flowsheet_eqFunction_293(data, threadData);
  Flowsheet_eqFunction_295(data, threadData);
  Flowsheet_eqFunction_306(data, threadData);
  Flowsheet_eqFunction_296(data, threadData);
  Flowsheet_eqFunction_141(data, threadData);
  Flowsheet_eqFunction_299(data, threadData);
  Flowsheet_eqFunction_301(data, threadData);
  Flowsheet_eqFunction_302(data, threadData);
  Flowsheet_eqFunction_303(data, threadData);
  Flowsheet_eqFunction_298(data, threadData);
  Flowsheet_eqFunction_147(data, threadData);
  Flowsheet_eqFunction_300(data, threadData);
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

