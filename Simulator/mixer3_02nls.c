/* Non Linear Systems */
#include "mixer3_model.h"
#include "mixer3_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 387
type: SIMPLE_ASSIGN
MatStm8._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm8.comp[1].SH, {MatStm8.comp[1].VapCp[1], MatStm8.comp[1].VapCp[2], MatStm8.comp[1].VapCp[3], MatStm8.comp[1].VapCp[4], MatStm8.comp[1].VapCp[5], MatStm8.comp[1].VapCp[6]}, {MatStm8.comp[1].HOV[1], MatStm8.comp[1].HOV[2], MatStm8.comp[1].HOV[3], MatStm8.comp[1].HOV[4], MatStm8.comp[1].HOV[5], MatStm8.comp[1].HOV[6]}, MatStm8.comp[1].Tc, MatStm8.T)
*/
void mixer3_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420]);
  data->localData[0]->realVars[210] /* MatStm8.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[485], tmp0, tmp1, data->simulationInfo->realParameter[495], data->localData[0]->realVars[195] /* MatStm8.T variable */);
  TRACE_POP
}
/*
equation index: 388
type: SIMPLE_ASSIGN
MatStm8._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm8.comp[1].VP[1], MatStm8.comp[1].VP[2], MatStm8.comp[1].VP[3], MatStm8.comp[1].VP[4], MatStm8.comp[1].VP[5], MatStm8.comp[1].VP[6]}, MatStm8.T)
*/
void mixer3_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[503], (modelica_real)data->simulationInfo->realParameter[504], (modelica_real)data->simulationInfo->realParameter[505], (modelica_real)data->simulationInfo->realParameter[506], (modelica_real)data->simulationInfo->realParameter[507], (modelica_real)data->simulationInfo->realParameter[508]);
  data->localData[0]->realVars[193] /* MatStm8.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[195] /* MatStm8.T variable */);
  TRACE_POP
}
/*
equation index: 389
type: SIMPLE_ASSIGN
MatStm8._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm8.comp[2].SH, {MatStm8.comp[2].VapCp[1], MatStm8.comp[2].VapCp[2], MatStm8.comp[2].VapCp[3], MatStm8.comp[2].VapCp[4], MatStm8.comp[2].VapCp[5], MatStm8.comp[2].VapCp[6]}, {MatStm8.comp[2].HOV[1], MatStm8.comp[2].HOV[2], MatStm8.comp[2].HOV[3], MatStm8.comp[2].HOV[4], MatStm8.comp[2].HOV[5], MatStm8.comp[2].HOV[6]}, MatStm8.comp[2].Tc, MatStm8.T)
*/
void mixer3_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426]);
  data->localData[0]->realVars[213] /* MatStm8.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[486], tmp0, tmp1, data->simulationInfo->realParameter[496], data->localData[0]->realVars[195] /* MatStm8.T variable */);
  TRACE_POP
}
/*
equation index: 390
type: SIMPLE_ASSIGN
MatStm8._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm8.comp[2].SH, {MatStm8.comp[2].VapCp[1], MatStm8.comp[2].VapCp[2], MatStm8.comp[2].VapCp[3], MatStm8.comp[2].VapCp[4], MatStm8.comp[2].VapCp[5], MatStm8.comp[2].VapCp[6]}, {MatStm8.comp[2].HOV[1], MatStm8.comp[2].HOV[2], MatStm8.comp[2].HOV[3], MatStm8.comp[2].HOV[4], MatStm8.comp[2].HOV[5], MatStm8.comp[2].HOV[6]}, MatStm8.comp[2].Tc, MatStm8.T)
*/
void mixer3_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426]);
  data->localData[0]->realVars[211] /* MatStm8.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[486], tmp0, tmp1, data->simulationInfo->realParameter[496], data->localData[0]->realVars[195] /* MatStm8.T variable */);
  TRACE_POP
}
/*
equation index: 391
type: SIMPLE_ASSIGN
MatStm8._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm8.comp[1].SH, {MatStm8.comp[1].VapCp[1], MatStm8.comp[1].VapCp[2], MatStm8.comp[1].VapCp[3], MatStm8.comp[1].VapCp[4], MatStm8.comp[1].VapCp[5], MatStm8.comp[1].VapCp[6]}, {MatStm8.comp[1].HOV[1], MatStm8.comp[1].HOV[2], MatStm8.comp[1].HOV[3], MatStm8.comp[1].HOV[4], MatStm8.comp[1].HOV[5], MatStm8.comp[1].HOV[6]}, MatStm8.comp[1].Tc, MatStm8.T)
*/
void mixer3_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420]);
  data->localData[0]->realVars[212] /* MatStm8.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[485], tmp0, tmp1, data->simulationInfo->realParameter[495], data->localData[0]->realVars[195] /* MatStm8.T variable */);
  TRACE_POP
}
/*
equation index: 392
type: SIMPLE_ASSIGN
MatStm8._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm8.comp[2].VP[1], MatStm8.comp[2].VP[2], MatStm8.comp[2].VP[3], MatStm8.comp[2].VP[4], MatStm8.comp[2].VP[5], MatStm8.comp[2].VP[6]}, MatStm8.T)
*/
void mixer3_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[509], (modelica_real)data->simulationInfo->realParameter[510], (modelica_real)data->simulationInfo->realParameter[511], (modelica_real)data->simulationInfo->realParameter[512], (modelica_real)data->simulationInfo->realParameter[513], (modelica_real)data->simulationInfo->realParameter[514]);
  data->localData[0]->realVars[194] /* MatStm8.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[195] /* MatStm8.T variable */);
  TRACE_POP
}
/*
equation index: 393
type: SIMPLE_ASSIGN
MatStm8._phasMolEnth[2] = MatStm8.compMolFrac[2,1] * MatStm8.compMolEnth[2,1] + MatStm8.compMolFrac[2,2] * MatStm8.compMolEnth[2,2]
*/
void mixer3_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  data->localData[0]->realVars[249] /* MatStm8.phasMolEnth[2] variable */ = (data->localData[0]->realVars[228] /* MatStm8.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[210] /* MatStm8.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[229] /* MatStm8.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[211] /* MatStm8.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 394
type: SIMPLE_ASSIGN
MatStm8._phasMolEnth[3] = MatStm8.compMolFrac[3,1] * MatStm8.compMolEnth[3,1] + MatStm8.compMolFrac[3,2] * MatStm8.compMolEnth[3,2]
*/
void mixer3_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->localData[0]->realVars[250] /* MatStm8.phasMolEnth[3] variable */ = (data->localData[0]->realVars[230] /* MatStm8.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[212] /* MatStm8.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[231] /* MatStm8.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[213] /* MatStm8.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 395
type: SIMPLE_ASSIGN
MatStm8._K[1] = 9.869232667160129e-006 * MatStm8.Psat[1]
*/
void mixer3_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->localData[0]->realVars[185] /* MatStm8.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[193] /* MatStm8.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 396
type: SIMPLE_ASSIGN
MatStm8._K[2] = 9.869232667160129e-006 * MatStm8.Psat[2]
*/
void mixer3_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->localData[0]->realVars[186] /* MatStm8.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[194] /* MatStm8.Psat[2] variable */);
  TRACE_POP
}
/*
equation index: 397
type: SIMPLE_ASSIGN
$cse2 = log(MatStm8.T)
*/
void mixer3_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[195] /* MatStm8.T variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm8.T) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[1] /* $cse2 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 398
type: SIMPLE_ASSIGN
$cse5 = exp((-MatStm8.comp[2].VP[2]) - MatStm8.comp[2].VP[3] / MatStm8.T - MatStm8.comp[2].VP[4] * $cse2 - MatStm8.comp[2].VP[5] * MatStm8.T ^ MatStm8.comp[2].VP[6])
*/
void mixer3_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[195] /* MatStm8.T variable */;
  tmp1 = data->simulationInfo->realParameter[514];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[4] /* $cse5 variable */ = exp((-data->simulationInfo->realParameter[510]) - (DIVISION_SIM(data->simulationInfo->realParameter[511],data->localData[0]->realVars[195] /* MatStm8.T variable */,"MatStm8.T",equationIndexes)) - ((data->simulationInfo->realParameter[512]) * (data->localData[0]->realVars[1] /* $cse2 variable */)) - ((data->simulationInfo->realParameter[513]) * (tmp2)));
  TRACE_POP
}
/*
equation index: 399
type: SIMPLE_ASSIGN
$cse4 = exp((-MatStm8.comp[1].VP[2]) - MatStm8.comp[1].VP[3] / MatStm8.T - MatStm8.comp[1].VP[4] * $cse2 - MatStm8.comp[1].VP[5] * MatStm8.T ^ MatStm8.comp[1].VP[6])
*/
void mixer3_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[195] /* MatStm8.T variable */;
  tmp1 = data->simulationInfo->realParameter[508];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[3] /* $cse4 variable */ = exp((-data->simulationInfo->realParameter[504]) - (DIVISION_SIM(data->simulationInfo->realParameter[505],data->localData[0]->realVars[195] /* MatStm8.T variable */,"MatStm8.T",equationIndexes)) - ((data->simulationInfo->realParameter[506]) * (data->localData[0]->realVars[1] /* $cse2 variable */)) - ((data->simulationInfo->realParameter[507]) * (tmp2)));
  TRACE_POP
}
/*
equation index: 400
type: SIMPLE_ASSIGN
MatStm8._Pdew = 1.0 / (MatStm8.compMolFrac[1,1] * $cse4 + MatStm8.compMolFrac[1,2] * $cse5)
*/
void mixer3_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->localData[0]->realVars[192] /* MatStm8.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[226] /* MatStm8.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[3] /* $cse4 variable */) + (data->localData[0]->realVars[227] /* MatStm8.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[4] /* $cse5 variable */),"MatStm8.compMolFrac[1,1] * $cse4 + MatStm8.compMolFrac[1,2] * $cse5",equationIndexes);
  TRACE_POP
}
/*
equation index: 401
type: SIMPLE_ASSIGN
$cse3 = exp(MatStm8.comp[2].VP[2] + MatStm8.comp[2].VP[3] / MatStm8.T + MatStm8.comp[2].VP[4] * $cse2 + MatStm8.comp[2].VP[5] * MatStm8.T ^ MatStm8.comp[2].VP[6])
*/
void mixer3_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[195] /* MatStm8.T variable */;
  tmp1 = data->simulationInfo->realParameter[514];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[2] /* $cse3 variable */ = exp(data->simulationInfo->realParameter[510] + DIVISION_SIM(data->simulationInfo->realParameter[511],data->localData[0]->realVars[195] /* MatStm8.T variable */,"MatStm8.T",equationIndexes) + (data->simulationInfo->realParameter[512]) * (data->localData[0]->realVars[1] /* $cse2 variable */) + (data->simulationInfo->realParameter[513]) * (tmp2));
  TRACE_POP
}
/*
equation index: 402
type: SIMPLE_ASSIGN
$cse1 = exp(MatStm8.comp[1].VP[2] + MatStm8.comp[1].VP[3] / MatStm8.T + MatStm8.comp[1].VP[4] * $cse2 + MatStm8.comp[1].VP[5] * MatStm8.T ^ MatStm8.comp[1].VP[6])
*/
void mixer3_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[195] /* MatStm8.T variable */;
  tmp1 = data->simulationInfo->realParameter[508];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[0] /* $cse1 variable */ = exp(data->simulationInfo->realParameter[504] + DIVISION_SIM(data->simulationInfo->realParameter[505],data->localData[0]->realVars[195] /* MatStm8.T variable */,"MatStm8.T",equationIndexes) + (data->simulationInfo->realParameter[506]) * (data->localData[0]->realVars[1] /* $cse2 variable */) + (data->simulationInfo->realParameter[507]) * (tmp2));
  TRACE_POP
}
/*
equation index: 403
type: SIMPLE_ASSIGN
MatStm8._Pbubl = MatStm8.compMolFrac[1,1] * $cse1 + MatStm8.compMolFrac[1,2] * $cse3
*/
void mixer3_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  data->localData[0]->realVars[191] /* MatStm8.Pbubl variable */ = (data->localData[0]->realVars[226] /* MatStm8.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[0] /* $cse1 variable */) + (data->localData[0]->realVars[227] /* MatStm8.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[2] /* $cse3 variable */);
  TRACE_POP
}
/*
equation index: 404
type: SIMPLE_ASSIGN
MatStm8._compMolFlo[3,2] = MatStm8.compMolFrac[3,2] * MatStm8.totMolFlo[3]
*/
void mixer3_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->localData[0]->realVars[225] /* MatStm8.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[231] /* MatStm8.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[271] /* MatStm8.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 405
type: SIMPLE_ASSIGN
MatStm8._compMolFlo[3,1] = MatStm8.compMolFrac[3,1] * MatStm8.totMolFlo[3]
*/
void mixer3_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  data->localData[0]->realVars[224] /* MatStm8.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[230] /* MatStm8.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[271] /* MatStm8.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 406
type: SIMPLE_ASSIGN
MatStm8._vapPhasMolFrac = 0.005 * MatStm8.totMolFlo[3]
*/
void mixer3_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  data->localData[0]->realVars[273] /* MatStm8.vapPhasMolFrac variable */ = (0.005) * (data->localData[0]->realVars[271] /* MatStm8.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 407
type: SIMPLE_ASSIGN
MatStm8._liqPhasMolFrac = 1.0 - MatStm8.vapPhasMolFrac
*/
void mixer3_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->localData[0]->realVars[245] /* MatStm8.liqPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[273] /* MatStm8.vapPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 408
type: SIMPLE_ASSIGN
MatStm8._totMolFlo[2] = 200.0 * MatStm8.liqPhasMolFrac
*/
void mixer3_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->localData[0]->realVars[270] /* MatStm8.totMolFlo[2] variable */ = (200.0) * (data->localData[0]->realVars[245] /* MatStm8.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 409
type: SIMPLE_ASSIGN
MatStm8._compMolFlo[2,2] = MatStm8.compMolFrac[2,2] * MatStm8.totMolFlo[2]
*/
void mixer3_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->localData[0]->realVars[223] /* MatStm8.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[229] /* MatStm8.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[270] /* MatStm8.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 410
type: SIMPLE_ASSIGN
MatStm8._compMolFlo[2,1] = MatStm8.compMolFrac[2,1] * MatStm8.totMolFlo[2]
*/
void mixer3_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->localData[0]->realVars[222] /* MatStm8.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[228] /* MatStm8.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[270] /* MatStm8.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc417(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,417};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  /* iteration variables */
  for (i=0; i<6; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<6; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[271] /* MatStm8.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[195] /* MatStm8.T variable */ = xloc[1];
  data->localData[0]->realVars[229] /* MatStm8.compMolFrac[2,2] variable */ = xloc[2];
  data->localData[0]->realVars[231] /* MatStm8.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[230] /* MatStm8.compMolFrac[3,1] variable */ = xloc[4];
  data->localData[0]->realVars[228] /* MatStm8.compMolFrac[2,1] variable */ = xloc[5];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  mixer3_eqFunction_387(data, threadData);

  /* local constraints */
  mixer3_eqFunction_388(data, threadData);

  /* local constraints */
  mixer3_eqFunction_389(data, threadData);

  /* local constraints */
  mixer3_eqFunction_390(data, threadData);

  /* local constraints */
  mixer3_eqFunction_391(data, threadData);

  /* local constraints */
  mixer3_eqFunction_392(data, threadData);

  /* local constraints */
  mixer3_eqFunction_393(data, threadData);

  /* local constraints */
  mixer3_eqFunction_394(data, threadData);

  /* local constraints */
  mixer3_eqFunction_395(data, threadData);

  /* local constraints */
  mixer3_eqFunction_396(data, threadData);

  /* local constraints */
  mixer3_eqFunction_397(data, threadData);

  /* local constraints */
  mixer3_eqFunction_398(data, threadData);

  /* local constraints */
  mixer3_eqFunction_399(data, threadData);

  /* local constraints */
  mixer3_eqFunction_400(data, threadData);

  /* local constraints */
  mixer3_eqFunction_401(data, threadData);

  /* local constraints */
  mixer3_eqFunction_402(data, threadData);

  /* local constraints */
  mixer3_eqFunction_403(data, threadData);

  /* local constraints */
  mixer3_eqFunction_404(data, threadData);

  /* local constraints */
  mixer3_eqFunction_405(data, threadData);

  /* local constraints */
  mixer3_eqFunction_406(data, threadData);

  /* local constraints */
  mixer3_eqFunction_407(data, threadData);

  /* local constraints */
  mixer3_eqFunction_408(data, threadData);

  /* local constraints */
  mixer3_eqFunction_409(data, threadData);

  /* local constraints */
  mixer3_eqFunction_410(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[224] /* MatStm8.compMolFlo[3,1] variable */ + data->localData[0]->realVars[222] /* MatStm8.compMolFlo[2,1] variable */ - data->localData[0]->realVars[220] /* MatStm8.compMolFlo[1,1] variable */;

  RELATIONHYSTERESIS(tmp0, 101325.0, data->localData[0]->realVars[191] /* MatStm8.Pbubl variable */, 0, GreaterEq);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[271] /* MatStm8.totMolFlo[3] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, 101325.0, data->localData[0]->realVars[192] /* MatStm8.Pdew variable */, 1, GreaterEq);
    tmp3 = (tmp1?data->localData[0]->realVars[230] /* MatStm8.compMolFrac[3,1] variable */ + data->localData[0]->realVars[231] /* MatStm8.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[270] /* MatStm8.totMolFlo[2] variable */);
  }
  res[1] = tmp3;

  RELATIONHYSTERESIS(tmp4, 101325.0, data->localData[0]->realVars[191] /* MatStm8.Pbubl variable */, 0, GreaterEq);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[231] /* MatStm8.compMolFrac[3,2] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp5, 101325.0, data->localData[0]->realVars[192] /* MatStm8.Pdew variable */, 1, GreaterEq);
    tmp7 = (tmp5?data->localData[0]->realVars[229] /* MatStm8.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[227] /* MatStm8.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[273] /* MatStm8.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[186] /* MatStm8.K[2] variable */),"1.0 + MatStm8.vapPhasMolFrac * (-1.0 + MatStm8.K[2])",equationIndexes)):data->localData[0]->realVars[229] /* MatStm8.compMolFrac[2,2] variable */);
  }
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[225] /* MatStm8.compMolFlo[3,2] variable */ + data->localData[0]->realVars[223] /* MatStm8.compMolFlo[2,2] variable */ - data->localData[0]->realVars[221] /* MatStm8.compMolFlo[1,2] variable */;

  RELATIONHYSTERESIS(tmp8, 101325.0, data->localData[0]->realVars[191] /* MatStm8.Pbubl variable */, 0, GreaterEq);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[230] /* MatStm8.compMolFrac[3,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp9, 101325.0, data->localData[0]->realVars[192] /* MatStm8.Pdew variable */, 1, GreaterEq);
    tmp11 = (tmp9?data->localData[0]->realVars[228] /* MatStm8.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[226] /* MatStm8.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[273] /* MatStm8.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[185] /* MatStm8.K[1] variable */),"1.0 + MatStm8.vapPhasMolFrac * (-1.0 + MatStm8.K[1])",equationIndexes)):data->localData[0]->realVars[228] /* MatStm8.compMolFrac[2,1] variable */);
  }
  res[4] = tmp11;

  res[5] = (data->localData[0]->realVars[273] /* MatStm8.vapPhasMolFrac variable */) * (data->localData[0]->realVars[250] /* MatStm8.phasMolEnth[3] variable */) + (data->localData[0]->realVars[245] /* MatStm8.liqPhasMolFrac variable */) * (data->localData[0]->realVars[249] /* MatStm8.phasMolEnth[2] variable */) - data->localData[0]->realVars[248] /* MatStm8.phasMolEnth[1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS417(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+6] = {0,6,4,3,4,4,3};
  const int rowIndex[24] = {0,1,2,3,4,5,1,2,4,5,2,3,5,1,2,3,5,0,1,4,5,0,4,5};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((6+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(24*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 24;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(6*sizeof(int));
  inSysData->sparsePattern.maxColors = 6;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (6+1)*sizeof(int));
  
  for(i=2;i<6+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 24*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[5] = 1;
  inSysData->sparsePattern.colorCols[4] = 2;
  inSysData->sparsePattern.colorCols[3] = 3;
  inSysData->sparsePattern.colorCols[2] = 4;
  inSysData->sparsePattern.colorCols[1] = 5;
  inSysData->sparsePattern.colorCols[0] = 6;
}
void initializeStaticDataNLS417(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm8.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[271].attribute /* MatStm8.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[271].attribute /* MatStm8.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[271].attribute /* MatStm8.totMolFlo[3] */.max;
  /* static nls data for MatStm8.T */
  sysData->nominal[i] = data->modelData->realVarsData[195].attribute /* MatStm8.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[195].attribute /* MatStm8.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[195].attribute /* MatStm8.T */.max;
  /* static nls data for MatStm8.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[229].attribute /* MatStm8.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[229].attribute /* MatStm8.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[229].attribute /* MatStm8.compMolFrac[2,2] */.max;
  /* static nls data for MatStm8.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[231].attribute /* MatStm8.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[231].attribute /* MatStm8.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[231].attribute /* MatStm8.compMolFrac[3,2] */.max;
  /* static nls data for MatStm8.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[230].attribute /* MatStm8.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[230].attribute /* MatStm8.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[230].attribute /* MatStm8.compMolFrac[3,1] */.max;
  /* static nls data for MatStm8.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[228].attribute /* MatStm8.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[228].attribute /* MatStm8.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[228].attribute /* MatStm8.compMolFrac[2,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS417(sysData);
}

void getIterationVarsNLS417(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[271] /* MatStm8.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[195] /* MatStm8.T variable */;
  array[2] = data->localData[0]->realVars[229] /* MatStm8.compMolFrac[2,2] variable */;
  array[3] = data->localData[0]->realVars[231] /* MatStm8.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[230] /* MatStm8.compMolFrac[3,1] variable */;
  array[5] = data->localData[0]->realVars[228] /* MatStm8.compMolFrac[2,1] variable */;
}


