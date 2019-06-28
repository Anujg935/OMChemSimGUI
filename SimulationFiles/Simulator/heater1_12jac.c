/* Jacobians 6 */
#include "heater1_model.h"
#include "heater1_12jac.h"
OMC_DISABLE_OPT
int heater1_initialAnalyticJacobianNLSJac0(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,4,0,2,3,0,2,3,1,2,4,1,2,4};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 11;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(11,sizeof(modelica_real));
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
int heater1_initialAnalyticJacobianNLSJac2(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,1,0,3,4,1,2,3,1,2,3,0,3,4};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 11;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(11,sizeof(modelica_real));
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
int heater1_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int heater1_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int heater1_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int heater1_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}


/*
equation index: 43
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.SeedNLSJac0[3] + MatStm2.compMolFrac.SeedNLSJac0[3,2] * MatStm2.totMolFlo[3]
*/
void heater1_eqFunction_43(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,43};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac0[3] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.SeedNLSJac0[3] + MatStm2.compMolFrac.SeedNLSJac0[3,1] * MatStm2.totMolFlo[3]
*/
void heater1_eqFunction_44(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,44};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac0[3] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = (-0.005) * MatStm2.totMolFlo.SeedNLSJac0[3]
*/
void heater1_eqFunction_45(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,45};
  jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (-0.005) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac0[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2] = 200.0 * MatStm2.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void heater1_eqFunction_46(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,46};
  jacobian->tmpVars[3] /* MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */ = (200.0) * (jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] + MatStm2.compMolFrac.SeedNLSJac0[2,2] * MatStm2.totMolFlo[2]
*/
void heater1_eqFunction_47(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,47};
  jacobian->tmpVars[4] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->tmpVars[3] /* MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */) * (data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] + MatStm2.compMolFrac.SeedNLSJac0[2,1] * MatStm2.totMolFlo[2]
*/
void heater1_eqFunction_48(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,48};
  jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->tmpVars[3] /* MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */) * (data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac0._dummyVarNLSJac0 = MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] + MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1]
