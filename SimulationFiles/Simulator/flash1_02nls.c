/* Non Linear Systems */
#include "flash1_model.h"
#include "flash1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 495
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[3,1] = MatStm5.compMolFrac[3,1] * MatStm5.totMolFlo[3]
*/
void flash1_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  data->localData[0]->realVars[280] /* MatStm5.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 496
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[3,2] = MatStm5.compMolFrac[3,2] * MatStm5.totMolFlo[3]
*/
void flash1_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  data->localData[0]->realVars[281] /* MatStm5.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 497
type: SIMPLE_ASSIGN
MatStm5._totMolFlo[2] = Flash1.totMolFlo[3] - MatStm5.totMolFlo[3]
*/
void flash1_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  data->localData[0]->realVars[325] /* MatStm5.totMolFlo[2] variable */ = data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */ - data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */;
  TRACE_POP
}
/*
equation index: 498
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[2,1] = MatStm5.compMolFrac[2,1] * MatStm5.totMolFlo[2]
*/
void flash1_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  data->localData[0]->realVars[278] /* MatStm5.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[325] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 499
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[2,2] = MatStm5.compMolFrac[2,2] * MatStm5.totMolFlo[2]
*/
void flash1_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  data->localData[0]->realVars[279] /* MatStm5.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[325] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc514(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,514};
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
  data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */ = xloc[1];
  data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */ = xloc[2];
  data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */ = xloc[3];
  data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  flash1_eqFunction_495(data, threadData);

  /* local constraints */
  flash1_eqFunction_496(data, threadData);

  /* local constraints */
  flash1_eqFunction_497(data, threadData);

  /* local constraints */
  flash1_eqFunction_498(data, threadData);

  /* local constraints */
  flash1_eqFunction_499(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, 101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp3 = (tmp1?data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[244] /* MatStm5.K[2] variable */) * (data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */)):data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */);
  }
  res[0] = tmp3;

  RELATIONHYSTERESIS(tmp4, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  res[1] = (tmp4?data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */ + data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */ + data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */ - 1.0);

  res[2] = data->localData[0]->realVars[281] /* MatStm5.compMolFlo[3,2] variable */ + data->localData[0]->realVars[279] /* MatStm5.compMolFlo[2,2] variable */ - data->localData[0]->realVars[277] /* MatStm5.compMolFlo[1,2] variable */;

  res[3] = data->localData[0]->realVars[280] /* MatStm5.compMolFlo[3,1] variable */ + data->localData[0]->realVars[278] /* MatStm5.compMolFlo[2,1] variable */ - data->localData[0]->realVars[276] /* MatStm5.compMolFlo[1,1] variable */;

  RELATIONHYSTERESIS(tmp5, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp6, 101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp8 = (tmp6?data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[243] /* MatStm5.K[1] variable */) * (data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */)):data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */);
  }
  res[4] = tmp8;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS514(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {2,3,1,3,4,0,1,2,1,3,4,0,1,2};
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
void initializeStaticDataNLS514(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm5.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[326].attribute /* MatStm5.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[326].attribute /* MatStm5.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[326].attribute /* MatStm5.totMolFlo[3] */.max;
  /* static nls data for MatStm5.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[286].attribute /* MatStm5.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[286].attribute /* MatStm5.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[286].attribute /* MatStm5.compMolFrac[3,1] */.max;
  /* static nls data for MatStm5.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[287].attribute /* MatStm5.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[287].attribute /* MatStm5.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[287].attribute /* MatStm5.compMolFrac[3,2] */.max;
  /* static nls data for MatStm5.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[284].attribute /* MatStm5.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[284].attribute /* MatStm5.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[284].attribute /* MatStm5.compMolFrac[2,1] */.max;
  /* static nls data for MatStm5.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[285].attribute /* MatStm5.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[285].attribute /* MatStm5.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[285].attribute /* MatStm5.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS514(sysData);
}

void getIterationVarsNLS514(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */;
  array[2] = data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */;
  array[3] = data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */;
  array[4] = data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */;
}


/* inner equations */

/*
equation index: 426
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void flash1_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  data->localData[0]->realVars[190] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[237] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 427
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo[2]
*/
void flash1_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->localData[0]->realVars[191] /* MatStm2.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[237] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 428
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[3] = Flash1.totMolFlo[2] - MatStm2.totMolFlo[2]
*/
void flash1_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->localData[0]->realVars[238] /* MatStm2.totMolFlo[3] variable */ = data->localData[0]->realVars[59] /* Flash1.totMolFlo[2] variable */ - data->localData[0]->realVars[237] /* MatStm2.totMolFlo[2] variable */;
  TRACE_POP
}
/*
equation index: 429
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void flash1_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->localData[0]->realVars[192] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 430
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo[3]
*/
void flash1_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  data->localData[0]->realVars[193] /* MatStm2.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc445(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,445};
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
  data->localData[0]->realVars[237] /* MatStm2.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */ = xloc[2];
  data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */ = xloc[3];
  data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  flash1_eqFunction_426(data, threadData);

  /* local constraints */
  flash1_eqFunction_427(data, threadData);

  /* local constraints */
  flash1_eqFunction_428(data, threadData);

  /* local constraints */
  flash1_eqFunction_429(data, threadData);

  /* local constraints */
  flash1_eqFunction_430(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, 101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, 3, GreaterEq);
    tmp3 = (tmp1?data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[156] /* MatStm2.K[2] variable */) * (data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */)):data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */);
  }
  res[0] = tmp3;

  RELATIONHYSTERESIS(tmp4, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  res[1] = (tmp4?data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */ + data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */ + data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */ - 1.0);

  res[2] = data->localData[0]->realVars[193] /* MatStm2.compMolFlo[3,2] variable */ + data->localData[0]->realVars[191] /* MatStm2.compMolFlo[2,2] variable */ - data->localData[0]->realVars[189] /* MatStm2.compMolFlo[1,2] variable */;

  res[3] = data->localData[0]->realVars[192] /* MatStm2.compMolFlo[3,1] variable */ + data->localData[0]->realVars[190] /* MatStm2.compMolFlo[2,1] variable */ - data->localData[0]->realVars[188] /* MatStm2.compMolFlo[1,1] variable */;

  RELATIONHYSTERESIS(tmp5, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp6, 101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, 3, GreaterEq);
    tmp8 = (tmp6?data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[155] /* MatStm2.K[1] variable */) * (data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */)):data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */);
  }
  res[4] = tmp8;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS445(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {2,3,1,3,4,0,1,2,1,3,4,0,1,2};
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
void initializeStaticDataNLS445(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm2.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[237].attribute /* MatStm2.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[237].attribute /* MatStm2.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[237].attribute /* MatStm2.totMolFlo[2] */.max;
  /* static nls data for MatStm2.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[196].attribute /* MatStm2.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[196].attribute /* MatStm2.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[196].attribute /* MatStm2.compMolFrac[2,1] */.max;
  /* static nls data for MatStm2.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[197].attribute /* MatStm2.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[197].attribute /* MatStm2.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[197].attribute /* MatStm2.compMolFrac[2,2] */.max;
  /* static nls data for MatStm2.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[198].attribute /* MatStm2.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[198].attribute /* MatStm2.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[198].attribute /* MatStm2.compMolFrac[3,1] */.max;
  /* static nls data for MatStm2.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[199].attribute /* MatStm2.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[199].attribute /* MatStm2.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[199].attribute /* MatStm2.compMolFrac[3,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS445(sysData);
}

void getIterationVarsNLS445(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[237] /* MatStm2.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */;
  array[3] = data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */;
  array[4] = data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */;
}


/* inner equations */

/*
equation index: 399
type: SIMPLE_ASSIGN
Flash1._liqPhasMolFrac = 1.0 - 0.005 * Flash1.totMolFlo[3]
*/
void flash1_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->localData[0]->realVars[38] /* Flash1.liqPhasMolFrac variable */ = 1.0 - ((0.005) * (data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */));
  TRACE_POP
}
/*
equation index: 400
type: SIMPLE_ASSIGN
Flash1._totMolFlo[2] = 200.0 * Flash1.liqPhasMolFrac
*/
void flash1_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->localData[0]->realVars[59] /* Flash1.totMolFlo[2] variable */ = (200.0) * (data->localData[0]->realVars[38] /* Flash1.liqPhasMolFrac variable */);
  TRACE_POP
}