/* inner equations */

/*
equation index: 335
type: SIMPLE_ASSIGN
MatStm6._compMolFlo[2,2] = MatStm6.compMolFrac[2,2] * MatStm6.totMolFlo[2]
*/
void mixer3_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->localData[0]->realVars[43] /* MatStm6.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[49] /* MatStm6.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[90] /* MatStm6.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 336
type: SIMPLE_ASSIGN
MatStm6._compMolFlo[2,1] = MatStm6.compMolFrac[2,1] * MatStm6.totMolFlo[2]
*/
void mixer3_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->localData[0]->realVars[42] /* MatStm6.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[48] /* MatStm6.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[90] /* MatStm6.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 337
type: SIMPLE_ASSIGN
MatStm6._liqPhasMolFrac = 0.01 * MatStm6.totMolFlo[2]
*/
void mixer3_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->localData[0]->realVars[65] /* MatStm6.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[90] /* MatStm6.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 338
type: SIMPLE_ASSIGN
Mixer3._inVapPhasMolFrac[2] = 1.0 - MatStm6.liqPhasMolFrac
*/
void mixer3_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->localData[0]->realVars[277] /* Mixer3.inVapPhasMolFrac[2] variable */ = 1.0 - data->localData[0]->realVars[65] /* MatStm6.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 339
type: SIMPLE_ASSIGN
MatStm6._totMolFlo[3] = 100.0 * Mixer3.inVapPhasMolFrac[2]
*/
void mixer3_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->localData[0]->realVars[91] /* MatStm6.totMolFlo[3] variable */ = (100.0) * (data->localData[0]->realVars[277] /* Mixer3.inVapPhasMolFrac[2] variable */);
  TRACE_POP
}
/*
equation index: 340
type: SIMPLE_ASSIGN
MatStm6._compMolFlo[3,2] = MatStm6.compMolFrac[3,2] * MatStm6.totMolFlo[3]
*/
void mixer3_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->localData[0]->realVars[45] /* MatStm6.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[51] /* MatStm6.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[91] /* MatStm6.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 341
type: SIMPLE_ASSIGN
MatStm6._compMolFlo[3,1] = MatStm6.compMolFrac[3,1] * MatStm6.totMolFlo[3]
*/
void mixer3_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  data->localData[0]->realVars[44] /* MatStm6.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[50] /* MatStm6.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[91] /* MatStm6.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc359(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,359};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  /* iteration variables */
  for (i=0; i<5; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<5; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[90] /* MatStm6.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[49] /* MatStm6.compMolFrac[2,2] variable */ = xloc[1];
  data->localData[0]->realVars[51] /* MatStm6.compMolFrac[3,2] variable */ = xloc[2];
  data->localData[0]->realVars[48] /* MatStm6.compMolFrac[2,1] variable */ = xloc[3];
  data->localData[0]->realVars[50] /* MatStm6.compMolFrac[3,1] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  mixer3_eqFunction_335(data, threadData);

  /* local constraints */
  mixer3_eqFunction_336(data, threadData);

  /* local constraints */
  mixer3_eqFunction_337(data, threadData);

  /* local constraints */
  mixer3_eqFunction_338(data, threadData);

  /* local constraints */
  mixer3_eqFunction_339(data, threadData);

  /* local constraints */
  mixer3_eqFunction_340(data, threadData);

  /* local constraints */
  mixer3_eqFunction_341(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[44] /* MatStm6.compMolFlo[3,1] variable */ + data->localData[0]->realVars[42] /* MatStm6.compMolFlo[2,1] variable */ - data->localData[0]->realVars[40] /* MatStm6.compMolFlo[1,1] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm6.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[50] /* MatStm6.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm6.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[48] /* MatStm6.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[46] /* MatStm6.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[277] /* Mixer3.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[5] /* MatStm6.K[1] variable */),"1.0 + Mixer3.inVapPhasMolFrac[2] * (-1.0 + MatStm6.K[1])",equationIndexes)):data->localData[0]->realVars[48] /* MatStm6.compMolFrac[2,1] variable */);
  }
  res[1] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm6.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[91] /* MatStm6.totMolFlo[3] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm6.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[50] /* MatStm6.compMolFrac[3,1] variable */ + data->localData[0]->realVars[51] /* MatStm6.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[90] /* MatStm6.totMolFlo[2] variable */);
  }
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[45] /* MatStm6.compMolFlo[3,2] variable */ + data->localData[0]->realVars[43] /* MatStm6.compMolFlo[2,2] variable */ - data->localData[0]->realVars[41] /* MatStm6.compMolFlo[1,2] variable */;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm6.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[51] /* MatStm6.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm6.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[49] /* MatStm6.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[47] /* MatStm6.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[277] /* Mixer3.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[6] /* MatStm6.K[2] variable */),"1.0 + Mixer3.inVapPhasMolFrac[2] * (-1.0 + MatStm6.K[2])",equationIndexes)):data->localData[0]->realVars[49] /* MatStm6.compMolFrac[2,2] variable */);
  }
  res[4] = tmp11;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS359(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,5,2,3,2,3};
  const int rowIndex[15] = {0,1,2,3,4,3,4,2,3,4,0,1,0,1,2};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(15*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 15;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  inSysData->sparsePattern.maxColors = 4;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 15*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[4] = 1;
  inSysData->sparsePattern.colorCols[2] = 2;
  inSysData->sparsePattern.colorCols[1] = 3;
  inSysData->sparsePattern.colorCols[3] = 3;
  inSysData->sparsePattern.colorCols[0] = 4;
}
void initializeStaticDataNLS359(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm6.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[90].attribute /* MatStm6.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[90].attribute /* MatStm6.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[90].attribute /* MatStm6.totMolFlo[2] */.max;
  /* static nls data for MatStm6.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[49].attribute /* MatStm6.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[49].attribute /* MatStm6.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[49].attribute /* MatStm6.compMolFrac[2,2] */.max;
  /* static nls data for MatStm6.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[51].attribute /* MatStm6.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[51].attribute /* MatStm6.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[51].attribute /* MatStm6.compMolFrac[3,2] */.max;
  /* static nls data for MatStm6.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[48].attribute /* MatStm6.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[48].attribute /* MatStm6.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[48].attribute /* MatStm6.compMolFrac[2,1] */.max;
  /* static nls data for MatStm6.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[50].attribute /* MatStm6.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[50].attribute /* MatStm6.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[50].attribute /* MatStm6.compMolFrac[3,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS359(sysData);
}

void getIterationVarsNLS359(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[90] /* MatStm6.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[49] /* MatStm6.compMolFrac[2,2] variable */;
  array[2] = data->localData[0]->realVars[51] /* MatStm6.compMolFrac[3,2] variable */;
  array[3] = data->localData[0]->realVars[48] /* MatStm6.compMolFrac[2,1] variable */;
  array[4] = data->localData[0]->realVars[50] /* MatStm6.compMolFrac[3,1] variable */;
}


