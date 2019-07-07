/* Non Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 70
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->localData[0]->realVars[22] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 71
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 0.01 * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->localData[0]->realVars[34] /* MatStm1.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 72
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac = (-MatStm1.liqPhasMolFrac) - -1.0
*/
void Flowsheet_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[61] /* MatStm1.vapPhasMolFrac variable */ = (-data->localData[0]->realVars[34] /* MatStm1.liqPhasMolFrac variable */) - (-1.0);
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
  data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */ = 100.0 - ((100.0) * (data->localData[0]->realVars[34] /* MatStm1.liqPhasMolFrac variable */));
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
  data->localData[0]->realVars[23] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */);
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
  /* iteration variables */
  for (i=0; i<3; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<3; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */ = xloc[2];
  /* backup outputs */
  /* pre body */
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
  /* body */
  res[0] = data->localData[0]->realVars[23] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[22] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[21] /* MatStm1.compMolFlo[1,1] variable */;

  tmp0 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */ - 1.0:data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */);
  }
  res[1] = tmp3;

  tmp4 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[24] /* MatStm1.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[61] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[0] /* MatStm1.K[1] variable */),"1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[1])",equationIndexes)):data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */);
  }
  res[2] = tmp7;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS86(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+3] = {0,3,2,3};
  const int rowIndex[8] = {0,1,2,0,2,0,1,2};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((3+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(8*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 8;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(3*sizeof(int));
  inSysData->sparsePattern.maxColors = 3;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (3+1)*sizeof(int));
  
  for(i=2;i<3+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 8*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[2] = 1;
  inSysData->sparsePattern.colorCols[1] = 2;
  inSysData->sparsePattern.colorCols[0] = 3;
}
void initializeStaticDataNLS86(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[58].attribute /* MatStm1.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[58].attribute /* MatStm1.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[58].attribute /* MatStm1.totMolFlo[2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[25].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[25].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[25].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[26].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[26].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[26].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS86(sysData);
}

void getIterationVarsNLS86(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */;
}


/* inner equations */

/*
equation index: 16
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[23] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 17
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 1.0 - 0.01 * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[34] /* MatStm1.liqPhasMolFrac variable */ = 1.0 - ((0.01) * (data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */));
  TRACE_POP
}
/*
equation index: 18
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac = (-MatStm1.liqPhasMolFrac) - -1.0
*/
void Flowsheet_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[61] /* MatStm1.vapPhasMolFrac variable */ = (-data->localData[0]->realVars[34] /* MatStm1.liqPhasMolFrac variable */) - (-1.0);
  TRACE_POP
}
/*
equation index: 19
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[2] = 100.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */ = (100.0) * (data->localData[0]->realVars[34] /* MatStm1.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 20
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[22] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc32(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,32};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  /* iteration variables */
  for (i=0; i<3; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<3; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */ = xloc[2];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_16(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_17(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_18(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_19(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_20(data, threadData);
  /* body */
  tmp0 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */ - 1.0:data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[23] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[22] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[21] /* MatStm1.compMolFlo[1,1] variable */;

  tmp4 = GreaterEq(101324.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101324.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */ - (DIVISION_SIM(data->localData[0]->realVars[24] /* MatStm1.compMolFrac[1,1] variable */,1.0 + (data->localData[0]->realVars[61] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[0] /* MatStm1.K[1] variable */),"1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[1])",equationIndexes)):data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */);
  }
  res[2] = tmp7;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS32(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+3] = {0,3,2,3};
  const int rowIndex[8] = {0,1,2,1,2,0,1,2};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((3+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(8*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 8;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(3*sizeof(int));
  inSysData->sparsePattern.maxColors = 3;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (3+1)*sizeof(int));
  
  for(i=2;i<3+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 8*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[2] = 1;
  inSysData->sparsePattern.colorCols[1] = 2;
  inSysData->sparsePattern.colorCols[0] = 3;
}
void initializeStaticDataNLS32(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[59].attribute /* MatStm1.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[59].attribute /* MatStm1.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[59].attribute /* MatStm1.totMolFlo[3] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[25].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[25].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[25].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[26].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[26].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[26].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS32(sysData);
}

void getIterationVarsNLS32(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void Flowsheet_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[1].equationIndex = 86;
  nonLinearSystemData[1].size = 3;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 0;
  nonLinearSystemData[1].residualFunc = residualFunc86;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = Flowsheet_functionJacNLSJac1_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac1;
  nonLinearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS86;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS86;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 32;
  nonLinearSystemData[0].size = 3;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 0;
  nonLinearSystemData[0].residualFunc = residualFunc32;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = Flowsheet_functionJacNLSJac0_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac0;
  nonLinearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS32;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS32;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

