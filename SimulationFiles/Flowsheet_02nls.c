/* Non Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 138
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,3] = MatStm1.compMolFrac[2,3] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,3] variable */ = (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 139
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->localData[0]->realVars[57] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 140
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->localData[0]->realVars[58] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 141
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 0.01 * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->localData[0]->realVars[82] /* MatStm1.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 142
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[3] = 100.0 - 100.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  data->localData[0]->realVars[106] /* MatStm1.totMolFlo[3] variable */ = 100.0 - ((100.0) * (data->localData[0]->realVars[82] /* MatStm1.liqPhasMolFrac variable */));
  TRACE_POP
}
/*
equation index: 143
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,3] = MatStm1.compMolFrac[3,3] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,3] variable */ = (data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[106] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 144
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->localData[0]->realVars[61] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[106] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 145
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  data->localData[0]->realVars[60] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[106] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc168(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,168};
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
  modelica_boolean tmp11;
  modelica_real tmp12;
  /* iteration variables */
  for (i=0; i<7; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<7; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */ = xloc[1];
  data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */ = xloc[2];
  data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */ = xloc[3];
  data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */ = xloc[4];
  data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */ = xloc[5];
  data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */ = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_138(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_139(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_140(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_141(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_142(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_143(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_144(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_145(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 0, Less);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 1, Greater);
    tmp3 = (tmp1?data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */:data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[8] /* MatStm1.K[1] variable */) * (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */)));
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[60] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[57] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[54] /* MatStm1.compMolFlo[1,1] variable */;

  RELATIONHYSTERESIS(tmp4, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 0, Less);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp5, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 1, Greater);
    tmp7 = (tmp5?data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */:data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[9] /* MatStm1.K[2] variable */) * (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */)));
  }
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[61] /* MatStm1.compMolFlo[3,2] variable */ + data->localData[0]->realVars[58] /* MatStm1.compMolFlo[2,2] variable */ - data->localData[0]->realVars[55] /* MatStm1.compMolFlo[1,2] variable */;

  RELATIONHYSTERESIS(tmp8, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 0, Less);
  res[4] = (tmp8?data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */ + data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */ + data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */ - 1.0:data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */ + data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */ + data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */ - 1.0);

  res[5] = data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,3] variable */ + data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,3] variable */ - data->localData[0]->realVars[56] /* MatStm1.compMolFlo[1,3] variable */;

  RELATIONHYSTERESIS(tmp9, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 0, Less);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp10, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 1, Greater);
    tmp12 = (tmp10?data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */:data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */ - ((data->localData[0]->realVars[10] /* MatStm1.K[3] variable */) * (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */)));
  }
  res[6] = tmp12;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS168(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {1,3,5,4,5,6,4,5,6,0,1,4,2,3,4,2,3,4,0,1,4};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((7+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(21*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 21;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(7*sizeof(int));
  inSysData->sparsePattern.maxColors = 7;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (7+1)*sizeof(int));
  
  for(i=2;i<7+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 21*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[6] = 1;
  inSysData->sparsePattern.colorCols[5] = 2;
  inSysData->sparsePattern.colorCols[4] = 3;
  inSysData->sparsePattern.colorCols[3] = 4;
  inSysData->sparsePattern.colorCols[2] = 5;
  inSysData->sparsePattern.colorCols[1] = 6;
  inSysData->sparsePattern.colorCols[0] = 7;
}
void initializeStaticDataNLS168(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[105].attribute /* MatStm1.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[105].attribute /* MatStm1.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[105].attribute /* MatStm1.totMolFlo[2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,3] */
  sysData->nominal[i] = data->modelData->realVarsData[68].attribute /* MatStm1.compMolFrac[2,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[68].attribute /* MatStm1.compMolFrac[2,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[68].attribute /* MatStm1.compMolFrac[2,3] */.max;
  /* static nls data for MatStm1.compMolFrac[3,3] */
  sysData->nominal[i] = data->modelData->realVarsData[71].attribute /* MatStm1.compMolFrac[3,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[71].attribute /* MatStm1.compMolFrac[3,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[71].attribute /* MatStm1.compMolFrac[3,3] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[66].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[66].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[66].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* static nls data for MatStm1.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[67].attribute /* MatStm1.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[67].attribute /* MatStm1.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[67].attribute /* MatStm1.compMolFrac[2,2] */.max;
  /* static nls data for MatStm1.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[70].attribute /* MatStm1.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[70].attribute /* MatStm1.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[70].attribute /* MatStm1.compMolFrac[3,2] */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[69].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[69].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[69].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS168(sysData);
}

void getIterationVarsNLS168(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */;
  array[2] = data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */;
  array[3] = data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */;
  array[4] = data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */;
  array[5] = data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */;
  array[6] = data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */;
}


/* inner equations */

/*
equation index: 124
type: SIMPLE_ASSIGN
MatStm1._Tbubl = exp($cse14)
*/
void Flowsheet_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */ = exp(data->localData[0]->realVars[4] /* $cse14 variable */);
  TRACE_POP
}
/*
equation index: 125
type: SIMPLE_ASSIGN
$cse13 = exp(MatStm1.comp[1].VP[2] + MatStm1.comp[1].VP[3] / MatStm1.Tbubl + MatStm1.comp[1].VP[4] * $cse14 + MatStm1.comp[1].VP[5] * MatStm1.Tbubl ^ MatStm1.comp[1].VP[6])
*/
void Flowsheet_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
  tmp1 = data->simulationInfo->realParameter[158];
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
  data->localData[0]->realVars[3] /* $cse13 variable */ = exp(data->simulationInfo->realParameter[154] + DIVISION_SIM(data->simulationInfo->realParameter[155],data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */,"MatStm1.Tbubl",equationIndexes) + (data->simulationInfo->realParameter[156]) * (data->localData[0]->realVars[4] /* $cse14 variable */) + (data->simulationInfo->realParameter[157]) * (tmp2));
  TRACE_POP
}
/*
equation index: 126
type: SIMPLE_ASSIGN
$cse16 = exp(MatStm1.comp[3].VP[2] + MatStm1.comp[3].VP[3] / MatStm1.Tbubl + MatStm1.comp[3].VP[4] * $cse14 + MatStm1.comp[3].VP[5] * MatStm1.Tbubl ^ MatStm1.comp[3].VP[6])
*/
void Flowsheet_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
  tmp1 = data->simulationInfo->realParameter[170];
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
  data->localData[0]->realVars[6] /* $cse16 variable */ = exp(data->simulationInfo->realParameter[166] + DIVISION_SIM(data->simulationInfo->realParameter[167],data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */,"MatStm1.Tbubl",equationIndexes) + (data->simulationInfo->realParameter[168]) * (data->localData[0]->realVars[4] /* $cse14 variable */) + (data->simulationInfo->realParameter[169]) * (tmp2));
  TRACE_POP
}
/*
equation index: 127
type: SIMPLE_ASSIGN
$cse15 = exp(MatStm1.comp[2].VP[2] + MatStm1.comp[2].VP[3] / MatStm1.Tbubl + MatStm1.comp[2].VP[4] * $cse14 + MatStm1.comp[2].VP[5] * MatStm1.Tbubl ^ MatStm1.comp[2].VP[6])
*/
void Flowsheet_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
  tmp1 = data->simulationInfo->realParameter[164];
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
  data->localData[0]->realVars[5] /* $cse15 variable */ = exp(data->simulationInfo->realParameter[160] + DIVISION_SIM(data->simulationInfo->realParameter[161],data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */,"MatStm1.Tbubl",equationIndexes) + (data->simulationInfo->realParameter[162]) * (data->localData[0]->realVars[4] /* $cse14 variable */) + (data->simulationInfo->realParameter[163]) * (tmp2));
  TRACE_POP
}

