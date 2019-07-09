/* Non Linear Systems */
#include "splitter1_model.h"
#include "splitter1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 429
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void splitter1_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->localData[0]->realVars[136] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 430
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo[3]
*/
void splitter1_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  data->localData[0]->realVars[137] /* MatStm2.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 431
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac = 1.0 - 0.02 * MatStm2.totMolFlo[3]
*/
void splitter1_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  data->localData[0]->realVars[157] /* MatStm2.liqPhasMolFrac variable */ = 1.0 - ((0.02) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */));
  TRACE_POP
}
/*
equation index: 432
type: SIMPLE_ASSIGN
MatStm2._vapPhasMolFrac = (-MatStm2.liqPhasMolFrac) - -1.0
*/
void splitter1_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  data->localData[0]->realVars[184] /* MatStm2.vapPhasMolFrac variable */ = (-data->localData[0]->realVars[157] /* MatStm2.liqPhasMolFrac variable */) - (-1.0);
  TRACE_POP
}
/*
equation index: 433
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[2] = 50.0 * MatStm2.liqPhasMolFrac
*/
void splitter1_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */ = (50.0) * (data->localData[0]->realVars[157] /* MatStm2.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 434
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void splitter1_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  data->localData[0]->realVars[134] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 435
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo[2]
*/
void splitter1_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  data->localData[0]->realVars[135] /* MatStm2.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc453(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,453};
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
  data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */ = xloc[2];
  data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  splitter1_eqFunction_429(data, threadData);

  /* local constraints */
  splitter1_eqFunction_430(data, threadData);

  /* local constraints */
  splitter1_eqFunction_431(data, threadData);

  /* local constraints */
  splitter1_eqFunction_432(data, threadData);

  /* local constraints */
  splitter1_eqFunction_433(data, threadData);

  /* local constraints */
  splitter1_eqFunction_434(data, threadData);

  /* local constraints */
  splitter1_eqFunction_435(data, threadData);
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
    tmp3 = (tmp1?data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[184] /* MatStm2.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[100] /* MatStm2.K[2] variable */),"1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[2])",equationIndexes)):data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[137] /* MatStm2.compMolFlo[3,2] variable */ + data->localData[0]->realVars[135] /* MatStm2.compMolFlo[2,2] variable */ - data->localData[0]->realVars[133] /* MatStm2.compMolFlo[1,2] variable */;

  RELATIONHYSTERESIS(tmp4, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp5, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp7 = (tmp5?data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */ + data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  }
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[136] /* MatStm2.compMolFlo[3,1] variable */ + data->localData[0]->realVars[134] /* MatStm2.compMolFlo[2,1] variable */ - data->localData[0]->realVars[132] /* MatStm2.compMolFlo[1,1] variable */;

  RELATIONHYSTERESIS(tmp8, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp9, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp11 = (tmp9?data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[138] /* MatStm2.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[184] /* MatStm2.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[99] /* MatStm2.K[1] variable */),"1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[1])",equationIndexes)):data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */);
  }
  res[4] = tmp11;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS453(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,5,2,3,3,2};
  const int rowIndex[15] = {0,1,2,3,4,3,4,2,3,4,0,1,2,0,1};
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
  inSysData->sparsePattern.colorCols[4] = 1;
  inSysData->sparsePattern.colorCols[1] = 2;
  inSysData->sparsePattern.colorCols[3] = 2;
  inSysData->sparsePattern.colorCols[0] = 3;
}
void initializeStaticDataNLS453(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm2.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[182].attribute /* MatStm2.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[182].attribute /* MatStm2.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[182].attribute /* MatStm2.totMolFlo[3] */.max;
  /* static nls data for MatStm2.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* MatStm2.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* MatStm2.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* MatStm2.compMolFrac[2,1] */.max;
  /* static nls data for MatStm2.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* MatStm2.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* MatStm2.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* MatStm2.compMolFrac[3,1] */.max;
  /* static nls data for MatStm2.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* MatStm2.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* MatStm2.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* MatStm2.compMolFrac[3,2] */.max;
  /* static nls data for MatStm2.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* MatStm2.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* MatStm2.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* MatStm2.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS453(sysData);
}

void getIterationVarsNLS453(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */;
  array[3] = data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */;
}