void residualFunc413(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,413};
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
  data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */ = xloc[1];
  data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */ = xloc[2];
  data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */ = xloc[3];
  data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  flash1_eqFunction_399(data, threadData);

  /* local constraints */
  flash1_eqFunction_400(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */) + (data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[59] /* Flash1.totMolFlo[2] variable */) + (-200.0) * (data->localData[0]->realVars[106] /* MatStm1.compMolFrac[1,2] variable */);

  res[1] = (data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */) + (data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[59] /* Flash1.totMolFlo[2] variable */) + (-200.0) * (data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */);

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[10] /* Flash1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* Flash1.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */ - ((data->localData[0]->realVars[8] /* Flash1.K[1] variable */) * (data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */)):data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */);
  }
  res[2] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[10] /* Flash1.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */ + data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */ - 1.0;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* Flash1.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */ + data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */ - 1.0:data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */ + data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */ - 1.0);
  }
  res[3] = tmp7;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[10] /* Flash1.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* Flash1.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */ - ((data->localData[0]->realVars[9] /* Flash1.K[2] variable */) * (data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */)):data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */);
  }
  res[4] = tmp11;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS413(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS413(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for Flash1.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[60].attribute /* Flash1.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[60].attribute /* Flash1.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[60].attribute /* Flash1.totMolFlo[3] */.max;
  /* static nls data for MatStm5.compMolFrac[1,2] */
  sysData->nominal[i] = data->modelData->realVarsData[283].attribute /* MatStm5.compMolFrac[1,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[283].attribute /* MatStm5.compMolFrac[1,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[283].attribute /* MatStm5.compMolFrac[1,2] */.max;
  /* static nls data for MatStm2.compMolFrac[1,1] */
  sysData->nominal[i] = data->modelData->realVarsData[194].attribute /* MatStm2.compMolFrac[1,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[194].attribute /* MatStm2.compMolFrac[1,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[194].attribute /* MatStm2.compMolFrac[1,1] */.max;
  /* static nls data for MatStm5.compMolFrac[1,1] */
  sysData->nominal[i] = data->modelData->realVarsData[282].attribute /* MatStm5.compMolFrac[1,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[282].attribute /* MatStm5.compMolFrac[1,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[282].attribute /* MatStm5.compMolFrac[1,1] */.max;
  /* static nls data for MatStm2.compMolFrac[1,2] */
  sysData->nominal[i] = data->modelData->realVarsData[195].attribute /* MatStm2.compMolFrac[1,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[195].attribute /* MatStm2.compMolFrac[1,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[195].attribute /* MatStm2.compMolFrac[1,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS413(sysData);
}

void getIterationVarsNLS413(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */;
  array[2] = data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */;
  array[3] = data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */;
  array[4] = data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */;
}


/* inner equations */

/*
equation index: 346
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void flash1_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  data->localData[0]->realVars[101] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 347
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void flash1_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->localData[0]->realVars[102] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 348
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 0.005 * MatStm1.totMolFlo[2]
*/
void flash1_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->localData[0]->realVars[124] /* MatStm1.liqPhasMolFrac variable */ = (0.005) * (data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 349
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[3] = 200.0 - 200.0 * MatStm1.liqPhasMolFrac
*/
void flash1_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->localData[0]->realVars[150] /* MatStm1.totMolFlo[3] variable */ = 200.0 - ((200.0) * (data->localData[0]->realVars[124] /* MatStm1.liqPhasMolFrac variable */));
  TRACE_POP
}
/*
equation index: 350
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void flash1_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->localData[0]->realVars[103] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[150] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 351
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void flash1_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->localData[0]->realVars[104] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[150] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc368(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,368};
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
  data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */ = xloc[1];
  data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */ = xloc[2];
  data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */ = xloc[3];
  data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  flash1_eqFunction_346(data, threadData);

  /* local constraints */
  flash1_eqFunction_347(data, threadData);

  /* local constraints */
  flash1_eqFunction_348(data, threadData);

  /* local constraints */
  flash1_eqFunction_349(data, threadData);

  /* local constraints */
  flash1_eqFunction_350(data, threadData);

  /* local constraints */
  flash1_eqFunction_351(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[104] /* MatStm1.compMolFlo[3,2] variable */ + data->localData[0]->realVars[102] /* MatStm1.compMolFlo[2,2] variable */ - data->localData[0]->realVars[100] /* MatStm1.compMolFlo[1,2] variable */;

  res[1] = data->localData[0]->realVars[103] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[101] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[99] /* MatStm1.compMolFlo[1,1] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[64] /* MatStm1.K[1] variable */) * (data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */)):data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */);
  }
  res[2] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  res[3] = (tmp4?data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */ + data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */ + data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */ - 1.0);

  tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp8 = (tmp6?data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[65] /* MatStm1.K[2] variable */) * (data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */)):data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */);
  }
  res[4] = tmp8;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS368(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS368(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[149].attribute /* MatStm1.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[149].attribute /* MatStm1.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[149].attribute /* MatStm1.totMolFlo[2] */.max;
  /* static nls data for MatStm1.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[110].attribute /* MatStm1.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[110].attribute /* MatStm1.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[110].attribute /* MatStm1.compMolFrac[3,2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[107].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[107].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[107].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[109].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[109].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[109].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* static nls data for MatStm1.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* MatStm1.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* MatStm1.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* MatStm1.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS368(sysData);
}

void getIterationVarsNLS368(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */;
  array[2] = data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */;
  array[3] = data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */;
  array[4] = data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */;
}


/* inner equations */

/*
equation index: 226
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[3,1] = MatStm5.compMolFrac[3,1] * MatStm5.totMolFlo[3]
*/
void flash1_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  data->localData[0]->realVars[280] /* MatStm5.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 227
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[3,2] = MatStm5.compMolFrac[3,2] * MatStm5.totMolFlo[3]
*/
void flash1_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  data->localData[0]->realVars[281] /* MatStm5.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 228
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[2,2] = MatStm5.compMolFlo[1,2] - MatStm5.compMolFlo[3,2]
*/
void flash1_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  data->localData[0]->realVars[279] /* MatStm5.compMolFlo[2,2] variable */ = data->localData[0]->realVars[277] /* MatStm5.compMolFlo[1,2] variable */ - data->localData[0]->realVars[281] /* MatStm5.compMolFlo[3,2] variable */;
  TRACE_POP
}
/*
equation index: 229
type: SIMPLE_ASSIGN
MatStm5._totMolFlo[2] = Flash1.totMolFlo[3] - MatStm5.totMolFlo[3]
*/
void flash1_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  data->localData[0]->realVars[325] /* MatStm5.totMolFlo[2] variable */ = data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */ - data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */;
  TRACE_POP
}
/*
equation index: 230
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[2,1] = MatStm5.compMolFrac[2,1] * MatStm5.totMolFlo[2]
*/
void flash1_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->localData[0]->realVars[278] /* MatStm5.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[325] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc244(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,244};
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
  data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */ = xloc[1];
  data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */ = xloc[2];
  data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */ = xloc[3];
  data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  flash1_eqFunction_226(data, threadData);

  /* local constraints */
  flash1_eqFunction_227(data, threadData);

  /* local constraints */
  flash1_eqFunction_228(data, threadData);

  /* local constraints */
  flash1_eqFunction_229(data, threadData);

  /* local constraints */
  flash1_eqFunction_230(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[280] /* MatStm5.compMolFlo[3,1] variable */ + data->localData[0]->realVars[278] /* MatStm5.compMolFlo[2,1] variable */ - data->localData[0]->realVars[276] /* MatStm5.compMolFlo[1,1] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[243] /* MatStm5.K[1] variable */) * (data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */)):data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */);
  }
  res[1] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  res[2] = (tmp4?data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */ + data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */ + data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */ - 1.0);

  tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    tmp8 = (tmp6?data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[244] /* MatStm5.K[2] variable */) * (data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */)):data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */);
  }
  res[3] = tmp8;

  res[4] = (data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[325] /* MatStm5.totMolFlo[2] variable */) - data->localData[0]->realVars[279] /* MatStm5.compMolFlo[2,2] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS244(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS244(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm5.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[326].attribute /* MatStm5.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[326].attribute /* MatStm5.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[326].attribute /* MatStm5.totMolFlo[3] */.max;
  /* static nls data for MatStm5.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[285].attribute /* MatStm5.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[285].attribute /* MatStm5.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[285].attribute /* MatStm5.compMolFrac[2,2] */.max;
  /* static nls data for MatStm5.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[287].attribute /* MatStm5.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[287].attribute /* MatStm5.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[287].attribute /* MatStm5.compMolFrac[3,2] */.max;
  /* static nls data for MatStm5.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[284].attribute /* MatStm5.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[284].attribute /* MatStm5.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[284].attribute /* MatStm5.compMolFrac[2,1] */.max;
  /* static nls data for MatStm5.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[286].attribute /* MatStm5.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[286].attribute /* MatStm5.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[286].attribute /* MatStm5.compMolFrac[3,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS244(sysData);
}

void getIterationVarsNLS244(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */;
  array[2] = data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */;
  array[3] = data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */;
  array[4] = data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */;
}


