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
  data->localData[0]->realVars[30] /* MatStm1.gamma[1] variable */ = 1.0;
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
  data->localData[0]->realVars[51] /* MatStm1.resMolSpHeat[1] variable */ = 0.0;
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
  data->localData[0]->realVars[45] /* MatStm1.resMolEnth[1] variable */ = 0.0;
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
  data->localData[0]->realVars[48] /* MatStm1.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
MatStm1._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[1].VP[1], MatStm1.comp[1].VP[2], MatStm1.comp[1].VP[3], MatStm1.comp[1].VP[4], MatStm1.comp[1].VP[5], MatStm1.comp[1].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[54], (modelica_real)data->simulationInfo->realParameter[55], (modelica_real)data->simulationInfo->realParameter[56], (modelica_real)data->simulationInfo->realParameter[57], (modelica_real)data->simulationInfo->realParameter[58], (modelica_real)data->simulationInfo->realParameter[59]);
  data->localData[0]->realVars[7] /* MatStm1.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, 300.0);
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  real_array tmp1;
  real_array tmp2;
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[60], (modelica_real)data->simulationInfo->realParameter[61], (modelica_real)data->simulationInfo->realParameter[62], (modelica_real)data->simulationInfo->realParameter[63], (modelica_real)data->simulationInfo->realParameter[64], (modelica_real)data->simulationInfo->realParameter[65]);
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[10], (modelica_real)data->simulationInfo->realParameter[11], (modelica_real)data->simulationInfo->realParameter[12], (modelica_real)data->simulationInfo->realParameter[13], (modelica_real)data->simulationInfo->realParameter[14], (modelica_real)data->simulationInfo->realParameter[15]);
  data->localData[0]->realVars[17] /* MatStm1.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[45], tmp1, tmp2, data->simulationInfo->realParameter[50], 300.0);
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  real_array tmp3;
  real_array tmp4;
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[60], (modelica_real)data->simulationInfo->realParameter[61], (modelica_real)data->simulationInfo->realParameter[62], (modelica_real)data->simulationInfo->realParameter[63], (modelica_real)data->simulationInfo->realParameter[64], (modelica_real)data->simulationInfo->realParameter[65]);
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[10], (modelica_real)data->simulationInfo->realParameter[11], (modelica_real)data->simulationInfo->realParameter[12], (modelica_real)data->simulationInfo->realParameter[13], (modelica_real)data->simulationInfo->realParameter[14], (modelica_real)data->simulationInfo->realParameter[15]);
  data->localData[0]->realVars[16] /* MatStm1.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[45], tmp3, tmp4, data->simulationInfo->realParameter[50], 300.0);
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  real_array tmp5;
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[60], (modelica_real)data->simulationInfo->realParameter[61], (modelica_real)data->simulationInfo->realParameter[62], (modelica_real)data->simulationInfo->realParameter[63], (modelica_real)data->simulationInfo->realParameter[64], (modelica_real)data->simulationInfo->realParameter[65]);
  data->localData[0]->realVars[29] /* MatStm1.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp5, 300.0);
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[1].LiqCp[1], MatStm1.comp[1].LiqCp[2], MatStm1.comp[1].LiqCp[3], MatStm1.comp[1].LiqCp[4], MatStm1.comp[1].LiqCp[5], MatStm1.comp[1].LiqCp[6]}, 300.0)
*/
void Flowsheet_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  real_array tmp6;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[18], (modelica_real)data->simulationInfo->realParameter[19], (modelica_real)data->simulationInfo->realParameter[20], (modelica_real)data->simulationInfo->realParameter[21], (modelica_real)data->simulationInfo->realParameter[22], (modelica_real)data->simulationInfo->realParameter[23]);
  data->localData[0]->realVars[28] /* MatStm1.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp6, 300.0);
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,1] = 1.0
*/
void Flowsheet_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[24] /* MatStm1.compMolFrac[1,1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,1] = 100.0 * MatStm1.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[21] /* MatStm1.compMolFlo[1,1] variable */ = (100.0) * (data->localData[0]->realVars[24] /* MatStm1.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
MatStm1._Pbubl = MatStm1.compMolFrac[1,1] * exp(MatStm1.comp[1].VP[2] + MatStm1.comp[1].VP[3] / 300.0 + MatStm1.comp[1].VP[4] * 5.703782474656201 + MatStm1.comp[1].VP[5] * 300.0 ^ MatStm1.comp[1].VP[6])
*/
void Flowsheet_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  tmp7 = 300.0;
  tmp8 = data->simulationInfo->realParameter[59];
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
  data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */ = (data->localData[0]->realVars[24] /* MatStm1.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[55] + DIVISION_SIM(data->simulationInfo->realParameter[56],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[57]) * (5.703782474656201) + (data->simulationInfo->realParameter[58]) * (tmp9)));
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
MatStm1._Pdew = exp(MatStm1.comp[1].VP[2] + MatStm1.comp[1].VP[3] / 300.0 + MatStm1.comp[1].VP[4] * 5.703782474656201 + MatStm1.comp[1].VP[5] * 300.0 ^ MatStm1.comp[1].VP[6]) / MatStm1.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  tmp14 = 300.0;
  tmp15 = data->simulationInfo->realParameter[59];
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
  data->localData[0]->realVars[6] /* MatStm1.Pdew variable */ = DIVISION_SIM(exp(data->simulationInfo->realParameter[55] + DIVISION_SIM(data->simulationInfo->realParameter[56],300.0,"300.0",equationIndexes) + (data->simulationInfo->realParameter[57]) * (5.703782474656201) + (data->simulationInfo->realParameter[58]) * (tmp16)),data->localData[0]->realVars[24] /* MatStm1.compMolFrac[1,1] variable */,"MatStm1.compMolFrac[1,1]",equationIndexes);
  TRACE_POP
}
extern void Flowsheet_eqFunction_69(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_68(DATA *data, threadData_t *threadData);


void Flowsheet_eqFunction_16(DATA*, threadData_t*);
void Flowsheet_eqFunction_17(DATA*, threadData_t*);
void Flowsheet_eqFunction_18(DATA*, threadData_t*);
void Flowsheet_eqFunction_19(DATA*, threadData_t*);
void Flowsheet_eqFunction_20(DATA*, threadData_t*);
void Flowsheet_eqFunction_23(DATA*, threadData_t*);
void Flowsheet_eqFunction_22(DATA*, threadData_t*);
void Flowsheet_eqFunction_21(DATA*, threadData_t*);
/*
equation index: 32
indexNonlinear: 0
type: NONLINEAR

vars: {MatStm1._totMolFlo[3], MatStm1._compMolFrac[2,1], MatStm1._compMolFrac[3,1]}
eqns: {16, 17, 18, 19, 20, 23, 22, 21}
*/
void Flowsheet_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 32 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,32};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 32 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  TRACE_POP
}
extern void Flowsheet_eqFunction_90(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_89(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_88(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_87(DATA *data, threadData_t *threadData);


/*
equation index: 37
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, 300.0, 101325.0, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[60], (modelica_real)data->simulationInfo->realParameter[61], (modelica_real)data->simulationInfo->realParameter[62], (modelica_real)data->simulationInfo->realParameter[63], (modelica_real)data->simulationInfo->realParameter[64], (modelica_real)data->simulationInfo->realParameter[65]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[10], (modelica_real)data->simulationInfo->realParameter[11], (modelica_real)data->simulationInfo->realParameter[12], (modelica_real)data->simulationInfo->realParameter[13], (modelica_real)data->simulationInfo->realParameter[14], (modelica_real)data->simulationInfo->realParameter[15]);
  data->localData[0]->realVars[19] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[1], tmp0, tmp1, data->simulationInfo->realParameter[49], data->simulationInfo->realParameter[50], 300.0, 101325.0, data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[20] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_98(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_94(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_91(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_99(DATA *data, threadData_t *threadData);


/*
equation index: 42
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:1 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  real_array tmp2;
  index_spec_t tmp3;
  real_array tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  data->localData[0]->realVars[3] /* MatStm1.MW[3] variable */ = data->modelData->realVarsData[3].attribute /* MatStm1.MW[3] variable */.start;

  data->localData[0]->realVars[2] /* MatStm1.MW[2] variable */ = data->modelData->realVarsData[2].attribute /* MatStm1.MW[2] variable */.start;

  data->localData[0]->realVars[1] /* MatStm1.MW[1] variable */ = data->modelData->realVarsData[1].attribute /* MatStm1.MW[1] variable */.start;

  tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = ((modelica_integer) 1);
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp5, tmp7); $Pi += tmp6)
    {
      array_alloc_scalar_real_array(&tmp2, 3, (modelica_real)data->localData[0]->realVars[1] /* MatStm1.MW[1] variable */ + ((&data->localData[0]->realVars[24] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 1, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[42])[calc_base_index_dims_subs(1, 1, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[2] /* MatStm1.MW[2] variable */ + ((&data->localData[0]->realVars[24] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 1, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[42])[calc_base_index_dims_subs(1, 1, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[3] /* MatStm1.MW[3] variable */ + ((&data->localData[0]->realVars[24] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 1, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[42])[calc_base_index_dims_subs(1, 1, (modelica_integer)$Pi)]));
      create_index_spec(&tmp3, 1, (1), (int*)0, 'W');
      real_array_create(&tmp4, (modelica_real*)&data->localData[0]->realVars[1] /* MatStm1.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp2, &tmp4, &tmp3);
    }
  }
  TRACE_POP
}
extern void Flowsheet_eqFunction_105(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_104(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_107(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_103(DATA *data, threadData_t *threadData);


/*
equation index: 47
type: LINEAR

<var>MatStm1._compMasFrac[1,1]</var>
<var>MatStm1._compMasFrac[3,1]</var>
<var>MatStm1._compMasFrac[2,1]</var>
<row>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,1] else MatStm1.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,1] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="1" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="1" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  /* Linear equation system */
  int retValue;
  double aux_x[3] = { data->localData[1]->realVars[12] /* MatStm1.compMasFrac[1,1] variable */,data->localData[1]->realVars[14] /* MatStm1.compMasFrac[3,1] variable */,data->localData[1]->realVars[13] /* MatStm1.compMasFrac[2,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 47 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,47};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 47 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[12] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[0];
  data->localData[0]->realVars[14] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[1];
  data->localData[0]->realVars[13] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[2];
  TRACE_POP
}
extern void Flowsheet_eqFunction_106(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_95(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_96(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_92(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_93(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_100(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_101(DATA *data, threadData_t *threadData);


/*
equation index: 55
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[1] = 1.0
*/
void Flowsheet_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[31] /* MatStm1.gammaBubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
MatStm1._gammaDew[1] = 1.0
*/
void Flowsheet_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[32] /* MatStm1.gammaDew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
MatStm1._liqfugcoeff_bubl[1] = 1.0
*/
void Flowsheet_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->localData[0]->realVars[35] /* MatStm1.liqfugcoeff_bubl[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
MatStm1._vapfugcoeff_dew[1] = 1.0
*/
void Flowsheet_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[62] /* MatStm1.vapfugcoeff_dew[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[52] /* MatStm1.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->realVars[53] /* MatStm1.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[46] /* MatStm1.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[47] /* MatStm1.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 63
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[49] /* MatStm1.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 64
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[50] /* MatStm1.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 65
type: SIMPLE_ASSIGN
MatStm1._P = 101325.0
*/
void Flowsheet_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[4] /* MatStm1.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 66
type: SIMPLE_ASSIGN
MatStm1._T = 300.0
*/
void Flowsheet_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[8] /* MatStm1.T variable */ = 300.0;
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[1] = 100.0
*/
void Flowsheet_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[57] /* MatStm1.totMolFlo[1] variable */ = 100.0;
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
  Flowsheet_eqFunction_69(data, threadData);
  Flowsheet_eqFunction_68(data, threadData);
  Flowsheet_eqFunction_32(data, threadData);
  Flowsheet_eqFunction_90(data, threadData);
  Flowsheet_eqFunction_89(data, threadData);
  Flowsheet_eqFunction_88(data, threadData);
  Flowsheet_eqFunction_87(data, threadData);
  Flowsheet_eqFunction_37(data, threadData);
  Flowsheet_eqFunction_98(data, threadData);
  Flowsheet_eqFunction_94(data, threadData);
  Flowsheet_eqFunction_91(data, threadData);
  Flowsheet_eqFunction_99(data, threadData);
  Flowsheet_eqFunction_42(data, threadData);
  Flowsheet_eqFunction_105(data, threadData);
  Flowsheet_eqFunction_104(data, threadData);
  Flowsheet_eqFunction_107(data, threadData);
  Flowsheet_eqFunction_103(data, threadData);
  Flowsheet_eqFunction_47(data, threadData);
  Flowsheet_eqFunction_106(data, threadData);
  Flowsheet_eqFunction_95(data, threadData);
  Flowsheet_eqFunction_96(data, threadData);
  Flowsheet_eqFunction_92(data, threadData);
  Flowsheet_eqFunction_93(data, threadData);
  Flowsheet_eqFunction_100(data, threadData);
  Flowsheet_eqFunction_101(data, threadData);
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