/* inner equations */

/*
equation index: 370
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo[3]
*/
void splitter1_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->localData[0]->realVars[224] /* MatStm3.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 371
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo[3]
*/
void splitter1_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->localData[0]->realVars[225] /* MatStm3.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 372
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac = 1.0 - 0.02 * MatStm3.totMolFlo[3]
*/
void splitter1_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->localData[0]->realVars[245] /* MatStm3.liqPhasMolFrac variable */ = 1.0 - ((0.02) * (data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */));
  TRACE_POP
}
/*
equation index: 373
type: SIMPLE_ASSIGN
MatStm3._vapPhasMolFrac = (-MatStm3.liqPhasMolFrac) - -1.0
*/
void splitter1_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->localData[0]->realVars[272] /* MatStm3.vapPhasMolFrac variable */ = (-data->localData[0]->realVars[245] /* MatStm3.liqPhasMolFrac variable */) - (-1.0);
  TRACE_POP
}
/*
equation index: 374
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[2] = 50.0 * MatStm3.liqPhasMolFrac
*/
void splitter1_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */ = (50.0) * (data->localData[0]->realVars[245] /* MatStm3.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 375
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo[2]
*/
void splitter1_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->localData[0]->realVars[222] /* MatStm3.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 376
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo[2]
*/
void splitter1_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->localData[0]->realVars[223] /* MatStm3.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc394(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,394};
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
  data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */ = xloc[2];
  data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  splitter1_eqFunction_370(data, threadData);

  /* local constraints */
  splitter1_eqFunction_371(data, threadData);

  /* local constraints */
  splitter1_eqFunction_372(data, threadData);

  /* local constraints */
  splitter1_eqFunction_373(data, threadData);

  /* local constraints */
  splitter1_eqFunction_374(data, threadData);

  /* local constraints */
  splitter1_eqFunction_375(data, threadData);

  /* local constraints */
  splitter1_eqFunction_376(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp3 = (tmp1?data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */ + data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[225] /* MatStm3.compMolFlo[3,2] variable */ + data->localData[0]->realVars[223] /* MatStm3.compMolFlo[2,2] variable */ - data->localData[0]->realVars[221] /* MatStm3.compMolFlo[1,2] variable */;

  RELATIONHYSTERESIS(tmp4, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp5, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp7 = (tmp5?data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[227] /* MatStm3.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[272] /* MatStm3.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[188] /* MatStm3.K[2] variable */),"1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[2])",equationIndexes)):data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */);
  }
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[224] /* MatStm3.compMolFlo[3,1] variable */ + data->localData[0]->realVars[222] /* MatStm3.compMolFlo[2,1] variable */ - data->localData[0]->realVars[220] /* MatStm3.compMolFlo[1,1] variable */;

  RELATIONHYSTERESIS(tmp8, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp9, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp11 = (tmp9?data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[226] /* MatStm3.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[272] /* MatStm3.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[187] /* MatStm3.K[1] variable */),"1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[1])",equationIndexes)):data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */);
  }
  res[4] = tmp11;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS394(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,5,2,2,3,3};
  const int rowIndex[15] = {0,1,2,3,4,3,4,1,2,0,1,2,0,3,4};
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
  inSysData->sparsePattern.colorCols[3] = 2;
  inSysData->sparsePattern.colorCols[1] = 3;
  inSysData->sparsePattern.colorCols[2] = 3;
  inSysData->sparsePattern.colorCols[0] = 4;
}
void initializeStaticDataNLS394(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm3.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[270].attribute /* MatStm3.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[270].attribute /* MatStm3.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[270].attribute /* MatStm3.totMolFlo[3] */.max;
  /* static nls data for MatStm3.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[228].attribute /* MatStm3.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[228].attribute /* MatStm3.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[228].attribute /* MatStm3.compMolFrac[2,1] */.max;
  /* static nls data for MatStm3.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[229].attribute /* MatStm3.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[229].attribute /* MatStm3.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[229].attribute /* MatStm3.compMolFrac[2,2] */.max;
  /* static nls data for MatStm3.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[231].attribute /* MatStm3.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[231].attribute /* MatStm3.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[231].attribute /* MatStm3.compMolFrac[3,2] */.max;
  /* static nls data for MatStm3.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[230].attribute /* MatStm3.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[230].attribute /* MatStm3.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[230].attribute /* MatStm3.compMolFrac[3,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS394(sysData);
}

void getIterationVarsNLS394(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */;
  array[3] = data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */;
}


