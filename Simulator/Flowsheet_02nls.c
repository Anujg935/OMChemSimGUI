/* Non Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 753
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[2,1] = MatStm5.compMolFrac[2,1] * MatStm5.totMolFlo[2]
*/
void Flowsheet_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  data->localData[0]->realVars[405] /* MatStm5.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 754
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[2,2] = MatStm5.compMolFrac[2,2] * MatStm5.totMolFlo[2]
*/
void Flowsheet_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  data->localData[0]->realVars[406] /* MatStm5.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 755
type: SIMPLE_ASSIGN
MatStm5._liqPhasMolFrac = 0.02 * MatStm5.totMolFlo[2]
*/
void Flowsheet_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  data->localData[0]->realVars[428] /* MatStm5.liqPhasMolFrac variable */ = (0.02) * (data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 756
type: SIMPLE_ASSIGN
MatStm5._vapPhasMolFrac = 1.0 - MatStm5.liqPhasMolFrac
*/
void Flowsheet_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  data->localData[0]->realVars[455] /* MatStm5.vapPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[428] /* MatStm5.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 757
type: SIMPLE_ASSIGN
MatStm5._totMolFlo[3] = 50.0 * MatStm5.vapPhasMolFrac
*/
void Flowsheet_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  data->localData[0]->realVars[453] /* MatStm5.totMolFlo[3] variable */ = (50.0) * (data->localData[0]->realVars[455] /* MatStm5.vapPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 758
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[3,1] = MatStm5.compMolFrac[3,1] * MatStm5.totMolFlo[3]
*/
void Flowsheet_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  data->localData[0]->realVars[407] /* MatStm5.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[453] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 759
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[3,2] = MatStm5.compMolFrac[3,2] * MatStm5.totMolFlo[3]
*/
void Flowsheet_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  data->localData[0]->realVars[408] /* MatStm5.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[453] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc777(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,777};
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
  data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */ = xloc[2];
  data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_753(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_754(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_755(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_756(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_757(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_758(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_759(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp3 = (tmp1?data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[455] /* MatStm5.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[371] /* MatStm5.K[2] variable */),"1.0 + MatStm5.vapPhasMolFrac * (-1.0 + MatStm5.K[2])",equationIndexes)):data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[408] /* MatStm5.compMolFlo[3,2] variable */ + data->localData[0]->realVars[406] /* MatStm5.compMolFlo[2,2] variable */ - data->localData[0]->realVars[404] /* MatStm5.compMolFlo[1,2] variable */;

  RELATIONHYSTERESIS(tmp4, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[453] /* MatStm5.totMolFlo[3] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp5, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp7 = (tmp5?data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */ + data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */);
  }
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[407] /* MatStm5.compMolFlo[3,1] variable */ + data->localData[0]->realVars[405] /* MatStm5.compMolFlo[2,1] variable */ - data->localData[0]->realVars[403] /* MatStm5.compMolFlo[1,1] variable */;

  RELATIONHYSTERESIS(tmp8, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp9, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp11 = (tmp9?data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[455] /* MatStm5.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[370] /* MatStm5.K[1] variable */),"1.0 + MatStm5.vapPhasMolFrac * (-1.0 + MatStm5.K[1])",equationIndexes)):data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */);
  }
  res[4] = tmp11;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS777(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS777(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm5.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[452].attribute /* MatStm5.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[452].attribute /* MatStm5.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[452].attribute /* MatStm5.totMolFlo[2] */.max;
  /* static nls data for MatStm5.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[411].attribute /* MatStm5.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[411].attribute /* MatStm5.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[411].attribute /* MatStm5.compMolFrac[2,1] */.max;
  /* static nls data for MatStm5.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[413].attribute /* MatStm5.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[413].attribute /* MatStm5.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[413].attribute /* MatStm5.compMolFrac[3,1] */.max;
  /* static nls data for MatStm5.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[414].attribute /* MatStm5.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[414].attribute /* MatStm5.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[414].attribute /* MatStm5.compMolFrac[3,2] */.max;
  /* static nls data for MatStm5.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[412].attribute /* MatStm5.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[412].attribute /* MatStm5.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[412].attribute /* MatStm5.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS777(sysData);
}

void getIterationVarsNLS777(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */;
  array[3] = data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */;
}


/* inner equations */

/*
equation index: 694
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[3,1] = MatStm4.compMolFrac[3,1] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  data->localData[0]->realVars[319] /* MatStm4.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[365] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 695
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[3,2] = MatStm4.compMolFrac[3,2] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  data->localData[0]->realVars[320] /* MatStm4.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[365] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 696
type: SIMPLE_ASSIGN
MatStm4._vapPhasMolFrac = 0.02 * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  data->localData[0]->realVars[367] /* MatStm4.vapPhasMolFrac variable */ = (0.02) * (data->localData[0]->realVars[365] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 697
type: SIMPLE_ASSIGN
MatStm4._liqPhasMolFrac = 1.0 - MatStm4.vapPhasMolFrac
*/
void Flowsheet_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  data->localData[0]->realVars[340] /* MatStm4.liqPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[367] /* MatStm4.vapPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 698
type: SIMPLE_ASSIGN
MatStm4._totMolFlo[2] = 50.0 * MatStm4.liqPhasMolFrac
*/
void Flowsheet_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  data->localData[0]->realVars[364] /* MatStm4.totMolFlo[2] variable */ = (50.0) * (data->localData[0]->realVars[340] /* MatStm4.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 699
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[2,1] = MatStm4.compMolFrac[2,1] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  data->localData[0]->realVars[317] /* MatStm4.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[364] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 700
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[2,2] = MatStm4.compMolFrac[2,2] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,700};
  data->localData[0]->realVars[318] /* MatStm4.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[364] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc718(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,718};
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
  data->localData[0]->realVars[365] /* MatStm4.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */ = xloc[2];
  data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */ = xloc[3];
  data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_694(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_695(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_696(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_697(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_698(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_699(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_700(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[365] /* MatStm4.totMolFlo[3] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp3 = (tmp1?data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */ + data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[364] /* MatStm4.totMolFlo[2] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[320] /* MatStm4.compMolFlo[3,2] variable */ + data->localData[0]->realVars[318] /* MatStm4.compMolFlo[2,2] variable */ - data->localData[0]->realVars[316] /* MatStm4.compMolFlo[1,2] variable */;

  RELATIONHYSTERESIS(tmp4, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp5, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp7 = (tmp5?data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[322] /* MatStm4.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[367] /* MatStm4.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[283] /* MatStm4.K[2] variable */),"1.0 + MatStm4.vapPhasMolFrac * (-1.0 + MatStm4.K[2])",equationIndexes)):data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */);
  }
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[319] /* MatStm4.compMolFlo[3,1] variable */ + data->localData[0]->realVars[317] /* MatStm4.compMolFlo[2,1] variable */ - data->localData[0]->realVars[315] /* MatStm4.compMolFlo[1,1] variable */;

  RELATIONHYSTERESIS(tmp8, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp9, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp11 = (tmp9?data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[321] /* MatStm4.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[367] /* MatStm4.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[282] /* MatStm4.K[1] variable */),"1.0 + MatStm4.vapPhasMolFrac * (-1.0 + MatStm4.K[1])",equationIndexes)):data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */);
  }
  res[4] = tmp11;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS718(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,5,2,3,2,3};
  const int rowIndex[15] = {0,1,2,3,4,3,4,0,1,2,1,2,0,3,4};
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
void initializeStaticDataNLS718(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm4.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[365].attribute /* MatStm4.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[365].attribute /* MatStm4.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[365].attribute /* MatStm4.totMolFlo[3] */.max;
  /* static nls data for MatStm4.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[323].attribute /* MatStm4.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[323].attribute /* MatStm4.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[323].attribute /* MatStm4.compMolFrac[2,1] */.max;
  /* static nls data for MatStm4.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[326].attribute /* MatStm4.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[326].attribute /* MatStm4.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[326].attribute /* MatStm4.compMolFrac[3,2] */.max;
  /* static nls data for MatStm4.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[324].attribute /* MatStm4.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[324].attribute /* MatStm4.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[324].attribute /* MatStm4.compMolFrac[2,2] */.max;
  /* static nls data for MatStm4.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[325].attribute /* MatStm4.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[325].attribute /* MatStm4.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[325].attribute /* MatStm4.compMolFrac[3,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS718(sysData);
}

void getIterationVarsNLS718(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[365] /* MatStm4.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */;
  array[3] = data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */;
  array[4] = data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */;
}


/* inner equations */

/*
equation index: 582
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[36] /* MatStm1.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[169], tmp0, tmp1, data->simulationInfo->realParameter[179], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 583
type: SIMPLE_ASSIGN
MatStm1._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[2].VP[1], MatStm1.comp[2].VP[2], MatStm1.comp[2].VP[3], MatStm1.comp[2].VP[4], MatStm1.comp[2].VP[5], MatStm1.comp[2].VP[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[193], (modelica_real)data->simulationInfo->realParameter[194], (modelica_real)data->simulationInfo->realParameter[195], (modelica_real)data->simulationInfo->realParameter[196], (modelica_real)data->simulationInfo->realParameter[197], (modelica_real)data->simulationInfo->realParameter[198]);
  data->localData[0]->realVars[21] /* MatStm1.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 584
type: SIMPLE_ASSIGN
MatStm1._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[1].VP[1], MatStm1.comp[1].VP[2], MatStm1.comp[1].VP[3], MatStm1.comp[1].VP[4], MatStm1.comp[1].VP[5], MatStm1.comp[1].VP[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[187], (modelica_real)data->simulationInfo->realParameter[188], (modelica_real)data->simulationInfo->realParameter[189], (modelica_real)data->simulationInfo->realParameter[190], (modelica_real)data->simulationInfo->realParameter[191], (modelica_real)data->simulationInfo->realParameter[192]);
  data->localData[0]->realVars[20] /* MatStm1.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 585
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[37] /* MatStm1.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[170], tmp0, tmp1, data->simulationInfo->realParameter[180], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 586
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[38] /* MatStm1.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[169], tmp0, tmp1, data->simulationInfo->realParameter[179], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 587
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[39] /* MatStm1.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[170], tmp0, tmp1, data->simulationInfo->realParameter[180], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 588
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEnth[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEnth[2,2]
*/
void Flowsheet_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  data->localData[0]->realVars[75] /* MatStm1.phasMolEnth[2] variable */ = (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[36] /* MatStm1.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[37] /* MatStm1.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 589
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEnth[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEnth[3,2]
*/
void Flowsheet_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  data->localData[0]->realVars[76] /* MatStm1.phasMolEnth[3] variable */ = (data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[38] /* MatStm1.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[39] /* MatStm1.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 590
type: SIMPLE_ASSIGN
MatStm1._K[2] = 9.869232667160129e-006 * MatStm1.Psat[2]
*/
void Flowsheet_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  data->localData[0]->realVars[14] /* MatStm1.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[21] /* MatStm1.Psat[2] variable */);
  TRACE_POP
}
/*
equation index: 591
type: SIMPLE_ASSIGN
MatStm1._K[1] = 9.869232667160129e-006 * MatStm1.Psat[1]
*/
void Flowsheet_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  data->localData[0]->realVars[13] /* MatStm1.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[20] /* MatStm1.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 592
type: SIMPLE_ASSIGN
$cse2 = log(Splitter1.outT[2])
*/
void Flowsheet_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Splitter1.outT[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[5] /* $cse2 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 593
type: SIMPLE_ASSIGN
$cse5 = exp((-MatStm1.comp[2].VP[2]) - MatStm1.comp[2].VP[3] / Splitter1.outT[2] - MatStm1.comp[2].VP[4] * $cse2 - MatStm1.comp[2].VP[5] * Splitter1.outT[2] ^ MatStm1.comp[2].VP[6])
*/
void Flowsheet_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
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
  data->localData[0]->realVars[8] /* $cse5 variable */ = exp((-data->simulationInfo->realParameter[194]) - (DIVISION_SIM(data->simulationInfo->realParameter[195],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes)) - ((data->simulationInfo->realParameter[196]) * (data->localData[0]->realVars[5] /* $cse2 variable */)) - ((data->simulationInfo->realParameter[197]) * (tmp2)));
  TRACE_POP
}
/*
equation index: 594
type: SIMPLE_ASSIGN
$cse4 = exp((-MatStm1.comp[1].VP[2]) - MatStm1.comp[1].VP[3] / Splitter1.outT[2] - MatStm1.comp[1].VP[4] * $cse2 - MatStm1.comp[1].VP[5] * Splitter1.outT[2] ^ MatStm1.comp[1].VP[6])
*/
void Flowsheet_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
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
  data->localData[0]->realVars[7] /* $cse4 variable */ = exp((-data->simulationInfo->realParameter[188]) - (DIVISION_SIM(data->simulationInfo->realParameter[189],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes)) - ((data->simulationInfo->realParameter[190]) * (data->localData[0]->realVars[5] /* $cse2 variable */)) - ((data->simulationInfo->realParameter[191]) * (tmp2)));
  TRACE_POP
}
/*
equation index: 595
type: SIMPLE_ASSIGN
MatStm1._Pdew = 1.0 / (MatStm1.compMolFrac[1,1] * $cse4 + MatStm1.compMolFrac[1,2] * $cse5)
*/
void Flowsheet_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  data->localData[0]->realVars[19] /* MatStm1.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[7] /* $cse4 variable */) + (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[8] /* $cse5 variable */),"MatStm1.compMolFrac[1,1] * $cse4 + MatStm1.compMolFrac[1,2] * $cse5",equationIndexes);
  TRACE_POP
}
/*
equation index: 596
type: SIMPLE_ASSIGN
$cse3 = exp(MatStm1.comp[2].VP[2] + MatStm1.comp[2].VP[3] / Splitter1.outT[2] + MatStm1.comp[2].VP[4] * $cse2 + MatStm1.comp[2].VP[5] * Splitter1.outT[2] ^ MatStm1.comp[2].VP[6])
*/
void Flowsheet_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
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
  data->localData[0]->realVars[6] /* $cse3 variable */ = exp(data->simulationInfo->realParameter[194] + DIVISION_SIM(data->simulationInfo->realParameter[195],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes) + (data->simulationInfo->realParameter[196]) * (data->localData[0]->realVars[5] /* $cse2 variable */) + (data->simulationInfo->realParameter[197]) * (tmp2));
  TRACE_POP
}
/*
equation index: 597
type: SIMPLE_ASSIGN
$cse1 = exp(MatStm1.comp[1].VP[2] + MatStm1.comp[1].VP[3] / Splitter1.outT[2] + MatStm1.comp[1].VP[4] * $cse2 + MatStm1.comp[1].VP[5] * Splitter1.outT[2] ^ MatStm1.comp[1].VP[6])
*/
void Flowsheet_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
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
  data->localData[0]->realVars[0] /* $cse1 variable */ = exp(data->simulationInfo->realParameter[188] + DIVISION_SIM(data->simulationInfo->realParameter[189],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes) + (data->simulationInfo->realParameter[190]) * (data->localData[0]->realVars[5] /* $cse2 variable */) + (data->simulationInfo->realParameter[191]) * (tmp2));
  TRACE_POP
}
/*
equation index: 598
type: SIMPLE_ASSIGN
MatStm1._Pbubl = MatStm1.compMolFrac[1,1] * $cse1 + MatStm1.compMolFrac[1,2] * $cse3
*/
void Flowsheet_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */ = (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[0] /* $cse1 variable */) + (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[6] /* $cse3 variable */);
  TRACE_POP
}
/*
equation index: 599
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,599};
  data->localData[0]->realVars[51] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 600
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  data->localData[0]->realVars[50] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 601
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac = 0.005 * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  data->localData[0]->realVars[99] /* MatStm1.vapPhasMolFrac variable */ = (0.005) * (data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 602
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 1.0 - MatStm1.vapPhasMolFrac
*/
void Flowsheet_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  data->localData[0]->realVars[71] /* MatStm1.liqPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[99] /* MatStm1.vapPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 603
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[2] = 200.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  data->localData[0]->realVars[96] /* MatStm1.totMolFlo[2] variable */ = (200.0) * (data->localData[0]->realVars[71] /* MatStm1.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 604
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  data->localData[0]->realVars[49] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[96] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 605
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  data->localData[0]->realVars[48] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[96] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc612(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,612};
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
  data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */ = xloc[1];
  data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */ = xloc[2];
  data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */ = xloc[4];
  data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */ = xloc[5];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_582(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_583(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_584(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_585(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_586(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_587(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_588(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_589(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_590(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_591(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_592(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_593(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_594(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_595(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_596(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_597(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_598(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_599(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_600(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_601(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_602(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_603(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_604(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_605(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp3 = (tmp1?data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[99] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[13] /* MatStm1.K[1] variable */),"1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[1])",equationIndexes)):data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[50] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[48] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[46] /* MatStm1.compMolFlo[1,1] variable */;

  RELATIONHYSTERESIS(tmp4, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp5, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp7 = (tmp5?data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */ + data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[96] /* MatStm1.totMolFlo[2] variable */);
  }
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[51] /* MatStm1.compMolFlo[3,2] variable */ + data->localData[0]->realVars[49] /* MatStm1.compMolFlo[2,2] variable */ - data->localData[0]->realVars[47] /* MatStm1.compMolFlo[1,2] variable */;

  RELATIONHYSTERESIS(tmp8, 101325.0, data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp9, 101325.0, data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp11 = (tmp9?data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[53] /* MatStm1.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[99] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[14] /* MatStm1.K[2] variable */),"1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[2])",equationIndexes)):data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */);
  }
  res[4] = tmp11;

  res[5] = (data->localData[0]->realVars[99] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[76] /* MatStm1.phasMolEnth[3] variable */) + (data->localData[0]->realVars[71] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[75] /* MatStm1.phasMolEnth[2] variable */) - data->localData[0]->realVars[74] /* MatStm1.phasMolEnth[1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS612(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+6] = {0,6,4,3,4,4,3};
  const int rowIndex[24] = {0,1,2,3,4,5,0,2,4,5,3,4,5,2,3,4,5,0,1,2,5,0,1,5};
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
void initializeStaticDataNLS612(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[97].attribute /* MatStm1.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[97].attribute /* MatStm1.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[97].attribute /* MatStm1.totMolFlo[3] */.max;
  /* static nls data for Splitter1.outT[2] */
  sysData->nominal[i] = data->modelData->realVarsData[466].attribute /* Splitter1.outT[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[466].attribute /* Splitter1.outT[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[466].attribute /* Splitter1.outT[2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[55].attribute /* MatStm1.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[55].attribute /* MatStm1.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[55].attribute /* MatStm1.compMolFrac[2,2] */.max;
  /* static nls data for MatStm1.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[57].attribute /* MatStm1.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[57].attribute /* MatStm1.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[57].attribute /* MatStm1.compMolFrac[3,2] */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[56].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[56].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[56].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS612(sysData);
}

void getIterationVarsNLS612(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  array[2] = data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */;
  array[3] = data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */;
  array[5] = data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */;
}


/* inner equations */

/*
equation index: 530
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  data->localData[0]->realVars[230] /* MatStm3.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 531
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  data->localData[0]->realVars[229] /* MatStm3.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 532
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac = 0.01 * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->localData[0]->realVars[252] /* MatStm3.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 533
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac[1] = 1.0 - MatStm3.liqPhasMolFrac
*/
void Flowsheet_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */ = 1.0 - data->localData[0]->realVars[252] /* MatStm3.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 534
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[3] = 100.0 * Mixer1.inVapPhasMolFrac[1]
*/
void Flowsheet_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->localData[0]->realVars[278] /* MatStm3.totMolFlo[3] variable */ = (100.0) * (data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */);
  TRACE_POP
}
/*
equation index: 535
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  data->localData[0]->realVars[232] /* MatStm3.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[278] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 536
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->localData[0]->realVars[231] /* MatStm3.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[278] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc554(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,554};
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
  data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */ = xloc[1];
  data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */ = xloc[2];
  data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */ = xloc[3];
  data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_530(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_531(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_532(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_533(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_534(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_535(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_536(data, threadData);
  /* body */
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[233] /* MatStm3.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[192] /* MatStm3.K[1] variable */),"1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[1])",equationIndexes)):data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[231] /* MatStm3.compMolFlo[3,1] variable */ + data->localData[0]->realVars[229] /* MatStm3.compMolFlo[2,1] variable */ - data->localData[0]->realVars[227] /* MatStm3.compMolFlo[1,1] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[278] /* MatStm3.totMolFlo[3] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */ + data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */);
  }
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[232] /* MatStm3.compMolFlo[3,2] variable */ + data->localData[0]->realVars[230] /* MatStm3.compMolFlo[2,2] variable */ - data->localData[0]->realVars[228] /* MatStm3.compMolFlo[1,2] variable */;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[234] /* MatStm3.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[193] /* MatStm3.K[2] variable */),"1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[2])",equationIndexes)):data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */);
  }
  res[4] = tmp11;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS554(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS554(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm3.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[277].attribute /* MatStm3.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[277].attribute /* MatStm3.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[277].attribute /* MatStm3.totMolFlo[2] */.max;
  /* static nls data for MatStm3.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[236].attribute /* MatStm3.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[236].attribute /* MatStm3.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[236].attribute /* MatStm3.compMolFrac[2,2] */.max;
  /* static nls data for MatStm3.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[238].attribute /* MatStm3.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[238].attribute /* MatStm3.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[238].attribute /* MatStm3.compMolFrac[3,2] */.max;
  /* static nls data for MatStm3.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[237].attribute /* MatStm3.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[237].attribute /* MatStm3.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[237].attribute /* MatStm3.compMolFrac[3,1] */.max;
  /* static nls data for MatStm3.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[235].attribute /* MatStm3.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[235].attribute /* MatStm3.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[235].attribute /* MatStm3.compMolFrac[2,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS554(sysData);
}

void getIterationVarsNLS554(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */;
  array[2] = data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */;
  array[3] = data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */;
  array[4] = data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */;
}


/* inner equations */

/*
equation index: 476
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  data->localData[0]->realVars[140] /* MatStm2.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 477
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  data->localData[0]->realVars[139] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 478
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac = 0.01 * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  data->localData[0]->realVars[162] /* MatStm2.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 479
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac[2] = 1.0 - MatStm2.liqPhasMolFrac
*/
void Flowsheet_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */ = 1.0 - data->localData[0]->realVars[162] /* MatStm2.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 480
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[3] = 100.0 * Mixer1.inVapPhasMolFrac[2]
*/
void Flowsheet_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->localData[0]->realVars[188] /* MatStm2.totMolFlo[3] variable */ = (100.0) * (data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */);
  TRACE_POP
}
/*
equation index: 481
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->localData[0]->realVars[142] /* MatStm2.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[188] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 482
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  data->localData[0]->realVars[141] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[188] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc500(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,500};
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
  data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */ = xloc[1];
  data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */ = xloc[2];
  data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */ = xloc[3];
  data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_476(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_477(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_478(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_479(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_480(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_481(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_482(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[141] /* MatStm2.compMolFlo[3,1] variable */ + data->localData[0]->realVars[139] /* MatStm2.compMolFlo[2,1] variable */ - data->localData[0]->realVars[137] /* MatStm2.compMolFlo[1,1] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[143] /* MatStm2.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[102] /* MatStm2.K[1] variable */),"1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[1])",equationIndexes)):data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */);
  }
  res[1] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[188] /* MatStm2.totMolFlo[3] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */ + data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */);
  }
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[142] /* MatStm2.compMolFlo[3,2] variable */ + data->localData[0]->realVars[140] /* MatStm2.compMolFlo[2,2] variable */ - data->localData[0]->realVars[138] /* MatStm2.compMolFlo[1,2] variable */;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[144] /* MatStm2.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[103] /* MatStm2.K[2] variable */),"1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[2])",equationIndexes)):data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */);
  }
  res[4] = tmp11;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS500(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS500(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm2.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[187].attribute /* MatStm2.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[187].attribute /* MatStm2.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[187].attribute /* MatStm2.totMolFlo[2] */.max;
  /* static nls data for MatStm2.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* MatStm2.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* MatStm2.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* MatStm2.compMolFrac[2,2] */.max;
  /* static nls data for MatStm2.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* MatStm2.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* MatStm2.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* MatStm2.compMolFrac[3,2] */.max;
  /* static nls data for MatStm2.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* MatStm2.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* MatStm2.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* MatStm2.compMolFrac[3,1] */.max;
  /* static nls data for MatStm2.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* MatStm2.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* MatStm2.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* MatStm2.compMolFrac[2,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS500(sysData);
}

void getIterationVarsNLS500(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */;
  array[2] = data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */;
  array[3] = data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */;
  array[4] = data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */;
}


/* inner equations */

/*
equation index: 336
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[2,1] = MatStm5.compMolFrac[2,1] * MatStm5.totMolFlo[2]
*/
void Flowsheet_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->localData[0]->realVars[405] /* MatStm5.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 337
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[2,2] = MatStm5.compMolFrac[2,2] * MatStm5.totMolFlo[2]
*/
void Flowsheet_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->localData[0]->realVars[406] /* MatStm5.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 338
type: SIMPLE_ASSIGN
MatStm5._liqPhasMolFrac = 0.02 * MatStm5.totMolFlo[2]
*/
void Flowsheet_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->localData[0]->realVars[428] /* MatStm5.liqPhasMolFrac variable */ = (0.02) * (data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 339
type: SIMPLE_ASSIGN
MatStm5._vapPhasMolFrac = 1.0 - MatStm5.liqPhasMolFrac
*/
void Flowsheet_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->localData[0]->realVars[455] /* MatStm5.vapPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[428] /* MatStm5.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 340
type: SIMPLE_ASSIGN
MatStm5._totMolFlo[3] = 50.0 * MatStm5.vapPhasMolFrac
*/
void Flowsheet_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->localData[0]->realVars[453] /* MatStm5.totMolFlo[3] variable */ = (50.0) * (data->localData[0]->realVars[455] /* MatStm5.vapPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 341
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[3,1] = MatStm5.compMolFrac[3,1] * MatStm5.totMolFlo[3]
*/
void Flowsheet_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  data->localData[0]->realVars[407] /* MatStm5.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[453] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 342
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[3,2] = MatStm5.compMolFrac[3,2] * MatStm5.totMolFlo[3]
*/
void Flowsheet_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  data->localData[0]->realVars[408] /* MatStm5.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[453] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc360(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,360};
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
  data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */ = xloc[1];
  data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */ = xloc[2];
  data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_336(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_337(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_338(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_339(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_340(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_341(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_342(data, threadData);
  /* body */
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[455] /* MatStm5.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[370] /* MatStm5.K[1] variable */),"1.0 + MatStm5.vapPhasMolFrac * (-1.0 + MatStm5.K[1])",equationIndexes)):data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[408] /* MatStm5.compMolFlo[3,2] variable */ + data->localData[0]->realVars[406] /* MatStm5.compMolFlo[2,2] variable */ - data->localData[0]->realVars[404] /* MatStm5.compMolFlo[1,2] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[455] /* MatStm5.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[371] /* MatStm5.K[2] variable */),"1.0 + MatStm5.vapPhasMolFrac * (-1.0 + MatStm5.K[2])",equationIndexes)):data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */);
  }
  res[2] = tmp7;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[453] /* MatStm5.totMolFlo[3] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */ + data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */);
  }
  res[3] = tmp11;

  res[4] = data->localData[0]->realVars[407] /* MatStm5.compMolFlo[3,1] variable */ + data->localData[0]->realVars[405] /* MatStm5.compMolFlo[2,1] variable */ - data->localData[0]->realVars[403] /* MatStm5.compMolFlo[1,1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS360(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,5,3,2,3,2};
  const int rowIndex[15] = {0,1,2,3,4,0,3,4,1,2,1,2,3,0,4};
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
void initializeStaticDataNLS360(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm5.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[452].attribute /* MatStm5.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[452].attribute /* MatStm5.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[452].attribute /* MatStm5.totMolFlo[2] */.max;
  /* static nls data for MatStm5.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[413].attribute /* MatStm5.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[413].attribute /* MatStm5.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[413].attribute /* MatStm5.compMolFrac[3,1] */.max;
  /* static nls data for MatStm5.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[412].attribute /* MatStm5.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[412].attribute /* MatStm5.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[412].attribute /* MatStm5.compMolFrac[2,2] */.max;
  /* static nls data for MatStm5.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[414].attribute /* MatStm5.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[414].attribute /* MatStm5.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[414].attribute /* MatStm5.compMolFrac[3,2] */.max;
  /* static nls data for MatStm5.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[411].attribute /* MatStm5.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[411].attribute /* MatStm5.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[411].attribute /* MatStm5.compMolFrac[2,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS360(sysData);
}

void getIterationVarsNLS360(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */;
  array[2] = data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */;
  array[3] = data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */;
}


/* inner equations */

/*
equation index: 277
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[2,1] = MatStm4.compMolFrac[2,1] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->localData[0]->realVars[317] /* MatStm4.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[364] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 278
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[2,2] = MatStm4.compMolFrac[2,2] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->localData[0]->realVars[318] /* MatStm4.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[364] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 279
type: SIMPLE_ASSIGN
MatStm4._liqPhasMolFrac = 0.02 * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->localData[0]->realVars[340] /* MatStm4.liqPhasMolFrac variable */ = (0.02) * (data->localData[0]->realVars[364] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 280
type: SIMPLE_ASSIGN
MatStm4._vapPhasMolFrac = 1.0 - MatStm4.liqPhasMolFrac
*/
void Flowsheet_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->localData[0]->realVars[367] /* MatStm4.vapPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[340] /* MatStm4.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 281
type: SIMPLE_ASSIGN
MatStm4._totMolFlo[3] = 50.0 * MatStm4.vapPhasMolFrac
*/
void Flowsheet_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->localData[0]->realVars[365] /* MatStm4.totMolFlo[3] variable */ = (50.0) * (data->localData[0]->realVars[367] /* MatStm4.vapPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 282
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[3,1] = MatStm4.compMolFrac[3,1] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->localData[0]->realVars[319] /* MatStm4.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[365] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 283
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[3,2] = MatStm4.compMolFrac[3,2] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->localData[0]->realVars[320] /* MatStm4.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[365] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc301(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,301};
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
  data->localData[0]->realVars[364] /* MatStm4.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */ = xloc[2];
  data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_277(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_278(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_279(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_280(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_281(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_282(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_283(data, threadData);
  /* body */
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[322] /* MatStm4.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[367] /* MatStm4.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[283] /* MatStm4.K[2] variable */),"1.0 + MatStm4.vapPhasMolFrac * (-1.0 + MatStm4.K[2])",equationIndexes)):data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[320] /* MatStm4.compMolFlo[3,2] variable */ + data->localData[0]->realVars[318] /* MatStm4.compMolFlo[2,2] variable */ - data->localData[0]->realVars[316] /* MatStm4.compMolFlo[1,2] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[365] /* MatStm4.totMolFlo[3] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */ + data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[364] /* MatStm4.totMolFlo[2] variable */);
  }
  res[2] = tmp7;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[321] /* MatStm4.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[367] /* MatStm4.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[282] /* MatStm4.K[1] variable */),"1.0 + MatStm4.vapPhasMolFrac * (-1.0 + MatStm4.K[1])",equationIndexes)):data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */);
  }
  res[3] = tmp11;

  res[4] = data->localData[0]->realVars[319] /* MatStm4.compMolFlo[3,1] variable */ + data->localData[0]->realVars[317] /* MatStm4.compMolFlo[2,1] variable */ - data->localData[0]->realVars[315] /* MatStm4.compMolFlo[1,1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS301(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS301(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm4.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[364].attribute /* MatStm4.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[364].attribute /* MatStm4.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[364].attribute /* MatStm4.totMolFlo[2] */.max;
  /* static nls data for MatStm4.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[323].attribute /* MatStm4.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[323].attribute /* MatStm4.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[323].attribute /* MatStm4.compMolFrac[2,1] */.max;
  /* static nls data for MatStm4.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[325].attribute /* MatStm4.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[325].attribute /* MatStm4.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[325].attribute /* MatStm4.compMolFrac[3,1] */.max;
  /* static nls data for MatStm4.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[326].attribute /* MatStm4.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[326].attribute /* MatStm4.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[326].attribute /* MatStm4.compMolFrac[3,2] */.max;
  /* static nls data for MatStm4.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[324].attribute /* MatStm4.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[324].attribute /* MatStm4.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[324].attribute /* MatStm4.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS301(sysData);
}

void getIterationVarsNLS301(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[364] /* MatStm4.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */;
  array[3] = data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */;
}


/* inner equations */

/*
equation index: 165
type: SIMPLE_ASSIGN
MatStm1._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[2].VP[1], MatStm1.comp[2].VP[2], MatStm1.comp[2].VP[3], MatStm1.comp[2].VP[4], MatStm1.comp[2].VP[5], MatStm1.comp[2].VP[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[193], (modelica_real)data->simulationInfo->realParameter[194], (modelica_real)data->simulationInfo->realParameter[195], (modelica_real)data->simulationInfo->realParameter[196], (modelica_real)data->simulationInfo->realParameter[197], (modelica_real)data->simulationInfo->realParameter[198]);
  data->localData[0]->realVars[21] /* MatStm1.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 166
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[36] /* MatStm1.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[169], tmp0, tmp1, data->simulationInfo->realParameter[179], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 167
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[38] /* MatStm1.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[169], tmp0, tmp1, data->simulationInfo->realParameter[179], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 168
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[37] /* MatStm1.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[170], tmp0, tmp1, data->simulationInfo->realParameter[180], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 169
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[39] /* MatStm1.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[170], tmp0, tmp1, data->simulationInfo->realParameter[180], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 170
type: SIMPLE_ASSIGN
MatStm1._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[1].VP[1], MatStm1.comp[1].VP[2], MatStm1.comp[1].VP[3], MatStm1.comp[1].VP[4], MatStm1.comp[1].VP[5], MatStm1.comp[1].VP[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[187], (modelica_real)data->simulationInfo->realParameter[188], (modelica_real)data->simulationInfo->realParameter[189], (modelica_real)data->simulationInfo->realParameter[190], (modelica_real)data->simulationInfo->realParameter[191], (modelica_real)data->simulationInfo->realParameter[192]);
  data->localData[0]->realVars[20] /* MatStm1.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 171
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEnth[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEnth[3,2]
*/
void Flowsheet_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->localData[0]->realVars[76] /* MatStm1.phasMolEnth[3] variable */ = (data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[38] /* MatStm1.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[39] /* MatStm1.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 172
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEnth[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEnth[2,2]
*/
void Flowsheet_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->localData[0]->realVars[75] /* MatStm1.phasMolEnth[2] variable */ = (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[36] /* MatStm1.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[37] /* MatStm1.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 173
type: SIMPLE_ASSIGN
MatStm1._Pbubl = MatStm1.compMolFrac[1,1] * exp(MatStm1.comp[1].VP[2] + MatStm1.comp[1].VP[3] / Splitter1.outT[2] + MatStm1.comp[1].VP[4] * log(Splitter1.outT[2]) + MatStm1.comp[1].VP[5] * Splitter1.outT[2] ^ MatStm1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp(MatStm1.comp[2].VP[2] + MatStm1.comp[2].VP[3] / Splitter1.outT[2] + MatStm1.comp[2].VP[4] * log(Splitter1.outT[2]) + MatStm1.comp[2].VP[5] * Splitter1.outT[2] ^ MatStm1.comp[2].VP[6])
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
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  tmp0 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Splitter1.outT[2]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
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
  }tmp8 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  if(!(tmp8 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Splitter1.outT[2]) was %g should be > 0", tmp8);
  }tmp9 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
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
  data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */ = (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[188] + DIVISION_SIM(data->simulationInfo->realParameter[189],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes) + (data->simulationInfo->realParameter[190]) * (log(tmp0)) + (data->simulationInfo->realParameter[191]) * (tmp3))) + (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[194] + DIVISION_SIM(data->simulationInfo->realParameter[195],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes) + (data->simulationInfo->realParameter[196]) * (log(tmp8)) + (data->simulationInfo->realParameter[197]) * (tmp11)));
  TRACE_POP
}
/*
equation index: 174
type: SIMPLE_ASSIGN
MatStm1._Pdew = 1.0 / (MatStm1.compMolFrac[1,1] * exp((-MatStm1.comp[1].VP[2]) - MatStm1.comp[1].VP[3] / Splitter1.outT[2] - MatStm1.comp[1].VP[4] * log(Splitter1.outT[2]) - MatStm1.comp[1].VP[5] * Splitter1.outT[2] ^ MatStm1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp((-MatStm1.comp[2].VP[2]) - MatStm1.comp[2].VP[3] / Splitter1.outT[2] - MatStm1.comp[2].VP[4] * log(Splitter1.outT[2]) - MatStm1.comp[2].VP[5] * Splitter1.outT[2] ^ MatStm1.comp[2].VP[6]))
*/
void Flowsheet_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
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
  tmp0 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Splitter1.outT[2]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
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
  }tmp8 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  if(!(tmp8 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(Splitter1.outT[2]) was %g should be > 0", tmp8);
  }tmp9 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
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
  data->localData[0]->realVars[19] /* MatStm1.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[188]) - (DIVISION_SIM(data->simulationInfo->realParameter[189],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes)) - ((data->simulationInfo->realParameter[190]) * (log(tmp0))) - ((data->simulationInfo->realParameter[191]) * (tmp3)))) + (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[194]) - (DIVISION_SIM(data->simulationInfo->realParameter[195],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes)) - ((data->simulationInfo->realParameter[196]) * (log(tmp8))) - ((data->simulationInfo->realParameter[197]) * (tmp11)))),"MatStm1.compMolFrac[1,1] * exp((-MatStm1.comp[1].VP[2]) - MatStm1.comp[1].VP[3] / Splitter1.outT[2] - MatStm1.comp[1].VP[4] * log(Splitter1.outT[2]) - MatStm1.comp[1].VP[5] * Splitter1.outT[2] ^ MatStm1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp((-MatStm1.comp[2].VP[2]) - MatStm1.comp[2].VP[3] / Splitter1.outT[2] - MatStm1.comp[2].VP[4] * log(Splitter1.outT[2]) - MatStm1.comp[2].VP[5] * Splitter1.outT[2] ^ MatStm1.comp[2].VP[6])",equationIndexes);
  TRACE_POP
}
/*
equation index: 175
type: SIMPLE_ASSIGN
MatStm1._K[2] = 9.869232667160129e-006 * MatStm1.Psat[2]
*/
void Flowsheet_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->localData[0]->realVars[14] /* MatStm1.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[21] /* MatStm1.Psat[2] variable */);
  TRACE_POP
}
/*
equation index: 176
type: SIMPLE_ASSIGN
MatStm1._K[1] = 9.869232667160129e-006 * MatStm1.Psat[1]
*/
void Flowsheet_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->localData[0]->realVars[13] /* MatStm1.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[20] /* MatStm1.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 177
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->localData[0]->realVars[50] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 178
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->localData[0]->realVars[51] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 179
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac = 0.005 * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->localData[0]->realVars[99] /* MatStm1.vapPhasMolFrac variable */ = (0.005) * (data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 180
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 1.0 - MatStm1.vapPhasMolFrac
*/
void Flowsheet_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->localData[0]->realVars[71] /* MatStm1.liqPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[99] /* MatStm1.vapPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 181
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[2] = 200.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->localData[0]->realVars[96] /* MatStm1.totMolFlo[2] variable */ = (200.0) * (data->localData[0]->realVars[71] /* MatStm1.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 182
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->localData[0]->realVars[49] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[96] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 183
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->localData[0]->realVars[48] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[96] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc190(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,190};
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
  data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */ = xloc[1];
  data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */ = xloc[2];
  data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */ = xloc[3];
  data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */ = xloc[4];
  data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */ = xloc[5];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_165(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_166(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_167(data, threadData);

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
  /* body */
  res[0] = data->localData[0]->realVars[50] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[48] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[46] /* MatStm1.compMolFlo[1,1] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[99] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[13] /* MatStm1.K[1] variable */),"1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[1])",equationIndexes)):data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */);
  }
  res[1] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[53] /* MatStm1.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[99] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[14] /* MatStm1.K[2] variable */),"1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[2])",equationIndexes)):data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */);
  }
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[51] /* MatStm1.compMolFlo[3,2] variable */ + data->localData[0]->realVars[49] /* MatStm1.compMolFlo[2,2] variable */ - data->localData[0]->realVars[47] /* MatStm1.compMolFlo[1,2] variable */;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[19] /* MatStm1.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */ + data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[96] /* MatStm1.totMolFlo[2] variable */);
  }
  res[4] = tmp11;

  res[5] = (data->localData[0]->realVars[99] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[76] /* MatStm1.phasMolEnth[3] variable */) + (data->localData[0]->realVars[71] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[75] /* MatStm1.phasMolEnth[2] variable */) - data->localData[0]->realVars[74] /* MatStm1.phasMolEnth[1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS190(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS190(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[97].attribute /* MatStm1.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[97].attribute /* MatStm1.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[97].attribute /* MatStm1.totMolFlo[3] */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[56].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[56].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[56].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* static nls data for MatStm1.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[57].attribute /* MatStm1.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[57].attribute /* MatStm1.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[57].attribute /* MatStm1.compMolFrac[3,2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[55].attribute /* MatStm1.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[55].attribute /* MatStm1.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[55].attribute /* MatStm1.compMolFrac[2,2] */.max;
  /* static nls data for Splitter1.outT[2] */
  sysData->nominal[i] = data->modelData->realVarsData[466].attribute /* Splitter1.outT[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[466].attribute /* Splitter1.outT[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[466].attribute /* Splitter1.outT[2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[54].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS190(sysData);
}

void getIterationVarsNLS190(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */;
  array[2] = data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */;
  array[3] = data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */;
  array[4] = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  array[5] = data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */;
}


