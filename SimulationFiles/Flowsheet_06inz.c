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
  data->localData[0]->realVars[36] /* MatStm1.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[1] = 0.0
*/
void Flowsheet_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[57] /* MatStm1.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[1] = 0.0
*/
void Flowsheet_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[51] /* MatStm1.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[1] = 0.0
*/
void Flowsheet_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[54] /* MatStm1.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
MatStm2._gamma[1] = 1.0
*/
void Flowsheet_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[97] /* MatStm2.gamma[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[1] = 0.0
*/
void Flowsheet_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[118] /* MatStm2.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[1] = 0.0
*/
void Flowsheet_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[112] /* MatStm2.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[1] = 0.0
*/
void Flowsheet_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[115] /* MatStm2.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
Heater1._outP = 101324.0 - Heater1.pressDrop
*/
void Flowsheet_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[4] /* Heater1.outP variable */ = 101324.0 - data->simulationInfo->realParameter[159];
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
MatStm2._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[1].VP[1], MatStm2.comp[1].VP[2], MatStm2.comp[1].VP[3], MatStm2.comp[1].VP[4], MatStm2.comp[1].VP[5], MatStm2.comp[1].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[293], (modelica_real)data->simulationInfo->realParameter[294], (modelica_real)data->simulationInfo->realParameter[295], (modelica_real)data->simulationInfo->realParameter[296], (modelica_real)data->simulationInfo->realParameter[297], (modelica_real)data->simulationInfo->realParameter[298]);
  data->localData[0]->realVars[74] /* MatStm2.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, 300.0);
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  real_array tmp1;
  real_array tmp2;
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[299], (modelica_real)data->simulationInfo->realParameter[300], (modelica_real)data->simulationInfo->realParameter[301], (modelica_real)data->simulationInfo->realParameter[302], (modelica_real)data->simulationInfo->realParameter[303], (modelica_real)data->simulationInfo->realParameter[304]);
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[249], (modelica_real)data->simulationInfo->realParameter[250], (modelica_real)data->simulationInfo->realParameter[251], (modelica_real)data->simulationInfo->realParameter[252], (modelica_real)data->simulationInfo->realParameter[253], (modelica_real)data->simulationInfo->realParameter[254]);
  data->localData[0]->realVars[84] /* MatStm2.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[284], tmp1, tmp2, data->simulationInfo->realParameter[289], 300.0);
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  real_array tmp3;
  real_array tmp4;
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[299], (modelica_real)data->simulationInfo->realParameter[300], (modelica_real)data->simulationInfo->realParameter[301], (modelica_real)data->simulationInfo->realParameter[302], (modelica_real)data->simulationInfo->realParameter[303], (modelica_real)data->simulationInfo->realParameter[304]);
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[249], (modelica_real)data->simulationInfo->realParameter[250], (modelica_real)data->simulationInfo->realParameter[251], (modelica_real)data->simulationInfo->realParameter[252], (modelica_real)data->simulationInfo->realParameter[253], (modelica_real)data->simulationInfo->realParameter[254]);
  data->localData[0]->realVars[83] /* MatStm2.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[284], tmp3, tmp4, data->simulationInfo->realParameter[289], 300.0);
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  real_array tmp5;
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[299], (modelica_real)data->simulationInfo->realParameter[300], (modelica_real)data->simulationInfo->realParameter[301], (modelica_real)data->simulationInfo->realParameter[302], (modelica_real)data->simulationInfo->realParameter[303], (modelica_real)data->simulationInfo->realParameter[304]);
  data->localData[0]->realVars[96] /* MatStm2.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp5, 300.0);
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm2.comp[1].LiqCp[1], MatStm2.comp[1].LiqCp[2], MatStm2.comp[1].LiqCp[3], MatStm2.comp[1].LiqCp[4], MatStm2.comp[1].LiqCp[5], MatStm2.comp[1].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  real_array tmp6;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[257], (modelica_real)data->simulationInfo->realParameter[258], (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262]);
  data->localData[0]->realVars[95] /* MatStm2.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp6, 300.0);
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
MatStm2._compMolFrac[1,1] = 1.0
*/
void Flowsheet_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[91] /* MatStm2.compMolFrac[1,1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[1,1] = 100.0 * MatStm2.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[88] /* MatStm2.compMolFlo[1,1] variable */ = (100.0) * (data->localData[0]->realVars[91] /* MatStm2.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
MatStm2._Pbubl = MatStm2.compMolFrac[1,1] * exp(MatStm2.comp[1].VP[2] + MatStm2.comp[1].VP[3] / 300.0 + MatStm2.comp[1].VP[4] * 5.703782474656201 + MatStm2.comp[1].VP[5] * 300.0 ^ MatStm2.comp[1].VP[6])
*/
void Flowsheet_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  tmp7 = 300.0;
  tmp8 = data->simulationInfo->realParameter[298];
  if(tmp7 < 0.0 && tmp8 != 0.0)
  {
    tmp10 = modf(tmp8, &tmp11);
    
    if(tmp10 > 0.5)
    {
      tmp10 -= 1.0;
      tmp11 += 1.0;
    }
    else if(tmp10 < -0.5)
    {
      tmp10 += 1.0;
      tmp11 -= 1.0;
    }
    
    if(fabs(tmp10) < 1e-10)
      tmp9 = pow(tmp7, tmp11);
    else
    {
      tmp13 = modf(1.0/tmp8, &tmp12);
      if(tmp13 > 0.5)
      {
        tmp13 -= 1.0;
        tmp12 += 1.0;
      }
      else if(tmp13 < -0.5)
      {
        tmp13 += 1.0;
        tmp12 -= 1.0;
      }
      if(fabs(tmp13) < 1e-10 && ((unsigned long)tmp12 & 1))
      {
        tmp9 = -pow(-tmp7, tmp10)*pow(tmp7, tmp11);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp7, tmp8);
      }
    }
  }
  else
  {
    tmp9 = pow(tmp7, tmp8);
  }
  if(isnan(tmp9) || isinf(tmp9))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp7, tmp8);
  }
  data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */ = (data->localData[0]->realVars[91] /* MatStm2.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[294] + DIVISION_SIM(data->simulationInfo->realParameter[295],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[296]) * (5.703782474656201) + (data->simulationInfo->realParameter[297]) * (tmp9)));
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
MatStm2._Pdew = exp(MatStm2.comp[1].VP[2] + MatStm2.comp[1].VP[3] / 300.0 + MatStm2.comp[1].VP[4] * 5.703782474656201 + MatStm2.comp[1].VP[5] * 300.0 ^ MatStm2.comp[1].VP[6]) / MatStm2.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  tmp14 = 300.0;
  tmp15 = data->simulationInfo->realParameter[298];
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
  }
  data->localData[0]->realVars[73] /* MatStm2.Pdew variable */ = DIVISION_SIM(exp(data->simulationInfo->realParameter[294] + DIVISION_SIM(data->simulationInfo->realParameter[295],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[296]) * (5.703782474656201) + (data->simulationInfo->realParameter[297]) * (tmp16)),data->localData[0]->realVars[91] /* MatStm2.compMolFrac[1,1] variable */,"MatStm2.compMolFrac[1,1]",equationIndexes);
  TRACE_POP
}
extern void Flowsheet_eqFunction_129(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_126(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_130(DATA *data, threadData_t *threadData);


/*
equation index: 22
type: ALGORITHM

  MatStm2.MW[3] := $START.MatStm2.MW[3];
  MatStm2.MW[2] := $START.MatStm2.MW[2];
  MatStm2.MW[1] := $START.MatStm2.MW[1];
  for i in 1:1 loop
    MatStm2.MW[:] := {MatStm2.MW[1] + MatStm2.compMolFrac[1,i] * MatStm2.comp[i].MW, MatStm2.MW[2] + MatStm2.compMolFrac[2,i] * MatStm2.comp[i].MW, MatStm2.MW[3] + MatStm2.compMolFrac[3,i] * MatStm2.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  real_array tmp21;
  index_spec_t tmp22;
  real_array tmp23;
  modelica_integer tmp24;
  modelica_integer tmp25;
  modelica_integer tmp26;
  data->localData[0]->realVars[70] /* MatStm2.MW[3] variable */ = data->modelData->realVarsData[70].attribute /* MatStm2.MW[3] variable */.start;

  data->localData[0]->realVars[69] /* MatStm2.MW[2] variable */ = data->modelData->realVarsData[69].attribute /* MatStm2.MW[2] variable */.start;

  data->localData[0]->realVars[68] /* MatStm2.MW[1] variable */ = data->modelData->realVarsData[68].attribute /* MatStm2.MW[1] variable */.start;

  tmp24 = ((modelica_integer) 1); tmp25 = 1; tmp26 = ((modelica_integer) 1);
  if(!(((tmp25 > 0) && (tmp24 > tmp26)) || ((tmp25 < 0) && (tmp24 < tmp26))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp24, tmp26); $Pi += tmp25)
    {
      array_alloc_scalar_real_array(&tmp21, 3, (modelica_real)data->localData[0]->realVars[68] /* MatStm2.MW[1] variable */ + ((&data->localData[0]->realVars[91] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 1, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[281])[calc_base_index_dims_subs(1, 1, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[69] /* MatStm2.MW[2] variable */ + ((&data->localData[0]->realVars[91] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 1, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[281])[calc_base_index_dims_subs(1, 1, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[70] /* MatStm2.MW[3] variable */ + ((&data->localData[0]->realVars[91] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 1, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[281])[calc_base_index_dims_subs(1, 1, (modelica_integer)$Pi)]));
      create_index_spec(&tmp22, 1, (1), (int*)0, 'W');
      real_array_create(&tmp23, (modelica_real*)&data->localData[0]->realVars[68] /* MatStm2.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp21, &tmp23, &tmp22);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_131(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_132(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_127(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_128(DATA *data, threadData_t *threadData);


/*
equation index: 27
type: ALGORITHM

  (MatStm2.compMolEntr[2,1], MatStm2.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[1].AS, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tb, MatStm2.comp[1].Tc, 300.0, 101324.0, MatStm2.compMolFrac[2,1], MatStm2.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  real_array tmp27;
  real_array tmp28;
  array_alloc_scalar_real_array(&tmp27, 6, (modelica_real)data->simulationInfo->realParameter[299], (modelica_real)data->simulationInfo->realParameter[300], (modelica_real)data->simulationInfo->realParameter[301], (modelica_real)data->simulationInfo->realParameter[302], (modelica_real)data->simulationInfo->realParameter[303], (modelica_real)data->simulationInfo->realParameter[304]);
  array_alloc_scalar_real_array(&tmp28, 6, (modelica_real)data->simulationInfo->realParameter[249], (modelica_real)data->simulationInfo->realParameter[250], (modelica_real)data->simulationInfo->realParameter[251], (modelica_real)data->simulationInfo->realParameter[252], (modelica_real)data->simulationInfo->realParameter[253], (modelica_real)data->simulationInfo->realParameter[254]);
  data->localData[0]->realVars[86] /* MatStm2.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[240], tmp27, tmp28, data->simulationInfo->realParameter[288], data->simulationInfo->realParameter[289], 300.0, 101324.0, data->localData[0]->realVars[92] /* MatStm2.compMolFrac[2,1] variable */, data->localData[0]->realVars[93] /* MatStm2.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[87] /* MatStm2.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_137(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_136(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_134(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_125(DATA *data, threadData_t *threadData);


/*
equation index: 42
type: LINEAR

<var>MatStm2._totMolFlo[2]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[125] /* MatStm2.totMolFlo[2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 42 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,42};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 42 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[125] /* MatStm2.totMolFlo[2] variable */ = aux_x[0];
  TRACE_POP
}
extern void Flowsheet_eqFunction_161(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_162(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_149(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_150(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_151(DATA *data, threadData_t *threadData);


/*
equation index: 48
type: LINEAR

<var>MatStm2._compMasFrac[3,1]</var>
<var>MatStm2._compMasFrac[1,1]</var>
<var>MatStm2._compMasFrac[2,1]</var>
<row>
  <cell>if 101324.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,1] else if 101324.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,1] else MatStm2.compMasFlo[1,1]</cell>
  <cell>if 101324.0 >= MatStm2.Pbubl then 0.0 else if 101324.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101324.0 >= MatStm2.Pbubl then 0.0 else if 101324.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,1] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="1">
    <residual>-(if 101324.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101324.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="0" col="2">
    <residual>-(if 101324.0 >= MatStm2.Pbubl then -0.0 else if 101324.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="1" col="0">
    <residual>-(if 101324.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="1">
    <residual>-(if 101324.0 >= MatStm2.Pbubl then 0.0 else if 101324.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101324.0 >= MatStm2.Pbubl then 0.0 else if 101324.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101324.0 >= MatStm2.Pbubl then 0.0 else if 101324.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101324.0 >= MatStm2.Pbubl then -1.0 else if 101324.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101324.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  /* Linear equation system */
  int retValue;
  double aux_x[3] = { data->localData[1]->realVars[81] /* MatStm2.compMasFrac[3,1] variable */,data->localData[1]->realVars[79] /* MatStm2.compMasFrac[1,1] variable */,data->localData[1]->realVars[80] /* MatStm2.compMasFrac[2,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 48 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,48};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 48 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[81] /* MatStm2.compMasFrac[3,1] variable */ = aux_x[0];
  data->localData[0]->realVars[79] /* MatStm2.compMasFrac[1,1] variable */ = aux_x[1];
  data->localData[0]->realVars[80] /* MatStm2.compMasFrac[2,1] variable */ = aux_x[2];
  TRACE_POP
}
extern void Flowsheet_eqFunction_152(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_153(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_157(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_158(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_154(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_155(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_156(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_159(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_160(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_164(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_165(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_166(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_167(DATA *data, threadData_t *threadData);


void Flowsheet_eqFunction_62(DATA*, threadData_t*);
void Flowsheet_eqFunction_63(DATA*, threadData_t*);
void Flowsheet_eqFunction_64(DATA*, threadData_t*);
void Flowsheet_eqFunction_65(DATA*, threadData_t*);
void Flowsheet_eqFunction_66(DATA*, threadData_t*);
void Flowsheet_eqFunction_67(DATA*, threadData_t*);
void Flowsheet_eqFunction_68(DATA*, threadData_t*);
void Flowsheet_eqFunction_69(DATA*, threadData_t*);
void Flowsheet_eqFunction_70(DATA*, threadData_t*);
void Flowsheet_eqFunction_71(DATA*, threadData_t*);
void Flowsheet_eqFunction_72(DATA*, threadData_t*);
void Flowsheet_eqFunction_73(DATA*, threadData_t*);
void Flowsheet_eqFunction_74(DATA*, threadData_t*);
void Flowsheet_eqFunction_75(DATA*, threadData_t*);
void Flowsheet_eqFunction_76(DATA*, threadData_t*);
void Flowsheet_eqFunction_78(DATA*, threadData_t*);
void Flowsheet_eqFunction_77(DATA*, threadData_t*);
/*
equation index: 79
indexNonlinear: 0
type: NONLINEAR

vars: {MatStm1._liqPhasMolFrac, Heater1._outT}
eqns: {62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 78, 77}
*/
void Flowsheet_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 79 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[40] /* MatStm1.liqPhasMolFrac variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[5] /* Heater1.outT variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,79};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 79 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[40] /* MatStm1.liqPhasMolFrac variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[5] /* Heater1.outT variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  TRACE_POP
}
extern void Flowsheet_eqFunction_190(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_192(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_191(DATA *data, threadData_t *threadData);


/*
equation index: 83
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, Heater1.outT, Heater1.outP, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[220], (modelica_real)data->simulationInfo->realParameter[221], (modelica_real)data->simulationInfo->realParameter[222], (modelica_real)data->simulationInfo->realParameter[223], (modelica_real)data->simulationInfo->realParameter[224], (modelica_real)data->simulationInfo->realParameter[225]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[170], (modelica_real)data->simulationInfo->realParameter[171], (modelica_real)data->simulationInfo->realParameter[172], (modelica_real)data->simulationInfo->realParameter[173], (modelica_real)data->simulationInfo->realParameter[174], (modelica_real)data->simulationInfo->realParameter[175]);
  data->localData[0]->realVars[25] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[161], tmp0, tmp1, data->simulationInfo->realParameter[209], data->simulationInfo->realParameter[210], data->localData[0]->realVars[5] /* Heater1.outT variable */, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[31] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[32] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[26] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_193(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_197(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_188(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_189(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_194(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_207(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_196(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_198(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_208(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_199(DATA *data, threadData_t *threadData);


/*
equation index: 94
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:1 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  real_array tmp2;
  index_spec_t tmp3;
  real_array tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  data->localData[0]->realVars[11] /* MatStm1.MW[3] variable */ = data->modelData->realVarsData[11].attribute /* MatStm1.MW[3] variable */.start;

  data->localData[0]->realVars[10] /* MatStm1.MW[2] variable */ = data->modelData->realVarsData[10].attribute /* MatStm1.MW[2] variable */.start;

  data->localData[0]->realVars[9] /* MatStm1.MW[1] variable */ = data->modelData->realVarsData[9].attribute /* MatStm1.MW[1] variable */.start;

  tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = ((modelica_integer) 1);
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp5, tmp7); $Pi += tmp6)
    {
      array_alloc_scalar_real_array(&tmp2, 3, (modelica_real)data->localData[0]->realVars[9] /* MatStm1.MW[1] variable */ + ((&data->localData[0]->realVars[30] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 1, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[202])[calc_base_index_dims_subs(1, 1, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[10] /* MatStm1.MW[2] variable */ + ((&data->localData[0]->realVars[30] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 1, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[202])[calc_base_index_dims_subs(1, 1, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[11] /* MatStm1.MW[3] variable */ + ((&data->localData[0]->realVars[30] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 1, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[202])[calc_base_index_dims_subs(1, 1, (modelica_integer)$Pi)]));
      create_index_spec(&tmp3, 1, (1), (int*)0, 'W');
      real_array_create(&tmp4, (modelica_real*)&data->localData[0]->realVars[9] /* MatStm1.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp2, &tmp4, &tmp3);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_204(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_201(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_202(DATA *data, threadData_t *threadData);


/*
equation index: 98
type: LINEAR

<var>MatStm1._compMasFrac[2,1]</var>
<var>MatStm1._compMasFrac[1,1]</var>
<var>MatStm1._compMasFrac[3,1]</var>
<row>
  <cell>if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then MatStm1.compMasFlo[1,1] else 0.0</cell>
  <cell>if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then MatStm1.compMasFlo[3,1] else 0.0</cell>
  <cell>if Heater1.outP >= MatStm1.Pbubl then MatStm1.compMasFlo[1,1] else if Heater1.outP >= MatStm1.Pdew then MatStm1.compMasFlo[2,1] else MatStm1.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="0" col="1">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="0" col="2">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="0">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="1">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then -1.0 else if Heater1.outP >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then -0.0 else if Heater1.outP >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if Heater1.outP >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  /* Linear equation system */
  int retValue;
  double aux_x[3] = { data->localData[1]->realVars[19] /* MatStm1.compMasFrac[2,1] variable */,data->localData[1]->realVars[18] /* MatStm1.compMasFrac[1,1] variable */,data->localData[1]->realVars[20] /* MatStm1.compMasFrac[3,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 98 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,98};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 98 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[19] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[0];
  data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[1];
  data->localData[0]->realVars[20] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[2];
  TRACE_POP
}
extern void Flowsheet_eqFunction_205(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_203(DATA *data, threadData_t *threadData);


/*
equation index: 101
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  data->localData[0]->realVars[37] /* MatStm1.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 102
type: SIMPLE_ASSIGN
MatStm1._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  data->localData[0]->realVars[38] /* MatStm1.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 103
type: SIMPLE_ASSIGN
MatStm1._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  data->localData[0]->realVars[41] /* MatStm1.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 104
type: SIMPLE_ASSIGN
MatStm1._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  data->localData[0]->realVars[66] /* MatStm1.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 105
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->localData[0]->realVars[58] /* MatStm1.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 106
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  data->localData[0]->realVars[59] /* MatStm1.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 107
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->localData[0]->realVars[52] /* MatStm1.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 108
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  data->localData[0]->realVars[53] /* MatStm1.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 109
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  data->localData[0]->realVars[55] /* MatStm1.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 110
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  data->localData[0]->realVars[56] /* MatStm1.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 111
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  data->localData[0]->realVars[98] /* MatStm2.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 112
type: SIMPLE_ASSIGN
MatStm2._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  data->localData[0]->realVars[99] /* MatStm2.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 113
type: SIMPLE_ASSIGN
MatStm2._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  data->localData[0]->realVars[102] /* MatStm2.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 114
type: SIMPLE_ASSIGN
MatStm2._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  data->localData[0]->realVars[128] /* MatStm2.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 115
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  data->localData[0]->realVars[119] /* MatStm2.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
MatStm2._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->localData[0]->realVars[120] /* MatStm2.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->localData[0]->realVars[113] /* MatStm2.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
MatStm2._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->localData[0]->realVars[114] /* MatStm2.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->localData[0]->realVars[116] /* MatStm2.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
MatStm2._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->localData[0]->realVars[117] /* MatStm2.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
MatStm2._P = 101324.0
*/
void Flowsheet_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->localData[0]->realVars[71] /* MatStm2.P variable */ = 101324.0;
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
MatStm2._T = 300.0
*/
void Flowsheet_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  data->localData[0]->realVars[75] /* MatStm2.T variable */ = 300.0;
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[1] = 100.0
*/
void Flowsheet_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->localData[0]->realVars[124] /* MatStm2.totMolFlo[1] variable */ = 100.0;
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
Heater1._heatAdd = 200000000.0
*/
void Flowsheet_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->localData[0]->realVars[2] /* Heater1.heatAdd variable */ = 200000000.0;
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
  Flowsheet_eqFunction_129(data, threadData);
  Flowsheet_eqFunction_126(data, threadData);
  Flowsheet_eqFunction_130(data, threadData);
  Flowsheet_eqFunction_22(data, threadData);
  Flowsheet_eqFunction_131(data, threadData);
  Flowsheet_eqFunction_132(data, threadData);
  Flowsheet_eqFunction_127(data, threadData);
  Flowsheet_eqFunction_128(data, threadData);
  Flowsheet_eqFunction_27(data, threadData);
  Flowsheet_eqFunction_137(data, threadData);
  Flowsheet_eqFunction_136(data, threadData);
  Flowsheet_eqFunction_134(data, threadData);
  Flowsheet_eqFunction_125(data, threadData);
  Flowsheet_eqFunction_42(data, threadData);
  Flowsheet_eqFunction_161(data, threadData);
  Flowsheet_eqFunction_162(data, threadData);
  Flowsheet_eqFunction_149(data, threadData);
  Flowsheet_eqFunction_150(data, threadData);
  Flowsheet_eqFunction_151(data, threadData);
  Flowsheet_eqFunction_48(data, threadData);
  Flowsheet_eqFunction_152(data, threadData);
  Flowsheet_eqFunction_153(data, threadData);
  Flowsheet_eqFunction_157(data, threadData);
  Flowsheet_eqFunction_158(data, threadData);
  Flowsheet_eqFunction_154(data, threadData);
  Flowsheet_eqFunction_155(data, threadData);
  Flowsheet_eqFunction_156(data, threadData);
  Flowsheet_eqFunction_159(data, threadData);
  Flowsheet_eqFunction_160(data, threadData);
  Flowsheet_eqFunction_164(data, threadData);
  Flowsheet_eqFunction_165(data, threadData);
  Flowsheet_eqFunction_166(data, threadData);
  Flowsheet_eqFunction_167(data, threadData);
  Flowsheet_eqFunction_79(data, threadData);
  Flowsheet_eqFunction_190(data, threadData);
  Flowsheet_eqFunction_192(data, threadData);
  Flowsheet_eqFunction_191(data, threadData);
  Flowsheet_eqFunction_83(data, threadData);
  Flowsheet_eqFunction_193(data, threadData);
  Flowsheet_eqFunction_197(data, threadData);
  Flowsheet_eqFunction_188(data, threadData);
  Flowsheet_eqFunction_189(data, threadData);
  Flowsheet_eqFunction_194(data, threadData);
  Flowsheet_eqFunction_207(data, threadData);
  Flowsheet_eqFunction_196(data, threadData);
  Flowsheet_eqFunction_198(data, threadData);
  Flowsheet_eqFunction_208(data, threadData);
  Flowsheet_eqFunction_199(data, threadData);
  Flowsheet_eqFunction_94(data, threadData);
  Flowsheet_eqFunction_204(data, threadData);
  Flowsheet_eqFunction_201(data, threadData);
  Flowsheet_eqFunction_202(data, threadData);
  Flowsheet_eqFunction_98(data, threadData);
  Flowsheet_eqFunction_205(data, threadData);
  Flowsheet_eqFunction_203(data, threadData);
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