void residualFunc137(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,137};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[4] /* $cse14 variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_124(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_125(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_126(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_127(data, threadData);
  /* body */
  res[0] = -101325.0 + (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[6] /* $cse16 variable */) + (data->localData[0]->realVars[64] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[5] /* $cse15 variable */) + (data->localData[0]->realVars[63] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[3] /* $cse13 variable */);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS137(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 1;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[0] = 1;
}
void initializeStaticDataNLS137(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for $cse14 */
  sysData->nominal[i] = data->modelData->realVarsData[4].attribute /* $cse14 */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[4].attribute /* $cse14 */.min;
  sysData->max[i++]   = data->modelData->realVarsData[4].attribute /* $cse14 */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS137(sysData);
}

void getIterationVarsNLS137(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[4] /* $cse14 variable */;
}


/* inner equations */

/*
equation index: 110
type: SIMPLE_ASSIGN
MatStm1._Tdew = exp($cse10)
*/
void Flowsheet_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  data->localData[0]->realVars[17] /* MatStm1.Tdew variable */ = exp(data->localData[0]->realVars[0] /* $cse10 variable */);
  TRACE_POP
}
/*
equation index: 111
type: SIMPLE_ASSIGN
$cse9 = exp((-MatStm1.comp[1].VP[2]) - MatStm1.comp[1].VP[3] / MatStm1.Tdew - MatStm1.comp[1].VP[4] * $cse10 - MatStm1.comp[1].VP[5] * MatStm1.Tdew ^ MatStm1.comp[1].VP[6])
*/
void Flowsheet_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
  tmp1 = data->simulationInfo->realParameter[158];
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
  data->localData[0]->realVars[7] /* $cse9 variable */ = exp((-data->simulationInfo->realParameter[154]) - (DIVISION_SIM(data->simulationInfo->realParameter[155],data->localData[0]->realVars[17] /* MatStm1.Tdew variable */,"MatStm1.Tdew",equationIndexes)) - ((data->simulationInfo->realParameter[156]) * (data->localData[0]->realVars[0] /* $cse10 variable */)) - ((data->simulationInfo->realParameter[157]) * (tmp2)));
  TRACE_POP
}
/*
equation index: 112
type: SIMPLE_ASSIGN
$cse12 = exp((-MatStm1.comp[3].VP[2]) - MatStm1.comp[3].VP[3] / MatStm1.Tdew - MatStm1.comp[3].VP[4] * $cse10 - MatStm1.comp[3].VP[5] * MatStm1.Tdew ^ MatStm1.comp[3].VP[6])
*/
void Flowsheet_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
  tmp1 = data->simulationInfo->realParameter[170];
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
  data->localData[0]->realVars[2] /* $cse12 variable */ = exp((-data->simulationInfo->realParameter[166]) - (DIVISION_SIM(data->simulationInfo->realParameter[167],data->localData[0]->realVars[17] /* MatStm1.Tdew variable */,"MatStm1.Tdew",equationIndexes)) - ((data->simulationInfo->realParameter[168]) * (data->localData[0]->realVars[0] /* $cse10 variable */)) - ((data->simulationInfo->realParameter[169]) * (tmp2)));
  TRACE_POP
}
/*
equation index: 113
type: SIMPLE_ASSIGN
$cse11 = exp((-MatStm1.comp[2].VP[2]) - MatStm1.comp[2].VP[3] / MatStm1.Tdew - MatStm1.comp[2].VP[4] * $cse10 - MatStm1.comp[2].VP[5] * MatStm1.Tdew ^ MatStm1.comp[2].VP[6])
*/
void Flowsheet_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
  tmp1 = data->simulationInfo->realParameter[164];
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
  data->localData[0]->realVars[1] /* $cse11 variable */ = exp((-data->simulationInfo->realParameter[160]) - (DIVISION_SIM(data->simulationInfo->realParameter[161],data->localData[0]->realVars[17] /* MatStm1.Tdew variable */,"MatStm1.Tdew",equationIndexes)) - ((data->simulationInfo->realParameter[162]) * (data->localData[0]->realVars[0] /* $cse10 variable */)) - ((data->simulationInfo->realParameter[163]) * (tmp2)));
  TRACE_POP
}

