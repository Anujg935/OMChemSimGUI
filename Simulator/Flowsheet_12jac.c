/* Jacobians 12 */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac0(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int Flowsheet_initialAnalyticJacobianNLSJac4(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,5,3,2,3,2};
  const int rowIndex[15] = {0,1,2,3,4,0,3,4,1,2,1,2,3,0,4};
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
  jacobian->sparsePattern.colorCols[3] = 1;
  jacobian->sparsePattern.colorCols[4] = 1;
  jacobian->sparsePattern.colorCols[1] = 2;
  jacobian->sparsePattern.colorCols[2] = 2;
  jacobian->sparsePattern.colorCols[0] = 3;
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
  const int colPtrIndex[1+5] = {0,5,2,3,2,3};
  const int rowIndex[15] = {0,1,2,3,4,3,4,0,1,2,1,2,0,3,4};
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
  jacobian->sparsePattern.colorCols[3] = 1;
  jacobian->sparsePattern.colorCols[4] = 1;
  jacobian->sparsePattern.colorCols[1] = 2;
  jacobian->sparsePattern.colorCols[2] = 2;
  jacobian->sparsePattern.colorCols[0] = 3;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac9(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.SeedNLSJac0[2] + MatStm2.compMolFrac.SeedNLSJac0[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_84(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,84};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac0[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */) * (data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.SeedNLSJac0[2] + MatStm2.compMolFrac.SeedNLSJac0[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_85(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,85};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac0[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */) * (data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 86
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = 0.01 * MatStm2.totMolFlo.SeedNLSJac0[2]
*/
void Flowsheet_eqFunction_86(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,86};
  jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac0[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 87
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0[2] = -MatStm2.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void Flowsheet_eqFunction_87(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,87};
  jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 88
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3] = 100.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[2]
*/
void Flowsheet_eqFunction_88(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,88};
  jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] + MatStm2.compMolFrac.SeedNLSJac0[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_89(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,89};
  jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */) * (data->localData[0]->realVars[188] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] + MatStm2.compMolFrac.SeedNLSJac0[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_90(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,90};
  jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */) * (data->localData[0]->realVars[188] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 91
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac0[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac0[2,2] + MatStm2.compMolFrac[1,2] * Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[2] * (-1.0 + MatStm2.K[2]) / (1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[2])) ^ 2.0 else MatStm2.compMolFrac.SeedNLSJac0[2,2]
*/
void Flowsheet_eqFunction_91(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,91};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  tmp2 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp2;
  if(tmp7)
  {
    tmp8 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */;
  }
  else
  {
    tmp3 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp5 = (modelica_boolean)tmp3;
    if(tmp5)
    {
      tmp4 = 1.0 + (data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[103] /* MatStm2.K[2] variable */);
      tmp6 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[144] /* MatStm2.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[103] /* MatStm2.K[2] variable */)),(tmp4 * tmp4),"(1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[2])) ^ 2.0");
    }
    else
    {
      tmp6 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */;
    }
    tmp8 = tmp6;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp8;
  TRACE_POP
}

/*
equation index: 92
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac0._dummyVarNLSJac0 = MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] + MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2]
*/
void Flowsheet_eqFunction_92(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,92};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 93
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm2.Pbubl then MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac0[3,1] + MatStm2.compMolFrac.SeedNLSJac0[3,2] else MatStm2.totMolFlo.SeedNLSJac0[2]
*/
void Flowsheet_eqFunction_93(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,93};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp10 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp12 = (tmp10?jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac0[2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp12;
  TRACE_POP
}

/*
equation index: 94
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac0._dummyVarNLSJac0 = MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] + MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1]
*/
void Flowsheet_eqFunction_94(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,94};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 95
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac0[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac0[2,1] + MatStm2.compMolFrac[1,1] * Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[2] * (-1.0 + MatStm2.K[1]) / (1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[1])) ^ 2.0 else MatStm2.compMolFrac.SeedNLSJac0[2,1]
*/
void Flowsheet_eqFunction_95(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,95};
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  tmp13 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp18 = (modelica_boolean)tmp13;
  if(tmp18)
  {
    tmp19 = jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */;
  }
  else
  {
    tmp14 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp16 = (modelica_boolean)tmp14;
    if(tmp16)
    {
      tmp15 = 1.0 + (data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[102] /* MatStm2.K[1] variable */);
      tmp17 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[143] /* MatStm2.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[102] /* MatStm2.K[1] variable */)),(tmp15 * tmp15),"(1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[1])) ^ 2.0");
    }
    else
    {
      tmp17 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */;
    }
    tmp19 = tmp17;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp19;
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
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo.SeedNLSJac1[2] + MatStm3.compMolFrac.SeedNLSJac1[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_138(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,138};
  jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac1[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */) * (data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo.SeedNLSJac1[2] + MatStm3.compMolFrac.SeedNLSJac1[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_139(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,139};
  jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac1[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */) * (data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1 = 0.01 * MatStm3.totMolFlo.SeedNLSJac1[2]
*/
void Flowsheet_eqFunction_140(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,140};
  jacobian->tmpVars[2] /* MatStm3.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac1[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1[1] = -MatStm3.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1
*/
void Flowsheet_eqFunction_141(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,141};
  jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[1] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm3.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
MatStm3._totMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3] = 100.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[1]
*/
void Flowsheet_eqFunction_142(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,142};
  jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] + MatStm3.compMolFrac.SeedNLSJac1[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_143(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,143};
  jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */) * (data->localData[0]->realVars[278] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] + MatStm3.compMolFrac.SeedNLSJac1[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_144(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,144};
  jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */) * (data->localData[0]->realVars[278] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac1._dummyVarNLSJac1 = MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] + MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1]
*/
void Flowsheet_eqFunction_145(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,145};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm3.Pbubl then MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac1[3,1] + MatStm3.compMolFrac.SeedNLSJac1[3,2] else MatStm3.totMolFlo.SeedNLSJac1[2]
*/
void Flowsheet_eqFunction_146(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,146};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_real tmp23;
  tmp20 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp22 = (modelica_boolean)tmp20;
  if(tmp22)
  {
    tmp23 = jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp21 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp23 = (tmp21?jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac1[2] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp23;
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac1._dummyVarNLSJac1 = MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] + MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2]
*/
void Flowsheet_eqFunction_147(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,147};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac1[3,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac1[2,2] + MatStm3.compMolFrac[1,2] * Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[1] * (-1.0 + MatStm3.K[2]) / (1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[2])) ^ 2.0 else MatStm3.compMolFrac.SeedNLSJac1[2,2]
*/
void Flowsheet_eqFunction_148(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,148};
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
  modelica_boolean tmp27;
  modelica_real tmp28;
  modelica_boolean tmp29;
  modelica_real tmp30;
  tmp24 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp29 = (modelica_boolean)tmp24;
  if(tmp29)
  {
    tmp30 = jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */;
  }
  else
  {
    tmp25 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp27 = (modelica_boolean)tmp25;
    if(tmp27)
    {
      tmp26 = 1.0 + (data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[193] /* MatStm3.K[2] variable */);
      tmp28 = jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[234] /* MatStm3.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[1] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[193] /* MatStm3.K[2] variable */)),(tmp26 * tmp26),"(1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[2])) ^ 2.0");
    }
    else
    {
      tmp28 = jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */;
    }
    tmp30 = tmp28;
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp30;
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac1[3,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac1[2,1] + MatStm3.compMolFrac[1,1] * Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[1] * (-1.0 + MatStm3.K[1]) / (1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[1])) ^ 2.0 else MatStm3.compMolFrac.SeedNLSJac1[2,1]
*/
void Flowsheet_eqFunction_149(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,149};
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  modelica_boolean tmp36;
  modelica_real tmp37;
  tmp31 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp36 = (modelica_boolean)tmp31;
  if(tmp36)
  {
    tmp37 = jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */;
  }
  else
  {
    tmp32 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp34 = (modelica_boolean)tmp32;
    if(tmp34)
    {
      tmp33 = 1.0 + (data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[192] /* MatStm3.K[1] variable */);
      tmp35 = jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[233] /* MatStm3.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[1] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[192] /* MatStm3.K[1] variable */)),(tmp33 * tmp33),"(1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[1])) ^ 2.0");
    }
    else
    {
      tmp35 = jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */;
    }
    tmp37 = tmp35;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp37;
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
MatStm4._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,1] = MatStm4.compMolFrac[2,1] * MatStm4.totMolFlo.SeedNLSJac3[2] + MatStm4.compMolFrac.SeedNLSJac3[2,1] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_289(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,289};
  jacobian->tmpVars[0] /* MatStm4.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac3[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */) * (data->localData[0]->realVars[364] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,2] = MatStm4.compMolFrac[2,2] * MatStm4.totMolFlo.SeedNLSJac3[2] + MatStm4.compMolFrac.SeedNLSJac3[2,2] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_290(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,290};
  jacobian->tmpVars[1] /* MatStm4.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac3[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */) * (data->localData[0]->realVars[364] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
MatStm4._liqPhasMolFrac._$pDERNLSJac3._dummyVarNLSJac3 = 0.02 * MatStm4.totMolFlo.SeedNLSJac3[2]
*/
void Flowsheet_eqFunction_291(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,291};
  jacobian->tmpVars[2] /* MatStm4.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (0.02) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac3[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
MatStm4._vapPhasMolFrac._$pDERNLSJac3._dummyVarNLSJac3 = -MatStm4.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3
*/
void Flowsheet_eqFunction_292(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,292};
  jacobian->tmpVars[3] /* MatStm4.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm4.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
MatStm4._totMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3] = 50.0 * MatStm4.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3
*/
void Flowsheet_eqFunction_293(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,293};
  jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_DIFF_VAR */ = (50.0) * (jacobian->tmpVars[3] /* MatStm4.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,1] = MatStm4.compMolFrac[3,1] * MatStm4.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] + MatStm4.compMolFrac.SeedNLSJac3[3,1] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_294(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,294};
  jacobian->tmpVars[5] /* MatStm4.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */) * (data->localData[0]->realVars[365] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,2] = MatStm4.compMolFrac[3,2] * MatStm4.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] + MatStm4.compMolFrac.SeedNLSJac3[3,2] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_295(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,295};
  jacobian->tmpVars[6] /* MatStm4.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */) * (data->localData[0]->realVars[365] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac3[3,2] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac3[2,2] + MatStm4.compMolFrac[1,2] * MatStm4.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 * (-1.0 + MatStm4.K[2]) / (1.0 + MatStm4.vapPhasMolFrac * (-1.0 + MatStm4.K[2])) ^ 2.0 else MatStm4.compMolFrac.SeedNLSJac3[2,2]
*/
void Flowsheet_eqFunction_296(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,296};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_real tmp40;
  modelica_boolean tmp41;
  modelica_real tmp42;
  modelica_boolean tmp43;
  modelica_real tmp44;
  tmp38 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp43 = (modelica_boolean)tmp38;
  if(tmp43)
  {
    tmp44 = jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */;
  }
  else
  {
    tmp39 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp41 = (modelica_boolean)tmp39;
    if(tmp41)
    {
      tmp40 = 1.0 + (data->localData[0]->realVars[367] /* MatStm4.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[283] /* MatStm4.K[2] variable */);
      tmp42 = jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[322] /* MatStm4.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* MatStm4.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[283] /* MatStm4.K[2] variable */)),(tmp40 * tmp40),"(1.0 + MatStm4.vapPhasMolFrac * (-1.0 + MatStm4.K[2])) ^ 2.0");
    }
    else
    {
      tmp42 = jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */;
    }
    tmp44 = tmp42;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp44;
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac3._dummyVarNLSJac3 = MatStm4.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] + MatStm4.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2]
*/
void Flowsheet_eqFunction_297(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,297};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm4.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm4.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm4.Pbubl then MatStm4.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac3[3,1] + MatStm4.compMolFrac.SeedNLSJac3[3,2] else MatStm4.totMolFlo.SeedNLSJac3[2]
*/
void Flowsheet_eqFunction_298(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,298};
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_real tmp48;
  tmp45 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp47 = (modelica_boolean)tmp45;
  if(tmp47)
  {
    tmp48 = jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp46 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp48 = (tmp46?jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac3[2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp48;
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac3[3,1] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac3[2,1] + MatStm4.compMolFrac[1,1] * MatStm4.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 * (-1.0 + MatStm4.K[1]) / (1.0 + MatStm4.vapPhasMolFrac * (-1.0 + MatStm4.K[1])) ^ 2.0 else MatStm4.compMolFrac.SeedNLSJac3[2,1]
*/
void Flowsheet_eqFunction_299(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,299};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_real tmp51;
  modelica_boolean tmp52;
  modelica_real tmp53;
  modelica_boolean tmp54;
  modelica_real tmp55;
  tmp49 = GreaterEq(101325.0,data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */);
  tmp54 = (modelica_boolean)tmp49;
  if(tmp54)
  {
    tmp55 = jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */;
  }
  else
  {
    tmp50 = GreaterEq(101325.0,data->localData[0]->realVars[288] /* MatStm4.Pdew variable */);
    tmp52 = (modelica_boolean)tmp50;
    if(tmp52)
    {
      tmp51 = 1.0 + (data->localData[0]->realVars[367] /* MatStm4.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[282] /* MatStm4.K[1] variable */);
      tmp53 = jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[321] /* MatStm4.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* MatStm4.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[282] /* MatStm4.K[1] variable */)),(tmp51 * tmp51),"(1.0 + MatStm4.vapPhasMolFrac * (-1.0 + MatStm4.K[1])) ^ 2.0");
    }
    else
    {
      tmp53 = jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */;
    }
    tmp55 = tmp53;
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp55;
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac3._dummyVarNLSJac3 = MatStm4.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] + MatStm4.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1]
*/
void Flowsheet_eqFunction_300(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,300};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm4.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm4.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */;
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
MatStm5._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,1] = MatStm5.compMolFrac[2,1] * MatStm5.totMolFlo.SeedNLSJac4[2] + MatStm5.compMolFrac.SeedNLSJac4[2,1] * MatStm5.totMolFlo[2]
*/
void Flowsheet_eqFunction_348(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,348};
  jacobian->tmpVars[0] /* MatStm5.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac4[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */) * (data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,2] = MatStm5.compMolFrac[2,2] * MatStm5.totMolFlo.SeedNLSJac4[2] + MatStm5.compMolFrac.SeedNLSJac4[2,2] * MatStm5.totMolFlo[2]