/* inner equations */

/*
equation index: 281
type: SIMPLE_ASSIGN
MatStm7._compMolFlo[3,2] = MatStm7.compMolFrac[3,2] * MatStm7.totMolFlo[3]
*/
void mixer3_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->localData[0]->realVars[135] /* MatStm7.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[141] /* MatStm7.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[181] /* MatStm7.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 282
type: SIMPLE_ASSIGN
MatStm7._compMolFlo[3,1] = MatStm7.compMolFrac[3,1] * MatStm7.totMolFlo[3]
*/
void mixer3_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->localData[0]->realVars[134] /* MatStm7.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[140] /* MatStm7.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[181] /* MatStm7.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 283
type: SIMPLE_ASSIGN
Mixer3._inVapPhasMolFrac[1] = 0.01 * MatStm7.totMolFlo[3]
*/
void mixer3_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->localData[0]->realVars[276] /* Mixer3.inVapPhasMolFrac[1] variable */ = (0.01) * (data->localData[0]->realVars[181] /* MatStm7.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 284
type: SIMPLE_ASSIGN
MatStm7._liqPhasMolFrac = 1.0 - Mixer3.inVapPhasMolFrac[1]
*/
void mixer3_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  data->localData[0]->realVars[155] /* MatStm7.liqPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[276] /* Mixer3.inVapPhasMolFrac[1] variable */;
  TRACE_POP
}
/*
equation index: 285
type: SIMPLE_ASSIGN
MatStm7._totMolFlo[2] = 100.0 * MatStm7.liqPhasMolFrac
*/
void mixer3_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->localData[0]->realVars[180] /* MatStm7.totMolFlo[2] variable */ = (100.0) * (data->localData[0]->realVars[155] /* MatStm7.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 286
type: SIMPLE_ASSIGN
MatStm7._compMolFlo[2,2] = MatStm7.compMolFrac[2,2] * MatStm7.totMolFlo[2]
*/
void mixer3_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->localData[0]->realVars[133] /* MatStm7.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[139] /* MatStm7.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[180] /* MatStm7.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 287
type: SIMPLE_ASSIGN
MatStm7._compMolFlo[2,1] = MatStm7.compMolFrac[2,1] * MatStm7.totMolFlo[2]
*/
void mixer3_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->localData[0]->realVars[132] /* MatStm7.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[138] /* MatStm7.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[180] /* MatStm7.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc305(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,305};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  /* iteration variables */
  for (i=0; i<5; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<5; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[181] /* MatStm7.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[141] /* MatStm7.compMolFrac[3,2] variable */ = xloc[1];
  data->localData[0]->realVars[139] /* MatStm7.compMolFrac[2,2] variable */ = xloc[2];
  data->localData[0]->realVars[140] /* MatStm7.compMolFrac[3,1] variable */ = xloc[3];
  data->localData[0]->realVars[138] /* MatStm7.compMolFrac[2,1] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  mixer3_eqFunction_281(data, threadData);

  /* local constraints */
  mixer3_eqFunction_282(data, threadData);

  /* local constraints */
  mixer3_eqFunction_283(data, threadData);

  /* local constraints */
  mixer3_eqFunction_284(data, threadData);

  /* local constraints */
  mixer3_eqFunction_285(data, threadData);

  /* local constraints */
  mixer3_eqFunction_286(data, threadData);

  /* local constraints */
  mixer3_eqFunction_287(data, threadData);
  /* body */
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm7.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[140] /* MatStm7.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm7.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[138] /* MatStm7.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[136] /* MatStm7.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[276] /* Mixer3.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[95] /* MatStm7.K[1] variable */),"1.0 + Mixer3.inVapPhasMolFrac[1] * (-1.0 + MatStm7.K[1])",equationIndexes)):data->localData[0]->realVars[138] /* MatStm7.compMolFrac[2,1] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[134] /* MatStm7.compMolFlo[3,1] variable */ + data->localData[0]->realVars[132] /* MatStm7.compMolFlo[2,1] variable */ - data->localData[0]->realVars[130] /* MatStm7.compMolFlo[1,1] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm7.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[181] /* MatStm7.totMolFlo[3] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm7.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[140] /* MatStm7.compMolFrac[3,1] variable */ + data->localData[0]->realVars[141] /* MatStm7.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[180] /* MatStm7.totMolFlo[2] variable */);
  }
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[135] /* MatStm7.compMolFlo[3,2] variable */ + data->localData[0]->realVars[133] /* MatStm7.compMolFlo[2,2] variable */ - data->localData[0]->realVars[131] /* MatStm7.compMolFlo[1,2] variable */;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm7.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[141] /* MatStm7.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm7.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[139] /* MatStm7.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[137] /* MatStm7.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[276] /* Mixer3.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[96] /* MatStm7.K[2] variable */),"1.0 + Mixer3.inVapPhasMolFrac[1] * (-1.0 + MatStm7.K[2])",equationIndexes)):data->localData[0]->realVars[139] /* MatStm7.compMolFrac[2,2] variable */);
  }
  res[4] = tmp11;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS305(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,5,3,2,3,2};
  const int rowIndex[15] = {0,1,2,3,4,2,3,4,3,4,0,1,2,0,1};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(15*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 15;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  inSysData->sparsePattern.maxColors = 3;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 15*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[2] = 1;
  inSysData->sparsePattern.colorCols[3] = 1;
  inSysData->sparsePattern.colorCols[1] = 2;
  inSysData->sparsePattern.colorCols[4] = 2;
  inSysData->sparsePattern.colorCols[0] = 3;
}
void initializeStaticDataNLS305(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm7.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[181].attribute /* MatStm7.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[181].attribute /* MatStm7.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[181].attribute /* MatStm7.totMolFlo[3] */.max;
  /* static nls data for MatStm7.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* MatStm7.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* MatStm7.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* MatStm7.compMolFrac[3,2] */.max;
  /* static nls data for MatStm7.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* MatStm7.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* MatStm7.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* MatStm7.compMolFrac[2,2] */.max;
  /* static nls data for MatStm7.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* MatStm7.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* MatStm7.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* MatStm7.compMolFrac[3,1] */.max;
  /* static nls data for MatStm7.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* MatStm7.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* MatStm7.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* MatStm7.compMolFrac[2,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS305(sysData);
}

void getIterationVarsNLS305(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[181] /* MatStm7.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[141] /* MatStm7.compMolFrac[3,2] variable */;
  array[2] = data->localData[0]->realVars[139] /* MatStm7.compMolFrac[2,2] variable */;
  array[3] = data->localData[0]->realVars[140] /* MatStm7.compMolFrac[3,1] variable */;
  array[4] = data->localData[0]->realVars[138] /* MatStm7.compMolFrac[2,1] variable */;
}


