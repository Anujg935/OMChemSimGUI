/* Non Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 101
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  data->localData[0]->realVars[39] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 102
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  data->localData[0]->realVars[40] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 103
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 1.0 - 0.01 * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  data->localData[0]->realVars[60] /* MatStm1.liqPhasMolFrac variable */ = 1.0 - ((0.01) * (data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */));
  TRACE_POP
}
/*
equation index: 104
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac = (-MatStm1.liqPhasMolFrac) - -1.0
*/
void Flowsheet_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  data->localData[0]->realVars[88] /* MatStm1.vapPhasMolFrac variable */ = (-data->localData[0]->realVars[60] /* MatStm1.liqPhasMolFrac variable */) - (-1.0);
  TRACE_POP
}
/*
equation index: 105
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[2] = 100.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */ = (100.0) * (data->localData[0]->realVars[60] /* MatStm1.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 106
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  data->localData[0]->realVars[37] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 107
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->localData[0]->realVars[38] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc125(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,125};
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
  data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */ = xloc[1];
  data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */ = xloc[2];
  data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */ = xloc[3];
  data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
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
  /* body */
  res[0] = data->localData[0]->realVars[40] /* MatStm1.compMolFlo[3,2] variable */ + data->localData[0]->realVars[38] /* MatStm1.compMolFlo[2,2] variable */ - data->localData[0]->realVars[36] /* MatStm1.compMolFlo[1,2] variable */;

  res[1] = data->localData[0]->realVars[39] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[37] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[35] /* MatStm1.compMolFlo[1,1] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[41] /* MatStm1.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[88] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[0] /* MatStm1.K[1] variable */),"1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[1])",equationIndexes)):data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */);
  }
  res[2] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */ + data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */);
  }
  res[3] = tmp7;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[42] /* MatStm1.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[88] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[1] /* MatStm1.K[2] variable */),"1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[2])",equationIndexes)):data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */);
  }
  res[4] = tmp11;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS125(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS125(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[86].attribute /* MatStm1.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[86].attribute /* MatStm1.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[86].attribute /* MatStm1.totMolFlo[3] */.max;
  /* static nls data for MatStm1.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[46].attribute /* MatStm1.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[46].attribute /* MatStm1.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[46].attribute /* MatStm1.compMolFrac[3,2] */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[45].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[45].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[45].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[43].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[43].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[43].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* static nls data for MatStm1.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[44].attribute /* MatStm1.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[44].attribute /* MatStm1.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[44].attribute /* MatStm1.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS125(sysData);
}

void getIterationVarsNLS125(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */;
  array[2] = data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */;
  array[3] = data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */;
  array[4] = data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */;
}


/* inner equations */

/*
equation index: 26
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->localData[0]->realVars[40] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[39] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 1.0 - 0.01 * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[60] /* MatStm1.liqPhasMolFrac variable */ = 1.0 - ((0.01) * (data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */));
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac = (-MatStm1.liqPhasMolFrac) - -1.0
*/
void Flowsheet_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[88] /* MatStm1.vapPhasMolFrac variable */ = (-data->localData[0]->realVars[60] /* MatStm1.liqPhasMolFrac variable */) - (-1.0);
  TRACE_POP
}
/*
equation index: 30
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[2] = 100.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */ = (100.0) * (data->localData[0]->realVars[60] /* MatStm1.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 31
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->localData[0]->realVars[37] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[38] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc50(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,50};
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
  data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */ = xloc[1];
  data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */ = xloc[2];
  data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_26(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_27(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_28(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_29(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_30(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_31(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_32(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[39] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[37] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[35] /* MatStm1.compMolFlo[1,1] variable */;

  res[1] = data->localData[0]->realVars[40] /* MatStm1.compMolFlo[3,2] variable */ + data->localData[0]->realVars[38] /* MatStm1.compMolFlo[2,2] variable */ - data->localData[0]->realVars[36] /* MatStm1.compMolFlo[1,2] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[42] /* MatStm1.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[88] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[1] /* MatStm1.K[2] variable */),"1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[2])",equationIndexes)):data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */);
  }
  res[2] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[41] /* MatStm1.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[88] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[0] /* MatStm1.K[1] variable */),"1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[1])",equationIndexes)):data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */);
  }
  res[3] = tmp7;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */ + data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */);
  }
  res[4] = tmp11;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS50(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,5,3,2,3,2};
  const int rowIndex[15] = {0,1,2,3,4,0,3,4,0,3,1,2,4,1,2};
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
void initializeStaticDataNLS50(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[86].attribute /* MatStm1.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[86].attribute /* MatStm1.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[86].attribute /* MatStm1.totMolFlo[3] */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[45].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[45].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[45].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[43].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[43].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[43].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* static nls data for MatStm1.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[46].attribute /* MatStm1.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[46].attribute /* MatStm1.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[46].attribute /* MatStm1.compMolFrac[3,2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[44].attribute /* MatStm1.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[44].attribute /* MatStm1.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[44].attribute /* MatStm1.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS50(sysData);
}

void getIterationVarsNLS50(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */;
  array[2] = data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */;
  array[3] = data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void Flowsheet_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[1].equationIndex = 125;
  nonLinearSystemData[1].size = 5;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 0;
  nonLinearSystemData[1].residualFunc = residualFunc125;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = Flowsheet_functionJacNLSJac1_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac1;
  nonLinearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS125;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS125;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 50;
  nonLinearSystemData[0].size = 5;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 0;
  nonLinearSystemData[0].residualFunc = residualFunc50;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = Flowsheet_functionJacNLSJac0_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac0;
  nonLinearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS50;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS50;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