/* inner equations */

/*
equation index: 173
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo[3]
*/
void flash1_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->localData[0]->realVars[193] /* MatStm2.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 174
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void flash1_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->localData[0]->realVars[192] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 175
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,2] = MatStm2.compMolFlo[1,2] - MatStm2.compMolFlo[3,2]
*/
void flash1_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->localData[0]->realVars[191] /* MatStm2.compMolFlo[2,2] variable */ = data->localData[0]->realVars[189] /* MatStm2.compMolFlo[1,2] variable */ - data->localData[0]->realVars[193] /* MatStm2.compMolFlo[3,2] variable */;
  TRACE_POP
}
/*
equation index: 176
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[2] = Flash1.totMolFlo[2] - MatStm2.totMolFlo[3]
*/
void flash1_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->localData[0]->realVars[237] /* MatStm2.totMolFlo[2] variable */ = data->localData[0]->realVars[59] /* Flash1.totMolFlo[2] variable */ - data->localData[0]->realVars[238] /* MatStm2.totMolFlo[3] variable */;
  TRACE_POP
}
/*
equation index: 177
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void flash1_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->localData[0]->realVars[190] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[237] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc191(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,191};
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
  data->localData[0]->realVars[238] /* MatStm2.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */ = xloc[2];
  data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */ = xloc[3];
  data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  flash1_eqFunction_173(data, threadData);

  /* local constraints */
  flash1_eqFunction_174(data, threadData);

  /* local constraints */
  flash1_eqFunction_175(data, threadData);

  /* local constraints */
  flash1_eqFunction_176(data, threadData);

  /* local constraints */
  flash1_eqFunction_177(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[192] /* MatStm2.compMolFlo[3,1] variable */ + data->localData[0]->realVars[190] /* MatStm2.compMolFlo[2,1] variable */ - data->localData[0]->realVars[188] /* MatStm2.compMolFlo[1,1] variable */;

  res[1] = (data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[237] /* MatStm2.totMolFlo[2] variable */) - data->localData[0]->realVars[191] /* MatStm2.compMolFlo[2,2] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[156] /* MatStm2.K[2] variable */) * (data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */)):data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */);
  }
  res[2] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  res[3] = (tmp4?data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */ + data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */ + data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */ - 1.0);

  tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
    tmp8 = (tmp6?data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[155] /* MatStm2.K[1] variable */) * (data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */)):data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */);
  }
  res[4] = tmp8;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS191(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS191(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm2.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[238].attribute /* MatStm2.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[238].attribute /* MatStm2.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[238].attribute /* MatStm2.totMolFlo[3] */.max;
  /* static nls data for MatStm2.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[196].attribute /* MatStm2.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[196].attribute /* MatStm2.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[196].attribute /* MatStm2.compMolFrac[2,1] */.max;
  /* static nls data for MatStm2.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[199].attribute /* MatStm2.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[199].attribute /* MatStm2.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[199].attribute /* MatStm2.compMolFrac[3,2] */.max;
  /* static nls data for MatStm2.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[197].attribute /* MatStm2.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[197].attribute /* MatStm2.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[197].attribute /* MatStm2.compMolFrac[2,2] */.max;
  /* static nls data for MatStm2.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[198].attribute /* MatStm2.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[198].attribute /* MatStm2.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[198].attribute /* MatStm2.compMolFrac[3,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS191(sysData);
}

void getIterationVarsNLS191(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[238] /* MatStm2.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */;
  array[3] = data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */;
  array[4] = data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */;
}


/* inner equations */

/*
equation index: 132
type: SIMPLE_ASSIGN
Flash1._liqPhasMolFrac = 1.0 - 0.005 * Flash1.totMolFlo[3]
*/
void flash1_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  data->localData[0]->realVars[38] /* Flash1.liqPhasMolFrac variable */ = 1.0 - ((0.005) * (data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */));
  TRACE_POP
}
/*
equation index: 133
type: SIMPLE_ASSIGN
Flash1._totMolFlo[2] = 200.0 * Flash1.liqPhasMolFrac
*/
void flash1_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->localData[0]->realVars[59] /* Flash1.totMolFlo[2] variable */ = (200.0) * (data->localData[0]->realVars[38] /* Flash1.liqPhasMolFrac variable */);
  TRACE_POP
}