/* inner equations */

/*
equation index: 126
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  data->localData[0]->realVars[229] /* MatStm3.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 127
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->localData[0]->realVars[230] /* MatStm3.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 128
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac = 0.01 * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->localData[0]->realVars[252] /* MatStm3.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 129
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac[1] = 1.0 - MatStm3.liqPhasMolFrac
*/
void Flowsheet_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */ = 1.0 - data->localData[0]->realVars[252] /* MatStm3.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 130
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[3] = 100.0 * Mixer1.inVapPhasMolFrac[1]
*/
void Flowsheet_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  data->localData[0]->realVars[278] /* MatStm3.totMolFlo[3] variable */ = (100.0) * (data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */);
  TRACE_POP
}
/*
equation index: 131
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->localData[0]->realVars[232] /* MatStm3.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[278] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 132
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  data->localData[0]->realVars[231] /* MatStm3.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[278] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc150(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,150};
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
  data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */ = xloc[2];
  data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_126(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_127(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_128(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_129(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_130(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_131(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_132(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[231] /* MatStm3.compMolFlo[3,1] variable */ + data->localData[0]->realVars[229] /* MatStm3.compMolFlo[2,1] variable */ - data->localData[0]->realVars[227] /* MatStm3.compMolFlo[1,1] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[278] /* MatStm3.totMolFlo[3] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */ + data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */);
  }
  res[1] = tmp3;

  res[2] = data->localData[0]->realVars[232] /* MatStm3.compMolFlo[3,2] variable */ + data->localData[0]->realVars[230] /* MatStm3.compMolFlo[2,2] variable */ - data->localData[0]->realVars[228] /* MatStm3.compMolFlo[1,2] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[234] /* MatStm3.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[193] /* MatStm3.K[2] variable */),"1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[2])",equationIndexes)):data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */);
  }
  res[3] = tmp7;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[233] /* MatStm3.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[192] /* MatStm3.K[1] variable */),"1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[1])",equationIndexes)):data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */);
  }
  res[4] = tmp11;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS150(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,5,2,2,3,3};
  const int rowIndex[15] = {0,1,2,3,4,0,4,2,3,1,2,3,0,1,4};
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
void initializeStaticDataNLS150(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm3.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[277].attribute /* MatStm3.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[277].attribute /* MatStm3.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[277].attribute /* MatStm3.totMolFlo[2] */.max;
  /* static nls data for MatStm3.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[235].attribute /* MatStm3.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[235].attribute /* MatStm3.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[235].attribute /* MatStm3.compMolFrac[2,1] */.max;
  /* static nls data for MatStm3.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[236].attribute /* MatStm3.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[236].attribute /* MatStm3.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[236].attribute /* MatStm3.compMolFrac[2,2] */.max;
  /* static nls data for MatStm3.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[238].attribute /* MatStm3.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[238].attribute /* MatStm3.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[238].attribute /* MatStm3.compMolFrac[3,2] */.max;
  /* static nls data for MatStm3.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[237].attribute /* MatStm3.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[237].attribute /* MatStm3.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[237].attribute /* MatStm3.compMolFrac[3,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS150(sysData);
}

void getIterationVarsNLS150(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */;
  array[3] = data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */;
}