/* inner equations */

/*
equation index: 155
type: SIMPLE_ASSIGN
MatStm8._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm8.comp[2].VP[1], MatStm8.comp[2].VP[2], MatStm8.comp[2].VP[3], MatStm8.comp[2].VP[4], MatStm8.comp[2].VP[5], MatStm8.comp[2].VP[6]}, MatStm8.T)
*/
void mixer3_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[509], (modelica_real)data->simulationInfo->realParameter[510], (modelica_real)data->simulationInfo->realParameter[511], (modelica_real)data->simulationInfo->realParameter[512], (modelica_real)data->simulationInfo->realParameter[513], (modelica_real)data->simulationInfo->realParameter[514]);
  data->localData[0]->realVars[194] /* MatStm8.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[195] /* MatStm8.T variable */);
  TRACE_POP
}
/*
equation index: 156
type: SIMPLE_ASSIGN
MatStm8._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm8.comp[1].SH, {MatStm8.comp[1].VapCp[1], MatStm8.comp[1].VapCp[2], MatStm8.comp[1].VapCp[3], MatStm8.comp[1].VapCp[4], MatStm8.comp[1].VapCp[5], MatStm8.comp[1].VapCp[6]}, {MatStm8.comp[1].HOV[1], MatStm8.comp[1].HOV[2], MatStm8.comp[1].HOV[3], MatStm8.comp[1].HOV[4], MatStm8.comp[1].HOV[5], MatStm8.comp[1].HOV[6]}, MatStm8.comp[1].Tc, MatStm8.T)
*/
void mixer3_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420]);
  data->localData[0]->realVars[210] /* MatStm8.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[485], tmp0, tmp1, data->simulationInfo->realParameter[495], data->localData[0]->realVars[195] /* MatStm8.T variable */);
  TRACE_POP
}
/*
equation index: 157
type: SIMPLE_ASSIGN
MatStm8._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm8.comp[1].SH, {MatStm8.comp[1].VapCp[1], MatStm8.comp[1].VapCp[2], MatStm8.comp[1].VapCp[3], MatStm8.comp[1].VapCp[4], MatStm8.comp[1].VapCp[5], MatStm8.comp[1].VapCp[6]}, {MatStm8.comp[1].HOV[1], MatStm8.comp[1].HOV[2], MatStm8.comp[1].HOV[3], MatStm8.comp[1].HOV[4], MatStm8.comp[1].HOV[5], MatStm8.comp[1].HOV[6]}, MatStm8.comp[1].Tc, MatStm8.T)
*/
void mixer3_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420]);
  data->localData[0]->realVars[212] /* MatStm8.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[485], tmp0, tmp1, data->simulationInfo->realParameter[495], data->localData[0]->realVars[195] /* MatStm8.T variable */);
  TRACE_POP
}
/*
equation index: 158
type: SIMPLE_ASSIGN
MatStm8._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm8.comp[2].SH, {MatStm8.comp[2].VapCp[1], MatStm8.comp[2].VapCp[2], MatStm8.comp[2].VapCp[3], MatStm8.comp[2].VapCp[4], MatStm8.comp[2].VapCp[5], MatStm8.comp[2].VapCp[6]}, {MatStm8.comp[2].HOV[1], MatStm8.comp[2].HOV[2], MatStm8.comp[2].HOV[3], MatStm8.comp[2].HOV[4], MatStm8.comp[2].HOV[5], MatStm8.comp[2].HOV[6]}, MatStm8.comp[2].Tc, MatStm8.T)
*/
void mixer3_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426]);
  data->localData[0]->realVars[211] /* MatStm8.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[486], tmp0, tmp1, data->simulationInfo->realParameter[496], data->localData[0]->realVars[195] /* MatStm8.T variable */);
  TRACE_POP
}
/*
equation index: 159
type: SIMPLE_ASSIGN
MatStm8._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm8.comp[2].SH, {MatStm8.comp[2].VapCp[1], MatStm8.comp[2].VapCp[2], MatStm8.comp[2].VapCp[3], MatStm8.comp[2].VapCp[4], MatStm8.comp[2].VapCp[5], MatStm8.comp[2].VapCp[6]}, {MatStm8.comp[2].HOV[1], MatStm8.comp[2].HOV[2], MatStm8.comp[2].HOV[3], MatStm8.comp[2].HOV[4], MatStm8.comp[2].HOV[5], MatStm8.comp[2].HOV[6]}, MatStm8.comp[2].Tc, MatStm8.T)
*/
void mixer3_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426]);
  data->localData[0]->realVars[213] /* MatStm8.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[486], tmp0, tmp1, data->simulationInfo->realParameter[496], data->localData[0]->realVars[195] /* MatStm8.T variable */);
  TRACE_POP
}
/*
equation index: 160
type: SIMPLE_ASSIGN
MatStm8._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm8.comp[1].VP[1], MatStm8.comp[1].VP[2], MatStm8.comp[1].VP[3], MatStm8.comp[1].VP[4], MatStm8.comp[1].VP[5], MatStm8.comp[1].VP[6]}, MatStm8.T)
*/
void mixer3_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[503], (modelica_real)data->simulationInfo->realParameter[504], (modelica_real)data->simulationInfo->realParameter[505], (modelica_real)data->simulationInfo->realParameter[506], (modelica_real)data->simulationInfo->realParameter[507], (modelica_real)data->simulationInfo->realParameter[508]);
  data->localData[0]->realVars[193] /* MatStm8.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[195] /* MatStm8.T variable */);
  TRACE_POP
}
/*
equation index: 161
type: SIMPLE_ASSIGN
MatStm8._phasMolEnth[3] = MatStm8.compMolFrac[3,1] * MatStm8.compMolEnth[3,1] + MatStm8.compMolFrac[3,2] * MatStm8.compMolEnth[3,2]
*/
void mixer3_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->localData[0]->realVars[250] /* MatStm8.phasMolEnth[3] variable */ = (data->localData[0]->realVars[230] /* MatStm8.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[212] /* MatStm8.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[231] /* MatStm8.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[213] /* MatStm8.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 162
type: SIMPLE_ASSIGN
MatStm8._phasMolEnth[2] = MatStm8.compMolFrac[2,1] * MatStm8.compMolEnth[2,1] + MatStm8.compMolFrac[2,2] * MatStm8.compMolEnth[2,2]
*/
void mixer3_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  data->localData[0]->realVars[249] /* MatStm8.phasMolEnth[2] variable */ = (data->localData[0]->realVars[228] /* MatStm8.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[210] /* MatStm8.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[229] /* MatStm8.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[211] /* MatStm8.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 163
type: SIMPLE_ASSIGN
MatStm8._Pbubl = MatStm8.compMolFrac[1,1] * exp(MatStm8.comp[1].VP[2] + MatStm8.comp[1].VP[3] / MatStm8.T + MatStm8.comp[1].VP[4] * log(MatStm8.T) + MatStm8.comp[1].VP[5] * MatStm8.T ^ MatStm8.comp[1].VP[6]) + MatStm8.compMolFrac[1,2] * exp(MatStm8.comp[2].VP[2] + MatStm8.comp[2].VP[3] / MatStm8.T + MatStm8.comp[2].VP[4] * log(MatStm8.T) + MatStm8.comp[2].VP[5] * MatStm8.T ^ MatStm8.comp[2].VP[6])
*/
void mixer3_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  tmp0 = data->localData[0]->realVars[195] /* MatStm8.T variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm8.T) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[195] /* MatStm8.T variable */;
  tmp2 = data->simulationInfo->realParameter[508];
  if(tmp1 < 0.0 && tmp2 != 0.0)
  {
    tmp4 = modf(tmp2, &tmp5);
    
    if(tmp4 > 0.5)
    {
      tmp4 -= 1.0;
      tmp5 += 1.0;
    }
    else if(tmp4 < -0.5)
    {
      tmp4 += 1.0;
      tmp5 -= 1.0;
    }
    
    if(fabs(tmp4) < 1e-10)
      tmp3 = pow(tmp1, tmp5);
    else
    {
      tmp7 = modf(1.0/tmp2, &tmp6);
      if(tmp7 > 0.5)
      {
        tmp7 -= 1.0;
        tmp6 += 1.0;
      }
      else if(tmp7 < -0.5)
      {
        tmp7 += 1.0;
        tmp6 -= 1.0;
      }
      if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
      {
        tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
      }
    }
  }
  else
  {
    tmp3 = pow(tmp1, tmp2);
  }
  if(isnan(tmp3) || isinf(tmp3))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
  }tmp8 = data->localData[0]->realVars[195] /* MatStm8.T variable */;
  if(!(tmp8 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm8.T) was %g should be > 0", tmp8);
  }tmp9 = data->localData[0]->realVars[195] /* MatStm8.T variable */;
  tmp10 = data->simulationInfo->realParameter[514];
  if(tmp9 < 0.0 && tmp10 != 0.0)
  {
    tmp12 = modf(tmp10, &tmp13);
    
    if(tmp12 > 0.5)
    {
      tmp12 -= 1.0;
      tmp13 += 1.0;
    }
    else if(tmp12 < -0.5)
    {
      tmp12 += 1.0;
      tmp13 -= 1.0;
    }
    
    if(fabs(tmp12) < 1e-10)
      tmp11 = pow(tmp9, tmp13);
    else
    {
      tmp15 = modf(1.0/tmp10, &tmp14);
      if(tmp15 > 0.5)
      {
        tmp15 -= 1.0;
        tmp14 += 1.0;
      }
      else if(tmp15 < -0.5)
      {
        tmp15 += 1.0;
        tmp14 -= 1.0;
      }
      if(fabs(tmp15) < 1e-10 && ((unsigned long)tmp14 & 1))
      {
        tmp11 = -pow(-tmp9, tmp12)*pow(tmp9, tmp13);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp9, tmp10);
      }
    }
  }
  else
  {
    tmp11 = pow(tmp9, tmp10);
  }
  if(isnan(tmp11) || isinf(tmp11))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp9, tmp10);
  }
  data->localData[0]->realVars[191] /* MatStm8.Pbubl variable */ = (data->localData[0]->realVars[226] /* MatStm8.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[504] + DIVISION_SIM(data->simulationInfo->realParameter[505],data->localData[0]->realVars[195] /* MatStm8.T variable */,"MatStm8.T",equationIndexes) + (data->simulationInfo->realParameter[506]) * (log(tmp0)) + (data->simulationInfo->realParameter[507]) * (tmp3))) + (data->localData[0]->realVars[227] /* MatStm8.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[510] + DIVISION_SIM(data->simulationInfo->realParameter[511],data->localData[0]->realVars[195] /* MatStm8.T variable */,"MatStm8.T",equationIndexes) + (data->simulationInfo->realParameter[512]) * (log(tmp8)) + (data->simulationInfo->realParameter[513]) * (tmp11)));
  TRACE_POP
}
/*
equation index: 164
type: SIMPLE_ASSIGN
MatStm8._Pdew = 1.0 / (MatStm8.compMolFrac[1,1] * exp((-MatStm8.comp[1].VP[2]) - MatStm8.comp[1].VP[3] / MatStm8.T - MatStm8.comp[1].VP[4] * log(MatStm8.T) - MatStm8.comp[1].VP[5] * MatStm8.T ^ MatStm8.comp[1].VP[6]) + MatStm8.compMolFrac[1,2] * exp((-MatStm8.comp[2].VP[2]) - MatStm8.comp[2].VP[3] / MatStm8.T - MatStm8.comp[2].VP[4] * log(MatStm8.T) - MatStm8.comp[2].VP[5] * MatStm8.T ^ MatStm8.comp[2].VP[6]))
*/
void mixer3_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  tmp0 = data->localData[0]->realVars[195] /* MatStm8.T variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm8.T) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[195] /* MatStm8.T variable */;
  tmp2 = data->simulationInfo->realParameter[508];
  if(tmp1 < 0.0 && tmp2 != 0.0)
  {
    tmp4 = modf(tmp2, &tmp5);
    
    if(tmp4 > 0.5)
    {
      tmp4 -= 1.0;
      tmp5 += 1.0;
    }
    else if(tmp4 < -0.5)
    {
      tmp4 += 1.0;
      tmp5 -= 1.0;
    }
    
    if(fabs(tmp4) < 1e-10)
      tmp3 = pow(tmp1, tmp5);
    else
    {
      tmp7 = modf(1.0/tmp2, &tmp6);
      if(tmp7 > 0.5)
      {
        tmp7 -= 1.0;
        tmp6 += 1.0;
      }
      else if(tmp7 < -0.5)
      {
        tmp7 += 1.0;
        tmp6 -= 1.0;
      }
      if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
      {
        tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
      }
    }
  }
  else
  {
    tmp3 = pow(tmp1, tmp2);
  }
  if(isnan(tmp3) || isinf(tmp3))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
  }tmp8 = data->localData[0]->realVars[195] /* MatStm8.T variable */;
  if(!(tmp8 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm8.T) was %g should be > 0", tmp8);
  }tmp9 = data->localData[0]->realVars[195] /* MatStm8.T variable */;
  tmp10 = data->simulationInfo->realParameter[514];
  if(tmp9 < 0.0 && tmp10 != 0.0)
  {
    tmp12 = modf(tmp10, &tmp13);
    
    if(tmp12 > 0.5)
    {
      tmp12 -= 1.0;
      tmp13 += 1.0;
    }
    else if(tmp12 < -0.5)
    {
      tmp12 += 1.0;
      tmp13 -= 1.0;
    }
    
    if(fabs(tmp12) < 1e-10)
      tmp11 = pow(tmp9, tmp13);
    else
    {
      tmp15 = modf(1.0/tmp10, &tmp14);
      if(tmp15 > 0.5)
      {
        tmp15 -= 1.0;
        tmp14 += 1.0;
      }
      else if(tmp15 < -0.5)
      {
        tmp15 += 1.0;
        tmp14 -= 1.0;
      }
      if(fabs(tmp15) < 1e-10 && ((unsigned long)tmp14 & 1))
      {
        tmp11 = -pow(-tmp9, tmp12)*pow(tmp9, tmp13);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp9, tmp10);
      }
    }
  }
  else
  {
    tmp11 = pow(tmp9, tmp10);
  }
  if(isnan(tmp11) || isinf(tmp11))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp9, tmp10);
  }
  data->localData[0]->realVars[192] /* MatStm8.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[226] /* MatStm8.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[504]) - (DIVISION_SIM(data->simulationInfo->realParameter[505],data->localData[0]->realVars[195] /* MatStm8.T variable */,"MatStm8.T",equationIndexes)) - ((data->simulationInfo->realParameter[506]) * (log(tmp0))) - ((data->simulationInfo->realParameter[507]) * (tmp3)))) + (data->localData[0]->realVars[227] /* MatStm8.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[510]) - (DIVISION_SIM(data->simulationInfo->realParameter[511],data->localData[0]->realVars[195] /* MatStm8.T variable */,"MatStm8.T",equationIndexes)) - ((data->simulationInfo->realParameter[512]) * (log(tmp8))) - ((data->simulationInfo->realParameter[513]) * (tmp11)))),"MatStm8.compMolFrac[1,1] * exp((-MatStm8.comp[1].VP[2]) - MatStm8.comp[1].VP[3] / MatStm8.T - MatStm8.comp[1].VP[4] * log(MatStm8.T) - MatStm8.comp[1].VP[5] * MatStm8.T ^ MatStm8.comp[1].VP[6]) + MatStm8.compMolFrac[1,2] * exp((-MatStm8.comp[2].VP[2]) - MatStm8.comp[2].VP[3] / MatStm8.T - MatStm8.comp[2].VP[4] * log(MatStm8.T) - MatStm8.comp[2].VP[5] * MatStm8.T ^ MatStm8.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}
