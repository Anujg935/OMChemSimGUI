/* Jacobians 12 */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac0(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,2,2,3,4,0,1,3,2,3,4,0,1,3};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 12;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(12,sizeof(modelica_real));
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
  const int rowIndex[14] = {1,3,2,3,4,2,3,4,0,1,2,0,1,2};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 12;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(12,sizeof(modelica_real));
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
  const int rowIndex[14] = {3,4,0,2,3,1,2,4,1,2,4,0,2,3};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 12;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(12,sizeof(modelica_real));
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
  const int rowIndex[14] = {3,4,0,2,3,1,2,4,1,2,4,0,2,3};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 12;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(12,sizeof(modelica_real));
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
  const int rowIndex[14] = {1,2,0,2,4,1,3,4,1,3,4,0,2,4};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 12;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(12,sizeof(modelica_real));
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
int Flowsheet_initialAnalyticJacobianNLSJac6(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,4,0,2,3,0,2,3,1,2,4,1,2,4};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 12;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(12,sizeof(modelica_real));
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
int Flowsheet_initialAnalyticJacobianNLSJac8(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {1,3,1,2,4,0,2,3,1,2,4,0,2,3};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 12;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(12,sizeof(modelica_real));
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
int Flowsheet_initialAnalyticJacobianNLSJac9(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {1,3,2,3,4,2,3,4,0,1,2,0,1,2};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 12;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(12,sizeof(modelica_real));
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
equation index: 84
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,1] = MatStm4.compMolFrac[3,1] * MatStm4.totMolFlo.SeedNLSJac0[3] + MatStm4.compMolFrac.SeedNLSJac0[3,1] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_84(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,84};
  jacobian->tmpVars[0] /* MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[323] /* MatStm4.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac0[3] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */) * (data->localData[0]->realVars[364] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,2] = MatStm4.compMolFrac[3,2] * MatStm4.totMolFlo.SeedNLSJac0[3] + MatStm4.compMolFrac.SeedNLSJac0[3,2] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_85(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,85};
  jacobian->tmpVars[1] /* MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[324] /* MatStm4.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac0[3] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */) * (data->localData[0]->realVars[364] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 86
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0[1] = 0.01538461538461539 * MatStm4.totMolFlo.SeedNLSJac0[3]
*/
void Flowsheet_eqFunction_86(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,86};
  jacobian->tmpVars[2] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1] JACOBIAN_DIFF_VAR */ = (0.01538461538461539) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac0[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 87
type: SIMPLE_ASSIGN
MatStm4._liqPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = -Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1]
*/
void Flowsheet_eqFunction_87(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,87};
  jacobian->tmpVars[3] /* MatStm4.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 88
type: SIMPLE_ASSIGN
MatStm4._totMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2] = 65.0 * MatStm4.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void Flowsheet_eqFunction_88(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,88};
  jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */ = (65.0) * (jacobian->tmpVars[3] /* MatStm4.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,1] = MatStm4.compMolFrac[2,1] * MatStm4.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] + MatStm4.compMolFrac.SeedNLSJac0[2,1] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_89(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,89};
  jacobian->tmpVars[5] /* MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[321] /* MatStm4.compMolFrac[2,1] variable */) * (jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */) * (data->localData[0]->realVars[363] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,2] = MatStm4.compMolFrac[2,2] * MatStm4.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] + MatStm4.compMolFrac.SeedNLSJac0[2,2] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_90(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,90};
  jacobian->tmpVars[6] /* MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[322] /* MatStm4.compMolFrac[2,2] variable */) * (jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */) * (data->localData[0]->realVars[363] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 91
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac0._dummyVarNLSJac0 = MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] + MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2]
*/
void Flowsheet_eqFunction_91(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,91};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 92
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac0[3,2] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac0[3,2] - MatStm4.K[2] * MatStm4.compMolFrac.SeedNLSJac0[2,2] else MatStm4.compMolFrac.SeedNLSJac0[2,2]
*/
void Flowsheet_eqFunction_92(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,92};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp3 = (tmp1?jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */ - ((data->localData[0]->realVars[279] /* MatStm4.K[2] variable */) * (jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */)):jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp3;
  TRACE_POP
}