void residualFunc123(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,123};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[0] /* $cse10 variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_110(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_111(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_112(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_113(data, threadData);
  /* body */
  res[0] = -9.869232667160129e-006 + (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[2] /* $cse12 variable */) + (data->localData[0]->realVars[64] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[1] /* $cse11 variable */) + (data->localData[0]->realVars[63] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[7] /* $cse9 variable */);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS123(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 1;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[0] = 1;
}
void initializeStaticDataNLS123(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for $cse10 */
  sysData->nominal[i] = data->modelData->realVarsData[0].attribute /* $cse10 */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[0].attribute /* $cse10 */.min;
  sysData->max[i++]   = data->modelData->realVarsData[0].attribute /* $cse10 */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS123(sysData);
}

void getIterationVarsNLS123(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[0] /* $cse10 variable */;
}


/* inner equations */

/*
equation index: 32
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,3] = MatStm1.compMolFrac[2,3] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,3] variable */ = (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[57] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 34
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[58] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 0.01 * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[82] /* MatStm1.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 36
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[3] = 100.0 - 100.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[106] /* MatStm1.totMolFlo[3] variable */ = 100.0 - ((100.0) * (data->localData[0]->realVars[82] /* MatStm1.liqPhasMolFrac variable */));
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[61] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[106] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,3] = MatStm1.compMolFrac[3,3] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,3] variable */ = (data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[106] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->localData[0]->realVars[60] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[106] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc62(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,62};
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
  modelica_boolean tmp11;
  modelica_real tmp12;
  /* iteration variables */
  for (i=0; i<7; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<7; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */ = xloc[1];
  data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */ = xloc[2];
  data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */ = xloc[3];
  data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */ = xloc[4];
  data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */ = xloc[5];
  data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */ = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_32(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_33(data, threadData);

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
  /* body */
  res[0] = data->localData[0]->realVars[61] /* MatStm1.compMolFlo[3,2] variable */ + data->localData[0]->realVars[58] /* MatStm1.compMolFlo[2,2] variable */ - data->localData[0]->realVars[55] /* MatStm1.compMolFlo[1,2] variable */;

  tmp0 = Less(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = Greater(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */:data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[8] /* MatStm1.K[1] variable */) * (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */)));
  }
  res[1] = tmp3;

  res[2] = data->localData[0]->realVars[60] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[57] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[54] /* MatStm1.compMolFlo[1,1] variable */;

  res[3] = data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,3] variable */ + data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,3] variable */ - data->localData[0]->realVars[56] /* MatStm1.compMolFlo[1,3] variable */;

  tmp4 = Less(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp5 = Greater(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */:data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[9] /* MatStm1.K[2] variable */) * (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */)));
  }
  res[4] = tmp7;

  tmp8 = Less(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  res[5] = (tmp8?data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */ + data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */ + data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */ - 1.0:data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */ + data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */ + data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */ - 1.0);

  tmp9 = Less(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */;
  }
  else
  {
    tmp10 = Greater(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp12 = (tmp10?data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */:data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */ - ((data->localData[0]->realVars[10] /* MatStm1.K[3] variable */) * (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */)));
  }
  res[6] = tmp12;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS62(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {0,2,3,3,5,6,3,5,6,0,4,5,0,4,5,1,2,5,1,2,5};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((7+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(21*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 21;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(7*sizeof(int));
  inSysData->sparsePattern.maxColors = 7;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (7+1)*sizeof(int));
  
  for(i=2;i<7+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 21*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[6] = 1;
  inSysData->sparsePattern.colorCols[5] = 2;
  inSysData->sparsePattern.colorCols[4] = 3;
  inSysData->sparsePattern.colorCols[3] = 4;
  inSysData->sparsePattern.colorCols[2] = 5;
  inSysData->sparsePattern.colorCols[1] = 6;
  inSysData->sparsePattern.colorCols[0] = 7;
}
void initializeStaticDataNLS62(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[105].attribute /* MatStm1.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[105].attribute /* MatStm1.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[105].attribute /* MatStm1.totMolFlo[2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,3] */
  sysData->nominal[i] = data->modelData->realVarsData[68].attribute /* MatStm1.compMolFrac[2,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[68].attribute /* MatStm1.compMolFrac[2,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[68].attribute /* MatStm1.compMolFrac[2,3] */.max;
  /* static nls data for MatStm1.compMolFrac[3,3] */
  sysData->nominal[i] = data->modelData->realVarsData[71].attribute /* MatStm1.compMolFrac[3,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[71].attribute /* MatStm1.compMolFrac[3,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[71].attribute /* MatStm1.compMolFrac[3,3] */.max;
  /* static nls data for MatStm1.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[67].attribute /* MatStm1.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[67].attribute /* MatStm1.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[67].attribute /* MatStm1.compMolFrac[2,2] */.max;
  /* static nls data for MatStm1.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[70].attribute /* MatStm1.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[70].attribute /* MatStm1.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[70].attribute /* MatStm1.compMolFrac[3,2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[66].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[66].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[66].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[69].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[69].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[69].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS62(sysData);
}

void getIterationVarsNLS62(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */;
  array[2] = data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */;
  array[3] = data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */;
  array[4] = data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */;
  array[5] = data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */;
  array[6] = data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */;
}


/* inner equations */

void residualFunc28(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,28};
  int i;
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
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.Tbubl) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
  tmp2 = data->simulationInfo->realParameter[158];
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
  }tmp8 = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
  if(!(tmp8 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.Tbubl) was %g should be > 0", tmp8);
  }tmp9 = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
  tmp10 = data->simulationInfo->realParameter[164];
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
  }tmp16 = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
  if(!(tmp16 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.Tbubl) was %g should be > 0", tmp16);
  }tmp17 = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
  tmp18 = data->simulationInfo->realParameter[170];
  if(tmp17 < 0.0 && tmp18 != 0.0)
  {
    tmp20 = modf(tmp18, &tmp21);
    
    if(tmp20 > 0.5)
    {
      tmp20 -= 1.0;
      tmp21 += 1.0;
    }
    else if(tmp20 < -0.5)
    {
      tmp20 += 1.0;
      tmp21 -= 1.0;
    }
    
    if(fabs(tmp20) < 1e-10)
      tmp19 = pow(tmp17, tmp21);
    else
    {
      tmp23 = modf(1.0/tmp18, &tmp22);
      if(tmp23 > 0.5)
      {
        tmp23 -= 1.0;
        tmp22 += 1.0;
      }
      else if(tmp23 < -0.5)
      {
        tmp23 += 1.0;
        tmp22 -= 1.0;
      }
      if(fabs(tmp23) < 1e-10 && ((unsigned long)tmp22 & 1))
      {
        tmp19 = -pow(-tmp17, tmp20)*pow(tmp17, tmp21);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
      }
    }
  }
  else
  {
    tmp19 = pow(tmp17, tmp18);
  }
  if(isnan(tmp19) || isinf(tmp19))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
  }res[0] = -101325.0 + (data->localData[0]->realVars[63] /* MatStm1.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[154] + DIVISION_SIM(data->simulationInfo->realParameter[155],data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */,"MatStm1.Tbubl",equationIndexes) + (data->simulationInfo->realParameter[156]) * (log(tmp0)) + (data->simulationInfo->realParameter[157]) * (tmp3))) + (data->localData[0]->realVars[64] /* MatStm1.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[160] + DIVISION_SIM(data->simulationInfo->realParameter[161],data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */,"MatStm1.Tbubl",equationIndexes) + (data->simulationInfo->realParameter[162]) * (log(tmp8)) + (data->simulationInfo->realParameter[163]) * (tmp11))) + (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,3] variable */) * (exp(data->simulationInfo->realParameter[166] + DIVISION_SIM(data->simulationInfo->realParameter[167],data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */,"MatStm1.Tbubl",equationIndexes) + (data->simulationInfo->realParameter[168]) * (log(tmp16)) + (data->simulationInfo->realParameter[169]) * (tmp19)));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS28(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS28(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.Tbubl */
  sysData->nominal[i] = data->modelData->realVarsData[16].attribute /* MatStm1.Tbubl */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[16].attribute /* MatStm1.Tbubl */.min;
  sysData->max[i++]   = data->modelData->realVarsData[16].attribute /* MatStm1.Tbubl */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS28(sysData);
}

void getIterationVarsNLS28(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
}


/* inner equations */

void residualFunc26(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,26};
  int i;
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
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[17] /* MatStm1.Tdew variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.Tdew) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
  tmp2 = data->simulationInfo->realParameter[158];
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
  }tmp8 = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
  if(!(tmp8 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.Tdew) was %g should be > 0", tmp8);
  }tmp9 = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
  tmp10 = data->simulationInfo->realParameter[164];
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
  }tmp16 = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
  if(!(tmp16 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.Tdew) was %g should be > 0", tmp16);
  }tmp17 = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
  tmp18 = data->simulationInfo->realParameter[170];
  if(tmp17 < 0.0 && tmp18 != 0.0)
  {
    tmp20 = modf(tmp18, &tmp21);
    
    if(tmp20 > 0.5)
    {
      tmp20 -= 1.0;
      tmp21 += 1.0;
    }
    else if(tmp20 < -0.5)
    {
      tmp20 += 1.0;
      tmp21 -= 1.0;
    }
    
    if(fabs(tmp20) < 1e-10)
      tmp19 = pow(tmp17, tmp21);
    else
    {
      tmp23 = modf(1.0/tmp18, &tmp22);
      if(tmp23 > 0.5)
      {
        tmp23 -= 1.0;
        tmp22 += 1.0;
      }
      else if(tmp23 < -0.5)
      {
        tmp23 += 1.0;
        tmp22 -= 1.0;
      }
      if(fabs(tmp23) < 1e-10 && ((unsigned long)tmp22 & 1))
      {
        tmp19 = -pow(-tmp17, tmp20)*pow(tmp17, tmp21);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
      }
    }
  }
  else
  {
    tmp19 = pow(tmp17, tmp18);
  }
  if(isnan(tmp19) || isinf(tmp19))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
  }res[0] = -9.869232667160129e-006 + (data->localData[0]->realVars[63] /* MatStm1.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[154]) - (DIVISION_SIM(data->simulationInfo->realParameter[155],data->localData[0]->realVars[17] /* MatStm1.Tdew variable */,"MatStm1.Tdew",equationIndexes)) - ((data->simulationInfo->realParameter[156]) * (log(tmp0))) - ((data->simulationInfo->realParameter[157]) * (tmp3)))) + (data->localData[0]->realVars[64] /* MatStm1.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[160]) - (DIVISION_SIM(data->simulationInfo->realParameter[161],data->localData[0]->realVars[17] /* MatStm1.Tdew variable */,"MatStm1.Tdew",equationIndexes)) - ((data->simulationInfo->realParameter[162]) * (log(tmp8))) - ((data->simulationInfo->realParameter[163]) * (tmp11)))) + (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,3] variable */) * (exp((-data->simulationInfo->realParameter[166]) - (DIVISION_SIM(data->simulationInfo->realParameter[167],data->localData[0]->realVars[17] /* MatStm1.Tdew variable */,"MatStm1.Tdew",equationIndexes)) - ((data->simulationInfo->realParameter[168]) * (log(tmp16))) - ((data->simulationInfo->realParameter[169]) * (tmp19))));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS26(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS26(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.Tdew */
  sysData->nominal[i] = data->modelData->realVarsData[17].attribute /* MatStm1.Tdew */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[17].attribute /* MatStm1.Tdew */.min;
  sysData->max[i++]   = data->modelData->realVarsData[17].attribute /* MatStm1.Tdew */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS26(sysData);
}

void getIterationVarsNLS26(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void Flowsheet_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[5].equationIndex = 168;
  nonLinearSystemData[5].size = 7;
  nonLinearSystemData[5].homotopySupport = 0;
  nonLinearSystemData[5].mixedSystem = 0;
  nonLinearSystemData[5].residualFunc = residualFunc168;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = Flowsheet_functionJacNLSJac5_column;
  nonLinearSystemData[5].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac5;
  nonLinearSystemData[5].jacobianIndex = 3 /*jacInx*/;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS168;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS168;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  
  nonLinearSystemData[4].equationIndex = 137;
  nonLinearSystemData[4].size = 1;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 0;
  nonLinearSystemData[4].residualFunc = residualFunc137;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = Flowsheet_functionJacNLSJac4_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac4;
  nonLinearSystemData[4].jacobianIndex = 2 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS137;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS137;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 123;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 0;
  nonLinearSystemData[3].residualFunc = residualFunc123;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = Flowsheet_functionJacNLSJac3_column;
  nonLinearSystemData[3].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac3;
  nonLinearSystemData[3].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS123;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS123;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 62;
  nonLinearSystemData[2].size = 7;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 0;
  nonLinearSystemData[2].residualFunc = residualFunc62;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = Flowsheet_functionJacNLSJac2_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac2;
  nonLinearSystemData[2].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS62;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS62;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 28;
  nonLinearSystemData[1].size = 1;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 0;
  nonLinearSystemData[1].residualFunc = residualFunc28;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS28;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS28;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 26;
  nonLinearSystemData[0].size = 1;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 0;
  nonLinearSystemData[0].residualFunc = residualFunc26;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS26;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS26;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