/*
equation index: 165
type: SIMPLE_ASSIGN
MatStm8._K[2] = 9.869232667160129e-006 * MatStm8.Psat[2]
*/
void mixer3_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  data->localData[0]->realVars[186] /* MatStm8.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[194] /* MatStm8.Psat[2] variable */);
  TRACE_POP
}
/*
equation index: 166
type: SIMPLE_ASSIGN
MatStm8._K[1] = 9.869232667160129e-006 * MatStm8.Psat[1]
*/
void mixer3_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  data->localData[0]->realVars[185] /* MatStm8.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[193] /* MatStm8.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 167
type: SIMPLE_ASSIGN
MatStm8._compMolFlo[3,1] = MatStm8.compMolFrac[3,1] * MatStm8.totMolFlo[3]
*/
void mixer3_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->localData[0]->realVars[224] /* MatStm8.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[230] /* MatStm8.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[271] /* MatStm8.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 168
type: SIMPLE_ASSIGN
MatStm8._compMolFlo[3,2] = MatStm8.compMolFrac[3,2] * MatStm8.totMolFlo[3]
*/
void mixer3_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->localData[0]->realVars[225] /* MatStm8.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[231] /* MatStm8.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[271] /* MatStm8.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 169
type: SIMPLE_ASSIGN
MatStm8._vapPhasMolFrac = 0.005 * MatStm8.totMolFlo[3]
*/
void mixer3_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->localData[0]->realVars[273] /* MatStm8.vapPhasMolFrac variable */ = (0.005) * (data->localData[0]->realVars[271] /* MatStm8.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 170
type: SIMPLE_ASSIGN
MatStm8._liqPhasMolFrac = 1.0 - MatStm8.vapPhasMolFrac
*/
void mixer3_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->localData[0]->realVars[245] /* MatStm8.liqPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[273] /* MatStm8.vapPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 171
type: SIMPLE_ASSIGN
MatStm8._totMolFlo[2] = 200.0 * MatStm8.liqPhasMolFrac
*/
void mixer3_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->localData[0]->realVars[270] /* MatStm8.totMolFlo[2] variable */ = (200.0) * (data->localData[0]->realVars[245] /* MatStm8.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 172
type: SIMPLE_ASSIGN
MatStm8._compMolFlo[2,2] = MatStm8.compMolFrac[2,2] * MatStm8.totMolFlo[2]
*/
void mixer3_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->localData[0]->realVars[223] /* MatStm8.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[229] /* MatStm8.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[270] /* MatStm8.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 173
type: SIMPLE_ASSIGN
MatStm8._compMolFlo[2,1] = MatStm8.compMolFrac[2,1] * MatStm8.totMolFlo[2]
*/
void mixer3_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->localData[0]->realVars[222] /* MatStm8.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[228] /* MatStm8.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[270] /* MatStm8.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc180(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,180};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  /* iteration variables */
  for (i=0; i<6; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<6; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[271] /* MatStm8.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[230] /* MatStm8.compMolFrac[3,1] variable */ = xloc[1];
  data->localData[0]->realVars[231] /* MatStm8.compMolFrac[3,2] variable */ = xloc[2];
  data->localData[0]->realVars[229] /* MatStm8.compMolFrac[2,2] variable */ = xloc[3];
  data->localData[0]->realVars[195] /* MatStm8.T variable */ = xloc[4];
  data->localData[0]->realVars[228] /* MatStm8.compMolFrac[2,1] variable */ = xloc[5];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  mixer3_eqFunction_155(data, threadData);

  /* local constraints */
  mixer3_eqFunction_156(data, threadData);

  /* local constraints */
  mixer3_eqFunction_157(data, threadData);

  /* local constraints */
  mixer3_eqFunction_158(data, threadData);

  /* local constraints */
  mixer3_eqFunction_159(data, threadData);

  /* local constraints */
  mixer3_eqFunction_160(data, threadData);

  /* local constraints */
  mixer3_eqFunction_161(data, threadData);

  /* local constraints */
  mixer3_eqFunction_162(data, threadData);

  /* local constraints */
  mixer3_eqFunction_163(data, threadData);

  /* local constraints */
  mixer3_eqFunction_164(data, threadData);

  /* local constraints */
  mixer3_eqFunction_165(data, threadData);

  /* local constraints */
  mixer3_eqFunction_166(data, threadData);

  /* local constraints */
  mixer3_eqFunction_167(data, threadData);

  /* local constraints */
  mixer3_eqFunction_168(data, threadData);

  /* local constraints */
  mixer3_eqFunction_169(data, threadData);

  /* local constraints */
  mixer3_eqFunction_170(data, threadData);

  /* local constraints */
  mixer3_eqFunction_171(data, threadData);

  /* local constraints */
  mixer3_eqFunction_172(data, threadData);

  /* local constraints */
  mixer3_eqFunction_173(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[224] /* MatStm8.compMolFlo[3,1] variable */ + data->localData[0]->realVars[222] /* MatStm8.compMolFlo[2,1] variable */ - data->localData[0]->realVars[220] /* MatStm8.compMolFlo[1,1] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm8.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[230] /* MatStm8.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm8.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[228] /* MatStm8.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[226] /* MatStm8.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[273] /* MatStm8.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[185] /* MatStm8.K[1] variable */),"1.0 + MatStm8.vapPhasMolFrac * (-1.0 + MatStm8.K[1])",equationIndexes)):data->localData[0]->realVars[228] /* MatStm8.compMolFrac[2,1] variable */);
  }
  res[1] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm8.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[231] /* MatStm8.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm8.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[229] /* MatStm8.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[227] /* MatStm8.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[273] /* MatStm8.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[186] /* MatStm8.K[2] variable */),"1.0 + MatStm8.vapPhasMolFrac * (-1.0 + MatStm8.K[2])",equationIndexes)):data->localData[0]->realVars[229] /* MatStm8.compMolFrac[2,2] variable */);
  }
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[225] /* MatStm8.compMolFlo[3,2] variable */ + data->localData[0]->realVars[223] /* MatStm8.compMolFlo[2,2] variable */ - data->localData[0]->realVars[221] /* MatStm8.compMolFlo[1,2] variable */;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[191] /* MatStm8.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[271] /* MatStm8.totMolFlo[3] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm8.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[230] /* MatStm8.compMolFrac[3,1] variable */ + data->localData[0]->realVars[231] /* MatStm8.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[270] /* MatStm8.totMolFlo[2] variable */);
  }
  res[4] = tmp11;

  res[5] = (data->localData[0]->realVars[273] /* MatStm8.vapPhasMolFrac variable */) * (data->localData[0]->realVars[250] /* MatStm8.phasMolEnth[3] variable */) + (data->localData[0]->realVars[245] /* MatStm8.liqPhasMolFrac variable */) * (data->localData[0]->realVars[249] /* MatStm8.phasMolEnth[2] variable */) - data->localData[0]->realVars[248] /* MatStm8.phasMolEnth[1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS180(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+6] = {0,6,4,4,3,4,3};
  const int rowIndex[24] = {0,1,2,3,4,5,0,1,4,5,2,3,4,5,2,3,5,1,2,4,5,0,1,5};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((6+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(24*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 24;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(6*sizeof(int));
  inSysData->sparsePattern.maxColors = 6;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (6+1)*sizeof(int));
  
  for(i=2;i<6+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 24*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[5] = 1;
  inSysData->sparsePattern.colorCols[4] = 2;
  inSysData->sparsePattern.colorCols[3] = 3;
  inSysData->sparsePattern.colorCols[2] = 4;
  inSysData->sparsePattern.colorCols[1] = 5;
  inSysData->sparsePattern.colorCols[0] = 6;
}
void initializeStaticDataNLS180(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm8.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[271].attribute /* MatStm8.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[271].attribute /* MatStm8.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[271].attribute /* MatStm8.totMolFlo[3] */.max;
  /* static nls data for MatStm8.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[230].attribute /* MatStm8.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[230].attribute /* MatStm8.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[230].attribute /* MatStm8.compMolFrac[3,1] */.max;
  /* static nls data for MatStm8.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[231].attribute /* MatStm8.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[231].attribute /* MatStm8.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[231].attribute /* MatStm8.compMolFrac[3,2] */.max;
  /* static nls data for MatStm8.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[229].attribute /* MatStm8.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[229].attribute /* MatStm8.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[229].attribute /* MatStm8.compMolFrac[2,2] */.max;
  /* static nls data for MatStm8.T */
  sysData->nominal[i] = data->modelData->realVarsData[195].attribute /* MatStm8.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[195].attribute /* MatStm8.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[195].attribute /* MatStm8.T */.max;
  /* static nls data for MatStm8.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[228].attribute /* MatStm8.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[228].attribute /* MatStm8.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[228].attribute /* MatStm8.compMolFrac[2,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS180(sysData);
}

void getIterationVarsNLS180(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[271] /* MatStm8.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[230] /* MatStm8.compMolFrac[3,1] variable */;
  array[2] = data->localData[0]->realVars[231] /* MatStm8.compMolFrac[3,2] variable */;
  array[3] = data->localData[0]->realVars[229] /* MatStm8.compMolFrac[2,2] variable */;
  array[4] = data->localData[0]->realVars[195] /* MatStm8.T variable */;
  array[5] = data->localData[0]->realVars[228] /* MatStm8.compMolFrac[2,1] variable */;
}