/* inner equations */

/*
equation index: 300
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void splitter1_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 301
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void splitter1_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  data->localData[0]->realVars[47] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 302
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 1.0 - MatStm1.totMolFlo[3] / 190.0
*/
void splitter1_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */ = 1.0 - (DIVISION_SIM(data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */,190.0,"190.0",equationIndexes));
  TRACE_POP
}
/*
equation index: 303
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac = (-MatStm1.liqPhasMolFrac) - -1.0
*/
void splitter1_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  data->localData[0]->realVars[96] /* MatStm1.vapPhasMolFrac variable */ = (-data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */) - (-1.0);
  TRACE_POP
}
/*
equation index: 304
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[2] = 190.0 * MatStm1.liqPhasMolFrac
*/
void splitter1_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */ = (190.0) * (data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 305
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void splitter1_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 306
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void splitter1_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->localData[0]->realVars[45] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc324(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,324};
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
  data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */ = xloc[1];
  data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */ = xloc[2];
  data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */ = xloc[3];
  data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  splitter1_eqFunction_300(data, threadData);

  /* local constraints */
  splitter1_eqFunction_301(data, threadData);

  /* local constraints */
  splitter1_eqFunction_302(data, threadData);

  /* local constraints */
  splitter1_eqFunction_303(data, threadData);

  /* local constraints */
  splitter1_eqFunction_304(data, threadData);

  /* local constraints */
  splitter1_eqFunction_305(data, threadData);

  /* local constraints */
  splitter1_eqFunction_306(data, threadData);
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
    tmp3 = (tmp1?data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[96] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[8] /* MatStm1.K[1] variable */),"1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[1])",equationIndexes)):data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */);
  }
  res[1] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */ + data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  }
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,2] variable */ + data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,2] variable */ - data->localData[0]->realVars[44] /* MatStm1.compMolFlo[1,2] variable */;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[96] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[9] /* MatStm1.K[2] variable */),"1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[2])",equationIndexes)):data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */);
  }
  res[4] = tmp11;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS324(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,5,2,3,3,2};
  const int rowIndex[15] = {0,1,2,3,4,3,4,2,3,4,0,1,2,0,1};
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
  inSysData->sparsePattern.colorCols[4] = 1;
  inSysData->sparsePattern.colorCols[1] = 2;
  inSysData->sparsePattern.colorCols[3] = 2;
  inSysData->sparsePattern.colorCols[0] = 3;
}
void initializeStaticDataNLS324(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* MatStm1.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* MatStm1.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* MatStm1.totMolFlo[3] */.max;
  /* static nls data for MatStm1.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[52].attribute /* MatStm1.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[52].attribute /* MatStm1.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[52].attribute /* MatStm1.compMolFrac[2,2] */.max;
  /* static nls data for MatStm1.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[3,2] */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[53].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[53].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[53].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[51].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[51].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[51].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS324(sysData);
}

void getIterationVarsNLS324(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */;
  array[2] = data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */;
  array[3] = data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */;
  array[4] = data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */;
}


/* inner equations */

