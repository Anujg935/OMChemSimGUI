/* Jacobians 10 */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac0(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,4,2,3,4,2,3,4,0,1,2,0,1,2};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 11;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(11,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(14*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 14;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  jacobian->sparsePattern.maxColors = 5;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 14*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[4] = 1;
  jacobian->sparsePattern.colorCols[3] = 2;
  jacobian->sparsePattern.colorCols[2] = 3;
  jacobian->sparsePattern.colorCols[1] = 4;
  jacobian->sparsePattern.colorCols[0] = 5;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac1(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,2,2,3,4,2,3,4,0,1,3,0,1,3};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 11;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(11,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(14*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 14;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  jacobian->sparsePattern.maxColors = 5;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 14*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[4] = 1;
  jacobian->sparsePattern.colorCols[3] = 2;
  jacobian->sparsePattern.colorCols[2] = 3;
  jacobian->sparsePattern.colorCols[1] = 4;
  jacobian->sparsePattern.colorCols[0] = 5;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac2(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,1,0,3,4,0,3,4,1,2,3,1,2,3};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 11;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(11,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(14*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 14;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  jacobian->sparsePattern.maxColors = 5;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 14*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[4] = 1;
  jacobian->sparsePattern.colorCols[3] = 2;
  jacobian->sparsePattern.colorCols[2] = 3;
  jacobian->sparsePattern.colorCols[1] = 4;
  jacobian->sparsePattern.colorCols[0] = 5;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac3(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,1,0,3,4,1,2,3,1,2,3,0,3,4};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 11;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(11,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(14*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 14;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  jacobian->sparsePattern.maxColors = 5;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 14*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[4] = 1;
  jacobian->sparsePattern.colorCols[3] = 2;
  jacobian->sparsePattern.colorCols[2] = 3;
  jacobian->sparsePattern.colorCols[1] = 4;
  jacobian->sparsePattern.colorCols[0] = 5;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac4(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {1,2,1,3,4,0,2,3,1,3,4,0,2,3};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 11;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(11,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(14*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 14;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  jacobian->sparsePattern.maxColors = 5;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 14*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[4] = 1;
  jacobian->sparsePattern.colorCols[3] = 2;
  jacobian->sparsePattern.colorCols[2] = 3;
  jacobian->sparsePattern.colorCols[1] = 4;
  jacobian->sparsePattern.colorCols[0] = 5;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac5(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {1,2,2,3,4,2,3,4,0,1,3,0,1,3};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 11;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(11,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(14*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 14;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  jacobian->sparsePattern.maxColors = 5;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 14*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[4] = 1;
  jacobian->sparsePattern.colorCols[3] = 2;
  jacobian->sparsePattern.colorCols[2] = 3;
  jacobian->sparsePattern.colorCols[1] = 4;
  jacobian->sparsePattern.colorCols[0] = 5;
  TRACE_POP
  return 0;
}
int Flowsheet_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int Flowsheet_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int Flowsheet_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int Flowsheet_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}


/*
equation index: 71
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo.SeedNLSJac0[2] + MatStm1.compMolFrac.SeedNLSJac0[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_71(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,71};
  jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 72
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo.SeedNLSJac0[2] + MatStm1.compMolFrac.SeedNLSJac0[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_72(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,72};
  jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[2] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 73
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = 0.01 * MatStm1.totMolFlo.SeedNLSJac0[2]
*/
void Flowsheet_eqFunction_73(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,73};
  jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
MatStm1._totMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3] = (-100.0) * MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void Flowsheet_eqFunction_74(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,74};
  jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */ = (-100.0) * (jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] + MatStm1.compMolFrac.SeedNLSJac0[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_75(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,75};
  jacobian->tmpVars[4] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */) * (jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */) * (data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] + MatStm1.compMolFrac.SeedNLSJac0[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_76(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,76};
  jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */) * (jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */) * (data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac0._dummyVarNLSJac0 = MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] + MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1]
*/
void Flowsheet_eqFunction_77(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,77};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac0[3,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac0[3,1] - MatStm1.K[1] * MatStm1.compMolFrac.SeedNLSJac0[2,1] else MatStm1.compMolFrac.SeedNLSJac0[2,1]
*/
void Flowsheet_eqFunction_78(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,78};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ - ((data->localData[0]->realVars[8] /* MatStm1.K[1] variable */) * (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */)):jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp3;
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac0[2,1] + MatStm1.compMolFrac.SeedNLSJac0[2,2] else MatStm1.compMolFrac.SeedNLSJac0[3,1] + MatStm1.compMolFrac.SeedNLSJac0[3,2]
*/
void Flowsheet_eqFunction_79(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,79};
  modelica_boolean tmp4;
  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = (tmp4?jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */:jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 80
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac0[3,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac0[3,2] - MatStm1.K[2] * MatStm1.compMolFrac.SeedNLSJac0[2,2] else MatStm1.compMolFrac.SeedNLSJac0[2,2]
*/
void Flowsheet_eqFunction_80(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,80};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */;
  }
  else
  {
    tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp8 = (tmp6?jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */ - ((data->localData[0]->realVars[9] /* MatStm1.K[2] variable */) * (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */)):jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */);
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp8;
  TRACE_POP
}

/*
equation index: 81
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac0._dummyVarNLSJac0 = MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] + MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2]
*/
void Flowsheet_eqFunction_81(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,81};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[4] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac0_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac0;
  Flowsheet_eqFunction_71(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_72(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_73(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_74(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_75(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_76(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_77(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_78(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_79(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_80(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_81(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 140
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.SeedNLSJac1[3] + MatStm2.compMolFrac.SeedNLSJac1[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_140(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,140};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac1[3] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.SeedNLSJac1[3] + MatStm2.compMolFrac.SeedNLSJac1[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_141(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,141};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac1[3] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1 = (-0.02) * MatStm2.totMolFlo.SeedNLSJac1[3]
*/
void Flowsheet_eqFunction_142(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,142};
  jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-0.02) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac1[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2] = 50.0 * MatStm2.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1
*/
void Flowsheet_eqFunction_143(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,143};
  jacobian->tmpVars[3] /* MatStm2.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */ = (50.0) * (jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] + MatStm2.compMolFrac.SeedNLSJac1[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_144(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,144};
  jacobian->tmpVars[4] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->tmpVars[3] /* MatStm2.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] + MatStm2.compMolFrac.SeedNLSJac1[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_145(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,145};
  jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->tmpVars[3] /* MatStm2.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac1._dummyVarNLSJac1 = MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] + MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2]
*/
void Flowsheet_eqFunction_146(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,146};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac1[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac1[3,2] - MatStm2.K[2] * MatStm2.compMolFrac.SeedNLSJac1[2,2] else MatStm2.compMolFrac.SeedNLSJac1[2,2]
*/
void Flowsheet_eqFunction_147(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,147};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */;
  }
  else
  {
    tmp10 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp12 = (tmp10?jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */ - ((data->localData[0]->realVars[100] /* MatStm2.K[2] variable */) * (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */)):jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp12;
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac1._dummyVarNLSJac1 = MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] + MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1]
*/
void Flowsheet_eqFunction_148(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,148};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[4] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac1[2,1] + MatStm2.compMolFrac.SeedNLSJac1[2,2] else MatStm2.compMolFrac.SeedNLSJac1[3,1] + MatStm2.compMolFrac.SeedNLSJac1[3,2]
*/
void Flowsheet_eqFunction_149(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,149};
  modelica_boolean tmp13;
  tmp13 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (tmp13?jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */:jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac1[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac1[3,1] - MatStm2.K[1] * MatStm2.compMolFrac.SeedNLSJac1[2,1] else MatStm2.compMolFrac.SeedNLSJac1[2,1]
*/
void Flowsheet_eqFunction_150(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,150};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  tmp14 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp16 = (modelica_boolean)tmp14;
  if(tmp16)
  {
    tmp17 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */;
  }
  else
  {
    tmp15 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp17 = (tmp15?jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */ - ((data->localData[0]->realVars[99] /* MatStm2.K[1] variable */) * (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */)):jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp17;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac1_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac1;
  Flowsheet_eqFunction_140(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_141(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_142(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_143(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_144(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_145(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_146(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_147(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_148(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_149(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_150(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 198
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo.SeedNLSJac2[2] + MatStm3.compMolFrac.SeedNLSJac2[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_198(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,198};
  jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac2[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */) * (data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo.SeedNLSJac2[2] + MatStm3.compMolFrac.SeedNLSJac2[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_199(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,199};
  jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac2[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */) * (data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac._$pDERNLSJac2._dummyVarNLSJac2 = 0.02 * MatStm3.totMolFlo.SeedNLSJac2[2]
*/
void Flowsheet_eqFunction_200(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,200};
  jacobian->tmpVars[2] /* MatStm3.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (0.02) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac2[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
MatStm3._totMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3] = (-50.0) * MatStm3.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2
*/
void Flowsheet_eqFunction_201(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,201};
  jacobian->tmpVars[3] /* MatStm3.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] JACOBIAN_DIFF_VAR */ = (-50.0) * (jacobian->tmpVars[2] /* MatStm3.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] + MatStm3.compMolFrac.SeedNLSJac2[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_202(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,202};
  jacobian->tmpVars[4] /* MatStm3.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */) * (jacobian->tmpVars[3] /* MatStm3.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */) * (data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] + MatStm3.compMolFrac.SeedNLSJac2[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_203(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,203};
  jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */) * (jacobian->tmpVars[3] /* MatStm3.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */) * (data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac2._dummyVarNLSJac2 = MatStm3.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] + MatStm3.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1]
*/
void Flowsheet_eqFunction_204(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,204};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac2._dummyVarNLSJac2 = MatStm3.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] + MatStm3.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2]
*/
void Flowsheet_eqFunction_205(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,205};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[4] /* MatStm3.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac2._dummyVarNLSJac2 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac2[3,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac2[3,2] - MatStm3.K[2] * MatStm3.compMolFrac.SeedNLSJac2[2,2] else MatStm3.compMolFrac.SeedNLSJac2[2,2]
*/
void Flowsheet_eqFunction_206(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,206};
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  tmp18 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp20 = (modelica_boolean)tmp18;
  if(tmp20)
  {
    tmp21 = jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */;
  }
  else
  {
    tmp19 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp21 = (tmp19?jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */ - ((data->localData[0]->realVars[188] /* MatStm3.K[2] variable */) * (jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */)):jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp21;
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac2._dummyVarNLSJac2 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac2[2,1] + MatStm3.compMolFrac.SeedNLSJac2[2,2] else MatStm3.compMolFrac.SeedNLSJac2[3,1] + MatStm3.compMolFrac.SeedNLSJac2[3,2]
*/
void Flowsheet_eqFunction_207(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,207};
  modelica_boolean tmp22;
  tmp22 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (tmp22?jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */:jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac2._dummyVarNLSJac2 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac2[3,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac2[3,1] - MatStm3.K[1] * MatStm3.compMolFrac.SeedNLSJac2[2,1] else MatStm3.compMolFrac.SeedNLSJac2[2,1]
*/
void Flowsheet_eqFunction_208(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,208};
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
  tmp23 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp25 = (modelica_boolean)tmp23;
  if(tmp25)
  {
    tmp26 = jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */;
  }
  else
  {
    tmp24 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp26 = (tmp24?jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */ - ((data->localData[0]->realVars[187] /* MatStm3.K[1] variable */) * (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */)):jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp26;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac2_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac2;
  Flowsheet_eqFunction_198(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_199(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_200(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_201(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_202(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_203(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_204(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_205(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_206(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_207(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_208(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 308
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo.SeedNLSJac3[2] + MatStm1.compMolFrac.SeedNLSJac3[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_308(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,308};
  jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac3[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 309
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo.SeedNLSJac3[2] + MatStm1.compMolFrac.SeedNLSJac3[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_309(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,309};
  jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac3[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 310
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac._$pDERNLSJac3._dummyVarNLSJac3 = 0.01 * MatStm1.totMolFlo.SeedNLSJac3[2]
*/
void Flowsheet_eqFunction_310(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,310};
  jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac3[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 311
type: SIMPLE_ASSIGN
MatStm1._totMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3] = (-100.0) * MatStm1.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3
*/
void Flowsheet_eqFunction_311(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,311};
  jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_DIFF_VAR */ = (-100.0) * (jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 312
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] + MatStm1.compMolFrac.SeedNLSJac3[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_312(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,312};
  jacobian->tmpVars[4] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */) * (jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */) * (data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] + MatStm1.compMolFrac.SeedNLSJac3[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_313(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,313};
  jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */) * (jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */) * (data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 314
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac3._dummyVarNLSJac3 = MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] + MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2]
*/
void Flowsheet_eqFunction_314(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,314};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac3._dummyVarNLSJac3 = MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] + MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1]
*/
void Flowsheet_eqFunction_315(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,315};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[4] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac3[3,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac3[3,1] - MatStm1.K[1] * MatStm1.compMolFrac.SeedNLSJac3[2,1] else MatStm1.compMolFrac.SeedNLSJac3[2,1]
*/
void Flowsheet_eqFunction_316(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,316};
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_real tmp30;
  tmp27 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp29 = (modelica_boolean)tmp27;
  if(tmp29)
  {
    tmp30 = jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */;
  }
  else
  {
    tmp28 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp30 = (tmp28?jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */ - ((data->localData[0]->realVars[8] /* MatStm1.K[1] variable */) * (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */)):jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp30;
  TRACE_POP
}

/*
equation index: 317
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac3[2,1] + MatStm1.compMolFrac.SeedNLSJac3[2,2] else MatStm1.compMolFrac.SeedNLSJac3[3,1] + MatStm1.compMolFrac.SeedNLSJac3[3,2]
*/
void Flowsheet_eqFunction_317(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,317};
  modelica_boolean tmp31;
  tmp31 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = (tmp31?jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */:jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 318
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac3[3,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac3[3,2] - MatStm1.K[2] * MatStm1.compMolFrac.SeedNLSJac3[2,2] else MatStm1.compMolFrac.SeedNLSJac3[2,2]
*/
void Flowsheet_eqFunction_318(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,318};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  tmp32 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp34 = (modelica_boolean)tmp32;
  if(tmp34)
  {
    tmp35 = jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */;
  }
  else
  {
    tmp33 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp35 = (tmp33?jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */ - ((data->localData[0]->realVars[9] /* MatStm1.K[2] variable */) * (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */)):jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp35;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac3_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac3;
  Flowsheet_eqFunction_308(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_309(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_310(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_311(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_312(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_313(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_314(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_315(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_316(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_317(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_318(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 377
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.SeedNLSJac4[2] + MatStm2.compMolFrac.SeedNLSJac4[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_377(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,377};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac4[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.SeedNLSJac4[2] + MatStm2.compMolFrac.SeedNLSJac4[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_378(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,378};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac4[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4 = 0.02 * MatStm2.totMolFlo.SeedNLSJac4[2]
*/
void Flowsheet_eqFunction_379(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,379};
  jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (0.02) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac4[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3] = (-50.0) * MatStm2.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4
*/
void Flowsheet_eqFunction_380(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,380};
  jacobian->tmpVars[3] /* MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */ = (-50.0) * (jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] + MatStm2.compMolFrac.SeedNLSJac4[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_381(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,381};
  jacobian->tmpVars[4] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->tmpVars[3] /* MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] + MatStm2.compMolFrac.SeedNLSJac4[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_382(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,382};
  jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->tmpVars[3] /* MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac4[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac4[3,2] - MatStm2.K[2] * MatStm2.compMolFrac.SeedNLSJac4[2,2] else MatStm2.compMolFrac.SeedNLSJac4[2,2]
*/
void Flowsheet_eqFunction_383(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,383};
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_real tmp39;
  RELATIONHYSTERESIS(tmp36, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp38 = (modelica_boolean)tmp36;
  if(tmp38)
  {
    tmp39 = jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp37, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp39 = (tmp37?jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */ - ((data->localData[0]->realVars[100] /* MatStm2.K[2] variable */) * (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */)):jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp39;
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac4._dummyVarNLSJac4 = MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] + MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1]
*/
void Flowsheet_eqFunction_384(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,384};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac4._dummyVarNLSJac4 = MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] + MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2]
*/
void Flowsheet_eqFunction_385(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,385};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[4] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac4[2,1] + MatStm2.compMolFrac.SeedNLSJac4[2,2] else MatStm2.compMolFrac.SeedNLSJac4[3,1] + MatStm2.compMolFrac.SeedNLSJac4[3,2]
*/
void Flowsheet_eqFunction_386(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,386};
  modelica_boolean tmp40;
  RELATIONHYSTERESIS(tmp40, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (tmp40?jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */:jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac4[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac4[3,1] - MatStm2.K[1] * MatStm2.compMolFrac.SeedNLSJac4[2,1] else MatStm2.compMolFrac.SeedNLSJac4[2,1]
*/
void Flowsheet_eqFunction_387(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,387};
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  modelica_real tmp44;
  RELATIONHYSTERESIS(tmp41, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp43 = (modelica_boolean)tmp41;
  if(tmp43)
  {
    tmp44 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp42, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp44 = (tmp42?jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */ - ((data->localData[0]->realVars[99] /* MatStm2.K[1] variable */) * (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */)):jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp44;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac4_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac4;
  Flowsheet_eqFunction_377(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_378(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_379(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_380(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_381(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_382(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_383(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_384(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_385(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_386(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_387(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 435
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo.SeedNLSJac5[3] + MatStm3.compMolFrac.SeedNLSJac5[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_435(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,435};
  jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac5[3] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */) * (data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo.SeedNLSJac5[3] + MatStm3.compMolFrac.SeedNLSJac5[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_436(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,436};
  jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac5[3] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */) * (data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac._$pDERNLSJac5._dummyVarNLSJac5 = (-0.02) * MatStm3.totMolFlo.SeedNLSJac5[3]
*/
void Flowsheet_eqFunction_437(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,437};
  jacobian->tmpVars[2] /* MatStm3.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (-0.02) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac5[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
MatStm3._totMolFlo._$pDERNLSJac5._dummyVarNLSJac5[2] = 50.0 * MatStm3.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5
*/
void Flowsheet_eqFunction_438(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,438};
  jacobian->tmpVars[3] /* MatStm3.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */ = (50.0) * (jacobian->tmpVars[2] /* MatStm3.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2] + MatStm3.compMolFrac.SeedNLSJac5[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_439(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,439};
  jacobian->tmpVars[4] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */) * (jacobian->tmpVars[3] /* MatStm3.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */) * (data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2] + MatStm3.compMolFrac.SeedNLSJac5[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_440(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,440};
  jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */) * (jacobian->tmpVars[3] /* MatStm3.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */) * (data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac5[3,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac5[3,2] - MatStm3.K[2] * MatStm3.compMolFrac.SeedNLSJac5[2,2] else MatStm3.compMolFrac.SeedNLSJac5[2,2]
*/
void Flowsheet_eqFunction_441(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,441};
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_real tmp48;
  RELATIONHYSTERESIS(tmp45, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp47 = (modelica_boolean)tmp45;
  if(tmp47)
  {
    tmp48 = jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp46, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp48 = (tmp46?jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */ - ((data->localData[0]->realVars[188] /* MatStm3.K[2] variable */) * (jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */)):jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp48;
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac5._dummyVarNLSJac5 = MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] + MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2]
*/
void Flowsheet_eqFunction_442(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,442};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac5._dummyVarNLSJac5 = MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] + MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1]
*/
void Flowsheet_eqFunction_443(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,443};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[4] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac5[2,1] + MatStm3.compMolFrac.SeedNLSJac5[2,2] else MatStm3.compMolFrac.SeedNLSJac5[3,1] + MatStm3.compMolFrac.SeedNLSJac5[3,2]
*/
void Flowsheet_eqFunction_444(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,444};
  modelica_boolean tmp49;
  RELATIONHYSTERESIS(tmp49, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (tmp49?jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */:jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac5[3,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac5[3,1] - MatStm3.K[1] * MatStm3.compMolFrac.SeedNLSJac5[2,1] else MatStm3.compMolFrac.SeedNLSJac5[2,1]
*/
void Flowsheet_eqFunction_445(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,445};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_real tmp53;
  RELATIONHYSTERESIS(tmp50, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp52 = (modelica_boolean)tmp50;
  if(tmp52)
  {
    tmp53 = jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp51, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp53 = (tmp51?jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */ - ((data->localData[0]->realVars[187] /* MatStm3.K[1] variable */) * (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */)):jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp53;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac5_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac5;
  Flowsheet_eqFunction_435(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_436(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_437(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_438(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_439(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_440(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_441(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_442(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_443(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_444(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_445(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}
int Flowsheet_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Flowsheet_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Flowsheet_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Flowsheet_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}