/* inner equations */

/*
equation index: 116
type: SIMPLE_ASSIGN
MatStm6._compMolFlo[2,1] = MatStm6.compMolFrac[2,1] * MatStm6.totMolFlo[2]
*/
void mixer3_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->localData[0]->realVars[42] /* MatStm6.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[48] /* MatStm6.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[90] /* MatStm6.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 117
type: SIMPLE_ASSIGN
MatStm6._compMolFlo[2,2] = MatStm6.compMolFrac[2,2] * MatStm6.totMolFlo[2]
*/
void mixer3_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->localData[0]->realVars[43] /* MatStm6.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[49] /* MatStm6.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[90] /* MatStm6.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 118
type: SIMPLE_ASSIGN
MatStm6._liqPhasMolFrac = 0.01 * MatStm6.totMolFlo[2]
*/
void mixer3_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->localData[0]->realVars[65] /* MatStm6.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[90] /* MatStm6.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 119
type: SIMPLE_ASSIGN
Mixer3._inVapPhasMolFrac[2] = 1.0 - MatStm6.liqPhasMolFrac
*/
void mixer3_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->localData[0]->realVars[277] /* Mixer3.inVapPhasMolFrac[2] variable */ = 1.0 - data->localData[0]->realVars[65] /* MatStm6.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 120
type: SIMPLE_ASSIGN
MatStm6._totMolFlo[3] = 100.0 * Mixer3.inVapPhasMolFrac[2]
*/
void mixer3_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->localData[0]->realVars[91] /* MatStm6.totMolFlo[3] variable */ = (100.0) * (data->localData[0]->realVars[277] /* Mixer3.inVapPhasMolFrac[2] variable */);
  TRACE_POP
}
/*
equation index: 121
type: SIMPLE_ASSIGN
MatStm6._compMolFlo[3,2] = MatStm6.compMolFrac[3,2] * MatStm6.totMolFlo[3]
*/
void mixer3_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->localData[0]->realVars[45] /* MatStm6.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[51] /* MatStm6.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[91] /* MatStm6.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 122
type: SIMPLE_ASSIGN
MatStm6._compMolFlo[3,1] = MatStm6.compMolFrac[3,1] * MatStm6.totMolFlo[3]
*/
void mixer3_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  data->localData[0]->realVars[44] /* MatStm6.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[50] /* MatStm6.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[91] /* MatStm6.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc140(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,140};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  /* iteration variables */
  for (i=0; i<5; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<5; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[90] /* MatStm6.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[48] /* MatStm6.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[51] /* MatStm6.compMolFrac[3,2] variable */ = xloc[2];
  data->localData[0]->realVars[50] /* MatStm6.compMolFrac[3,1] variable */ = xloc[3];
  data->localData[0]->realVars[49] /* MatStm6.compMolFrac[2,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  mixer3_eqFunction_116(data, threadData);

  /* local constraints */
  mixer3_eqFunction_117(data, threadData);

  /* local constraints */
  mixer3_eqFunction_118(data, threadData);

  /* local constraints */
  mixer3_eqFunction_119(data, threadData);

  /* local constraints */
  mixer3_eqFunction_120(data, threadData);

  /* local constraints */
  mixer3_eqFunction_121(data, threadData);

  /* local constraints */
  mixer3_eqFunction_122(data, threadData);
  /* body */
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm6.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[51] /* MatStm6.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm6.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[49] /* MatStm6.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[47] /* MatStm6.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[277] /* Mixer3.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[6] /* MatStm6.K[2] variable */),"1.0 + Mixer3.inVapPhasMolFrac[2] * (-1.0 + MatStm6.K[2])",equationIndexes)):data->localData[0]->realVars[49] /* MatStm6.compMolFrac[2,2] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[44] /* MatStm6.compMolFlo[3,1] variable */ + data->localData[0]->realVars[42] /* MatStm6.compMolFlo[2,1] variable */ - data->localData[0]->realVars[40] /* MatStm6.compMolFlo[1,1] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm6.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[91] /* MatStm6.totMolFlo[3] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm6.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[50] /* MatStm6.compMolFrac[3,1] variable */ + data->localData[0]->realVars[51] /* MatStm6.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[90] /* MatStm6.totMolFlo[2] variable */);
  }
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[45] /* MatStm6.compMolFlo[3,2] variable */ + data->localData[0]->realVars[43] /* MatStm6.compMolFlo[2,2] variable */ - data->localData[0]->realVars[41] /* MatStm6.compMolFlo[1,2] variable */;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm6.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[50] /* MatStm6.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm6.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[48] /* MatStm6.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[46] /* MatStm6.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[277] /* Mixer3.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[5] /* MatStm6.K[1] variable */),"1.0 + Mixer3.inVapPhasMolFrac[2] * (-1.0 + MatStm6.K[1])",equationIndexes)):data->localData[0]->realVars[48] /* MatStm6.compMolFrac[2,1] variable */);
  }
  res[4] = tmp11;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS140(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,5,2,3,3,2};
  const int rowIndex[15] = {0,1,2,3,4,1,4,0,2,3,1,2,4,0,3};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(15*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 15;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  inSysData->sparsePattern.maxColors = 3;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 15*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[3] = 1;
  inSysData->sparsePattern.colorCols[4] = 1;
  inSysData->sparsePattern.colorCols[1] = 2;
  inSysData->sparsePattern.colorCols[2] = 2;
  inSysData->sparsePattern.colorCols[0] = 3;
}
void initializeStaticDataNLS140(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm6.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[90].attribute /* MatStm6.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[90].attribute /* MatStm6.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[90].attribute /* MatStm6.totMolFlo[2] */.max;
  /* static nls data for MatStm6.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[48].attribute /* MatStm6.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[48].attribute /* MatStm6.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[48].attribute /* MatStm6.compMolFrac[2,1] */.max;
  /* static nls data for MatStm6.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[51].attribute /* MatStm6.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[51].attribute /* MatStm6.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[51].attribute /* MatStm6.compMolFrac[3,2] */.max;
  /* static nls data for MatStm6.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[50].attribute /* MatStm6.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[50].attribute /* MatStm6.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[50].attribute /* MatStm6.compMolFrac[3,1] */.max;
  /* static nls data for MatStm6.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[49].attribute /* MatStm6.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[49].attribute /* MatStm6.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[49].attribute /* MatStm6.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS140(sysData);
}

void getIterationVarsNLS140(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[90] /* MatStm6.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[48] /* MatStm6.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[51] /* MatStm6.compMolFrac[3,2] variable */;
  array[3] = data->localData[0]->realVars[50] /* MatStm6.compMolFrac[3,1] variable */;
  array[4] = data->localData[0]->realVars[49] /* MatStm6.compMolFrac[2,2] variable */;
}