*/
void Flowsheet_eqFunction_349(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,349};
  jacobian->tmpVars[1] /* MatStm5.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac4[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */) * (data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
MatStm5._liqPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4 = 0.02 * MatStm5.totMolFlo.SeedNLSJac4[2]
*/
void Flowsheet_eqFunction_350(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,350};
  jacobian->tmpVars[2] /* MatStm5.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (0.02) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac4[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
MatStm5._vapPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4 = -MatStm5.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4
*/
void Flowsheet_eqFunction_351(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,351};
  jacobian->tmpVars[3] /* MatStm5.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm5.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
MatStm5._totMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3] = 50.0 * MatStm5.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4
*/
void Flowsheet_eqFunction_352(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,352};
  jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */ = (50.0) * (jacobian->tmpVars[3] /* MatStm5.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,1] = MatStm5.compMolFrac[3,1] * MatStm5.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] + MatStm5.compMolFrac.SeedNLSJac4[3,1] * MatStm5.totMolFlo[3]
*/
void Flowsheet_eqFunction_353(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,353};
  jacobian->tmpVars[5] /* MatStm5.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */) * (data->localData[0]->realVars[453] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,2] = MatStm5.compMolFrac[3,2] * MatStm5.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] + MatStm5.compMolFrac.SeedNLSJac4[3,2] * MatStm5.totMolFlo[3]
