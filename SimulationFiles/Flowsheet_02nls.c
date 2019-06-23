/* Non Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 424
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->localData[0]->realVars[224] /* MatStm3.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 425
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->localData[0]->realVars[225] /* MatStm3.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 426
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac = 1.0 - 0.02 * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  data->localData[0]->realVars[245] /* MatStm3.liqPhasMolFrac variable */ = 1.0 - ((0.02) * (data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */));
  TRACE_POP
}
/*
equation index: 427
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[2] = 50.0 * MatStm3.liqPhasMolFrac
*/
void Flowsheet_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */ = (50.0) * (data->localData[0]->realVars[245] /* MatStm3.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 428
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->localData[0]->realVars[222] /* MatStm3.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 429
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->localData[0]->realVars[223] /* MatStm3.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc446(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,446};
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
  data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */ = xloc[1];
  data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */ = xloc[2];
  data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_424(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_425(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_426(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_427(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_428(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_429(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp3 = (tmp1?data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[188] /* MatStm3.K[2] variable */) * (data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */)):data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[225] /* MatStm3.compMolFlo[3,2] variable */ + data->localData[0]->realVars[223] /* MatStm3.compMolFlo[2,2] variable */ - data->localData[0]->realVars[221] /* MatStm3.compMolFlo[1,2] variable */;

  res[2] = data->localData[0]->realVars[224] /* MatStm3.compMolFlo[3,1] variable */ + data->localData[0]->realVars[222] /* MatStm3.compMolFlo[2,1] variable */ - data->localData[0]->realVars[220] /* MatStm3.compMolFlo[1,1] variable */;

  RELATIONHYSTERESIS(tmp4, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  res[3] = (tmp4?data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */ + data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */ + data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */ - 1.0);

  RELATIONHYSTERESIS(tmp5, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp6, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp8 = (tmp6?data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[187] /* MatStm3.K[1] variable */) * (data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */)):data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */);
  }
  res[4] = tmp8;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS446(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {1,2,2,3,4,2,3,4,0,1,3,0,1,3};
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
void initializeStaticDataNLS446(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm3.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[270].attribute /* MatStm3.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[270].attribute /* MatStm3.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[270].attribute /* MatStm3.totMolFlo[3] */.max;
  /* static nls data for MatStm3.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[230].attribute /* MatStm3.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[230].attribute /* MatStm3.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[230].attribute /* MatStm3.compMolFrac[3,1] */.max;
  /* static nls data for MatStm3.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[228].attribute /* MatStm3.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[228].attribute /* MatStm3.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[228].attribute /* MatStm3.compMolFrac[2,1] */.max;
  /* static nls data for MatStm3.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[231].attribute /* MatStm3.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[231].attribute /* MatStm3.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[231].attribute /* MatStm3.compMolFrac[3,2] */.max;
  /* static nls data for MatStm3.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[229].attribute /* MatStm3.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[229].attribute /* MatStm3.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[229].attribute /* MatStm3.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS446(sysData);
}

void getIterationVarsNLS446(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */;
  array[2] = data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */;
  array[3] = data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */;
}


/* inner equations */

/*
equation index: 366
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->localData[0]->realVars[135] /* MatStm2.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 367
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->localData[0]->realVars[134] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 368
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac = 0.02 * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->localData[0]->realVars[157] /* MatStm2.liqPhasMolFrac variable */ = (0.02) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 369
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[3] = 50.0 - 50.0 * MatStm2.liqPhasMolFrac
*/
void Flowsheet_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */ = 50.0 - ((50.0) * (data->localData[0]->realVars[157] /* MatStm2.liqPhasMolFrac variable */));
  TRACE_POP
}
/*
equation index: 370
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->localData[0]->realVars[137] /* MatStm2.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 371
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->localData[0]->realVars[136] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc388(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,388};
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
  data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */ = xloc[2];
  data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */ = xloc[3];
  data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_366(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_367(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_368(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_369(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_370(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_371(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp3 = (tmp1?data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[100] /* MatStm2.K[2] variable */) * (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */)):data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[136] /* MatStm2.compMolFlo[3,1] variable */ + data->localData[0]->realVars[134] /* MatStm2.compMolFlo[2,1] variable */ - data->localData[0]->realVars[132] /* MatStm2.compMolFlo[1,1] variable */;

  res[2] = data->localData[0]->realVars[137] /* MatStm2.compMolFlo[3,2] variable */ + data->localData[0]->realVars[135] /* MatStm2.compMolFlo[2,2] variable */ - data->localData[0]->realVars[133] /* MatStm2.compMolFlo[1,2] variable */;

  RELATIONHYSTERESIS(tmp4, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  res[3] = (tmp4?data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */ + data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */ + data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */ - 1.0);

  RELATIONHYSTERESIS(tmp5, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp6, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp8 = (tmp6?data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[99] /* MatStm2.K[1] variable */) * (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */)):data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */);
  }
  res[4] = tmp8;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS388(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {1,2,1,3,4,0,2,3,1,3,4,0,2,3};
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
void initializeStaticDataNLS388(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm2.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[181].attribute /* MatStm2.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[181].attribute /* MatStm2.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[181].attribute /* MatStm2.totMolFlo[2] */.max;
  /* static nls data for MatStm2.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* MatStm2.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* MatStm2.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* MatStm2.compMolFrac[2,1] */.max;
  /* static nls data for MatStm2.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* MatStm2.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* MatStm2.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* MatStm2.compMolFrac[3,2] */.max;
  /* static nls data for MatStm2.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* MatStm2.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* MatStm2.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* MatStm2.compMolFrac[3,1] */.max;
  /* static nls data for MatStm2.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* MatStm2.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* MatStm2.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* MatStm2.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS388(sysData);
}

void getIterationVarsNLS388(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */;
  array[3] = data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */;
  array[4] = data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */;
}


/* inner equations */

/*
equation index: 297
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  data->localData[0]->realVars[45] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 298
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 299
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 0.01 * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 300
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[3] = 100.0 - 100.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */ = 100.0 - ((100.0) * (data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */));
  TRACE_POP
}
/*
equation index: 301
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  data->localData[0]->realVars[47] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 302
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc319(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,319};
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
  data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */ = xloc[1];
  data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */ = xloc[2];
  data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */ = xloc[3];
  data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_297(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_298(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_299(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_300(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_301(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_302(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,2] variable */ + data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,2] variable */ - data->localData[0]->realVars[44] /* MatStm1.compMolFlo[1,2] variable */;

  res[1] = data->localData[0]->realVars[47] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[45] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[43] /* MatStm1.compMolFlo[1,1] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[8] /* MatStm1.K[1] variable */) * (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */)):data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */);
  }
  res[2] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  res[3] = (tmp4?data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */ + data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */ + data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */ - 1.0);

  tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp8 = (tmp6?data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[9] /* MatStm1.K[2] variable */) * (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */)):data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */);
  }
  res[4] = tmp8;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS319(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS319(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[93].attribute /* MatStm1.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[93].attribute /* MatStm1.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[93].attribute /* MatStm1.totMolFlo[2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[52].attribute /* MatStm1.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[52].attribute /* MatStm1.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[52].attribute /* MatStm1.compMolFrac[2,2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[51].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[51].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[51].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* static nls data for MatStm1.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[3,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS319(sysData);
}

void getIterationVarsNLS319(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */;
  array[2] = data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */;
  array[3] = data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */;
  array[4] = data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */;
}


/* inner equations */

/*
equation index: 187
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  data->localData[0]->realVars[222] /* MatStm3.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 188
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  data->localData[0]->realVars[223] /* MatStm3.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 189
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac = 0.02 * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->localData[0]->realVars[245] /* MatStm3.liqPhasMolFrac variable */ = (0.02) * (data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 190
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[3] = 50.0 - 50.0 * MatStm3.liqPhasMolFrac
*/
void Flowsheet_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */ = 50.0 - ((50.0) * (data->localData[0]->realVars[245] /* MatStm3.liqPhasMolFrac variable */));
  TRACE_POP
}
/*
equation index: 191
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->localData[0]->realVars[225] /* MatStm3.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 192
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->localData[0]->realVars[224] /* MatStm3.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc209(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,209};
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
  data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */ = xloc[1];
  data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */ = xloc[2];
  data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_187(data, threadData);

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
  /* body */
  res[0] = data->localData[0]->realVars[224] /* MatStm3.compMolFlo[3,1] variable */ + data->localData[0]->realVars[222] /* MatStm3.compMolFlo[2,1] variable */ - data->localData[0]->realVars[220] /* MatStm3.compMolFlo[1,1] variable */;

  res[1] = data->localData[0]->realVars[225] /* MatStm3.compMolFlo[3,2] variable */ + data->localData[0]->realVars[223] /* MatStm3.compMolFlo[2,2] variable */ - data->localData[0]->realVars[221] /* MatStm3.compMolFlo[1,2] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[188] /* MatStm3.K[2] variable */) * (data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */)):data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */);
  }
  res[2] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  res[3] = (tmp4?data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */ + data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */ + data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */ - 1.0);

  tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp8 = (tmp6?data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[187] /* MatStm3.K[1] variable */) * (data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */)):data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */);
  }
  res[4] = tmp8;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS209(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,1,0,3,4,0,3,4,1,2,3,1,2,3};
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
void initializeStaticDataNLS209(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm3.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[269].attribute /* MatStm3.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[269].attribute /* MatStm3.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[269].attribute /* MatStm3.totMolFlo[2] */.max;
  /* static nls data for MatStm3.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[230].attribute /* MatStm3.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[230].attribute /* MatStm3.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[230].attribute /* MatStm3.compMolFrac[3,1] */.max;
  /* static nls data for MatStm3.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[228].attribute /* MatStm3.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[228].attribute /* MatStm3.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[228].attribute /* MatStm3.compMolFrac[2,1] */.max;
  /* static nls data for MatStm3.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[231].attribute /* MatStm3.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[231].attribute /* MatStm3.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[231].attribute /* MatStm3.compMolFrac[3,2] */.max;
  /* static nls data for MatStm3.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[229].attribute /* MatStm3.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[229].attribute /* MatStm3.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[229].attribute /* MatStm3.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS209(sysData);
}

void getIterationVarsNLS209(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */;
  array[2] = data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */;
  array[3] = data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */;
}