/*
equation index: 189
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void splitter1_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->localData[0]->realVars[136] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 190
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo[3]
*/
void splitter1_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  data->localData[0]->realVars[137] /* MatStm2.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 191
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac = 1.0 - 0.02 * MatStm2.totMolFlo[3]
*/
void splitter1_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->localData[0]->realVars[157] /* MatStm2.liqPhasMolFrac variable */ = 1.0 - ((0.02) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */));
  TRACE_POP
}
/*
equation index: 192
type: SIMPLE_ASSIGN
MatStm2._vapPhasMolFrac = (-MatStm2.liqPhasMolFrac) - -1.0
*/
void splitter1_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->localData[0]->realVars[184] /* MatStm2.vapPhasMolFrac variable */ = (-data->localData[0]->realVars[157] /* MatStm2.liqPhasMolFrac variable */) - (-1.0);
  TRACE_POP
}
/*
equation index: 193
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[2] = 50.0 * MatStm2.liqPhasMolFrac
*/
void splitter1_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */ = (50.0) * (data->localData[0]->realVars[157] /* MatStm2.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 194
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void splitter1_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->localData[0]->realVars[134] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 195
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo[2]
*/
void splitter1_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->localData[0]->realVars[135] /* MatStm2.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc213(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,213};
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
  data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */ = xloc[2];
  data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  splitter1_eqFunction_189(data, threadData);

  /* local constraints */
  splitter1_eqFunction_190(data, threadData);

  /* local constraints */
  splitter1_eqFunction_191(data, threadData);

  /* local constraints */
  splitter1_eqFunction_192(data, threadData);

  /* local constraints */
  splitter1_eqFunction_193(data, threadData);

  /* local constraints */
  splitter1_eqFunction_194(data, threadData);

  /* local constraints */
  splitter1_eqFunction_195(data, threadData);
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
    tmp3 = (tmp1?data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[184] /* MatStm2.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[100] /* MatStm2.K[2] variable */),"1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[2])",equationIndexes)):data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */);
  }
  res[1] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */ + data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  }
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[136] /* MatStm2.compMolFlo[3,1] variable */ + data->localData[0]->realVars[134] /* MatStm2.compMolFlo[2,1] variable */ - data->localData[0]->realVars[132] /* MatStm2.compMolFlo[1,1] variable */;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[138] /* MatStm2.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[184] /* MatStm2.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[99] /* MatStm2.K[1] variable */),"1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[1])",equationIndexes)):data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */);
  }
  res[4] = tmp11;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS213(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,5,2,3,3,2};
  const int rowIndex[15] = {0,1,2,3,4,3,4,2,3,4,0,1,2,0,1};
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
  inSysData->sparsePattern.colorCols[4] = 1;
  inSysData->sparsePattern.colorCols[1] = 2;
  inSysData->sparsePattern.colorCols[3] = 2;
  inSysData->sparsePattern.colorCols[0] = 3;
}
void initializeStaticDataNLS213(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm2.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[182].attribute /* MatStm2.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[182].attribute /* MatStm2.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[182].attribute /* MatStm2.totMolFlo[3] */.max;
  /* static nls data for MatStm2.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[140].attribute /* MatStm2.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[140].attribute /* MatStm2.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[140].attribute /* MatStm2.compMolFrac[2,1] */.max;
  /* static nls data for MatStm2.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[142].attribute /* MatStm2.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[142].attribute /* MatStm2.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[142].attribute /* MatStm2.compMolFrac[3,1] */.max;
  /* static nls data for MatStm2.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[143].attribute /* MatStm2.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[143].attribute /* MatStm2.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[143].attribute /* MatStm2.compMolFrac[3,2] */.max;
  /* static nls data for MatStm2.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[141].attribute /* MatStm2.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[141].attribute /* MatStm2.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[141].attribute /* MatStm2.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS213(sysData);
}

void getIterationVarsNLS213(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */;
  array[3] = data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */;
}


/* inner equations */

