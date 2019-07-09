/* Jacobians 8 */
#include "mixer1_model.h"
#include "mixer1_12jac.h"
OMC_DISABLE_OPT
int mixer1_initialAnalyticJacobianNLSJac0(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int mixer1_initialAnalyticJacobianNLSJac1(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,5,2,3,3,2};
  const int rowIndex[15] = {0,1,2,3,4,1,4,0,2,3,1,2,4,0,3};
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
int mixer1_initialAnalyticJacobianNLSJac3(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int mixer1_initialAnalyticJacobianNLSJac4(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,5,2,3,2,3};
  const int rowIndex[15] = {0,1,2,3,4,3,4,2,3,4,0,1,0,1,2};
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
  jacobian->sparsePattern.colorCols[2] = 2;
  jacobian->sparsePattern.colorCols[1] = 3;
  jacobian->sparsePattern.colorCols[3] = 3;
  jacobian->sparsePattern.colorCols[0] = 4;
  TRACE_POP
  return 0;
}
int mixer1_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int mixer1_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int mixer1_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int mixer1_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}


/*
equation index: 74
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo.SeedNLSJac0[2] + MatStm3.compMolFrac.SeedNLSJac0[2,1] * MatStm3.totMolFlo[2]
*/
void mixer1_eqFunction_74(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,74};
  jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac0[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */) * (data->localData[0]->realVars[271] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo.SeedNLSJac0[2] + MatStm3.compMolFrac.SeedNLSJac0[2,2] * MatStm3.totMolFlo[2]
*/
void mixer1_eqFunction_75(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,75};
  jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[230] /* MatStm3.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac0[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */) * (data->localData[0]->realVars[271] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = 0.01 * MatStm3.totMolFlo.SeedNLSJac0[2]
*/
void mixer1_eqFunction_76(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,76};
  jacobian->tmpVars[2] /* MatStm3.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac0[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0[1] = -MatStm3.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void mixer1_eqFunction_77(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,77};
  jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm3.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
MatStm3._totMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3] = 100.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1]
*/
void mixer1_eqFunction_78(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,78};
  jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] + MatStm3.compMolFrac.SeedNLSJac0[3,1] * MatStm3.totMolFlo[3]
*/
void mixer1_eqFunction_79(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,79};
  jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */) * (data->localData[0]->realVars[272] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 80
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] + MatStm3.compMolFrac.SeedNLSJac0[3,2] * MatStm3.totMolFlo[3]
*/
void mixer1_eqFunction_80(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,80};
  jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[232] /* MatStm3.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */) * (data->localData[0]->realVars[272] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 81
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac0[3,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac0[2,2] + MatStm3.compMolFrac[1,2] * Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1] * (-1.0 + MatStm3.K[2]) / (1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[2])) ^ 2.0 else MatStm3.compMolFrac.SeedNLSJac0[2,2]
*/
void mixer1_eqFunction_81(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,81};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp5 = (modelica_boolean)tmp0;
  if(tmp5)
  {
    tmp6 = jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp3 = (modelica_boolean)tmp1;
    if(tmp3)
    {
      tmp2 = 1.0 + (data->localData[0]->realVars[276] /* Mixer1.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[187] /* MatStm3.K[2] variable */);
      tmp4 = jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[228] /* MatStm3.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[187] /* MatStm3.K[2] variable */)),(tmp2 * tmp2),"(1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[2])) ^ 2.0");
    }
    else
    {
      tmp4 = jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */;
    }
    tmp6 = tmp4;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp6;
  TRACE_POP
}

