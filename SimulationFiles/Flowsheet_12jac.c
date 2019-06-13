/* Jacobians 8 */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac2(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {0,2,3,3,5,6,3,5,6,0,4,5,0,4,5,1,2,5,1,2,5};
  int i = 0;
  
  jacobian->sizeCols = 7;
  jacobian->sizeRows = 7;
  jacobian->sizeTmpVars = 15;
  jacobian->seedVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(15,sizeof(modelica_real));
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
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 8;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(8,sizeof(modelica_real));
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
int Flowsheet_initialAnalyticJacobianNLSJac4(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 8;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(8,sizeof(modelica_real));
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
int Flowsheet_initialAnalyticJacobianNLSJac5(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {1,3,5,4,5,6,4,5,6,0,1,4,2,3,4,2,3,4,0,1,4};
  int i = 0;
  
  jacobian->sizeCols = 7;
  jacobian->sizeRows = 7;
  jacobian->sizeTmpVars = 15;
  jacobian->seedVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(15,sizeof(modelica_real));
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
equation index: 47
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2,3] = MatStm1.compMolFrac[2,3] * MatStm1.totMolFlo.SeedNLSJac2[2] + MatStm1.compMolFrac.SeedNLSJac2[2,3] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_47(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,47};
  jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac2[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac2[2,3] SEED_VAR */) * (data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo.SeedNLSJac2[2] + MatStm1.compMolFrac.SeedNLSJac2[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_48(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,48};
  jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac2[2] SEED_VAR */) + (jacobian->seedVars[5] /* MatStm1.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */) * (data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo.SeedNLSJac2[2] + MatStm1.compMolFrac.SeedNLSJac2[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_49(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,49};
  jacobian->tmpVars[2] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac2[2] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */) * (data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac._$pDERNLSJac2._dummyVarNLSJac2 = 0.01 * MatStm1.totMolFlo.SeedNLSJac2[2]
*/
void Flowsheet_eqFunction_50(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,50};
  jacobian->tmpVars[3] /* MatStm1.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac2[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
MatStm1._totMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3] = (-100.0) * MatStm1.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2
*/
void Flowsheet_eqFunction_51(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,51};
  jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] JACOBIAN_DIFF_VAR */ = (-100.0) * (jacobian->tmpVars[3] /* MatStm1.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] + MatStm1.compMolFrac.SeedNLSJac2[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_52(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,52};
  jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */) * (data->localData[0]->realVars[106] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3,3] = MatStm1.compMolFrac[3,3] * MatStm1.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] + MatStm1.compMolFrac.SeedNLSJac2[3,3] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_53(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,53};
  jacobian->tmpVars[6] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */) * (jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac2[3,3] SEED_VAR */) * (data->localData[0]->realVars[106] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] + MatStm1.compMolFrac.SeedNLSJac2[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_54(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,54};
  jacobian->tmpVars[7] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[6] /* MatStm1.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */) * (data->localData[0]->realVars[106] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac2._dummyVarNLSJac2 = MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] + MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2]
*/
void Flowsheet_eqFunction_55(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,55};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[2] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac2._dummyVarNLSJac2 = if 300.0 < MatStm1.Tbubl then MatStm1.compMolFrac.SeedNLSJac2[3,1] else if 300.0 > MatStm1.Tdew then MatStm1.compMolFrac.SeedNLSJac2[2,1] else MatStm1.compMolFrac.SeedNLSJac2[3,1] - MatStm1.K[1] * MatStm1.compMolFrac.SeedNLSJac2[2,1]
*/
void Flowsheet_eqFunction_56(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,56};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Less(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = jacobian->seedVars[6] /* MatStm1.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */;
  }
  else
  {
    tmp1 = Greater(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp3 = (tmp1?jacobian->seedVars[5] /* MatStm1.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */:jacobian->seedVars[6] /* MatStm1.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */ - ((data->localData[0]->realVars[8] /* MatStm1.K[1] variable */) * (jacobian->seedVars[5] /* MatStm1.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */)));
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp3;
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac2._dummyVarNLSJac2 = MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] + MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1]
*/
void Flowsheet_eqFunction_57(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,57};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[7] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac2._dummyVarNLSJac2 = MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,3] + MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,3]
*/
void Flowsheet_eqFunction_58(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,58};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac2._dummyVarNLSJac2 = if 300.0 < MatStm1.Tbubl then MatStm1.compMolFrac.SeedNLSJac2[3,2] else if 300.0 > MatStm1.Tdew then MatStm1.compMolFrac.SeedNLSJac2[2,2] else MatStm1.compMolFrac.SeedNLSJac2[3,2] - MatStm1.K[2] * MatStm1.compMolFrac.SeedNLSJac2[2,2]
*/
void Flowsheet_eqFunction_59(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,59};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  tmp4 = Less(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */;
  }
  else
  {
    tmp5 = Greater(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp7 = (tmp5?jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */:jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */ - ((data->localData[0]->realVars[9] /* MatStm1.K[2] variable */) * (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */)));
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp7;
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac2._dummyVarNLSJac2 = if 300.0 < MatStm1.Tbubl then MatStm1.compMolFrac.SeedNLSJac2[2,1] + MatStm1.compMolFrac.SeedNLSJac2[2,2] + MatStm1.compMolFrac.SeedNLSJac2[2,3] else MatStm1.compMolFrac.SeedNLSJac2[3,1] + MatStm1.compMolFrac.SeedNLSJac2[3,2] + MatStm1.compMolFrac.SeedNLSJac2[3,3]
*/
void Flowsheet_eqFunction_60(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,60};
  modelica_boolean tmp8;
  tmp8 = Less(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  jacobian->resultVars[5] /* $res6.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (tmp8?jacobian->seedVars[5] /* MatStm1.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */ + jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac2[2,3] SEED_VAR */:jacobian->seedVars[6] /* MatStm1.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */ + jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac2[3,3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac2._dummyVarNLSJac2 = if 300.0 < MatStm1.Tbubl then MatStm1.compMolFrac.SeedNLSJac2[3,3] else if 300.0 > MatStm1.Tdew then MatStm1.compMolFrac.SeedNLSJac2[2,3] else MatStm1.compMolFrac.SeedNLSJac2[3,3] - MatStm1.K[3] * MatStm1.compMolFrac.SeedNLSJac2[2,3]
*/
void Flowsheet_eqFunction_61(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,61};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  tmp9 = Less(300.0,data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac2[3,3] SEED_VAR */;
  }
  else
  {
    tmp10 = Greater(300.0,data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
    tmp12 = (tmp10?jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac2[2,3] SEED_VAR */:jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac2[3,3] SEED_VAR */ - ((data->localData[0]->realVars[10] /* MatStm1.K[3] variable */) * (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac2[2,3] SEED_VAR */)));
  }
  jacobian->resultVars[6] /* $res7.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp12;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac2_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac2;
  Flowsheet_eqFunction_47(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_48(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_49(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_50(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_51(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_52(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_53(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_54(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_55(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_56(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_57(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_58(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_59(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_60(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_61(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 115
type: SIMPLE_ASSIGN
$cse17 = exp((-MatStm1.comp[2].VP[2]) - MatStm1.comp[2].VP[3] / MatStm1.Tdew - MatStm1.comp[2].VP[4] * $cse10 - MatStm1.comp[2].VP[5] * MatStm1.Tdew ^ MatStm1.comp[2].VP[6])
*/
void Flowsheet_eqFunction_115(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,115};
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  tmp13 = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
  tmp14 = data->simulationInfo->realParameter[164];
  if(tmp13 < 0.0 && tmp14 != 0.0)
  {
    tmp16 = modf(tmp14, &tmp17);
    
    if(tmp16 > 0.5)
    {
      tmp16 -= 1.0;
      tmp17 += 1.0;
    }
    else if(tmp16 < -0.5)
    {
      tmp16 += 1.0;
      tmp17 -= 1.0;
    }
    
    if(fabs(tmp16) < 1e-10)
      tmp15 = pow(tmp13, tmp17);
    else
    {
      tmp19 = modf(1.0/tmp14, &tmp18);
      if(tmp19 > 0.5)
      {
        tmp19 -= 1.0;
        tmp18 += 1.0;
      }
      else if(tmp19 < -0.5)
      {
        tmp19 += 1.0;
        tmp18 -= 1.0;
      }
      if(fabs(tmp19) < 1e-10 && ((unsigned long)tmp18 & 1))
      {
        tmp15 = -pow(-tmp13, tmp16)*pow(tmp13, tmp17);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp13, tmp14);
      }
    }
  }
  else
  {
    tmp15 = pow(tmp13, tmp14);
  }
  if(isnan(tmp15) || isinf(tmp15))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp13, tmp14);
  }
  jacobian->tmpVars[2] /* $cse17 JACOBIAN_DIFF_VAR */ = exp((-data->simulationInfo->realParameter[160]) - (DIVISION(data->simulationInfo->realParameter[161],data->localData[0]->realVars[17] /* MatStm1.Tdew variable */,"MatStm1.Tdew")) - ((data->simulationInfo->realParameter[162]) * (data->localData[0]->realVars[0] /* $cse10 variable */)) - ((data->simulationInfo->realParameter[163]) * (tmp15)));
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
$cse18 = exp((-MatStm1.comp[3].VP[2]) - MatStm1.comp[3].VP[3] / MatStm1.Tdew - MatStm1.comp[3].VP[4] * $cse10 - MatStm1.comp[3].VP[5] * MatStm1.Tdew ^ MatStm1.comp[3].VP[6])
*/
void Flowsheet_eqFunction_116(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,116};
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  tmp20 = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
  tmp21 = data->simulationInfo->realParameter[170];
  if(tmp20 < 0.0 && tmp21 != 0.0)
  {
    tmp23 = modf(tmp21, &tmp24);
    
    if(tmp23 > 0.5)
    {
      tmp23 -= 1.0;
      tmp24 += 1.0;
    }
    else if(tmp23 < -0.5)
    {
      tmp23 += 1.0;
      tmp24 -= 1.0;
    }
    
    if(fabs(tmp23) < 1e-10)
      tmp22 = pow(tmp20, tmp24);
    else
    {
      tmp26 = modf(1.0/tmp21, &tmp25);
      if(tmp26 > 0.5)
      {
        tmp26 -= 1.0;
        tmp25 += 1.0;
      }
      else if(tmp26 < -0.5)
      {
        tmp26 += 1.0;
        tmp25 -= 1.0;
      }
      if(fabs(tmp26) < 1e-10 && ((unsigned long)tmp25 & 1))
      {
        tmp22 = -pow(-tmp20, tmp23)*pow(tmp20, tmp24);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp20, tmp21);
      }
    }
  }
  else
  {
    tmp22 = pow(tmp20, tmp21);
  }
  if(isnan(tmp22) || isinf(tmp22))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp20, tmp21);
  }
  jacobian->tmpVars[1] /* $cse18 JACOBIAN_DIFF_VAR */ = exp((-data->simulationInfo->realParameter[166]) - (DIVISION(data->simulationInfo->realParameter[167],data->localData[0]->realVars[17] /* MatStm1.Tdew variable */,"MatStm1.Tdew")) - ((data->simulationInfo->realParameter[168]) * (data->localData[0]->realVars[0] /* $cse10 variable */)) - ((data->simulationInfo->realParameter[169]) * (tmp22)));
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
$cse19 = exp((-MatStm1.comp[1].VP[2]) - MatStm1.comp[1].VP[3] / MatStm1.Tdew - MatStm1.comp[1].VP[4] * $cse10 - MatStm1.comp[1].VP[5] * MatStm1.Tdew ^ MatStm1.comp[1].VP[6])
*/
void Flowsheet_eqFunction_117(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,117};
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  tmp27 = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
  tmp28 = data->simulationInfo->realParameter[158];
  if(tmp27 < 0.0 && tmp28 != 0.0)
  {
    tmp30 = modf(tmp28, &tmp31);
    
    if(tmp30 > 0.5)
    {
      tmp30 -= 1.0;
      tmp31 += 1.0;
    }
    else if(tmp30 < -0.5)
    {
      tmp30 += 1.0;
      tmp31 -= 1.0;
    }
    
    if(fabs(tmp30) < 1e-10)
      tmp29 = pow(tmp27, tmp31);
    else
    {
      tmp33 = modf(1.0/tmp28, &tmp32);
      if(tmp33 > 0.5)
      {
        tmp33 -= 1.0;
        tmp32 += 1.0;
      }
      else if(tmp33 < -0.5)
      {
        tmp33 += 1.0;
        tmp32 -= 1.0;
      }
      if(fabs(tmp33) < 1e-10 && ((unsigned long)tmp32 & 1))
      {
        tmp29 = -pow(-tmp27, tmp30)*pow(tmp27, tmp31);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp27, tmp28);
      }
    }
  }
  else
  {
    tmp29 = pow(tmp27, tmp28);
  }
  if(isnan(tmp29) || isinf(tmp29))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp27, tmp28);
  }
  jacobian->tmpVars[0] /* $cse19 JACOBIAN_DIFF_VAR */ = exp((-data->simulationInfo->realParameter[154]) - (DIVISION(data->simulationInfo->realParameter[155],data->localData[0]->realVars[17] /* MatStm1.Tdew variable */,"MatStm1.Tdew")) - ((data->simulationInfo->realParameter[156]) * (data->localData[0]->realVars[0] /* $cse10 variable */)) - ((data->simulationInfo->realParameter[157]) * (tmp29)));
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
MatStm1._Tdew._$pDERNLSJac3._dummyVarNLSJac3 = $cse10.SeedNLSJac3 * MatStm1.Tdew
*/
void Flowsheet_eqFunction_118(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,118};
  jacobian->tmpVars[3] /* MatStm1.Tdew.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[0] /* $cse10.SeedNLSJac3 SEED_VAR */) * (data->localData[0]->realVars[17] /* MatStm1.Tdew variable */);
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
$cse9._$pDERNLSJac3._dummyVarNLSJac3 = $cse19 * (MatStm1.comp[1].VP[3] * MatStm1.Tdew.$pDERNLSJac3.dummyVarNLSJac3 / MatStm1.Tdew ^ 2.0 + (-MatStm1.comp[1].VP[4]) * $cse10.SeedNLSJac3 - MatStm1.comp[1].VP[5] * (if noEvent(MatStm1.Tdew == 0.0) then 0.0 else MatStm1.Tdew ^ (MatStm1.comp[1].VP[6] - 1.0) * MatStm1.comp[1].VP[6] * MatStm1.Tdew.$pDERNLSJac3.dummyVarNLSJac3))
*/
void Flowsheet_eqFunction_119(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,119};
  modelica_real tmp34;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_boolean tmp43;
  modelica_real tmp44;
  tmp34 = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
  tmp43 = (modelica_boolean)(data->localData[0]->realVars[17] /* MatStm1.Tdew variable */ == 0.0);
  if(tmp43)
  {
    tmp44 = 0.0;
  }
  else
  {
    tmp36 = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
    tmp37 = data->simulationInfo->realParameter[158] - 1.0;
    if(tmp36 < 0.0 && tmp37 != 0.0)
    {
      tmp39 = modf(tmp37, &tmp40);
      
      if(tmp39 > 0.5)
      {
        tmp39 -= 1.0;
        tmp40 += 1.0;
      }
      else if(tmp39 < -0.5)
      {
        tmp39 += 1.0;
        tmp40 -= 1.0;
      }
      
      if(fabs(tmp39) < 1e-10)
        tmp38 = pow(tmp36, tmp40);
      else
      {
        tmp42 = modf(1.0/tmp37, &tmp41);
        if(tmp42 > 0.5)
        {
          tmp42 -= 1.0;
          tmp41 += 1.0;
        }
        else if(tmp42 < -0.5)
        {
          tmp42 += 1.0;
          tmp41 -= 1.0;
        }
        if(fabs(tmp42) < 1e-10 && ((unsigned long)tmp41 & 1))
        {
          tmp38 = -pow(-tmp36, tmp39)*pow(tmp36, tmp40);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp36, tmp37);
        }
      }
    }
    else
    {
      tmp38 = pow(tmp36, tmp37);
    }
    if(isnan(tmp38) || isinf(tmp38))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp36, tmp37);
    }
    tmp44 = (tmp38) * ((data->simulationInfo->realParameter[158]) * (jacobian->tmpVars[3] /* MatStm1.Tdew.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[4] /* $cse9.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[0] /* $cse19 JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[155]) * (DIVISION(jacobian->tmpVars[3] /* MatStm1.Tdew.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */,(tmp34 * tmp34),"MatStm1.Tdew ^ 2.0")) + ((-data->simulationInfo->realParameter[156])) * (jacobian->seedVars[0] /* $cse10.SeedNLSJac3 SEED_VAR */) - ((data->simulationInfo->realParameter[157]) * (tmp44)));
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
$cse12._$pDERNLSJac3._dummyVarNLSJac3 = $cse18 * (MatStm1.comp[3].VP[3] * MatStm1.Tdew.$pDERNLSJac3.dummyVarNLSJac3 / MatStm1.Tdew ^ 2.0 + (-MatStm1.comp[3].VP[4]) * $cse10.SeedNLSJac3 - MatStm1.comp[3].VP[5] * (if noEvent(MatStm1.Tdew == 0.0) then 0.0 else MatStm1.Tdew ^ (MatStm1.comp[3].VP[6] - 1.0) * MatStm1.comp[3].VP[6] * MatStm1.Tdew.$pDERNLSJac3.dummyVarNLSJac3))
*/
void Flowsheet_eqFunction_120(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,120};
  modelica_real tmp45;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_boolean tmp54;
  modelica_real tmp55;
  tmp45 = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
  tmp54 = (modelica_boolean)(data->localData[0]->realVars[17] /* MatStm1.Tdew variable */ == 0.0);
  if(tmp54)
  {
    tmp55 = 0.0;
  }
  else
  {
    tmp47 = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
    tmp48 = data->simulationInfo->realParameter[170] - 1.0;
    if(tmp47 < 0.0 && tmp48 != 0.0)
    {
      tmp50 = modf(tmp48, &tmp51);
      
      if(tmp50 > 0.5)
      {
        tmp50 -= 1.0;
        tmp51 += 1.0;
      }
      else if(tmp50 < -0.5)
      {
        tmp50 += 1.0;
        tmp51 -= 1.0;
      }
      
      if(fabs(tmp50) < 1e-10)
        tmp49 = pow(tmp47, tmp51);
      else
      {
        tmp53 = modf(1.0/tmp48, &tmp52);
        if(tmp53 > 0.5)
        {
          tmp53 -= 1.0;
          tmp52 += 1.0;
        }
        else if(tmp53 < -0.5)
        {
          tmp53 += 1.0;
          tmp52 -= 1.0;
        }
        if(fabs(tmp53) < 1e-10 && ((unsigned long)tmp52 & 1))
        {
          tmp49 = -pow(-tmp47, tmp50)*pow(tmp47, tmp51);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp47, tmp48);
        }
      }
    }
    else
    {
      tmp49 = pow(tmp47, tmp48);
    }
    if(isnan(tmp49) || isinf(tmp49))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp47, tmp48);
    }
    tmp55 = (tmp49) * ((data->simulationInfo->realParameter[170]) * (jacobian->tmpVars[3] /* MatStm1.Tdew.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[5] /* $cse12.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[1] /* $cse18 JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[167]) * (DIVISION(jacobian->tmpVars[3] /* MatStm1.Tdew.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */,(tmp45 * tmp45),"MatStm1.Tdew ^ 2.0")) + ((-data->simulationInfo->realParameter[168])) * (jacobian->seedVars[0] /* $cse10.SeedNLSJac3 SEED_VAR */) - ((data->simulationInfo->realParameter[169]) * (tmp55)));
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
$cse11._$pDERNLSJac3._dummyVarNLSJac3 = $cse17 * (MatStm1.comp[2].VP[3] * MatStm1.Tdew.$pDERNLSJac3.dummyVarNLSJac3 / MatStm1.Tdew ^ 2.0 + (-MatStm1.comp[2].VP[4]) * $cse10.SeedNLSJac3 - MatStm1.comp[2].VP[5] * (if noEvent(MatStm1.Tdew == 0.0) then 0.0 else MatStm1.Tdew ^ (MatStm1.comp[2].VP[6] - 1.0) * MatStm1.comp[2].VP[6] * MatStm1.Tdew.$pDERNLSJac3.dummyVarNLSJac3))
*/
void Flowsheet_eqFunction_121(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,121};
  modelica_real tmp56;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_boolean tmp65;
  modelica_real tmp66;
  tmp56 = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
  tmp65 = (modelica_boolean)(data->localData[0]->realVars[17] /* MatStm1.Tdew variable */ == 0.0);
  if(tmp65)
  {
    tmp66 = 0.0;
  }
  else
  {
    tmp58 = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
    tmp59 = data->simulationInfo->realParameter[164] - 1.0;
    if(tmp58 < 0.0 && tmp59 != 0.0)
    {
      tmp61 = modf(tmp59, &tmp62);
      
      if(tmp61 > 0.5)
      {
        tmp61 -= 1.0;
        tmp62 += 1.0;
      }
      else if(tmp61 < -0.5)
      {
        tmp61 += 1.0;
        tmp62 -= 1.0;
      }
      
      if(fabs(tmp61) < 1e-10)
        tmp60 = pow(tmp58, tmp62);
      else
      {
        tmp64 = modf(1.0/tmp59, &tmp63);
        if(tmp64 > 0.5)
        {
          tmp64 -= 1.0;
          tmp63 += 1.0;
        }
        else if(tmp64 < -0.5)
        {
          tmp64 += 1.0;
          tmp63 -= 1.0;
        }
        if(fabs(tmp64) < 1e-10 && ((unsigned long)tmp63 & 1))
        {
          tmp60 = -pow(-tmp58, tmp61)*pow(tmp58, tmp62);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp58, tmp59);
        }
      }
    }
    else
    {
      tmp60 = pow(tmp58, tmp59);
    }
    if(isnan(tmp60) || isinf(tmp60))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp58, tmp59);
    }
    tmp66 = (tmp60) * ((data->simulationInfo->realParameter[164]) * (jacobian->tmpVars[3] /* MatStm1.Tdew.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */));
  }
  jacobian->tmpVars[6] /* $cse11.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[2] /* $cse17 JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[161]) * (DIVISION(jacobian->tmpVars[3] /* MatStm1.Tdew.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */,(tmp56 * tmp56),"MatStm1.Tdew ^ 2.0")) + ((-data->simulationInfo->realParameter[162])) * (jacobian->seedVars[0] /* $cse10.SeedNLSJac3 SEED_VAR */) - ((data->simulationInfo->realParameter[163]) * (tmp66)));
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac3._dummyVarNLSJac3 = MatStm1.compMolFrac[1,3] * $cse12.$pDERNLSJac3.dummyVarNLSJac3 + MatStm1.compMolFrac[1,2] * $cse11.$pDERNLSJac3.dummyVarNLSJac3 + MatStm1.compMolFrac[1,1] * $cse9.$pDERNLSJac3.dummyVarNLSJac3
*/
void Flowsheet_eqFunction_122(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,122};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,3] variable */) * (jacobian->tmpVars[5] /* $cse12.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[64] /* MatStm1.compMolFrac[1,2] variable */) * (jacobian->tmpVars[6] /* $cse11.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[63] /* MatStm1.compMolFrac[1,1] variable */) * (jacobian->tmpVars[4] /* $cse9.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}
int Flowsheet_functionJacNLSJac3_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac3;
  Flowsheet_eqFunction_115(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_116(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_117(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_118(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_119(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_120(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_121(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_122(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 129
type: SIMPLE_ASSIGN
$cse20 = exp(MatStm1.comp[2].VP[2] + MatStm1.comp[2].VP[3] / MatStm1.Tbubl + MatStm1.comp[2].VP[4] * $cse14 + MatStm1.comp[2].VP[5] * MatStm1.Tbubl ^ MatStm1.comp[2].VP[6])
*/
void Flowsheet_eqFunction_129(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,129};
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_real tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  tmp67 = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
  tmp68 = data->simulationInfo->realParameter[164];
  if(tmp67 < 0.0 && tmp68 != 0.0)
  {
    tmp70 = modf(tmp68, &tmp71);
    
    if(tmp70 > 0.5)
    {
      tmp70 -= 1.0;
      tmp71 += 1.0;
    }
    else if(tmp70 < -0.5)
    {
      tmp70 += 1.0;
      tmp71 -= 1.0;
    }
    
    if(fabs(tmp70) < 1e-10)
      tmp69 = pow(tmp67, tmp71);
    else
    {
      tmp73 = modf(1.0/tmp68, &tmp72);
      if(tmp73 > 0.5)
      {
        tmp73 -= 1.0;
        tmp72 += 1.0;
      }
      else if(tmp73 < -0.5)
      {
        tmp73 += 1.0;
        tmp72 -= 1.0;
      }
      if(fabs(tmp73) < 1e-10 && ((unsigned long)tmp72 & 1))
      {
        tmp69 = -pow(-tmp67, tmp70)*pow(tmp67, tmp71);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp67, tmp68);
      }
    }
  }
  else
  {
    tmp69 = pow(tmp67, tmp68);
  }
  if(isnan(tmp69) || isinf(tmp69))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp67, tmp68);
  }
  jacobian->tmpVars[2] /* $cse20 JACOBIAN_DIFF_VAR */ = exp(data->simulationInfo->realParameter[160] + DIVISION(data->simulationInfo->realParameter[161],data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */,"MatStm1.Tbubl") + (data->simulationInfo->realParameter[162]) * (data->localData[0]->realVars[4] /* $cse14 variable */) + (data->simulationInfo->realParameter[163]) * (tmp69));
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
$cse21 = exp(MatStm1.comp[3].VP[2] + MatStm1.comp[3].VP[3] / MatStm1.Tbubl + MatStm1.comp[3].VP[4] * $cse14 + MatStm1.comp[3].VP[5] * MatStm1.Tbubl ^ MatStm1.comp[3].VP[6])
*/
void Flowsheet_eqFunction_130(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,130};
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_real tmp78;
  modelica_real tmp79;
  modelica_real tmp80;
  tmp74 = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
  tmp75 = data->simulationInfo->realParameter[170];
  if(tmp74 < 0.0 && tmp75 != 0.0)
  {
    tmp77 = modf(tmp75, &tmp78);
    
    if(tmp77 > 0.5)
    {
      tmp77 -= 1.0;
      tmp78 += 1.0;
    }
    else if(tmp77 < -0.5)
    {
      tmp77 += 1.0;
      tmp78 -= 1.0;
    }
    
    if(fabs(tmp77) < 1e-10)
      tmp76 = pow(tmp74, tmp78);
    else
    {
      tmp80 = modf(1.0/tmp75, &tmp79);
      if(tmp80 > 0.5)
      {
        tmp80 -= 1.0;
        tmp79 += 1.0;
      }
      else if(tmp80 < -0.5)
      {
        tmp80 += 1.0;
        tmp79 -= 1.0;
      }
      if(fabs(tmp80) < 1e-10 && ((unsigned long)tmp79 & 1))
      {
        tmp76 = -pow(-tmp74, tmp77)*pow(tmp74, tmp78);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp74, tmp75);
      }
    }
  }
  else
  {
    tmp76 = pow(tmp74, tmp75);
  }
  if(isnan(tmp76) || isinf(tmp76))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp74, tmp75);
  }
  jacobian->tmpVars[1] /* $cse21 JACOBIAN_DIFF_VAR */ = exp(data->simulationInfo->realParameter[166] + DIVISION(data->simulationInfo->realParameter[167],data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */,"MatStm1.Tbubl") + (data->simulationInfo->realParameter[168]) * (data->localData[0]->realVars[4] /* $cse14 variable */) + (data->simulationInfo->realParameter[169]) * (tmp76));
  TRACE_POP
}

