/* Jacobians 8 */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac0(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {1,3,5,4,5,6,4,5,6,0,3,4,1,2,4,1,2,4,0,3,4};
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
  const int rowIndex[21] = {0,2,5,4,5,6,2,3,4,4,5,6,2,3,4,0,1,4,0,1,4};
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
int Flowsheet_initialAnalyticJacobianNLSJac3(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {1,5,6,3,4,5,3,4,5,2,3,6,2,3,6,0,1,3,0,1,3};
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
  const int rowIndex[21] = {1,2,6,2,3,5,4,5,6,4,5,6,2,3,5,0,1,5,0,1,5};
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
equation index: 102
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.SeedNLSJac0[2] + MatStm2.compMolFrac.SeedNLSJac0[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_102(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,102};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac0[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 103
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,3] = MatStm2.compMolFrac[2,3] * MatStm2.totMolFlo.SeedNLSJac0[2] + MatStm2.compMolFrac.SeedNLSJac0[2,3] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_103(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,103};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac0[2] SEED_VAR */) + (jacobian->seedVars[6] /* MatStm2.compMolFrac.SeedNLSJac0[2,3] SEED_VAR */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 104
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.SeedNLSJac0[2] + MatStm2.compMolFrac.SeedNLSJac0[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_104(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,104};
  jacobian->tmpVars[2] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac0[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 105
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = 0.01 * MatStm2.totMolFlo.SeedNLSJac0[2]
*/
void Flowsheet_eqFunction_105(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,105};
  jacobian->tmpVars[3] /* MatStm2.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac0[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 106
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0[2] = -MatStm2.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void Flowsheet_eqFunction_106(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,106};
  jacobian->tmpVars[4] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[3] /* MatStm2.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 107
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3] = 100.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[2]
*/
void Flowsheet_eqFunction_107(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,107};
  jacobian->tmpVars[5] /* MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[4] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 108
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] + MatStm2.compMolFrac.SeedNLSJac0[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_108(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,108};
  jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->tmpVars[5] /* MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 109
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,3] = MatStm2.compMolFrac[3,3] * MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] + MatStm2.compMolFrac.SeedNLSJac0[3,3] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_109(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,109};
  jacobian->tmpVars[7] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */) * (jacobian->tmpVars[5] /* MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac0[3,3] SEED_VAR */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 110
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] + MatStm2.compMolFrac.SeedNLSJac0[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_110(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,110};
  jacobian->tmpVars[8] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->tmpVars[5] /* MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[5] /* MatStm2.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 111
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac0[3,3] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac0[3,3] - MatStm2.K[3] * MatStm2.compMolFrac.SeedNLSJac0[2,3] else MatStm2.compMolFrac.SeedNLSJac0[2,3]
*/
void Flowsheet_eqFunction_111(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,111};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac0[3,3] SEED_VAR */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp3 = (tmp1?jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac0[3,3] SEED_VAR */ - ((data->localData[0]->realVars[128] /* MatStm2.K[3] variable */) * (jacobian->seedVars[6] /* MatStm2.compMolFrac.SeedNLSJac0[2,3] SEED_VAR */)):jacobian->seedVars[6] /* MatStm2.compMolFrac.SeedNLSJac0[2,3] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp3;
  TRACE_POP
}

/*
equation index: 112
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac0._dummyVarNLSJac0 = MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] + MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2]
*/
void Flowsheet_eqFunction_112(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,112};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[8] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[2] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 113
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac0[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac0[3,2] - MatStm2.K[2] * MatStm2.compMolFrac.SeedNLSJac0[2,2] else MatStm2.compMolFrac.SeedNLSJac0[2,2]
*/
void Flowsheet_eqFunction_113(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,113};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = jacobian->seedVars[5] /* MatStm2.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp7 = (tmp5?jacobian->seedVars[5] /* MatStm2.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */ - ((data->localData[0]->realVars[127] /* MatStm2.K[2] variable */) * (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */)):jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp7;
  TRACE_POP
}

/*
equation index: 114
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac0._dummyVarNLSJac0 = MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,3] + MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,3]
*/
void Flowsheet_eqFunction_114(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,114};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[7] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 115
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac0[2,1] + MatStm2.compMolFrac.SeedNLSJac0[2,2] + MatStm2.compMolFrac.SeedNLSJac0[2,3] else MatStm2.compMolFrac.SeedNLSJac0[3,1] + MatStm2.compMolFrac.SeedNLSJac0[3,2] + MatStm2.compMolFrac.SeedNLSJac0[3,3]
*/
void Flowsheet_eqFunction_115(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,115};
  modelica_boolean tmp8;
  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = (tmp8?jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */ + jacobian->seedVars[6] /* MatStm2.compMolFrac.SeedNLSJac0[2,3] SEED_VAR */:jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ + jacobian->seedVars[5] /* MatStm2.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */ + jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac0[3,3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac0._dummyVarNLSJac0 = MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] + MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1]
*/
void Flowsheet_eqFunction_116(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,116};
  jacobian->resultVars[5] /* $res6.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac0[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac0[3,1] - MatStm2.K[1] * MatStm2.compMolFrac.SeedNLSJac0[2,1] else MatStm2.compMolFrac.SeedNLSJac0[2,1]
*/
void Flowsheet_eqFunction_117(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,117};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */;
  }
  else
  {
    tmp10 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp12 = (tmp10?jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ - ((data->localData[0]->realVars[126] /* MatStm2.K[1] variable */) * (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */)):jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */);
  }
  jacobian->resultVars[6] /* $res7.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp12;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac0_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac0;
  Flowsheet_eqFunction_102(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_103(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_104(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_105(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_106(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_107(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_108(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_109(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_110(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_111(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_112(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_113(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_114(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_115(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_116(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_117(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 169
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo.SeedNLSJac1[2] + MatStm3.compMolFrac.SeedNLSJac1[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_169(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,169};
  jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac1[2] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 170
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo.SeedNLSJac1[2] + MatStm3.compMolFrac.SeedNLSJac1[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_170(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,170};
  jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac1[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,3] = MatStm3.compMolFrac[2,3] * MatStm3.totMolFlo.SeedNLSJac1[2] + MatStm3.compMolFrac.SeedNLSJac1[2,3] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_171(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,171};
  jacobian->tmpVars[2] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac1[2] SEED_VAR */) + (jacobian->seedVars[5] /* MatStm3.compMolFrac.SeedNLSJac1[2,3] SEED_VAR */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1 = 0.01 * MatStm3.totMolFlo.SeedNLSJac1[2]
*/
void Flowsheet_eqFunction_172(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,172};
  jacobian->tmpVars[3] /* MatStm3.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac1[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1[1] = -MatStm3.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1
*/
void Flowsheet_eqFunction_173(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,173};
  jacobian->tmpVars[4] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[1] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[3] /* MatStm3.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 174
type: SIMPLE_ASSIGN
MatStm3._totMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3] = 100.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[1]
*/
void Flowsheet_eqFunction_174(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,174};
  jacobian->tmpVars[5] /* MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[4] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] + MatStm3.compMolFrac.SeedNLSJac1[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_175(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,175};
  jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */) * (jacobian->tmpVars[5] /* MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] + MatStm3.compMolFrac.SeedNLSJac1[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_176(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,176};
  jacobian->tmpVars[7] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */) * (jacobian->tmpVars[5] /* MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,3] = MatStm3.compMolFrac[3,3] * MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] + MatStm3.compMolFrac.SeedNLSJac1[3,3] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_177(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,177};
  jacobian->tmpVars[8] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */) * (jacobian->tmpVars[5] /* MatStm3.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[6] /* MatStm3.compMolFrac.SeedNLSJac1[3,3] SEED_VAR */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac1._dummyVarNLSJac1 = MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,3] + MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,3]
*/
void Flowsheet_eqFunction_178(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,178};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[8] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[2] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac1[3,3] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac1[3,3] - MatStm3.K[3] * MatStm3.compMolFrac.SeedNLSJac1[2,3] else MatStm3.compMolFrac.SeedNLSJac1[2,3]
*/
void Flowsheet_eqFunction_179(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,179};
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  tmp13 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp15 = (modelica_boolean)tmp13;
  if(tmp15)
  {
    tmp16 = jacobian->seedVars[6] /* MatStm3.compMolFrac.SeedNLSJac1[3,3] SEED_VAR */;
  }
  else
  {
    tmp14 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp16 = (tmp14?jacobian->seedVars[6] /* MatStm3.compMolFrac.SeedNLSJac1[3,3] SEED_VAR */ - ((data->localData[0]->realVars[246] /* MatStm3.K[3] variable */) * (jacobian->seedVars[5] /* MatStm3.compMolFrac.SeedNLSJac1[2,3] SEED_VAR */)):jacobian->seedVars[5] /* MatStm3.compMolFrac.SeedNLSJac1[2,3] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp16;
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac1._dummyVarNLSJac1 = MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] + MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2]
*/
void Flowsheet_eqFunction_180(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,180};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[7] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 181
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac1[3,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac1[3,2] - MatStm3.K[2] * MatStm3.compMolFrac.SeedNLSJac1[2,2] else MatStm3.compMolFrac.SeedNLSJac1[2,2]
*/
void Flowsheet_eqFunction_181(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,181};
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
  jacobian->resultVars[3] /* $res4.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp20;
  TRACE_POP
}

/*
equation index: 182
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac1[2,1] + MatStm3.compMolFrac.SeedNLSJac1[2,2] + MatStm3.compMolFrac.SeedNLSJac1[2,3] else MatStm3.compMolFrac.SeedNLSJac1[3,1] + MatStm3.compMolFrac.SeedNLSJac1[3,2] + MatStm3.compMolFrac.SeedNLSJac1[3,3]
*/
void Flowsheet_eqFunction_182(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,182};
  modelica_boolean tmp21;
  tmp21 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (tmp21?jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */ + jacobian->seedVars[5] /* MatStm3.compMolFrac.SeedNLSJac1[2,3] SEED_VAR */:jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */ + jacobian->seedVars[6] /* MatStm3.compMolFrac.SeedNLSJac1[3,3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 183
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac1._dummyVarNLSJac1 = MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] + MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1]
*/
void Flowsheet_eqFunction_183(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,183};
  jacobian->resultVars[5] /* $res6.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 184
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac1[3,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac1[3,1] - MatStm3.K[1] * MatStm3.compMolFrac.SeedNLSJac1[2,1] else MatStm3.compMolFrac.SeedNLSJac1[2,1]
*/
void Flowsheet_eqFunction_184(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,184};
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
  Flowsheet_eqFunction_169(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_170(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_171(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_172(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_173(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_174(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_175(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_176(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_177(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_178(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_179(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_180(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_181(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_182(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_183(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_184(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 376
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.SeedNLSJac3[2] + MatStm2.compMolFrac.SeedNLSJac3[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_376(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,376};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac3[2] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.SeedNLSJac3[2] + MatStm2.compMolFrac.SeedNLSJac3[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_377(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,377};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac3[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[2,3] = MatStm2.compMolFrac[2,3] * MatStm2.totMolFlo.SeedNLSJac3[2] + MatStm2.compMolFrac.SeedNLSJac3[2,3] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_378(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,378};
  jacobian->tmpVars[2] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac3[2] SEED_VAR */) + (jacobian->seedVars[5] /* MatStm2.compMolFrac.SeedNLSJac3[2,3] SEED_VAR */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac3._dummyVarNLSJac3 = 0.01 * MatStm2.totMolFlo.SeedNLSJac3[2]
*/
void Flowsheet_eqFunction_379(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,379};
  jacobian->tmpVars[3] /* MatStm2.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac3[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac3._dummyVarNLSJac3[2] = -MatStm2.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3
*/
void Flowsheet_eqFunction_380(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,380};
  jacobian->tmpVars[4] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[3] /* MatStm2.liqPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3] = 100.0 * Mixer1.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[2]
*/
void Flowsheet_eqFunction_381(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,381};
  jacobian->tmpVars[5] /* MatStm2.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[4] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac3.dummyVarNLSJac3[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] + MatStm2.compMolFrac.SeedNLSJac3[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_382(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,382};
  jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->tmpVars[5] /* MatStm2.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] + MatStm2.compMolFrac.SeedNLSJac3[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_383(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,383};
  jacobian->tmpVars[7] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->tmpVars[5] /* MatStm2.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac3._dummyVarNLSJac3[3,3] = MatStm2.compMolFrac[3,3] * MatStm2.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] + MatStm2.compMolFrac.SeedNLSJac3[3,3] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_384(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,384};
  jacobian->tmpVars[8] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */) * (jacobian->tmpVars[5] /* MatStm2.totMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[6] /* MatStm2.compMolFrac.SeedNLSJac3[3,3] SEED_VAR */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac3[3,3] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac3[3,3] - MatStm2.K[3] * MatStm2.compMolFrac.SeedNLSJac3[2,3] else MatStm2.compMolFrac.SeedNLSJac3[2,3]
*/
void Flowsheet_eqFunction_385(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,385};
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  tmp26 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp28 = (modelica_boolean)tmp26;
  if(tmp28)
  {
    tmp29 = jacobian->seedVars[6] /* MatStm2.compMolFrac.SeedNLSJac3[3,3] SEED_VAR */;
  }
  else
  {
    tmp27 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp29 = (tmp27?jacobian->seedVars[6] /* MatStm2.compMolFrac.SeedNLSJac3[3,3] SEED_VAR */ - ((data->localData[0]->realVars[128] /* MatStm2.K[3] variable */) * (jacobian->seedVars[5] /* MatStm2.compMolFrac.SeedNLSJac3[2,3] SEED_VAR */)):jacobian->seedVars[5] /* MatStm2.compMolFrac.SeedNLSJac3[2,3] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp29;
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac3._dummyVarNLSJac3 = MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,3] + MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,3]
*/
void Flowsheet_eqFunction_386(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,386};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[8] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[2] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac3[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac3[3,1] - MatStm2.K[1] * MatStm2.compMolFrac.SeedNLSJac3[2,1] else MatStm2.compMolFrac.SeedNLSJac3[2,1]
*/
void Flowsheet_eqFunction_387(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,387};
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  tmp30 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp32 = (modelica_boolean)tmp30;
  if(tmp32)
  {
    tmp33 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */;
  }
  else
  {
    tmp31 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp33 = (tmp31?jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */ - ((data->localData[0]->realVars[126] /* MatStm2.K[1] variable */) * (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */)):jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp33;
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac3[2,1] + MatStm2.compMolFrac.SeedNLSJac3[2,2] + MatStm2.compMolFrac.SeedNLSJac3[2,3] else MatStm2.compMolFrac.SeedNLSJac3[3,1] + MatStm2.compMolFrac.SeedNLSJac3[3,2] + MatStm2.compMolFrac.SeedNLSJac3[3,3]
*/
void Flowsheet_eqFunction_388(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,388};
  modelica_boolean tmp34;
  tmp34 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = (tmp34?jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac3[2,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */ + jacobian->seedVars[5] /* MatStm2.compMolFrac.SeedNLSJac3[2,3] SEED_VAR */:jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac3[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */ + jacobian->seedVars[6] /* MatStm2.compMolFrac.SeedNLSJac3[3,3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac3._dummyVarNLSJac3 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac3[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac3[3,2] - MatStm2.K[2] * MatStm2.compMolFrac.SeedNLSJac3[2,2] else MatStm2.compMolFrac.SeedNLSJac3[2,2]
*/
void Flowsheet_eqFunction_389(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,389};
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_real tmp38;
  tmp35 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp37 = (modelica_boolean)tmp35;
  if(tmp37)
  {
    tmp38 = jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */;
  }
  else
  {
    tmp36 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp38 = (tmp36?jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac3[3,2] SEED_VAR */ - ((data->localData[0]->realVars[127] /* MatStm2.K[2] variable */) * (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */)):jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac3[2,2] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = tmp38;
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac3._dummyVarNLSJac3 = MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] + MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2]
*/
void Flowsheet_eqFunction_390(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,390};
  jacobian->resultVars[5] /* $res6.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[7] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac3._dummyVarNLSJac3 = MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] + MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1]
*/
void Flowsheet_eqFunction_391(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,391};
  jacobian->resultVars[6] /* $res7.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac3.dummyVarNLSJac3[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac3_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac3;
  Flowsheet_eqFunction_376(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_377(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_378(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_379(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_380(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_381(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_382(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_383(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_384(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_385(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_386(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_387(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_388(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_389(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_390(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_391(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 443
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo.SeedNLSJac4[3] + MatStm3.compMolFrac.SeedNLSJac4[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_443(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,443};
  jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac4[3] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo.SeedNLSJac4[3] + MatStm3.compMolFrac.SeedNLSJac4[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_444(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,444};
  jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac4[3] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[3,3] = MatStm3.compMolFrac[3,3] * MatStm3.totMolFlo.SeedNLSJac4[3] + MatStm3.compMolFrac.SeedNLSJac4[3,3] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_445(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,445};
  jacobian->tmpVars[2] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac4[3] SEED_VAR */) + (jacobian->seedVars[5] /* MatStm3.compMolFrac.SeedNLSJac4[3,3] SEED_VAR */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4[1] = 0.01 * MatStm3.totMolFlo.SeedNLSJac4[3]
*/
void Flowsheet_eqFunction_446(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,446};
  jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[1] JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm3.totMolFlo.SeedNLSJac4[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac._$pDERNLSJac4._dummyVarNLSJac4 = -Mixer1.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[1]
*/
void Flowsheet_eqFunction_447(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,447};
  jacobian->tmpVars[4] /* MatStm3.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[3] /* Mixer1.inVapPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
MatStm3._totMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2] = 100.0 * MatStm3.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4
*/
void Flowsheet_eqFunction_448(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,448};
  jacobian->tmpVars[5] /* MatStm3.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[4] /* MatStm3.liqPhasMolFrac.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2] + MatStm3.compMolFrac.SeedNLSJac4[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_449(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,449};
  jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */) * (jacobian->tmpVars[5] /* MatStm3.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2] + MatStm3.compMolFrac.SeedNLSJac4[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_450(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,450};
  jacobian->tmpVars[7] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */) * (jacobian->tmpVars[5] /* MatStm3.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
MatStm3._compMolFlo._$pDERNLSJac4._dummyVarNLSJac4[2,3] = MatStm3.compMolFrac[2,3] * MatStm3.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2] + MatStm3.compMolFrac.SeedNLSJac4[2,3] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_451(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,451};
  jacobian->tmpVars[8] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */) * (jacobian->tmpVars[5] /* MatStm3.totMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[6] /* MatStm3.compMolFrac.SeedNLSJac4[2,3] SEED_VAR */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac4[3,3] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac4[3,3] - MatStm3.K[3] * MatStm3.compMolFrac.SeedNLSJac4[2,3] else MatStm3.compMolFrac.SeedNLSJac4[2,3]
*/
void Flowsheet_eqFunction_452(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,452};
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_real tmp42;
  tmp39 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp41 = (modelica_boolean)tmp39;
  if(tmp41)
  {
    tmp42 = jacobian->seedVars[5] /* MatStm3.compMolFrac.SeedNLSJac4[3,3] SEED_VAR */;
  }
  else
  {
    tmp40 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp42 = (tmp40?jacobian->seedVars[5] /* MatStm3.compMolFrac.SeedNLSJac4[3,3] SEED_VAR */ - ((data->localData[0]->realVars[246] /* MatStm3.K[3] variable */) * (jacobian->seedVars[6] /* MatStm3.compMolFrac.SeedNLSJac4[2,3] SEED_VAR */)):jacobian->seedVars[6] /* MatStm3.compMolFrac.SeedNLSJac4[2,3] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp42;
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac4._dummyVarNLSJac4 = MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,3] + MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,3]
*/
void Flowsheet_eqFunction_453(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,453};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[2] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[8] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac4._dummyVarNLSJac4 = MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] + MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2]
*/
void Flowsheet_eqFunction_454(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,454};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[7] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac4[3,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac4[3,2] - MatStm3.K[2] * MatStm3.compMolFrac.SeedNLSJac4[2,2] else MatStm3.compMolFrac.SeedNLSJac4[2,2]
*/
void Flowsheet_eqFunction_455(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,455};
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_real tmp46;
  tmp43 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp45 = (modelica_boolean)tmp43;
  if(tmp45)
  {
    tmp46 = jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */;
  }
  else
  {
    tmp44 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp46 = (tmp44?jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */ - ((data->localData[0]->realVars[245] /* MatStm3.K[2] variable */) * (jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */)):jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */);
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp46;
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac4[3,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMolFrac.SeedNLSJac4[3,1] - MatStm3.K[1] * MatStm3.compMolFrac.SeedNLSJac4[2,1] else MatStm3.compMolFrac.SeedNLSJac4[2,1]
*/
void Flowsheet_eqFunction_456(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,456};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_real tmp50;
  tmp47 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp49 = (modelica_boolean)tmp47;
  if(tmp49)
  {
    tmp50 = jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */;
  }
  else
  {
    tmp48 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp50 = (tmp48?jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */ - ((data->localData[0]->realVars[244] /* MatStm3.K[1] variable */) * (jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */)):jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = tmp50;
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac4._dummyVarNLSJac4 = if 101325.0 >= MatStm3.Pbubl then MatStm3.compMolFrac.SeedNLSJac4[2,1] + MatStm3.compMolFrac.SeedNLSJac4[2,2] + MatStm3.compMolFrac.SeedNLSJac4[2,3] else MatStm3.compMolFrac.SeedNLSJac4[3,1] + MatStm3.compMolFrac.SeedNLSJac4[3,2] + MatStm3.compMolFrac.SeedNLSJac4[3,3]
*/
void Flowsheet_eqFunction_457(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,457};
  modelica_boolean tmp51;
  tmp51 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (tmp51?jacobian->seedVars[2] /* MatStm3.compMolFrac.SeedNLSJac4[2,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm3.compMolFrac.SeedNLSJac4[2,2] SEED_VAR */ + jacobian->seedVars[6] /* MatStm3.compMolFrac.SeedNLSJac4[2,3] SEED_VAR */:jacobian->seedVars[3] /* MatStm3.compMolFrac.SeedNLSJac4[3,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm3.compMolFrac.SeedNLSJac4[3,2] SEED_VAR */ + jacobian->seedVars[5] /* MatStm3.compMolFrac.SeedNLSJac4[3,3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac4._dummyVarNLSJac4 = MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] + MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1]
*/
void Flowsheet_eqFunction_458(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,458};
  jacobian->resultVars[6] /* $res7.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm3.compMolFlo.$pDERNLSJac4.dummyVarNLSJac4[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac4_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac4;
  Flowsheet_eqFunction_443(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_444(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_445(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_446(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_447(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_448(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_449(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_450(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_451(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_452(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_453(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_454(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_455(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_456(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_457(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_458(data, threadData, jacobian, parentJacobian);
  
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


