/* Jacobians 6 */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianLSJac0(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 5;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 1;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianLSJac1(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 5;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 1;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[0] = 1;
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
equation index: 32
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERLSJac0._dummyVarLSJac0[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo.SeedLSJac0[2]
*/
void Flowsheet_eqFunction_32(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,32};
  jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERLSJac0.dummyVarLSJac0[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedLSJac0[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac._$pDERLSJac0._dummyVarLSJac0 = 0.01 * MatStm1.totMolFlo.SeedLSJac0[2]
*/
void Flowsheet_eqFunction_33(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,33};
  jacobian->tmpVars[1] /* MatStm1.liqPhasMolFrac.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedLSJac0[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
MatStm1._totMolFlo._$pDERLSJac0._dummyVarLSJac0[3] = (-100.0) * MatStm1.liqPhasMolFrac.$pDERLSJac0.dummyVarLSJac0
*/
void Flowsheet_eqFunction_34(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,34};
  jacobian->tmpVars[2] /* MatStm1.totMolFlo.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_DIFF_VAR */ = (-100.0) * (jacobian->tmpVars[1] /* MatStm1.liqPhasMolFrac.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERLSJac0._dummyVarLSJac0[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo.$pDERLSJac0.dummyVarLSJac0[3]
*/
void Flowsheet_eqFunction_35(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,35};
  jacobian->tmpVars[3] /* MatStm1.compMolFlo.$pDERLSJac0.dummyVarLSJac0[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */) * (jacobian->tmpVars[2] /* MatStm1.totMolFlo.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
$res1._$pDERLSJac0._dummyVarLSJac0 = MatStm1.compMolFlo.$pDERLSJac0.dummyVarLSJac0[3,1] + MatStm1.compMolFlo.$pDERLSJac0.dummyVarLSJac0[2,1]
*/
void Flowsheet_eqFunction_36(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,36};
  jacobian->resultVars[0] /* $res1.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[3] /* MatStm1.compMolFlo.$pDERLSJac0.dummyVarLSJac0[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERLSJac0.dummyVarLSJac0[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int Flowsheet_functionJacLSJac0_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_LSJac0;
  Flowsheet_eqFunction_32(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_33(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_34(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_35(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_36(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 83
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERLSJac1._dummyVarLSJac1[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo.SeedLSJac1[2]
*/
void Flowsheet_eqFunction_83(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,83};
  jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERLSJac1.dummyVarLSJac1[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedLSJac1[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 84
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac._$pDERLSJac1._dummyVarLSJac1 = 0.01 * MatStm1.totMolFlo.SeedLSJac1[2]
*/
void Flowsheet_eqFunction_84(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,84};
  jacobian->tmpVars[1] /* MatStm1.liqPhasMolFrac.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedLSJac1[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
MatStm1._totMolFlo._$pDERLSJac1._dummyVarLSJac1[3] = (-100.0) * MatStm1.liqPhasMolFrac.$pDERLSJac1.dummyVarLSJac1
*/
void Flowsheet_eqFunction_85(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,85};
  jacobian->tmpVars[2] /* MatStm1.totMolFlo.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_DIFF_VAR */ = (-100.0) * (jacobian->tmpVars[1] /* MatStm1.liqPhasMolFrac.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 86
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERLSJac1._dummyVarLSJac1[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo.$pDERLSJac1.dummyVarLSJac1[3]
*/
void Flowsheet_eqFunction_86(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,86};
  jacobian->tmpVars[3] /* MatStm1.compMolFlo.$pDERLSJac1.dummyVarLSJac1[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */) * (jacobian->tmpVars[2] /* MatStm1.totMolFlo.$pDERLSJac1.dummyVarLSJac1[3] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 87
type: SIMPLE_ASSIGN
$res1._$pDERLSJac1._dummyVarLSJac1 = MatStm1.compMolFlo.$pDERLSJac1.dummyVarLSJac1[3,1] + MatStm1.compMolFlo.$pDERLSJac1.dummyVarLSJac1[2,1]
*/
void Flowsheet_eqFunction_87(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,87};
  jacobian->resultVars[0] /* $res1.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[3] /* MatStm1.compMolFlo.$pDERLSJac1.dummyVarLSJac1[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERLSJac1.dummyVarLSJac1[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int Flowsheet_functionJacLSJac1_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_LSJac1;
  Flowsheet_eqFunction_83(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_84(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_85(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_86(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_87(data, threadData, jacobian, parentJacobian);
  
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