*/
void Flowsheet_eqFunction_354(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,354};
  jacobian->tmpVars[6] /* MatStm5.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */) * (data->localData[0]->realVars[453] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac4[3,1] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac4[2,1] + MatStm5.compMolFrac[1,1] * MatStm5.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 * (-1.0 + MatStm5.K[1]) / (1.0 + MatStm5.vapPhasMolFrac * (-1.0 + MatStm5.K[1])) ^ 2.0 else MatStm5.compMolFrac.SeedNLSJac4[2,1]
*/
void Flowsheet_eqFunction_355(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,355};
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_real tmp58;
  modelica_boolean tmp59;
  modelica_real tmp60;
  modelica_boolean tmp61;
  modelica_real tmp62;
  tmp56 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp61 = (modelica_boolean)tmp56;
  if(tmp61)
  {
    tmp62 = jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */;
  }
  else
  {
    tmp57 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp59 = (modelica_boolean)tmp57;
    if(tmp59)
    {
      tmp58 = 1.0 + (data->localData[0]->realVars[455] /* MatStm5.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[370] /* MatStm5.K[1] variable */);
      tmp60 = jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* MatStm5.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[370] /* MatStm5.K[1] variable */)),(tmp58 * tmp58),"(1.0 + MatStm5.vapPhasMolFrac * (-1.0 + MatStm5.K[1])) ^ 2.0");
    }
    else
    {
      tmp60 = jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */;
    }
    tmp62 = tmp60;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp62;
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac4._dummyVarNLSJac4 = MatStm5.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] + MatStm5.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2]
*/
void Flowsheet_eqFunction_356(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,356};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm5.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm5.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac4[3,2] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac4[2,2] + MatStm5.compMolFrac[1,2] * MatStm5.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 * (-1.0 + MatStm5.K[2]) / (1.0 + MatStm5.vapPhasMolFrac * (-1.0 + MatStm5.K[2])) ^ 2.0 else MatStm5.compMolFrac.SeedNLSJac4[2,2]
*/
void Flowsheet_eqFunction_357(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,357};
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_real tmp65;
  modelica_boolean tmp66;
  modelica_real tmp67;
  modelica_boolean tmp68;
  modelica_real tmp69;
  tmp63 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp68 = (modelica_boolean)tmp63;
  if(tmp68)
  {
    tmp69 = jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */;
  }
  else
  {
    tmp64 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp66 = (modelica_boolean)tmp64;
    if(tmp66)
    {
      tmp65 = 1.0 + (data->localData[0]->realVars[455] /* MatStm5.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[371] /* MatStm5.K[2] variable */);
      tmp67 = jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* MatStm5.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[371] /* MatStm5.K[2] variable */)),(tmp65 * tmp65),"(1.0 + MatStm5.vapPhasMolFrac * (-1.0 + MatStm5.K[2])) ^ 2.0");
    }
    else
    {
      tmp67 = jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */;
    }
    tmp69 = tmp67;
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp69;
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm5.Pbubl then MatStm5.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac4[3,1] + MatStm5.compMolFrac.SeedNLSJac4[3,2] else MatStm5.totMolFlo.SeedNLSJac4[2]
*/
void Flowsheet_eqFunction_358(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,358};
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  modelica_real tmp73;
  tmp70 = GreaterEq(101325.0,data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */);
  tmp72 = (modelica_boolean)tmp70;
  if(tmp72)
  {
    tmp73 = jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp71 = GreaterEq(101325.0,data->localData[0]->realVars[376] /* MatStm5.Pdew variable */);
    tmp73 = (tmp71?jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac4[2] SEED_VAR */);
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp73;
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac4._dummyVarNLSJac4 = MatStm5.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] + MatStm5.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1]
*/
void Flowsheet_eqFunction_359(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,359};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm5.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm5.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */;
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
MatStm2._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.SeedNLSJac5[2] + MatStm2.compMolFrac.SeedNLSJac5[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_488(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,488};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac5[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */) * (data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.SeedNLSJac5[2] + MatStm2.compMolFrac.SeedNLSJac5[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_489(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,489};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac5[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */) * (data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac5._dummyVarNLSJac5 = 0.01 * MatStm2.totMolFlo.SeedNLSJac5[2]
*/
void Flowsheet_eqFunction_490(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,490};
  jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac5[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 491
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac5._dummyVarNLSJac5[2] = -MatStm2.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5
*/
void Flowsheet_eqFunction_491(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,491};
  jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 492
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac5._dummyVarNLSJac5[3] = 100.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[2]
*/
void Flowsheet_eqFunction_492(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,492};
  jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 493
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] + MatStm2.compMolFrac.SeedNLSJac5[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_493(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,493};
  jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */) * (data->localData[0]->realVars[188] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 494
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] + MatStm2.compMolFrac.SeedNLSJac5[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_494(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,494};
  jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */) * (data->localData[0]->realVars[188] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac5._dummyVarNLSJac5 = MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] + MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1]
*/
void Flowsheet_eqFunction_495(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,495};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac5[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac5[2,1] + MatStm2.compMolFrac[1,1] * Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[2] * (-1.0 + MatStm2.K[1]) / (1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[1])) ^ 2.0 else MatStm2.compMolFrac.SeedNLSJac5[2,1]
*/
void Flowsheet_eqFunction_496(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,496};
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  modelica_real tmp76;
  modelica_boolean tmp77;
  modelica_real tmp78;
  modelica_boolean tmp79;
  modelica_real tmp80;
  tmp74 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp79 = (modelica_boolean)tmp74;
  if(tmp79)
  {
    tmp80 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */;
  }
  else
  {
    tmp75 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp77 = (modelica_boolean)tmp75;
    if(tmp77)
    {
      tmp76 = 1.0 + (data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[102] /* MatStm2.K[1] variable */);
      tmp78 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[143] /* MatStm2.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[102] /* MatStm2.K[1] variable */)),(tmp76 * tmp76),"(1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[1])) ^ 2.0");
    }
    else
    {
      tmp78 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */;
    }
    tmp80 = tmp78;
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp80;
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= MatStm2.Pbubl then MatStm2.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac5[3,1] + MatStm2.compMolFrac.SeedNLSJac5[3,2] else MatStm2.totMolFlo.SeedNLSJac5[2]
*/
void Flowsheet_eqFunction_497(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,497};
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  modelica_real tmp84;
  tmp81 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp83 = (modelica_boolean)tmp81;
  if(tmp83)
  {
    tmp84 = jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp82 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp84 = (tmp82?jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac5[2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp84;
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac5._dummyVarNLSJac5 = MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] + MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2]
*/
void Flowsheet_eqFunction_498(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,498};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac5[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac5[2,2] + MatStm2.compMolFrac[1,2] * Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[2] * (-1.0 + MatStm2.K[2]) / (1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[2])) ^ 2.0 else MatStm2.compMolFrac.SeedNLSJac5[2,2]
*/
void Flowsheet_eqFunction_499(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,499};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  modelica_real tmp87;
  modelica_boolean tmp88;
  modelica_real tmp89;
  modelica_boolean tmp90;
  modelica_real tmp91;
  tmp85 = GreaterEq(101325.0,data->localData[0]->realVars[108] /* MatStm2.Pbubl variable */);
  tmp90 = (modelica_boolean)tmp85;
  if(tmp90)
  {
    tmp91 = jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */;
  }
  else
  {
    tmp86 = GreaterEq(101325.0,data->localData[0]->realVars[109] /* MatStm2.Pdew variable */);
    tmp88 = (modelica_boolean)tmp86;
    if(tmp88)
    {
      tmp87 = 1.0 + (data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[103] /* MatStm2.K[2] variable */);
      tmp89 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[144] /* MatStm2.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[103] /* MatStm2.K[2] variable */)),(tmp87 * tmp87),"(1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[2])) ^ 2.0");
    }
    else
    {
      tmp89 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */;
    }
    tmp91 = tmp89;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp91;
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
MatStm3._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo.SeedNLSJac6[2] + MatStm3.compMolFrac.SeedNLSJac6[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_542(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,542};
  jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac6[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac6[2,2] SEED_VAR */) * (data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo.SeedNLSJac6[2] + MatStm3.compMolFrac.SeedNLSJac6[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_543(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,543};
  jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac6[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac6[2,1] SEED_VAR */) * (data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 544
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac._$pDERNLSJac6._dummyVarNLSJac6 = 0.01 * MatStm3.totMolFlo.SeedNLSJac6[2]
*/
void Flowsheet_eqFunction_544(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,544};
  jacobian->tmpVars[2] /* MatStm3.liqPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac6[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac6._dummyVarNLSJac6[1] = -MatStm3.liqPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6
*/
void Flowsheet_eqFunction_545(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,545};
  jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[1] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm3.liqPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 546
type: SIMPLE_ASSIGN
MatStm3._totMolFlo._$pDERNLSJac6._dummyVarNLSJac6[3] = 100.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[1]
*/
void Flowsheet_eqFunction_546(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,546};
  jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 547
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] + MatStm3.compMolFrac.SeedNLSJac6[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_547(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,547};
  jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac6[3,2] SEED_VAR */) * (data->localData[0]->realVars[278] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 548
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] + MatStm3.compMolFrac.SeedNLSJac6[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_548(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,548};
  jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac6[3,1] SEED_VAR */) * (data->localData[0]->realVars[278] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac6._dummyVarNLSJac6 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac6[3,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac6[2,1] + MatStm3.compMolFrac[1,1] * Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[1] * (-1.0 + MatStm3.K[1]) / (1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[1])) ^ 2.0 else MatStm3.compMolFrac.SeedNLSJac6[2,1]
*/
void Flowsheet_eqFunction_549(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,549};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  modelica_real tmp94;
  modelica_boolean tmp95;
  modelica_real tmp96;
  modelica_boolean tmp97;
  modelica_real tmp98;
  tmp92 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp97 = (modelica_boolean)tmp92;
  if(tmp97)
  {
    tmp98 = jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac6[3,1] SEED_VAR */;
  }
  else
  {
    tmp93 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp95 = (modelica_boolean)tmp93;
    if(tmp95)
    {
      tmp94 = 1.0 + (data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[192] /* MatStm3.K[1] variable */);
      tmp96 = jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac6[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[233] /* MatStm3.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[1] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[192] /* MatStm3.K[1] variable */)),(tmp94 * tmp94),"(1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[1])) ^ 2.0");
    }
    else
    {
      tmp96 = jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac6[2,1] SEED_VAR */;
    }
    tmp98 = tmp96;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = tmp98;
  TRACE_POP
}

/*
equation index: 550
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac6._dummyVarNLSJac6 = MatStm3.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,1] + MatStm3.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,1]
*/
void Flowsheet_eqFunction_550(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,550};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 551
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac6._dummyVarNLSJac6 = if 101325.0 >= MatStm3.Pbubl then MatStm3.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac6[3,1] + MatStm3.compMolFrac.SeedNLSJac6[3,2] else MatStm3.totMolFlo.SeedNLSJac6[2]
*/
void Flowsheet_eqFunction_551(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,551};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  modelica_real tmp102;
  tmp99 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp101 = (modelica_boolean)tmp99;
  if(tmp101)
  {
    tmp102 = jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp100 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp102 = (tmp100?jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac6[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac6[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac6[2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = tmp102;
  TRACE_POP
}

/*
equation index: 552
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac6._dummyVarNLSJac6 = MatStm3.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,2] + MatStm3.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,2]
*/
void Flowsheet_eqFunction_552(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,552};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 553
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac6._dummyVarNLSJac6 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac6[3,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac6[2,2] + MatStm3.compMolFrac[1,2] * Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[1] * (-1.0 + MatStm3.K[2]) / (1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[2])) ^ 2.0 else MatStm3.compMolFrac.SeedNLSJac6[2,2]
*/
void Flowsheet_eqFunction_553(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,553};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  modelica_real tmp105;
  modelica_boolean tmp106;
  modelica_real tmp107;
  modelica_boolean tmp108;
  modelica_real tmp109;
  tmp103 = GreaterEq(101325.0,data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */);
  tmp108 = (modelica_boolean)tmp103;
  if(tmp108)
  {
    tmp109 = jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac6[3,2] SEED_VAR */;
  }
  else
  {
    tmp104 = GreaterEq(101325.0,data->localData[0]->realVars[199] /* MatStm3.Pdew variable */);
    tmp106 = (modelica_boolean)tmp104;
    if(tmp106)
    {
      tmp105 = 1.0 + (data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[193] /* MatStm3.K[2] variable */);
      tmp107 = jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac6[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[234] /* MatStm3.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[1] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[193] /* MatStm3.K[2] variable */)),(tmp105 * tmp105),"(1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[2])) ^ 2.0");
    }
    else
    {
      tmp107 = jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac6[2,2] SEED_VAR */;
    }
    tmp109 = tmp107;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = tmp109;
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
MatStm4._compMolFlo._$pDERNLSJac8._dummyVarNLSJac8[3,1] = MatStm4.compMolFrac[3,1] * MatStm4.totMolFlo.SeedNLSJac8[3] + MatStm4.compMolFrac.SeedNLSJac8[3,1] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_706(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,706};
  jacobian->tmpVars[0] /* MatStm4.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac8[3] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac8[3,1] SEED_VAR */) * (data->localData[0]->realVars[365] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 707
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac8._dummyVarNLSJac8[3,2] = MatStm4.compMolFrac[3,2] * MatStm4.totMolFlo.SeedNLSJac8[3] + MatStm4.compMolFrac.SeedNLSJac8[3,2] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_707(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,707};
  jacobian->tmpVars[1] /* MatStm4.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac8[3] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac8[3,2] SEED_VAR */) * (data->localData[0]->realVars[365] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 708
type: SIMPLE_ASSIGN
MatStm4._vapPhasMolFrac._$pDERNLSJac8._dummyVarNLSJac8 = 0.02 * MatStm4.totMolFlo.SeedNLSJac8[3]
*/
void Flowsheet_eqFunction_708(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,708};
  jacobian->tmpVars[2] /* MatStm4.vapPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (0.02) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac8[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 709
type: SIMPLE_ASSIGN
MatStm4._liqPhasMolFrac._$pDERNLSJac8._dummyVarNLSJac8 = -MatStm4.vapPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8
*/
void Flowsheet_eqFunction_709(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,709};
  jacobian->tmpVars[3] /* MatStm4.liqPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm4.vapPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 710
type: SIMPLE_ASSIGN
MatStm4._totMolFlo._$pDERNLSJac8._dummyVarNLSJac8[2] = 50.0 * MatStm4.liqPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8
*/
void Flowsheet_eqFunction_710(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,710};
  jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2] JACOBIAN_DIFF_VAR */ = (50.0) * (jacobian->tmpVars[3] /* MatStm4.liqPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 711
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac8._dummyVarNLSJac8[2,1] = MatStm4.compMolFrac[2,1] * MatStm4.totMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2] + MatStm4.compMolFrac.SeedNLSJac8[2,1] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_711(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,711};
  jacobian->tmpVars[5] /* MatStm4.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */) * (jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac8[2,1] SEED_VAR */) * (data->localData[0]->realVars[364] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 712
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac8._dummyVarNLSJac8[2,2] = MatStm4.compMolFrac[2,2] * MatStm4.totMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2] + MatStm4.compMolFrac.SeedNLSJac8[2,2] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_712(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,712};
  jacobian->tmpVars[6] /* MatStm4.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */) * (jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac8[2,2] SEED_VAR */) * (data->localData[0]->realVars[364] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 713
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac8._dummyVarNLSJac8 = if 101325.0 >= MatStm4.Pbubl then MatStm4.totMolFlo.SeedNLSJac8[3] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac8[3,1] + MatStm4.compMolFrac.SeedNLSJac8[3,2] else MatStm4.totMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2]
*/
void Flowsheet_eqFunction_713(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,713};
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  modelica_real tmp113;
  RELATIONHYSTERESIS(tmp110, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp112 = (modelica_boolean)tmp110;
  if(tmp112)
  {
    tmp113 = jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac8[3] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp111, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp113 = (tmp111?jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac8[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac8[3,2] SEED_VAR */:jacobian->tmpVars[4] /* MatStm4.totMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2] JACOBIAN_DIFF_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = tmp113;
  TRACE_POP
}

/*
equation index: 714
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac8._dummyVarNLSJac8 = MatStm4.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[3,2] + MatStm4.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2,2]
*/
void Flowsheet_eqFunction_714(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,714};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm4.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm4.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 715
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac8._dummyVarNLSJac8 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac8[3,2] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac8[2,2] + MatStm4.compMolFrac[1,2] * MatStm4.vapPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 * (-1.0 + MatStm4.K[2]) / (1.0 + MatStm4.vapPhasMolFrac * (-1.0 + MatStm4.K[2])) ^ 2.0 else MatStm4.compMolFrac.SeedNLSJac8[2,2]
*/
void Flowsheet_eqFunction_715(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,715};
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  modelica_real tmp116;
  modelica_boolean tmp117;
  modelica_real tmp118;
  modelica_boolean tmp119;
  modelica_real tmp120;
  RELATIONHYSTERESIS(tmp114, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp119 = (modelica_boolean)tmp114;
  if(tmp119)
  {
    tmp120 = jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac8[3,2] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp115, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp117 = (modelica_boolean)tmp115;
    if(tmp117)
    {
      tmp116 = 1.0 + (data->localData[0]->realVars[367] /* MatStm4.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[283] /* MatStm4.K[2] variable */);
      tmp118 = jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac8[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[322] /* MatStm4.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[2] /* MatStm4.vapPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[283] /* MatStm4.K[2] variable */)),(tmp116 * tmp116),"(1.0 + MatStm4.vapPhasMolFrac * (-1.0 + MatStm4.K[2])) ^ 2.0");
    }
    else
    {
      tmp118 = jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac8[2,2] SEED_VAR */;
    }
    tmp120 = tmp118;
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = tmp120;
  TRACE_POP
}

/*
equation index: 716
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac8._dummyVarNLSJac8 = MatStm4.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[3,1] + MatStm4.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2,1]
*/
void Flowsheet_eqFunction_716(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,716};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm4.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm4.compMolFlo.$pDERNLSJac8.dummyVarNLSJac8[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 717
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac8._dummyVarNLSJac8 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac8[3,1] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac8[2,1] + MatStm4.compMolFrac[1,1] * MatStm4.vapPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 * (-1.0 + MatStm4.K[1]) / (1.0 + MatStm4.vapPhasMolFrac * (-1.0 + MatStm4.K[1])) ^ 2.0 else MatStm4.compMolFrac.SeedNLSJac8[2,1]
*/
void Flowsheet_eqFunction_717(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,717};
  modelica_boolean tmp121;
  modelica_boolean tmp122;
  modelica_real tmp123;
  modelica_boolean tmp124;
  modelica_real tmp125;
  modelica_boolean tmp126;
  modelica_real tmp127;
  RELATIONHYSTERESIS(tmp121, 101325.0, data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, 4, GreaterEq);
  tmp126 = (modelica_boolean)tmp121;
  if(tmp126)
  {
    tmp127 = jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac8[3,1] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp122, 101325.0, data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, 5, GreaterEq);
    tmp124 = (modelica_boolean)tmp122;
    if(tmp124)
    {
      tmp123 = 1.0 + (data->localData[0]->realVars[367] /* MatStm4.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[282] /* MatStm4.K[1] variable */);
      tmp125 = jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac8[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[321] /* MatStm4.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[2] /* MatStm4.vapPhasMolFrac.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[282] /* MatStm4.K[1] variable */)),(tmp123 * tmp123),"(1.0 + MatStm4.vapPhasMolFrac * (-1.0 + MatStm4.K[1])) ^ 2.0");
    }
    else
    {
      tmp125 = jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac8[2,1] SEED_VAR */;
    }
    tmp127 = tmp125;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac8.dummyVarNLSJac8 JACOBIAN_VAR */ = tmp127;
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
MatStm5._compMolFlo._$pDERNLSJac9._dummyVarNLSJac9[2,1] = MatStm5.compMolFrac[2,1] * MatStm5.totMolFlo.SeedNLSJac9[2] + MatStm5.compMolFrac.SeedNLSJac9[2,1] * MatStm5.totMolFlo[2]
*/
void Flowsheet_eqFunction_765(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,765};
  jacobian->tmpVars[0] /* MatStm5.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac9[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac9[2,1] SEED_VAR */) * (data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 766
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac9._dummyVarNLSJac9[2,2] = MatStm5.compMolFrac[2,2] * MatStm5.totMolFlo.SeedNLSJac9[2] + MatStm5.compMolFrac.SeedNLSJac9[2,2] * MatStm5.totMolFlo[2]
*/
void Flowsheet_eqFunction_766(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,766};
  jacobian->tmpVars[1] /* MatStm5.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac9[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac9[2,2] SEED_VAR */) * (data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 767
type: SIMPLE_ASSIGN
MatStm5._liqPhasMolFrac._$pDERNLSJac9._dummyVarNLSJac9 = 0.02 * MatStm5.totMolFlo.SeedNLSJac9[2]
*/
void Flowsheet_eqFunction_767(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,767};
  jacobian->tmpVars[2] /* MatStm5.liqPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (0.02) * (jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac9[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 768
type: SIMPLE_ASSIGN
MatStm5._vapPhasMolFrac._$pDERNLSJac9._dummyVarNLSJac9 = -MatStm5.liqPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9
*/
void Flowsheet_eqFunction_768(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,768};
  jacobian->tmpVars[3] /* MatStm5.vapPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm5.liqPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 769
type: SIMPLE_ASSIGN
MatStm5._totMolFlo._$pDERNLSJac9._dummyVarNLSJac9[3] = 50.0 * MatStm5.vapPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9
*/
void Flowsheet_eqFunction_769(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,769};
  jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3] JACOBIAN_DIFF_VAR */ = (50.0) * (jacobian->tmpVars[3] /* MatStm5.vapPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 770
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac9._dummyVarNLSJac9[3,1] = MatStm5.compMolFrac[3,1] * MatStm5.totMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3] + MatStm5.compMolFrac.SeedNLSJac9[3,1] * MatStm5.totMolFlo[3]
*/
void Flowsheet_eqFunction_770(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,770};
  jacobian->tmpVars[5] /* MatStm5.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac9[3,1] SEED_VAR */) * (data->localData[0]->realVars[453] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 771
type: SIMPLE_ASSIGN
MatStm5._compMolFlo._$pDERNLSJac9._dummyVarNLSJac9[3,2] = MatStm5.compMolFrac[3,2] * MatStm5.totMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3] + MatStm5.compMolFrac.SeedNLSJac9[3,2] * MatStm5.totMolFlo[3]
*/
void Flowsheet_eqFunction_771(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,771};
  jacobian->tmpVars[6] /* MatStm5.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac9[3,2] SEED_VAR */) * (data->localData[0]->realVars[453] /* MatStm5.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 772
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac9._dummyVarNLSJac9 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac9[3,2] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac9[2,2] + MatStm5.compMolFrac[1,2] * MatStm5.vapPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 * (-1.0 + MatStm5.K[2]) / (1.0 + MatStm5.vapPhasMolFrac * (-1.0 + MatStm5.K[2])) ^ 2.0 else MatStm5.compMolFrac.SeedNLSJac9[2,2]
*/
void Flowsheet_eqFunction_772(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,772};
  modelica_boolean tmp128;
  modelica_boolean tmp129;
  modelica_real tmp130;
  modelica_boolean tmp131;
  modelica_real tmp132;
  modelica_boolean tmp133;
  modelica_real tmp134;
  RELATIONHYSTERESIS(tmp128, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp133 = (modelica_boolean)tmp128;
  if(tmp133)
  {
    tmp134 = jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac9[3,2] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp129, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp131 = (modelica_boolean)tmp129;
    if(tmp131)
    {
      tmp130 = 1.0 + (data->localData[0]->realVars[455] /* MatStm5.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[371] /* MatStm5.K[2] variable */);
      tmp132 = jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac9[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* MatStm5.vapPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[371] /* MatStm5.K[2] variable */)),(tmp130 * tmp130),"(1.0 + MatStm5.vapPhasMolFrac * (-1.0 + MatStm5.K[2])) ^ 2.0");
    }
    else
    {
      tmp132 = jacobian->seedVars[4] /* MatStm5.compMolFrac.SeedNLSJac9[2,2] SEED_VAR */;
    }
    tmp134 = tmp132;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = tmp134;
  TRACE_POP
}

/*
equation index: 773
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac9._dummyVarNLSJac9 = MatStm5.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3,2] + MatStm5.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2,2]
*/
void Flowsheet_eqFunction_773(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,773};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm5.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm5.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 774
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac9._dummyVarNLSJac9 = if 101325.0 >= MatStm5.Pbubl then MatStm5.totMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac9[3,1] + MatStm5.compMolFrac.SeedNLSJac9[3,2] else MatStm5.totMolFlo.SeedNLSJac9[2]
*/
void Flowsheet_eqFunction_774(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,774};
  modelica_boolean tmp135;
  modelica_boolean tmp136;
  modelica_boolean tmp137;
  modelica_real tmp138;
  RELATIONHYSTERESIS(tmp135, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp137 = (modelica_boolean)tmp135;
  if(tmp137)
  {
    tmp138 = jacobian->tmpVars[4] /* MatStm5.totMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp136, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp138 = (tmp136?jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac9[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm5.compMolFrac.SeedNLSJac9[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm5.totMolFlo.SeedNLSJac9[2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = tmp138;
  TRACE_POP
}

/*
equation index: 775
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac9._dummyVarNLSJac9 = MatStm5.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3,1] + MatStm5.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2,1]
*/
void Flowsheet_eqFunction_775(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,775};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm5.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm5.compMolFlo.$pDERNLSJac9.dummyVarNLSJac9[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 776
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac9._dummyVarNLSJac9 = if 101325.0 >= MatStm5.Pbubl then MatStm5.compMolFrac.SeedNLSJac9[3,1] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMolFrac.SeedNLSJac9[2,1] + MatStm5.compMolFrac[1,1] * MatStm5.vapPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 * (-1.0 + MatStm5.K[1]) / (1.0 + MatStm5.vapPhasMolFrac * (-1.0 + MatStm5.K[1])) ^ 2.0 else MatStm5.compMolFrac.SeedNLSJac9[2,1]
*/
void Flowsheet_eqFunction_776(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,776};
  modelica_boolean tmp139;
  modelica_boolean tmp140;
  modelica_real tmp141;
  modelica_boolean tmp142;
  modelica_real tmp143;
  modelica_boolean tmp144;
  modelica_real tmp145;
  RELATIONHYSTERESIS(tmp139, 101325.0, data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, 2, GreaterEq);
  tmp144 = (modelica_boolean)tmp139;
  if(tmp144)
  {
    tmp145 = jacobian->seedVars[2] /* MatStm5.compMolFrac.SeedNLSJac9[3,1] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp140, 101325.0, data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, 3, GreaterEq);
    tmp142 = (modelica_boolean)tmp140;
    if(tmp142)
    {
      tmp141 = 1.0 + (data->localData[0]->realVars[455] /* MatStm5.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[370] /* MatStm5.K[1] variable */);
      tmp143 = jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac9[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* MatStm5.vapPhasMolFrac.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[370] /* MatStm5.K[1] variable */)),(tmp141 * tmp141),"(1.0 + MatStm5.vapPhasMolFrac * (-1.0 + MatStm5.K[1])) ^ 2.0");
    }
    else
    {
      tmp143 = jacobian->seedVars[1] /* MatStm5.compMolFrac.SeedNLSJac9[2,1] SEED_VAR */;
    }
    tmp145 = tmp143;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac9.dummyVarNLSJac9 JACOBIAN_VAR */ = tmp145;
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