/* inner equations */

/*
equation index: 72
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[139] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 73
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[140] /* MatStm2.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 74
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac = 0.01 * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[162] /* MatStm2.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 75
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac[2] = 1.0 - MatStm2.liqPhasMolFrac
*/
void Flowsheet_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */ = 1.0 - data->localData[0]->realVars[162] /* MatStm2.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 76
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[3] = 100.0 * Mixer1.inVapPhasMolFrac[2]
*/
void Flowsheet_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[188] /* MatStm2.totMolFlo[3] variable */ = (100.0) * (data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */);
  TRACE_POP
}
/*
equation index: 77
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->localData[0]->realVars[141] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[188] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 78
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  data->localData[0]->realVars[142] /* MatStm2.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[188] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc96(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,96};
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
  data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */ = xloc[2];
  data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
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

  /* local constraints */
  Flowsheet_eqFunction_77(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_78(data, threadData);
  /* body */
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */ - (DIVISION_SIM(data->localData[0]->realVars[144] /* MatStm2.compMolFrac[1,2] variable */,1.0 + (data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[103] /* MatStm2.K[2] variable */),"1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[2])",equationIndexes)):data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[142] /* MatStm2.compMolFlo[3,2] variable */ + data->localData[0]->realVars[140] /* MatStm2.compMolFlo[2,2] variable */ - data->localData[0]->realVars[138] /* MatStm2.compMolFlo[1,2] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[188] /* MatStm2.totMolFlo[3] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */ + data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */ - 1.0:data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */);
  }
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[141] /* MatStm2.compMolFlo[3,1] variable */ + data->localData[0]->realVars[139] /* MatStm2.compMolFlo[2,1] variable */ - data->localData[0]->realVars[137] /* MatStm2.compMolFlo[1,1] variable */;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[143] /* MatStm2.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[102] /* MatStm2.K[1] variable */),"1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[1])",equationIndexes)):data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */);
  }
  res[4] = tmp11;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS96(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS96(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm2.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[187].attribute /* MatStm2.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[187].attribute /* MatStm2.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[187].attribute /* MatStm2.totMolFlo[2] */.max;
  /* static nls data for MatStm2.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[145].attribute /* MatStm2.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[145].attribute /* MatStm2.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[145].attribute /* MatStm2.compMolFrac[2,1] */.max;
  /* static nls data for MatStm2.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[147].attribute /* MatStm2.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[147].attribute /* MatStm2.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[147].attribute /* MatStm2.compMolFrac[3,1] */.max;
  /* static nls data for MatStm2.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[148].attribute /* MatStm2.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[148].attribute /* MatStm2.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[148].attribute /* MatStm2.compMolFrac[3,2] */.max;
  /* static nls data for MatStm2.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[146].attribute /* MatStm2.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[146].attribute /* MatStm2.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[146].attribute /* MatStm2.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS96(sysData);
}

void getIterationVarsNLS96(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */;
  array[3] = data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void Flowsheet_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[9].equationIndex = 777;
  nonLinearSystemData[9].size = 5;
  nonLinearSystemData[9].homotopySupport = 0;
  nonLinearSystemData[9].mixedSystem = 0;
  nonLinearSystemData[9].residualFunc = residualFunc777;
  nonLinearSystemData[9].strictTearingFunctionCall = NULL;
  nonLinearSystemData[9].analyticalJacobianColumn = Flowsheet_functionJacNLSJac9_column;
  nonLinearSystemData[9].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac9;
  nonLinearSystemData[9].jacobianIndex = 7 /*jacInx*/;
  nonLinearSystemData[9].initializeStaticNLSData = initializeStaticDataNLS777;
  nonLinearSystemData[9].getIterationVars = getIterationVarsNLS777;
  nonLinearSystemData[9].checkConstraints = NULL;
  
  
  nonLinearSystemData[8].equationIndex = 718;
  nonLinearSystemData[8].size = 5;
  nonLinearSystemData[8].homotopySupport = 0;
  nonLinearSystemData[8].mixedSystem = 0;
  nonLinearSystemData[8].residualFunc = residualFunc718;
  nonLinearSystemData[8].strictTearingFunctionCall = NULL;
  nonLinearSystemData[8].analyticalJacobianColumn = Flowsheet_functionJacNLSJac8_column;
  nonLinearSystemData[8].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac8;
  nonLinearSystemData[8].jacobianIndex = 6 /*jacInx*/;
  nonLinearSystemData[8].initializeStaticNLSData = initializeStaticDataNLS718;
  nonLinearSystemData[8].getIterationVars = getIterationVarsNLS718;
  nonLinearSystemData[8].checkConstraints = NULL;
  
  
  nonLinearSystemData[7].equationIndex = 612;
  nonLinearSystemData[7].size = 6;
  nonLinearSystemData[7].homotopySupport = 0;
  nonLinearSystemData[7].mixedSystem = 1;
  nonLinearSystemData[7].residualFunc = residualFunc612;
  nonLinearSystemData[7].strictTearingFunctionCall = NULL;
  nonLinearSystemData[7].analyticalJacobianColumn = NULL;
  nonLinearSystemData[7].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[7].jacobianIndex = -1;
  nonLinearSystemData[7].initializeStaticNLSData = initializeStaticDataNLS612;
  nonLinearSystemData[7].getIterationVars = getIterationVarsNLS612;
  nonLinearSystemData[7].checkConstraints = NULL;
  
  
  nonLinearSystemData[6].equationIndex = 554;
  nonLinearSystemData[6].size = 5;
  nonLinearSystemData[6].homotopySupport = 0;
  nonLinearSystemData[6].mixedSystem = 0;
  nonLinearSystemData[6].residualFunc = residualFunc554;
  nonLinearSystemData[6].strictTearingFunctionCall = NULL;
  nonLinearSystemData[6].analyticalJacobianColumn = Flowsheet_functionJacNLSJac6_column;
  nonLinearSystemData[6].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac6;
  nonLinearSystemData[6].jacobianIndex = 5 /*jacInx*/;
  nonLinearSystemData[6].initializeStaticNLSData = initializeStaticDataNLS554;
  nonLinearSystemData[6].getIterationVars = getIterationVarsNLS554;
  nonLinearSystemData[6].checkConstraints = NULL;
  
  
  nonLinearSystemData[5].equationIndex = 500;
  nonLinearSystemData[5].size = 5;
  nonLinearSystemData[5].homotopySupport = 0;
  nonLinearSystemData[5].mixedSystem = 0;
  nonLinearSystemData[5].residualFunc = residualFunc500;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = Flowsheet_functionJacNLSJac5_column;
  nonLinearSystemData[5].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac5;
  nonLinearSystemData[5].jacobianIndex = 4 /*jacInx*/;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS500;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS500;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  
  nonLinearSystemData[4].equationIndex = 360;
  nonLinearSystemData[4].size = 5;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 0;
  nonLinearSystemData[4].residualFunc = residualFunc360;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = Flowsheet_functionJacNLSJac4_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac4;
  nonLinearSystemData[4].jacobianIndex = 3 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS360;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS360;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 301;
  nonLinearSystemData[3].size = 5;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 0;
  nonLinearSystemData[3].residualFunc = residualFunc301;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = Flowsheet_functionJacNLSJac3_column;
  nonLinearSystemData[3].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac3;
  nonLinearSystemData[3].jacobianIndex = 2 /*jacInx*/;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS301;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS301;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 190;
  nonLinearSystemData[2].size = 6;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc190;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS190;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS190;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 150;
  nonLinearSystemData[1].size = 5;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 0;
  nonLinearSystemData[1].residualFunc = residualFunc150;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = Flowsheet_functionJacNLSJac1_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac1;
  nonLinearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS150;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS150;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 96;
  nonLinearSystemData[0].size = 5;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 0;
  nonLinearSystemData[0].residualFunc = residualFunc96;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = Flowsheet_functionJacNLSJac0_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac0;
  nonLinearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS96;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS96;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