*/
void heater1_eqFunction_49(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,49};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac0._dummyVarNLSJac0 = if 101316.5 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac0[3,2] else if 101316.5 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac0[3,2] - MatStm2.K[2] * MatStm2.compMolFrac.SeedNLSJac0[2,2] else MatStm2.compMolFrac.SeedNLSJac0[2,2]
*/
void heater1_eqFunction_50(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,50};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = GreaterEq(101316.5,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */;
  }
  else
  {
    tmp1 = GreaterEq(101316.5,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp3 = (tmp1?jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */ - ((data->localData[0]->realVars[99] /* MatStm2.K[2] variable */) * (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */)):jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp3;
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac0._dummyVarNLSJac0 = if 101316.5 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac0[2,1] + MatStm2.compMolFrac.SeedNLSJac0[2,2] else MatStm2.compMolFrac.SeedNLSJac0[3,1] + MatStm2.compMolFrac.SeedNLSJac0[3,2]
*/
void heater1_eqFunction_51(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,51};
  modelica_boolean tmp4;
  tmp4 = GreaterEq(101316.5,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = (tmp4?jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */:jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac0._dummyVarNLSJac0 = if 101316.5 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac0[3,1] else if 101316.5 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac0[3,1] - MatStm2.K[1] * MatStm2.compMolFrac.SeedNLSJac0[2,1] else MatStm2.compMolFrac.SeedNLSJac0[2,1]
*/
void heater1_eqFunction_52(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,52};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  tmp5 = GreaterEq(101316.5,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */;
  }
  else
  {
    tmp6 = GreaterEq(101316.5,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp8 = (tmp6?jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ - ((data->localData[0]->realVars[98] /* MatStm2.K[1] variable */) * (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */)):jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */);
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp8;
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac0._dummyVarNLSJac0 = MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] + MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2]
*/
void heater1_eqFunction_53(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,53};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[4] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int heater1_functionJacNLSJac0_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = heater1_INDEX_JAC_NLSJac0;
  heater1_eqFunction_43(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_44(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_45(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_46(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_47(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_48(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_49(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_50(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_51(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_52(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_53(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 196
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.SeedNLSJac2[2] + MatStm2.compMolFrac.SeedNLSJac2[2,1] * MatStm2.totMolFlo[2]
*/
void heater1_eqFunction_196(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,196};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac2[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */) * (data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.SeedNLSJac2[2] + MatStm2.compMolFrac.SeedNLSJac2[2,2] * MatStm2.totMolFlo[2]
*/
void heater1_eqFunction_197(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,197};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac2[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */) * (data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac2._dummyVarNLSJac2 = 0.005 * MatStm2.totMolFlo.SeedNLSJac2[2]
*/
void heater1_eqFunction_198(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,198};
  jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (0.005) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac2[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3] = (-200.0) * MatStm2.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2
*/
void heater1_eqFunction_199(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,199};
  jacobian->tmpVars[3] /* MatStm2.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] JACOBIAN_DIFF_VAR */ = (-200.0) * (jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] + MatStm2.compMolFrac.SeedNLSJac2[3,1] * MatStm2.totMolFlo[3]
*/
void heater1_eqFunction_200(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,200};
  jacobian->tmpVars[4] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->tmpVars[3] /* MatStm2.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] + MatStm2.compMolFrac.SeedNLSJac2[3,2] * MatStm2.totMolFlo[3]
*/
void heater1_eqFunction_201(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,201};
  jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->tmpVars[3] /* MatStm2.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac2._dummyVarNLSJac2 = MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] + MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2]
*/
void heater1_eqFunction_202(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,202};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac2._dummyVarNLSJac2 = MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] + MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1]
*/
void heater1_eqFunction_203(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,203};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[4] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac2._dummyVarNLSJac2 = if 101316.5 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac2[3,1] else if 101316.5 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac2[3,1] - MatStm2.K[1] * MatStm2.compMolFrac.SeedNLSJac2[2,1] else MatStm2.compMolFrac.SeedNLSJac2[2,1]
*/
void heater1_eqFunction_204(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,204};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  tmp9 = GreaterEq(101316.5,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */;
  }
  else
  {
    tmp10 = GreaterEq(101316.5,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp12 = (tmp10?jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */ - ((data->localData[0]->realVars[98] /* MatStm2.K[1] variable */) * (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */)):jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp12;
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac2._dummyVarNLSJac2 = if 101316.5 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac2[2,1] + MatStm2.compMolFrac.SeedNLSJac2[2,2] else MatStm2.compMolFrac.SeedNLSJac2[3,1] + MatStm2.compMolFrac.SeedNLSJac2[3,2]
*/
void heater1_eqFunction_205(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,205};
  modelica_boolean tmp13;
  tmp13 = GreaterEq(101316.5,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (tmp13?jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */:jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac2._dummyVarNLSJac2 = if 101316.5 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac2[3,2] else if 101316.5 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac2[3,2] - MatStm2.K[2] * MatStm2.compMolFrac.SeedNLSJac2[2,2] else MatStm2.compMolFrac.SeedNLSJac2[2,2]
*/
void heater1_eqFunction_206(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,206};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  tmp14 = GreaterEq(101316.5,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp16 = (modelica_boolean)tmp14;
  if(tmp16)
  {
    tmp17 = jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */;
  }
  else
  {
    tmp15 = GreaterEq(101316.5,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp17 = (tmp15?jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */ - ((data->localData[0]->realVars[99] /* MatStm2.K[2] variable */) * (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */)):jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp17;
  TRACE_POP
}
int heater1_functionJacNLSJac2_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = heater1_INDEX_JAC_NLSJac2;
  heater1_eqFunction_196(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_197(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_198(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_199(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_200(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_201(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_202(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_203(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_204(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_205(data, threadData, jacobian, parentJacobian);

  heater1_eqFunction_206(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}
int heater1_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int heater1_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int heater1_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int heater1_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}


