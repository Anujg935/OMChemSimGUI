/* Jacobians 12 */
#include "flash1_model.h"
#include "flash1_12jac.h"
OMC_DISABLE_OPT
int flash1_initialAnalyticJacobianNLSJac0(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,1,1,3,4,1,3,4,0,2,3,0,2,3};
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
int flash1_initialAnalyticJacobianNLSJac1(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,4,2,3,4,2,3,4,0,1,2,0,1,2};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 7;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(7,sizeof(modelica_real));
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
int flash1_initialAnalyticJacobianNLSJac2(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,1,0,3,4,1,2,3,1,2,3,0,3,4};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 10;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(10,sizeof(modelica_real));
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
int flash1_initialAnalyticJacobianNLSJac3(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,4,2,3,4,2,3,4,0,1,2,0,1,2};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 10;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(10,sizeof(modelica_real));
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
int flash1_initialAnalyticJacobianNLSJac4(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int flash1_initialAnalyticJacobianNLSJac5(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,1,0,3,4,1,2,3,1,2,3,0,3,4};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 7;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(7,sizeof(modelica_real));
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
int flash1_initialAnalyticJacobianNLSJac6(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {2,3,1,3,4,0,1,2,1,3,4,0,1,2};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 10;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(10,sizeof(modelica_real));
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
int flash1_initialAnalyticJacobianNLSJac7(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {2,3,1,3,4,0,1,2,1,3,4,0,1,2};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 10;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(10,sizeof(modelica_real));
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
int flash1_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int flash1_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int flash1_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int flash1_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}


/*
equation index: 84
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo.SeedNLSJac0[2] + MatStm1.compMolFrac.SeedNLSJac0[2,2] * MatStm1.totMolFlo[2]
*/
void flash1_eqFunction_84(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,84};
  jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */) * (data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo.SeedNLSJac0[2] + MatStm1.compMolFrac.SeedNLSJac0[2,1] * MatStm1.totMolFlo[2]
*/
void flash1_eqFunction_85(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,85};
  jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[2] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */) * (data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 86
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = 0.005 * MatStm1.totMolFlo.SeedNLSJac0[2]
*/
void flash1_eqFunction_86(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,86};
  jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (0.005) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 87
type: SIMPLE_ASSIGN
MatStm1._totMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3] = (-200.0) * MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void flash1_eqFunction_87(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,87};
  jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */ = (-200.0) * (jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 88
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] + MatStm1.compMolFrac.SeedNLSJac0[3,1] * MatStm1.totMolFlo[3]
*/
void flash1_eqFunction_88(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,88};
  jacobian->tmpVars[4] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */) * (jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */) * (data->localData[0]->realVars[150] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] + MatStm1.compMolFrac.SeedNLSJac0[3,2] * MatStm1.totMolFlo[3]
*/
void flash1_eqFunction_89(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,89};
  jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */) * (jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */) * (data->localData[0]->realVars[150] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac0._dummyVarNLSJac0 = MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] + MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1]
*/
void flash1_eqFunction_90(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,90};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[4] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 91
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac0._dummyVarNLSJac0 = MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] + MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2]
*/
void flash1_eqFunction_91(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,91};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 92
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac0[3,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac0[3,1] - MatStm1.K[1] * MatStm1.compMolFrac.SeedNLSJac0[2,1] else MatStm1.compMolFrac.SeedNLSJac0[2,1]
*/
void flash1_eqFunction_92(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,92};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ - ((data->localData[0]->realVars[64] /* MatStm1.K[1] variable */) * (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */)):jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp3;
  TRACE_POP
}

