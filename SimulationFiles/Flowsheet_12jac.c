/* Jacobians 8 */
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
int Flowsheet_initialAnalyticJacobianNLSJac3(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {2,4,1,2,3,1,2,3,0,1,4,0,1,4};
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
equation index: 70
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo.SeedNLSJac0[2] + MatStm1.compMolFrac.SeedNLSJac0[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_70(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,70};
  jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[48] /* MatStm1.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */) * (data->localData[0]->realVars[90] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
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
  jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[49] /* MatStm1.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */) * (data->localData[0]->realVars[90] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 72
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = 0.0125 * MatStm1.totMolFlo.SeedNLSJac0[2]
*/
void Flowsheet_eqFunction_72(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,72};
  jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (0.0125) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 73
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0[1] = -MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void Flowsheet_eqFunction_73(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,73};
  jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
MatStm1._totMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3] = 80.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1]
*/
void Flowsheet_eqFunction_74(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,74};
  jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */ = (80.0) * (jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] + MatStm1.compMolFrac.SeedNLSJac0[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_75(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,75};
  jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[50] /* MatStm1.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */) * (data->localData[0]->realVars[91] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] + MatStm1.compMolFrac.SeedNLSJac0[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_76(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,76};
  jacobian->tmpVars[6] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */) * (data->localData[0]->realVars[91] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac0._dummyVarNLSJac0 = MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] + MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2]