void residualFunc146(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,146};
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
  data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */ = xloc[1];
  data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */ = xloc[2];
  data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */ = xloc[3];
  data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  flash1_eqFunction_132(data, threadData);

  /* local constraints */
  flash1_eqFunction_133(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */) + (data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[59] /* Flash1.totMolFlo[2] variable */) + (-200.0) * (data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */);

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[10] /* Flash1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* Flash1.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */ - ((data->localData[0]->realVars[8] /* Flash1.K[1] variable */) * (data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */)):data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */);
  }
  res[1] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[10] /* Flash1.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */ + data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */ - 1.0;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* Flash1.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */ + data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */ - 1.0:data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */ + data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */ - 1.0);
  }
  res[2] = tmp7;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[10] /* Flash1.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* Flash1.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */ - ((data->localData[0]->realVars[9] /* Flash1.K[2] variable */) * (data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */)):data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */);
  }
  res[3] = tmp11;

  res[4] = (data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */) + (data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[59] /* Flash1.totMolFlo[2] variable */) + (-200.0) * (data->localData[0]->realVars[106] /* MatStm1.compMolFrac[1,2] variable */);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS146(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS146(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for Flash1.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[60].attribute /* Flash1.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[60].attribute /* Flash1.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[60].attribute /* Flash1.totMolFlo[3] */.max;
  /* static nls data for MatStm2.compMolFrac[1,2] */
  sysData->nominal[i] = data->modelData->realVarsData[195].attribute /* MatStm2.compMolFrac[1,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[195].attribute /* MatStm2.compMolFrac[1,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[195].attribute /* MatStm2.compMolFrac[1,2] */.max;
  /* static nls data for MatStm5.compMolFrac[1,2] */
  sysData->nominal[i] = data->modelData->realVarsData[283].attribute /* MatStm5.compMolFrac[1,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[283].attribute /* MatStm5.compMolFrac[1,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[283].attribute /* MatStm5.compMolFrac[1,2] */.max;
  /* static nls data for MatStm2.compMolFrac[1,1] */
  sysData->nominal[i] = data->modelData->realVarsData[194].attribute /* MatStm2.compMolFrac[1,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[194].attribute /* MatStm2.compMolFrac[1,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[194].attribute /* MatStm2.compMolFrac[1,1] */.max;
  /* static nls data for MatStm5.compMolFrac[1,1] */
  sysData->nominal[i] = data->modelData->realVarsData[282].attribute /* MatStm5.compMolFrac[1,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[282].attribute /* MatStm5.compMolFrac[1,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[282].attribute /* MatStm5.compMolFrac[1,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS146(sysData);
}

void getIterationVarsNLS146(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */;
  array[2] = data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */;
  array[3] = data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */;
  array[4] = data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */;
}


/* inner equations */

/*
equation index: 73
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void flash1_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[102] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 74
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void flash1_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[101] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 75
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 0.005 * MatStm1.totMolFlo[2]
*/
void flash1_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->localData[0]->realVars[124] /* MatStm1.liqPhasMolFrac variable */ = (0.005) * (data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 76
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[3] = 200.0 - 200.0 * MatStm1.liqPhasMolFrac
*/
void flash1_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[150] /* MatStm1.totMolFlo[3] variable */ = 200.0 - ((200.0) * (data->localData[0]->realVars[124] /* MatStm1.liqPhasMolFrac variable */));
  TRACE_POP
}
/*
equation index: 77
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void flash1_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->localData[0]->realVars[103] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[150] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 78
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void flash1_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  data->localData[0]->realVars[104] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[150] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc95(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,95};
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
  data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */ = xloc[1];
  data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */ = xloc[2];
  data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */ = xloc[3];
  data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  flash1_eqFunction_73(data, threadData);

  /* local constraints */
  flash1_eqFunction_74(data, threadData);

  /* local constraints */
  flash1_eqFunction_75(data, threadData);

  /* local constraints */
  flash1_eqFunction_76(data, threadData);

  /* local constraints */
  flash1_eqFunction_77(data, threadData);

  /* local constraints */
  flash1_eqFunction_78(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[103] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[101] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[99] /* MatStm1.compMolFlo[1,1] variable */;

  res[1] = data->localData[0]->realVars[104] /* MatStm1.compMolFlo[3,2] variable */ + data->localData[0]->realVars[102] /* MatStm1.compMolFlo[2,2] variable */ - data->localData[0]->realVars[100] /* MatStm1.compMolFlo[1,2] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[64] /* MatStm1.K[1] variable */) * (data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */)):data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */);
  }
  res[2] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  res[3] = (tmp4?data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */ + data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */ + data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */ - 1.0);

  tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp8 = (tmp6?data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[65] /* MatStm1.K[2] variable */) * (data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */)):data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */);
  }
  res[4] = tmp8;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS95(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,1,1,3,4,1,3,4,0,2,3,0,2,3};
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
void initializeStaticDataNLS95(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[149].attribute /* MatStm1.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[149].attribute /* MatStm1.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[149].attribute /* MatStm1.totMolFlo[2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* MatStm1.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* MatStm1.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* MatStm1.compMolFrac[2,2] */.max;
  /* static nls data for MatStm1.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[110].attribute /* MatStm1.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[110].attribute /* MatStm1.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[110].attribute /* MatStm1.compMolFrac[3,2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[107].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[107].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[107].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[109].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[109].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[109].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS95(sysData);
}

void getIterationVarsNLS95(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */;
  array[2] = data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */;
  array[3] = data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */;
  array[4] = data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void flash1_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[7].equationIndex = 514;
  nonLinearSystemData[7].size = 5;
  nonLinearSystemData[7].homotopySupport = 0;
  nonLinearSystemData[7].mixedSystem = 0;
  nonLinearSystemData[7].residualFunc = residualFunc514;
  nonLinearSystemData[7].strictTearingFunctionCall = NULL;
  nonLinearSystemData[7].analyticalJacobianColumn = flash1_functionJacNLSJac7_column;
  nonLinearSystemData[7].initialAnalyticalJacobian = flash1_initialAnalyticJacobianNLSJac7;
  nonLinearSystemData[7].jacobianIndex = 7 /*jacInx*/;
  nonLinearSystemData[7].initializeStaticNLSData = initializeStaticDataNLS514;
  nonLinearSystemData[7].getIterationVars = getIterationVarsNLS514;
  nonLinearSystemData[7].checkConstraints = NULL;
  
  
  nonLinearSystemData[6].equationIndex = 445;
  nonLinearSystemData[6].size = 5;
  nonLinearSystemData[6].homotopySupport = 0;
  nonLinearSystemData[6].mixedSystem = 0;
  nonLinearSystemData[6].residualFunc = residualFunc445;
  nonLinearSystemData[6].strictTearingFunctionCall = NULL;
  nonLinearSystemData[6].analyticalJacobianColumn = flash1_functionJacNLSJac6_column;
  nonLinearSystemData[6].initialAnalyticalJacobian = flash1_initialAnalyticJacobianNLSJac6;
  nonLinearSystemData[6].jacobianIndex = 6 /*jacInx*/;
  nonLinearSystemData[6].initializeStaticNLSData = initializeStaticDataNLS445;
  nonLinearSystemData[6].getIterationVars = getIterationVarsNLS445;
  nonLinearSystemData[6].checkConstraints = NULL;
  
  
  nonLinearSystemData[5].equationIndex = 413;
  nonLinearSystemData[5].size = 5;
  nonLinearSystemData[5].homotopySupport = 0;
  nonLinearSystemData[5].mixedSystem = 0;
  nonLinearSystemData[5].residualFunc = residualFunc413;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = flash1_functionJacNLSJac5_column;
  nonLinearSystemData[5].initialAnalyticalJacobian = flash1_initialAnalyticJacobianNLSJac5;
  nonLinearSystemData[5].jacobianIndex = 5 /*jacInx*/;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS413;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS413;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  
  nonLinearSystemData[4].equationIndex = 368;
  nonLinearSystemData[4].size = 5;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 0;
  nonLinearSystemData[4].residualFunc = residualFunc368;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = flash1_functionJacNLSJac4_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = flash1_initialAnalyticJacobianNLSJac4;
  nonLinearSystemData[4].jacobianIndex = 4 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS368;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS368;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 244;
  nonLinearSystemData[3].size = 5;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 0;
  nonLinearSystemData[3].residualFunc = residualFunc244;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = flash1_functionJacNLSJac3_column;
  nonLinearSystemData[3].initialAnalyticalJacobian = flash1_initialAnalyticJacobianNLSJac3;
  nonLinearSystemData[3].jacobianIndex = 3 /*jacInx*/;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS244;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS244;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 191;
  nonLinearSystemData[2].size = 5;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 0;
  nonLinearSystemData[2].residualFunc = residualFunc191;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = flash1_functionJacNLSJac2_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = flash1_initialAnalyticJacobianNLSJac2;
  nonLinearSystemData[2].jacobianIndex = 2 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS191;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS191;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 146;
  nonLinearSystemData[1].size = 5;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 0;
  nonLinearSystemData[1].residualFunc = residualFunc146;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = flash1_functionJacNLSJac1_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = flash1_initialAnalyticJacobianNLSJac1;
  nonLinearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS146;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS146;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 95;
  nonLinearSystemData[0].size = 5;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 0;
  nonLinearSystemData[0].residualFunc = residualFunc95;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = flash1_functionJacNLSJac0_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = flash1_initialAnalyticJacobianNLSJac0;
  nonLinearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS95;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS95;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

