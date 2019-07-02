/* Non Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 252
type: SIMPLE_ASSIGN
MatStm1._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[1].VP[1], MatStm1.comp[1].VP[2], MatStm1.comp[1].VP[3], MatStm1.comp[1].VP[4], MatStm1.comp[1].VP[5], MatStm1.comp[1].VP[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[187], (modelica_real)data->simulationInfo->realParameter[188], (modelica_real)data->simulationInfo->realParameter[189], (modelica_real)data->simulationInfo->realParameter[190], (modelica_real)data->simulationInfo->realParameter[191], (modelica_real)data->simulationInfo->realParameter[192]);
  data->localData[0]->realVars[16] /* MatStm1.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[18] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 253
type: SIMPLE_ASSIGN
MatStm1._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[2].VP[1], MatStm1.comp[2].VP[2], MatStm1.comp[2].VP[3], MatStm1.comp[2].VP[4], MatStm1.comp[2].VP[5], MatStm1.comp[2].VP[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[193], (modelica_real)data->simulationInfo->realParameter[194], (modelica_real)data->simulationInfo->realParameter[195], (modelica_real)data->simulationInfo->realParameter[196], (modelica_real)data->simulationInfo->realParameter[197], (modelica_real)data->simulationInfo->realParameter[198]);
  data->localData[0]->realVars[17] /* MatStm1.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[18] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 254
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[34] /* MatStm1.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[170], tmp0, tmp1, data->simulationInfo->realParameter[180], data->localData[0]->realVars[18] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 255
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[35] /* MatStm1.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[169], tmp0, tmp1, data->simulationInfo->realParameter[179], data->localData[0]->realVars[18] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 256
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[33] /* MatStm1.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[169], tmp0, tmp1, data->simulationInfo->realParameter[179], data->localData[0]->realVars[18] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 257
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[36] /* MatStm1.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[170], tmp0, tmp1, data->simulationInfo->realParameter[180], data->localData[0]->realVars[18] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 258
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEnth[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEnth[2,2]
*/
void Flowsheet_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->localData[0]->realVars[72] /* MatStm1.phasMolEnth[2] variable */ = (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[33] /* MatStm1.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[34] /* MatStm1.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 259
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEnth[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEnth[3,2]
*/
void Flowsheet_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->localData[0]->realVars[73] /* MatStm1.phasMolEnth[3] variable */ = (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[35] /* MatStm1.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[36] /* MatStm1.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 260
type: SIMPLE_ASSIGN
MatStm1._K[1] = 8.972069946257301e-006 * MatStm1.Psat[1]
*/
void Flowsheet_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->localData[0]->realVars[8] /* MatStm1.K[1] variable */ = (8.972069946257301e-006) * (data->localData[0]->realVars[16] /* MatStm1.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 261
type: SIMPLE_ASSIGN
MatStm1._K[2] = 8.972069946257301e-006 * MatStm1.Psat[2]
*/
void Flowsheet_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->localData[0]->realVars[9] /* MatStm1.K[2] variable */ = (8.972069946257301e-006) * (data->localData[0]->realVars[17] /* MatStm1.Psat[2] variable */);
  TRACE_POP
}
/*
equation index: 262
type: SIMPLE_ASSIGN
$cse2 = log(MatStm1.T)
*/
void Flowsheet_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[18] /* MatStm1.T variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.T) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[1] /* $cse2 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 263
type: SIMPLE_ASSIGN
$cse5 = exp((-MatStm1.comp[2].VP[2]) - MatStm1.comp[2].VP[3] / MatStm1.T - MatStm1.comp[2].VP[4] * $cse2 - MatStm1.comp[2].VP[5] * MatStm1.T ^ MatStm1.comp[2].VP[6])
*/
void Flowsheet_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[18] /* MatStm1.T variable */;
  tmp1 = data->simulationInfo->realParameter[198];
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
  data->localData[0]->realVars[4] /* $cse5 variable */ = exp((-data->simulationInfo->realParameter[194]) - (DIVISION_SIM(data->simulationInfo->realParameter[195],data->localData[0]->realVars[18] /* MatStm1.T variable */,"MatStm1.T",equationIndexes)) - ((data->simulationInfo->realParameter[196]) * (data->localData[0]->realVars[1] /* $cse2 variable */)) - ((data->simulationInfo->realParameter[197]) * (tmp2)));
  TRACE_POP
}
/*
equation index: 264
type: SIMPLE_ASSIGN
$cse4 = exp((-MatStm1.comp[1].VP[2]) - MatStm1.comp[1].VP[3] / MatStm1.T - MatStm1.comp[1].VP[4] * $cse2 - MatStm1.comp[1].VP[5] * MatStm1.T ^ MatStm1.comp[1].VP[6])
*/
void Flowsheet_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[18] /* MatStm1.T variable */;
  tmp1 = data->simulationInfo->realParameter[192];
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
  data->localData[0]->realVars[3] /* $cse4 variable */ = exp((-data->simulationInfo->realParameter[188]) - (DIVISION_SIM(data->simulationInfo->realParameter[189],data->localData[0]->realVars[18] /* MatStm1.T variable */,"MatStm1.T",equationIndexes)) - ((data->simulationInfo->realParameter[190]) * (data->localData[0]->realVars[1] /* $cse2 variable */)) - ((data->simulationInfo->realParameter[191]) * (tmp2)));
  TRACE_POP
}
/*
equation index: 265
type: SIMPLE_ASSIGN
MatStm1._Pdew = 1.0 / (MatStm1.compMolFrac[1,1] * $cse4 + MatStm1.compMolFrac[1,2] * $cse5)
*/
void Flowsheet_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->localData[0]->realVars[15] /* MatStm1.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[3] /* $cse4 variable */) + (data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[4] /* $cse5 variable */),"MatStm1.compMolFrac[1,1] * $cse4 + MatStm1.compMolFrac[1,2] * $cse5",equationIndexes);
  TRACE_POP
}
/*
equation index: 266
type: SIMPLE_ASSIGN
$cse3 = exp(MatStm1.comp[2].VP[2] + MatStm1.comp[2].VP[3] / MatStm1.T + MatStm1.comp[2].VP[4] * $cse2 + MatStm1.comp[2].VP[5] * MatStm1.T ^ MatStm1.comp[2].VP[6])
*/
void Flowsheet_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[18] /* MatStm1.T variable */;
  tmp1 = data->simulationInfo->realParameter[198];
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
  data->localData[0]->realVars[2] /* $cse3 variable */ = exp(data->simulationInfo->realParameter[194] + DIVISION_SIM(data->simulationInfo->realParameter[195],data->localData[0]->realVars[18] /* MatStm1.T variable */,"MatStm1.T",equationIndexes) + (data->simulationInfo->realParameter[196]) * (data->localData[0]->realVars[1] /* $cse2 variable */) + (data->simulationInfo->realParameter[197]) * (tmp2));
  TRACE_POP
}
/*
equation index: 267
type: SIMPLE_ASSIGN
$cse1 = exp(MatStm1.comp[1].VP[2] + MatStm1.comp[1].VP[3] / MatStm1.T + MatStm1.comp[1].VP[4] * $cse2 + MatStm1.comp[1].VP[5] * MatStm1.T ^ MatStm1.comp[1].VP[6])
*/
void Flowsheet_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[18] /* MatStm1.T variable */;
  tmp1 = data->simulationInfo->realParameter[192];
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
  data->localData[0]->realVars[0] /* $cse1 variable */ = exp(data->simulationInfo->realParameter[188] + DIVISION_SIM(data->simulationInfo->realParameter[189],data->localData[0]->realVars[18] /* MatStm1.T variable */,"MatStm1.T",equationIndexes) + (data->simulationInfo->realParameter[190]) * (data->localData[0]->realVars[1] /* $cse2 variable */) + (data->simulationInfo->realParameter[191]) * (tmp2));
  TRACE_POP
}
/*
equation index: 268
type: SIMPLE_ASSIGN
MatStm1._Pbubl = MatStm1.compMolFrac[1,1] * $cse1 + MatStm1.compMolFrac[1,2] * $cse3
*/
void Flowsheet_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */ = (data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[0] /* $cse1 variable */) + (data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[2] /* $cse3 variable */);
  TRACE_POP
}
/*
equation index: 269
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[92] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 270
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->localData[0]->realVars[45] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[92] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 271
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 0.01 * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[92] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 272
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac = 1.0 - MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->localData[0]->realVars[95] /* MatStm1.vapPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 273
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[3] = 100.0 * MatStm1.vapPhasMolFrac
*/
void Flowsheet_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->localData[0]->realVars[93] /* MatStm1.totMolFlo[3] variable */ = (100.0) * (data->localData[0]->realVars[95] /* MatStm1.vapPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 274
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 275
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  data->localData[0]->realVars[47] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc282(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,282};
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
  data->localData[0]->realVars[92] /* MatStm1.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[18] /* MatStm1.T variable */ = xloc[1];
  data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */ = xloc[2];
  data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */ = xloc[4];
  data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */ = xloc[5];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_252(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_253(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_254(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_255(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_256(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_257(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_258(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_259(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_260(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_261(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_262(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_263(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_264(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_265(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_266(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_267(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_268(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_269(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_270(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_271(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_272(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_273(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_274(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_275(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[95] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[73] /* MatStm1.phasMolEnth[3] variable */) + (data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[72] /* MatStm1.phasMolEnth[2] variable */) - data->localData[0]->realVars[71] /* MatStm1.phasMolEnth[1] variable */;

  RELATIONHYSTERESIS(tmp0, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, 111457.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp3 = (tmp1?data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[8] /* MatStm1.K[1] variable */) * (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */)):data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */);
  }
  res[1] = tmp3;

  res[2] = data->localData[0]->realVars[47] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[45] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[43] /* MatStm1.compMolFlo[1,1] variable */;

  RELATIONHYSTERESIS(tmp4, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  res[3] = (tmp4?data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */ + data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */ + data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */ - 1.0);

  res[4] = data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,2] variable */ + data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,2] variable */ - data->localData[0]->realVars[44] /* MatStm1.compMolFlo[1,2] variable */;

  RELATIONHYSTERESIS(tmp5, 111457.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp6, 111457.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp8 = (tmp6?data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[9] /* MatStm1.K[2] variable */) * (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */)):data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */);
  }
  res[5] = tmp8;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS282(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+6] = {0,3,4,4,4,4,4};
  const int rowIndex[23] = {0,2,4,0,1,3,5,0,3,4,5,0,3,4,5,0,1,2,3,0,1,2,3};
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
void initializeStaticDataNLS282(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[92].attribute /* MatStm1.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[92].attribute /* MatStm1.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[92].attribute /* MatStm1.totMolFlo[2] */.max;
  /* static nls data for MatStm1.T */
  sysData->nominal[i] = data->modelData->realVarsData[18].attribute /* MatStm1.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[18].attribute /* MatStm1.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[18].attribute /* MatStm1.T */.max;
  /* static nls data for MatStm1.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[52].attribute /* MatStm1.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[52].attribute /* MatStm1.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[52].attribute /* MatStm1.compMolFrac[2,2] */.max;
  /* static nls data for MatStm1.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[3,2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[51].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[51].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[51].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS282(sysData);
}

void getIterationVarsNLS282(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[92] /* MatStm1.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[18] /* MatStm1.T variable */;
  array[2] = data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */;
  array[3] = data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */;
  array[5] = data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */;
}


/* inner equations */

/*
equation index: 188
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  data->localData[0]->realVars[135] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 189
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->localData[0]->realVars[136] /* MatStm2.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 190
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac = 0.01 * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  data->localData[0]->realVars[158] /* MatStm2.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 191
type: SIMPLE_ASSIGN
MatStm2._vapPhasMolFrac = 1.0 - MatStm2.liqPhasMolFrac
*/
void Flowsheet_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->localData[0]->realVars[186] /* MatStm2.vapPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[158] /* MatStm2.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 192
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[3] = 100.0 * MatStm2.vapPhasMolFrac
*/
void Flowsheet_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */ = (100.0) * (data->localData[0]->realVars[186] /* MatStm2.vapPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 193
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->localData[0]->realVars[137] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 194
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->localData[0]->realVars[138] /* MatStm2.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc212(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,212};
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
  /* iteration variables */
  for (i=0; i<5; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<5; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */ = xloc[1];
  data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */ = xloc[2];
  data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_188(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_189(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_190(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_191(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_192(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_193(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_194(data, threadData);
  /* body */
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[98] /* MatStm2.K[1] variable */) * (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */)):data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[138] /* MatStm2.compMolFlo[3,2] variable */ + data->localData[0]->realVars[136] /* MatStm2.compMolFlo[2,2] variable */ - data->localData[0]->realVars[134] /* MatStm2.compMolFlo[1,2] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[99] /* MatStm2.K[2] variable */) * (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */)):data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */);
  }
  res[2] = tmp7;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  res[3] = (tmp8?data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */ + data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */ + data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */ - 1.0);

  res[4] = data->localData[0]->realVars[137] /* MatStm2.compMolFlo[3,1] variable */ + data->localData[0]->realVars[135] /* MatStm2.compMolFlo[2,1] variable */ - data->localData[0]->realVars[133] /* MatStm2.compMolFlo[1,1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS212(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {1,4,0,3,4,1,2,3,1,2,3,0,3,4};
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
void initializeStaticDataNLS212(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm2.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[183].attribute /* MatStm2.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[183].attribute /* MatStm2.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[183].attribute /* MatStm2.totMolFlo[2] */.max;
  /* static nls data for MatStm2.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* MatStm2.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* MatStm2.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* MatStm2.compMolFrac[3,1] */.max;
  /* static nls data for MatStm2.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* MatStm2.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* MatStm2.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* MatStm2.compMolFrac[2,2] */.max;
  /* static nls data for MatStm2.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* MatStm2.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* MatStm2.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* MatStm2.compMolFrac[3,2] */.max;
  /* static nls data for MatStm2.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* MatStm2.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* MatStm2.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* MatStm2.compMolFrac[2,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS212(sysData);
}

void getIterationVarsNLS212(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */;
  array[2] = data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */;
  array[3] = data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */;
}


/* inner equations */

/*
equation index: 98
type: SIMPLE_ASSIGN
MatStm1._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[2].VP[1], MatStm1.comp[2].VP[2], MatStm1.comp[2].VP[3], MatStm1.comp[2].VP[4], MatStm1.comp[2].VP[5], MatStm1.comp[2].VP[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[193], (modelica_real)data->simulationInfo->realParameter[194], (modelica_real)data->simulationInfo->realParameter[195], (modelica_real)data->simulationInfo->realParameter[196], (modelica_real)data->simulationInfo->realParameter[197], (modelica_real)data->simulationInfo->realParameter[198]);
  data->localData[0]->realVars[17] /* MatStm1.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[18] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 99
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[33] /* MatStm1.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[169], tmp0, tmp1, data->simulationInfo->realParameter[179], data->localData[0]->realVars[18] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 100
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[35] /* MatStm1.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[169], tmp0, tmp1, data->simulationInfo->realParameter[179], data->localData[0]->realVars[18] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 101
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[34] /* MatStm1.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[170], tmp0, tmp1, data->simulationInfo->realParameter[180], data->localData[0]->realVars[18] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 102
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[36] /* MatStm1.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[170], tmp0, tmp1, data->simulationInfo->realParameter[180], data->localData[0]->realVars[18] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 103
type: SIMPLE_ASSIGN
MatStm1._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[1].VP[1], MatStm1.comp[1].VP[2], MatStm1.comp[1].VP[3], MatStm1.comp[1].VP[4], MatStm1.comp[1].VP[5], MatStm1.comp[1].VP[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[187], (modelica_real)data->simulationInfo->realParameter[188], (modelica_real)data->simulationInfo->realParameter[189], (modelica_real)data->simulationInfo->realParameter[190], (modelica_real)data->simulationInfo->realParameter[191], (modelica_real)data->simulationInfo->realParameter[192]);
  data->localData[0]->realVars[16] /* MatStm1.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[18] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 104
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEnth[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEnth[2,2]
*/
void Flowsheet_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  data->localData[0]->realVars[72] /* MatStm1.phasMolEnth[2] variable */ = (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[33] /* MatStm1.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[34] /* MatStm1.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 105
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEnth[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEnth[3,2]
*/
void Flowsheet_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->localData[0]->realVars[73] /* MatStm1.phasMolEnth[3] variable */ = (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[35] /* MatStm1.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[36] /* MatStm1.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 106
type: SIMPLE_ASSIGN
MatStm1._Pbubl = MatStm1.compMolFrac[1,1] * exp(MatStm1.comp[1].VP[2] + MatStm1.comp[1].VP[3] / MatStm1.T + MatStm1.comp[1].VP[4] * log(MatStm1.T) + MatStm1.comp[1].VP[5] * MatStm1.T ^ MatStm1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp(MatStm1.comp[2].VP[2] + MatStm1.comp[2].VP[3] / MatStm1.T + MatStm1.comp[2].VP[4] * log(MatStm1.T) + MatStm1.comp[2].VP[5] * MatStm1.T ^ MatStm1.comp[2].VP[6])
*/
void Flowsheet_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
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
  tmp0 = data->localData[0]->realVars[18] /* MatStm1.T variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.T) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[18] /* MatStm1.T variable */;
  tmp2 = data->simulationInfo->realParameter[192];
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
  }tmp8 = data->localData[0]->realVars[18] /* MatStm1.T variable */;
  if(!(tmp8 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.T) was %g should be > 0", tmp8);
  }tmp9 = data->localData[0]->realVars[18] /* MatStm1.T variable */;
  tmp10 = data->simulationInfo->realParameter[198];
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
  data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */ = (data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[188] + DIVISION_SIM(data->simulationInfo->realParameter[189],data->localData[0]->realVars[18] /* MatStm1.T variable */,"MatStm1.T",equationIndexes) + (data->simulationInfo->realParameter[190]) * (log(tmp0)) + (data->simulationInfo->realParameter[191]) * (tmp3))) + (data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[194] + DIVISION_SIM(data->simulationInfo->realParameter[195],data->localData[0]->realVars[18] /* MatStm1.T variable */,"MatStm1.T",equationIndexes) + (data->simulationInfo->realParameter[196]) * (log(tmp8)) + (data->simulationInfo->realParameter[197]) * (tmp11)));
  TRACE_POP
}
/*
equation index: 107
type: SIMPLE_ASSIGN
MatStm1._Pdew = 1.0 / (MatStm1.compMolFrac[1,1] * exp((-MatStm1.comp[1].VP[2]) - MatStm1.comp[1].VP[3] / MatStm1.T - MatStm1.comp[1].VP[4] * log(MatStm1.T) - MatStm1.comp[1].VP[5] * MatStm1.T ^ MatStm1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp((-MatStm1.comp[2].VP[2]) - MatStm1.comp[2].VP[3] / MatStm1.T - MatStm1.comp[2].VP[4] * log(MatStm1.T) - MatStm1.comp[2].VP[5] * MatStm1.T ^ MatStm1.comp[2].VP[6]))
*/
void Flowsheet_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
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
  tmp0 = data->localData[0]->realVars[18] /* MatStm1.T variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.T) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[18] /* MatStm1.T variable */;
  tmp2 = data->simulationInfo->realParameter[192];
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
  }tmp8 = data->localData[0]->realVars[18] /* MatStm1.T variable */;
  if(!(tmp8 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.T) was %g should be > 0", tmp8);
  }tmp9 = data->localData[0]->realVars[18] /* MatStm1.T variable */;
  tmp10 = data->simulationInfo->realParameter[198];
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
  data->localData[0]->realVars[15] /* MatStm1.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[188]) - (DIVISION_SIM(data->simulationInfo->realParameter[189],data->localData[0]->realVars[18] /* MatStm1.T variable */,"MatStm1.T",equationIndexes)) - ((data->simulationInfo->realParameter[190]) * (log(tmp0))) - ((data->simulationInfo->realParameter[191]) * (tmp3)))) + (data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[194]) - (DIVISION_SIM(data->simulationInfo->realParameter[195],data->localData[0]->realVars[18] /* MatStm1.T variable */,"MatStm1.T",equationIndexes)) - ((data->simulationInfo->realParameter[196]) * (log(tmp8))) - ((data->simulationInfo->realParameter[197]) * (tmp11)))),"MatStm1.compMolFrac[1,1] * exp((-MatStm1.comp[1].VP[2]) - MatStm1.comp[1].VP[3] / MatStm1.T - MatStm1.comp[1].VP[4] * log(MatStm1.T) - MatStm1.comp[1].VP[5] * MatStm1.T ^ MatStm1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp((-MatStm1.comp[2].VP[2]) - MatStm1.comp[2].VP[3] / MatStm1.T - MatStm1.comp[2].VP[4] * log(MatStm1.T) - MatStm1.comp[2].VP[5] * MatStm1.T ^ MatStm1.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}
/*
equation index: 108
type: SIMPLE_ASSIGN
MatStm1._K[2] = 8.972069946257301e-006 * MatStm1.Psat[2]
*/
void Flowsheet_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  data->localData[0]->realVars[9] /* MatStm1.K[2] variable */ = (8.972069946257301e-006) * (data->localData[0]->realVars[17] /* MatStm1.Psat[2] variable */);
  TRACE_POP
}
/*
equation index: 109
type: SIMPLE_ASSIGN
MatStm1._K[1] = 8.972069946257301e-006 * MatStm1.Psat[1]
*/
void Flowsheet_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  data->localData[0]->realVars[8] /* MatStm1.K[1] variable */ = (8.972069946257301e-006) * (data->localData[0]->realVars[16] /* MatStm1.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 110
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  data->localData[0]->realVars[47] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 111
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 112
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac = 0.01 * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  data->localData[0]->realVars[95] /* MatStm1.vapPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 113
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 1.0 - MatStm1.vapPhasMolFrac
*/
void Flowsheet_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[95] /* MatStm1.vapPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 114
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[2] = 100.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  data->localData[0]->realVars[92] /* MatStm1.totMolFlo[2] variable */ = (100.0) * (data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 115
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  data->localData[0]->realVars[45] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[92] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 116
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[92] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc123(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,123};
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
  /* iteration variables */
  for (i=0; i<6; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<6; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[93] /* MatStm1.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */ = xloc[2];
  data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */ = xloc[3];
  data->localData[0]->realVars[18] /* MatStm1.T variable */ = xloc[4];
  data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */ = xloc[5];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_98(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_99(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_100(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_101(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_102(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_103(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_104(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_105(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_106(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_107(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_108(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_109(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_110(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_111(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_112(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_113(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_114(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_115(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_116(data, threadData);
  /* body */
  tmp0 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(111457.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[8] /* MatStm1.K[1] variable */) * (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */)):data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */);
  }
  res[0] = tmp3;

  tmp4 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp5 = GreaterEq(111457.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[9] /* MatStm1.K[2] variable */) * (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */)):data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */);
  }
  res[1] = tmp7;

  res[2] = data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,2] variable */ + data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,2] variable */ - data->localData[0]->realVars[44] /* MatStm1.compMolFlo[1,2] variable */;

  tmp8 = GreaterEq(111457.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  res[3] = (tmp8?data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */ + data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */ + data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */ - 1.0);

  res[4] = (data->localData[0]->realVars[95] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[73] /* MatStm1.phasMolEnth[3] variable */) + (data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[72] /* MatStm1.phasMolEnth[2] variable */) - data->localData[0]->realVars[71] /* MatStm1.phasMolEnth[1] variable */;

  res[5] = data->localData[0]->realVars[47] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[45] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[43] /* MatStm1.compMolFlo[1,1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS123(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+6] = {0,3,4,4,4,4,4};
  const int rowIndex[23] = {2,4,5,0,3,4,5,1,2,3,4,1,2,3,4,0,1,3,4,0,3,4,5};
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
void initializeStaticDataNLS123(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[93].attribute /* MatStm1.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[93].attribute /* MatStm1.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[93].attribute /* MatStm1.totMolFlo[3] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[51].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[51].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[51].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* static nls data for MatStm1.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[3,2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[52].attribute /* MatStm1.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[52].attribute /* MatStm1.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[52].attribute /* MatStm1.compMolFrac[2,2] */.max;
  /* static nls data for MatStm1.T */
  sysData->nominal[i] = data->modelData->realVarsData[18].attribute /* MatStm1.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[18].attribute /* MatStm1.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[18].attribute /* MatStm1.T */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS123(sysData);
}

void getIterationVarsNLS123(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[93] /* MatStm1.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */;
  array[3] = data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */;
  array[4] = data->localData[0]->realVars[18] /* MatStm1.T variable */;
  array[5] = data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */;
}


/* inner equations */

/*
equation index: 34
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[137] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[138] /* MatStm2.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 36
type: SIMPLE_ASSIGN
MatStm2._vapPhasMolFrac = 0.01 * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[186] /* MatStm2.vapPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac = 1.0 - MatStm2.vapPhasMolFrac
*/
void Flowsheet_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[158] /* MatStm2.liqPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[186] /* MatStm2.vapPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[2] = 100.0 * MatStm2.liqPhasMolFrac
*/
void Flowsheet_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */ = (100.0) * (data->localData[0]->realVars[158] /* MatStm2.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[135] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[136] /* MatStm2.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc58(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,58};
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
  data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */ = xloc[1];
  data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */ = xloc[2];
  data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */ = xloc[3];
  data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_34(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_35(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_36(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_37(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_38(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_39(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_40(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[138] /* MatStm2.compMolFlo[3,2] variable */ + data->localData[0]->realVars[136] /* MatStm2.compMolFlo[2,2] variable */ - data->localData[0]->realVars[134] /* MatStm2.compMolFlo[1,2] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[99] /* MatStm2.K[2] variable */) * (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */)):data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */);
  }
  res[1] = tmp3;

  res[2] = data->localData[0]->realVars[137] /* MatStm2.compMolFlo[3,1] variable */ + data->localData[0]->realVars[135] /* MatStm2.compMolFlo[2,1] variable */ - data->localData[0]->realVars[133] /* MatStm2.compMolFlo[1,1] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  res[3] = (tmp4?data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */ + data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */ + data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */ - 1.0);

  tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp8 = (tmp6?data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[98] /* MatStm2.K[1] variable */) * (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */)):data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */);
  }
  res[4] = tmp8;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS58(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,2,2,3,4,0,1,3,2,3,4,0,1,3};
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
void initializeStaticDataNLS58(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm2.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[184].attribute /* MatStm2.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[184].attribute /* MatStm2.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[184].attribute /* MatStm2.totMolFlo[3] */.max;
  /* static nls data for MatStm2.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* MatStm2.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* MatStm2.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* MatStm2.compMolFrac[3,1] */.max;
  /* static nls data for MatStm2.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[144].attribute /* MatStm2.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[144].attribute /* MatStm2.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[144].attribute /* MatStm2.compMolFrac[3,2] */.max;
  /* static nls data for MatStm2.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* MatStm2.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* MatStm2.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* MatStm2.compMolFrac[2,1] */.max;
  /* static nls data for MatStm2.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* MatStm2.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* MatStm2.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* MatStm2.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS58(sysData);
}

void getIterationVarsNLS58(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */;
  array[2] = data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */;
  array[3] = data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */;
  array[4] = data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void Flowsheet_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[3].equationIndex = 282;
  nonLinearSystemData[3].size = 6;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc282;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS282;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS282;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 212;
  nonLinearSystemData[2].size = 5;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 0;
  nonLinearSystemData[2].residualFunc = residualFunc212;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = Flowsheet_functionJacNLSJac2_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac2;
  nonLinearSystemData[2].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS212;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS212;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 123;
  nonLinearSystemData[1].size = 6;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc123;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS123;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS123;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 58;
  nonLinearSystemData[0].size = 5;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 0;
  nonLinearSystemData[0].residualFunc = residualFunc58;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = Flowsheet_functionJacNLSJac0_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac0;
  nonLinearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS58;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS58;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

