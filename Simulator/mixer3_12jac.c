/* Jacobians 8 */
#include "mixer3_model.h"
#include "mixer3_12jac.h"
OMC_DISABLE_OPT
int mixer3_initialAnalyticJacobianNLSJac0(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int mixer3_initialAnalyticJacobianNLSJac1(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int mixer3_initialAnalyticJacobianNLSJac3(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int mixer3_initialAnalyticJacobianNLSJac4(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int mixer3_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int mixer3_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int mixer3_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int mixer3_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}


/*
equation index: 74
type: SIMPLE_ASSIGN
MatStm7._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,1] = MatStm7.compMolFrac[2,1] * MatStm7.totMolFlo.SeedNLSJac0[2] + MatStm7.compMolFrac.SeedNLSJac0[2,1] * MatStm7.totMolFlo[2]
*/
void mixer3_eqFunction_74(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,74};
  jacobian->tmpVars[0] /* MatStm7.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[138] /* MatStm7.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm7.totMolFlo.SeedNLSJac0[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm7.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */) * (data->localData[0]->realVars[180] /* MatStm7.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
MatStm7._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,2] = MatStm7.compMolFrac[2,2] * MatStm7.totMolFlo.SeedNLSJac0[2] + MatStm7.compMolFrac.SeedNLSJac0[2,2] * MatStm7.totMolFlo[2]
*/
void mixer3_eqFunction_75(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,75};
  jacobian->tmpVars[1] /* MatStm7.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[139] /* MatStm7.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm7.totMolFlo.SeedNLSJac0[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm7.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */) * (data->localData[0]->realVars[180] /* MatStm7.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
MatStm7._liqPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = 0.01 * MatStm7.totMolFlo.SeedNLSJac0[2]
*/
void mixer3_eqFunction_76(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,76};
  jacobian->tmpVars[2] /* MatStm7.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm7.totMolFlo.SeedNLSJac0[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
Mixer3._inVapPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0[1] = -MatStm7.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void mixer3_eqFunction_77(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,77};
  jacobian->tmpVars[3] /* Mixer3.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm7.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
MatStm7._totMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3] = 100.0 * Mixer3.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1]
*/
void mixer3_eqFunction_78(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,78};
  jacobian->tmpVars[4] /* MatStm7.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[3] /* Mixer3.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
MatStm7._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,1] = MatStm7.compMolFrac[3,1] * MatStm7.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] + MatStm7.compMolFrac.SeedNLSJac0[3,1] * MatStm7.totMolFlo[3]
*/
void mixer3_eqFunction_79(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,79};
  jacobian->tmpVars[5] /* MatStm7.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[140] /* MatStm7.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm7.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm7.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm7.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 80
type: SIMPLE_ASSIGN
MatStm7._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,2] = MatStm7.compMolFrac[3,2] * MatStm7.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] + MatStm7.compMolFrac.SeedNLSJac0[3,2] * MatStm7.totMolFlo[3]
*/
void mixer3_eqFunction_80(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,80};
  jacobian->tmpVars[6] /* MatStm7.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[141] /* MatStm7.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm7.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm7.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm7.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 81
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm7.Pbubl then MatStm7.compMolFrac.SeedNLSJac0[3,2] else if 101325.0 >= MatStm7.Pdew then MatStm7.compMolFrac.SeedNLSJac0[2,2] + MatStm7.compMolFrac[1,2] * Mixer3.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1] * (-1.0 + MatStm7.K[2]) / (1.0 + Mixer3.inVapPhasMolFrac[1] * (-1.0 + MatStm7.K[2])) ^ 2.0 else MatStm7.compMolFrac.SeedNLSJac0[2,2]
*/
void mixer3_eqFunction_81(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,81};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  tmp2 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm7.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp2;
  if(tmp7)
  {
    tmp8 = jacobian->seedVars[3] /* MatStm7.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */;
  }
  else
  {
    tmp3 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm7.Pdew variable */);
    tmp5 = (modelica_boolean)tmp3;
    if(tmp5)
    {
      tmp4 = 1.0 + (data->localData[0]->realVars[276] /* Mixer3.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[96] /* MatStm7.K[2] variable */);
      tmp6 = jacobian->seedVars[4] /* MatStm7.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[137] /* MatStm7.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* Mixer3.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[96] /* MatStm7.K[2] variable */)),(tmp4 * tmp4),"(1.0 + Mixer3.inVapPhasMolFrac[1] * (-1.0 + MatStm7.K[2])) ^ 2.0");
    }
    else
    {
      tmp6 = jacobian->seedVars[4] /* MatStm7.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */;
    }
    tmp8 = tmp6;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp8;
  TRACE_POP
}

