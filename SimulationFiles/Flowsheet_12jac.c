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
int Flowsheet_initialAnalyticJacobianLSJac2(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
equation index: 37
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERLSJac0._dummyVarLSJac0[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.SeedLSJac0[2]
*/
void Flowsheet_eqFunction_37(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,37};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERLSJac0.dummyVarLSJac0[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[92] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedLSJac0[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERLSJac0._dummyVarLSJac0 = 0.01 * MatStm2.totMolFlo.SeedLSJac0[2]
*/
void Flowsheet_eqFunction_38(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,38};
  jacobian->tmpVars[1] /* MatStm2.liqPhasMolFrac.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedLSJac0[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERLSJac0._dummyVarLSJac0[3] = (-100.0) * MatStm2.liqPhasMolFrac.$pDERLSJac0.dummyVarLSJac0
*/
void Flowsheet_eqFunction_39(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,39};
  jacobian->tmpVars[2] /* MatStm2.totMolFlo.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_DIFF_VAR */ = (-100.0) * (jacobian->tmpVars[1] /* MatStm2.liqPhasMolFrac.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERLSJac0._dummyVarLSJac0[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.$pDERLSJac0.dummyVarLSJac0[3]
*/
void Flowsheet_eqFunction_40(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,40};
  jacobian->tmpVars[3] /* MatStm2.compMolFlo.$pDERLSJac0.dummyVarLSJac0[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[93] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->tmpVars[2] /* MatStm2.totMolFlo.$pDERLSJac0.dummyVarLSJac0[3] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
$res1._$pDERLSJac0._dummyVarLSJac0 = MatStm2.compMolFlo.$pDERLSJac0.dummyVarLSJac0[3,1] + MatStm2.compMolFlo.$pDERLSJac0.dummyVarLSJac0[2,1]
*/
void Flowsheet_eqFunction_41(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,41};
  jacobian->resultVars[0] /* $res1.$pDERLSJac0.dummyVarLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[3] /* MatStm2.compMolFlo.$pDERLSJac0.dummyVarLSJac0[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERLSJac0.dummyVarLSJac0[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int Flowsheet_functionJacLSJac0_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_LSJac0;
  Flowsheet_eqFunction_37(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_38(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_39(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_40(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_41(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 143
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERLSJac2._dummyVarLSJac2[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.SeedLSJac2[3]
*/
void Flowsheet_eqFunction_143(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,143};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERLSJac2.dummyVarLSJac2[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[93] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedLSJac2[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERLSJac2._dummyVarLSJac2 = (-0.01) * MatStm2.totMolFlo.SeedLSJac2[3]
*/
void Flowsheet_eqFunction_144(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,144};
  jacobian->tmpVars[1] /* MatStm2.liqPhasMolFrac.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_DIFF_VAR */ = (-0.01) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedLSJac2[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERLSJac2._dummyVarLSJac2[2] = 100.0 * MatStm2.liqPhasMolFrac.$pDERLSJac2.dummyVarLSJac2
*/
void Flowsheet_eqFunction_145(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,145};
  jacobian->tmpVars[2] /* MatStm2.totMolFlo.$pDERLSJac2.dummyVarLSJac2[2] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[1] /* MatStm2.liqPhasMolFrac.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERLSJac2._dummyVarLSJac2[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.$pDERLSJac2.dummyVarLSJac2[2]
*/
void Flowsheet_eqFunction_146(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,146};
  jacobian->tmpVars[3] /* MatStm2.compMolFlo.$pDERLSJac2.dummyVarLSJac2[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[92] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->tmpVars[2] /* MatStm2.totMolFlo.$pDERLSJac2.dummyVarLSJac2[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
$res1._$pDERLSJac2._dummyVarLSJac2 = MatStm2.compMolFlo.$pDERLSJac2.dummyVarLSJac2[3,1] + MatStm2.compMolFlo.$pDERLSJac2.dummyVarLSJac2[2,1]
*/
void Flowsheet_eqFunction_147(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,147};
  jacobian->resultVars[0] /* $res1.$pDERLSJac2.dummyVarLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERLSJac2.dummyVarLSJac2[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[3] /* MatStm2.compMolFlo.$pDERLSJac2.dummyVarLSJac2[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int Flowsheet_functionJacLSJac2_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_LSJac2;
  Flowsheet_eqFunction_143(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_144(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_145(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_146(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_147(data, threadData, jacobian, parentJacobian);
  
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