/*
equation index: 131
type: SIMPLE_ASSIGN
$cse22 = exp(MatStm1.comp[1].VP[2] + MatStm1.comp[1].VP[3] / MatStm1.Tbubl + MatStm1.comp[1].VP[4] * $cse14 + MatStm1.comp[1].VP[5] * MatStm1.Tbubl ^ MatStm1.comp[1].VP[6])
*/
void Flowsheet_eqFunction_131(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,131};
  modelica_real tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_real tmp84;
  modelica_real tmp85;
  modelica_real tmp86;
  modelica_real tmp87;
  tmp81 = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
  tmp82 = data->simulationInfo->realParameter[158];
  if(tmp81 < 0.0 && tmp82 != 0.0)
  {
    tmp84 = modf(tmp82, &tmp85);
    
    if(tmp84 > 0.5)
    {
      tmp84 -= 1.0;
      tmp85 += 1.0;
    }
    else if(tmp84 < -0.5)
    {
      tmp84 += 1.0;
      tmp85 -= 1.0;
    }
    
    if(fabs(tmp84) < 1e-10)
      tmp83 = pow(tmp81, tmp85);
    else
    {
      tmp87 = modf(1.0/tmp82, &tmp86);
      if(tmp87 > 0.5)
      {
        tmp87 -= 1.0;
        tmp86 += 1.0;
      }
      else if(tmp87 < -0.5)
      {
        tmp87 += 1.0;
        tmp86 -= 1.0;
      }
      if(fabs(tmp87) < 1e-10 && ((unsigned long)tmp86 & 1))
      {
        tmp83 = -pow(-tmp81, tmp84)*pow(tmp81, tmp85);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp81, tmp82);
      }
    }
  }
  else
  {
    tmp83 = pow(tmp81, tmp82);
  }
  if(isnan(tmp83) || isinf(tmp83))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp81, tmp82);
  }
  jacobian->tmpVars[0] /* $cse22 JACOBIAN_DIFF_VAR */ = exp(data->simulationInfo->realParameter[154] + DIVISION(data->simulationInfo->realParameter[155],data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */,"MatStm1.Tbubl") + (data->simulationInfo->realParameter[156]) * (data->localData[0]->realVars[4] /* $cse14 variable */) + (data->simulationInfo->realParameter[157]) * (tmp83));
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
MatStm1._Tbubl._$pDERNLSJac4._dummyVarNLSJac4 = $cse14.SeedNLSJac4 * MatStm1.Tbubl
*/
void Flowsheet_eqFunction_132(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,132};
  jacobian->tmpVars[3] /* MatStm1.Tbubl.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[0] /* $cse14.SeedNLSJac4 SEED_VAR */) * (data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */);
  TRACE_POP
}