/* inner equations */

/*
equation index: 129
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->localData[0]->realVars[136] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 130
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  data->localData[0]->realVars[137] /* MatStm2.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 131
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac = 1.0 - 0.02 * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->localData[0]->realVars[157] /* MatStm2.liqPhasMolFrac variable */ = 1.0 - ((0.02) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */));
  TRACE_POP
}
/*
equation index: 132
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[2] = 50.0 * MatStm2.liqPhasMolFrac
*/
void Flowsheet_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */ = (50.0) * (data->localData[0]->realVars[157] /* MatStm2.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 133
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->localData[0]->realVars[134] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 134
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->localData[0]->realVars[135] /* MatStm2.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc151(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,151};
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
  data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */ = xloc[1];
  data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */ = xloc[2];
  data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_129(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_130(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_131(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_132(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_133(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_134(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[137] /* MatStm2.compMolFlo[3,2] variable */ + data->localData[0]->realVars[135] /* MatStm2.compMolFlo[2,2] variable */ - data->localData[0]->realVars[133] /* MatStm2.compMolFlo[1,2] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[100] /* MatStm2.K[2] variable */) * (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */)):data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */);
  }
  res[1] = tmp3;

  res[2] = data->localData[0]->realVars[136] /* MatStm2.compMolFlo[3,1] variable */ + data->localData[0]->realVars[134] /* MatStm2.compMolFlo[2,1] variable */ - data->localData[0]->realVars[132] /* MatStm2.compMolFlo[1,1] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  res[3] = (tmp4?data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */ + data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */ + data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */ - 1.0);

  tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp8 = (tmp6?data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[99] /* MatStm2.K[1] variable */) * (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */)):data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */);
  }
  res[4] = tmp8;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS151(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,2,2,3,4,2,3,4,0,1,3,0,1,3};
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
void initializeStaticDataNLS151(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm2.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[182].attribute /* MatStm2.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[182].attribute /* MatStm2.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[182].attribute /* MatStm2.totMolFlo[3] */.max;
  /* static nls data for MatStm2.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* MatStm2.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* MatStm2.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* MatStm2.compMolFrac[3,1] */.max;
  /* static nls data for MatStm2.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* MatStm2.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* MatStm2.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* MatStm2.compMolFrac[2,1] */.max;
  /* static nls data for MatStm2.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* MatStm2.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* MatStm2.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* MatStm2.compMolFrac[3,2] */.max;
  /* static nls data for MatStm2.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* MatStm2.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* MatStm2.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* MatStm2.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS151(sysData);
}

void getIterationVarsNLS151(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */;
  array[2] = data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */;
  array[3] = data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */;
}


