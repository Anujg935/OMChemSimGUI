/* Jacobians 10 */
#include "splitter1_model.h"
#include "splitter1_12jac.h"
OMC_DISABLE_OPT
int splitter1_initialAnalyticJacobianNLSJac0(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,5,2,3,3,2};
  const int rowIndex[15] = {0,1,2,3,4,2,3,2,3,4,0,1,4,0,1};
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
int splitter1_initialAnalyticJacobianNLSJac1(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int splitter1_initialAnalyticJacobianNLSJac2(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int splitter1_initialAnalyticJacobianNLSJac3(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int splitter1_initialAnalyticJacobianNLSJac4(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int splitter1_initialAnalyticJacobianNLSJac5(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int splitter1_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int splitter1_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int splitter1_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int splitter1_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}


/*
equation index: 68
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo.SeedNLSJac0[3] + MatStm1.compMolFrac.SeedNLSJac0[3,1] * MatStm1.totMolFlo[3]
*/
void splitter1_eqFunction_68(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,68};
  jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[3] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */) * (data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo.SeedNLSJac0[3] + MatStm1.compMolFrac.SeedNLSJac0[3,2] * MatStm1.totMolFlo[3]
*/
void splitter1_eqFunction_69(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,69};
  jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[3] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */) * (data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = (-MatStm1.totMolFlo.SeedNLSJac0[3]) / 190.0
*/
void splitter1_eqFunction_70(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,70};
  jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = DIVISION((-jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[3] SEED_VAR */),190.0,"190.0");
  TRACE_POP
}

/*
equation index: 71
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = -MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void splitter1_eqFunction_71(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,71};
  jacobian->tmpVars[3] /* MatStm1.vapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 72
type: SIMPLE_ASSIGN
MatStm1._totMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2] = 190.0 * MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void splitter1_eqFunction_72(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,72};
  jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */ = (190.0) * (jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 73
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] + MatStm1.compMolFrac.SeedNLSJac0[2,1] * MatStm1.totMolFlo[2]
*/
void splitter1_eqFunction_73(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,73};
  jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */) * (jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] + MatStm1.compMolFrac.SeedNLSJac0[2,2] * MatStm1.totMolFlo[2]
*/
void splitter1_eqFunction_74(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,74};
  jacobian->tmpVars[6] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */) * (jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac0._dummyVarNLSJac0 = MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] + MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2]
