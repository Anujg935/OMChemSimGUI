/* Non Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 168
type: SIMPLE_ASSIGN
MatStm1._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[1].VP[1], MatStm1.comp[1].VP[2], MatStm1.comp[1].VP[3], MatStm1.comp[1].VP[4], MatStm1.comp[1].VP[5], MatStm1.comp[1].VP[6]}, Heater1.outT)
*/
void Flowsheet_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[214], (modelica_real)data->simulationInfo->realParameter[215], (modelica_real)data->simulationInfo->realParameter[216], (modelica_real)data->simulationInfo->realParameter[217], (modelica_real)data->simulationInfo->realParameter[218], (modelica_real)data->simulationInfo->realParameter[219]);
  data->localData[0]->realVars[14] /* MatStm1.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[5] /* Heater1.outT variable */);
  TRACE_POP
}
/*
equation index: 169
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, Heater1.outT)
*/
void Flowsheet_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[220], (modelica_real)data->simulationInfo->realParameter[221], (modelica_real)data->simulationInfo->realParameter[222], (modelica_real)data->simulationInfo->realParameter[223], (modelica_real)data->simulationInfo->realParameter[224], (modelica_real)data->simulationInfo->realParameter[225]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[170], (modelica_real)data->simulationInfo->realParameter[171], (modelica_real)data->simulationInfo->realParameter[172], (modelica_real)data->simulationInfo->realParameter[173], (modelica_real)data->simulationInfo->realParameter[174], (modelica_real)data->simulationInfo->realParameter[175]);
  data->localData[0]->realVars[22] /* MatStm1.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[205], tmp0, tmp1, data->simulationInfo->realParameter[210], data->localData[0]->realVars[5] /* Heater1.outT variable */);
  TRACE_POP
}
/*
equation index: 170
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, Heater1.outT)
*/
void Flowsheet_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[220], (modelica_real)data->simulationInfo->realParameter[221], (modelica_real)data->simulationInfo->realParameter[222], (modelica_real)data->simulationInfo->realParameter[223], (modelica_real)data->simulationInfo->realParameter[224], (modelica_real)data->simulationInfo->realParameter[225]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[170], (modelica_real)data->simulationInfo->realParameter[171], (modelica_real)data->simulationInfo->realParameter[172], (modelica_real)data->simulationInfo->realParameter[173], (modelica_real)data->simulationInfo->realParameter[174], (modelica_real)data->simulationInfo->realParameter[175]);
  data->localData[0]->realVars[23] /* MatStm1.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[205], tmp0, tmp1, data->simulationInfo->realParameter[210], data->localData[0]->realVars[5] /* Heater1.outT variable */);
  TRACE_POP
}
/*
equation index: 171
type: SIMPLE_ASSIGN
MatStm1._K[1] = MatStm1.Psat[1] / Heater1.outP
*/
void Flowsheet_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->localData[0]->realVars[8] /* MatStm1.K[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[14] /* MatStm1.Psat[1] variable */,data->localData[0]->realVars[4] /* Heater1.outP variable */,"Heater1.outP",equationIndexes);
  TRACE_POP
}
/*
equation index: 172
type: SIMPLE_ASSIGN
$cse2 = log(Heater1.outT)
*/
void Flowsheet_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[5] /* Heater1.outT variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Heater1.outT) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[1] /* $cse2 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 173
type: SIMPLE_ASSIGN
$cse1 = exp(MatStm1.comp[1].VP[2] + MatStm1.comp[1].VP[3] / Heater1.outT + MatStm1.comp[1].VP[4] * $cse2 + MatStm1.comp[1].VP[5] * Heater1.outT ^ MatStm1.comp[1].VP[6])
*/
void Flowsheet_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[5] /* Heater1.outT variable */;
  tmp1 = data->simulationInfo->realParameter[219];
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
  data->localData[0]->realVars[0] /* $cse1 variable */ = exp(data->simulationInfo->realParameter[215] + DIVISION_SIM(data->simulationInfo->realParameter[216],data->localData[0]->realVars[5] /* Heater1.outT variable */,"Heater1.outT",equationIndexes) + (data->simulationInfo->realParameter[217]) * (data->localData[0]->realVars[1] /* $cse2 variable */) + (data->simulationInfo->realParameter[218]) * (tmp2));
  TRACE_POP
}
/*
equation index: 174
type: SIMPLE_ASSIGN
MatStm1._Pbubl = MatStm1.compMolFrac[1,1] * $cse1
*/
void Flowsheet_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */ = (data->localData[0]->realVars[30] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[0] /* $cse1 variable */);
  TRACE_POP
}
/*
equation index: 175
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[2,1] = if Heater1.outP >= MatStm1.Pbubl then 1.0 else 0.0
*/
void Flowsheet_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  data->localData[0]->realVars[31] /* MatStm1.compMolFrac[2,1] variable */ = (tmp0?1.0:0.0);
  TRACE_POP
}
/*
equation index: 176
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEnth[2,1]
*/
void Flowsheet_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->localData[0]->realVars[43] /* MatStm1.phasMolEnth[2] variable */ = (data->localData[0]->realVars[31] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[22] /* MatStm1.compMolEnth[2,1] variable */);
  TRACE_POP
}
/*
equation index: 177
type: SIMPLE_ASSIGN
MatStm1._Pdew = $cse1 / MatStm1.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->localData[0]->realVars[13] /* MatStm1.Pdew variable */ = DIVISION_SIM(data->localData[0]->realVars[0] /* $cse1 variable */,data->localData[0]->realVars[30] /* MatStm1.compMolFrac[1,1] variable */,"MatStm1.compMolFrac[1,1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 178
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[3,1] = if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then MatStm1.K[1] * MatStm1.compMolFrac[2,1] else 1.0
*/
void Flowsheet_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[13] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp3 = (tmp1?(data->localData[0]->realVars[8] /* MatStm1.K[1] variable */) * (data->localData[0]->realVars[31] /* MatStm1.compMolFrac[2,1] variable */):1.0);
  }
  data->localData[0]->realVars[32] /* MatStm1.compMolFrac[3,1] variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 179
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEnth[3,1]
*/
void Flowsheet_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->localData[0]->realVars[44] /* MatStm1.phasMolEnth[3] variable */ = (data->localData[0]->realVars[32] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[23] /* MatStm1.compMolEnth[3,1] variable */);
  TRACE_POP
}
/*
equation index: 180
type: SIMPLE_ASSIGN
Heater1._outVapPhasMolFrac = (-MatStm1.liqPhasMolFrac) - -1.0
*/
void Flowsheet_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->localData[0]->realVars[6] /* Heater1.outVapPhasMolFrac variable */ = (-data->localData[0]->realVars[40] /* MatStm1.liqPhasMolFrac variable */) - (-1.0);
  TRACE_POP
}
/*
equation index: 181
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[3] = 100.0 - 100.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->localData[0]->realVars[64] /* MatStm1.totMolFlo[3] variable */ = 100.0 - ((100.0) * (data->localData[0]->realVars[40] /* MatStm1.liqPhasMolFrac variable */));
  TRACE_POP
}
/*
equation index: 182
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->localData[0]->realVars[29] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[32] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[64] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 183
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[2] = 100.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->localData[0]->realVars[63] /* MatStm1.totMolFlo[2] variable */ = (100.0) * (data->localData[0]->realVars[40] /* MatStm1.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 184
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  data->localData[0]->realVars[28] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[31] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[63] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc187(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,187};
  int i;
  /* iteration variables */
  for (i=0; i<2; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<2; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[40] /* MatStm1.liqPhasMolFrac variable */ = xloc[0];
  data->localData[0]->realVars[5] /* Heater1.outT variable */ = xloc[1];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_168(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_169(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_170(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_171(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_172(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_173(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_174(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_175(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_176(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_177(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_178(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_179(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_180(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_181(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_182(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_183(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_184(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[29] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[28] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[27] /* MatStm1.compMolFlo[1,1] variable */;

  res[1] = (data->localData[0]->realVars[6] /* Heater1.outVapPhasMolFrac variable */) * (data->localData[0]->realVars[44] /* MatStm1.phasMolEnth[3] variable */) + (data->localData[0]->realVars[40] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[43] /* MatStm1.phasMolEnth[2] variable */) - data->localData[0]->realVars[42] /* MatStm1.phasMolEnth[1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS187(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+2] = {0,2,2};
  const int rowIndex[4] = {0,1,0,1};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((2+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(4*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 4;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(2*sizeof(int));
  inSysData->sparsePattern.maxColors = 2;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (2+1)*sizeof(int));
  
  for(i=2;i<2+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 4*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[1] = 1;
  inSysData->sparsePattern.colorCols[0] = 2;
}
void initializeStaticDataNLS187(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.liqPhasMolFrac */
  sysData->nominal[i] = data->modelData->realVarsData[40].attribute /* MatStm1.liqPhasMolFrac */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[40].attribute /* MatStm1.liqPhasMolFrac */.min;
  sysData->max[i++]   = data->modelData->realVarsData[40].attribute /* MatStm1.liqPhasMolFrac */.max;
  /* static nls data for Heater1.outT */
  sysData->nominal[i] = data->modelData->realVarsData[5].attribute /* Heater1.outT */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[5].attribute /* Heater1.outT */.min;
  sysData->max[i++]   = data->modelData->realVarsData[5].attribute /* Heater1.outT */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS187(sysData);
}

void getIterationVarsNLS187(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[40] /* MatStm1.liqPhasMolFrac variable */;
  array[1] = data->localData[0]->realVars[5] /* Heater1.outT variable */;
}


/* inner equations */

/*
equation index: 62
type: SIMPLE_ASSIGN
MatStm1._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[1].VP[1], MatStm1.comp[1].VP[2], MatStm1.comp[1].VP[3], MatStm1.comp[1].VP[4], MatStm1.comp[1].VP[5], MatStm1.comp[1].VP[6]}, Heater1.outT)
*/
void Flowsheet_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[214], (modelica_real)data->simulationInfo->realParameter[215], (modelica_real)data->simulationInfo->realParameter[216], (modelica_real)data->simulationInfo->realParameter[217], (modelica_real)data->simulationInfo->realParameter[218], (modelica_real)data->simulationInfo->realParameter[219]);
  data->localData[0]->realVars[14] /* MatStm1.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[5] /* Heater1.outT variable */);
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, Heater1.outT)
*/
void Flowsheet_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[220], (modelica_real)data->simulationInfo->realParameter[221], (modelica_real)data->simulationInfo->realParameter[222], (modelica_real)data->simulationInfo->realParameter[223], (modelica_real)data->simulationInfo->realParameter[224], (modelica_real)data->simulationInfo->realParameter[225]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[170], (modelica_real)data->simulationInfo->realParameter[171], (modelica_real)data->simulationInfo->realParameter[172], (modelica_real)data->simulationInfo->realParameter[173], (modelica_real)data->simulationInfo->realParameter[174], (modelica_real)data->simulationInfo->realParameter[175]);
  data->localData[0]->realVars[23] /* MatStm1.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[205], tmp0, tmp1, data->simulationInfo->realParameter[210], data->localData[0]->realVars[5] /* Heater1.outT variable */);
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, Heater1.outT)
*/
void Flowsheet_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[220], (modelica_real)data->simulationInfo->realParameter[221], (modelica_real)data->simulationInfo->realParameter[222], (modelica_real)data->simulationInfo->realParameter[223], (modelica_real)data->simulationInfo->realParameter[224], (modelica_real)data->simulationInfo->realParameter[225]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[170], (modelica_real)data->simulationInfo->realParameter[171], (modelica_real)data->simulationInfo->realParameter[172], (modelica_real)data->simulationInfo->realParameter[173], (modelica_real)data->simulationInfo->realParameter[174], (modelica_real)data->simulationInfo->realParameter[175]);
  data->localData[0]->realVars[22] /* MatStm1.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[205], tmp0, tmp1, data->simulationInfo->realParameter[210], data->localData[0]->realVars[5] /* Heater1.outT variable */);
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
MatStm1._Pdew = exp(MatStm1.comp[1].VP[2] + MatStm1.comp[1].VP[3] / Heater1.outT + MatStm1.comp[1].VP[4] * log(Heater1.outT) + MatStm1.comp[1].VP[5] * Heater1.outT ^ MatStm1.comp[1].VP[6]) / MatStm1.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp0 = data->localData[0]->realVars[5] /* Heater1.outT variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Heater1.outT) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[5] /* Heater1.outT variable */;
  tmp2 = data->simulationInfo->realParameter[219];
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
  }
  data->localData[0]->realVars[13] /* MatStm1.Pdew variable */ = DIVISION_SIM(exp(data->simulationInfo->realParameter[215] + DIVISION_SIM(data->simulationInfo->realParameter[216],data->localData[0]->realVars[5] /* Heater1.outT variable */,"Heater1.outT",equationIndexes) + (data->simulationInfo->realParameter[217]) * (log(tmp0)) + (data->simulationInfo->realParameter[218]) * (tmp3)),data->localData[0]->realVars[30] /* MatStm1.compMolFrac[1,1] variable */,"MatStm1.compMolFrac[1,1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
MatStm1._Pbubl = MatStm1.compMolFrac[1,1] * exp(MatStm1.comp[1].VP[2] + MatStm1.comp[1].VP[3] / Heater1.outT + MatStm1.comp[1].VP[4] * log(Heater1.outT) + MatStm1.comp[1].VP[5] * Heater1.outT ^ MatStm1.comp[1].VP[6])
*/
void Flowsheet_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp0 = data->localData[0]->realVars[5] /* Heater1.outT variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Heater1.outT) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[5] /* Heater1.outT variable */;
  tmp2 = data->simulationInfo->realParameter[219];
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
  }
  data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */ = (data->localData[0]->realVars[30] /* MatStm1.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[215] + DIVISION_SIM(data->simulationInfo->realParameter[216],data->localData[0]->realVars[5] /* Heater1.outT variable */,"Heater1.outT",equationIndexes) + (data->simulationInfo->realParameter[217]) * (log(tmp0)) + (data->simulationInfo->realParameter[218]) * (tmp3)));
  TRACE_POP
}
/*
equation index: 67
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[2,1] = if Heater1.outP >= MatStm1.Pbubl then 1.0 else 0.0
*/
void Flowsheet_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  modelica_boolean tmp0;
  tmp0 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */);
  data->localData[0]->realVars[31] /* MatStm1.compMolFrac[2,1] variable */ = (tmp0?1.0:0.0);
  TRACE_POP
}
/*
equation index: 68
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEnth[2,1]
*/
void Flowsheet_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[43] /* MatStm1.phasMolEnth[2] variable */ = (data->localData[0]->realVars[31] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[22] /* MatStm1.compMolEnth[2,1] variable */);
  TRACE_POP
}
/*
equation index: 69
type: SIMPLE_ASSIGN
MatStm1._K[1] = MatStm1.Psat[1] / Heater1.outP
*/
void Flowsheet_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->localData[0]->realVars[8] /* MatStm1.K[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[14] /* MatStm1.Psat[1] variable */,data->localData[0]->realVars[4] /* Heater1.outP variable */,"Heater1.outP",equationIndexes);
  TRACE_POP
}
/*
equation index: 70
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[3,1] = if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then MatStm1.K[1] * MatStm1.compMolFrac[2,1] else 1.0
*/
void Flowsheet_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[12] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = 0.0;
  }
  else
  {
    tmp1 = GreaterEq(data->localData[0]->realVars[4] /* Heater1.outP variable */,data->localData[0]->realVars[13] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?(data->localData[0]->realVars[8] /* MatStm1.K[1] variable */) * (data->localData[0]->realVars[31] /* MatStm1.compMolFrac[2,1] variable */):1.0);
  }
  data->localData[0]->realVars[32] /* MatStm1.compMolFrac[3,1] variable */ = tmp3;
  TRACE_POP
}
/*
equation index: 71
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEnth[3,1]
*/
void Flowsheet_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->localData[0]->realVars[44] /* MatStm1.phasMolEnth[3] variable */ = (data->localData[0]->realVars[32] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[23] /* MatStm1.compMolEnth[3,1] variable */);
  TRACE_POP
}
/*
equation index: 72
type: SIMPLE_ASSIGN
Heater1._outVapPhasMolFrac = (-MatStm1.liqPhasMolFrac) - -1.0
*/
void Flowsheet_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[6] /* Heater1.outVapPhasMolFrac variable */ = (-data->localData[0]->realVars[40] /* MatStm1.liqPhasMolFrac variable */) - (-1.0);
  TRACE_POP
}
/*
equation index: 73
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[3] = 100.0 - 100.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[64] /* MatStm1.totMolFlo[3] variable */ = 100.0 - ((100.0) * (data->localData[0]->realVars[40] /* MatStm1.liqPhasMolFrac variable */));
  TRACE_POP
}
/*
equation index: 74
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[29] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[32] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[64] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 75
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[2] = 100.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->localData[0]->realVars[63] /* MatStm1.totMolFlo[2] variable */ = (100.0) * (data->localData[0]->realVars[40] /* MatStm1.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 76
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[28] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[31] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[63] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc79(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,79};
  int i;
  /* iteration variables */
  for (i=0; i<2; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<2; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[40] /* MatStm1.liqPhasMolFrac variable */ = xloc[0];
  data->localData[0]->realVars[5] /* Heater1.outT variable */ = xloc[1];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_62(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_63(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_64(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_65(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_66(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_67(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_68(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_69(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_70(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_71(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_72(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_73(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_74(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_75(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_76(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[29] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[28] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[27] /* MatStm1.compMolFlo[1,1] variable */;

  res[1] = (data->localData[0]->realVars[6] /* Heater1.outVapPhasMolFrac variable */) * (data->localData[0]->realVars[44] /* MatStm1.phasMolEnth[3] variable */) + (data->localData[0]->realVars[40] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[43] /* MatStm1.phasMolEnth[2] variable */) - data->localData[0]->realVars[42] /* MatStm1.phasMolEnth[1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS79(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+2] = {0,2,2};
  const int rowIndex[4] = {0,1,0,1};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((2+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(4*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 4;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(2*sizeof(int));
  inSysData->sparsePattern.maxColors = 2;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (2+1)*sizeof(int));
  
  for(i=2;i<2+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 4*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[1] = 1;
  inSysData->sparsePattern.colorCols[0] = 2;
}
void initializeStaticDataNLS79(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.liqPhasMolFrac */
  sysData->nominal[i] = data->modelData->realVarsData[40].attribute /* MatStm1.liqPhasMolFrac */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[40].attribute /* MatStm1.liqPhasMolFrac */.min;
  sysData->max[i++]   = data->modelData->realVarsData[40].attribute /* MatStm1.liqPhasMolFrac */.max;
  /* static nls data for Heater1.outT */
  sysData->nominal[i] = data->modelData->realVarsData[5].attribute /* Heater1.outT */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[5].attribute /* Heater1.outT */.min;
  sysData->max[i++]   = data->modelData->realVarsData[5].attribute /* Heater1.outT */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS79(sysData);
}

void getIterationVarsNLS79(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[40] /* MatStm1.liqPhasMolFrac variable */;
  array[1] = data->localData[0]->realVars[5] /* Heater1.outT variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void Flowsheet_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[1].equationIndex = 187;
  nonLinearSystemData[1].size = 2;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc187;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS187;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS187;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 79;
  nonLinearSystemData[0].size = 2;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc79;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS79;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS79;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

