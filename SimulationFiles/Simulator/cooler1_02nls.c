/* Non Linear Systems */
#include "cooler1_model.h"
#include "cooler1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 247
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, Cooler1.outT)
*/
void cooler1_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362], (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262], (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264]);
  data->localData[0]->realVars[34] /* MatStm2.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[329], tmp0, tmp1, data->simulationInfo->realParameter[339], data->localData[0]->realVars[8] /* Cooler1.outT variable */);
  TRACE_POP
}
/*
equation index: 248
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[2].SH, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tc, Cooler1.outT)
*/
void cooler1_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368], (modelica_real)data->simulationInfo->realParameter[369], (modelica_real)data->simulationInfo->realParameter[370]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270]);
  data->localData[0]->realVars[35] /* MatStm2.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[330], tmp0, tmp1, data->simulationInfo->realParameter[340], data->localData[0]->realVars[8] /* Cooler1.outT variable */);
  TRACE_POP
}
/*
equation index: 249
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[2].SH, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tc, Cooler1.outT)
*/
void cooler1_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368], (modelica_real)data->simulationInfo->realParameter[369], (modelica_real)data->simulationInfo->realParameter[370]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270]);
  data->localData[0]->realVars[37] /* MatStm2.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[330], tmp0, tmp1, data->simulationInfo->realParameter[340], data->localData[0]->realVars[8] /* Cooler1.outT variable */);
  TRACE_POP
}
/*
equation index: 250
type: SIMPLE_ASSIGN
MatStm2._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[1].VP[1], MatStm2.comp[1].VP[2], MatStm2.comp[1].VP[3], MatStm2.comp[1].VP[4], MatStm2.comp[1].VP[5], MatStm2.comp[1].VP[6]}, Cooler1.outT)
*/
void cooler1_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[347], (modelica_real)data->simulationInfo->realParameter[348], (modelica_real)data->simulationInfo->realParameter[349], (modelica_real)data->simulationInfo->realParameter[350], (modelica_real)data->simulationInfo->realParameter[351], (modelica_real)data->simulationInfo->realParameter[352]);
  data->localData[0]->realVars[18] /* MatStm2.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[8] /* Cooler1.outT variable */);
  TRACE_POP
}
/*
equation index: 251
type: SIMPLE_ASSIGN
MatStm2._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[2].VP[1], MatStm2.comp[2].VP[2], MatStm2.comp[2].VP[3], MatStm2.comp[2].VP[4], MatStm2.comp[2].VP[5], MatStm2.comp[2].VP[6]}, Cooler1.outT)
*/
void cooler1_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[353], (modelica_real)data->simulationInfo->realParameter[354], (modelica_real)data->simulationInfo->realParameter[355], (modelica_real)data->simulationInfo->realParameter[356], (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358]);
  data->localData[0]->realVars[19] /* MatStm2.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[8] /* Cooler1.outT variable */);
  TRACE_POP
}
/*
equation index: 252
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, Cooler1.outT)
*/
void cooler1_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362], (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262], (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264]);
  data->localData[0]->realVars[36] /* MatStm2.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[329], tmp0, tmp1, data->simulationInfo->realParameter[339], data->localData[0]->realVars[8] /* Cooler1.outT variable */);
  TRACE_POP
}
/*
equation index: 253
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolEnth[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolEnth[2,2]
*/
void cooler1_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->localData[0]->realVars[73] /* MatStm2.phasMolEnth[2] variable */ = (data->localData[0]->realVars[52] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[34] /* MatStm2.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[53] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[35] /* MatStm2.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 254
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolEnth[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolEnth[3,2]
*/
void cooler1_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->localData[0]->realVars[74] /* MatStm2.phasMolEnth[3] variable */ = (data->localData[0]->realVars[54] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[36] /* MatStm2.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[55] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[37] /* MatStm2.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 255
type: SIMPLE_ASSIGN
$cse2 = log(Cooler1.outT)
*/
void cooler1_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[8] /* Cooler1.outT variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Cooler1.outT) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[1] /* $cse2 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 256
type: SIMPLE_ASSIGN
$cse5 = exp(MatStm2.comp[2].VP[2] + MatStm2.comp[2].VP[3] / Cooler1.outT + MatStm2.comp[2].VP[4] * $cse2 + MatStm2.comp[2].VP[5] * Cooler1.outT ^ MatStm2.comp[2].VP[6])
*/
void cooler1_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[8] /* Cooler1.outT variable */;
  tmp1 = data->simulationInfo->realParameter[358];
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
  data->localData[0]->realVars[4] /* $cse5 variable */ = exp(data->simulationInfo->realParameter[354] + DIVISION_SIM(data->simulationInfo->realParameter[355],data->localData[0]->realVars[8] /* Cooler1.outT variable */,"Cooler1.outT",equationIndexes) + (data->simulationInfo->realParameter[356]) * (data->localData[0]->realVars[1] /* $cse2 variable */) + (data->simulationInfo->realParameter[357]) * (tmp2));
  TRACE_POP
}
/*
equation index: 257
type: SIMPLE_ASSIGN
$cse4 = exp(MatStm2.comp[1].VP[2] + MatStm2.comp[1].VP[3] / Cooler1.outT + MatStm2.comp[1].VP[4] * $cse2 + MatStm2.comp[1].VP[5] * Cooler1.outT ^ MatStm2.comp[1].VP[6])
*/
void cooler1_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[8] /* Cooler1.outT variable */;
  tmp1 = data->simulationInfo->realParameter[352];
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
  data->localData[0]->realVars[3] /* $cse4 variable */ = exp(data->simulationInfo->realParameter[348] + DIVISION_SIM(data->simulationInfo->realParameter[349],data->localData[0]->realVars[8] /* Cooler1.outT variable */,"Cooler1.outT",equationIndexes) + (data->simulationInfo->realParameter[350]) * (data->localData[0]->realVars[1] /* $cse2 variable */) + (data->simulationInfo->realParameter[351]) * (tmp2));
  TRACE_POP
}
/*
equation index: 258
type: SIMPLE_ASSIGN
$cse3 = exp((-MatStm2.comp[2].VP[2]) - MatStm2.comp[2].VP[3] / Cooler1.outT - MatStm2.comp[2].VP[4] * $cse2 - MatStm2.comp[2].VP[5] * Cooler1.outT ^ MatStm2.comp[2].VP[6])
*/
void cooler1_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[8] /* Cooler1.outT variable */;
  tmp1 = data->simulationInfo->realParameter[358];
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
  data->localData[0]->realVars[2] /* $cse3 variable */ = exp((-data->simulationInfo->realParameter[354]) - (DIVISION_SIM(data->simulationInfo->realParameter[355],data->localData[0]->realVars[8] /* Cooler1.outT variable */,"Cooler1.outT",equationIndexes)) - ((data->simulationInfo->realParameter[356]) * (data->localData[0]->realVars[1] /* $cse2 variable */)) - ((data->simulationInfo->realParameter[357]) * (tmp2)));
  TRACE_POP
}
/*
equation index: 259
type: SIMPLE_ASSIGN
$cse1 = exp((-MatStm2.comp[1].VP[2]) - MatStm2.comp[1].VP[3] / Cooler1.outT - MatStm2.comp[1].VP[4] * $cse2 - MatStm2.comp[1].VP[5] * Cooler1.outT ^ MatStm2.comp[1].VP[6])
*/
void cooler1_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[8] /* Cooler1.outT variable */;
  tmp1 = data->simulationInfo->realParameter[352];
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
  data->localData[0]->realVars[0] /* $cse1 variable */ = exp((-data->simulationInfo->realParameter[348]) - (DIVISION_SIM(data->simulationInfo->realParameter[349],data->localData[0]->realVars[8] /* Cooler1.outT variable */,"Cooler1.outT",equationIndexes)) - ((data->simulationInfo->realParameter[350]) * (data->localData[0]->realVars[1] /* $cse2 variable */)) - ((data->simulationInfo->realParameter[351]) * (tmp2)));
  TRACE_POP
}
/*
equation index: 260
type: SIMPLE_ASSIGN
MatStm2._Pdew = 1.0 / (MatStm2.compMolFrac[1,1] * $cse1 + MatStm2.compMolFrac[1,2] * $cse3)
*/
void cooler1_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->localData[0]->realVars[17] /* MatStm2.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[50] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[0] /* $cse1 variable */) + (data->localData[0]->realVars[51] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[2] /* $cse3 variable */),"MatStm2.compMolFrac[1,1] * $cse1 + MatStm2.compMolFrac[1,2] * $cse3",equationIndexes);
  TRACE_POP
}
/*
equation index: 261
type: SIMPLE_ASSIGN
MatStm2._Pbubl = MatStm2.compMolFrac[1,1] * $cse4 + MatStm2.compMolFrac[1,2] * $cse5
*/
void cooler1_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */ = (data->localData[0]->realVars[50] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[3] /* $cse4 variable */) + (data->localData[0]->realVars[51] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[4] /* $cse5 variable */);
  TRACE_POP
}
/*
equation index: 262
type: SIMPLE_ASSIGN
MatStm2._K[1] = MatStm2.Psat[1] / Cooler1.outP
*/
void cooler1_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->localData[0]->realVars[11] /* MatStm2.K[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[18] /* MatStm2.Psat[1] variable */,data->localData[0]->realVars[7] /* Cooler1.outP variable */,"Cooler1.outP",equationIndexes);
  TRACE_POP
}
/*
equation index: 263
type: SIMPLE_ASSIGN
MatStm2._K[2] = MatStm2.Psat[2] / Cooler1.outP
*/
void cooler1_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->localData[0]->realVars[12] /* MatStm2.K[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[19] /* MatStm2.Psat[2] variable */,data->localData[0]->realVars[7] /* Cooler1.outP variable */,"Cooler1.outP",equationIndexes);
  TRACE_POP
}
/*
equation index: 264
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo[3]
*/
void cooler1_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->localData[0]->realVars[49] /* MatStm2.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[55] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[94] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 265
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void cooler1_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->localData[0]->realVars[48] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[54] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[94] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 266
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac = 1.0 - 0.01 * MatStm2.totMolFlo[3]
*/
void cooler1_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->localData[0]->realVars[69] /* MatStm2.liqPhasMolFrac variable */ = 1.0 - ((0.01) * (data->localData[0]->realVars[94] /* MatStm2.totMolFlo[3] variable */));
  TRACE_POP
}
/*
equation index: 267
type: SIMPLE_ASSIGN
Cooler1._outVapPhasMolFrac = (-MatStm2.liqPhasMolFrac) - -1.0
*/
void cooler1_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  data->localData[0]->realVars[9] /* Cooler1.outVapPhasMolFrac variable */ = (-data->localData[0]->realVars[69] /* MatStm2.liqPhasMolFrac variable */) - (-1.0);
  TRACE_POP
}
/*
equation index: 268
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[2] = 100.0 * MatStm2.liqPhasMolFrac
*/
void cooler1_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->localData[0]->realVars[93] /* MatStm2.totMolFlo[2] variable */ = (100.0) * (data->localData[0]->realVars[69] /* MatStm2.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 269
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo[2]
*/
void cooler1_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->localData[0]->realVars[47] /* MatStm2.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[53] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[93] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 270
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void cooler1_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->localData[0]->realVars[46] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[52] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[93] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc277(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,277};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  /* iteration variables */
  for (i=0; i<6; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<6; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[94] /* MatStm2.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[8] /* Cooler1.outT variable */ = xloc[1];
  data->localData[0]->realVars[54] /* MatStm2.compMolFrac[3,1] variable */ = xloc[2];
  data->localData[0]->realVars[52] /* MatStm2.compMolFrac[2,1] variable */ = xloc[3];
  data->localData[0]->realVars[53] /* MatStm2.compMolFrac[2,2] variable */ = xloc[4];
  data->localData[0]->realVars[55] /* MatStm2.compMolFrac[3,2] variable */ = xloc[5];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  cooler1_eqFunction_247(data, threadData);

  /* local constraints */
  cooler1_eqFunction_248(data, threadData);

  /* local constraints */
  cooler1_eqFunction_249(data, threadData);

  /* local constraints */
  cooler1_eqFunction_250(data, threadData);

  /* local constraints */
  cooler1_eqFunction_251(data, threadData);

  /* local constraints */
  cooler1_eqFunction_252(data, threadData);

  /* local constraints */
  cooler1_eqFunction_253(data, threadData);

  /* local constraints */
  cooler1_eqFunction_254(data, threadData);

  /* local constraints */
  cooler1_eqFunction_255(data, threadData);

  /* local constraints */
  cooler1_eqFunction_256(data, threadData);

  /* local constraints */
  cooler1_eqFunction_257(data, threadData);

  /* local constraints */
  cooler1_eqFunction_258(data, threadData);

  /* local constraints */
  cooler1_eqFunction_259(data, threadData);

  /* local constraints */
  cooler1_eqFunction_260(data, threadData);

  /* local constraints */
  cooler1_eqFunction_261(data, threadData);

  /* local constraints */
  cooler1_eqFunction_262(data, threadData);

  /* local constraints */
  cooler1_eqFunction_263(data, threadData);

  /* local constraints */
  cooler1_eqFunction_264(data, threadData);

  /* local constraints */
  cooler1_eqFunction_265(data, threadData);

  /* local constraints */
  cooler1_eqFunction_266(data, threadData);

  /* local constraints */
  cooler1_eqFunction_267(data, threadData);

  /* local constraints */
  cooler1_eqFunction_268(data, threadData);

  /* local constraints */
  cooler1_eqFunction_269(data, threadData);

  /* local constraints */
  cooler1_eqFunction_270(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[48] /* MatStm2.compMolFlo[3,1] variable */ + data->localData[0]->realVars[46] /* MatStm2.compMolFlo[2,1] variable */ - data->localData[0]->realVars[44] /* MatStm2.compMolFlo[1,1] variable */;

  res[1] = data->localData[0]->realVars[49] /* MatStm2.compMolFlo[3,2] variable */ + data->localData[0]->realVars[47] /* MatStm2.compMolFlo[2,2] variable */ - data->localData[0]->realVars[45] /* MatStm2.compMolFlo[1,2] variable */;

  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[55] /* MatStm2.compMolFrac[3,2] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[17] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp3 = (tmp1?data->localData[0]->realVars[55] /* MatStm2.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[12] /* MatStm2.K[2] variable */) * (data->localData[0]->realVars[53] /* MatStm2.compMolFrac[2,2] variable */)):data->localData[0]->realVars[53] /* MatStm2.compMolFrac[2,2] variable */);
  }
  res[2] = tmp3;

  res[3] = (data->localData[0]->realVars[9] /* Cooler1.outVapPhasMolFrac variable */) * (data->localData[0]->realVars[74] /* MatStm2.phasMolEnth[3] variable */) + (data->localData[0]->realVars[69] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[73] /* MatStm2.phasMolEnth[2] variable */) - data->localData[0]->realVars[72] /* MatStm2.phasMolEnth[1] variable */;

  RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  res[4] = (tmp4?data->localData[0]->realVars[52] /* MatStm2.compMolFrac[2,1] variable */ + data->localData[0]->realVars[53] /* MatStm2.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[54] /* MatStm2.compMolFrac[3,1] variable */ + data->localData[0]->realVars[55] /* MatStm2.compMolFrac[3,2] variable */ - 1.0);

  RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[54] /* MatStm2.compMolFrac[3,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp6, data->localData[0]->realVars[7] /* Cooler1.outP variable */, data->localData[0]->realVars[17] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp8 = (tmp6?data->localData[0]->realVars[54] /* MatStm2.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[11] /* MatStm2.K[1] variable */) * (data->localData[0]->realVars[52] /* MatStm2.compMolFrac[2,1] variable */)):data->localData[0]->realVars[52] /* MatStm2.compMolFrac[2,1] variable */);
  }
  res[5] = tmp8;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS277(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+6] = {0,3,4,4,4,4,4};
  const int rowIndex[23] = {0,1,3,2,3,4,5,0,3,4,5,0,3,4,5,1,2,3,4,1,2,3,4};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((6+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(23*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 23;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(6*sizeof(int));
  inSysData->sparsePattern.maxColors = 6;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (6+1)*sizeof(int));
  
  for(i=2;i<6+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 23*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[5] = 1;
  inSysData->sparsePattern.colorCols[4] = 2;
  inSysData->sparsePattern.colorCols[3] = 3;
  inSysData->sparsePattern.colorCols[2] = 4;
  inSysData->sparsePattern.colorCols[1] = 5;
  inSysData->sparsePattern.colorCols[0] = 6;
}
void initializeStaticDataNLS277(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm2.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* MatStm2.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* MatStm2.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* MatStm2.totMolFlo[3] */.max;
  /* static nls data for Cooler1.outT */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* Cooler1.outT */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* Cooler1.outT */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* Cooler1.outT */.max;
  /* static nls data for MatStm2.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* MatStm2.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* MatStm2.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* MatStm2.compMolFrac[3,1] */.max;
  /* static nls data for MatStm2.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[52].attribute /* MatStm2.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[52].attribute /* MatStm2.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[52].attribute /* MatStm2.compMolFrac[2,1] */.max;
  /* static nls data for MatStm2.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* MatStm2.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* MatStm2.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* MatStm2.compMolFrac[2,2] */.max;
  /* static nls data for MatStm2.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[55].attribute /* MatStm2.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[55].attribute /* MatStm2.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[55].attribute /* MatStm2.compMolFrac[3,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS277(sysData);
}

void getIterationVarsNLS277(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[94] /* MatStm2.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[8] /* Cooler1.outT variable */;
  array[2] = data->localData[0]->realVars[54] /* MatStm2.compMolFrac[3,1] variable */;
  array[3] = data->localData[0]->realVars[52] /* MatStm2.compMolFrac[2,1] variable */;
  array[4] = data->localData[0]->realVars[53] /* MatStm2.compMolFrac[2,2] variable */;
  array[5] = data->localData[0]->realVars[55] /* MatStm2.compMolFrac[3,2] variable */;
}


/* inner equations */

/*
equation index: 185
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo[2]
*/
void cooler1_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  data->localData[0]->realVars[135] /* MatStm3.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[141] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[183] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 186
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo[2]
*/
void cooler1_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  data->localData[0]->realVars[136] /* MatStm3.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[142] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[183] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 187
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac = 0.01 * MatStm3.totMolFlo[2]
*/
void cooler1_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  data->localData[0]->realVars[158] /* MatStm3.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[183] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 188
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[3] = 100.0 - 100.0 * MatStm3.liqPhasMolFrac
*/
void cooler1_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  data->localData[0]->realVars[184] /* MatStm3.totMolFlo[3] variable */ = 100.0 - ((100.0) * (data->localData[0]->realVars[158] /* MatStm3.liqPhasMolFrac variable */));
  TRACE_POP
}
/*
equation index: 189
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo[3]
*/
void cooler1_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->localData[0]->realVars[137] /* MatStm3.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[143] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[184] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 190
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo[3]
*/
void cooler1_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  data->localData[0]->realVars[138] /* MatStm3.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[144] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[184] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc207(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,207};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  /* iteration variables */
  for (i=0; i<5; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<5; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[183] /* MatStm3.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[142] /* MatStm3.compMolFrac[2,2] variable */ = xloc[1];
  data->localData[0]->realVars[141] /* MatStm3.compMolFrac[2,1] variable */ = xloc[2];
  data->localData[0]->realVars[143] /* MatStm3.compMolFrac[3,1] variable */ = xloc[3];
  data->localData[0]->realVars[144] /* MatStm3.compMolFrac[3,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  cooler1_eqFunction_185(data, threadData);

  /* local constraints */
  cooler1_eqFunction_186(data, threadData);

  /* local constraints */
  cooler1_eqFunction_187(data, threadData);

  /* local constraints */
  cooler1_eqFunction_188(data, threadData);

  /* local constraints */
  cooler1_eqFunction_189(data, threadData);

  /* local constraints */
  cooler1_eqFunction_190(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[138] /* MatStm3.compMolFlo[3,2] variable */ + data->localData[0]->realVars[136] /* MatStm3.compMolFlo[2,2] variable */ - data->localData[0]->realVars[134] /* MatStm3.compMolFlo[1,2] variable */;

  res[1] = data->localData[0]->realVars[137] /* MatStm3.compMolFlo[3,1] variable */ + data->localData[0]->realVars[135] /* MatStm3.compMolFlo[2,1] variable */ - data->localData[0]->realVars[133] /* MatStm3.compMolFlo[1,1] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[143] /* MatStm3.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[143] /* MatStm3.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[98] /* MatStm3.K[1] variable */) * (data->localData[0]->realVars[141] /* MatStm3.compMolFrac[2,1] variable */)):data->localData[0]->realVars[141] /* MatStm3.compMolFrac[2,1] variable */);
  }
  res[2] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  res[3] = (tmp4?data->localData[0]->realVars[141] /* MatStm3.compMolFrac[2,1] variable */ + data->localData[0]->realVars[142] /* MatStm3.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[143] /* MatStm3.compMolFrac[3,1] variable */ + data->localData[0]->realVars[144] /* MatStm3.compMolFrac[3,2] variable */ - 1.0);

  tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[144] /* MatStm3.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp8 = (tmp6?data->localData[0]->realVars[144] /* MatStm3.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[99] /* MatStm3.K[2] variable */) * (data->localData[0]->realVars[142] /* MatStm3.compMolFrac[2,2] variable */)):data->localData[0]->realVars[142] /* MatStm3.compMolFrac[2,2] variable */);
  }
  res[4] = tmp8;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS207(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,1,0,3,4,1,2,3,1,2,3,0,3,4};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(14*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 14;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  inSysData->sparsePattern.maxColors = 5;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 14*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[4] = 1;
  inSysData->sparsePattern.colorCols[3] = 2;
  inSysData->sparsePattern.colorCols[2] = 3;
  inSysData->sparsePattern.colorCols[1] = 4;
  inSysData->sparsePattern.colorCols[0] = 5;
}
void initializeStaticDataNLS207(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm3.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[183].attribute /* MatStm3.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[183].attribute /* MatStm3.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[183].attribute /* MatStm3.totMolFlo[2] */.max;
  /* static nls data for MatStm3.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* MatStm3.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* MatStm3.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* MatStm3.compMolFrac[2,2] */.max;
  /* static nls data for MatStm3.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* MatStm3.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* MatStm3.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* MatStm3.compMolFrac[2,1] */.max;
  /* static nls data for MatStm3.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* MatStm3.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* MatStm3.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* MatStm3.compMolFrac[3,1] */.max;
  /* static nls data for MatStm3.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* MatStm3.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* MatStm3.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* MatStm3.compMolFrac[3,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS207(sysData);
}

void getIterationVarsNLS207(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[183] /* MatStm3.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[142] /* MatStm3.compMolFrac[2,2] variable */;
  array[2] = data->localData[0]->realVars[141] /* MatStm3.compMolFrac[2,1] variable */;
  array[3] = data->localData[0]->realVars[143] /* MatStm3.compMolFrac[3,1] variable */;
  array[4] = data->localData[0]->realVars[144] /* MatStm3.compMolFrac[3,2] variable */;
}