/* inner equations */

/*
equation index: 60
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[45] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 0.01 * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[3] = 100.0 - 100.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */ = 100.0 - ((100.0) * (data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */));
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[47] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc82(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,82};
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
  data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */ = xloc[1];
  data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */ = xloc[2];
  data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */ = xloc[3];
  data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_60(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_61(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_62(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_63(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_64(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_65(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[47] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[45] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[43] /* MatStm1.compMolFlo[1,1] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[8] /* MatStm1.K[1] variable */) * (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */)):data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */);
  }
  res[1] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  res[2] = (tmp4?data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */ + data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */ + data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */ - 1.0);

  tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp8 = (tmp6?data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[9] /* MatStm1.K[2] variable */) * (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */)):data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */);
  }
  res[3] = tmp8;

  res[4] = data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,2] variable */ + data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,2] variable */ - data->localData[0]->realVars[44] /* MatStm1.compMolFlo[1,2] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS82(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,4,2,3,4,2,3,4,0,1,2,0,1,2};
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
void initializeStaticDataNLS82(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[93].attribute /* MatStm1.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[93].attribute /* MatStm1.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[93].attribute /* MatStm1.totMolFlo[2] */.max;
  /* static nls data for MatStm1.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[3,2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[52].attribute /* MatStm1.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[52].attribute /* MatStm1.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[52].attribute /* MatStm1.compMolFrac[2,2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[51].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[51].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[51].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS82(sysData);
}

void getIterationVarsNLS82(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */;
  array[2] = data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */;
  array[3] = data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */;
  array[4] = data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void Flowsheet_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[5].equationIndex = 446;
  nonLinearSystemData[5].size = 5;
  nonLinearSystemData[5].homotopySupport = 0;
  nonLinearSystemData[5].mixedSystem = 0;
  nonLinearSystemData[5].residualFunc = residualFunc446;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = Flowsheet_functionJacNLSJac5_column;
  nonLinearSystemData[5].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac5;
  nonLinearSystemData[5].jacobianIndex = 5 /*jacInx*/;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS446;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS446;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  
  nonLinearSystemData[4].equationIndex = 388;
  nonLinearSystemData[4].size = 5;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 0;
  nonLinearSystemData[4].residualFunc = residualFunc388;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = Flowsheet_functionJacNLSJac4_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac4;
  nonLinearSystemData[4].jacobianIndex = 4 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS388;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS388;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 319;
  nonLinearSystemData[3].size = 5;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 0;
  nonLinearSystemData[3].residualFunc = residualFunc319;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = Flowsheet_functionJacNLSJac3_column;
  nonLinearSystemData[3].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac3;
  nonLinearSystemData[3].jacobianIndex = 3 /*jacInx*/;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS319;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS319;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 209;
  nonLinearSystemData[2].size = 5;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 0;
  nonLinearSystemData[2].residualFunc = residualFunc209;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = Flowsheet_functionJacNLSJac2_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac2;
  nonLinearSystemData[2].jacobianIndex = 2 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS209;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS209;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 151;
  nonLinearSystemData[1].size = 5;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 0;
  nonLinearSystemData[1].residualFunc = residualFunc151;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = Flowsheet_functionJacNLSJac1_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac1;
  nonLinearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS151;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS151;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 82;
  nonLinearSystemData[0].size = 5;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 0;
  nonLinearSystemData[0].residualFunc = residualFunc82;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = Flowsheet_functionJacNLSJac0_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac0;
  nonLinearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS82;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS82;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

