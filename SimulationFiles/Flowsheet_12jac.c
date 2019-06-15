/* Jacobians 10 */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac0(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {1,3,5,4,5,6,4,5,6,0,1,4,2,3,4,2,3,4,0,1,4};
  int i = 0;
  
  jacobian->sizeCols = 7;
  jacobian->sizeRows = 7;
  jacobian->sizeTmpVars = 16;
  jacobian->seedVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(16,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((7+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(21*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 21;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(7*sizeof(int));
  jacobian->sparsePattern.maxColors = 7;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (7+1)*sizeof(int));
  
  for(i=2;i<7+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 21*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[6] = 1;
  jacobian->sparsePattern.colorCols[5] = 2;
  jacobian->sparsePattern.colorCols[4] = 3;
  jacobian->sparsePattern.colorCols[3] = 4;
  jacobian->sparsePattern.colorCols[2] = 5;
  jacobian->sparsePattern.colorCols[1] = 6;
  jacobian->sparsePattern.colorCols[0] = 7;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac1(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {0,3,5,3,4,6,2,4,5,3,4,6,2,4,5,0,1,4,0,1,4};
  int i = 0;
  
  jacobian->sizeCols = 7;
  jacobian->sizeRows = 7;
  jacobian->sizeTmpVars = 16;
  jacobian->seedVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(16,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((7+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(21*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 21;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(7*sizeof(int));
  jacobian->sparsePattern.maxColors = 7;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (7+1)*sizeof(int));
  
  for(i=2;i<7+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 21*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[6] = 1;
  jacobian->sparsePattern.colorCols[5] = 2;
  jacobian->sparsePattern.colorCols[4] = 3;
  jacobian->sparsePattern.colorCols[3] = 4;
  jacobian->sparsePattern.colorCols[2] = 5;
  jacobian->sparsePattern.colorCols[1] = 6;
  jacobian->sparsePattern.colorCols[0] = 7;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac2(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {2,3,5,4,5,6,4,5,6,0,3,4,1,2,4,1,2,4,0,3,4};
  int i = 0;
  
  jacobian->sizeCols = 7;
  jacobian->sizeRows = 7;
  jacobian->sizeTmpVars = 16;
  jacobian->seedVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(16,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((7+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(21*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 21;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(7*sizeof(int));
  jacobian->sparsePattern.maxColors = 7;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (7+1)*sizeof(int));
  
  for(i=2;i<7+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 21*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[6] = 1;
  jacobian->sparsePattern.colorCols[5] = 2;
  jacobian->sparsePattern.colorCols[4] = 3;
  jacobian->sparsePattern.colorCols[3] = 4;
  jacobian->sparsePattern.colorCols[2] = 5;
  jacobian->sparsePattern.colorCols[1] = 6;
  jacobian->sparsePattern.colorCols[0] = 7;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac4(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {0,2,6,4,5,6,4,5,6,2,3,4,2,3,4,0,1,4,0,1,4};
  int i = 0;
  
  jacobian->sizeCols = 7;
  jacobian->sizeRows = 7;
  jacobian->sizeTmpVars = 16;
  jacobian->seedVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(16,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((7+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(21*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 21;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(7*sizeof(int));
  jacobian->sparsePattern.maxColors = 7;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (7+1)*sizeof(int));
  
  for(i=2;i<7+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 21*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[6] = 1;
  jacobian->sparsePattern.colorCols[5] = 2;
  jacobian->sparsePattern.colorCols[4] = 3;
  jacobian->sparsePattern.colorCols[3] = 4;
  jacobian->sparsePattern.colorCols[2] = 5;
  jacobian->sparsePattern.colorCols[1] = 6;
  jacobian->sparsePattern.colorCols[0] = 7;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac5(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {1,5,6,2,4,5,3,4,6,3,4,6,2,4,5,0,1,4,0,1,4};
  int i = 0;
  
  jacobian->sizeCols = 7;
  jacobian->sizeRows = 7;
  jacobian->sizeTmpVars = 16;
  jacobian->seedVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(16,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((7+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(21*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 21;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(7*sizeof(int));
  jacobian->sparsePattern.maxColors = 7;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (7+1)*sizeof(int));
  
  for(i=2;i<7+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 21*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[6] = 1;
  jacobian->sparsePattern.colorCols[5] = 2;
  jacobian->sparsePattern.colorCols[4] = 3;
  jacobian->sparsePattern.colorCols[3] = 4;
  jacobian->sparsePattern.colorCols[2] = 5;
  jacobian->sparsePattern.colorCols[1] = 6;
  jacobian->sparsePattern.colorCols[0] = 7;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac6(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {0,5,6,3,4,5,3,4,5,2,3,6,2,3,6,0,1,3,0,1,3};
  int i = 0;
  
  jacobian->sizeCols = 7;
  jacobian->sizeRows = 7;
  jacobian->sizeTmpVars = 16;
  jacobian->seedVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(16,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((7+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(21*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 21;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(7*sizeof(int));
  jacobian->sparsePattern.maxColors = 7;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (7+1)*sizeof(int));
  
  for(i=2;i<7+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 21*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[6] = 1;
  jacobian->sparsePattern.colorCols[5] = 2;
  jacobian->sparsePattern.colorCols[4] = 3;
  jacobian->sparsePattern.colorCols[3] = 4;
  jacobian->sparsePattern.colorCols[2] = 5;
  jacobian->sparsePattern.colorCols[1] = 6;
  jacobian->sparsePattern.colorCols[0] = 7;
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
equation index: 137
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.SeedNLSJac0[3] + MatStm2.compMolFrac.SeedNLSJac0[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_137(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,137};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac0[3] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.SeedNLSJac0[3] + MatStm2.compMolFrac.SeedNLSJac0[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_138(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,138};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac0[3] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,3] = MatStm2.compMolFrac[3,3] * MatStm2.totMolFlo.SeedNLSJac0[3] + MatStm2.compMolFrac.SeedNLSJac0[3,3] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_139(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,139};
  jacobian->tmpVars[2] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac0[3] SEED_VAR */) + (jacobian->seedVars[5] /* MatStm2.compMolFrac.SeedNLSJac0[3,3] SEED_VAR */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0[3] = 0.01 * MatStm2.totMolFlo.SeedNLSJac0[3]
*/
void Flowsheet_eqFunction_140(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,140};
  jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac0[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = -Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[3]
*/
void Flowsheet_eqFunction_141(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,141};
  jacobian->tmpVars[4] /* MatStm2.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2] = 100.0 * MatStm2.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void Flowsheet_eqFunction_142(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,142};
  jacobian->tmpVars[5] /* MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[4] /* MatStm2.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] + MatStm2.compMolFrac.SeedNLSJac0[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_143(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,143};
  jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->tmpVars[5] /* MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,3] = MatStm2.compMolFrac[2,3] * MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] + MatStm2.compMolFrac.SeedNLSJac0[2,3] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_144(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,144};
  jacobian->tmpVars[7] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */) * (jacobian->tmpVars[5] /* MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac0[2,3] SEED_VAR */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] + MatStm2.compMolFrac.SeedNLSJac0[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_145(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,145};
  jacobian->tmpVars[8] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->tmpVars[5] /* MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[6] /* MatStm2.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac0[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac0[3,2] - MatStm2.K[2] * MatStm2.compMolFrac.SeedNLSJac0[2,2] else MatStm2.compMolFrac.SeedNLSJac0[2,2]
*/
void Flowsheet_eqFunction_146(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,146};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp3 = (tmp1?jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */ - ((data->localData[0]->realVars[127] /* MatStm2.K[2] variable */) * (jacobian->seedVars[6] /* MatStm2.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */)):jacobian->seedVars[6] /* MatStm2.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp3;
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac0._dummyVarNLSJac0 = MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] + MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2]
*/
void Flowsheet_eqFunction_147(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,147};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[8] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac0[3,3] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac0[3,3] - MatStm2.K[3] * MatStm2.compMolFrac.SeedNLSJac0[2,3] else MatStm2.compMolFrac.SeedNLSJac0[2,3]
*/
void Flowsheet_eqFunction_148(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,148};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = jacobian->seedVars[5] /* MatStm2.compMolFrac.SeedNLSJac0[3,3] SEED_VAR */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp7 = (tmp5?jacobian->seedVars[5] /* MatStm2.compMolFrac.SeedNLSJac0[3,3] SEED_VAR */ - ((data->localData[0]->realVars[128] /* MatStm2.K[3] variable */) * (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac0[2,3] SEED_VAR */)):jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac0[2,3] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp7;
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac0._dummyVarNLSJac0 = MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,3] + MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,3]
*/
void Flowsheet_eqFunction_149(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,149};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[2] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[7] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac0[2,1] + MatStm2.compMolFrac.SeedNLSJac0[2,2] + MatStm2.compMolFrac.SeedNLSJac0[2,3] else MatStm2.compMolFrac.SeedNLSJac0[3,1] + MatStm2.compMolFrac.SeedNLSJac0[3,2] + MatStm2.compMolFrac.SeedNLSJac0[3,3]
*/
void Flowsheet_eqFunction_150(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,150};
  modelica_boolean tmp8;
  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = (tmp8?jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */ + jacobian->seedVars[6] /* MatStm2.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */ + jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac0[2,3] SEED_VAR */:jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */ + jacobian->seedVars[5] /* MatStm2.compMolFrac.SeedNLSJac0[3,3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 151
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac0._dummyVarNLSJac0 = MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] + MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1]
*/
void Flowsheet_eqFunction_151(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,151};
  jacobian->resultVars[5] /* $res6.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac0[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac0[3,1] - MatStm2.K[1] * MatStm2.compMolFrac.SeedNLSJac0[2,1] else MatStm2.compMolFrac.SeedNLSJac0[2,1]
*/
void Flowsheet_eqFunction_152(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,152};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */;
  }
  else
  {
    tmp10 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp12 = (tmp10?jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ - ((data->localData[0]->realVars[126] /* MatStm2.K[1] variable */) * (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */)):jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */);
  }
  jacobian->resultVars[6] /* $res7.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp12;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac0_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac0;
  Flowsheet_eqFunction_137(data, threadData, jacobian, parentJacobian);

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

  Flowsheet_eqFunction_150(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_151(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_152(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 204
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo.SeedNLSJac1[3] + MatStm3.compMolFrac.SeedNLSJac1[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_204(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,204};
  jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac1[3] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo.SeedNLSJac1[3] + MatStm3.compMolFrac.SeedNLSJac1[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_205(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,205};
  jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac1[3] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,3] = MatStm3.compMolFrac[3,3] * MatStm3.totMolFlo.SeedNLSJac1[3] + MatStm3.compMolFrac.SeedNLSJac1[3,3] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_206(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,206};
  jacobian->tmpVars[2] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac1[3] SEED_VAR */) + (jacobian->seedVars[5] /* MatStm3.compMolFrac.SeedNLSJac1[3,3] SEED_VAR */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1[2] = 0.01 * MatStm3.totMolFlo.SeedNLSJac1[3]
*/
void Flowsheet_eqFunction_207(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,207};
  jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac1[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1 = -Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2]
*/
void Flowsheet_eqFunction_208(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,208};
  jacobian->tmpVars[4] /* MatStm3.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 209
type: SIMPLE_ASSIGN
MatStm3._totMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2] = 100.0 * MatStm3.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1
*/
void Flowsheet_eqFunction_209(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,209};
  jacobian->tmpVars[5] /* MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[4] /* MatStm3.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 210
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] + MatStm3.compMolFrac.SeedNLSJac1[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_210(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,210};
  jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */) * (jacobian->tmpVars[5] /* MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 211
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] + MatStm3.compMolFrac.SeedNLSJac1[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_211(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,211};
  jacobian->tmpVars[7] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */) * (jacobian->tmpVars[5] /* MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 212
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,3] = MatStm3.compMolFrac[2,3] * MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] + MatStm3.compMolFrac.SeedNLSJac1[2,3] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_212(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,212};
  jacobian->tmpVars[8] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */) * (jacobian->tmpVars[5] /* MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[6] /* MatStm3.compMolFrac.SeedNLSJac1[2,3] SEED_VAR */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 213
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac1._dummyVarNLSJac1 = MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,3] + MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,3]
*/
void Flowsheet_eqFunction_213(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,213};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[2] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[8] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 214
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac1[3,3] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac1[3,3] - MatStm3.K[3] * MatStm3.compMolFrac.SeedNLSJac1[2,3] else MatStm3.compMolFrac.SeedNLSJac1[2,3]
*/
void Flowsheet_eqFunction_214(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,214};
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  tmp13 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp15 = (modelica_boolean)tmp13;
  if(tmp15)
  {
    tmp16 = jacobian->seedVars[5] /* MatStm3.compMolFrac.SeedNLSJac1[3,3] SEED_VAR */;
  }
  else
  {
    tmp14 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp16 = (tmp14?jacobian->seedVars[5] /* MatStm3.compMolFrac.SeedNLSJac1[3,3] SEED_VAR */ - ((data->localData[0]->realVars[246] /* MatStm3.K[3] variable */) * (jacobian->seedVars[6] /* MatStm3.compMolFrac.SeedNLSJac1[2,3] SEED_VAR */)):jacobian->seedVars[6] /* MatStm3.compMolFrac.SeedNLSJac1[2,3] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp16;
  TRACE_POP
}

/*
equation index: 215
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac1[3,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac1[3,2] - MatStm3.K[2] * MatStm3.compMolFrac.SeedNLSJac1[2,2] else MatStm3.compMolFrac.SeedNLSJac1[2,2]
*/
void Flowsheet_eqFunction_215(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,215};
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_real tmp20;
  tmp17 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp19 = (modelica_boolean)tmp17;
  if(tmp19)
  {
    tmp20 = jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */;
  }
  else
  {
    tmp18 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp20 = (tmp18?jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */ - ((data->localData[0]->realVars[245] /* MatStm3.K[2] variable */) * (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */)):jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp20;
  TRACE_POP
}

/*
equation index: 216
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac1._dummyVarNLSJac1 = MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] + MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1]
*/
void Flowsheet_eqFunction_216(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,216};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[7] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 217
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac1[2,1] + MatStm3.compMolFrac.SeedNLSJac1[2,2] + MatStm3.compMolFrac.SeedNLSJac1[2,3] else MatStm3.compMolFrac.SeedNLSJac1[3,1] + MatStm3.compMolFrac.SeedNLSJac1[3,2] + MatStm3.compMolFrac.SeedNLSJac1[3,3]
*/
void Flowsheet_eqFunction_217(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,217};
  modelica_boolean tmp21;
  tmp21 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (tmp21?jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */ + jacobian->seedVars[6] /* MatStm3.compMolFrac.SeedNLSJac1[2,3] SEED_VAR */:jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */ + jacobian->seedVars[5] /* MatStm3.compMolFrac.SeedNLSJac1[3,3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 218
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac1._dummyVarNLSJac1 = MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] + MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2]
*/
void Flowsheet_eqFunction_218(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,218};
  jacobian->resultVars[5] /* $res6.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 219
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac1[3,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac1[3,1] - MatStm3.K[1] * MatStm3.compMolFrac.SeedNLSJac1[2,1] else MatStm3.compMolFrac.SeedNLSJac1[2,1]
*/
void Flowsheet_eqFunction_219(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,219};
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  tmp22 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp24 = (modelica_boolean)tmp22;
  if(tmp24)
  {
    tmp25 = jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */;
  }
  else
  {
    tmp23 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp25 = (tmp23?jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */ - ((data->localData[0]->realVars[244] /* MatStm3.K[1] variable */) * (jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */)):jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */);
  }
  jacobian->resultVars[6] /* $res7.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp25;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac1_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac1;
  Flowsheet_eqFunction_204(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_205(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_206(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_207(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_208(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_209(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_210(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_211(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_212(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_213(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_214(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_215(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_216(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_217(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_218(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_219(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 271
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2,1] = MatStm4.compMolFrac[2,1] * MatStm4.totMolFlo.SeedNLSJac2[2] + MatStm4.compMolFrac.SeedNLSJac2[2,1] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_271(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,271};
  jacobian->tmpVars[0] /* MatStm4.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac2[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */) * (data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2,3] = MatStm4.compMolFrac[2,3] * MatStm4.totMolFlo.SeedNLSJac2[2] + MatStm4.compMolFrac.SeedNLSJac2[2,3] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_272(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,272};
  jacobian->tmpVars[1] /* MatStm4.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac2[2] SEED_VAR */) + (jacobian->seedVars[6] /* MatStm4.compMolFrac.SeedNLSJac2[2,3] SEED_VAR */) * (data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2,2] = MatStm4.compMolFrac[2,2] * MatStm4.totMolFlo.SeedNLSJac2[2] + MatStm4.compMolFrac.SeedNLSJac2[2,2] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_273(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,273};
  jacobian->tmpVars[2] /* MatStm4.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac2[2] SEED_VAR */) + (jacobian->seedVars[5] /* MatStm4.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */) * (data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
MatStm4._liqPhasMolFrac._$pDERNLSJac2._dummyVarNLSJac2 = 0.01 * MatStm4.totMolFlo.SeedNLSJac2[2]
*/
void Flowsheet_eqFunction_274(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,274};
  jacobian->tmpVars[3] /* MatStm4.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac2[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac2._dummyVarNLSJac2[1] = -MatStm4.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2
*/
void Flowsheet_eqFunction_275(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,275};
  jacobian->tmpVars[4] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2[1] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[3] /* MatStm4.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
MatStm4._totMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3] = 100.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2[1]
*/
void Flowsheet_eqFunction_276(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,276};
  jacobian->tmpVars[5] /* MatStm4.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[4] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3,1] = MatStm4.compMolFrac[3,1] * MatStm4.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] + MatStm4.compMolFrac.SeedNLSJac2[3,1] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_277(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,277};
  jacobian->tmpVars[6] /* MatStm4.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */) * (jacobian->tmpVars[5] /* MatStm4.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */) * (data->localData[0]->realVars[475] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3,3] = MatStm4.compMolFrac[3,3] * MatStm4.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] + MatStm4.compMolFrac.SeedNLSJac2[3,3] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_278(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,278};
  jacobian->tmpVars[7] /* MatStm4.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */) * (jacobian->tmpVars[5] /* MatStm4.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac2[3,3] SEED_VAR */) * (data->localData[0]->realVars[475] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3,2] = MatStm4.compMolFrac[3,2] * MatStm4.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] + MatStm4.compMolFrac.SeedNLSJac2[3,2] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_279(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,279};
  jacobian->tmpVars[8] /* MatStm4.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */) * (jacobian->tmpVars[5] /* MatStm4.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */) * (data->localData[0]->realVars[475] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac2._dummyVarNLSJac2 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac2[3,3] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac2[3,3] - MatStm4.K[3] * MatStm4.compMolFrac.SeedNLSJac2[2,3] else MatStm4.compMolFrac.SeedNLSJac2[2,3]
*/
void Flowsheet_eqFunction_280(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,280};
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  tmp26 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp28 = (modelica_boolean)tmp26;
  if(tmp28)
  {
    tmp29 = jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac2[3,3] SEED_VAR */;
  }
  else
  {
    tmp27 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp29 = (tmp27?jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac2[3,3] SEED_VAR */ - ((data->localData[0]->realVars[364] /* MatStm4.K[3] variable */) * (jacobian->seedVars[6] /* MatStm4.compMolFrac.SeedNLSJac2[2,3] SEED_VAR */)):jacobian->seedVars[6] /* MatStm4.compMolFrac.SeedNLSJac2[2,3] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp29;
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac2._dummyVarNLSJac2 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac2[3,2] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac2[3,2] - MatStm4.K[2] * MatStm4.compMolFrac.SeedNLSJac2[2,2] else MatStm4.compMolFrac.SeedNLSJac2[2,2]
*/
void Flowsheet_eqFunction_281(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,281};
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  tmp30 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp32 = (modelica_boolean)tmp30;
  if(tmp32)
  {
    tmp33 = jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */;
  }
  else
  {
    tmp31 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp33 = (tmp31?jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */ - ((data->localData[0]->realVars[363] /* MatStm4.K[2] variable */) * (jacobian->seedVars[5] /* MatStm4.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */)):jacobian->seedVars[5] /* MatStm4.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp33;
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac2._dummyVarNLSJac2 = MatStm4.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] + MatStm4.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2]
*/
void Flowsheet_eqFunction_282(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,282};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[8] /* MatStm4.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[2] /* MatStm4.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac2._dummyVarNLSJac2 = MatStm4.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,3] + MatStm4.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,3]
*/
void Flowsheet_eqFunction_283(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,283};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[7] /* MatStm4.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm4.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 284
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac2._dummyVarNLSJac2 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac2[2,1] + MatStm4.compMolFrac.SeedNLSJac2[2,2] + MatStm4.compMolFrac.SeedNLSJac2[2,3] else MatStm4.compMolFrac.SeedNLSJac2[3,1] + MatStm4.compMolFrac.SeedNLSJac2[3,2] + MatStm4.compMolFrac.SeedNLSJac2[3,3]
*/
void Flowsheet_eqFunction_284(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,284};
  modelica_boolean tmp34;
  tmp34 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (tmp34?jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */ + jacobian->seedVars[5] /* MatStm4.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */ + jacobian->seedVars[6] /* MatStm4.compMolFrac.SeedNLSJac2[2,3] SEED_VAR */:jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */ + jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac2[3,3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 285
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac2._dummyVarNLSJac2 = MatStm4.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] + MatStm4.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1]
*/
void Flowsheet_eqFunction_285(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,285};
  jacobian->resultVars[5] /* $res6.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm4.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm4.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 286
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac2._dummyVarNLSJac2 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac2[3,1] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac2[3,1] - MatStm4.K[1] * MatStm4.compMolFrac.SeedNLSJac2[2,1] else MatStm4.compMolFrac.SeedNLSJac2[2,1]
*/
void Flowsheet_eqFunction_286(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,286};
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_real tmp38;
  tmp35 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp37 = (modelica_boolean)tmp35;
  if(tmp37)
  {
    tmp38 = jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */;
  }
  else
  {
    tmp36 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp38 = (tmp36?jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */ - ((data->localData[0]->realVars[362] /* MatStm4.K[1] variable */) * (jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */)):jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */);
  }
  jacobian->resultVars[6] /* $res7.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp38;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac2_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac2;
  Flowsheet_eqFunction_271(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_272(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_273(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_274(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_275(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_276(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_277(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_278(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_279(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_280(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_281(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_282(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_283(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_284(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_285(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_286(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 499
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.SeedNLSJac4[2] + MatStm2.compMolFrac.SeedNLSJac4[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_499(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,499};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac4[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,3] = MatStm2.compMolFrac[2,3] * MatStm2.totMolFlo.SeedNLSJac4[2] + MatStm2.compMolFrac.SeedNLSJac4[2,3] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_500(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,500};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac4[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac4[2,3] SEED_VAR */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.SeedNLSJac4[2] + MatStm2.compMolFrac.SeedNLSJac4[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_501(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,501};
  jacobian->tmpVars[2] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac4[2] SEED_VAR */) + (jacobian->seedVars[6] /* MatStm2.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 502
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4 = 0.01 * MatStm2.totMolFlo.SeedNLSJac4[2]
*/
void Flowsheet_eqFunction_502(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,502};
  jacobian->tmpVars[3] /* MatStm2.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac4[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4[3] = -MatStm2.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4
*/
void Flowsheet_eqFunction_503(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,503};
  jacobian->tmpVars[4] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[3] /* MatStm2.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3] = 100.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[3]
*/
void Flowsheet_eqFunction_504(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,504};
  jacobian->tmpVars[5] /* MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[4] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] + MatStm2.compMolFrac.SeedNLSJac4[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_505(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,505};
  jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->tmpVars[5] /* MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,3] = MatStm2.compMolFrac[3,3] * MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] + MatStm2.compMolFrac.SeedNLSJac4[3,3] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_506(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,506};
  jacobian->tmpVars[7] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */) * (jacobian->tmpVars[5] /* MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac4[3,3] SEED_VAR */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] + MatStm2.compMolFrac.SeedNLSJac4[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_507(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,507};
  jacobian->tmpVars[8] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->tmpVars[5] /* MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[5] /* MatStm2.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 508
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac4._dummyVarNLSJac4 = MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] + MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2]
*/
void Flowsheet_eqFunction_508(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,508};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[8] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[2] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 509
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac4[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac4[3,2] - MatStm2.K[2] * MatStm2.compMolFrac.SeedNLSJac4[2,2] else MatStm2.compMolFrac.SeedNLSJac4[2,2]
*/
void Flowsheet_eqFunction_509(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,509};
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_real tmp42;
  tmp39 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp41 = (modelica_boolean)tmp39;
  if(tmp41)
  {
    tmp42 = jacobian->seedVars[5] /* MatStm2.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */;
  }
  else
  {
    tmp40 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp42 = (tmp40?jacobian->seedVars[5] /* MatStm2.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */ - ((data->localData[0]->realVars[127] /* MatStm2.K[2] variable */) * (jacobian->seedVars[6] /* MatStm2.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */)):jacobian->seedVars[6] /* MatStm2.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp42;
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac4._dummyVarNLSJac4 = MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,3] + MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,3]
*/
void Flowsheet_eqFunction_510(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,510};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[7] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 511
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac4[3,3] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac4[3,3] - MatStm2.K[3] * MatStm2.compMolFrac.SeedNLSJac4[2,3] else MatStm2.compMolFrac.SeedNLSJac4[2,3]
*/
void Flowsheet_eqFunction_511(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,511};
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_real tmp46;
  tmp43 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp45 = (modelica_boolean)tmp43;
  if(tmp45)
  {
    tmp46 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac4[3,3] SEED_VAR */;
  }
  else
  {
    tmp44 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp46 = (tmp44?jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac4[3,3] SEED_VAR */ - ((data->localData[0]->realVars[128] /* MatStm2.K[3] variable */) * (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac4[2,3] SEED_VAR */)):jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac4[2,3] SEED_VAR */);
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp46;
  TRACE_POP
}

/*
equation index: 512
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac4[2,1] + MatStm2.compMolFrac.SeedNLSJac4[2,2] + MatStm2.compMolFrac.SeedNLSJac4[2,3] else MatStm2.compMolFrac.SeedNLSJac4[3,1] + MatStm2.compMolFrac.SeedNLSJac4[3,2] + MatStm2.compMolFrac.SeedNLSJac4[3,3]
*/
void Flowsheet_eqFunction_512(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,512};
  modelica_boolean tmp47;
  tmp47 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (tmp47?jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */ + jacobian->seedVars[6] /* MatStm2.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */ + jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac4[2,3] SEED_VAR */:jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */ + jacobian->seedVars[5] /* MatStm2.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */ + jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac4[3,3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 513
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac4[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac4[3,1] - MatStm2.K[1] * MatStm2.compMolFrac.SeedNLSJac4[2,1] else MatStm2.compMolFrac.SeedNLSJac4[2,1]
*/
void Flowsheet_eqFunction_513(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,513};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_real tmp51;
  tmp48 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp50 = (modelica_boolean)tmp48;
  if(tmp50)
  {
    tmp51 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */;
  }
  else
  {
    tmp49 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp51 = (tmp49?jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */ - ((data->localData[0]->realVars[126] /* MatStm2.K[1] variable */) * (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */)):jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */);
  }
  jacobian->resultVars[5] /* $res6.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp51;
  TRACE_POP
}

/*
equation index: 514
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac4._dummyVarNLSJac4 = MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] + MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1]
*/
void Flowsheet_eqFunction_514(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,514};
  jacobian->resultVars[6] /* $res7.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac4_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac4;
  Flowsheet_eqFunction_499(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_500(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_501(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_502(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_503(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_504(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_505(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_506(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_507(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_508(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_509(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_510(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_511(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_512(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_513(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_514(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 566
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo.SeedNLSJac5[2] + MatStm3.compMolFrac.SeedNLSJac5[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_566(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,566};
  jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac5[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 567
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo.SeedNLSJac5[2] + MatStm3.compMolFrac.SeedNLSJac5[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_567(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,567};
  jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac5[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 568
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[2,3] = MatStm3.compMolFrac[2,3] * MatStm3.totMolFlo.SeedNLSJac5[2] + MatStm3.compMolFrac.SeedNLSJac5[2,3] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_568(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,568};
  jacobian->tmpVars[2] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac5[2] SEED_VAR */) + (jacobian->seedVars[5] /* MatStm3.compMolFrac.SeedNLSJac5[2,3] SEED_VAR */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 569
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac._$pDERNLSJac5._dummyVarNLSJac5 = 0.01 * MatStm3.totMolFlo.SeedNLSJac5[2]
*/
void Flowsheet_eqFunction_569(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,569};
  jacobian->tmpVars[3] /* MatStm3.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac5[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 570
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac5._dummyVarNLSJac5[2] = -MatStm3.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5
*/
void Flowsheet_eqFunction_570(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,570};
  jacobian->tmpVars[4] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[3] /* MatStm3.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 571
type: SIMPLE_ASSIGN
MatStm3._totMolFlo._$pDERNLSJac5._dummyVarNLSJac5[3] = 100.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[2]
*/
void Flowsheet_eqFunction_571(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,571};
  jacobian->tmpVars[5] /* MatStm3.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[4] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 572
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] + MatStm3.compMolFrac.SeedNLSJac5[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_572(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,572};
  jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */) * (jacobian->tmpVars[5] /* MatStm3.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 573
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] + MatStm3.compMolFrac.SeedNLSJac5[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_573(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,573};
  jacobian->tmpVars[7] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */) * (jacobian->tmpVars[5] /* MatStm3.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[3,3] = MatStm3.compMolFrac[3,3] * MatStm3.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] + MatStm3.compMolFrac.SeedNLSJac5[3,3] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_574(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,574};
  jacobian->tmpVars[8] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */) * (jacobian->tmpVars[5] /* MatStm3.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[6] /* MatStm3.compMolFrac.SeedNLSJac5[3,3] SEED_VAR */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 575
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac5[3,3] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac5[3,3] - MatStm3.K[3] * MatStm3.compMolFrac.SeedNLSJac5[2,3] else MatStm3.compMolFrac.SeedNLSJac5[2,3]
*/
void Flowsheet_eqFunction_575(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,575};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_real tmp55;
  tmp52 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp54 = (modelica_boolean)tmp52;
  if(tmp54)
  {
    tmp55 = jacobian->seedVars[6] /* MatStm3.compMolFrac.SeedNLSJac5[3,3] SEED_VAR */;
  }
  else
  {
    tmp53 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp55 = (tmp53?jacobian->seedVars[6] /* MatStm3.compMolFrac.SeedNLSJac5[3,3] SEED_VAR */ - ((data->localData[0]->realVars[246] /* MatStm3.K[3] variable */) * (jacobian->seedVars[5] /* MatStm3.compMolFrac.SeedNLSJac5[2,3] SEED_VAR */)):jacobian->seedVars[5] /* MatStm3.compMolFrac.SeedNLSJac5[2,3] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp55;
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac5._dummyVarNLSJac5 = MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,3] + MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,3]
*/
void Flowsheet_eqFunction_576(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,576};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = jacobian->tmpVars[8] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[2] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 577
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac5[3,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac5[3,2] - MatStm3.K[2] * MatStm3.compMolFrac.SeedNLSJac5[2,2] else MatStm3.compMolFrac.SeedNLSJac5[2,2]
*/
void Flowsheet_eqFunction_577(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,577};
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  modelica_real tmp59;
  tmp56 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp58 = (modelica_boolean)tmp56;
  if(tmp58)
  {
    tmp59 = jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */;
  }
  else
  {
    tmp57 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp59 = (tmp57?jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */ - ((data->localData[0]->realVars[245] /* MatStm3.K[2] variable */) * (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */)):jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp59;
  TRACE_POP
}

/*
equation index: 578
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac5[3,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac5[3,1] - MatStm3.K[1] * MatStm3.compMolFrac.SeedNLSJac5[2,1] else MatStm3.compMolFrac.SeedNLSJac5[2,1]
*/
void Flowsheet_eqFunction_578(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,578};
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  modelica_real tmp63;
  tmp60 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp62 = (modelica_boolean)tmp60;
  if(tmp62)
  {
    tmp63 = jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */;
  }
  else
  {
    tmp61 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp63 = (tmp61?jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */ - ((data->localData[0]->realVars[244] /* MatStm3.K[1] variable */) * (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */)):jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */);
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp63;
  TRACE_POP
}

/*
equation index: 579
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac5[2,1] + MatStm3.compMolFrac.SeedNLSJac5[2,2] + MatStm3.compMolFrac.SeedNLSJac5[2,3] else MatStm3.compMolFrac.SeedNLSJac5[3,1] + MatStm3.compMolFrac.SeedNLSJac5[3,2] + MatStm3.compMolFrac.SeedNLSJac5[3,3]
*/
void Flowsheet_eqFunction_579(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,579};
  modelica_boolean tmp64;
  tmp64 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (tmp64?jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */ + jacobian->seedVars[5] /* MatStm3.compMolFrac.SeedNLSJac5[2,3] SEED_VAR */:jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */ + jacobian->seedVars[6] /* MatStm3.compMolFrac.SeedNLSJac5[3,3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 580
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac5._dummyVarNLSJac5 = MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] + MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2]
*/
void Flowsheet_eqFunction_580(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,580};
  jacobian->resultVars[5] /* $res6.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = jacobian->tmpVars[7] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac5._dummyVarNLSJac5 = MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] + MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1]
*/
void Flowsheet_eqFunction_581(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,581};
  jacobian->resultVars[6] /* $res7.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac5_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac5;
  Flowsheet_eqFunction_566(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_567(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_568(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_569(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_570(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_571(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_572(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_573(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_574(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_575(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_576(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_577(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_578(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_579(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_580(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_581(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 633
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[2,2] = MatStm4.compMolFrac[2,2] * MatStm4.totMolFlo.SeedNLSJac6[2] + MatStm4.compMolFrac.SeedNLSJac6[2,2] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_633(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,633};
  jacobian->tmpVars[0] /* MatStm4.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac6[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac6[2,2] SEED_VAR */) * (data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 634
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[2,1] = MatStm4.compMolFrac[2,1] * MatStm4.totMolFlo.SeedNLSJac6[2] + MatStm4.compMolFrac.SeedNLSJac6[2,1] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_634(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,634};
  jacobian->tmpVars[1] /* MatStm4.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac6[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac6[2,1] SEED_VAR */) * (data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 635
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[2,3] = MatStm4.compMolFrac[2,3] * MatStm4.totMolFlo.SeedNLSJac6[2] + MatStm4.compMolFrac.SeedNLSJac6[2,3] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_635(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,635};
  jacobian->tmpVars[2] /* MatStm4.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac6[2] SEED_VAR */) + (jacobian->seedVars[6] /* MatStm4.compMolFrac.SeedNLSJac6[2,3] SEED_VAR */) * (data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 636
type: SIMPLE_ASSIGN
MatStm4._liqPhasMolFrac._$pDERNLSJac6._dummyVarNLSJac6 = 0.01 * MatStm4.totMolFlo.SeedNLSJac6[2]
*/
void Flowsheet_eqFunction_636(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,636};
  jacobian->tmpVars[3] /* MatStm4.liqPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm4.totMolFlo.SeedNLSJac6[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 637
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac6._dummyVarNLSJac6[1] = -MatStm4.liqPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6
*/
void Flowsheet_eqFunction_637(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,637};
  jacobian->tmpVars[4] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[1] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[3] /* MatStm4.liqPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 638
type: SIMPLE_ASSIGN
MatStm4._totMolFlo._$pDERNLSJac6._dummyVarNLSJac6[3] = 100.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[1]
*/
void Flowsheet_eqFunction_638(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,638};
  jacobian->tmpVars[5] /* MatStm4.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[4] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac6.dummyVarNLSJac6[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 639
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[3,2] = MatStm4.compMolFrac[3,2] * MatStm4.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] + MatStm4.compMolFrac.SeedNLSJac6[3,2] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_639(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,639};
  jacobian->tmpVars[6] /* MatStm4.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */) * (jacobian->tmpVars[5] /* MatStm4.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac6[3,2] SEED_VAR */) * (data->localData[0]->realVars[475] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 640
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[3,1] = MatStm4.compMolFrac[3,1] * MatStm4.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] + MatStm4.compMolFrac.SeedNLSJac6[3,1] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_640(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,640};
  jacobian->tmpVars[7] /* MatStm4.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */) * (jacobian->tmpVars[5] /* MatStm4.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac6[3,1] SEED_VAR */) * (data->localData[0]->realVars[475] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 641
type: SIMPLE_ASSIGN
MatStm4._compMolFlo._$pDERNLSJac6._dummyVarNLSJac6[3,3] = MatStm4.compMolFrac[3,3] * MatStm4.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] + MatStm4.compMolFrac.SeedNLSJac6[3,3] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_641(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,641};
  jacobian->tmpVars[8] /* MatStm4.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */) * (jacobian->tmpVars[5] /* MatStm4.totMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[5] /* MatStm4.compMolFrac.SeedNLSJac6[3,3] SEED_VAR */) * (data->localData[0]->realVars[475] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 642
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac6._dummyVarNLSJac6 = MatStm4.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,3] + MatStm4.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,3]
*/
void Flowsheet_eqFunction_642(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,642};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = jacobian->tmpVars[8] /* MatStm4.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[2] /* MatStm4.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 643
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac6._dummyVarNLSJac6 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac6[3,3] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac6[3,3] - MatStm4.K[3] * MatStm4.compMolFrac.SeedNLSJac6[2,3] else MatStm4.compMolFrac.SeedNLSJac6[2,3]
*/
void Flowsheet_eqFunction_643(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,643};
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  modelica_real tmp68;
  tmp65 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp67 = (modelica_boolean)tmp65;
  if(tmp67)
  {
    tmp68 = jacobian->seedVars[5] /* MatStm4.compMolFrac.SeedNLSJac6[3,3] SEED_VAR */;
  }
  else
  {
    tmp66 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp68 = (tmp66?jacobian->seedVars[5] /* MatStm4.compMolFrac.SeedNLSJac6[3,3] SEED_VAR */ - ((data->localData[0]->realVars[364] /* MatStm4.K[3] variable */) * (jacobian->seedVars[6] /* MatStm4.compMolFrac.SeedNLSJac6[2,3] SEED_VAR */)):jacobian->seedVars[6] /* MatStm4.compMolFrac.SeedNLSJac6[2,3] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = tmp68;
  TRACE_POP
}

/*
equation index: 644
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac6._dummyVarNLSJac6 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac6[3,2] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac6[3,2] - MatStm4.K[2] * MatStm4.compMolFrac.SeedNLSJac6[2,2] else MatStm4.compMolFrac.SeedNLSJac6[2,2]
*/
void Flowsheet_eqFunction_644(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,644};
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  modelica_real tmp72;
  tmp69 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp71 = (modelica_boolean)tmp69;
  if(tmp71)
  {
    tmp72 = jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac6[3,2] SEED_VAR */;
  }
  else
  {
    tmp70 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp72 = (tmp70?jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac6[3,2] SEED_VAR */ - ((data->localData[0]->realVars[363] /* MatStm4.K[2] variable */) * (jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac6[2,2] SEED_VAR */)):jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac6[2,2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = tmp72;
  TRACE_POP
}

/*
equation index: 645
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac6._dummyVarNLSJac6 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac6[2,1] + MatStm4.compMolFrac.SeedNLSJac6[2,2] + MatStm4.compMolFrac.SeedNLSJac6[2,3] else MatStm4.compMolFrac.SeedNLSJac6[3,1] + MatStm4.compMolFrac.SeedNLSJac6[3,2] + MatStm4.compMolFrac.SeedNLSJac6[3,3]
*/
void Flowsheet_eqFunction_645(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,645};
  modelica_boolean tmp73;
  tmp73 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = (tmp73?jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac6[2,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm4.compMolFrac.SeedNLSJac6[2,2] SEED_VAR */ + jacobian->seedVars[6] /* MatStm4.compMolFrac.SeedNLSJac6[2,3] SEED_VAR */:jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac6[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm4.compMolFrac.SeedNLSJac6[3,2] SEED_VAR */ + jacobian->seedVars[5] /* MatStm4.compMolFrac.SeedNLSJac6[3,3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 646
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac6._dummyVarNLSJac6 = if 101325.0 >= MatStm4.Pbubl then MatStm4.compMolFrac.SeedNLSJac6[3,1] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMolFrac.SeedNLSJac6[3,1] - MatStm4.K[1] * MatStm4.compMolFrac.SeedNLSJac6[2,1] else MatStm4.compMolFrac.SeedNLSJac6[2,1]
*/
void Flowsheet_eqFunction_646(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,646};
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  modelica_real tmp77;
  tmp74 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp76 = (modelica_boolean)tmp74;
  if(tmp76)
  {
    tmp77 = jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac6[3,1] SEED_VAR */;
  }
  else
  {
    tmp75 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp77 = (tmp75?jacobian->seedVars[2] /* MatStm4.compMolFrac.SeedNLSJac6[3,1] SEED_VAR */ - ((data->localData[0]->realVars[362] /* MatStm4.K[1] variable */) * (jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac6[2,1] SEED_VAR */)):jacobian->seedVars[1] /* MatStm4.compMolFrac.SeedNLSJac6[2,1] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = tmp77;
  TRACE_POP
}

/*
equation index: 647
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac6._dummyVarNLSJac6 = MatStm4.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,1] + MatStm4.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,1]
*/
void Flowsheet_eqFunction_647(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,647};
  jacobian->resultVars[5] /* $res6.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = jacobian->tmpVars[7] /* MatStm4.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm4.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 648
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac6._dummyVarNLSJac6 = MatStm4.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,2] + MatStm4.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,2]
*/
void Flowsheet_eqFunction_648(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,648};
  jacobian->resultVars[6] /* $res7.$pDERNLSJac6.dummyVarNLSJac6 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm4.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm4.compMolFlo.$pDERNLSJac6.dummyVarNLSJac6[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac6_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac6;
  Flowsheet_eqFunction_633(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_634(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_635(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_636(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_637(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_638(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_639(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_640(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_641(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_642(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_643(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_644(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_645(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_646(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_647(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_648(data, threadData, jacobian, parentJacobian);
  
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