/*
equation index: 130
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo[2]
*/
void splitter1_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  data->localData[0]->realVars[223] /* MatStm3.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 131
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo[2]
*/
void splitter1_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->localData[0]->realVars[222] /* MatStm3.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 132
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac = 0.02 * MatStm3.totMolFlo[2]
*/
void splitter1_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  data->localData[0]->realVars[245] /* MatStm3.liqPhasMolFrac variable */ = (0.02) * (data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 133
type: SIMPLE_ASSIGN
MatStm3._vapPhasMolFrac = (-MatStm3.liqPhasMolFrac) - -1.0
*/
void splitter1_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->localData[0]->realVars[272] /* MatStm3.vapPhasMolFrac variable */ = (-data->localData[0]->realVars[245] /* MatStm3.liqPhasMolFrac variable */) - (-1.0);
  TRACE_POP
}
/*
equation index: 134
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[3] = 50.0 - 50.0 * MatStm3.liqPhasMolFrac
*/
void splitter1_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */ = 50.0 - ((50.0) * (data->localData[0]->realVars[245] /* MatStm3.liqPhasMolFrac variable */));
  TRACE_POP
}
/*
equation index: 135
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo[3]
*/
void splitter1_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->localData[0]->realVars[225] /* MatStm3.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 136
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo[3]
*/
void splitter1_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->localData[0]->realVars[224] /* MatStm3.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc154(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,154};
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
  data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */ = xloc[1];
  data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */ = xloc[2];
  data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */ = xloc[3];
  data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  splitter1_eqFunction_130(data, threadData);

  /* local constraints */
  splitter1_eqFunction_131(data, threadData);

  /* local constraints */
  splitter1_eqFunction_132(data, threadData);

  /* local constraints */
  splitter1_eqFunction_133(data, threadData);

  /* local constraints */
  splitter1_eqFunction_134(data, threadData);

  /* local constraints */
  splitter1_eqFunction_135(data, threadData);

  /* local constraints */
  splitter1_eqFunction_136(data, threadData);
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
    tmp3 = (tmp1?data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[227] /* MatStm3.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[272] /* MatStm3.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[188] /* MatStm3.K[2] variable */),"1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[2])",equationIndexes)):data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */);
  }
  res[2] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */ + data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  }
  res[3] = tmp7;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[226] /* MatStm3.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[272] /* MatStm3.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[187] /* MatStm3.K[1] variable */),"1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[1])",equationIndexes)):data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */);
  }
  res[4] = tmp11;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS154(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,5,3,3,2,2};
  const int rowIndex[15] = {0,1,2,3,4,0,3,4,1,2,3,1,2,0,4};
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
  inSysData->sparsePattern.colorCols[4] = 1;
  inSysData->sparsePattern.colorCols[1] = 2;
  inSysData->sparsePattern.colorCols[3] = 2;
  inSysData->sparsePattern.colorCols[0] = 3;
}
void initializeStaticDataNLS154(void *inData, threadData_t *threadData, void *inSystemData)
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
  /* static nls data for MatStm3.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[231].attribute /* MatStm3.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[231].attribute /* MatStm3.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[231].attribute /* MatStm3.compMolFrac[3,2] */.max;
  /* static nls data for MatStm3.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[229].attribute /* MatStm3.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[229].attribute /* MatStm3.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[229].attribute /* MatStm3.compMolFrac[2,2] */.max;
  /* static nls data for MatStm3.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[228].attribute /* MatStm3.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[228].attribute /* MatStm3.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[228].attribute /* MatStm3.compMolFrac[2,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS154(sysData);
}

void getIterationVarsNLS154(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */;
  array[2] = data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */;
  array[3] = data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */;
  array[4] = data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */;
}


/* inner equations */