/* inner equations */

/*
equation index: 94
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[2].SH, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tc, Cooler1.outT)
*/
void cooler1_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368], (modelica_real)data->simulationInfo->realParameter[369], (modelica_real)data->simulationInfo->realParameter[370]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270]);
  data->localData[0]->realVars[37] /* MatStm2.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[330], tmp0, tmp1, data->simulationInfo->realParameter[340], data->localData[0]->realVars[8] /* Cooler1.outT variable */);
  TRACE_POP
}
/*
equation index: 95
type: SIMPLE_ASSIGN
MatStm2._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[2].VP[1], MatStm2.comp[2].VP[2], MatStm2.comp[2].VP[3], MatStm2.comp[2].VP[4], MatStm2.comp[2].VP[5], MatStm2.comp[2].VP[6]}, Cooler1.outT)
*/
void cooler1_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[353], (modelica_real)data->simulationInfo->realParameter[354], (modelica_real)data->simulationInfo->realParameter[355], (modelica_real)data->simulationInfo->realParameter[356], (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358]);
  data->localData[0]->realVars[19] /* MatStm2.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[8] /* Cooler1.outT variable */);
  TRACE_POP
}
/*
equation index: 96
type: SIMPLE_ASSIGN
MatStm2._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[1].VP[1], MatStm2.comp[1].VP[2], MatStm2.comp[1].VP[3], MatStm2.comp[1].VP[4], MatStm2.comp[1].VP[5], MatStm2.comp[1].VP[6]}, Cooler1.outT)
*/
void cooler1_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[347], (modelica_real)data->simulationInfo->realParameter[348], (modelica_real)data->simulationInfo->realParameter[349], (modelica_real)data->simulationInfo->realParameter[350], (modelica_real)data->simulationInfo->realParameter[351], (modelica_real)data->simulationInfo->realParameter[352]);
  data->localData[0]->realVars[18] /* MatStm2.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[8] /* Cooler1.outT variable */);
  TRACE_POP
}
/*
equation index: 97
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[2].SH, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tc, Cooler1.outT)
*/
void cooler1_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368], (modelica_real)data->simulationInfo->realParameter[369], (modelica_real)data->simulationInfo->realParameter[370]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270]);
  data->localData[0]->realVars[35] /* MatStm2.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[330], tmp0, tmp1, data->simulationInfo->realParameter[340], data->localData[0]->realVars[8] /* Cooler1.outT variable */);
  TRACE_POP
}
/*
equation index: 98
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, Cooler1.outT)
*/
void cooler1_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362], (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262], (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264]);
  data->localData[0]->realVars[36] /* MatStm2.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[329], tmp0, tmp1, data->simulationInfo->realParameter[339], data->localData[0]->realVars[8] /* Cooler1.outT variable */);
  TRACE_POP
}
/*
equation index: 99
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, Cooler1.outT)
*/
void cooler1_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362], (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262], (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264]);
  data->localData[0]->realVars[34] /* MatStm2.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[329], tmp0, tmp1, data->simulationInfo->realParameter[339], data->localData[0]->realVars[8] /* Cooler1.outT variable */);
  TRACE_POP
}
/*
equation index: 100
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolEnth[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolEnth[2,2]
*/
void cooler1_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  data->localData[0]->realVars[73] /* MatStm2.phasMolEnth[2] variable */ = (data->localData[0]->realVars[52] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[34] /* MatStm2.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[53] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[35] /* MatStm2.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 101
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolEnth[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolEnth[3,2]
*/
void cooler1_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  data->localData[0]->realVars[74] /* MatStm2.phasMolEnth[3] variable */ = (data->localData[0]->realVars[54] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[36] /* MatStm2.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[55] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[37] /* MatStm2.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 102
type: SIMPLE_ASSIGN
MatStm2._Pdew = 1.0 / (MatStm2.compMolFrac[1,1] * exp((-MatStm2.comp[1].VP[2]) - MatStm2.comp[1].VP[3] / Cooler1.outT - MatStm2.comp[1].VP[4] * log(Cooler1.outT) - MatStm2.comp[1].VP[5] * Cooler1.outT ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp((-MatStm2.comp[2].VP[2]) - MatStm2.comp[2].VP[3] / Cooler1.outT - MatStm2.comp[2].VP[4] * log(Cooler1.outT) - MatStm2.comp[2].VP[5] * Cooler1.outT ^ MatStm2.comp[2].VP[6]))
*/
void cooler1_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
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
  tmp0 = data->localData[0]->realVars[8] /* Cooler1.outT variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Cooler1.outT) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[8] /* Cooler1.outT variable */;
  tmp2 = data->simulationInfo->realParameter[352];
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
  }tmp8 = data->localData[0]->realVars[8] /* Cooler1.outT variable */;
  if(!(tmp8 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Cooler1.outT) was %g should be > 0", tmp8);
  }tmp9 = data->localData[0]->realVars[8] /* Cooler1.outT variable */;
  tmp10 = data->simulationInfo->realParameter[358];
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
  data->localData[0]->realVars[17] /* MatStm2.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[50] /* MatStm2.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[348]) - (DIVISION_SIM(data->simulationInfo->realParameter[349],data->localData[0]->realVars[8] /* Cooler1.outT variable */,"Cooler1.outT",equationIndexes)) - ((data->simulationInfo->realParameter[350]) * (log(tmp0))) - ((data->simulationInfo->realParameter[351]) * (tmp3)))) + (data->localData[0]->realVars[51] /* MatStm2.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[354]) - (DIVISION_SIM(data->simulationInfo->realParameter[355],data->localData[0]->realVars[8] /* Cooler1.outT variable */,"Cooler1.outT",equationIndexes)) - ((data->simulationInfo->realParameter[356]) * (log(tmp8))) - ((data->simulationInfo->realParameter[357]) * (tmp11)))),"MatStm2.compMolFrac[1,1] * exp((-MatStm2.comp[1].VP[2]) - MatStm2.comp[1].VP[3] / Cooler1.outT - MatStm2.comp[1].VP[4] * log(Cooler1.outT) - MatStm2.comp[1].VP[5] * Cooler1.outT ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp((-MatStm2.comp[2].VP[2]) - MatStm2.comp[2].VP[3] / Cooler1.outT - MatStm2.comp[2].VP[4] * log(Cooler1.outT) - MatStm2.comp[2].VP[5] * Cooler1.outT ^ MatStm2.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}