/*
equation index: 93
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac0._dummyVarNLSJac0 = MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] + MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1]
*/
void Flowsheet_eqFunction_93(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,93};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm4.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 94
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac0[2,1] + MatStm4.compMolFrac.SeedNLSJac0[2,2] else MatStm4.compMolFrac.SeedNLSJac0[3,1] + MatStm4.compMolFrac.SeedNLSJac0[3,2]
*/
void Flowsheet_eqFunction_94(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,94};
  modelica_boolean tmp4;
  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = (tmp4?jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */:jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 95
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac0[3,1] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac0[3,1] - MatStm4.K[1] * MatStm4.compMolFrac.SeedNLSJac0[2,1] else MatStm4.compMolFrac.SeedNLSJac0[2,1]
*/
void Flowsheet_eqFunction_95(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,95};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */;
  }
  else
  {
    tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp8 = (tmp6?jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ - ((data->localData[0]->realVars[278] /* MatStm4.K[1] variable */) * (jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */)):jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp8;
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
  jacobian->tmpVars[1] /* MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac1[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */) * (data->localData[0]->realVars[453] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
MatStm5._liqPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1 = 0.01176470588235294 * MatStm5.totMolFlo.SeedNLSJac1[2]
*/
void Flowsheet_eqFunction_140(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,140};
  jacobian->tmpVars[2] /* MatStm5.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (0.01176470588235294) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac1[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1[2] = -MatStm5.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1
*/
void Flowsheet_eqFunction_141(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,141};
  jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm5.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
MatStm5._totMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3] = 85.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2]
*/
void Flowsheet_eqFunction_142(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,142};
  jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */ = (85.0) * (jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,1] = MatStm5.compMolFrac[3,1] * MatStm5.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] + MatStm5.compMolFrac.SeedNLSJac1[3,1] * MatStm5.totMolFlo[3]
*/
void Flowsheet_eqFunction_143(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,143};
  jacobian->tmpVars[5] /* MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */) * (data->localData[0]->realVars[454] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,2] = MatStm5.compMolFrac[3,2] * MatStm5.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] + MatStm5.compMolFrac.SeedNLSJac1[3,2] * MatStm5.totMolFlo[3]
*/
void Flowsheet_eqFunction_144(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,144};
  jacobian->tmpVars[6] /* MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */) * (data->localData[0]->realVars[454] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac1[3,2] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac1[3,2] - MatStm5.K[2] * MatStm5.compMolFrac.SeedNLSJac1[2,2] else MatStm5.compMolFrac.SeedNLSJac1[2,2]
*/
void Flowsheet_eqFunction_145(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,145};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */;
  }
  else
  {
    tmp10 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp12 = (tmp10?jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */ - ((data->localData[0]->realVars[369] /* MatStm5.K[2] variable */) * (jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */)):jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp12;
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac1._dummyVarNLSJac1 = MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] + MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2]
*/
void Flowsheet_eqFunction_146(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,146};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac1[2,1] + MatStm5.compMolFrac.SeedNLSJac1[2,2] else MatStm5.compMolFrac.SeedNLSJac1[3,1] + MatStm5.compMolFrac.SeedNLSJac1[3,2]
*/
void Flowsheet_eqFunction_147(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,147};
  modelica_boolean tmp13;
  tmp13 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (tmp13?jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */:jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac1._dummyVarNLSJac1 = MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] + MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1]
