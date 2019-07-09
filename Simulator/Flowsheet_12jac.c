/* Jacobians 12 */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac0(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,5,3,2,3,2};
  const int rowIndex[15] = {0,1,2,3,4,2,3,4,3,4,0,1,2,0,1};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 12;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(15*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 15;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  jacobian->sparsePattern.maxColors = 3;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 15*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[2] = 1;
  jacobian->sparsePattern.colorCols[3] = 1;
  jacobian->sparsePattern.colorCols[1] = 2;
  jacobian->sparsePattern.colorCols[4] = 2;
  jacobian->sparsePattern.colorCols[0] = 3;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac1(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,5,2,2,3,3};
  const int rowIndex[15] = {0,1,2,3,4,0,4,2,3,1,2,3,0,1,4};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 12;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(15*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 15;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  jacobian->sparsePattern.maxColors = 4;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 15*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[4] = 1;
  jacobian->sparsePattern.colorCols[3] = 2;
  jacobian->sparsePattern.colorCols[1] = 3;
  jacobian->sparsePattern.colorCols[2] = 3;
  jacobian->sparsePattern.colorCols[0] = 4;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac3(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,5,3,3,2,2};
  const int rowIndex[15] = {0,1,2,3,4,0,3,4,1,2,3,1,2,0,4};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 12;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(15*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 15;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  jacobian->sparsePattern.maxColors = 3;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 15*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[2] = 1;
  jacobian->sparsePattern.colorCols[4] = 1;
  jacobian->sparsePattern.colorCols[1] = 2;
  jacobian->sparsePattern.colorCols[3] = 2;
  jacobian->sparsePattern.colorCols[0] = 3;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac4(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,5,2,2,3,3};
  const int rowIndex[15] = {0,1,2,3,4,3,4,1,2,0,1,2,0,3,4};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 12;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(15*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 15;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  jacobian->sparsePattern.maxColors = 4;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 15*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[4] = 1;
  jacobian->sparsePattern.colorCols[3] = 2;
  jacobian->sparsePattern.colorCols[1] = 3;
  jacobian->sparsePattern.colorCols[2] = 3;
  jacobian->sparsePattern.colorCols[0] = 4;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac5(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,5,2,3,3,2};
  const int rowIndex[15] = {0,1,2,3,4,3,4,2,3,4,0,1,2,0,1};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 12;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(15*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 15;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  jacobian->sparsePattern.maxColors = 3;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 15*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[2] = 1;
  jacobian->sparsePattern.colorCols[4] = 1;
  jacobian->sparsePattern.colorCols[1] = 2;
  jacobian->sparsePattern.colorCols[3] = 2;
  jacobian->sparsePattern.colorCols[0] = 3;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac6(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,5,2,3,3,2};
  const int rowIndex[15] = {0,1,2,3,4,3,4,2,3,4,0,1,2,0,1};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 12;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(15*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 15;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  jacobian->sparsePattern.maxColors = 3;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 15*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[2] = 1;
  jacobian->sparsePattern.colorCols[4] = 1;
  jacobian->sparsePattern.colorCols[1] = 2;
  jacobian->sparsePattern.colorCols[3] = 2;
  jacobian->sparsePattern.colorCols[0] = 3;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac8(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,5,2,2,3,3};
  const int rowIndex[15] = {0,1,2,3,4,3,4,1,2,0,1,2,0,3,4};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 12;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(15*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 15;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  jacobian->sparsePattern.maxColors = 4;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 15*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[4] = 1;
  jacobian->sparsePattern.colorCols[3] = 2;
  jacobian->sparsePattern.colorCols[1] = 3;
  jacobian->sparsePattern.colorCols[2] = 3;
  jacobian->sparsePattern.colorCols[0] = 4;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac9(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,5,3,3,2,2};
  const int rowIndex[15] = {0,1,2,3,4,0,2,3,1,2,4,1,4,0,3};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 12;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(12,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(15*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 15;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  jacobian->sparsePattern.maxColors = 3;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 15*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[2] = 1;
  jacobian->sparsePattern.colorCols[4] = 1;
  jacobian->sparsePattern.colorCols[1] = 2;
  jacobian->sparsePattern.colorCols[3] = 2;
  jacobian->sparsePattern.colorCols[0] = 3;
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
equation index: 84
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,1] = MatStm4.compMolFrac[2,1] * MatStm4.totMolFlo.SeedNLSJac0[2] + MatStm4.compMolFrac.SeedNLSJac0[2,1] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_84(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,84};
  jacobian->tmpVars[0] /* MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[321] /* MatStm4.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac0[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */) * (data->localData[0]->realVars[363] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,2] = MatStm4.compMolFrac[2,2] * MatStm4.totMolFlo.SeedNLSJac0[2] + MatStm4.compMolFrac.SeedNLSJac0[2,2] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_85(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,85};
  jacobian->tmpVars[1] /* MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[322] /* MatStm4.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac0[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */) * (data->localData[0]->realVars[363] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 86
type: SIMPLE_ASSIGN
MatStm4._liqPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = 0.01111111111111111 * MatStm4.totMolFlo.SeedNLSJac0[2]
*/
void Flowsheet_eqFunction_86(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,86};
  jacobian->tmpVars[2] /* MatStm4.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (0.01111111111111111) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac0[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 87
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0[2] = -MatStm4.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void Flowsheet_eqFunction_87(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,87};
  jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm4.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 88
type: SIMPLE_ASSIGN
MatStm4._totMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3] = 90.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[2]
*/
void Flowsheet_eqFunction_88(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,88};
  jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */ = (90.0) * (jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,1] = MatStm4.compMolFrac[3,1] * MatStm4.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] + MatStm4.compMolFrac.SeedNLSJac0[3,1] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_89(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,89};
  jacobian->tmpVars[5] /* MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[323] /* MatStm4.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */) * (data->localData[0]->realVars[364] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,2] = MatStm4.compMolFrac[3,2] * MatStm4.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] + MatStm4.compMolFrac.SeedNLSJac0[3,2] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_90(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,90};
  jacobian->tmpVars[6] /* MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[324] /* MatStm4.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */) * (data->localData[0]->realVars[364] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 91
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac0[3,2] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac0[2,2] + MatStm4.compMolFrac[1,2] * Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[2] * (-1.0 + MatStm4.K[2]) / (1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm4.K[2])) ^ 2.0 else MatStm4.compMolFrac.SeedNLSJac0[2,2]
*/
void Flowsheet_eqFunction_91(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,91};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp2 = 1.0 + (data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[279] /* MatStm4.K[2] variable */);
      tmp4 = jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[320] /* MatStm4.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[279] /* MatStm4.K[2] variable */)),(tmp2 * tmp2),"(1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm4.K[2])) ^ 2.0");
    }
    else
    {
      tmp4 = jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */;
    }
    tmp6 = tmp4;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp6;
  TRACE_POP
}