*/
void Flowsheet_eqFunction_77(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,77};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac0[3,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac0[3,2] - MatStm1.K[2] * MatStm1.compMolFrac.SeedNLSJac0[2,2] else MatStm1.compMolFrac.SeedNLSJac0[2,2]
*/
void Flowsheet_eqFunction_78(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,78};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp2 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp4 = (modelica_boolean)tmp2;
  if(tmp4)
  {
    tmp5 = jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */;
  }
  else
  {
    tmp3 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp5 = (tmp3?jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */ - ((data->localData[0]->realVars[6] /* MatStm1.K[2] variable */) * (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */)):jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp5;
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac0._dummyVarNLSJac0 = MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] + MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1]
*/
void Flowsheet_eqFunction_79(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,79};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 80
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac0[2,1] + MatStm1.compMolFrac.SeedNLSJac0[2,2] else MatStm1.compMolFrac.SeedNLSJac0[3,1] + MatStm1.compMolFrac.SeedNLSJac0[3,2]
*/
void Flowsheet_eqFunction_80(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,80};
  modelica_boolean tmp6;
  tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = (tmp6?jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */:jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 81
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac0[3,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac0[3,1] - MatStm1.K[1] * MatStm1.compMolFrac.SeedNLSJac0[2,1] else MatStm1.compMolFrac.SeedNLSJac0[2,1]
*/
void Flowsheet_eqFunction_81(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,81};
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp7 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp9 = (modelica_boolean)tmp7;
  if(tmp9)
  {
    tmp10 = jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */;
  }
  else
  {
    tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp10 = (tmp8?jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ - ((data->localData[0]->realVars[5] /* MatStm1.K[1] variable */) * (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */)):jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp10;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac0_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac0;
  Flowsheet_eqFunction_70(data, threadData, jacobian, parentJacobian);

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
equation index: 124
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.SeedNLSJac1[3] + MatStm2.compMolFrac.SeedNLSJac1[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_124(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,124};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac1[3] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 125
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.SeedNLSJac1[3] + MatStm2.compMolFrac.SeedNLSJac1[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_125(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,125};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac1[3] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 126
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1[2] = 0.01428571428571429 * MatStm2.totMolFlo.SeedNLSJac1[3]
*/
void Flowsheet_eqFunction_126(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,126};
  jacobian->tmpVars[2] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */ = (0.01428571428571429) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac1[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 127
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1 = -Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2]
*/
void Flowsheet_eqFunction_127(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,127};
  jacobian->tmpVars[3] /* MatStm2.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 128
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2] = 70.0 * MatStm2.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1
*/
void Flowsheet_eqFunction_128(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,128};
  jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */ = (70.0) * (jacobian->tmpVars[3] /* MatStm2.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] + MatStm2.compMolFrac.SeedNLSJac1[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_129(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,129};
  jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[138] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */) * (data->localData[0]->realVars[180] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] + MatStm2.compMolFrac.SeedNLSJac1[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_130(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,130};
  jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[139] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */) * (data->localData[0]->realVars[180] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 131
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac1._dummyVarNLSJac1 = MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] + MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2]
*/
void Flowsheet_eqFunction_131(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,131};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac1[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac1[3,2] - MatStm2.K[2] * MatStm2.compMolFrac.SeedNLSJac1[2,2] else MatStm2.compMolFrac.SeedNLSJac1[2,2]
*/
void Flowsheet_eqFunction_132(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,132};
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  tmp11 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp13 = (modelica_boolean)tmp11;
  if(tmp13)
  {
    tmp14 = jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */;
  }
  else
  {
    tmp12 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp14 = (tmp12?jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */ - ((data->localData[0]->realVars[96] /* MatStm2.K[2] variable */) * (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */)):jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp14;
  TRACE_POP
}

/*
equation index: 133
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac1._dummyVarNLSJac1 = MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] + MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1]
*/
void Flowsheet_eqFunction_133(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,133};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac1[2,1] + MatStm2.compMolFrac.SeedNLSJac1[2,2] else MatStm2.compMolFrac.SeedNLSJac1[3,1] + MatStm2.compMolFrac.SeedNLSJac1[3,2]
*/
void Flowsheet_eqFunction_134(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,134};
  modelica_boolean tmp15;
  tmp15 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (tmp15?jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */:jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac1[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac1[3,1] - MatStm2.K[1] * MatStm2.compMolFrac.SeedNLSJac1[2,1] else MatStm2.compMolFrac.SeedNLSJac1[2,1]
*/
void Flowsheet_eqFunction_135(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,135};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  tmp16 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp18 = (modelica_boolean)tmp16;
  if(tmp18)
  {
    tmp19 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */;
  }
  else
  {
    tmp17 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp19 = (tmp17?jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */ - ((data->localData[0]->realVars[95] /* MatStm2.K[1] variable */) * (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */)):jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp19;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac1_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac1;
  Flowsheet_eqFunction_124(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_125(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_126(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_127(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_128(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_129(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_130(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_131(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_132(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_133(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_134(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_135(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 293
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo.SeedNLSJac3[2] + MatStm1.compMolFrac.SeedNLSJac3[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_293(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,293};
  jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[49] /* MatStm1.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac3[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */) * (data->localData[0]->realVars[90] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo.SeedNLSJac3[2] + MatStm1.compMolFrac.SeedNLSJac3[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_294(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,294};
  jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[48] /* MatStm1.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac3[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */) * (data->localData[0]->realVars[90] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac._$pDERNLSJac3._dummyVarNLSJac3 = 0.0125 * MatStm1.totMolFlo.SeedNLSJac3[2]
*/
void Flowsheet_eqFunction_295(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,295};
  jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (0.0125) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac3[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac3._dummyVarNLSJac3[1] = -MatStm1.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3
*/
void Flowsheet_eqFunction_296(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,296};
  jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[1] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
MatStm1._totMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3] = 80.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[1]
*/
void Flowsheet_eqFunction_297(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,297};
  jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_DIFF_VAR */ = (80.0) * (jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] + MatStm1.compMolFrac.SeedNLSJac3[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_298(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,298};
  jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */) * (data->localData[0]->realVars[91] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] + MatStm1.compMolFrac.SeedNLSJac3[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_299(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,299};
  jacobian->tmpVars[6] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[50] /* MatStm1.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */) * (data->localData[0]->realVars[91] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac3[3,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac3[3,2] - MatStm1.K[2] * MatStm1.compMolFrac.SeedNLSJac3[2,2] else MatStm1.compMolFrac.SeedNLSJac3[2,2]
*/
void Flowsheet_eqFunction_300(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,300};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_real tmp23;
  tmp20 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp22 = (modelica_boolean)tmp20;
  if(tmp22)
  {
    tmp23 = jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */;
  }
  else
  {
    tmp21 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp23 = (tmp21?jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */ - ((data->localData[0]->realVars[6] /* MatStm1.K[2] variable */) * (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */)):jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp23;
  TRACE_POP
}

/*
equation index: 301
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac3[2,1] + MatStm1.compMolFrac.SeedNLSJac3[2,2] else MatStm1.compMolFrac.SeedNLSJac3[3,1] + MatStm1.compMolFrac.SeedNLSJac3[3,2]
*/
void Flowsheet_eqFunction_301(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,301};
  modelica_boolean tmp24;
  tmp24 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  jacobian->resultVars[1] /* $res2.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = (tmp24?jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */:jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 302
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac3._dummyVarNLSJac3 = MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] + MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1]
*/
void Flowsheet_eqFunction_302(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,302};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac3[3,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac3[3,1] - MatStm1.K[1] * MatStm1.compMolFrac.SeedNLSJac3[2,1] else MatStm1.compMolFrac.SeedNLSJac3[2,1]
*/
void Flowsheet_eqFunction_303(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,303};
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_real tmp28;
  tmp25 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp27 = (modelica_boolean)tmp25;
  if(tmp27)
  {
    tmp28 = jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */;
  }
  else
  {
    tmp26 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp28 = (tmp26?jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */ - ((data->localData[0]->realVars[5] /* MatStm1.K[1] variable */) * (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */)):jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */);
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp28;
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac3._dummyVarNLSJac3 = MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] + MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2]
*/
void Flowsheet_eqFunction_304(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,304};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac3_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac3;
  Flowsheet_eqFunction_293(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_294(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_295(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_296(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_297(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_298(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_299(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_300(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_301(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_302(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_303(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_304(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 347
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.SeedNLSJac4[2] + MatStm2.compMolFrac.SeedNLSJac4[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_347(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,347};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[138] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac4[2] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */) * (data->localData[0]->realVars[180] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.SeedNLSJac4[2] + MatStm2.compMolFrac.SeedNLSJac4[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_348(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,348};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[139] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac4[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */) * (data->localData[0]->realVars[180] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4 = 0.01428571428571429 * MatStm2.totMolFlo.SeedNLSJac4[2]
*/
void Flowsheet_eqFunction_349(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,349};
  jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (0.01428571428571429) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac4[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4[2] = -MatStm2.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4
*/
void Flowsheet_eqFunction_350(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,350};
  jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3] = 70.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[2]
*/
void Flowsheet_eqFunction_351(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,351};
  jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */ = (70.0) * (jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] + MatStm2.compMolFrac.SeedNLSJac4[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_352(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,352};
  jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[3] variable */);
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
  jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac4[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac4[3,2] - MatStm2.K[2] * MatStm2.compMolFrac.SeedNLSJac4[2,2] else MatStm2.compMolFrac.SeedNLSJac4[2,2]
*/
void Flowsheet_eqFunction_354(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,354};
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_real tmp32;
  tmp29 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp31 = (modelica_boolean)tmp29;
  if(tmp31)
  {
    tmp32 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */;
  }
  else
  {
    tmp30 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp32 = (tmp30?jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */ - ((data->localData[0]->realVars[96] /* MatStm2.K[2] variable */) * (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */)):jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp32;
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac4[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac4[3,1] - MatStm2.K[1] * MatStm2.compMolFrac.SeedNLSJac4[2,1] else MatStm2.compMolFrac.SeedNLSJac4[2,1]
*/
void Flowsheet_eqFunction_355(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,355};
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_real tmp36;
  tmp33 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  tmp35 = (modelica_boolean)tmp33;
  if(tmp35)
  {
    tmp36 = jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */;
  }
  else
  {
    tmp34 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pdew variable */);
    tmp36 = (tmp34?jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */ - ((data->localData[0]->realVars[95] /* MatStm2.K[1] variable */) * (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */)):jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp36;
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac4[2,1] + MatStm2.compMolFrac.SeedNLSJac4[2,2] else MatStm2.compMolFrac.SeedNLSJac4[3,1] + MatStm2.compMolFrac.SeedNLSJac4[3,2]
*/
void Flowsheet_eqFunction_356(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,356};
  modelica_boolean tmp37;
  tmp37 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (tmp37?jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */:jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac4._dummyVarNLSJac4 = MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] + MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2]
*/
void Flowsheet_eqFunction_357(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,357};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac4._dummyVarNLSJac4 = MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] + MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1]
*/
void Flowsheet_eqFunction_358(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,358};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac4_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac4;
  Flowsheet_eqFunction_347(data, threadData, jacobian, parentJacobian);

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