/*
equation index: 93
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac0[2,1] + MatStm1.compMolFrac.SeedNLSJac0[2,2] else MatStm1.compMolFrac.SeedNLSJac0[3,1] + MatStm1.compMolFrac.SeedNLSJac0[3,2]
*/
void flash1_eqFunction_93(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,93};
  modelica_boolean tmp4;
  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = (tmp4?jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */:jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 94
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac0[3,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac0[3,2] - MatStm1.K[2] * MatStm1.compMolFrac.SeedNLSJac0[2,2] else MatStm1.compMolFrac.SeedNLSJac0[2,2]
*/
void flash1_eqFunction_94(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,94};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */;
  }
  else
  {
    tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp8 = (tmp6?jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */ - ((data->localData[0]->realVars[65] /* MatStm1.K[2] variable */) * (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */)):jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp8;
  TRACE_POP
}
int flash1_functionJacNLSJac0_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = flash1_INDEX_JAC_NLSJac0;
  flash1_eqFunction_84(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_85(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_86(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_87(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_88(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_89(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_90(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_91(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_92(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_93(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_94(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 139
type: SIMPLE_ASSIGN
Flash1._liqPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1 = (-0.005) * Flash1.totMolFlo.SeedNLSJac1[3]
*/
void flash1_eqFunction_139(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,139};
  jacobian->tmpVars[0] /* Flash1.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-0.005) * (jacobian->seedVars[0] /* Flash1.totMolFlo.SeedNLSJac1[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
Flash1._totMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2] = 200.0 * Flash1.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1
*/
void flash1_eqFunction_140(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,140};
  jacobian->tmpVars[1] /* Flash1.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */ = (200.0) * (jacobian->tmpVars[0] /* Flash1.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac1._dummyVarNLSJac1 = MatStm5.compMolFrac[1,1] * Flash1.totMolFlo.SeedNLSJac1[3] + MatStm5.compMolFrac.SeedNLSJac1[1,1] * Flash1.totMolFlo[3] + MatStm2.compMolFrac[1,1] * Flash1.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] + MatStm2.compMolFrac.SeedNLSJac1[1,1] * Flash1.totMolFlo[2]
*/
void flash1_eqFunction_141(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,141};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */) * (jacobian->seedVars[0] /* Flash1.totMolFlo.SeedNLSJac1[3] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac1[1,1] SEED_VAR */) * (data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */) + (data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */) * (jacobian->tmpVars[1] /* Flash1.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac1[1,1] SEED_VAR */) * (data->localData[0]->realVars[59] /* Flash1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= Flash1.Pbubl then MatStm5.compMolFrac.SeedNLSJac1[1,1] else if 101325.0 >= Flash1.Pdew then MatStm5.compMolFrac.SeedNLSJac1[1,1] - Flash1.K[1] * MatStm2.compMolFrac.SeedNLSJac1[1,1] else MatStm2.compMolFrac.SeedNLSJac1[1,1]
*/
void flash1_eqFunction_142(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,142};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[10] /* Flash1.Pbubl variable */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac1[1,1] SEED_VAR */;
  }
  else
  {
    tmp10 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* Flash1.Pdew variable */);
    tmp12 = (tmp10?jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac1[1,1] SEED_VAR */ - ((data->localData[0]->realVars[8] /* Flash1.K[1] variable */) * (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac1[1,1] SEED_VAR */)):jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac1[1,1] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp12;
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= Flash1.Pbubl then MatStm2.compMolFrac.SeedNLSJac1[1,1] + MatStm2.compMolFrac.SeedNLSJac1[1,2] else if 101325.0 >= Flash1.Pdew then MatStm2.compMolFrac.SeedNLSJac1[1,1] + MatStm2.compMolFrac.SeedNLSJac1[1,2] else MatStm5.compMolFrac.SeedNLSJac1[1,1] + MatStm5.compMolFrac.SeedNLSJac1[1,2]
*/
void flash1_eqFunction_143(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,143};
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  tmp13 = GreaterEq(101325.0,data->localData[0]->realVars[10] /* Flash1.Pbubl variable */);
  tmp15 = (modelica_boolean)tmp13;
  if(tmp15)
  {
    tmp16 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac1[1,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac1[1,2] SEED_VAR */;
  }
  else
  {
    tmp14 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* Flash1.Pdew variable */);
    tmp16 = (tmp14?jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac1[1,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac1[1,2] SEED_VAR */:jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac1[1,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac1[1,2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp16;
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= Flash1.Pbubl then MatStm5.compMolFrac.SeedNLSJac1[1,2] else if 101325.0 >= Flash1.Pdew then MatStm5.compMolFrac.SeedNLSJac1[1,2] - Flash1.K[2] * MatStm2.compMolFrac.SeedNLSJac1[1,2] else MatStm2.compMolFrac.SeedNLSJac1[1,2]
*/
void flash1_eqFunction_144(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,144};
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_real tmp20;
  tmp17 = GreaterEq(101325.0,data->localData[0]->realVars[10] /* Flash1.Pbubl variable */);
  tmp19 = (modelica_boolean)tmp17;
  if(tmp19)
  {
    tmp20 = jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac1[1,2] SEED_VAR */;
  }
  else
  {
    tmp18 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* Flash1.Pdew variable */);
    tmp20 = (tmp18?jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac1[1,2] SEED_VAR */ - ((data->localData[0]->realVars[9] /* Flash1.K[2] variable */) * (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac1[1,2] SEED_VAR */)):jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac1[1,2] SEED_VAR */);
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp20;
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac1._dummyVarNLSJac1 = MatStm5.compMolFrac[1,2] * Flash1.totMolFlo.SeedNLSJac1[3] + MatStm5.compMolFrac.SeedNLSJac1[1,2] * Flash1.totMolFlo[3] + MatStm2.compMolFrac[1,2] * Flash1.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] + MatStm2.compMolFrac.SeedNLSJac1[1,2] * Flash1.totMolFlo[2]
*/
void flash1_eqFunction_145(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,145};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */) * (jacobian->seedVars[0] /* Flash1.totMolFlo.SeedNLSJac1[3] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac1[1,2] SEED_VAR */) * (data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */) + (data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */) * (jacobian->tmpVars[1] /* Flash1.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac1[1,2] SEED_VAR */) * (data->localData[0]->realVars[59] /* Flash1.totMolFlo[2] variable */);
  TRACE_POP
}
int flash1_functionJacNLSJac1_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = flash1_INDEX_JAC_NLSJac1;
  flash1_eqFunction_139(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_140(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_141(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_142(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_143(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_144(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_145(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 183
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac2._dummyVarNLSJac2 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac2[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac2[3,1] - MatStm2.K[1] * MatStm2.compMolFrac.SeedNLSJac2[2,1] else MatStm2.compMolFrac.SeedNLSJac2[2,1]
*/
void flash1_eqFunction_183(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,183};
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  tmp21 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  tmp23 = (modelica_boolean)tmp21;
  if(tmp23)
  {
    tmp24 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */;
  }
  else
  {
    tmp22 = GreaterEq(101325.0,data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
    tmp24 = (tmp22?jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */ - ((data->localData[0]->realVars[155] /* MatStm2.K[1] variable */) * (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */)):jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp24;
  TRACE_POP
}

/*
equation index: 184
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac2._dummyVarNLSJac2 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac2[2,1] + MatStm2.compMolFrac.SeedNLSJac2[2,2] else MatStm2.compMolFrac.SeedNLSJac2[3,1] + MatStm2.compMolFrac.SeedNLSJac2[3,2]
*/
void flash1_eqFunction_184(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,184};
  modelica_boolean tmp25;
  tmp25 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (tmp25?jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */:jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 185
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac2._dummyVarNLSJac2 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac2[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac2[3,2] - MatStm2.K[2] * MatStm2.compMolFrac.SeedNLSJac2[2,2] else MatStm2.compMolFrac.SeedNLSJac2[2,2]
*/
void flash1_eqFunction_185(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,185};
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  tmp26 = GreaterEq(101325.0,data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */);
  tmp28 = (modelica_boolean)tmp26;
  if(tmp28)
  {
    tmp29 = jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */;
  }
  else
  {
    tmp27 = GreaterEq(101325.0,data->localData[0]->realVars[161] /* MatStm2.Pdew variable */);
    tmp29 = (tmp27?jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */ - ((data->localData[0]->realVars[156] /* MatStm2.K[2] variable */) * (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */)):jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp29;
  TRACE_POP
}

/*
equation index: 186
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2,1] = MatStm2.compMolFrac.SeedNLSJac2[2,1] * MatStm2.totMolFlo[2] - MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.SeedNLSJac2[3]
*/
void flash1_eqFunction_186(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,186};
  jacobian->tmpVars[4] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1] JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */) * (data->localData[0]->realVars[237] /* MatStm2.totMolFlo[2] variable */) - ((data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac2[3] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 187
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.SeedNLSJac2[3] + MatStm2.compMolFrac.SeedNLSJac2[3,1] * MatStm2.totMolFlo[3]
*/
void flash1_eqFunction_187(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,187};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac2[3] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 188
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac2._dummyVarNLSJac2 = MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] + MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1]
*/
void flash1_eqFunction_188(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,188};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[4] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 189
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2,2] = (-MatStm2.compMolFrac[3,2]) * MatStm2.totMolFlo.SeedNLSJac2[3] - MatStm2.compMolFrac.SeedNLSJac2[3,2] * MatStm2.totMolFlo[3]
*/
void flash1_eqFunction_189(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,189};
  jacobian->tmpVars[2] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2] JACOBIAN_DIFF_VAR */ = ((-data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */)) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac2[3] SEED_VAR */) - ((jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[3] variable */));
  TRACE_POP
}

/*
equation index: 190
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac2._dummyVarNLSJac2 = MatStm2.compMolFrac.SeedNLSJac2[2,2] * MatStm2.totMolFlo[2] + (-MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2]) - MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.SeedNLSJac2[3]
*/
void flash1_eqFunction_190(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,190};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */) * (data->localData[0]->realVars[237] /* MatStm2.totMolFlo[2] variable */) + (-jacobian->tmpVars[2] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac2[3] SEED_VAR */));
  TRACE_POP
}
int flash1_functionJacNLSJac2_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = flash1_INDEX_JAC_NLSJac2;
  flash1_eqFunction_183(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_184(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_185(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_186(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_187(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_188(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_189(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_190(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 236
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac3[3,2] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac3[3,2] - MatStm5.K[2] * MatStm5.compMolFrac.SeedNLSJac3[2,2] else MatStm5.compMolFrac.SeedNLSJac3[2,2]
*/
void flash1_eqFunction_236(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,236};
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  tmp30 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  tmp32 = (modelica_boolean)tmp30;
  if(tmp32)
  {
    tmp33 = jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */;
  }
  else
  {
    tmp31 = GreaterEq(101325.0,data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    tmp33 = (tmp31?jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */ - ((data->localData[0]->realVars[244] /* MatStm5.K[2] variable */) * (jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */)):jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */);
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp33;
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac3[2,1] + MatStm5.compMolFrac.SeedNLSJac3[2,2] else MatStm5.compMolFrac.SeedNLSJac3[3,1] + MatStm5.compMolFrac.SeedNLSJac3[3,2]
*/
void flash1_eqFunction_237(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,237};
  modelica_boolean tmp34;
  tmp34 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = (tmp34?jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */:jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac3[3,1] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac3[3,1] - MatStm5.K[1] * MatStm5.compMolFrac.SeedNLSJac3[2,1] else MatStm5.compMolFrac.SeedNLSJac3[2,1]
*/
void flash1_eqFunction_238(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,238};
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_real tmp38;
  tmp35 = GreaterEq(101325.0,data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */);
  tmp37 = (modelica_boolean)tmp35;
  if(tmp37)
  {
    tmp38 = jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */;
  }
  else
  {
    tmp36 = GreaterEq(101325.0,data->localData[0]->realVars[249] /* MatStm5.Pdew variable */);
    tmp38 = (tmp36?jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */ - ((data->localData[0]->realVars[243] /* MatStm5.K[1] variable */) * (jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */)):jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp38;
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,1] = MatStm5.compMolFrac.SeedNLSJac3[2,1] * MatStm5.totMolFlo[2] - MatStm5.compMolFrac[2,1] * MatStm5.totMolFlo.SeedNLSJac3[3]
*/
void flash1_eqFunction_239(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,239};
  jacobian->tmpVars[4] /* MatStm5.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */) * (data->localData[0]->realVars[325] /* MatStm5.totMolFlo[2] variable */) - ((data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac3[3] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,2] = (-MatStm5.compMolFrac[3,2]) * MatStm5.totMolFlo.SeedNLSJac3[3] - MatStm5.compMolFrac.SeedNLSJac3[3,2] * MatStm5.totMolFlo[3]
*/
void flash1_eqFunction_240(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,240};
  jacobian->tmpVars[2] /* MatStm5.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */ = ((-data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */)) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac3[3] SEED_VAR */) - ((jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */) * (data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */));
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac3._dummyVarNLSJac3 = MatStm5.compMolFrac.SeedNLSJac3[2,2] * MatStm5.totMolFlo[2] + (-MatStm5.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2]) - MatStm5.compMolFrac[2,2] * MatStm5.totMolFlo.SeedNLSJac3[3]
*/
void flash1_eqFunction_241(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,241};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = (jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */) * (data->localData[0]->realVars[325] /* MatStm5.totMolFlo[2] variable */) + (-jacobian->tmpVars[2] /* MatStm5.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */) - ((data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac3[3] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,1] = MatStm5.compMolFrac[3,1] * MatStm5.totMolFlo.SeedNLSJac3[3] + MatStm5.compMolFrac.SeedNLSJac3[3,1] * MatStm5.totMolFlo[3]
*/
void flash1_eqFunction_242(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,242};
  jacobian->tmpVars[0] /* MatStm5.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac3[3] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */) * (data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac3._dummyVarNLSJac3 = MatStm5.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] + MatStm5.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1]
*/
void flash1_eqFunction_243(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,243};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm5.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[4] /* MatStm5.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int flash1_functionJacNLSJac3_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = flash1_INDEX_JAC_NLSJac3;
  flash1_eqFunction_236(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_237(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_238(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_239(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_240(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_241(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_242(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_243(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 357
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo.SeedNLSJac4[2] + MatStm1.compMolFrac.SeedNLSJac4[2,1] * MatStm1.totMolFlo[2]
*/
void flash1_eqFunction_357(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,357};
  jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac4[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */) * (data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo.SeedNLSJac4[2] + MatStm1.compMolFrac.SeedNLSJac4[2,2] * MatStm1.totMolFlo[2]
*/
void flash1_eqFunction_358(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,358};
  jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac4[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */) * (data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4 = 0.005 * MatStm1.totMolFlo.SeedNLSJac4[2]
*/
void flash1_eqFunction_359(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,359};
  jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (0.005) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac4[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
MatStm1._totMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3] = (-200.0) * MatStm1.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4
*/
void flash1_eqFunction_360(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,360};
  jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */ = (-200.0) * (jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] + MatStm1.compMolFrac.SeedNLSJac4[3,1] * MatStm1.totMolFlo[3]
*/
void flash1_eqFunction_361(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,361};
  jacobian->tmpVars[4] /* MatStm1.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */) * (jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */) * (data->localData[0]->realVars[150] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] + MatStm1.compMolFrac.SeedNLSJac4[3,2] * MatStm1.totMolFlo[3]
*/
void flash1_eqFunction_362(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,362};
  jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */) * (jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */) * (data->localData[0]->realVars[150] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac4._dummyVarNLSJac4 = MatStm1.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] + MatStm1.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2]
*/
void flash1_eqFunction_363(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,363};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac4._dummyVarNLSJac4 = MatStm1.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] + MatStm1.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1]
*/
void flash1_eqFunction_364(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,364};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[4] /* MatStm1.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 365
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac4[3,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac4[3,1] - MatStm1.K[1] * MatStm1.compMolFrac.SeedNLSJac4[2,1] else MatStm1.compMolFrac.SeedNLSJac4[2,1]
*/
void flash1_eqFunction_365(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,365};
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_real tmp42;
  tmp39 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp41 = (modelica_boolean)tmp39;
  if(tmp41)
  {
    tmp42 = jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */;
  }
  else
  {
    tmp40 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp42 = (tmp40?jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */ - ((data->localData[0]->realVars[64] /* MatStm1.K[1] variable */) * (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */)):jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp42;
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac4[2,1] + MatStm1.compMolFrac.SeedNLSJac4[2,2] else MatStm1.compMolFrac.SeedNLSJac4[3,1] + MatStm1.compMolFrac.SeedNLSJac4[3,2]
*/
void flash1_eqFunction_366(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,366};
  modelica_boolean tmp43;
  tmp43 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (tmp43?jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */:jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac4[3,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac4[3,2] - MatStm1.K[2] * MatStm1.compMolFrac.SeedNLSJac4[2,2] else MatStm1.compMolFrac.SeedNLSJac4[2,2]
*/
void flash1_eqFunction_367(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,367};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_real tmp47;
  tmp44 = GreaterEq(101325.0,data->localData[0]->realVars[70] /* MatStm1.Pbubl variable */);
  tmp46 = (modelica_boolean)tmp44;
  if(tmp46)
  {
    tmp47 = jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */;
  }
  else
  {
    tmp45 = GreaterEq(101325.0,data->localData[0]->realVars[71] /* MatStm1.Pdew variable */);
    tmp47 = (tmp45?jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */ - ((data->localData[0]->realVars[65] /* MatStm1.K[2] variable */) * (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */)):jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp47;
  TRACE_POP
}
int flash1_functionJacNLSJac4_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = flash1_INDEX_JAC_NLSJac4;
  flash1_eqFunction_357(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_358(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_359(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_360(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_361(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_362(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_363(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_364(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_365(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_366(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_367(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 406
type: SIMPLE_ASSIGN
Flash1._liqPhasMolFrac._$pDERNLSJac5._dummyVarNLSJac5 = (-0.005) * Flash1.totMolFlo.SeedNLSJac5[3]
*/
void flash1_eqFunction_406(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,406};
  jacobian->tmpVars[0] /* Flash1.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (-0.005) * (jacobian->seedVars[0] /* Flash1.totMolFlo.SeedNLSJac5[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
Flash1._totMolFlo._$pDERNLSJac5._dummyVarNLSJac5[2] = 200.0 * Flash1.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5
*/
void flash1_eqFunction_407(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,407};
  jacobian->tmpVars[1] /* Flash1.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */ = (200.0) * (jacobian->tmpVars[0] /* Flash1.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac5._dummyVarNLSJac5 = MatStm5.compMolFrac[1,2] * Flash1.totMolFlo.SeedNLSJac5[3] + MatStm5.compMolFrac.SeedNLSJac5[1,2] * Flash1.totMolFlo[3] + MatStm2.compMolFrac[1,2] * Flash1.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2] + MatStm2.compMolFrac.SeedNLSJac5[1,2] * Flash1.totMolFlo[2]
*/
void flash1_eqFunction_408(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,408};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */) * (jacobian->seedVars[0] /* Flash1.totMolFlo.SeedNLSJac5[3] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac5[1,2] SEED_VAR */) * (data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */) + (data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */) * (jacobian->tmpVars[1] /* Flash1.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac5[1,2] SEED_VAR */) * (data->localData[0]->realVars[59] /* Flash1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac5._dummyVarNLSJac5 = MatStm5.compMolFrac[1,1] * Flash1.totMolFlo.SeedNLSJac5[3] + MatStm5.compMolFrac.SeedNLSJac5[1,1] * Flash1.totMolFlo[3] + MatStm2.compMolFrac[1,1] * Flash1.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2] + MatStm2.compMolFrac.SeedNLSJac5[1,1] * Flash1.totMolFlo[2]
*/
void flash1_eqFunction_409(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,409};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */) * (jacobian->seedVars[0] /* Flash1.totMolFlo.SeedNLSJac5[3] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac5[1,1] SEED_VAR */) * (data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */) + (data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */) * (jacobian->tmpVars[1] /* Flash1.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac5[1,1] SEED_VAR */) * (data->localData[0]->realVars[59] /* Flash1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= Flash1.Pbubl then MatStm5.compMolFrac.SeedNLSJac5[1,1] else if 101325.0 >= Flash1.Pdew then MatStm5.compMolFrac.SeedNLSJac5[1,1] - Flash1.K[1] * MatStm2.compMolFrac.SeedNLSJac5[1,1] else MatStm2.compMolFrac.SeedNLSJac5[1,1]
*/
void flash1_eqFunction_410(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,410};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_real tmp51;
  tmp48 = GreaterEq(101325.0,data->localData[0]->realVars[10] /* Flash1.Pbubl variable */);
  tmp50 = (modelica_boolean)tmp48;
  if(tmp50)
  {
    tmp51 = jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac5[1,1] SEED_VAR */;
  }
  else
  {
    tmp49 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* Flash1.Pdew variable */);
    tmp51 = (tmp49?jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac5[1,1] SEED_VAR */ - ((data->localData[0]->realVars[8] /* Flash1.K[1] variable */) * (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac5[1,1] SEED_VAR */)):jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac5[1,1] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp51;
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= Flash1.Pbubl then MatStm2.compMolFrac.SeedNLSJac5[1,1] + MatStm2.compMolFrac.SeedNLSJac5[1,2] else if 101325.0 >= Flash1.Pdew then MatStm2.compMolFrac.SeedNLSJac5[1,1] + MatStm2.compMolFrac.SeedNLSJac5[1,2] else MatStm5.compMolFrac.SeedNLSJac5[1,1] + MatStm5.compMolFrac.SeedNLSJac5[1,2]
*/
void flash1_eqFunction_411(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,411};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_real tmp55;
  tmp52 = GreaterEq(101325.0,data->localData[0]->realVars[10] /* Flash1.Pbubl variable */);
  tmp54 = (modelica_boolean)tmp52;
  if(tmp54)
  {
    tmp55 = jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac5[1,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac5[1,2] SEED_VAR */;
  }
  else
  {
    tmp53 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* Flash1.Pdew variable */);
    tmp55 = (tmp53?jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac5[1,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac5[1,2] SEED_VAR */:jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac5[1,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac5[1,2] SEED_VAR */);
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp55;
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= Flash1.Pbubl then MatStm5.compMolFrac.SeedNLSJac5[1,2] else if 101325.0 >= Flash1.Pdew then MatStm5.compMolFrac.SeedNLSJac5[1,2] - Flash1.K[2] * MatStm2.compMolFrac.SeedNLSJac5[1,2] else MatStm2.compMolFrac.SeedNLSJac5[1,2]
*/
void flash1_eqFunction_412(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,412};
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  modelica_real tmp59;
  tmp56 = GreaterEq(101325.0,data->localData[0]->realVars[10] /* Flash1.Pbubl variable */);
  tmp58 = (modelica_boolean)tmp56;
  if(tmp58)
  {
    tmp59 = jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac5[1,2] SEED_VAR */;
  }
  else
  {
    tmp57 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* Flash1.Pdew variable */);
    tmp59 = (tmp57?jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac5[1,2] SEED_VAR */ - ((data->localData[0]->realVars[9] /* Flash1.K[2] variable */) * (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac5[1,2] SEED_VAR */)):jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac5[1,2] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp59;
  TRACE_POP
}
int flash1_functionJacNLSJac5_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = flash1_INDEX_JAC_NLSJac5;
  flash1_eqFunction_406(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_407(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_408(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_409(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_410(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_411(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_412(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 436
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac6._dummyVarNLSJac6 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac6[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac6[3,1] - MatStm2.K[1] * MatStm2.compMolFrac.SeedNLSJac6[2,1] else MatStm2.compMolFrac.SeedNLSJac6[2,1]
*/
void flash1_eqFunction_436(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,436};
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  modelica_real tmp63;
  RELATIONHYSTERESIS(tmp60, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  tmp62 = (modelica_boolean)tmp60;
  if(tmp62)
  {
    tmp63 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac6[3,1] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp61, 101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, 3, GreaterEq);
    tmp63 = (tmp61?jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac6[3,1] SEED_VAR */ - ((data->localData[0]->realVars[155] /* MatStm2.K[1] variable */) * (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac6[2,1] SEED_VAR */)):jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac6[2,1] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = tmp63;
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac6._dummyVarNLSJac6 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac6[2,1] + MatStm2.compMolFrac.SeedNLSJac6[2,2] else MatStm2.compMolFrac.SeedNLSJac6[3,1] + MatStm2.compMolFrac.SeedNLSJac6[3,2]
*/
void flash1_eqFunction_437(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,437};
  modelica_boolean tmp64;
  RELATIONHYSTERESIS(tmp64, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  jacobian->resultVars[1] /* $res2.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = (tmp64?jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac6[2,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac6[2,2] SEED_VAR */:jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac6[3,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac6[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac6._dummyVarNLSJac6 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac6[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac6[3,2] - MatStm2.K[2] * MatStm2.compMolFrac.SeedNLSJac6[2,2] else MatStm2.compMolFrac.SeedNLSJac6[2,2]
*/
void flash1_eqFunction_438(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,438};
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  modelica_real tmp68;
  RELATIONHYSTERESIS(tmp65, 101325.0, data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */, 2, GreaterEq);
  tmp67 = (modelica_boolean)tmp65;
  if(tmp67)
  {
    tmp68 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac6[3,2] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp66, 101325.0, data->localData[0]->realVars[161] /* MatStm2.Pdew variable */, 3, GreaterEq);
    tmp68 = (tmp66?jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac6[3,2] SEED_VAR */ - ((data->localData[0]->realVars[156] /* MatStm2.K[2] variable */) * (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac6[2,2] SEED_VAR */)):jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac6[2,2] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = tmp68;
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[3,2] = MatStm2.compMolFrac.SeedNLSJac6[3,2] * MatStm2.totMolFlo[3] - MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.SeedNLSJac6[2]
*/
void flash1_eqFunction_439(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,439};
  jacobian->tmpVars[4] /* MatStm2.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,2] JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac6[3,2] SEED_VAR */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[3] variable */) - ((data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac6[2] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[3,1] = MatStm2.compMolFrac.SeedNLSJac6[3,1] * MatStm2.totMolFlo[3] - MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.SeedNLSJac6[2]
*/
void flash1_eqFunction_440(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,440};
  jacobian->tmpVars[3] /* MatStm2.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,1] JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac6[3,1] SEED_VAR */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[3] variable */) - ((data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac6[2] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.SeedNLSJac6[2] + MatStm2.compMolFrac.SeedNLSJac6[2,2] * MatStm2.totMolFlo[2]
*/
void flash1_eqFunction_441(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,441};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac6[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac6[2,2] SEED_VAR */) * (data->localData[0]->realVars[237] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac6._dummyVarNLSJac6 = MatStm2.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,2] + MatStm2.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,2]
*/
void flash1_eqFunction_442(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,442};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = jacobian->tmpVars[4] /* MatStm2.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.SeedNLSJac6[2] + MatStm2.compMolFrac.SeedNLSJac6[2,1] * MatStm2.totMolFlo[2]
*/
void flash1_eqFunction_443(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,443};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac6[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac6[2,1] SEED_VAR */) * (data->localData[0]->realVars[237] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac6._dummyVarNLSJac6 = MatStm2.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,1] + MatStm2.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,1]
*/
void flash1_eqFunction_444(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,444};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = jacobian->tmpVars[3] /* MatStm2.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int flash1_functionJacNLSJac6_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = flash1_INDEX_JAC_NLSJac6;
  flash1_eqFunction_436(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_437(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_438(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_439(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_440(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_441(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_442(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_443(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_444(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 505
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac7._dummyVarNLSJac7 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac7[3,1] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac7[3,1] - MatStm5.K[1] * MatStm5.compMolFrac.SeedNLSJac7[2,1] else MatStm5.compMolFrac.SeedNLSJac7[2,1]
*/
void flash1_eqFunction_505(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,505};
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  modelica_real tmp72;
  RELATIONHYSTERESIS(tmp69, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp71 = (modelica_boolean)tmp69;
  if(tmp71)
  {
    tmp72 = jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac7[3,1] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp70, 101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp72 = (tmp70?jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac7[3,1] SEED_VAR */ - ((data->localData[0]->realVars[243] /* MatStm5.K[1] variable */) * (jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac7[2,1] SEED_VAR */)):jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac7[2,1] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = tmp72;
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac7._dummyVarNLSJac7 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac7[2,1] + MatStm5.compMolFrac.SeedNLSJac7[2,2] else MatStm5.compMolFrac.SeedNLSJac7[3,1] + MatStm5.compMolFrac.SeedNLSJac7[3,2]
*/
void flash1_eqFunction_506(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,506};
  modelica_boolean tmp73;
  RELATIONHYSTERESIS(tmp73, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  jacobian->resultVars[1] /* $res2.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = (tmp73?jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac7[2,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac7[2,2] SEED_VAR */:jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac7[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac7[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac7._dummyVarNLSJac7 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac7[3,2] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac7[3,2] - MatStm5.K[2] * MatStm5.compMolFrac.SeedNLSJac7[2,2] else MatStm5.compMolFrac.SeedNLSJac7[2,2]
*/
void flash1_eqFunction_507(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,507};
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  modelica_real tmp77;
  RELATIONHYSTERESIS(tmp74, 101325.0, data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */, 0, GreaterEq);
  tmp76 = (modelica_boolean)tmp74;
  if(tmp76)
  {
    tmp77 = jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac7[3,2] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp75, 101325.0, data->localData[0]->realVars[249] /* MatStm5.Pdew variable */, 1, GreaterEq);
    tmp77 = (tmp75?jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac7[3,2] SEED_VAR */ - ((data->localData[0]->realVars[244] /* MatStm5.K[2] variable */) * (jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac7[2,2] SEED_VAR */)):jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac7[2,2] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = tmp77;
  TRACE_POP
}

/*
equation index: 508
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac7._dummyVarNLSJac7[2,2] = MatStm5.compMolFrac.SeedNLSJac7[2,2] * MatStm5.totMolFlo[2] - MatStm5.compMolFrac[2,2] * MatStm5.totMolFlo.SeedNLSJac7[3]
*/
void flash1_eqFunction_508(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,508};
  jacobian->tmpVars[4] /* MatStm5.compMolFlo.$pDERNLSJac7.dummyVarNLSJac7[2,2] JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac7[2,2] SEED_VAR */) * (data->localData[0]->realVars[325] /* MatStm5.totMolFlo[2] variable */) - ((data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac7[3] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 509
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac7._dummyVarNLSJac7[2,1] = MatStm5.compMolFrac.SeedNLSJac7[2,1] * MatStm5.totMolFlo[2] - MatStm5.compMolFrac[2,1] * MatStm5.totMolFlo.SeedNLSJac7[3]
*/
void flash1_eqFunction_509(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,509};
  jacobian->tmpVars[3] /* MatStm5.compMolFlo.$pDERNLSJac7.dummyVarNLSJac7[2,1] JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac7[2,1] SEED_VAR */) * (data->localData[0]->realVars[325] /* MatStm5.totMolFlo[2] variable */) - ((data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac7[3] SEED_VAR */));
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac7._dummyVarNLSJac7[3,2] = MatStm5.compMolFrac[3,2] * MatStm5.totMolFlo.SeedNLSJac7[3] + MatStm5.compMolFrac.SeedNLSJac7[3,2] * MatStm5.totMolFlo[3]
*/
void flash1_eqFunction_510(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,510};
  jacobian->tmpVars[1] /* MatStm5.compMolFlo.$pDERNLSJac7.dummyVarNLSJac7[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac7[3] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac7[3,2] SEED_VAR */) * (data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 511
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac7._dummyVarNLSJac7 = MatStm5.compMolFlo.$pDERNLSJac7.dummyVarNLSJac7[3,2] + MatStm5.compMolFlo.$pDERNLSJac7.dummyVarNLSJac7[2,2]
*/
void flash1_eqFunction_511(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,511};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm5.compMolFlo.$pDERNLSJac7.dummyVarNLSJac7[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[4] /* MatStm5.compMolFlo.$pDERNLSJac7.dummyVarNLSJac7[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 512
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac7._dummyVarNLSJac7[3,1] = MatStm5.compMolFrac[3,1] * MatStm5.totMolFlo.SeedNLSJac7[3] + MatStm5.compMolFrac.SeedNLSJac7[3,1] * MatStm5.totMolFlo[3]
*/
void flash1_eqFunction_512(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,512};
  jacobian->tmpVars[0] /* MatStm5.compMolFlo.$pDERNLSJac7.dummyVarNLSJac7[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac7[3] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac7[3,1] SEED_VAR */) * (data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 513
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac7._dummyVarNLSJac7 = MatStm5.compMolFlo.$pDERNLSJac7.dummyVarNLSJac7[3,1] + MatStm5.compMolFlo.$pDERNLSJac7.dummyVarNLSJac7[2,1]
*/
void flash1_eqFunction_513(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,513};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac7.dummyVarNLSJac7 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm5.compMolFlo.$pDERNLSJac7.dummyVarNLSJac7[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[3] /* MatStm5.compMolFlo.$pDERNLSJac7.dummyVarNLSJac7[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int flash1_functionJacNLSJac7_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = flash1_INDEX_JAC_NLSJac7;
  flash1_eqFunction_505(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_506(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_507(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_508(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_509(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_510(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_511(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_512(data, threadData, jacobian, parentJacobian);

  flash1_eqFunction_513(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}
int flash1_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int flash1_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int flash1_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int flash1_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}