/*
equation index: 103
type: SIMPLE_ASSIGN
MatStm2._Pbubl = MatStm2.compMolFrac[1,1] * exp(MatStm2.comp[1].VP[2] + MatStm2.comp[1].VP[3] / Cooler1.outT + MatStm2.comp[1].VP[4] * log(Cooler1.outT) + MatStm2.comp[1].VP[5] * Cooler1.outT ^ MatStm2.comp[1].VP[6]) + MatStm2.compMolFrac[1,2] * exp(MatStm2.comp[2].VP[2] + MatStm2.comp[2].VP[3] / Cooler1.outT + MatStm2.comp[2].VP[4] * log(Cooler1.outT) + MatStm2.comp[2].VP[5] * Cooler1.outT ^ MatStm2.comp[2].VP[6])
*/
void cooler1_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
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
  tmp0 = data->localData[0]->realVars[8] /* Cooler1.outT variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Cooler1.outT) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[8] /* Cooler1.outT variable */;
  tmp2 = data->simulationInfo->realParameter[352];
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
  }tmp8 = data->localData[0]->realVars[8] /* Cooler1.outT variable */;
  if(!(tmp8 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Cooler1.outT) was %g should be > 0", tmp8);
  }tmp9 = data->localData[0]->realVars[8] /* Cooler1.outT variable */;
  tmp10 = data->simulationInfo->realParameter[358];
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
  data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */ = (data->localData[0]->realVars[50] /* MatStm2.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[348] + DIVISION_SIM(data->simulationInfo->realParameter[349],data->localData[0]->realVars[8] /* Cooler1.outT variable */,"Cooler1.outT",equationIndexes) + (data->simulationInfo->realParameter[350]) * (log(tmp0)) + (data->simulationInfo->realParameter[351]) * (tmp3))) + (data->localData[0]->realVars[51] /* MatStm2.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[354] + DIVISION_SIM(data->simulationInfo->realParameter[355],data->localData[0]->realVars[8] /* Cooler1.outT variable */,"Cooler1.outT",equationIndexes) + (data->simulationInfo->realParameter[356]) * (log(tmp8)) + (data->simulationInfo->realParameter[357]) * (tmp11)));
  TRACE_POP
}
/*
equation index: 104
type: SIMPLE_ASSIGN
MatStm2._K[2] = MatStm2.Psat[2] / Cooler1.outP
*/
void cooler1_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  data->localData[0]->realVars[12] /* MatStm2.K[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[19] /* MatStm2.Psat[2] variable */,data->localData[0]->realVars[7] /* Cooler1.outP variable */,"Cooler1.outP",equationIndexes);
  TRACE_POP
}
/*
equation index: 105
type: SIMPLE_ASSIGN
MatStm2._K[1] = MatStm2.Psat[1] / Cooler1.outP
*/
void cooler1_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->localData[0]->realVars[11] /* MatStm2.K[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[18] /* MatStm2.Psat[1] variable */,data->localData[0]->realVars[7] /* Cooler1.outP variable */,"Cooler1.outP",equationIndexes);
  TRACE_POP
}
/*
equation index: 106
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo[3]
*/
void cooler1_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  data->localData[0]->realVars[49] /* MatStm2.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[55] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[94] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 107
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void cooler1_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->localData[0]->realVars[48] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[54] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[94] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 108
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac = 1.0 - 0.01 * MatStm2.totMolFlo[3]
*/
void cooler1_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  data->localData[0]->realVars[69] /* MatStm2.liqPhasMolFrac variable */ = 1.0 - ((0.01) * (data->localData[0]->realVars[94] /* MatStm2.totMolFlo[3] variable */));
  TRACE_POP
}
/*
equation index: 109
type: SIMPLE_ASSIGN
Cooler1._outVapPhasMolFrac = (-MatStm2.liqPhasMolFrac) - -1.0
*/
void cooler1_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  data->localData[0]->realVars[9] /* Cooler1.outVapPhasMolFrac variable */ = (-data->localData[0]->realVars[69] /* MatStm2.liqPhasMolFrac variable */) - (-1.0);
  TRACE_POP
}
/*
equation index: 110
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[2] = 100.0 * MatStm2.liqPhasMolFrac
*/
void cooler1_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  data->localData[0]->realVars[93] /* MatStm2.totMolFlo[2] variable */ = (100.0) * (data->localData[0]->realVars[69] /* MatStm2.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 111
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo[2]
*/
void cooler1_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  data->localData[0]->realVars[47] /* MatStm2.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[53] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[93] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 112
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void cooler1_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  data->localData[0]->realVars[46] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[52] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[93] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc119(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,119};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  /* iteration variables */
  for (i=0; i<6; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<6; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[94] /* MatStm2.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[54] /* MatStm2.compMolFrac[3,1] variable */ = xloc[1];
  data->localData[0]->realVars[55] /* MatStm2.compMolFrac[3,2] variable */ = xloc[2];
  data->localData[0]->realVars[53] /* MatStm2.compMolFrac[2,2] variable */ = xloc[3];
  data->localData[0]->realVars[8] /* Cooler1.outT variable */ = xloc[4];
  data->localData[0]->realVars[52] /* MatStm2.compMolFrac[2,1] variable */ = xloc[5];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  cooler1_eqFunction_94(data, threadData);

  /* local constraints */
  cooler1_eqFunction_95(data, threadData);

  /* local constraints */
  cooler1_eqFunction_96(data, threadData);

  /* local constraints */
  cooler1_eqFunction_97(data, threadData);

  /* local constraints */
  cooler1_eqFunction_98(data, threadData);

  /* local constraints */
  cooler1_eqFunction_99(data, threadData);

  /* local constraints */
  cooler1_eqFunction_100(data, threadData);

  /* local constraints */
  cooler1_eqFunction_101(data, threadData);

  /* local constraints */
  cooler1_eqFunction_102(data, threadData);

  /* local constraints */
  cooler1_eqFunction_103(data, threadData);

  /* local constraints */
  cooler1_eqFunction_104(data, threadData);

  /* local constraints */
  cooler1_eqFunction_105(data, threadData);

  /* local constraints */
  cooler1_eqFunction_106(data, threadData);

  /* local constraints */
  cooler1_eqFunction_107(data, threadData);

  /* local constraints */
  cooler1_eqFunction_108(data, threadData);

  /* local constraints */
  cooler1_eqFunction_109(data, threadData);

  /* local constraints */
  cooler1_eqFunction_110(data, threadData);

  /* local constraints */
  cooler1_eqFunction_111(data, threadData);

  /* local constraints */
  cooler1_eqFunction_112(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[48] /* MatStm2.compMolFlo[3,1] variable */ + data->localData[0]->realVars[46] /* MatStm2.compMolFlo[2,1] variable */ - data->localData[0]->realVars[44] /* MatStm2.compMolFlo[1,1] variable */;

  res[1] = data->localData[0]->realVars[49] /* MatStm2.compMolFlo[3,2] variable */ + data->localData[0]->realVars[47] /* MatStm2.compMolFlo[2,2] variable */ - data->localData[0]->realVars[45] /* MatStm2.compMolFlo[1,2] variable */;

  res[2] = (data->localData[0]->realVars[9] /* Cooler1.outVapPhasMolFrac variable */) * (data->localData[0]->realVars[74] /* MatStm2.phasMolEnth[3] variable */) + (data->localData[0]->realVars[69] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[73] /* MatStm2.phasMolEnth[2] variable */) - data->localData[0]->realVars[72] /* MatStm2.phasMolEnth[1] variable */;

  tmp0 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[55] /* MatStm2.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp1 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[17] /* MatStm2.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[55] /* MatStm2.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[12] /* MatStm2.K[2] variable */) * (data->localData[0]->realVars[53] /* MatStm2.compMolFrac[2,2] variable */)):data->localData[0]->realVars[53] /* MatStm2.compMolFrac[2,2] variable */);
  }
  res[3] = tmp3;

  tmp4 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  res[4] = (tmp4?data->localData[0]->realVars[52] /* MatStm2.compMolFrac[2,1] variable */ + data->localData[0]->realVars[53] /* MatStm2.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[54] /* MatStm2.compMolFrac[3,1] variable */ + data->localData[0]->realVars[55] /* MatStm2.compMolFrac[3,2] variable */ - 1.0);

  tmp5 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[54] /* MatStm2.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp6 = GreaterEq(data->localData[0]->realVars[7] /* Cooler1.outP variable */,data->localData[0]->realVars[17] /* MatStm2.Pdew variable */);
    tmp8 = (tmp6?data->localData[0]->realVars[54] /* MatStm2.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[11] /* MatStm2.K[1] variable */) * (data->localData[0]->realVars[52] /* MatStm2.compMolFrac[2,1] variable */)):data->localData[0]->realVars[52] /* MatStm2.compMolFrac[2,1] variable */);
  }
  res[5] = tmp8;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS119(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+6] = {0,3,4,4,4,4,4};
  const int rowIndex[23] = {0,1,2,0,2,4,5,1,2,3,4,1,2,3,4,2,3,4,5,0,2,4,5};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((6+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(23*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 23;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(6*sizeof(int));
  inSysData->sparsePattern.maxColors = 6;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (6+1)*sizeof(int));
  
  for(i=2;i<6+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 23*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[5] = 1;
  inSysData->sparsePattern.colorCols[4] = 2;
  inSysData->sparsePattern.colorCols[3] = 3;
  inSysData->sparsePattern.colorCols[2] = 4;
  inSysData->sparsePattern.colorCols[1] = 5;
  inSysData->sparsePattern.colorCols[0] = 6;
}
void initializeStaticDataNLS119(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm2.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* MatStm2.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* MatStm2.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* MatStm2.totMolFlo[3] */.max;
  /* static nls data for MatStm2.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* MatStm2.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* MatStm2.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* MatStm2.compMolFrac[3,1] */.max;
  /* static nls data for MatStm2.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[55].attribute /* MatStm2.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[55].attribute /* MatStm2.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[55].attribute /* MatStm2.compMolFrac[3,2] */.max;
  /* static nls data for MatStm2.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* MatStm2.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* MatStm2.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* MatStm2.compMolFrac[2,2] */.max;
  /* static nls data for Cooler1.outT */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* Cooler1.outT */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* Cooler1.outT */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* Cooler1.outT */.max;
  /* static nls data for MatStm2.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[52].attribute /* MatStm2.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[52].attribute /* MatStm2.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[52].attribute /* MatStm2.compMolFrac[2,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS119(sysData);
}

void getIterationVarsNLS119(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[94] /* MatStm2.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[54] /* MatStm2.compMolFrac[3,1] variable */;
  array[2] = data->localData[0]->realVars[55] /* MatStm2.compMolFrac[3,2] variable */;
  array[3] = data->localData[0]->realVars[53] /* MatStm2.compMolFrac[2,2] variable */;
  array[4] = data->localData[0]->realVars[8] /* Cooler1.outT variable */;
  array[5] = data->localData[0]->realVars[52] /* MatStm2.compMolFrac[2,1] variable */;
}


/* inner equations */

/*
equation index: 32
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo[3]
*/
void cooler1_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[138] /* MatStm3.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[144] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[184] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo[3]
*/
void cooler1_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[137] /* MatStm3.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[143] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[184] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 34
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac = 1.0 - 0.01 * MatStm3.totMolFlo[3]
*/
void cooler1_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[158] /* MatStm3.liqPhasMolFrac variable */ = 1.0 - ((0.01) * (data->localData[0]->realVars[184] /* MatStm3.totMolFlo[3] variable */));
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[2] = 100.0 * MatStm3.liqPhasMolFrac
*/
void cooler1_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[183] /* MatStm3.totMolFlo[2] variable */ = (100.0) * (data->localData[0]->realVars[158] /* MatStm3.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 36
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo[2]
*/
void cooler1_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[136] /* MatStm3.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[142] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[183] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo[2]
*/
void cooler1_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[135] /* MatStm3.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[141] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[183] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc54(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,54};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  /* iteration variables */
  for (i=0; i<5; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<5; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[184] /* MatStm3.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[141] /* MatStm3.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[143] /* MatStm3.compMolFrac[3,1] variable */ = xloc[2];
  data->localData[0]->realVars[144] /* MatStm3.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[142] /* MatStm3.compMolFrac[2,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  cooler1_eqFunction_32(data, threadData);

  /* local constraints */
  cooler1_eqFunction_33(data, threadData);

  /* local constraints */
  cooler1_eqFunction_34(data, threadData);

  /* local constraints */
  cooler1_eqFunction_35(data, threadData);

  /* local constraints */
  cooler1_eqFunction_36(data, threadData);

  /* local constraints */
  cooler1_eqFunction_37(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[137] /* MatStm3.compMolFlo[3,1] variable */ + data->localData[0]->realVars[135] /* MatStm3.compMolFlo[2,1] variable */ - data->localData[0]->realVars[133] /* MatStm3.compMolFlo[1,1] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[144] /* MatStm3.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[144] /* MatStm3.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[99] /* MatStm3.K[2] variable */) * (data->localData[0]->realVars[142] /* MatStm3.compMolFrac[2,2] variable */)):data->localData[0]->realVars[142] /* MatStm3.compMolFrac[2,2] variable */);
  }
  res[1] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  res[2] = (tmp4?data->localData[0]->realVars[141] /* MatStm3.compMolFrac[2,1] variable */ + data->localData[0]->realVars[142] /* MatStm3.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[143] /* MatStm3.compMolFrac[3,1] variable */ + data->localData[0]->realVars[144] /* MatStm3.compMolFrac[3,2] variable */ - 1.0);

  tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm3.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[143] /* MatStm3.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm3.Pdew variable */);
    tmp8 = (tmp6?data->localData[0]->realVars[143] /* MatStm3.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[98] /* MatStm3.K[1] variable */) * (data->localData[0]->realVars[141] /* MatStm3.compMolFrac[2,1] variable */)):data->localData[0]->realVars[141] /* MatStm3.compMolFrac[2,1] variable */);
  }
  res[3] = tmp8;

  res[4] = data->localData[0]->realVars[138] /* MatStm3.compMolFlo[3,2] variable */ + data->localData[0]->realVars[136] /* MatStm3.compMolFlo[2,2] variable */ - data->localData[0]->realVars[134] /* MatStm3.compMolFlo[1,2] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS54(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,4,0,2,3,0,2,3,1,2,4,1,2,4};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(14*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 14;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  inSysData->sparsePattern.maxColors = 5;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 14*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[4] = 1;
  inSysData->sparsePattern.colorCols[3] = 2;
  inSysData->sparsePattern.colorCols[2] = 3;
  inSysData->sparsePattern.colorCols[1] = 4;
  inSysData->sparsePattern.colorCols[0] = 5;
}
void initializeStaticDataNLS54(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm3.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[184].attribute /* MatStm3.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[184].attribute /* MatStm3.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[184].attribute /* MatStm3.totMolFlo[3] */.max;
  /* static nls data for MatStm3.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* MatStm3.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* MatStm3.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* MatStm3.compMolFrac[2,1] */.max;
  /* static nls data for MatStm3.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* MatStm3.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* MatStm3.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* MatStm3.compMolFrac[3,1] */.max;
  /* static nls data for MatStm3.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* MatStm3.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* MatStm3.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* MatStm3.compMolFrac[3,2] */.max;
  /* static nls data for MatStm3.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* MatStm3.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* MatStm3.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* MatStm3.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS54(sysData);
}

void getIterationVarsNLS54(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[184] /* MatStm3.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[141] /* MatStm3.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[143] /* MatStm3.compMolFrac[3,1] variable */;
  array[3] = data->localData[0]->realVars[144] /* MatStm3.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[142] /* MatStm3.compMolFrac[2,2] variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void cooler1_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[3].equationIndex = 277;
  nonLinearSystemData[3].size = 6;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc277;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS277;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS277;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 207;
  nonLinearSystemData[2].size = 5;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 0;
  nonLinearSystemData[2].residualFunc = residualFunc207;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = cooler1_functionJacNLSJac2_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = cooler1_initialAnalyticJacobianNLSJac2;
  nonLinearSystemData[2].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS207;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS207;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 119;
  nonLinearSystemData[1].size = 6;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc119;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS119;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS119;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 54;
  nonLinearSystemData[0].size = 5;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 0;
  nonLinearSystemData[0].residualFunc = residualFunc54;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = cooler1_functionJacNLSJac0_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = cooler1_initialAnalyticJacobianNLSJac0;
  nonLinearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS54;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS54;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