/* inner equations */

/*
equation index: 62
type: SIMPLE_ASSIGN
MatStm7._compMolFlo[2,1] = MatStm7.compMolFrac[2,1] * MatStm7.totMolFlo[2]
*/
void mixer3_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[132] /* MatStm7.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[138] /* MatStm7.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[180] /* MatStm7.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
MatStm7._compMolFlo[2,2] = MatStm7.compMolFrac[2,2] * MatStm7.totMolFlo[2]
*/
void mixer3_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[133] /* MatStm7.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[139] /* MatStm7.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[180] /* MatStm7.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
MatStm7._liqPhasMolFrac = 0.01 * MatStm7.totMolFlo[2]
*/
void mixer3_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[155] /* MatStm7.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[180] /* MatStm7.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
Mixer3._inVapPhasMolFrac[1] = 1.0 - MatStm7.liqPhasMolFrac
*/
void mixer3_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[276] /* Mixer3.inVapPhasMolFrac[1] variable */ = 1.0 - data->localData[0]->realVars[155] /* MatStm7.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
MatStm7._totMolFlo[3] = 100.0 * Mixer3.inVapPhasMolFrac[1]
*/
void mixer3_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[181] /* MatStm7.totMolFlo[3] variable */ = (100.0) * (data->localData[0]->realVars[276] /* Mixer3.inVapPhasMolFrac[1] variable */);
  TRACE_POP
}
/*
equation index: 67
type: SIMPLE_ASSIGN
MatStm7._compMolFlo[3,1] = MatStm7.compMolFrac[3,1] * MatStm7.totMolFlo[3]
*/
void mixer3_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[134] /* MatStm7.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[140] /* MatStm7.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[181] /* MatStm7.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 68
type: SIMPLE_ASSIGN
MatStm7._compMolFlo[3,2] = MatStm7.compMolFrac[3,2] * MatStm7.totMolFlo[3]
*/
void mixer3_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[135] /* MatStm7.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[141] /* MatStm7.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[181] /* MatStm7.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc86(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,86};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  /* iteration variables */
  for (i=0; i<5; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<5; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[180] /* MatStm7.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[140] /* MatStm7.compMolFrac[3,1] variable */ = xloc[1];
  data->localData[0]->realVars[138] /* MatStm7.compMolFrac[2,1] variable */ = xloc[2];
  data->localData[0]->realVars[141] /* MatStm7.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[139] /* MatStm7.compMolFrac[2,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  mixer3_eqFunction_62(data, threadData);

  /* local constraints */
  mixer3_eqFunction_63(data, threadData);

  /* local constraints */
  mixer3_eqFunction_64(data, threadData);

  /* local constraints */
  mixer3_eqFunction_65(data, threadData);

  /* local constraints */
  mixer3_eqFunction_66(data, threadData);

  /* local constraints */
  mixer3_eqFunction_67(data, threadData);

  /* local constraints */
  mixer3_eqFunction_68(data, threadData);
  /* body */
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm7.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[141] /* MatStm7.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm7.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[139] /* MatStm7.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[137] /* MatStm7.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[276] /* Mixer3.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[96] /* MatStm7.K[2] variable */),"1.0 + Mixer3.inVapPhasMolFrac[1] * (-1.0 + MatStm7.K[2])",equationIndexes)):data->localData[0]->realVars[139] /* MatStm7.compMolFrac[2,2] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[135] /* MatStm7.compMolFlo[3,2] variable */ + data->localData[0]->realVars[133] /* MatStm7.compMolFlo[2,2] variable */ - data->localData[0]->realVars[131] /* MatStm7.compMolFlo[1,2] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm7.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[181] /* MatStm7.totMolFlo[3] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm7.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[140] /* MatStm7.compMolFrac[3,1] variable */ + data->localData[0]->realVars[141] /* MatStm7.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[180] /* MatStm7.totMolFlo[2] variable */);
  }
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[134] /* MatStm7.compMolFlo[3,1] variable */ + data->localData[0]->realVars[132] /* MatStm7.compMolFlo[2,1] variable */ - data->localData[0]->realVars[130] /* MatStm7.compMolFlo[1,1] variable */;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm7.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[140] /* MatStm7.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm7.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[138] /* MatStm7.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[136] /* MatStm7.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[276] /* Mixer3.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[95] /* MatStm7.K[1] variable */),"1.0 + Mixer3.inVapPhasMolFrac[1] * (-1.0 + MatStm7.K[1])",equationIndexes)):data->localData[0]->realVars[138] /* MatStm7.compMolFrac[2,1] variable */);
  }
  res[4] = tmp11;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS86(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,5,3,2,3,2};
  const int rowIndex[15] = {0,1,2,3,4,2,3,4,3,4,0,1,2,0,1};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(15*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 15;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  inSysData->sparsePattern.maxColors = 3;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 15*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[2] = 1;
  inSysData->sparsePattern.colorCols[3] = 1;
  inSysData->sparsePattern.colorCols[1] = 2;
  inSysData->sparsePattern.colorCols[4] = 2;
  inSysData->sparsePattern.colorCols[0] = 3;
}
void initializeStaticDataNLS86(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm7.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[180].attribute /* MatStm7.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[180].attribute /* MatStm7.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[180].attribute /* MatStm7.totMolFlo[2] */.max;
  /* static nls data for MatStm7.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* MatStm7.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* MatStm7.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* MatStm7.compMolFrac[3,1] */.max;
  /* static nls data for MatStm7.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[138].attribute /* MatStm7.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[138].attribute /* MatStm7.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[138].attribute /* MatStm7.compMolFrac[2,1] */.max;
  /* static nls data for MatStm7.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* MatStm7.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* MatStm7.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* MatStm7.compMolFrac[3,2] */.max;
  /* static nls data for MatStm7.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[139].attribute /* MatStm7.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[139].attribute /* MatStm7.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[139].attribute /* MatStm7.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS86(sysData);
}

void getIterationVarsNLS86(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[180] /* MatStm7.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[140] /* MatStm7.compMolFrac[3,1] variable */;
  array[2] = data->localData[0]->realVars[138] /* MatStm7.compMolFrac[2,1] variable */;
  array[3] = data->localData[0]->realVars[141] /* MatStm7.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[139] /* MatStm7.compMolFrac[2,2] variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void mixer3_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[5].equationIndex = 417;
  nonLinearSystemData[5].size = 6;
  nonLinearSystemData[5].homotopySupport = 0;
  nonLinearSystemData[5].mixedSystem = 1;
  nonLinearSystemData[5].residualFunc = residualFunc417;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = NULL;
  nonLinearSystemData[5].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[5].jacobianIndex = -1;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS417;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS417;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  
  nonLinearSystemData[4].equationIndex = 359;
  nonLinearSystemData[4].size = 5;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 0;
  nonLinearSystemData[4].residualFunc = residualFunc359;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = mixer3_functionJacNLSJac4_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = mixer3_initialAnalyticJacobianNLSJac4;
  nonLinearSystemData[4].jacobianIndex = 3 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS359;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS359;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 305;
  nonLinearSystemData[3].size = 5;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 0;
  nonLinearSystemData[3].residualFunc = residualFunc305;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = mixer3_functionJacNLSJac3_column;
  nonLinearSystemData[3].initialAnalyticalJacobian = mixer3_initialAnalyticJacobianNLSJac3;
  nonLinearSystemData[3].jacobianIndex = 2 /*jacInx*/;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS305;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS305;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 180;
  nonLinearSystemData[2].size = 6;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc180;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS180;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS180;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 140;
  nonLinearSystemData[1].size = 5;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 0;
  nonLinearSystemData[1].residualFunc = residualFunc140;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = mixer3_functionJacNLSJac1_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = mixer3_initialAnalyticJacobianNLSJac1;
  nonLinearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS140;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS140;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 86;
  nonLinearSystemData[0].size = 5;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 0;
  nonLinearSystemData[0].residualFunc = residualFunc86;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = mixer3_functionJacNLSJac0_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = mixer3_initialAnalyticJacobianNLSJac0;
  nonLinearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS86;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS86;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