/*
equation index: 82
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac0._dummyVarNLSJac0 = MatStm3.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] + MatStm3.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2]
*/
void mixer1_eqFunction_82(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,82};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 83
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm3.Pbubl then MatStm3.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac0[3,1] + MatStm3.compMolFrac.SeedNLSJac0[3,2] else MatStm3.totMolFlo.SeedNLSJac0[2]
*/
void mixer1_eqFunction_83(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,83};
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp7 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp9 = (modelica_boolean)tmp7;
  if(tmp9)
  {
    tmp10 = jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp10 = (tmp8?jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac0[2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp10;
  TRACE_POP
}

/*
equation index: 84
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac0._dummyVarNLSJac0 = MatStm3.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] + MatStm3.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1]
*/
void mixer1_eqFunction_84(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,84};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac0[3,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac0[2,1] + MatStm3.compMolFrac[1,1] * Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1] * (-1.0 + MatStm3.K[1]) / (1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[1])) ^ 2.0 else MatStm3.compMolFrac.SeedNLSJac0[2,1]
*/
void mixer1_eqFunction_85(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,85};
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  tmp11 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp16 = (modelica_boolean)tmp11;
  if(tmp16)
  {
    tmp17 = jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */;
  }
  else
  {
    tmp12 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp14 = (modelica_boolean)tmp12;
    if(tmp14)
    {
      tmp13 = 1.0 + (data->localData[0]->realVars[276] /* Mixer1.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[186] /* MatStm3.K[1] variable */);
      tmp15 = jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[227] /* MatStm3.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[186] /* MatStm3.K[1] variable */)),(tmp13 * tmp13),"(1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[1])) ^ 2.0");
    }
    else
    {
      tmp15 = jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */;
    }
    tmp17 = tmp15;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp17;
  TRACE_POP
}
int mixer1_functionJacNLSJac0_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = mixer1_INDEX_JAC_NLSJac0;
  mixer1_eqFunction_74(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_75(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_76(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_77(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_78(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_79(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_80(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_81(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_82(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_83(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_84(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_85(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 128
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.SeedNLSJac1[2] + MatStm2.compMolFrac.SeedNLSJac1[2,1] * MatStm2.totMolFlo[2]
*/
void mixer1_eqFunction_128(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,128};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[139] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac1[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.SeedNLSJac1[2] + MatStm2.compMolFrac.SeedNLSJac1[2,2] * MatStm2.totMolFlo[2]
*/
void mixer1_eqFunction_129(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,129};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac1[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1 = 0.01 * MatStm2.totMolFlo.SeedNLSJac1[2]
*/
void mixer1_eqFunction_130(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,130};
  jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac1[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 131
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1[2] = -MatStm2.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1
*/
void mixer1_eqFunction_131(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,131};
  jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3] = 100.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2]
*/
void mixer1_eqFunction_132(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,132};
  jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 133
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] + MatStm2.compMolFrac.SeedNLSJac1[3,2] * MatStm2.totMolFlo[3]
*/
void mixer1_eqFunction_133(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,133};
  jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] + MatStm2.compMolFrac.SeedNLSJac1[3,1] * MatStm2.totMolFlo[3]
*/
void mixer1_eqFunction_134(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,134};
  jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac1[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac1[2,2] + MatStm2.compMolFrac[1,2] * Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2] * (-1.0 + MatStm2.K[2]) / (1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[2])) ^ 2.0 else MatStm2.compMolFrac.SeedNLSJac1[2,2]
*/
void mixer1_eqFunction_135(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,135};
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  tmp18 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp23 = (modelica_boolean)tmp18;
  if(tmp23)
  {
    tmp24 = jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */;
  }
  else
  {
    tmp19 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp21 = (modelica_boolean)tmp19;
    if(tmp21)
    {
      tmp20 = 1.0 + (data->localData[0]->realVars[277] /* Mixer1.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[97] /* MatStm2.K[2] variable */);
      tmp22 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[138] /* MatStm2.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[97] /* MatStm2.K[2] variable */)),(tmp20 * tmp20),"(1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[2])) ^ 2.0");
    }
    else
    {
      tmp22 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */;
    }
    tmp24 = tmp22;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp24;
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac1._dummyVarNLSJac1 = MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] + MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1]
*/
void mixer1_eqFunction_136(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,136};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm2.Pbubl then MatStm2.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac1[3,1] + MatStm2.compMolFrac.SeedNLSJac1[3,2] else MatStm2.totMolFlo.SeedNLSJac1[2]
*/
void mixer1_eqFunction_137(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,137};
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_real tmp28;
  tmp25 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp27 = (modelica_boolean)tmp25;
  if(tmp27)
  {
    tmp28 = jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp26 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp28 = (tmp26?jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac1[2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp28;
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac1._dummyVarNLSJac1 = MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] + MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2]
*/
void mixer1_eqFunction_138(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,138};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac1[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac1[2,1] + MatStm2.compMolFrac[1,1] * Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2] * (-1.0 + MatStm2.K[1]) / (1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[1])) ^ 2.0 else MatStm2.compMolFrac.SeedNLSJac1[2,1]
*/
void mixer1_eqFunction_139(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,139};
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  tmp29 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp34 = (modelica_boolean)tmp29;
  if(tmp34)
  {
    tmp35 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */;
  }
  else
  {
    tmp30 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp32 = (modelica_boolean)tmp30;
    if(tmp32)
    {
      tmp31 = 1.0 + (data->localData[0]->realVars[277] /* Mixer1.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[96] /* MatStm2.K[1] variable */);
      tmp33 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[137] /* MatStm2.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[96] /* MatStm2.K[1] variable */)),(tmp31 * tmp31),"(1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[1])) ^ 2.0");
    }
    else
    {
      tmp33 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */;
    }
    tmp35 = tmp33;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp35;
  TRACE_POP
}
int mixer1_functionJacNLSJac1_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = mixer1_INDEX_JAC_NLSJac1;
  mixer1_eqFunction_128(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_129(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_130(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_131(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_132(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_133(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_134(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_135(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_136(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_137(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_138(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_139(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 293
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo.SeedNLSJac3[3] + MatStm3.compMolFrac.SeedNLSJac3[3,2] * MatStm3.totMolFlo[3]
*/
void mixer1_eqFunction_293(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,293};
  jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[232] /* MatStm3.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac3[3] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */) * (data->localData[0]->realVars[272] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo.SeedNLSJac3[3] + MatStm3.compMolFrac.SeedNLSJac3[3,1] * MatStm3.totMolFlo[3]
*/
void mixer1_eqFunction_294(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,294};
  jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac3[3] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */) * (data->localData[0]->realVars[272] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac3._dummyVarNLSJac3[1] = 0.01 * MatStm3.totMolFlo.SeedNLSJac3[3]
*/
void mixer1_eqFunction_295(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,295};
  jacobian->tmpVars[2] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[1] JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac3[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac._$pDERNLSJac3._dummyVarNLSJac3 = -Mixer1.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[1]
*/
void mixer1_eqFunction_296(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,296};
  jacobian->tmpVars[3] /* MatStm3.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
MatStm3._totMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2] = 100.0 * MatStm3.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3
*/
void mixer1_eqFunction_297(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,297};
  jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[3] /* MatStm3.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] + MatStm3.compMolFrac.SeedNLSJac3[2,2] * MatStm3.totMolFlo[2]
*/
void mixer1_eqFunction_298(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,298};
  jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[230] /* MatStm3.compMolFrac[2,2] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */) * (data->localData[0]->realVars[271] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] + MatStm3.compMolFrac.SeedNLSJac3[2,1] * MatStm3.totMolFlo[2]
*/
void mixer1_eqFunction_299(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,299};
  jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,1] variable */) * (jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */) * (data->localData[0]->realVars[271] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac3[3,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac3[2,1] + MatStm3.compMolFrac[1,1] * Mixer1.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[1] * (-1.0 + MatStm3.K[1]) / (1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[1])) ^ 2.0 else MatStm3.compMolFrac.SeedNLSJac3[2,1]
*/
void mixer1_eqFunction_300(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,300};
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_real tmp38;
  modelica_boolean tmp39;
  modelica_real tmp40;
  modelica_boolean tmp41;
  modelica_real tmp42;
  tmp36 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp41 = (modelica_boolean)tmp36;
  if(tmp41)
  {
    tmp42 = jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */;
  }
  else
  {
    tmp37 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp39 = (modelica_boolean)tmp37;
    if(tmp39)
    {
      tmp38 = 1.0 + (data->localData[0]->realVars[276] /* Mixer1.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[186] /* MatStm3.K[1] variable */);
      tmp40 = jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[227] /* MatStm3.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[2] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[1] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[186] /* MatStm3.K[1] variable */)),(tmp38 * tmp38),"(1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[1])) ^ 2.0");
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
equation index: 301
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac3._dummyVarNLSJac3 = MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] + MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1]
*/
void mixer1_eqFunction_301(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,301};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 302
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm3.Pbubl then MatStm3.totMolFlo.SeedNLSJac3[3] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac3[3,1] + MatStm3.compMolFrac.SeedNLSJac3[3,2] else MatStm3.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2]
*/
void mixer1_eqFunction_302(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,302};
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_real tmp46;
  tmp43 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp45 = (modelica_boolean)tmp43;
  if(tmp45)
  {
    tmp46 = jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac3[3] SEED_VAR */;
  }
  else
  {
    tmp44 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp46 = (tmp44?jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */:jacobian->tmpVars[4] /* MatStm3.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_DIFF_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp46;
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac3._dummyVarNLSJac3 = MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] + MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2]
*/
void mixer1_eqFunction_303(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,303};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm3.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac3[3,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac3[2,2] + MatStm3.compMolFrac[1,2] * Mixer1.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[1] * (-1.0 + MatStm3.K[2]) / (1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[2])) ^ 2.0 else MatStm3.compMolFrac.SeedNLSJac3[2,2]
*/
void mixer1_eqFunction_304(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,304};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_real tmp49;
  modelica_boolean tmp50;
  modelica_real tmp51;
  modelica_boolean tmp52;
  modelica_real tmp53;
  tmp47 = GreaterEq(101325.0,data->localData[0]->realVars[192] /* MatStm3.Pbubl variable */);
  tmp52 = (modelica_boolean)tmp47;
  if(tmp52)
  {
    tmp53 = jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */;
  }
  else
  {
    tmp48 = GreaterEq(101325.0,data->localData[0]->realVars[193] /* MatStm3.Pdew variable */);
    tmp50 = (modelica_boolean)tmp48;
    if(tmp50)
    {
      tmp49 = 1.0 + (data->localData[0]->realVars[276] /* Mixer1.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[187] /* MatStm3.K[2] variable */);
      tmp51 = jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[228] /* MatStm3.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[2] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[1] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[187] /* MatStm3.K[2] variable */)),(tmp49 * tmp49),"(1.0 + Mixer1.inVapPhasMolFrac[1] * (-1.0 + MatStm3.K[2])) ^ 2.0");
    }
    else
    {
      tmp51 = jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */;
    }
    tmp53 = tmp51;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp53;
  TRACE_POP
}
int mixer1_functionJacNLSJac3_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = mixer1_INDEX_JAC_NLSJac3;
  mixer1_eqFunction_293(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_294(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_295(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_296(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_297(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_298(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_299(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_300(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_301(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_302(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_303(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_304(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 347
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.SeedNLSJac4[2] + MatStm2.compMolFrac.SeedNLSJac4[2,2] * MatStm2.totMolFlo[2]
*/
void mixer1_eqFunction_347(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,347};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac4[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.SeedNLSJac4[2] + MatStm2.compMolFrac.SeedNLSJac4[2,1] * MatStm2.totMolFlo[2]
*/
void mixer1_eqFunction_348(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,348};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[139] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac4[2] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4 = 0.01 * MatStm2.totMolFlo.SeedNLSJac4[2]
*/
void mixer1_eqFunction_349(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,349};
  jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac4[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4[2] = -MatStm2.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4
*/
void mixer1_eqFunction_350(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
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
MatStm2._totMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3] = 100.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[2]
*/
void mixer1_eqFunction_351(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,351};
  jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] + MatStm2.compMolFrac.SeedNLSJac4[3,2] * MatStm2.totMolFlo[3]
*/
void mixer1_eqFunction_352(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,352};
  jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] + MatStm2.compMolFrac.SeedNLSJac4[3,1] * MatStm2.totMolFlo[3]
*/
void mixer1_eqFunction_353(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,353};
  jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */) * (data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac4._dummyVarNLSJac4 = MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] + MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1]
*/
void mixer1_eqFunction_354(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,354};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac4[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac4[2,1] + MatStm2.compMolFrac[1,1] * Mixer1.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[2] * (-1.0 + MatStm2.K[1]) / (1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[1])) ^ 2.0 else MatStm2.compMolFrac.SeedNLSJac4[2,1]
*/
void mixer1_eqFunction_355(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,355};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_real tmp56;
  modelica_boolean tmp57;
  modelica_real tmp58;
  modelica_boolean tmp59;
  modelica_real tmp60;
  tmp54 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp59 = (modelica_boolean)tmp54;
  if(tmp59)
  {
    tmp60 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */;
  }
  else
  {
    tmp55 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp57 = (modelica_boolean)tmp55;
    if(tmp57)
    {
      tmp56 = 1.0 + (data->localData[0]->realVars[277] /* Mixer1.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[96] /* MatStm2.K[1] variable */);
      tmp58 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[137] /* MatStm2.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[96] /* MatStm2.K[1] variable */)),(tmp56 * tmp56),"(1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[1])) ^ 2.0");
    }
    else
    {
      tmp58 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */;
    }
    tmp60 = tmp58;
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp60;
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm2.Pbubl then MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac4[3,1] + MatStm2.compMolFrac.SeedNLSJac4[3,2] else MatStm2.totMolFlo.SeedNLSJac4[2]
*/
void mixer1_eqFunction_356(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,356};
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  modelica_real tmp64;
  tmp61 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp63 = (modelica_boolean)tmp61;
  if(tmp63)
  {
    tmp64 = jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp62 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp64 = (tmp62?jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac4[2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp64;
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac4._dummyVarNLSJac4 = MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] + MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2]
*/
void mixer1_eqFunction_357(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,357};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac4[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac4[2,2] + MatStm2.compMolFrac[1,2] * Mixer1.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[2] * (-1.0 + MatStm2.K[2]) / (1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[2])) ^ 2.0 else MatStm2.compMolFrac.SeedNLSJac4[2,2]
*/
void mixer1_eqFunction_358(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
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
  tmp65 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm2.Pbubl variable */);
  tmp70 = (modelica_boolean)tmp65;
  if(tmp70)
  {
    tmp71 = jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */;
  }
  else
  {
    tmp66 = GreaterEq(101325.0,data->localData[0]->realVars[103] /* MatStm2.Pdew variable */);
    tmp68 = (modelica_boolean)tmp66;
    if(tmp68)
    {
      tmp67 = 1.0 + (data->localData[0]->realVars[277] /* Mixer1.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[97] /* MatStm2.K[2] variable */);
      tmp69 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[138] /* MatStm2.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[97] /* MatStm2.K[2] variable */)),(tmp67 * tmp67),"(1.0 + Mixer1.inVapPhasMolFrac[2] * (-1.0 + MatStm2.K[2])) ^ 2.0");
    }
    else
    {
      tmp69 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */;
    }
    tmp71 = tmp69;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp71;
  TRACE_POP
}
int mixer1_functionJacNLSJac4_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = mixer1_INDEX_JAC_NLSJac4;
  mixer1_eqFunction_347(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_348(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_349(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_350(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_351(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_352(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_353(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_354(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_355(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_356(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_357(data, threadData, jacobian, parentJacobian);

  mixer1_eqFunction_358(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}
int mixer1_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int mixer1_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int mixer1_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int mixer1_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}