/*
equation index: 82
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac0._dummyVarNLSJac0 = MatStm7.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] + MatStm7.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2]
*/
void mixer3_eqFunction_82(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,82};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm7.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm7.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 83
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm7.Pbubl then MatStm7.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] else if 101325.0 >= MatStm7.Pdew then MatStm7.compMolFrac.SeedNLSJac0[3,1] + MatStm7.compMolFrac.SeedNLSJac0[3,2] else MatStm7.totMolFlo.SeedNLSJac0[2]
*/
void mixer3_eqFunction_83(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,83};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm7.Pbubl variable */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = jacobian->tmpVars[4] /* MatStm7.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp10 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm7.Pdew variable */);
    tmp12 = (tmp10?jacobian->seedVars[1] /* MatStm7.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm7.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm7.totMolFlo.SeedNLSJac0[2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp12;
  TRACE_POP
}

/*
equation index: 84
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac0._dummyVarNLSJac0 = MatStm7.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] + MatStm7.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1]
*/
void mixer3_eqFunction_84(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,84};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm7.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm7.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm7.Pbubl then MatStm7.compMolFrac.SeedNLSJac0[3,1] else if 101325.0 >= MatStm7.Pdew then MatStm7.compMolFrac.SeedNLSJac0[2,1] + MatStm7.compMolFrac[1,1] * Mixer3.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1] * (-1.0 + MatStm7.K[1]) / (1.0 + Mixer3.inVapPhasMolFrac[1] * (-1.0 + MatStm7.K[1])) ^ 2.0 else MatStm7.compMolFrac.SeedNLSJac0[2,1]
*/
void mixer3_eqFunction_85(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,85};
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  tmp13 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm7.Pbubl variable */);
  tmp18 = (modelica_boolean)tmp13;
  if(tmp18)
  {
    tmp19 = jacobian->seedVars[1] /* MatStm7.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */;
  }
  else
  {
    tmp14 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm7.Pdew variable */);
    tmp16 = (modelica_boolean)tmp14;
    if(tmp16)
    {
      tmp15 = 1.0 + (data->localData[0]->realVars[276] /* Mixer3.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[95] /* MatStm7.K[1] variable */);
      tmp17 = jacobian->seedVars[2] /* MatStm7.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[136] /* MatStm7.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* Mixer3.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[1] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[95] /* MatStm7.K[1] variable */)),(tmp15 * tmp15),"(1.0 + Mixer3.inVapPhasMolFrac[1] * (-1.0 + MatStm7.K[1])) ^ 2.0");
    }
    else
    {
      tmp17 = jacobian->seedVars[2] /* MatStm7.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */;
    }
    tmp19 = tmp17;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp19;
  TRACE_POP
}
int mixer3_functionJacNLSJac0_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = mixer3_INDEX_JAC_NLSJac0;
  mixer3_eqFunction_74(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_75(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_76(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_77(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_78(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_79(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_80(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_81(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_82(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_83(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_84(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_85(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 128
type: SIMPLE_ASSIGN
MatStm6._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,1] = MatStm6.compMolFrac[2,1] * MatStm6.totMolFlo.SeedNLSJac1[2] + MatStm6.compMolFrac.SeedNLSJac1[2,1] * MatStm6.totMolFlo[2]
*/
void mixer3_eqFunction_128(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,128};
  jacobian->tmpVars[0] /* MatStm6.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[48] /* MatStm6.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm6.totMolFlo.SeedNLSJac1[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm6.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */) * (data->localData[0]->realVars[90] /* MatStm6.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
MatStm6._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,2] = MatStm6.compMolFrac[2,2] * MatStm6.totMolFlo.SeedNLSJac1[2] + MatStm6.compMolFrac.SeedNLSJac1[2,2] * MatStm6.totMolFlo[2]
*/
void mixer3_eqFunction_129(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,129};
  jacobian->tmpVars[1] /* MatStm6.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[49] /* MatStm6.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm6.totMolFlo.SeedNLSJac1[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm6.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */) * (data->localData[0]->realVars[90] /* MatStm6.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
MatStm6._liqPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1 = 0.01 * MatStm6.totMolFlo.SeedNLSJac1[2]
*/
void mixer3_eqFunction_130(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,130};
  jacobian->tmpVars[2] /* MatStm6.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm6.totMolFlo.SeedNLSJac1[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 131
type: SIMPLE_ASSIGN
Mixer3._inVapPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1[2] = -MatStm6.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1
*/
void mixer3_eqFunction_131(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,131};
  jacobian->tmpVars[3] /* Mixer3.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm6.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
MatStm6._totMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3] = 100.0 * Mixer3.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2]
*/
void mixer3_eqFunction_132(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,132};
  jacobian->tmpVars[4] /* MatStm6.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[3] /* Mixer3.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 133
type: SIMPLE_ASSIGN
MatStm6._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,2] = MatStm6.compMolFrac[3,2] * MatStm6.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] + MatStm6.compMolFrac.SeedNLSJac1[3,2] * MatStm6.totMolFlo[3]
*/
void mixer3_eqFunction_133(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,133};
  jacobian->tmpVars[5] /* MatStm6.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[51] /* MatStm6.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm6.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm6.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */) * (data->localData[0]->realVars[91] /* MatStm6.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
MatStm6._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,1] = MatStm6.compMolFrac[3,1] * MatStm6.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] + MatStm6.compMolFrac.SeedNLSJac1[3,1] * MatStm6.totMolFlo[3]
*/
void mixer3_eqFunction_134(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,134};
  jacobian->tmpVars[6] /* MatStm6.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[50] /* MatStm6.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm6.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm6.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */) * (data->localData[0]->realVars[91] /* MatStm6.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm6.Pbubl then MatStm6.compMolFrac.SeedNLSJac1[3,2] else if 101325.0 >= MatStm6.Pdew then MatStm6.compMolFrac.SeedNLSJac1[2,2] + MatStm6.compMolFrac[1,2] * Mixer3.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2] * (-1.0 + MatStm6.K[2]) / (1.0 + Mixer3.inVapPhasMolFrac[2] * (-1.0 + MatStm6.K[2])) ^ 2.0 else MatStm6.compMolFrac.SeedNLSJac1[2,2]
*/
void mixer3_eqFunction_135(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,135};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
  tmp20 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm6.Pbubl variable */);
  tmp25 = (modelica_boolean)tmp20;
  if(tmp25)
  {
    tmp26 = jacobian->seedVars[2] /* MatStm6.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */;
  }
  else
  {
    tmp21 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm6.Pdew variable */);
    tmp23 = (modelica_boolean)tmp21;
    if(tmp23)
    {
      tmp22 = 1.0 + (data->localData[0]->realVars[277] /* Mixer3.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[6] /* MatStm6.K[2] variable */);
      tmp24 = jacobian->seedVars[4] /* MatStm6.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[47] /* MatStm6.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* Mixer3.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[6] /* MatStm6.K[2] variable */)),(tmp22 * tmp22),"(1.0 + Mixer3.inVapPhasMolFrac[2] * (-1.0 + MatStm6.K[2])) ^ 2.0");
    }
    else
    {
      tmp24 = jacobian->seedVars[4] /* MatStm6.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */;
    }
    tmp26 = tmp24;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp26;
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac1._dummyVarNLSJac1 = MatStm6.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] + MatStm6.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1]
*/
void mixer3_eqFunction_136(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,136};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm6.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm6.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm6.Pbubl then MatStm6.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] else if 101325.0 >= MatStm6.Pdew then MatStm6.compMolFrac.SeedNLSJac1[3,1] + MatStm6.compMolFrac.SeedNLSJac1[3,2] else MatStm6.totMolFlo.SeedNLSJac1[2]
*/
void mixer3_eqFunction_137(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,137};
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_real tmp30;
  tmp27 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm6.Pbubl variable */);
  tmp29 = (modelica_boolean)tmp27;
  if(tmp29)
  {
    tmp30 = jacobian->tmpVars[4] /* MatStm6.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp28 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm6.Pdew variable */);
    tmp30 = (tmp28?jacobian->seedVars[3] /* MatStm6.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm6.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm6.totMolFlo.SeedNLSJac1[2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp30;
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac1._dummyVarNLSJac1 = MatStm6.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] + MatStm6.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2]
*/
void mixer3_eqFunction_138(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,138};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm6.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm6.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm6.Pbubl then MatStm6.compMolFrac.SeedNLSJac1[3,1] else if 101325.0 >= MatStm6.Pdew then MatStm6.compMolFrac.SeedNLSJac1[2,1] + MatStm6.compMolFrac[1,1] * Mixer3.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2] * (-1.0 + MatStm6.K[1]) / (1.0 + Mixer3.inVapPhasMolFrac[2] * (-1.0 + MatStm6.K[1])) ^ 2.0 else MatStm6.compMolFrac.SeedNLSJac1[2,1]
*/
void mixer3_eqFunction_139(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,139};
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  modelica_boolean tmp36;
  modelica_real tmp37;
  tmp31 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm6.Pbubl variable */);
  tmp36 = (modelica_boolean)tmp31;
  if(tmp36)
  {
    tmp37 = jacobian->seedVars[3] /* MatStm6.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */;
  }
  else
  {
    tmp32 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm6.Pdew variable */);
    tmp34 = (modelica_boolean)tmp32;
    if(tmp34)
    {
      tmp33 = 1.0 + (data->localData[0]->realVars[277] /* Mixer3.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[5] /* MatStm6.K[1] variable */);
      tmp35 = jacobian->seedVars[1] /* MatStm6.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[46] /* MatStm6.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* Mixer3.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[2] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[5] /* MatStm6.K[1] variable */)),(tmp33 * tmp33),"(1.0 + Mixer3.inVapPhasMolFrac[2] * (-1.0 + MatStm6.K[1])) ^ 2.0");
    }
    else
    {
      tmp35 = jacobian->seedVars[1] /* MatStm6.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */;
    }
    tmp37 = tmp35;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp37;
  TRACE_POP
}
int mixer3_functionJacNLSJac1_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = mixer3_INDEX_JAC_NLSJac1;
  mixer3_eqFunction_128(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_129(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_130(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_131(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_132(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_133(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_134(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_135(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_136(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_137(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_138(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_139(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 293
type: SIMPLE_ASSIGN
MatStm7._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,2] = MatStm7.compMolFrac[3,2] * MatStm7.totMolFlo.SeedNLSJac3[3] + MatStm7.compMolFrac.SeedNLSJac3[3,2] * MatStm7.totMolFlo[3]
*/
void mixer3_eqFunction_293(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,293};
  jacobian->tmpVars[0] /* MatStm7.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[141] /* MatStm7.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm7.totMolFlo.SeedNLSJac3[3] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm7.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm7.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
MatStm7._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,1] = MatStm7.compMolFrac[3,1] * MatStm7.totMolFlo.SeedNLSJac3[3] + MatStm7.compMolFrac.SeedNLSJac3[3,1] * MatStm7.totMolFlo[3]
*/
void mixer3_eqFunction_294(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,294};
  jacobian->tmpVars[1] /* MatStm7.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[140] /* MatStm7.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm7.totMolFlo.SeedNLSJac3[3] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm7.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */) * (data->localData[0]->realVars[181] /* MatStm7.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
Mixer3._inVapPhasMolFrac._$pDERNLSJac3._dummyVarNLSJac3[1] = 0.01 * MatStm7.totMolFlo.SeedNLSJac3[3]
*/
void mixer3_eqFunction_295(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,295};
  jacobian->tmpVars[2] /* Mixer3.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[1] JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm7.totMolFlo.SeedNLSJac3[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
MatStm7._liqPhasMolFrac._$pDERNLSJac3._dummyVarNLSJac3 = -Mixer3.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[1]
*/
void mixer3_eqFunction_296(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,296};
  jacobian->tmpVars[3] /* MatStm7.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* Mixer3.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
MatStm7._totMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2] = 100.0 * MatStm7.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3
*/
void mixer3_eqFunction_297(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,297};
  jacobian->tmpVars[4] /* MatStm7.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[3] /* MatStm7.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
MatStm7._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,2] = MatStm7.compMolFrac[2,2] * MatStm7.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] + MatStm7.compMolFrac.SeedNLSJac3[2,2] * MatStm7.totMolFlo[2]
*/
void mixer3_eqFunction_298(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,298};
  jacobian->tmpVars[5] /* MatStm7.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[139] /* MatStm7.compMolFrac[2,2] variable */) * (jacobian->tmpVars[4] /* MatStm7.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm7.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */) * (data->localData[0]->realVars[180] /* MatStm7.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
MatStm7._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,1] = MatStm7.compMolFrac[2,1] * MatStm7.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] + MatStm7.compMolFrac.SeedNLSJac3[2,1] * MatStm7.totMolFlo[2]
*/
void mixer3_eqFunction_299(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,299};
  jacobian->tmpVars[6] /* MatStm7.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[138] /* MatStm7.compMolFrac[2,1] variable */) * (jacobian->tmpVars[4] /* MatStm7.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm7.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */) * (data->localData[0]->realVars[180] /* MatStm7.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm7.Pbubl then MatStm7.compMolFrac.SeedNLSJac3[3,1] else if 101325.0 >= MatStm7.Pdew then MatStm7.compMolFrac.SeedNLSJac3[2,1] + MatStm7.compMolFrac[1,1] * Mixer3.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[1] * (-1.0 + MatStm7.K[1]) / (1.0 + Mixer3.inVapPhasMolFrac[1] * (-1.0 + MatStm7.K[1])) ^ 2.0 else MatStm7.compMolFrac.SeedNLSJac3[2,1]
*/
void mixer3_eqFunction_300(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,300};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_real tmp40;
  modelica_boolean tmp41;
  modelica_real tmp42;
  modelica_boolean tmp43;
  modelica_real tmp44;
  tmp38 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm7.Pbubl variable */);
  tmp43 = (modelica_boolean)tmp38;
  if(tmp43)
  {
    tmp44 = jacobian->seedVars[3] /* MatStm7.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */;
  }
  else
  {
    tmp39 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm7.Pdew variable */);
    tmp41 = (modelica_boolean)tmp39;
    if(tmp41)
    {
      tmp40 = 1.0 + (data->localData[0]->realVars[276] /* Mixer3.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[95] /* MatStm7.K[1] variable */);
      tmp42 = jacobian->seedVars[4] /* MatStm7.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[136] /* MatStm7.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[2] /* Mixer3.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[1] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[95] /* MatStm7.K[1] variable */)),(tmp40 * tmp40),"(1.0 + Mixer3.inVapPhasMolFrac[1] * (-1.0 + MatStm7.K[1])) ^ 2.0");
    }
    else
    {
      tmp42 = jacobian->seedVars[4] /* MatStm7.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */;
    }
    tmp44 = tmp42;
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp44;
  TRACE_POP
}

/*
equation index: 301
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac3._dummyVarNLSJac3 = MatStm7.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] + MatStm7.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1]
*/
void mixer3_eqFunction_301(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,301};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm7.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm7.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 302
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm7.Pbubl then MatStm7.totMolFlo.SeedNLSJac3[3] else if 101325.0 >= MatStm7.Pdew then MatStm7.compMolFrac.SeedNLSJac3[3,1] + MatStm7.compMolFrac.SeedNLSJac3[3,2] else MatStm7.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2]
*/
void mixer3_eqFunction_302(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,302};
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_real tmp48;
  tmp45 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm7.Pbubl variable */);
  tmp47 = (modelica_boolean)tmp45;
  if(tmp47)
  {
    tmp48 = jacobian->seedVars[0] /* MatStm7.totMolFlo.SeedNLSJac3[3] SEED_VAR */;
  }
  else
  {
    tmp46 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm7.Pdew variable */);
    tmp48 = (tmp46?jacobian->seedVars[3] /* MatStm7.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm7.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */:jacobian->tmpVars[4] /* MatStm7.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_DIFF_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp48;
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac3._dummyVarNLSJac3 = MatStm7.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] + MatStm7.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2]
*/
void mixer3_eqFunction_303(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,303};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm7.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm7.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm7.Pbubl then MatStm7.compMolFrac.SeedNLSJac3[3,2] else if 101325.0 >= MatStm7.Pdew then MatStm7.compMolFrac.SeedNLSJac3[2,2] + MatStm7.compMolFrac[1,2] * Mixer3.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[1] * (-1.0 + MatStm7.K[2]) / (1.0 + Mixer3.inVapPhasMolFrac[1] * (-1.0 + MatStm7.K[2])) ^ 2.0 else MatStm7.compMolFrac.SeedNLSJac3[2,2]
*/
void mixer3_eqFunction_304(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,304};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_real tmp51;
  modelica_boolean tmp52;
  modelica_real tmp53;
  modelica_boolean tmp54;
  modelica_real tmp55;
  tmp49 = GreaterEq(101325.0,data->localData[0]->realVars[101] /* MatStm7.Pbubl variable */);
  tmp54 = (modelica_boolean)tmp49;
  if(tmp54)
  {
    tmp55 = jacobian->seedVars[1] /* MatStm7.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */;
  }
  else
  {
    tmp50 = GreaterEq(101325.0,data->localData[0]->realVars[102] /* MatStm7.Pdew variable */);
    tmp52 = (modelica_boolean)tmp50;
    if(tmp52)
    {
      tmp51 = 1.0 + (data->localData[0]->realVars[276] /* Mixer3.inVapPhasMolFrac[1] variable */) * (-1.0 + data->localData[0]->realVars[96] /* MatStm7.K[2] variable */);
      tmp53 = jacobian->seedVars[2] /* MatStm7.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[137] /* MatStm7.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[2] /* Mixer3.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[1] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[96] /* MatStm7.K[2] variable */)),(tmp51 * tmp51),"(1.0 + Mixer3.inVapPhasMolFrac[1] * (-1.0 + MatStm7.K[2])) ^ 2.0");
    }
    else
    {
      tmp53 = jacobian->seedVars[2] /* MatStm7.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */;
    }
    tmp55 = tmp53;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp55;
  TRACE_POP
}
int mixer3_functionJacNLSJac3_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = mixer3_INDEX_JAC_NLSJac3;
  mixer3_eqFunction_293(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_294(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_295(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_296(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_297(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_298(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_299(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_300(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_301(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_302(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_303(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_304(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 347
type: SIMPLE_ASSIGN
MatStm6._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,2] = MatStm6.compMolFrac[2,2] * MatStm6.totMolFlo.SeedNLSJac4[2] + MatStm6.compMolFrac.SeedNLSJac4[2,2] * MatStm6.totMolFlo[2]
*/
void mixer3_eqFunction_347(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,347};
  jacobian->tmpVars[0] /* MatStm6.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[49] /* MatStm6.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm6.totMolFlo.SeedNLSJac4[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm6.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */) * (data->localData[0]->realVars[90] /* MatStm6.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
MatStm6._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,1] = MatStm6.compMolFrac[2,1] * MatStm6.totMolFlo.SeedNLSJac4[2] + MatStm6.compMolFrac.SeedNLSJac4[2,1] * MatStm6.totMolFlo[2]
*/
void mixer3_eqFunction_348(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,348};
  jacobian->tmpVars[1] /* MatStm6.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[48] /* MatStm6.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm6.totMolFlo.SeedNLSJac4[2] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm6.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */) * (data->localData[0]->realVars[90] /* MatStm6.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
MatStm6._liqPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4 = 0.01 * MatStm6.totMolFlo.SeedNLSJac4[2]
*/
void mixer3_eqFunction_349(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,349};
  jacobian->tmpVars[2] /* MatStm6.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm6.totMolFlo.SeedNLSJac4[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
Mixer3._inVapPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4[2] = -MatStm6.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4
*/
void mixer3_eqFunction_350(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,350};
  jacobian->tmpVars[3] /* Mixer3.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm6.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
MatStm6._totMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3] = 100.0 * Mixer3.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[2]
*/
void mixer3_eqFunction_351(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,351};
  jacobian->tmpVars[4] /* MatStm6.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[3] /* Mixer3.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
MatStm6._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,2] = MatStm6.compMolFrac[3,2] * MatStm6.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] + MatStm6.compMolFrac.SeedNLSJac4[3,2] * MatStm6.totMolFlo[3]
*/
void mixer3_eqFunction_352(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,352};
  jacobian->tmpVars[5] /* MatStm6.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[51] /* MatStm6.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm6.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm6.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */) * (data->localData[0]->realVars[91] /* MatStm6.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
MatStm6._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,1] = MatStm6.compMolFrac[3,1] * MatStm6.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] + MatStm6.compMolFrac.SeedNLSJac4[3,1] * MatStm6.totMolFlo[3]
*/
void mixer3_eqFunction_353(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,353};
  jacobian->tmpVars[6] /* MatStm6.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[50] /* MatStm6.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm6.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm6.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */) * (data->localData[0]->realVars[91] /* MatStm6.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac4._dummyVarNLSJac4 = MatStm6.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] + MatStm6.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1]
*/
void mixer3_eqFunction_354(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,354};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm6.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm6.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm6.Pbubl then MatStm6.compMolFrac.SeedNLSJac4[3,1] else if 101325.0 >= MatStm6.Pdew then MatStm6.compMolFrac.SeedNLSJac4[2,1] + MatStm6.compMolFrac[1,1] * Mixer3.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[2] * (-1.0 + MatStm6.K[1]) / (1.0 + Mixer3.inVapPhasMolFrac[2] * (-1.0 + MatStm6.K[1])) ^ 2.0 else MatStm6.compMolFrac.SeedNLSJac4[2,1]
*/
void mixer3_eqFunction_355(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
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
  tmp56 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm6.Pbubl variable */);
  tmp61 = (modelica_boolean)tmp56;
  if(tmp61)
  {
    tmp62 = jacobian->seedVars[4] /* MatStm6.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */;
  }
  else
  {
    tmp57 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm6.Pdew variable */);
    tmp59 = (modelica_boolean)tmp57;
    if(tmp59)
    {
      tmp58 = 1.0 + (data->localData[0]->realVars[277] /* Mixer3.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[5] /* MatStm6.K[1] variable */);
      tmp60 = jacobian->seedVars[3] /* MatStm6.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[46] /* MatStm6.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[3] /* Mixer3.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[5] /* MatStm6.K[1] variable */)),(tmp58 * tmp58),"(1.0 + Mixer3.inVapPhasMolFrac[2] * (-1.0 + MatStm6.K[1])) ^ 2.0");
    }
    else
    {
      tmp60 = jacobian->seedVars[3] /* MatStm6.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */;
    }
    tmp62 = tmp60;
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp62;
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm6.Pbubl then MatStm6.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] else if 101325.0 >= MatStm6.Pdew then MatStm6.compMolFrac.SeedNLSJac4[3,1] + MatStm6.compMolFrac.SeedNLSJac4[3,2] else MatStm6.totMolFlo.SeedNLSJac4[2]
*/
void mixer3_eqFunction_356(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,356};
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_real tmp66;
  tmp63 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm6.Pbubl variable */);
  tmp65 = (modelica_boolean)tmp63;
  if(tmp65)
  {
    tmp66 = jacobian->tmpVars[4] /* MatStm6.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp64 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm6.Pdew variable */);
    tmp66 = (tmp64?jacobian->seedVars[4] /* MatStm6.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm6.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */:jacobian->seedVars[0] /* MatStm6.totMolFlo.SeedNLSJac4[2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp66;
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac4._dummyVarNLSJac4 = MatStm6.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] + MatStm6.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2]
*/
void mixer3_eqFunction_357(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,357};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm6.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm6.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm6.Pbubl then MatStm6.compMolFrac.SeedNLSJac4[3,2] else if 101325.0 >= MatStm6.Pdew then MatStm6.compMolFrac.SeedNLSJac4[2,2] + MatStm6.compMolFrac[1,2] * Mixer3.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[2] * (-1.0 + MatStm6.K[2]) / (1.0 + Mixer3.inVapPhasMolFrac[2] * (-1.0 + MatStm6.K[2])) ^ 2.0 else MatStm6.compMolFrac.SeedNLSJac4[2,2]
*/
void mixer3_eqFunction_358(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,358};
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  modelica_real tmp69;
  modelica_boolean tmp70;
  modelica_real tmp71;
  modelica_boolean tmp72;
  modelica_real tmp73;
  tmp67 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm6.Pbubl variable */);
  tmp72 = (modelica_boolean)tmp67;
  if(tmp72)
  {
    tmp73 = jacobian->seedVars[2] /* MatStm6.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */;
  }
  else
  {
    tmp68 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm6.Pdew variable */);
    tmp70 = (modelica_boolean)tmp68;
    if(tmp70)
    {
      tmp69 = 1.0 + (data->localData[0]->realVars[277] /* Mixer3.inVapPhasMolFrac[2] variable */) * (-1.0 + data->localData[0]->realVars[6] /* MatStm6.K[2] variable */);
      tmp71 = jacobian->seedVars[1] /* MatStm6.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */ + DIVISION((data->localData[0]->realVars[47] /* MatStm6.compMolFrac[1,2] variable */) * ((jacobian->tmpVars[3] /* Mixer3.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[6] /* MatStm6.K[2] variable */)),(tmp69 * tmp69),"(1.0 + Mixer3.inVapPhasMolFrac[2] * (-1.0 + MatStm6.K[2])) ^ 2.0");
    }
    else
    {
      tmp71 = jacobian->seedVars[1] /* MatStm6.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */;
    }
    tmp73 = tmp71;
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp73;
  TRACE_POP
}
int mixer3_functionJacNLSJac4_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = mixer3_INDEX_JAC_NLSJac4;
  mixer3_eqFunction_347(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_348(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_349(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_350(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_351(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_352(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_353(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_354(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_355(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_356(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_357(data, threadData, jacobian, parentJacobian);

  mixer3_eqFunction_358(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}
int mixer3_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int mixer3_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int mixer3_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int mixer3_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}