/*
equation index: 92
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac0._dummyVarNLSJac0 = MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] + MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2]
*/
void Flowsheet_eqFunction_92(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,92};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 93
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm4.Pbubl then MatStm4.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac0[3,1] + MatStm4.compMolFrac.SeedNLSJac0[3,2] else MatStm4.totMolFlo.SeedNLSJac0[2]
*/
void Flowsheet_eqFunction_93(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,93};
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp7 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp9 = (modelica_boolean)tmp7;
  if(tmp9)
  {
    tmp10 = jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp10 = (tmp8?jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac0[2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp10;
  TRACE_POP
}

/*
equation index: 94
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac0._dummyVarNLSJac0 = MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] + MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1]
*/
void Flowsheet_eqFunction_94(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,94};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 95
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac0[3,1] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac0[2,1] + MatStm4.compMolFrac[1,1] * Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[2] * (-1.0 + MatStm4.K[1]) / (1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm4.K[1])) ^ 2.0 else MatStm4.compMolFrac.SeedNLSJac0[2,1]
*/
void Flowsheet_eqFunction_95(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,95};
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  tmp11 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp16 = (modelica_boolean)tmp11;
  if(tmp16)
  {
    tmp17 = jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */;
  }
  else
  {
    tmp12 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp14 = (modelica_boolean)tmp12;
    if(tmp14)
    {
      tmp13 = 1.0 + (data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[278] /* MatStm4.K[1] variable */);
      tmp15 = jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[319] /* MatStm4.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[278] /* MatStm4.K[1] variable */)),(tmp13 * tmp13),"(1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm4.K[1])) ^ 2.0");
    }
    else
    {
      tmp15 = jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */;
    }
    tmp17 = tmp15;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp17;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac0_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac0;
  Flowsheet_eqFunction_84(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_85(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_86(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_87(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_88(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_89(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_90(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_91(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_92(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_93(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_94(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_95(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 138
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,1] = MatStm5.compMolFrac[2,1] * MatStm5.totMolFlo.SeedNLSJac1[2] + MatStm5.compMolFrac.SeedNLSJac1[2,1] * MatStm5.totMolFlo[2]
*/
void Flowsheet_eqFunction_138(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,138};
  jacobian->tmpVars[0] /* MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac1[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */) * (data->localData[0]->realVars[453] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,2] = MatStm5.compMolFrac[2,2] * MatStm5.totMolFlo.SeedNLSJac1[2] + MatStm5.compMolFrac.SeedNLSJac1[2,2] * MatStm5.totMolFlo[2]
*/
void Flowsheet_eqFunction_139(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,139};
  jacobian->tmpVars[1] /* MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac1[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */) * (data->localData[0]->realVars[453] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
MatStm5._liqPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1 = 0.01 * MatStm5.totMolFlo.SeedNLSJac1[2]
*/
void Flowsheet_eqFunction_140(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,140};
  jacobian->tmpVars[2] /* MatStm5.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac1[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1[1] = -MatStm5.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1
*/
void Flowsheet_eqFunction_141(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,141};
  jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[1] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm5.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
MatStm5._totMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3] = 100.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[1]
*/
void Flowsheet_eqFunction_142(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,142};
  jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,2] = MatStm5.compMolFrac[3,2] * MatStm5.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] + MatStm5.compMolFrac.SeedNLSJac1[3,2] * MatStm5.totMolFlo[3]
*/
void Flowsheet_eqFunction_143(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,143};
  jacobian->tmpVars[5] /* MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */) * (data->localData[0]->realVars[454] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,1] = MatStm5.compMolFrac[3,1] * MatStm5.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] + MatStm5.compMolFrac.SeedNLSJac1[3,1] * MatStm5.totMolFlo[3]
*/
void Flowsheet_eqFunction_144(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,144};
  jacobian->tmpVars[6] /* MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */) * (data->localData[0]->realVars[454] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac1._dummyVarNLSJac1 = MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] + MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1]
*/
void Flowsheet_eqFunction_145(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,145};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm5.Pbubl then MatStm5.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac1[3,1] + MatStm5.compMolFrac.SeedNLSJac1[3,2] else MatStm5.totMolFlo.SeedNLSJac1[2]
*/
void Flowsheet_eqFunction_146(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,146};
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  tmp18 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp20 = (modelica_boolean)tmp18;
  if(tmp20)
  {
    tmp21 = jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp19 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp21 = (tmp19?jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac1[2] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp21;
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac1._dummyVarNLSJac1 = MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] + MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2]
*/
void Flowsheet_eqFunction_147(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,147};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac1[3,2] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac1[2,2] + MatStm5.compMolFrac[1,2] * Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[1] * (-1.0 + MatStm5.K[2]) / (1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm5.K[2])) ^ 2.0 else MatStm5.compMolFrac.SeedNLSJac1[2,2]
*/
void Flowsheet_eqFunction_148(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,148};
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
  modelica_boolean tmp27;
  modelica_real tmp28;
  tmp22 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp27 = (modelica_boolean)tmp22;
  if(tmp27)
  {
    tmp28 = jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */;
  }
  else
  {
    tmp23 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp25 = (modelica_boolean)tmp23;
    if(tmp25)
    {
      tmp24 = 1.0 + (data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[369] /* MatStm5.K[2] variable */);
      tmp26 = jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[1] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[369] /* MatStm5.K[2] variable */)),(tmp24 * tmp24),"(1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm5.K[2])) ^ 2.0");
    }
    else
    {
      tmp26 = jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */;
    }
    tmp28 = tmp26;
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp28;
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac1[3,1] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac1[2,1] + MatStm5.compMolFrac[1,1] * Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[1] * (-1.0 + MatStm5.K[1]) / (1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm5.K[1])) ^ 2.0 else MatStm5.compMolFrac.SeedNLSJac1[2,1]
*/
void Flowsheet_eqFunction_149(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,149};
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  tmp29 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp34 = (modelica_boolean)tmp29;
  if(tmp34)
  {
    tmp35 = jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */;
  }
  else
  {
    tmp30 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp32 = (modelica_boolean)tmp30;
    if(tmp32)
    {
      tmp31 = 1.0 + (data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[368] /* MatStm5.K[1] variable */);
      tmp33 = jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[1] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[368] /* MatStm5.K[1] variable */)),(tmp31 * tmp31),"(1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm5.K[1])) ^ 2.0");
    }
    else
    {
      tmp33 = jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */;
    }
    tmp35 = tmp33;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp35;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac1_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac1;
  Flowsheet_eqFunction_138(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_139(data, threadData, jacobian, parentJacobian);

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
  
  TRACE_POP
  return 0;
}