*/
void splitter1_eqFunction_75(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,75};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac0[3,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac0[2,2] + MatStm1.compMolFrac[1,2] * MatStm1.vapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 * (-1.0 + MatStm1.K[2]) / (1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[2])) ^ 2.0 else MatStm1.compMolFrac.SeedNLSJac0[2,2]
*/
void splitter1_eqFunction_76(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,76};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  tmp2 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp2;
  if(tmp7)
  {
    tmp8 = jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */;
  }
  else
  {
    tmp3 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp5 = (modelica_boolean)tmp3;
    if(tmp5)
    {
      tmp4 = 1.0 + (data->localData[0]->realVars[96] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[9] /* MatStm1.K[2] variable */);
      tmp6 = jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* MatStm1.vapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[9] /* MatStm1.K[2] variable */)),(tmp4 * tmp4),"(1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[2])) ^ 2.0");
    }
    else
    {
      tmp6 = jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */;
    }
    tmp8 = tmp6;
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp8;
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac0._dummyVarNLSJac0 = MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] + MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1]
*/
void splitter1_eqFunction_77(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,77};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac0[3,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac0[2,1] + MatStm1.compMolFrac[1,1] * MatStm1.vapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 * (-1.0 + MatStm1.K[1]) / (1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[1])) ^ 2.0 else MatStm1.compMolFrac.SeedNLSJac0[2,1]
*/
void splitter1_eqFunction_78(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,78};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp14 = (modelica_boolean)tmp9;
  if(tmp14)
  {
    tmp15 = jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */;
  }
  else
  {
    tmp10 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp12 = (modelica_boolean)tmp10;
    if(tmp12)
    {
      tmp11 = 1.0 + (data->localData[0]->realVars[96] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[8] /* MatStm1.K[1] variable */);
      tmp13 = jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* MatStm1.vapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[8] /* MatStm1.K[1] variable */)),(tmp11 * tmp11),"(1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[1])) ^ 2.0");
    }
    else
    {
      tmp13 = jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */;
    }
    tmp15 = tmp13;
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp15;
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.totMolFlo.SeedNLSJac0[3] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac0[3,1] + MatStm1.compMolFrac.SeedNLSJac0[3,2] else MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2]
*/
void splitter1_eqFunction_79(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,79};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  tmp16 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp18 = (modelica_boolean)tmp16;
  if(tmp18)
  {
    tmp19 = jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[3] SEED_VAR */;
  }
  else
  {
    tmp17 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp19 = (tmp17?jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */:jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp19;
  TRACE_POP
}
int splitter1_functionJacNLSJac0_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = splitter1_INDEX_JAC_NLSJac0;
  splitter1_eqFunction_68(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_69(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_70(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_71(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_72(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_73(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_74(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_75(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_76(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_77(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_78(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_79(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 142
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo.SeedNLSJac1[2] + MatStm3.compMolFrac.SeedNLSJac1[2,2] * MatStm3.totMolFlo[2]
*/
void splitter1_eqFunction_142(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,142};
  jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac1[2] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */) * (data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo.SeedNLSJac1[2] + MatStm3.compMolFrac.SeedNLSJac1[2,1] * MatStm3.totMolFlo[2]
*/
void splitter1_eqFunction_143(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,143};
  jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac1[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */) * (data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1 = 0.02 * MatStm3.totMolFlo.SeedNLSJac1[2]
*/
void splitter1_eqFunction_144(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,144};
  jacobian->tmpVars[2] /* MatStm3.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (0.02) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac1[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
MatStm3._vapPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1 = -MatStm3.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1
*/
void splitter1_eqFunction_145(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,145};
  jacobian->tmpVars[3] /* MatStm3.vapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm3.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
MatStm3._totMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3] = (-50.0) * MatStm3.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1
*/
void splitter1_eqFunction_146(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,146};
  jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */ = (-50.0) * (jacobian->tmpVars[2] /* MatStm3.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] + MatStm3.compMolFrac.SeedNLSJac1[3,2] * MatStm3.totMolFlo[3]
*/
void splitter1_eqFunction_147(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,147};
  jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */) * (data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] + MatStm3.compMolFrac.SeedNLSJac1[3,1] * MatStm3.totMolFlo[3]
*/
void splitter1_eqFunction_148(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,148};
  jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */) * (data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac1._dummyVarNLSJac1 = MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] + MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1]
*/
void splitter1_eqFunction_149(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,149};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac1._dummyVarNLSJac1 = MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] + MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2]
*/
void splitter1_eqFunction_150(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,150};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 151
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac1[3,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac1[2,2] + MatStm3.compMolFrac[1,2] * MatStm3.vapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 * (-1.0 + MatStm3.K[2]) / (1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[2])) ^ 2.0 else MatStm3.compMolFrac.SeedNLSJac1[2,2]
*/
void splitter1_eqFunction_151(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,151};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
  tmp20 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp25 = (modelica_boolean)tmp20;
  if(tmp25)
  {
    tmp26 = jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */;
  }
  else
  {
    tmp21 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp23 = (modelica_boolean)tmp21;
    if(tmp23)
    {
      tmp22 = 1.0 + (data->localData[0]->realVars[272] /* MatStm3.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[188] /* MatStm3.K[2] variable */);
      tmp24 = jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[227] /* MatStm3.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* MatStm3.vapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[188] /* MatStm3.K[2] variable */)),(tmp22 * tmp22),"(1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[2])) ^ 2.0");
    }
    else
    {
      tmp24 = jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */;
    }
    tmp26 = tmp24;
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp26;
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm3.Pbubl then MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac1[3,1] + MatStm3.compMolFrac.SeedNLSJac1[3,2] else MatStm3.totMolFlo.SeedNLSJac1[2]
*/
void splitter1_eqFunction_152(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,152};
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_real tmp30;
  tmp27 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp29 = (modelica_boolean)tmp27;
  if(tmp29)
  {
    tmp30 = jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp28 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp30 = (tmp28?jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac1[2] SEED_VAR */);
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp30;
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac1[3,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac1[2,1] + MatStm3.compMolFrac[1,1] * MatStm3.vapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 * (-1.0 + MatStm3.K[1]) / (1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[1])) ^ 2.0 else MatStm3.compMolFrac.SeedNLSJac1[2,1]
*/
void splitter1_eqFunction_153(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,153};
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  modelica_boolean tmp36;
  modelica_real tmp37;
  tmp31 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp36 = (modelica_boolean)tmp31;
  if(tmp36)
  {
    tmp37 = jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */;
  }
  else
  {
    tmp32 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp34 = (modelica_boolean)tmp32;
    if(tmp34)
    {
      tmp33 = 1.0 + (data->localData[0]->realVars[272] /* MatStm3.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[187] /* MatStm3.K[1] variable */);
      tmp35 = jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[226] /* MatStm3.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* MatStm3.vapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[187] /* MatStm3.K[1] variable */)),(tmp33 * tmp33),"(1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[1])) ^ 2.0");
    }
    else
    {
      tmp35 = jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */;
    }
    tmp37 = tmp35;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp37;
  TRACE_POP
}
int splitter1_functionJacNLSJac1_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = splitter1_INDEX_JAC_NLSJac1;
  splitter1_eqFunction_142(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_143(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_144(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_145(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_146(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_147(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_148(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_149(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_150(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_151(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_152(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_153(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 201
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.SeedNLSJac2[3] + MatStm2.compMolFrac.SeedNLSJac2[3,1] * MatStm2.totMolFlo[3]
*/
void splitter1_eqFunction_201(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,201};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac2[3] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.SeedNLSJac2[3] + MatStm2.compMolFrac.SeedNLSJac2[3,2] * MatStm2.totMolFlo[3]
*/
void splitter1_eqFunction_202(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,202};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac2[3] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac2._dummyVarNLSJac2 = (-0.02) * MatStm2.totMolFlo.SeedNLSJac2[3]
*/
void splitter1_eqFunction_203(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,203};
  jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-0.02) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac2[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
MatStm2._vapPhasMolFrac._$pDERNLSJac2._dummyVarNLSJac2 = -MatStm2.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2
*/
void splitter1_eqFunction_204(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,204};
  jacobian->tmpVars[3] /* MatStm2.vapPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2] = 50.0 * MatStm2.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2
*/
void splitter1_eqFunction_205(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,205};
  jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2] JACOBIAN_DIFF_VAR */ = (50.0) * (jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2] + MatStm2.compMolFrac.SeedNLSJac2[2,1] * MatStm2.totMolFlo[2]
*/
void splitter1_eqFunction_206(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,206};
  jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2] + MatStm2.compMolFrac.SeedNLSJac2[2,2] * MatStm2.totMolFlo[2]
*/
void splitter1_eqFunction_207(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,207};
  jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac2._dummyVarNLSJac2 = MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] + MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2]
*/
void splitter1_eqFunction_208(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,208};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 209
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac2._dummyVarNLSJac2 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac2[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac2[2,2] + MatStm2.compMolFrac[1,2] * MatStm2.vapPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 * (-1.0 + MatStm2.K[2]) / (1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[2])) ^ 2.0 else MatStm2.compMolFrac.SeedNLSJac2[2,2]
*/
void splitter1_eqFunction_209(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,209};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_real tmp40;
  modelica_boolean tmp41;
  modelica_real tmp42;
  modelica_boolean tmp43;
  modelica_real tmp44;
  tmp38 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp43 = (modelica_boolean)tmp38;
  if(tmp43)
  {
    tmp44 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */;
  }
  else
  {
    tmp39 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp41 = (modelica_boolean)tmp39;
    if(tmp41)
    {
      tmp40 = 1.0 + (data->localData[0]->realVars[184] /* MatStm2.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[100] /* MatStm2.K[2] variable */);
      tmp42 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* MatStm2.vapPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[100] /* MatStm2.K[2] variable */)),(tmp40 * tmp40),"(1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[2])) ^ 2.0");
    }
    else
    {
      tmp42 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */;
    }
    tmp44 = tmp42;
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp44;
  TRACE_POP
}

/*
equation index: 210
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac2._dummyVarNLSJac2 = if 101325.0 >= MatStm2.Pbubl then MatStm2.totMolFlo.SeedNLSJac2[3] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac2[3,1] + MatStm2.compMolFrac.SeedNLSJac2[3,2] else MatStm2.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2]
*/
void splitter1_eqFunction_210(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,210};
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_real tmp48;
  tmp45 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp47 = (modelica_boolean)tmp45;
  if(tmp47)
  {
    tmp48 = jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac2[3] SEED_VAR */;
  }
  else
  {
    tmp46 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp48 = (tmp46?jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */:jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2] JACOBIAN_DIFF_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp48;
  TRACE_POP
}

/*
equation index: 211
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac2._dummyVarNLSJac2 = MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] + MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1]
*/
void splitter1_eqFunction_211(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,211};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 212
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac2._dummyVarNLSJac2 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac2[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac2[2,1] + MatStm2.compMolFrac[1,1] * MatStm2.vapPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 * (-1.0 + MatStm2.K[1]) / (1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[1])) ^ 2.0 else MatStm2.compMolFrac.SeedNLSJac2[2,1]
*/
void splitter1_eqFunction_212(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,212};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_real tmp51;
  modelica_boolean tmp52;
  modelica_real tmp53;
  modelica_boolean tmp54;
  modelica_real tmp55;
  tmp49 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp54 = (modelica_boolean)tmp49;
  if(tmp54)
  {
    tmp55 = jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */;
  }
  else
  {
    tmp50 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp52 = (modelica_boolean)tmp50;
    if(tmp52)
    {
      tmp51 = 1.0 + (data->localData[0]->realVars[184] /* MatStm2.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[99] /* MatStm2.K[1] variable */);
      tmp53 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[138] /* MatStm2.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* MatStm2.vapPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[99] /* MatStm2.K[1] variable */)),(tmp51 * tmp51),"(1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[1])) ^ 2.0");
    }
    else
    {
      tmp53 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */;
    }
    tmp55 = tmp53;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp55;
  TRACE_POP
}
int splitter1_functionJacNLSJac2_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = splitter1_INDEX_JAC_NLSJac2;
  splitter1_eqFunction_201(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_202(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_203(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_204(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_205(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_206(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_207(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_208(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_209(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_210(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_211(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_212(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 312
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo.SeedNLSJac3[3] + MatStm1.compMolFrac.SeedNLSJac3[3,2] * MatStm1.totMolFlo[3]
*/
void splitter1_eqFunction_312(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,312};
  jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac3[3] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */) * (data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo.SeedNLSJac3[3] + MatStm1.compMolFrac.SeedNLSJac3[3,1] * MatStm1.totMolFlo[3]
*/
void splitter1_eqFunction_313(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,313};
  jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac3[3] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */) * (data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 314
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac._$pDERNLSJac3._dummyVarNLSJac3 = (-MatStm1.totMolFlo.SeedNLSJac3[3]) / 190.0
*/
void splitter1_eqFunction_314(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,314};
  jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = DIVISION((-jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac3[3] SEED_VAR */),190.0,"190.0");
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac._$pDERNLSJac3._dummyVarNLSJac3 = -MatStm1.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3
*/
void splitter1_eqFunction_315(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,315};
  jacobian->tmpVars[3] /* MatStm1.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
MatStm1._totMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2] = 190.0 * MatStm1.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3
*/
void splitter1_eqFunction_316(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,316};
  jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_DIFF_VAR */ = (190.0) * (jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 317
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] + MatStm1.compMolFrac.SeedNLSJac3[2,2] * MatStm1.totMolFlo[2]
*/
void splitter1_eqFunction_317(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,317};
  jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */) * (jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 318
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] + MatStm1.compMolFrac.SeedNLSJac3[2,1] * MatStm1.totMolFlo[2]
*/
void splitter1_eqFunction_318(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,318};
  jacobian->tmpVars[6] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */) * (jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */) * (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 319
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac3._dummyVarNLSJac3 = MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] + MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1]
*/
void splitter1_eqFunction_319(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,319};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 320
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac3[3,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac3[2,1] + MatStm1.compMolFrac[1,1] * MatStm1.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 * (-1.0 + MatStm1.K[1]) / (1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[1])) ^ 2.0 else MatStm1.compMolFrac.SeedNLSJac3[2,1]
*/
void splitter1_eqFunction_320(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,320};
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_real tmp58;
  modelica_boolean tmp59;
  modelica_real tmp60;
  modelica_boolean tmp61;
  modelica_real tmp62;
  tmp56 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp61 = (modelica_boolean)tmp56;
  if(tmp61)
  {
    tmp62 = jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */;
  }
  else
  {
    tmp57 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp59 = (modelica_boolean)tmp57;
    if(tmp59)
    {
      tmp58 = 1.0 + (data->localData[0]->realVars[96] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[8] /* MatStm1.K[1] variable */);
      tmp60 = jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* MatStm1.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[8] /* MatStm1.K[1] variable */)),(tmp58 * tmp58),"(1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[1])) ^ 2.0");
    }
    else
    {
      tmp60 = jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */;
    }
    tmp62 = tmp60;
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp62;
  TRACE_POP
}

/*
equation index: 321
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm1.Pbubl then MatStm1.totMolFlo.SeedNLSJac3[3] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac3[3,1] + MatStm1.compMolFrac.SeedNLSJac3[3,2] else MatStm1.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2]
*/
void splitter1_eqFunction_321(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,321};
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_real tmp66;
  tmp63 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp65 = (modelica_boolean)tmp63;
  if(tmp65)
  {
    tmp66 = jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac3[3] SEED_VAR */;
  }
  else
  {
    tmp64 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp66 = (tmp64?jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */:jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_DIFF_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp66;
  TRACE_POP
}

/*
equation index: 322
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac3._dummyVarNLSJac3 = MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] + MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2]
*/
void splitter1_eqFunction_322(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,322};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 323
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac3[3,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac3[2,2] + MatStm1.compMolFrac[1,2] * MatStm1.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 * (-1.0 + MatStm1.K[2]) / (1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[2])) ^ 2.0 else MatStm1.compMolFrac.SeedNLSJac3[2,2]
*/
void splitter1_eqFunction_323(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,323};
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  modelica_real tmp69;
  modelica_boolean tmp70;
  modelica_real tmp71;
  modelica_boolean tmp72;
  modelica_real tmp73;
  tmp67 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp72 = (modelica_boolean)tmp67;
  if(tmp72)
  {
    tmp73 = jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */;
  }
  else
  {
    tmp68 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp70 = (modelica_boolean)tmp68;
    if(tmp70)
    {
      tmp69 = 1.0 + (data->localData[0]->realVars[96] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[9] /* MatStm1.K[2] variable */);
      tmp71 = jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* MatStm1.vapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[9] /* MatStm1.K[2] variable */)),(tmp69 * tmp69),"(1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[2])) ^ 2.0");
    }
    else
    {
      tmp71 = jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */;
    }
    tmp73 = tmp71;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp73;
  TRACE_POP
}
int splitter1_functionJacNLSJac3_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = splitter1_INDEX_JAC_NLSJac3;
  splitter1_eqFunction_312(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_313(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_314(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_315(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_316(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_317(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_318(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_319(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_320(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_321(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_322(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_323(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 382
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo.SeedNLSJac4[3] + MatStm3.compMolFrac.SeedNLSJac4[3,1] * MatStm3.totMolFlo[3]
*/
void splitter1_eqFunction_382(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,382};
  jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[230] /* MatStm3.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac4[3] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */) * (data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo.SeedNLSJac4[3] + MatStm3.compMolFrac.SeedNLSJac4[3,2] * MatStm3.totMolFlo[3]
*/
void splitter1_eqFunction_383(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,383};
  jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac4[3] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */) * (data->localData[0]->realVars[270] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4 = (-0.02) * MatStm3.totMolFlo.SeedNLSJac4[3]
*/
void splitter1_eqFunction_384(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,384};
  jacobian->tmpVars[2] /* MatStm3.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-0.02) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac4[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
MatStm3._vapPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4 = -MatStm3.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4
*/
void splitter1_eqFunction_385(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,385};
  jacobian->tmpVars[3] /* MatStm3.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm3.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
MatStm3._totMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2] = 50.0 * MatStm3.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4
*/
void splitter1_eqFunction_386(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,386};
  jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */ = (50.0) * (jacobian->tmpVars[2] /* MatStm3.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2] + MatStm3.compMolFrac.SeedNLSJac4[2,1] * MatStm3.totMolFlo[2]
*/
void splitter1_eqFunction_387(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,387};
  jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[228] /* MatStm3.compMolFrac[2,1] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */) * (data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2] + MatStm3.compMolFrac.SeedNLSJac4[2,2] * MatStm3.totMolFlo[2]
*/
void splitter1_eqFunction_388(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,388};
  jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,2] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */) * (data->localData[0]->realVars[269] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm3.Pbubl then MatStm3.totMolFlo.SeedNLSJac4[3] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac4[3,1] + MatStm3.compMolFrac.SeedNLSJac4[3,2] else MatStm3.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2]
*/
void splitter1_eqFunction_389(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,389};
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  modelica_real tmp77;
  RELATIONHYSTERESIS(tmp74, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp76 = (modelica_boolean)tmp74;
  if(tmp76)
  {
    tmp77 = jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac4[3] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp75, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp77 = (tmp75?jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */:jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp77;
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac4._dummyVarNLSJac4 = MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] + MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2]
*/
void splitter1_eqFunction_390(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,390};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac4[3,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac4[2,2] + MatStm3.compMolFrac[1,2] * MatStm3.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 * (-1.0 + MatStm3.K[2]) / (1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[2])) ^ 2.0 else MatStm3.compMolFrac.SeedNLSJac4[2,2]
*/
void splitter1_eqFunction_391(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,391};
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  modelica_real tmp80;
  modelica_boolean tmp81;
  modelica_real tmp82;
  modelica_boolean tmp83;
  modelica_real tmp84;
  RELATIONHYSTERESIS(tmp78, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp83 = (modelica_boolean)tmp78;
  if(tmp83)
  {
    tmp84 = jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp79, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp81 = (modelica_boolean)tmp79;
    if(tmp81)
    {
      tmp80 = 1.0 + (data->localData[0]->realVars[272] /* MatStm3.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[188] /* MatStm3.K[2] variable */);
      tmp82 = jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[227] /* MatStm3.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* MatStm3.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[188] /* MatStm3.K[2] variable */)),(tmp80 * tmp80),"(1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[2])) ^ 2.0");
    }
    else
    {
      tmp82 = jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */;
    }
    tmp84 = tmp82;
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp84;
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac4._dummyVarNLSJac4 = MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] + MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1]
*/
void splitter1_eqFunction_392(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,392};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac4[3,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac4[2,1] + MatStm3.compMolFrac[1,1] * MatStm3.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 * (-1.0 + MatStm3.K[1]) / (1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[1])) ^ 2.0 else MatStm3.compMolFrac.SeedNLSJac4[2,1]
*/
void splitter1_eqFunction_393(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,393};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  modelica_real tmp87;
  modelica_boolean tmp88;
  modelica_real tmp89;
  modelica_boolean tmp90;
  modelica_real tmp91;
  RELATIONHYSTERESIS(tmp85, 101325.0, data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */, 2, GreaterEq);
  tmp90 = (modelica_boolean)tmp85;
  if(tmp90)
  {
    tmp91 = jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp86, 101325.0, data->localData[0]->realVars[193] /* MatStm3.Pdew variable */, 3, GreaterEq);
    tmp88 = (modelica_boolean)tmp86;
    if(tmp88)
    {
      tmp87 = 1.0 + (data->localData[0]->realVars[272] /* MatStm3.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[187] /* MatStm3.K[1] variable */);
      tmp89 = jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[226] /* MatStm3.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* MatStm3.vapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[187] /* MatStm3.K[1] variable */)),(tmp87 * tmp87),"(1.0 + MatStm3.vapPhasMolFrac * (-1.0 + MatStm3.K[1])) ^ 2.0");
    }
    else
    {
      tmp89 = jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */;
    }
    tmp91 = tmp89;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp91;
  TRACE_POP
}
int splitter1_functionJacNLSJac4_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = splitter1_INDEX_JAC_NLSJac4;
  splitter1_eqFunction_382(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_383(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_384(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_385(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_386(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_387(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_388(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_389(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_390(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_391(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_392(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_393(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 441
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.SeedNLSJac5[3] + MatStm2.compMolFrac.SeedNLSJac5[3,1] * MatStm2.totMolFlo[3]
*/
void splitter1_eqFunction_441(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,441};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac5[3] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.SeedNLSJac5[3] + MatStm2.compMolFrac.SeedNLSJac5[3,2] * MatStm2.totMolFlo[3]
*/
void splitter1_eqFunction_442(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,442};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac5[3] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac5._dummyVarNLSJac5 = (-0.02) * MatStm2.totMolFlo.SeedNLSJac5[3]
*/
void splitter1_eqFunction_443(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,443};
  jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (-0.02) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac5[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
MatStm2._vapPhasMolFrac._$pDERNLSJac5._dummyVarNLSJac5 = -MatStm2.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5
*/
void splitter1_eqFunction_444(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,444};
  jacobian->tmpVars[3] /* MatStm2.vapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac5._dummyVarNLSJac5[2] = 50.0 * MatStm2.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5
*/
void splitter1_eqFunction_445(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,445};
  jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */ = (50.0) * (jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2] + MatStm2.compMolFrac.SeedNLSJac5[2,1] * MatStm2.totMolFlo[2]
*/
void splitter1_eqFunction_446(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,446};
  jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2] + MatStm2.compMolFrac.SeedNLSJac5[2,2] * MatStm2.totMolFlo[2]
*/
void splitter1_eqFunction_447(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,447};
  jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac5[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac5[2,2] + MatStm2.compMolFrac[1,2] * MatStm2.vapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 * (-1.0 + MatStm2.K[2]) / (1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[2])) ^ 2.0 else MatStm2.compMolFrac.SeedNLSJac5[2,2]
*/
void splitter1_eqFunction_448(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,448};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  modelica_real tmp94;
  modelica_boolean tmp95;
  modelica_real tmp96;
  modelica_boolean tmp97;
  modelica_real tmp98;
  RELATIONHYSTERESIS(tmp92, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp97 = (modelica_boolean)tmp92;
  if(tmp97)
  {
    tmp98 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp93, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp95 = (modelica_boolean)tmp93;
    if(tmp95)
    {
      tmp94 = 1.0 + (data->localData[0]->realVars[184] /* MatStm2.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[100] /* MatStm2.K[2] variable */);
      tmp96 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* MatStm2.vapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[100] /* MatStm2.K[2] variable */)),(tmp94 * tmp94),"(1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[2])) ^ 2.0");
    }
    else
    {
      tmp96 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */;
    }
    tmp98 = tmp96;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp98;
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac5._dummyVarNLSJac5 = MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] + MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2]
*/
void splitter1_eqFunction_449(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,449};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= MatStm2.Pbubl then MatStm2.totMolFlo.SeedNLSJac5[3] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac5[3,1] + MatStm2.compMolFrac.SeedNLSJac5[3,2] else MatStm2.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2]
*/
void splitter1_eqFunction_450(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,450};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  modelica_real tmp102;
  RELATIONHYSTERESIS(tmp99, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp101 = (modelica_boolean)tmp99;
  if(tmp101)
  {
    tmp102 = jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac5[3] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp100, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp102 = (tmp100?jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */:jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2] JACOBIAN_DIFF_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp102;
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac5._dummyVarNLSJac5 = MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] + MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1]
*/
void splitter1_eqFunction_451(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,451};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac5._dummyVarNLSJac5 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac5[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac5[2,1] + MatStm2.compMolFrac[1,1] * MatStm2.vapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 * (-1.0 + MatStm2.K[1]) / (1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[1])) ^ 2.0 else MatStm2.compMolFrac.SeedNLSJac5[2,1]
*/
void splitter1_eqFunction_452(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,452};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  modelica_real tmp105;
  modelica_boolean tmp106;
  modelica_real tmp107;
  modelica_boolean tmp108;
  modelica_real tmp109;
  RELATIONHYSTERESIS(tmp103, 101325.0, data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */, 0, GreaterEq);
  tmp108 = (modelica_boolean)tmp103;
  if(tmp108)
  {
    tmp109 = jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp104, 101325.0, data->localData[0]->realVars[105] /* MatStm2.Pdew variable */, 1, GreaterEq);
    tmp106 = (modelica_boolean)tmp104;
    if(tmp106)
    {
      tmp105 = 1.0 + (data->localData[0]->realVars[184] /* MatStm2.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[99] /* MatStm2.K[1] variable */);
      tmp107 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[138] /* MatStm2.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* MatStm2.vapPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[99] /* MatStm2.K[1] variable */)),(tmp105 * tmp105),"(1.0 + MatStm2.vapPhasMolFrac * (-1.0 + MatStm2.K[1])) ^ 2.0");
    }
    else
    {
      tmp107 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */;
    }
    tmp109 = tmp107;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp109;
  TRACE_POP
}
int splitter1_functionJacNLSJac5_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = splitter1_INDEX_JAC_NLSJac5;
  splitter1_eqFunction_441(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_442(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_443(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_444(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_445(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_446(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_447(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_448(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_449(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_450(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_451(data, threadData, jacobian, parentJacobian);

  splitter1_eqFunction_452(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}
int splitter1_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int splitter1_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int splitter1_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int splitter1_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}