/*
equation index: 133
type: SIMPLE_ASSIGN
$cse13._$pDERNLSJac4._dummyVarNLSJac4 = $cse22 * (MatStm1.comp[1].VP[4] * $cse14.SeedNLSJac4 + MatStm1.comp[1].VP[5] * (if noEvent(MatStm1.Tbubl == 0.0) then 0.0 else MatStm1.Tbubl ^ (MatStm1.comp[1].VP[6] - 1.0) * MatStm1.comp[1].VP[6] * MatStm1.Tbubl.$pDERNLSJac4.dummyVarNLSJac4) - MatStm1.comp[1].VP[3] * MatStm1.Tbubl.$pDERNLSJac4.dummyVarNLSJac4 / MatStm1.Tbubl ^ 2.0)
*/
void Flowsheet_eqFunction_133(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,133};
  modelica_real tmp89;
  modelica_real tmp90;
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_real tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  modelica_boolean tmp96;
  modelica_real tmp97;
  modelica_real tmp98;
  tmp96 = (modelica_boolean)(data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */ == 0.0);
  if(tmp96)
  {
    tmp97 = 0.0;
  }
  else
  {
    tmp89 = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
    tmp90 = data->simulationInfo->realParameter[158] - 1.0;
    if(tmp89 < 0.0 && tmp90 != 0.0)
    {
      tmp92 = modf(tmp90, &tmp93);
      
      if(tmp92 > 0.5)
      {
        tmp92 -= 1.0;
        tmp93 += 1.0;
      }
      else if(tmp92 < -0.5)
      {
        tmp92 += 1.0;
        tmp93 -= 1.0;
      }
      
      if(fabs(tmp92) < 1e-10)
        tmp91 = pow(tmp89, tmp93);
      else
      {
        tmp95 = modf(1.0/tmp90, &tmp94);
        if(tmp95 > 0.5)
        {
          tmp95 -= 1.0;
          tmp94 += 1.0;
        }
        else if(tmp95 < -0.5)
        {
          tmp95 += 1.0;
          tmp94 -= 1.0;
        }
        if(fabs(tmp95) < 1e-10 && ((unsigned long)tmp94 & 1))
        {
          tmp91 = -pow(-tmp89, tmp92)*pow(tmp89, tmp93);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp89, tmp90);
        }
      }
    }
    else
    {
      tmp91 = pow(tmp89, tmp90);
    }
    if(isnan(tmp91) || isinf(tmp91))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp89, tmp90);
    }
    tmp97 = (tmp91) * ((data->simulationInfo->realParameter[158]) * (jacobian->tmpVars[3] /* MatStm1.Tbubl.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */));
  }
  tmp98 = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
  jacobian->tmpVars[4] /* $cse13.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[0] /* $cse22 JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[156]) * (jacobian->seedVars[0] /* $cse14.SeedNLSJac4 SEED_VAR */) + (data->simulationInfo->realParameter[157]) * (tmp97) - ((data->simulationInfo->realParameter[155]) * (DIVISION(jacobian->tmpVars[3] /* MatStm1.Tbubl.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */,(tmp98 * tmp98),"MatStm1.Tbubl ^ 2.0"))));
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
$cse16._$pDERNLSJac4._dummyVarNLSJac4 = $cse21 * (MatStm1.comp[3].VP[4] * $cse14.SeedNLSJac4 + MatStm1.comp[3].VP[5] * (if noEvent(MatStm1.Tbubl == 0.0) then 0.0 else MatStm1.Tbubl ^ (MatStm1.comp[3].VP[6] - 1.0) * MatStm1.comp[3].VP[6] * MatStm1.Tbubl.$pDERNLSJac4.dummyVarNLSJac4) - MatStm1.comp[3].VP[3] * MatStm1.Tbubl.$pDERNLSJac4.dummyVarNLSJac4 / MatStm1.Tbubl ^ 2.0)
*/
void Flowsheet_eqFunction_134(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,134};
  modelica_real tmp100;
  modelica_real tmp101;
  modelica_real tmp102;
  modelica_real tmp103;
  modelica_real tmp104;
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_boolean tmp107;
  modelica_real tmp108;
  modelica_real tmp109;
  tmp107 = (modelica_boolean)(data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */ == 0.0);
  if(tmp107)
  {
    tmp108 = 0.0;
  }
  else
  {
    tmp100 = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
    tmp101 = data->simulationInfo->realParameter[170] - 1.0;
    if(tmp100 < 0.0 && tmp101 != 0.0)
    {
      tmp103 = modf(tmp101, &tmp104);
      
      if(tmp103 > 0.5)
      {
        tmp103 -= 1.0;
        tmp104 += 1.0;
      }
      else if(tmp103 < -0.5)
      {
        tmp103 += 1.0;
        tmp104 -= 1.0;
      }
      
      if(fabs(tmp103) < 1e-10)
        tmp102 = pow(tmp100, tmp104);
      else
      {
        tmp106 = modf(1.0/tmp101, &tmp105);
        if(tmp106 > 0.5)
        {
          tmp106 -= 1.0;
          tmp105 += 1.0;
        }
        else if(tmp106 < -0.5)
        {
          tmp106 += 1.0;
          tmp105 -= 1.0;
        }
        if(fabs(tmp106) < 1e-10 && ((unsigned long)tmp105 & 1))
        {
          tmp102 = -pow(-tmp100, tmp103)*pow(tmp100, tmp104);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp100, tmp101);
        }
      }
    }
    else
    {
      tmp102 = pow(tmp100, tmp101);
    }
    if(isnan(tmp102) || isinf(tmp102))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp100, tmp101);
    }
    tmp108 = (tmp102) * ((data->simulationInfo->realParameter[170]) * (jacobian->tmpVars[3] /* MatStm1.Tbubl.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */));
  }
  tmp109 = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
  jacobian->tmpVars[5] /* $cse16.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[1] /* $cse21 JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[168]) * (jacobian->seedVars[0] /* $cse14.SeedNLSJac4 SEED_VAR */) + (data->simulationInfo->realParameter[169]) * (tmp108) - ((data->simulationInfo->realParameter[167]) * (DIVISION(jacobian->tmpVars[3] /* MatStm1.Tbubl.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */,(tmp109 * tmp109),"MatStm1.Tbubl ^ 2.0"))));
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
$cse15._$pDERNLSJac4._dummyVarNLSJac4 = $cse20 * (MatStm1.comp[2].VP[4] * $cse14.SeedNLSJac4 + MatStm1.comp[2].VP[5] * (if noEvent(MatStm1.Tbubl == 0.0) then 0.0 else MatStm1.Tbubl ^ (MatStm1.comp[2].VP[6] - 1.0) * MatStm1.comp[2].VP[6] * MatStm1.Tbubl.$pDERNLSJac4.dummyVarNLSJac4) - MatStm1.comp[2].VP[3] * MatStm1.Tbubl.$pDERNLSJac4.dummyVarNLSJac4 / MatStm1.Tbubl ^ 2.0)
*/
void Flowsheet_eqFunction_135(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,135};
  modelica_real tmp111;
  modelica_real tmp112;
  modelica_real tmp113;
  modelica_real tmp114;
  modelica_real tmp115;
  modelica_real tmp116;
  modelica_real tmp117;
  modelica_boolean tmp118;
  modelica_real tmp119;
  modelica_real tmp120;
  tmp118 = (modelica_boolean)(data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */ == 0.0);
  if(tmp118)
  {
    tmp119 = 0.0;
  }
  else
  {
    tmp111 = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
    tmp112 = data->simulationInfo->realParameter[164] - 1.0;
    if(tmp111 < 0.0 && tmp112 != 0.0)
    {
      tmp114 = modf(tmp112, &tmp115);
      
      if(tmp114 > 0.5)
      {
        tmp114 -= 1.0;
        tmp115 += 1.0;
      }
      else if(tmp114 < -0.5)
      {
        tmp114 += 1.0;
        tmp115 -= 1.0;
      }
      
      if(fabs(tmp114) < 1e-10)
        tmp113 = pow(tmp111, tmp115);
      else
      {
        tmp117 = modf(1.0/tmp112, &tmp116);
        if(tmp117 > 0.5)
        {
          tmp117 -= 1.0;
          tmp116 += 1.0;
        }
        else if(tmp117 < -0.5)
        {
          tmp117 += 1.0;
          tmp116 -= 1.0;
        }
        if(fabs(tmp117) < 1e-10 && ((unsigned long)tmp116 & 1))
        {
          tmp113 = -pow(-tmp111, tmp114)*pow(tmp111, tmp115);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp111, tmp112);
        }
      }
    }
    else
    {
      tmp113 = pow(tmp111, tmp112);
    }
    if(isnan(tmp113) || isinf(tmp113))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp111, tmp112);
    }
    tmp119 = (tmp113) * ((data->simulationInfo->realParameter[164]) * (jacobian->tmpVars[3] /* MatStm1.Tbubl.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */));
  }
  tmp120 = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
  jacobian->tmpVars[6] /* $cse15.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[2] /* $cse20 JACOBIAN_DIFF_VAR */) * ((data->simulationInfo->realParameter[162]) * (jacobian->seedVars[0] /* $cse14.SeedNLSJac4 SEED_VAR */) + (data->simulationInfo->realParameter[163]) * (tmp119) - ((data->simulationInfo->realParameter[161]) * (DIVISION(jacobian->tmpVars[3] /* MatStm1.Tbubl.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */,(tmp120 * tmp120),"MatStm1.Tbubl ^ 2.0"))));
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac4._dummyVarNLSJac4 = MatStm1.compMolFrac[1,3] * $cse16.$pDERNLSJac4.dummyVarNLSJac4 + MatStm1.compMolFrac[1,2] * $cse15.$pDERNLSJac4.dummyVarNLSJac4 + MatStm1.compMolFrac[1,1] * $cse13.$pDERNLSJac4.dummyVarNLSJac4
*/
void Flowsheet_eqFunction_136(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,136};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_VAR */ = (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,3] variable */) * (jacobian->tmpVars[5] /* $cse16.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[64] /* MatStm1.compMolFrac[1,2] variable */) * (jacobian->tmpVars[6] /* $cse15.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */) + (data->localData[0]->realVars[63] /* MatStm1.compMolFrac[1,1] variable */) * (jacobian->tmpVars[4] /* $cse13.$pDERNLSJac4.dummyVarNLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}
int Flowsheet_functionJacNLSJac4_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac4;
  Flowsheet_eqFunction_129(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_130(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_131(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_132(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_133(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_134(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_135(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_136(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 153
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[2,3] = MatStm1.compMolFrac[2,3] * MatStm1.totMolFlo.SeedNLSJac5[2] + MatStm1.compMolFrac.SeedNLSJac5[2,3] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_153(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,153};
  jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac5[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac5[2,3] SEED_VAR */) * (data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo.SeedNLSJac5[2] + MatStm1.compMolFrac.SeedNLSJac5[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_154(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,154};
  jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac5[2] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */) * (data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo.SeedNLSJac5[2] + MatStm1.compMolFrac.SeedNLSJac5[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_155(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,155};
  jacobian->tmpVars[2] /* MatStm1.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac5[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */) * (data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac._$pDERNLSJac5._dummyVarNLSJac5 = 0.01 * MatStm1.totMolFlo.SeedNLSJac5[2]
*/
void Flowsheet_eqFunction_156(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,156};
  jacobian->tmpVars[3] /* MatStm1.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac5[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
MatStm1._totMolFlo._$pDERNLSJac5._dummyVarNLSJac5[3] = (-100.0) * MatStm1.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5
*/
void Flowsheet_eqFunction_157(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,157};
  jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */ = (-100.0) * (jacobian->tmpVars[3] /* MatStm1.liqPhasMolFrac.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[3,3] = MatStm1.compMolFrac[3,3] * MatStm1.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] + MatStm1.compMolFrac.SeedNLSJac5[3,3] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_158(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,158};
  jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,3] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */) * (jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac5[3,3] SEED_VAR */) * (data->localData[0]->realVars[106] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 159
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] + MatStm1.compMolFrac.SeedNLSJac5[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_159(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,159};
  jacobian->tmpVars[6] /* MatStm1.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[5] /* MatStm1.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */) * (data->localData[0]->realVars[106] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 160
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac5._dummyVarNLSJac5[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] + MatStm1.compMolFrac.SeedNLSJac5[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_160(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,160};
  jacobian->tmpVars[7] /* MatStm1.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[6] /* MatStm1.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */) * (data->localData[0]->realVars[106] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 161
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac5._dummyVarNLSJac5 = if 300.0 < MatStm1.Tbubl then MatStm1.compMolFrac.SeedNLSJac5[3,1] else if 300.0 > MatStm1.Tdew then MatStm1.compMolFrac.SeedNLSJac5[2,1] else MatStm1.compMolFrac.SeedNLSJac5[3,1] - MatStm1.K[1] * MatStm1.compMolFrac.SeedNLSJac5[2,1]
*/
void Flowsheet_eqFunction_161(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,161};
  modelica_boolean tmp121;
  modelica_boolean tmp122;
  modelica_boolean tmp123;
  modelica_real tmp124;
  RELATIONHYSTERESIS(tmp121, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 0, Less);
  tmp123 = (modelica_boolean)tmp121;
  if(tmp123)
  {
    tmp124 = jacobian->seedVars[6] /* MatStm1.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp122, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 1, Greater);
    tmp124 = (tmp122?jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */:jacobian->seedVars[6] /* MatStm1.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */ - ((data->localData[0]->realVars[8] /* MatStm1.K[1] variable */) * (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */)));
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp124;
  TRACE_POP
}

/*
equation index: 162
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac5._dummyVarNLSJac5 = MatStm1.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] + MatStm1.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1]
*/
void Flowsheet_eqFunction_162(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,162};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = jacobian->tmpVars[7] /* MatStm1.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 163
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac5._dummyVarNLSJac5 = if 300.0 < MatStm1.Tbubl then MatStm1.compMolFrac.SeedNLSJac5[3,2] else if 300.0 > MatStm1.Tdew then MatStm1.compMolFrac.SeedNLSJac5[2,2] else MatStm1.compMolFrac.SeedNLSJac5[3,2] - MatStm1.K[2] * MatStm1.compMolFrac.SeedNLSJac5[2,2]
*/
void Flowsheet_eqFunction_163(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,163};
  modelica_boolean tmp125;
  modelica_boolean tmp126;
  modelica_boolean tmp127;
  modelica_real tmp128;
  RELATIONHYSTERESIS(tmp125, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 0, Less);
  tmp127 = (modelica_boolean)tmp125;
  if(tmp127)
  {
    tmp128 = jacobian->seedVars[5] /* MatStm1.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp126, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 1, Greater);
    tmp128 = (tmp126?jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */:jacobian->seedVars[5] /* MatStm1.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */ - ((data->localData[0]->realVars[9] /* MatStm1.K[2] variable */) * (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */)));
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp128;
  TRACE_POP
}

/*
equation index: 164
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac5._dummyVarNLSJac5 = MatStm1.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] + MatStm1.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2]
*/
void Flowsheet_eqFunction_164(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,164};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm1.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[2] /* MatStm1.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 165
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac5._dummyVarNLSJac5 = if 300.0 < MatStm1.Tbubl then MatStm1.compMolFrac.SeedNLSJac5[2,1] + MatStm1.compMolFrac.SeedNLSJac5[2,2] + MatStm1.compMolFrac.SeedNLSJac5[2,3] else MatStm1.compMolFrac.SeedNLSJac5[3,1] + MatStm1.compMolFrac.SeedNLSJac5[3,2] + MatStm1.compMolFrac.SeedNLSJac5[3,3]
*/
void Flowsheet_eqFunction_165(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,165};
  modelica_boolean tmp129;
  RELATIONHYSTERESIS(tmp129, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 0, Less);
  jacobian->resultVars[4] /* $res5.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = (tmp129?jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac5[2,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac5[2,2] SEED_VAR */ + jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac5[2,3] SEED_VAR */:jacobian->seedVars[6] /* MatStm1.compMolFrac.SeedNLSJac5[3,1] SEED_VAR */ + jacobian->seedVars[5] /* MatStm1.compMolFrac.SeedNLSJac5[3,2] SEED_VAR */ + jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac5[3,3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 166
type: SIMPLE_ASSIGN
$res6._$pDERNLSJac5._dummyVarNLSJac5 = MatStm1.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,3] + MatStm1.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,3]
*/
void Flowsheet_eqFunction_166(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,166};
  jacobian->resultVars[5] /* $res6.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[3,3] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac5.dummyVarNLSJac5[2,3] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 167
type: SIMPLE_ASSIGN
$res7._$pDERNLSJac5._dummyVarNLSJac5 = if 300.0 < MatStm1.Tbubl then MatStm1.compMolFrac.SeedNLSJac5[3,3] else if 300.0 > MatStm1.Tdew then MatStm1.compMolFrac.SeedNLSJac5[2,3] else MatStm1.compMolFrac.SeedNLSJac5[3,3] - MatStm1.K[3] * MatStm1.compMolFrac.SeedNLSJac5[2,3]
*/
void Flowsheet_eqFunction_167(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,167};
  modelica_boolean tmp130;
  modelica_boolean tmp131;
  modelica_boolean tmp132;
  modelica_real tmp133;
  RELATIONHYSTERESIS(tmp130, 300.0, data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */, 0, Less);
  tmp132 = (modelica_boolean)tmp130;
  if(tmp132)
  {
    tmp133 = jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac5[3,3] SEED_VAR */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp131, 300.0, data->localData[0]->realVars[17] /* MatStm1.Tdew variable */, 1, Greater);
    tmp133 = (tmp131?jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac5[2,3] SEED_VAR */:jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac5[3,3] SEED_VAR */ - ((data->localData[0]->realVars[10] /* MatStm1.K[3] variable */) * (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac5[2,3] SEED_VAR */)));
  }
  jacobian->resultVars[6] /* $res7.$pDERNLSJac5.dummyVarNLSJac5 JACOBIAN_VAR */ = tmp133;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac5_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac5;
  Flowsheet_eqFunction_153(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_154(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_155(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_156(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_157(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_158(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_159(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_160(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_161(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_162(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_163(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_164(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_165(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_166(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_167(data, threadData, jacobian, parentJacobian);
  
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