/*
equation index: 289
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo.SeedNLSJac3[2] + MatStm3.compMolFrac.SeedNLSJac3[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_289(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,289};
  jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[232] /* MatStm3.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac3[2] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */) * (data->localData[0]->realVars[272] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo.SeedNLSJac3[2] + MatStm3.compMolFrac.SeedNLSJac3[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_290(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,290};
  jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[231] /* MatStm3.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac3[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */) * (data->localData[0]->realVars[272] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac._$pDERNLSJac3._dummyVarNLSJac3 = 0.02 * MatStm3.totMolFlo.SeedNLSJac3[2]
*/
void Flowsheet_eqFunction_291(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,291};
  jacobian->tmpVars[2] /* MatStm3.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (0.02) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac3[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
MatStm3._vapPhasMolFrac._$pDERNLSJac3._dummyVarNLSJac3 = -MatStm3.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3
*/
void Flowsheet_eqFunction_292(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,292};
  jacobian->tmpVars[3] /* MatStm3.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm3.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
MatStm3._totMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3] = 50.0 * MatStm3.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3
*/
void Flowsheet_eqFunction_293(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,293};
  jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_DIFF_VAR */ = (50.0) * (jacobian->tmpVars[3] /* MatStm3.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] + MatStm3.compMolFrac.SeedNLSJac3[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_294(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,294};
  jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[233] /* MatStm3.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */) * (data->localData[0]->realVars[273] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] + MatStm3.compMolFrac.SeedNLSJac3[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_295(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,295};
  jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[234] /* MatStm3.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */) * (data->localData[0]->realVars[273] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac3[3,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac3[2,1] + MatStm3.compMolFrac[1,1] * MatStm3.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 * (-1.0 + MatStm3.K[1]) / (1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[1])) ^ 2.0 else MatStm3.compMolFrac.SeedNLSJac3[2,1]
*/
void Flowsheet_eqFunction_296(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,296};
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_real tmp38;
  modelica_boolean tmp39;
  modelica_real tmp40;
  modelica_boolean tmp41;
  modelica_real tmp42;
  tmp36 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp41 = (modelica_boolean)tmp36;
  if(tmp41)
  {
    tmp42 = jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */;
  }
  else
  {
    tmp37 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp39 = (modelica_boolean)tmp37;
    if(tmp39)
    {
      tmp38 = 1.0 + (data->localData[0]->realVars[275] /* MatStm3.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[190] /* MatStm3.K[1] variable */);
      tmp40 = jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[229] /* MatStm3.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* MatStm3.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[190] /* MatStm3.K[1] variable */)),(tmp38 * tmp38),"(1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[1])) ^ 2.0");
    }
    else
    {
      tmp40 = jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */;
    }
    tmp42 = tmp40;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp42;
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac3[3,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac3[2,2] + MatStm3.compMolFrac[1,2] * MatStm3.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 * (-1.0 + MatStm3.K[2]) / (1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[2])) ^ 2.0 else MatStm3.compMolFrac.SeedNLSJac3[2,2]
*/
void Flowsheet_eqFunction_297(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,297};
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_real tmp45;
  modelica_boolean tmp46;
  modelica_real tmp47;
  modelica_boolean tmp48;
  modelica_real tmp49;
  tmp43 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp48 = (modelica_boolean)tmp43;
  if(tmp48)
  {
    tmp49 = jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */;
  }
  else
  {
    tmp44 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp46 = (modelica_boolean)tmp44;
    if(tmp46)
    {
      tmp45 = 1.0 + (data->localData[0]->realVars[275] /* MatStm3.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[191] /* MatStm3.K[2] variable */);
      tmp47 = jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[230] /* MatStm3.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* MatStm3.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[191] /* MatStm3.K[2] variable */)),(tmp45 * tmp45),"(1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[2])) ^ 2.0");
    }
    else
    {
      tmp47 = jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */;
    }
    tmp49 = tmp47;
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp49;
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac3._dummyVarNLSJac3 = MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] + MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2]
*/
void Flowsheet_eqFunction_298(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,298};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm3.Pbubl then MatStm3.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac3[3,1] + MatStm3.compMolFrac.SeedNLSJac3[3,2] else MatStm3.totMolFlo.SeedNLSJac3[2]
*/
void Flowsheet_eqFunction_299(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,299};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_real tmp53;
  tmp50 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp52 = (modelica_boolean)tmp50;
  if(tmp52)
  {
    tmp53 = jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp51 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp53 = (tmp51?jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac3[2] SEED_VAR */);
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp53;
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac3._dummyVarNLSJac3 = MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] + MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1]
*/
void Flowsheet_eqFunction_300(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,300};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac3_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac3;
  Flowsheet_eqFunction_289(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_290(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_291(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_292(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_293(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_294(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_295(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_296(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_297(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_298(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_299(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_300(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 348
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.SeedNLSJac4[2] + MatStm2.compMolFrac.SeedNLSJac4[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_348(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,348};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac4[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.SeedNLSJac4[2] + MatStm2.compMolFrac.SeedNLSJac4[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_349(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,349};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[144] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac4[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4 = 0.02 * MatStm2.totMolFlo.SeedNLSJac4[2]
*/
void Flowsheet_eqFunction_350(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,350};
  jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (0.02) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac4[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
MatStm2._vapPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4 = -MatStm2.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4
*/
void Flowsheet_eqFunction_351(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,351};
  jacobian->tmpVars[3] /* MatStm2.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3] = 50.0 * MatStm2.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4
*/
void Flowsheet_eqFunction_352(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,352};
  jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */ = (50.0) * (jacobian->tmpVars[3] /* MatStm2.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] + MatStm2.compMolFrac.SeedNLSJac4[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_353(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,353};
  jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[146] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */) * (data->localData[0]->realVars[185] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] + MatStm2.compMolFrac.SeedNLSJac4[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_354(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,354};
  jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[145] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */) * (data->localData[0]->realVars[185] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm2.Pbubl then MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac4[3,1] + MatStm2.compMolFrac.SeedNLSJac4[3,2] else MatStm2.totMolFlo.SeedNLSJac4[2]
*/
void Flowsheet_eqFunction_355(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,355};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_real tmp57;
  tmp54 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp56 = (modelica_boolean)tmp54;
  if(tmp56)
  {
    tmp57 = jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp55 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp57 = (tmp55?jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac4[2] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp57;
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac4._dummyVarNLSJac4 = MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] + MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2]
*/
void Flowsheet_eqFunction_356(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,356};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac4[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac4[2,2] + MatStm2.compMolFrac[1,2] * MatStm2.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 * (-1.0 + MatStm2.K[2]) / (1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[2])) ^ 2.0 else MatStm2.compMolFrac.SeedNLSJac4[2,2]
*/
void Flowsheet_eqFunction_357(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,357};
  modelica_boolean tmp58;
  modelica_boolean tmp59;
  modelica_real tmp60;
  modelica_boolean tmp61;
  modelica_real tmp62;
  modelica_boolean tmp63;
  modelica_real tmp64;
  tmp58 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp63 = (modelica_boolean)tmp58;
  if(tmp63)
  {
    tmp64 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */;
  }
  else
  {
    tmp59 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp61 = (modelica_boolean)tmp59;
    if(tmp61)
    {
      tmp60 = 1.0 + (data->localData[0]->realVars[187] /* MatStm2.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[103] /* MatStm2.K[2] variable */);
      tmp62 = jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[142] /* MatStm2.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* MatStm2.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[103] /* MatStm2.K[2] variable */)),(tmp60 * tmp60),"(1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[2])) ^ 2.0");
    }
    else
    {
      tmp62 = jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */;
    }
    tmp64 = tmp62;
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp64;
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac4[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac4[2,1] + MatStm2.compMolFrac[1,1] * MatStm2.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 * (-1.0 + MatStm2.K[1]) / (1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[1])) ^ 2.0 else MatStm2.compMolFrac.SeedNLSJac4[2,1]
*/
void Flowsheet_eqFunction_358(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,358};
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  modelica_real tmp67;
  modelica_boolean tmp68;
  modelica_real tmp69;
  modelica_boolean tmp70;
  modelica_real tmp71;
  tmp65 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp70 = (modelica_boolean)tmp65;
  if(tmp70)
  {
    tmp71 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */;
  }
  else
  {
    tmp66 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp68 = (modelica_boolean)tmp66;
    if(tmp68)
    {
      tmp67 = 1.0 + (data->localData[0]->realVars[187] /* MatStm2.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[102] /* MatStm2.K[1] variable */);
      tmp69 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[141] /* MatStm2.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* MatStm2.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[102] /* MatStm2.K[1] variable */)),(tmp67 * tmp67),"(1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[1])) ^ 2.0");
    }
    else
    {
      tmp69 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */;
    }
    tmp71 = tmp69;
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp71;
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac4._dummyVarNLSJac4 = MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] + MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1]
*/
void Flowsheet_eqFunction_359(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,359};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac4_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac4;
  Flowsheet_eqFunction_348(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_349(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_350(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_351(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_352(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_353(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_354(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_355(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_356(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_357(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_358(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_359(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 488
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[2,2] = MatStm4.compMolFrac[2,2] * MatStm4.totMolFlo.SeedNLSJac5[2] + MatStm4.compMolFrac.SeedNLSJac5[2,2] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_488(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,488};
  jacobian->tmpVars[0] /* MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[322] /* MatStm4.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac5[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */) * (data->localData[0]->realVars[363] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[2,1] = MatStm4.compMolFrac[2,1] * MatStm4.totMolFlo.SeedNLSJac5[2] + MatStm4.compMolFrac.SeedNLSJac5[2,1] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_489(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,489};
  jacobian->tmpVars[1] /* MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[321] /* MatStm4.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac5[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */) * (data->localData[0]->realVars[363] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
MatStm4._liqPhasMolFrac._$pDERNLSJac5._dummyVarNLSJac5 = 0.01111111111111111 * MatStm4.totMolFlo.SeedNLSJac5[2]
*/
void Flowsheet_eqFunction_490(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,490};
  jacobian->tmpVars[2] /* MatStm4.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (0.01111111111111111) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac5[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 491
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac5._dummyVarNLSJac5[2] = -MatStm4.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5
*/
void Flowsheet_eqFunction_491(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,491};
  jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm4.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 492
type: SIMPLE_ASSIGN
MatStm4._totMolFlo._$pDERNLSJac5._dummyVarNLSJac5[3] = 90.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[2]
*/
void Flowsheet_eqFunction_492(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,492};
  jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */ = (90.0) * (jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 493
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[3,2] = MatStm4.compMolFrac[3,2] * MatStm4.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] + MatStm4.compMolFrac.SeedNLSJac5[3,2] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_493(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,493};
  jacobian->tmpVars[5] /* MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[324] /* MatStm4.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */) * (data->localData[0]->realVars[364] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 494
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[3,1] = MatStm4.compMolFrac[3,1] * MatStm4.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] + MatStm4.compMolFrac.SeedNLSJac5[3,1] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_494(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,494};
  jacobian->tmpVars[6] /* MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[323] /* MatStm4.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */) * (data->localData[0]->realVars[364] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac5[3,1] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac5[2,1] + MatStm4.compMolFrac[1,1] * Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[2] * (-1.0 + MatStm4.K[1]) / (1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm4.K[1])) ^ 2.0 else MatStm4.compMolFrac.SeedNLSJac5[2,1]
*/
void Flowsheet_eqFunction_495(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,495};
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  modelica_real tmp74;
  modelica_boolean tmp75;
  modelica_real tmp76;
  modelica_boolean tmp77;
  modelica_real tmp78;
  tmp72 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp77 = (modelica_boolean)tmp72;
  if(tmp77)
  {
    tmp78 = jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */;
  }
  else
  {
    tmp73 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp75 = (modelica_boolean)tmp73;
    if(tmp75)
    {
      tmp74 = 1.0 + (data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[278] /* MatStm4.K[1] variable */);
      tmp76 = jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[319] /* MatStm4.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[278] /* MatStm4.K[1] variable */)),(tmp74 * tmp74),"(1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm4.K[1])) ^ 2.0");
    }
    else
    {
      tmp76 = jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */;
    }
    tmp78 = tmp76;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp78;
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac5._dummyVarNLSJac5 = MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] + MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1]
*/
void Flowsheet_eqFunction_496(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,496};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= MatStm4.Pbubl then MatStm4.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac5[3,1] + MatStm4.compMolFrac.SeedNLSJac5[3,2] else MatStm4.totMolFlo.SeedNLSJac5[2]
*/
void Flowsheet_eqFunction_497(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,497};
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  modelica_real tmp82;
  tmp79 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp81 = (modelica_boolean)tmp79;
  if(tmp81)
  {
    tmp82 = jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp80 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp82 = (tmp80?jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac5[2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp82;
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac5._dummyVarNLSJac5 = MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] + MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2]
*/
void Flowsheet_eqFunction_498(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,498};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac5[3,2] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac5[2,2] + MatStm4.compMolFrac[1,2] * Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[2] * (-1.0 + MatStm4.K[2]) / (1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm4.K[2])) ^ 2.0 else MatStm4.compMolFrac.SeedNLSJac5[2,2]
*/
void Flowsheet_eqFunction_499(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,499};
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  modelica_real tmp85;
  modelica_boolean tmp86;
  modelica_real tmp87;
  modelica_boolean tmp88;
  modelica_real tmp89;
  tmp83 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp88 = (modelica_boolean)tmp83;
  if(tmp88)
  {
    tmp89 = jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */;
  }
  else
  {
    tmp84 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp86 = (modelica_boolean)tmp84;
    if(tmp86)
    {
      tmp85 = 1.0 + (data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[279] /* MatStm4.K[2] variable */);
      tmp87 = jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[320] /* MatStm4.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[279] /* MatStm4.K[2] variable */)),(tmp85 * tmp85),"(1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm4.K[2])) ^ 2.0");
    }
    else
    {
      tmp87 = jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */;
    }
    tmp89 = tmp87;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp89;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac5_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac5;
  Flowsheet_eqFunction_488(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_489(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_490(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_491(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_492(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_493(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_494(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_495(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_496(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_497(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_498(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_499(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 542
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[2,2] = MatStm5.compMolFrac[2,2] * MatStm5.totMolFlo.SeedNLSJac6[2] + MatStm5.compMolFrac.SeedNLSJac6[2,2] * MatStm5.totMolFlo[2]
*/
void Flowsheet_eqFunction_542(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,542};
  jacobian->tmpVars[0] /* MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac6[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac6[2,2] SEED_VAR */) * (data->localData[0]->realVars[453] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[2,1] = MatStm5.compMolFrac[2,1] * MatStm5.totMolFlo.SeedNLSJac6[2] + MatStm5.compMolFrac.SeedNLSJac6[2,1] * MatStm5.totMolFlo[2]
*/
void Flowsheet_eqFunction_543(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,543};
  jacobian->tmpVars[1] /* MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac6[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac6[2,1] SEED_VAR */) * (data->localData[0]->realVars[453] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 544
type: SIMPLE_ASSIGN
MatStm5._liqPhasMolFrac._$pDERNLSJac6._dummyVarNLSJac6 = 0.01 * MatStm5.totMolFlo.SeedNLSJac6[2]
*/
void Flowsheet_eqFunction_544(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,544};
  jacobian->tmpVars[2] /* MatStm5.liqPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac6[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac6._dummyVarNLSJac6[1] = -MatStm5.liqPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6
*/
void Flowsheet_eqFunction_545(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,545};
  jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[1] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm5.liqPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 546
type: SIMPLE_ASSIGN
MatStm5._totMolFlo._$pDERNLSJac6._dummyVarNLSJac6[3] = 100.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[1]
*/
void Flowsheet_eqFunction_546(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,546};
  jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 547
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[3,2] = MatStm5.compMolFrac[3,2] * MatStm5.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] + MatStm5.compMolFrac.SeedNLSJac6[3,2] * MatStm5.totMolFlo[3]
*/
void Flowsheet_eqFunction_547(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,547};
  jacobian->tmpVars[5] /* MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac6[3,2] SEED_VAR */) * (data->localData[0]->realVars[454] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 548
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[3,1] = MatStm5.compMolFrac[3,1] * MatStm5.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] + MatStm5.compMolFrac.SeedNLSJac6[3,1] * MatStm5.totMolFlo[3]
*/
void Flowsheet_eqFunction_548(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,548};
  jacobian->tmpVars[6] /* MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac6[3,1] SEED_VAR */) * (data->localData[0]->realVars[454] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac6._dummyVarNLSJac6 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac6[3,1] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac6[2,1] + MatStm5.compMolFrac[1,1] * Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[1] * (-1.0 + MatStm5.K[1]) / (1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm5.K[1])) ^ 2.0 else MatStm5.compMolFrac.SeedNLSJac6[2,1]
*/
void Flowsheet_eqFunction_549(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,549};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  modelica_real tmp92;
  modelica_boolean tmp93;
  modelica_real tmp94;
  modelica_boolean tmp95;
  modelica_real tmp96;
  tmp90 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp95 = (modelica_boolean)tmp90;
  if(tmp95)
  {
    tmp96 = jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac6[3,1] SEED_VAR */;
  }
  else
  {
    tmp91 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp93 = (modelica_boolean)tmp91;
    if(tmp93)
    {
      tmp92 = 1.0 + (data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[368] /* MatStm5.K[1] variable */);
      tmp94 = jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac6[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[1] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[368] /* MatStm5.K[1] variable */)),(tmp92 * tmp92),"(1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm5.K[1])) ^ 2.0");
    }
    else
    {
      tmp94 = jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac6[2,1] SEED_VAR */;
    }
    tmp96 = tmp94;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = tmp96;
  TRACE_POP
}

/*
equation index: 550
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac6._dummyVarNLSJac6 = MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,1] + MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,1]
*/
void Flowsheet_eqFunction_550(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,550};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 551
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac6._dummyVarNLSJac6 = if 101325.0 >= MatStm5.Pbubl then MatStm5.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac6[3,1] + MatStm5.compMolFrac.SeedNLSJac6[3,2] else MatStm5.totMolFlo.SeedNLSJac6[2]
*/
void Flowsheet_eqFunction_551(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,551};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  modelica_real tmp100;
  tmp97 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp99 = (modelica_boolean)tmp97;
  if(tmp99)
  {
    tmp100 = jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp98 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp100 = (tmp98?jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac6[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac6[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac6[2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = tmp100;
  TRACE_POP
}

/*
equation index: 552
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac6._dummyVarNLSJac6 = MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,2] + MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,2]
*/
void Flowsheet_eqFunction_552(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,552};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 553
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac6._dummyVarNLSJac6 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac6[3,2] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac6[2,2] + MatStm5.compMolFrac[1,2] * Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[1] * (-1.0 + MatStm5.K[2]) / (1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm5.K[2])) ^ 2.0 else MatStm5.compMolFrac.SeedNLSJac6[2,2]
*/
void Flowsheet_eqFunction_553(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,553};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  modelica_real tmp103;
  modelica_boolean tmp104;
  modelica_real tmp105;
  modelica_boolean tmp106;
  modelica_real tmp107;
  tmp101 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp106 = (modelica_boolean)tmp101;
  if(tmp106)
  {
    tmp107 = jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac6[3,2] SEED_VAR */;
  }
  else
  {
    tmp102 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp104 = (modelica_boolean)tmp102;
    if(tmp104)
    {
      tmp103 = 1.0 + (data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[369] /* MatStm5.K[2] variable */);
      tmp105 = jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac6[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[1] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[369] /* MatStm5.K[2] variable */)),(tmp103 * tmp103),"(1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm5.K[2])) ^ 2.0");
    }
    else
    {
      tmp105 = jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac6[2,2] SEED_VAR */;
    }
    tmp107 = tmp105;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = tmp107;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac6_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac6;
  Flowsheet_eqFunction_542(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_543(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_544(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_545(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_546(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_547(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_548(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_549(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_550(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_551(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_552(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_553(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 706
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac8._dummyVarNLSJac8[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo.SeedNLSJac8[3] + MatStm3.compMolFrac.SeedNLSJac8[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_706(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,706};
  jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[233] /* MatStm3.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac8[3] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac8[3,1] SEED_VAR */) * (data->localData[0]->realVars[273] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 707
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac8._dummyVarNLSJac8[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo.SeedNLSJac8[3] + MatStm3.compMolFrac.SeedNLSJac8[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_707(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,707};
  jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[234] /* MatStm3.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac8[3] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac8[3,2] SEED_VAR */) * (data->localData[0]->realVars[273] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 708
type: SIMPLE_ASSIGN
MatStm3._vapPhasMolFrac._$pDERNLSJac8._dummyVarNLSJac8 = 0.02 * MatStm3.totMolFlo.SeedNLSJac8[3]
*/
void Flowsheet_eqFunction_708(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,708};
  jacobian->tmpVars[2] /* MatStm3.vapPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (0.02) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac8[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 709
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac._$pDERNLSJac8._dummyVarNLSJac8 = -MatStm3.vapPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8
*/
void Flowsheet_eqFunction_709(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,709};
  jacobian->tmpVars[3] /* MatStm3.liqPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm3.vapPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 710
type: SIMPLE_ASSIGN
MatStm3._totMolFlo._$pDERNLSJac8._dummyVarNLSJac8[2] = 50.0 * MatStm3.liqPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8
*/
void Flowsheet_eqFunction_710(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,710};
  jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2] JACOBIAN_DIFF_VAR */ = (50.0) * (jacobian->tmpVars[3] /* MatStm3.liqPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 711
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac8._dummyVarNLSJac8[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2] + MatStm3.compMolFrac.SeedNLSJac8[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_711(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,711};
  jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[231] /* MatStm3.compMolFrac[2,1] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac8[2,1] SEED_VAR */) * (data->localData[0]->realVars[272] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 712
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac8._dummyVarNLSJac8[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2] + MatStm3.compMolFrac.SeedNLSJac8[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_712(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,712};
  jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[232] /* MatStm3.compMolFrac[2,2] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac8[2,2] SEED_VAR */) * (data->localData[0]->realVars[272] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 713
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac8._dummyVarNLSJac8 = if 101325.0 >= MatStm3.Pbubl then MatStm3.totMolFlo.SeedNLSJac8[3] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac8[3,1] + MatStm3.compMolFrac.SeedNLSJac8[3,2] else MatStm3.totMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2]
*/
void Flowsheet_eqFunction_713(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,713};
  modelica_boolean tmp108;
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  modelica_real tmp111;
  RELATIONHYSTERESIS(tmp108, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp110 = (modelica_boolean)tmp108;
  if(tmp110)
  {
    tmp111 = jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac8[3] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp109, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp111 = (tmp109?jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac8[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac8[3,2] SEED_VAR */:jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2] JACOBIAN_DIFF_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = tmp111;
  TRACE_POP
}

/*
equation index: 714
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac8._dummyVarNLSJac8 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac8[3,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac8[2,2] + MatStm3.compMolFrac[1,2] * MatStm3.vapPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 * (-1.0 + MatStm3.K[2]) / (1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[2])) ^ 2.0 else MatStm3.compMolFrac.SeedNLSJac8[2,2]
*/
void Flowsheet_eqFunction_714(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,714};
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  modelica_real tmp114;
  modelica_boolean tmp115;
  modelica_real tmp116;
  modelica_boolean tmp117;
  modelica_real tmp118;
  RELATIONHYSTERESIS(tmp112, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp117 = (modelica_boolean)tmp112;
  if(tmp117)
  {
    tmp118 = jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac8[3,2] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp113, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp115 = (modelica_boolean)tmp113;
    if(tmp115)
    {
      tmp114 = 1.0 + (data->localData[0]->realVars[275] /* MatStm3.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[191] /* MatStm3.K[2] variable */);
      tmp116 = jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac8[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[230] /* MatStm3.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[2] /* MatStm3.vapPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[191] /* MatStm3.K[2] variable */)),(tmp114 * tmp114),"(1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[2])) ^ 2.0");
    }
    else
    {
      tmp116 = jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac8[2,2] SEED_VAR */;
    }
    tmp118 = tmp116;
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = tmp118;
  TRACE_POP
}

/*
equation index: 715
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac8._dummyVarNLSJac8 = MatStm3.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[3,2] + MatStm3.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2,2]
*/
void Flowsheet_eqFunction_715(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,715};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 716
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac8._dummyVarNLSJac8 = MatStm3.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[3,1] + MatStm3.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2,1]
*/
void Flowsheet_eqFunction_716(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,716};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 717
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac8._dummyVarNLSJac8 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac8[3,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac8[2,1] + MatStm3.compMolFrac[1,1] * MatStm3.vapPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 * (-1.0 + MatStm3.K[1]) / (1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[1])) ^ 2.0 else MatStm3.compMolFrac.SeedNLSJac8[2,1]
*/
void Flowsheet_eqFunction_717(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,717};
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  modelica_real tmp121;
  modelica_boolean tmp122;
  modelica_real tmp123;
  modelica_boolean tmp124;
  modelica_real tmp125;
  RELATIONHYSTERESIS(tmp119, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp124 = (modelica_boolean)tmp119;
  if(tmp124)
  {
    tmp125 = jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac8[3,1] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp120, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp122 = (modelica_boolean)tmp120;
    if(tmp122)
    {
      tmp121 = 1.0 + (data->localData[0]->realVars[275] /* MatStm3.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[190] /* MatStm3.K[1] variable */);
      tmp123 = jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac8[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[229] /* MatStm3.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[2] /* MatStm3.vapPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[190] /* MatStm3.K[1] variable */)),(tmp121 * tmp121),"(1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[1])) ^ 2.0");
    }
    else
    {
      tmp123 = jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac8[2,1] SEED_VAR */;
    }
    tmp125 = tmp123;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = tmp125;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac8_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac8;
  Flowsheet_eqFunction_706(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_707(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_708(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_709(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_710(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_711(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_712(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_713(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_714(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_715(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_716(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_717(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 765
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac9._dummyVarNLSJac9[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.SeedNLSJac9[2] + MatStm2.compMolFrac.SeedNLSJac9[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_765(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,765};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[144] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac9[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac9[2,2] SEED_VAR */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 766
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac9._dummyVarNLSJac9[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.SeedNLSJac9[2] + MatStm2.compMolFrac.SeedNLSJac9[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_766(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,766};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac9[2] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac9[2,1] SEED_VAR */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 767
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac9._dummyVarNLSJac9 = 0.02 * MatStm2.totMolFlo.SeedNLSJac9[2]
*/
void Flowsheet_eqFunction_767(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,767};
  jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (0.02) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac9[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 768
type: SIMPLE_ASSIGN
MatStm2._vapPhasMolFrac._$pDERNLSJac9._dummyVarNLSJac9 = -MatStm2.liqPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9
*/
void Flowsheet_eqFunction_768(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,768};
  jacobian->tmpVars[3] /* MatStm2.vapPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 769
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac9._dummyVarNLSJac9[3] = 50.0 * MatStm2.vapPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9
*/
void Flowsheet_eqFunction_769(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,769};
  jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3] JACOBIAN_DIFF_VAR */ = (50.0) * (jacobian->tmpVars[3] /* MatStm2.vapPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 770
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac9._dummyVarNLSJac9[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3] + MatStm2.compMolFrac.SeedNLSJac9[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_770(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,770};
  jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[146] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac9[3,2] SEED_VAR */) * (data->localData[0]->realVars[185] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 771
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac9._dummyVarNLSJac9[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3] + MatStm2.compMolFrac.SeedNLSJac9[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_771(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,771};
  jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[145] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac9[3,1] SEED_VAR */) * (data->localData[0]->realVars[185] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 772
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac9._dummyVarNLSJac9 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac9[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac9[2,2] + MatStm2.compMolFrac[1,2] * MatStm2.vapPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 * (-1.0 + MatStm2.K[2]) / (1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[2])) ^ 2.0 else MatStm2.compMolFrac.SeedNLSJac9[2,2]
*/
void Flowsheet_eqFunction_772(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,772};
  modelica_boolean tmp126;
  modelica_boolean tmp127;
  modelica_real tmp128;
  modelica_boolean tmp129;
  modelica_real tmp130;
  modelica_boolean tmp131;
  modelica_real tmp132;
  RELATIONHYSTERESIS(tmp126, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp131 = (modelica_boolean)tmp126;
  if(tmp131)
  {
    tmp132 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac9[3,2] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp127, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp129 = (modelica_boolean)tmp127;
    if(tmp129)
    {
      tmp128 = 1.0 + (data->localData[0]->realVars[187] /* MatStm2.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[103] /* MatStm2.K[2] variable */);
      tmp130 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac9[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[142] /* MatStm2.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* MatStm2.vapPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[103] /* MatStm2.K[2] variable */)),(tmp128 * tmp128),"(1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[2])) ^ 2.0");
    }
    else
    {
      tmp130 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac9[2,2] SEED_VAR */;
    }
    tmp132 = tmp130;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = tmp132;
  TRACE_POP
}

/*
equation index: 773
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac9._dummyVarNLSJac9 = MatStm2.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3,1] + MatStm2.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2,1]
*/
void Flowsheet_eqFunction_773(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,773};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 774
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac9._dummyVarNLSJac9 = if 101325.0 >= MatStm2.Pbubl then MatStm2.totMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac9[3,1] + MatStm2.compMolFrac.SeedNLSJac9[3,2] else MatStm2.totMolFlo.SeedNLSJac9[2]
*/
void Flowsheet_eqFunction_774(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,774};
  modelica_boolean tmp133;
  modelica_boolean tmp134;
  modelica_boolean tmp135;
  modelica_real tmp136;
  RELATIONHYSTERESIS(tmp133, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp135 = (modelica_boolean)tmp133;
  if(tmp135)
  {
    tmp136 = jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp134, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp136 = (tmp134?jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac9[3,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac9[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac9[2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = tmp136;
  TRACE_POP
}

/*
equation index: 775
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac9._dummyVarNLSJac9 = MatStm2.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3,2] + MatStm2.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2,2]
*/
void Flowsheet_eqFunction_775(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,775};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 776
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac9._dummyVarNLSJac9 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac9[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac9[2,1] + MatStm2.compMolFrac[1,1] * MatStm2.vapPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 * (-1.0 + MatStm2.K[1]) / (1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[1])) ^ 2.0 else MatStm2.compMolFrac.SeedNLSJac9[2,1]
*/
void Flowsheet_eqFunction_776(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,776};
  modelica_boolean tmp137;
  modelica_boolean tmp138;
  modelica_real tmp139;
  modelica_boolean tmp140;
  modelica_real tmp141;
  modelica_boolean tmp142;
  modelica_real tmp143;
  RELATIONHYSTERESIS(tmp137, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp142 = (modelica_boolean)tmp137;
  if(tmp142)
  {
    tmp143 = jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac9[3,1] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp138, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp140 = (modelica_boolean)tmp138;
    if(tmp140)
    {
      tmp139 = 1.0 + (data->localData[0]->realVars[187] /* MatStm2.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[102] /* MatStm2.K[1] variable */);
      tmp141 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac9[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[141] /* MatStm2.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* MatStm2.vapPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[102] /* MatStm2.K[1] variable */)),(tmp139 * tmp139),"(1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[1])) ^ 2.0");
    }
    else
    {
      tmp141 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac9[2,1] SEED_VAR */;
    }
    tmp143 = tmp141;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = tmp143;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac9_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac9;
  Flowsheet_eqFunction_765(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_766(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_767(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_768(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_769(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_770(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_771(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_772(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_773(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_774(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_775(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_776(data, threadData, jacobian, parentJacobian);
  
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