*/
void Flowsheet_eqFunction_148(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,148};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm5.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac1[3,1] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac1[3,1] - MatStm5.K[1] * MatStm5.compMolFrac.SeedNLSJac1[2,1] else MatStm5.compMolFrac.SeedNLSJac1[2,1]
*/
void Flowsheet_eqFunction_149(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,149};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  tmp14 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp16 = (modelica_boolean)tmp14;
  if(tmp16)
  {
    tmp17 = jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */;
  }
  else
  {
    tmp15 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp17 = (tmp15?jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */ - ((data->localData[0]->realVars[368] /* MatStm5.K[1] variable */) * (jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */)):jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp17;
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
MatStm2._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.SeedNLSJac3[3] + MatStm2.compMolFrac.SeedNLSJac3[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_289(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,289};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[145] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac3[3] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */) * (data->localData[0]->realVars[185] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.SeedNLSJac3[3] + MatStm2.compMolFrac.SeedNLSJac3[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_290(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,290};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[146] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac3[3] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */) * (data->localData[0]->realVars[185] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
MatStm2._vapPhasMolFrac._$pDERNLSJac3._dummyVarNLSJac3 = 0.02 * MatStm2.totMolFlo.SeedNLSJac3[3]
*/
void Flowsheet_eqFunction_291(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,291};
  jacobian->tmpVars[2] /* MatStm2.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (0.02) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac3[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac3._dummyVarNLSJac3 = -MatStm2.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3
*/
void Flowsheet_eqFunction_292(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,292};
  jacobian->tmpVars[3] /* MatStm2.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm2.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2] = 50.0 * MatStm2.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3
*/
void Flowsheet_eqFunction_293(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,293};
  jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_DIFF_VAR */ = (50.0) * (jacobian->tmpVars[3] /* MatStm2.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] + MatStm2.compMolFrac.SeedNLSJac3[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_294(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,294};
  jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[144] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] + MatStm2.compMolFrac.SeedNLSJac3[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_295(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,295};
  jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac3[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac3[3,2] - MatStm2.K[2] * MatStm2.compMolFrac.SeedNLSJac3[2,2] else MatStm2.compMolFrac.SeedNLSJac3[2,2]
*/
void Flowsheet_eqFunction_296(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,296};
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  tmp18 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp20 = (modelica_boolean)tmp18;
  if(tmp20)
  {
    tmp21 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */;
  }
  else
  {
    tmp19 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp21 = (tmp19?jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */ - ((data->localData[0]->realVars[103] /* MatStm2.K[2] variable */) * (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */)):jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp21;
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac3[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac3[3,1] - MatStm2.K[1] * MatStm2.compMolFrac.SeedNLSJac3[2,1] else MatStm2.compMolFrac.SeedNLSJac3[2,1]
*/
void Flowsheet_eqFunction_297(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,297};
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  tmp22 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  tmp24 = (modelica_boolean)tmp22;
  if(tmp24)
  {
    tmp25 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */;
  }
  else
  {
    tmp23 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pdew variable */);
    tmp25 = (tmp23?jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */ - ((data->localData[0]->realVars[102] /* MatStm2.K[1] variable */) * (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */)):jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp25;
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac3[2,1] + MatStm2.compMolFrac.SeedNLSJac3[2,2] else MatStm2.compMolFrac.SeedNLSJac3[3,1] + MatStm2.compMolFrac.SeedNLSJac3[3,2]
*/
void Flowsheet_eqFunction_298(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,298};
  modelica_boolean tmp26;
  tmp26 = GreaterEq(101325.0,data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = (tmp26?jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */:jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac3._dummyVarNLSJac3 = MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] + MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2]
*/
void Flowsheet_eqFunction_299(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,299};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac3._dummyVarNLSJac3 = MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] + MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1]
*/
void Flowsheet_eqFunction_300(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,300};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */;
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
MatStm3._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo.SeedNLSJac4[3] + MatStm3.compMolFrac.SeedNLSJac4[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_348(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,348};
  jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[233] /* MatStm3.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac4[3] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */) * (data->localData[0]->realVars[273] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo.SeedNLSJac4[3] + MatStm3.compMolFrac.SeedNLSJac4[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_349(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,349};
  jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[234] /* MatStm3.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac4[3] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */) * (data->localData[0]->realVars[273] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
MatStm3._vapPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4 = 0.02 * MatStm3.totMolFlo.SeedNLSJac4[3]
*/
void Flowsheet_eqFunction_350(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,350};
  jacobian->tmpVars[2] /* MatStm3.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (0.02) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac4[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4 = -MatStm3.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4
*/
void Flowsheet_eqFunction_351(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,351};
  jacobian->tmpVars[3] /* MatStm3.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm3.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
MatStm3._totMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2] = 50.0 * MatStm3.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4
*/
void Flowsheet_eqFunction_352(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,352};
  jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */ = (50.0) * (jacobian->tmpVars[3] /* MatStm3.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2] + MatStm3.compMolFrac.SeedNLSJac4[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_353(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,353};
  jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[232] /* MatStm3.compMolFrac[2,2] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */) * (data->localData[0]->realVars[272] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2] + MatStm3.compMolFrac.SeedNLSJac4[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_354(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,354};
  jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[231] /* MatStm3.compMolFrac[2,1] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */) * (data->localData[0]->realVars[272] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac4[3,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac4[3,2] - MatStm3.K[2] * MatStm3.compMolFrac.SeedNLSJac4[2,2] else MatStm3.compMolFrac.SeedNLSJac4[2,2]
*/
void Flowsheet_eqFunction_355(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,355};
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_real tmp30;
  tmp27 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp29 = (modelica_boolean)tmp27;
  if(tmp29)
  {
    tmp30 = jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */;
  }
  else
  {
    tmp28 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp30 = (tmp28?jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */ - ((data->localData[0]->realVars[191] /* MatStm3.K[2] variable */) * (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */)):jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp30;
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac4[3,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac4[3,1] - MatStm3.K[1] * MatStm3.compMolFrac.SeedNLSJac4[2,1] else MatStm3.compMolFrac.SeedNLSJac4[2,1]
*/
void Flowsheet_eqFunction_356(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,356};
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_real tmp34;
  tmp31 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  tmp33 = (modelica_boolean)tmp31;
  if(tmp33)
  {
    tmp34 = jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */;
  }
  else
  {
    tmp32 = GreaterEq(101325.0,data->localData[0]->realVars[196] /* MatStm3.Pdew variable */);
    tmp34 = (tmp32?jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */ - ((data->localData[0]->realVars[190] /* MatStm3.K[1] variable */) * (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */)):jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp34;
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac4[2,1] + MatStm3.compMolFrac.SeedNLSJac4[2,2] else MatStm3.compMolFrac.SeedNLSJac4[3,1] + MatStm3.compMolFrac.SeedNLSJac4[3,2]
*/
void Flowsheet_eqFunction_357(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,357};
  modelica_boolean tmp35;
  tmp35 = GreaterEq(101325.0,data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (tmp35?jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */:jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac4._dummyVarNLSJac4 = MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] + MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2]
*/
void Flowsheet_eqFunction_358(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,358};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac4._dummyVarNLSJac4 = MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] + MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1]
*/
void Flowsheet_eqFunction_359(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,359};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */;
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
MatStm4._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[2,1] = MatStm4.compMolFrac[2,1] * MatStm4.totMolFlo.SeedNLSJac5[2] + MatStm4.compMolFrac.SeedNLSJac5[2,1] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_488(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,488};
  jacobian->tmpVars[0] /* MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[321] /* MatStm4.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac5[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */) * (data->localData[0]->realVars[363] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[2,2] = MatStm4.compMolFrac[2,2] * MatStm4.totMolFlo.SeedNLSJac5[2] + MatStm4.compMolFrac.SeedNLSJac5[2,2] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_489(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,489};
  jacobian->tmpVars[1] /* MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[322] /* MatStm4.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac5[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */) * (data->localData[0]->realVars[363] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
MatStm4._liqPhasMolFrac._$pDERNLSJac5._dummyVarNLSJac5 = 0.01538461538461539 * MatStm4.totMolFlo.SeedNLSJac5[2]
*/
void Flowsheet_eqFunction_490(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,490};
  jacobian->tmpVars[2] /* MatStm4.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (0.01538461538461539) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac5[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 491
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac5._dummyVarNLSJac5[1] = -MatStm4.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5
*/
void Flowsheet_eqFunction_491(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,491};
  jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm4.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 492
type: SIMPLE_ASSIGN
MatStm4._totMolFlo._$pDERNLSJac5._dummyVarNLSJac5[3] = 65.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[1]
*/
void Flowsheet_eqFunction_492(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,492};
  jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */ = (65.0) * (jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[1] JACOBIAN_DIFF_VAR */);
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
  jacobian->tmpVars[5] /* MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[324] /* MatStm4.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */) * (data->localData[0]->realVars[364] /* MatStm4.totMolFlo[3] variable */);
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
  jacobian->tmpVars[6] /* MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[323] /* MatStm4.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */) * (data->localData[0]->realVars[364] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac5[3,1] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac5[3,1] - MatStm4.K[1] * MatStm4.compMolFrac.SeedNLSJac5[2,1] else MatStm4.compMolFrac.SeedNLSJac5[2,1]
*/
void Flowsheet_eqFunction_495(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,495};
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_real tmp39;
  tmp36 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp38 = (modelica_boolean)tmp36;
  if(tmp38)
  {
    tmp39 = jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */;
  }
  else
  {
    tmp37 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp39 = (tmp37?jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */ - ((data->localData[0]->realVars[278] /* MatStm4.K[1] variable */) * (jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */)):jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp39;
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac5._dummyVarNLSJac5 = MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] + MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2]
*/
void Flowsheet_eqFunction_496(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,496};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac5._dummyVarNLSJac5 = MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] + MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1]
*/
void Flowsheet_eqFunction_497(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,497};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm4.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac5[3,2] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac5[3,2] - MatStm4.K[2] * MatStm4.compMolFrac.SeedNLSJac5[2,2] else MatStm4.compMolFrac.SeedNLSJac5[2,2]
*/
void Flowsheet_eqFunction_498(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,498};
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_real tmp43;
  tmp40 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  tmp42 = (modelica_boolean)tmp40;
  if(tmp42)
  {
    tmp43 = jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */;
  }
  else
  {
    tmp41 = GreaterEq(101325.0,data->localData[0]->realVars[285] /* MatStm4.Pdew variable */);
    tmp43 = (tmp41?jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */ - ((data->localData[0]->realVars[279] /* MatStm4.K[2] variable */) * (jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */)):jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */);
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp43;
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac5[2,1] + MatStm4.compMolFrac.SeedNLSJac5[2,2] else MatStm4.compMolFrac.SeedNLSJac5[3,1] + MatStm4.compMolFrac.SeedNLSJac5[3,2]
*/
void Flowsheet_eqFunction_499(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,499};
  modelica_boolean tmp44;
  tmp44 = GreaterEq(101325.0,data->localData[0]->realVars[284] /* MatStm4.Pbubl variable */);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (tmp44?jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */:jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */);
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
MatStm5._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[3,1] = MatStm5.compMolFrac[3,1] * MatStm5.totMolFlo.SeedNLSJac6[3] + MatStm5.compMolFrac.SeedNLSJac6[3,1] * MatStm5.totMolFlo[3]
*/
void Flowsheet_eqFunction_542(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,542};
  jacobian->tmpVars[0] /* MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac6[3] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac6[3,1] SEED_VAR */) * (data->localData[0]->realVars[454] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[3,2] = MatStm5.compMolFrac[3,2] * MatStm5.totMolFlo.SeedNLSJac6[3] + MatStm5.compMolFrac.SeedNLSJac6[3,2] * MatStm5.totMolFlo[3]
*/
void Flowsheet_eqFunction_543(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,543};
  jacobian->tmpVars[1] /* MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac6[3] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac6[3,2] SEED_VAR */) * (data->localData[0]->realVars[454] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 544
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac6._dummyVarNLSJac6[2] = 0.01176470588235294 * MatStm5.totMolFlo.SeedNLSJac6[3]
*/
void Flowsheet_eqFunction_544(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,544};
  jacobian->tmpVars[2] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[2] JACOBIAN_DIFF_VAR */ = (0.01176470588235294) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac6[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
MatStm5._liqPhasMolFrac._$pDERNLSJac6._dummyVarNLSJac6 = -Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[2]
*/
void Flowsheet_eqFunction_545(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,545};
  jacobian->tmpVars[3] /* MatStm5.liqPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 546
type: SIMPLE_ASSIGN
MatStm5._totMolFlo._$pDERNLSJac6._dummyVarNLSJac6[2] = 85.0 * MatStm5.liqPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6
*/
void Flowsheet_eqFunction_546(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,546};
  jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2] JACOBIAN_DIFF_VAR */ = (85.0) * (jacobian->tmpVars[3] /* MatStm5.liqPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 547
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[2,1] = MatStm5.compMolFrac[2,1] * MatStm5.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2] + MatStm5.compMolFrac.SeedNLSJac6[2,1] * MatStm5.totMolFlo[2]
*/
void Flowsheet_eqFunction_547(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,547};
  jacobian->tmpVars[5] /* MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */) * (jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac6[2,1] SEED_VAR */) * (data->localData[0]->realVars[453] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 548
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[2,2] = MatStm5.compMolFrac[2,2] * MatStm5.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2] + MatStm5.compMolFrac.SeedNLSJac6[2,2] * MatStm5.totMolFlo[2]
*/
void Flowsheet_eqFunction_548(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,548};
  jacobian->tmpVars[6] /* MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */) * (jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac6[2,2] SEED_VAR */) * (data->localData[0]->realVars[453] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac6._dummyVarNLSJac6 = MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,2] + MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,2]
*/
void Flowsheet_eqFunction_549(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,549};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 550
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac6._dummyVarNLSJac6 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac6[3,1] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac6[3,1] - MatStm5.K[1] * MatStm5.compMolFrac.SeedNLSJac6[2,1] else MatStm5.compMolFrac.SeedNLSJac6[2,1]
*/
void Flowsheet_eqFunction_550(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,550};
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_real tmp48;
  tmp45 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp47 = (modelica_boolean)tmp45;
  if(tmp47)
  {
    tmp48 = jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac6[3,1] SEED_VAR */;
  }
  else
  {
    tmp46 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp48 = (tmp46?jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac6[3,1] SEED_VAR */ - ((data->localData[0]->realVars[368] /* MatStm5.K[1] variable */) * (jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac6[2,1] SEED_VAR */)):jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac6[2,1] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = tmp48;
  TRACE_POP
}

/*
equation index: 551
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac6._dummyVarNLSJac6 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac6[2,1] + MatStm5.compMolFrac.SeedNLSJac6[2,2] else MatStm5.compMolFrac.SeedNLSJac6[3,1] + MatStm5.compMolFrac.SeedNLSJac6[3,2]
*/
void Flowsheet_eqFunction_551(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,551};
  modelica_boolean tmp49;
  tmp49 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = (tmp49?jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac6[2,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac6[2,2] SEED_VAR */:jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac6[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac6[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 552
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac6._dummyVarNLSJac6 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac6[3,2] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac6[3,2] - MatStm5.K[2] * MatStm5.compMolFrac.SeedNLSJac6[2,2] else MatStm5.compMolFrac.SeedNLSJac6[2,2]
*/
void Flowsheet_eqFunction_552(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,552};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_real tmp53;
  tmp50 = GreaterEq(101325.0,data->localData[0]->realVars[374] /* MatStm5.Pbubl variable */);
  tmp52 = (modelica_boolean)tmp50;
  if(tmp52)
  {
    tmp53 = jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac6[3,2] SEED_VAR */;
  }
  else
  {
    tmp51 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pdew variable */);
    tmp53 = (tmp51?jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac6[3,2] SEED_VAR */ - ((data->localData[0]->realVars[369] /* MatStm5.K[2] variable */) * (jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac6[2,2] SEED_VAR */)):jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac6[2,2] SEED_VAR */);
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = tmp53;
  TRACE_POP
}

/*
equation index: 553
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac6._dummyVarNLSJac6 = MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,1] + MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,1]
*/
void Flowsheet_eqFunction_553(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,553};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm5.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,1] JACOBIAN_DIFF_VAR */;
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
MatStm2._compMolFlo._$pDERNLSJac8._dummyVarNLSJac8[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.SeedNLSJac8[3] + MatStm2.compMolFrac.SeedNLSJac8[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_706(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,706};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[146] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac8[3] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac8[3,2] SEED_VAR */) * (data->localData[0]->realVars[185] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 707
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac8._dummyVarNLSJac8[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.SeedNLSJac8[3] + MatStm2.compMolFrac.SeedNLSJac8[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_707(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,707};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[145] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac8[3] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac8[3,1] SEED_VAR */) * (data->localData[0]->realVars[185] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 708
type: SIMPLE_ASSIGN
MatStm2._vapPhasMolFrac._$pDERNLSJac8._dummyVarNLSJac8 = 0.02 * MatStm2.totMolFlo.SeedNLSJac8[3]
*/
void Flowsheet_eqFunction_708(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,708};
  jacobian->tmpVars[2] /* MatStm2.vapPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (0.02) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac8[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 709
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac8._dummyVarNLSJac8 = -MatStm2.vapPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8
*/
void Flowsheet_eqFunction_709(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,709};
  jacobian->tmpVars[3] /* MatStm2.liqPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm2.vapPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 710
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac8._dummyVarNLSJac8[2] = 50.0 * MatStm2.liqPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8
*/
void Flowsheet_eqFunction_710(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,710};
  jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2] JACOBIAN_DIFF_VAR */ = (50.0) * (jacobian->tmpVars[3] /* MatStm2.liqPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 711
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac8._dummyVarNLSJac8[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2] + MatStm2.compMolFrac.SeedNLSJac8[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_711(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,711};
  jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac8[2,1] SEED_VAR */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 712
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac8._dummyVarNLSJac8[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2] + MatStm2.compMolFrac.SeedNLSJac8[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_712(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,712};
  jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[144] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac8[2,2] SEED_VAR */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 713
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac8._dummyVarNLSJac8 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac8[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac8[3,1] - MatStm2.K[1] * MatStm2.compMolFrac.SeedNLSJac8[2,1] else MatStm2.compMolFrac.SeedNLSJac8[2,1]
*/
void Flowsheet_eqFunction_713(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,713};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_real tmp57;
  RELATIONHYSTERESIS(tmp54, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp56 = (modelica_boolean)tmp54;
  if(tmp56)
  {
    tmp57 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac8[3,1] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp55, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp57 = (tmp55?jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac8[3,1] SEED_VAR */ - ((data->localData[0]->realVars[102] /* MatStm2.K[1] variable */) * (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac8[2,1] SEED_VAR */)):jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac8[2,1] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = tmp57;
  TRACE_POP
}

/*
equation index: 714
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac8._dummyVarNLSJac8 = MatStm2.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[3,2] + MatStm2.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2,2]
*/
void Flowsheet_eqFunction_714(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,714};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 715
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac8._dummyVarNLSJac8 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac8[2,1] + MatStm2.compMolFrac.SeedNLSJac8[2,2] else MatStm2.compMolFrac.SeedNLSJac8[3,1] + MatStm2.compMolFrac.SeedNLSJac8[3,2]
*/
void Flowsheet_eqFunction_715(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,715};
  modelica_boolean tmp58;
  RELATIONHYSTERESIS(tmp58, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = (tmp58?jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac8[2,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac8[2,2] SEED_VAR */:jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac8[3,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac8[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 716
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac8._dummyVarNLSJac8 = MatStm2.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[3,1] + MatStm2.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2,1]
*/
void Flowsheet_eqFunction_716(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,716};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 717
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac8._dummyVarNLSJac8 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac8[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac8[3,2] - MatStm2.K[2] * MatStm2.compMolFrac.SeedNLSJac8[2,2] else MatStm2.compMolFrac.SeedNLSJac8[2,2]
*/
void Flowsheet_eqFunction_717(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,717};
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  modelica_real tmp62;
  RELATIONHYSTERESIS(tmp59, 101325.0, data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp61 = (modelica_boolean)tmp59;
  if(tmp61)
  {
    tmp62 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac8[3,2] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp60, 101325.0, data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp62 = (tmp60?jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac8[3,2] SEED_VAR */ - ((data->localData[0]->realVars[103] /* MatStm2.K[2] variable */) * (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac8[2,2] SEED_VAR */)):jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac8[2,2] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = tmp62;
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
MatStm3._compMolFlo._$pDERNLSJac9._dummyVarNLSJac9[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo.SeedNLSJac9[3] + MatStm3.compMolFrac.SeedNLSJac9[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_765(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,765};
  jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[234] /* MatStm3.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac9[3] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac9[3,2] SEED_VAR */) * (data->localData[0]->realVars[273] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 766
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac9._dummyVarNLSJac9[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo.SeedNLSJac9[3] + MatStm3.compMolFrac.SeedNLSJac9[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_766(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,766};
  jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[233] /* MatStm3.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac9[3] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac9[3,1] SEED_VAR */) * (data->localData[0]->realVars[273] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 767
type: SIMPLE_ASSIGN
MatStm3._vapPhasMolFrac._$pDERNLSJac9._dummyVarNLSJac9 = 0.02 * MatStm3.totMolFlo.SeedNLSJac9[3]
*/
void Flowsheet_eqFunction_767(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,767};
  jacobian->tmpVars[2] /* MatStm3.vapPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (0.02) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac9[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 768
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac._$pDERNLSJac9._dummyVarNLSJac9 = -MatStm3.vapPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9
*/
void Flowsheet_eqFunction_768(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,768};
  jacobian->tmpVars[3] /* MatStm3.liqPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm3.vapPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 769
type: SIMPLE_ASSIGN
MatStm3._totMolFlo._$pDERNLSJac9._dummyVarNLSJac9[2] = 50.0 * MatStm3.liqPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9
*/
void Flowsheet_eqFunction_769(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,769};
  jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2] JACOBIAN_DIFF_VAR */ = (50.0) * (jacobian->tmpVars[3] /* MatStm3.liqPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 770
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac9._dummyVarNLSJac9[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2] + MatStm3.compMolFrac.SeedNLSJac9[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_770(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,770};
  jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[232] /* MatStm3.compMolFrac[2,2] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac9[2,2] SEED_VAR */) * (data->localData[0]->realVars[272] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 771
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac9._dummyVarNLSJac9[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2] + MatStm3.compMolFrac.SeedNLSJac9[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_771(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,771};
  jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[231] /* MatStm3.compMolFrac[2,1] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac9[2,1] SEED_VAR */) * (data->localData[0]->realVars[272] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 772
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac9._dummyVarNLSJac9 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac9[3,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac9[3,1] - MatStm3.K[1] * MatStm3.compMolFrac.SeedNLSJac9[2,1] else MatStm3.compMolFrac.SeedNLSJac9[2,1]
*/
void Flowsheet_eqFunction_772(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,772};
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_real tmp66;
  RELATIONHYSTERESIS(tmp63, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp65 = (modelica_boolean)tmp63;
  if(tmp65)
  {
    tmp66 = jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac9[3,1] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp64, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp66 = (tmp64?jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac9[3,1] SEED_VAR */ - ((data->localData[0]->realVars[190] /* MatStm3.K[1] variable */) * (jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac9[2,1] SEED_VAR */)):jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac9[2,1] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = tmp66;
  TRACE_POP
}

/*
equation index: 773
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac9._dummyVarNLSJac9 = MatStm3.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3,1] + MatStm3.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2,1]
*/
void Flowsheet_eqFunction_773(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,773};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 774
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac9._dummyVarNLSJac9 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac9[2,1] + MatStm3.compMolFrac.SeedNLSJac9[2,2] else MatStm3.compMolFrac.SeedNLSJac9[3,1] + MatStm3.compMolFrac.SeedNLSJac9[3,2]
*/
void Flowsheet_eqFunction_774(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,774};
  modelica_boolean tmp67;
  RELATIONHYSTERESIS(tmp67, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = (tmp67?jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac9[2,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac9[2,2] SEED_VAR */:jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac9[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac9[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 775
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac9._dummyVarNLSJac9 = MatStm3.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3,2] + MatStm3.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2,2]
*/
void Flowsheet_eqFunction_775(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,775};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 776
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac9._dummyVarNLSJac9 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac9[3,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac9[3,2] - MatStm3.K[2] * MatStm3.compMolFrac.SeedNLSJac9[2,2] else MatStm3.compMolFrac.SeedNLSJac9[2,2]
*/
void Flowsheet_eqFunction_776(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,776};
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_real tmp71;
  RELATIONHYSTERESIS(tmp68, 101325.0, data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp70 = (modelica_boolean)tmp68;
  if(tmp70)
  {
    tmp71 = jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac9[3,2] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp69, 101325.0, data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp71 = (tmp69?jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac9[3,2] SEED_VAR */ - ((data->localData[0]->realVars[191] /* MatStm3.K[2] variable */) * (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac9[2,2] SEED_VAR */)):jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac9[2,2] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = tmp71;
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