/*
equation index: 56
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void splitter1_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[47] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 57
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void splitter1_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 58
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 1.0 - MatStm1.totMolFlo[3] / 190.0
*/
void splitter1_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */ = 1.0 - (DIVISION_SIM(data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */,190.0,"190.0",equationIndexes));
  TRACE_POP
}
/*
equation index: 59
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac = (-MatStm1.liqPhasMolFrac) - -1.0
*/
void splitter1_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[96] /* MatStm1.vapPhasMolFrac variable */ = (-data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */) - (-1.0);
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[2] = 190.0 * MatStm1.liqPhasMolFrac
*/
void splitter1_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */ = (190.0) * (data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void splitter1_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[45] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void splitter1_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc80(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,80};
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
  data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */ = xloc[2];
  data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  splitter1_eqFunction_56(data, threadData);

  /* local constraints */
  splitter1_eqFunction_57(data, threadData);

  /* local constraints */
  splitter1_eqFunction_58(data, threadData);

  /* local constraints */
  splitter1_eqFunction_59(data, threadData);

  /* local constraints */
  splitter1_eqFunction_60(data, threadData);

  /* local constraints */
  splitter1_eqFunction_61(data, threadData);

  /* local constraints */
  splitter1_eqFunction_62(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,2] variable */ + data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,2] variable */ - data->localData[0]->realVars[44] /* MatStm1.compMolFlo[1,2] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[96] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[9] /* MatStm1.K[2] variable */),"1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[2])",equationIndexes)):data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */);
  }
  res[1] = tmp3;

  res[2] = data->localData[0]->realVars[47] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[45] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[43] /* MatStm1.compMolFlo[1,1] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[96] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[8] /* MatStm1.K[1] variable */),"1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[1])",equationIndexes)):data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */);
  }
  res[3] = tmp7;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */ + data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  }
  res[4] = tmp11;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS80(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,5,2,3,3,2};
  const int rowIndex[15] = {0,1,2,3,4,2,3,2,3,4,0,1,4,0,1};
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
  inSysData->sparsePattern.colorCols[4] = 1;
  inSysData->sparsePattern.colorCols[1] = 2;
  inSysData->sparsePattern.colorCols[3] = 2;
  inSysData->sparsePattern.colorCols[0] = 3;
}
void initializeStaticDataNLS80(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* MatStm1.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* MatStm1.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* MatStm1.totMolFlo[3] */.max;
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
  /* static nls data for MatStm1.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[52].attribute /* MatStm1.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[52].attribute /* MatStm1.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[52].attribute /* MatStm1.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS80(sysData);
}

void getIterationVarsNLS80(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */;
  array[3] = data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void splitter1_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[5].equationIndex = 453;
  nonLinearSystemData[5].size = 5;
  nonLinearSystemData[5].homotopySupport = 0;
  nonLinearSystemData[5].mixedSystem = 0;
  nonLinearSystemData[5].residualFunc = residualFunc453;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = splitter1_functionJacNLSJac5_column;
  nonLinearSystemData[5].initialAnalyticalJacobian = splitter1_initialAnalyticJacobianNLSJac5;
  nonLinearSystemData[5].jacobianIndex = 5 /*jacInx*/;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS453;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS453;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  
  nonLinearSystemData[4].equationIndex = 394;
  nonLinearSystemData[4].size = 5;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 0;
  nonLinearSystemData[4].residualFunc = residualFunc394;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = splitter1_functionJacNLSJac4_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = splitter1_initialAnalyticJacobianNLSJac4;
  nonLinearSystemData[4].jacobianIndex = 4 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS394;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS394;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 324;
  nonLinearSystemData[3].size = 5;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 0;
  nonLinearSystemData[3].residualFunc = residualFunc324;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = splitter1_functionJacNLSJac3_column;
  nonLinearSystemData[3].initialAnalyticalJacobian = splitter1_initialAnalyticJacobianNLSJac3;
  nonLinearSystemData[3].jacobianIndex = 3 /*jacInx*/;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS324;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS324;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 213;
  nonLinearSystemData[2].size = 5;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 0;
  nonLinearSystemData[2].residualFunc = residualFunc213;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = splitter1_functionJacNLSJac2_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = splitter1_initialAnalyticJacobianNLSJac2;
  nonLinearSystemData[2].jacobianIndex = 2 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS213;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS213;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 154;
  nonLinearSystemData[1].size = 5;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 0;
  nonLinearSystemData[1].residualFunc = residualFunc154;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = splitter1_functionJacNLSJac1_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = splitter1_initialAnalyticJacobianNLSJac1;
  nonLinearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS154;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS154;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 80;
  nonLinearSystemData[0].size = 5;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 0;
  nonLinearSystemData[0].residualFunc = residualFunc80;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = splitter1_functionJacNLSJac0_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = splitter1_initialAnalyticJacobianNLSJac0;
  nonLinearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS80;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS80;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

