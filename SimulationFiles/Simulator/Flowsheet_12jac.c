/* Jacobians 6 */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac0(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,4,2,3,4,2,3,4,0,1,2,0,1,2};
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
int Flowsheet_initialAnalyticJacobianNLSJac1(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo.SeedNLSJac0[3] + MatStm1.compMolFrac.SeedNLSJac0[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_37(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,37};
  jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[3] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */) * (data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo.SeedNLSJac0[3] + MatStm1.compMolFrac.SeedNLSJac0[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_38(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,38};
  jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[3] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */) * (data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = (-0.01) * MatStm1.totMolFlo.SeedNLSJac0[3]
*/
void Flowsheet_eqFunction_39(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,39};
  jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (-0.01) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
MatStm1._totMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2] = 100.0 * MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void Flowsheet_eqFunction_40(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,40};
  jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] + MatStm1.compMolFrac.SeedNLSJac0[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_41(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,41};
  jacobian->tmpVars[4] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */) * (jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */) * (data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] + MatStm1.compMolFrac.SeedNLSJac0[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_42(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,42};
  jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */) * (jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */) * (data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac0._dummyVarNLSJac0 = MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] + MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1]
*/
void Flowsheet_eqFunction_43(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,43};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac0[3,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac0[3,1] - MatStm1.K[1] * MatStm1.compMolFrac.SeedNLSJac0[2,1] else MatStm1.compMolFrac.SeedNLSJac0[2,1]
*/
void Flowsheet_eqFunction_44(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,44};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp2 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp4 = (modelica_boolean)tmp2;
  if(tmp4)
  {
    tmp5 = jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */;
  }
  else
  {
    tmp3 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp5 = (tmp3?jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ - ((data->localData[0]->realVars[0] /* MatStm1.K[1] variable */) * (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */)):jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp5;
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac0[2,1] + MatStm1.compMolFrac.SeedNLSJac0[2,2] else MatStm1.compMolFrac.SeedNLSJac0[3,1] + MatStm1.compMolFrac.SeedNLSJac0[3,2]
*/
void Flowsheet_eqFunction_45(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,45};
  modelica_boolean tmp6;
  tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = (tmp6?jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */:jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac0[3,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac0[3,2] - MatStm1.K[2] * MatStm1.compMolFrac.SeedNLSJac0[2,2] else MatStm1.compMolFrac.SeedNLSJac0[2,2]
*/
void Flowsheet_eqFunction_46(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,46};
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp7 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp9 = (modelica_boolean)tmp7;
  if(tmp9)
  {
    tmp10 = jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */;
  }
  else
  {
    tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp10 = (tmp8?jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */ - ((data->localData[0]->realVars[1] /* MatStm1.K[2] variable */) * (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */)):jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */);
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp10;
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac0._dummyVarNLSJac0 = MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] + MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2]
*/
void Flowsheet_eqFunction_47(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,47};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[4] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac0_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac0;
  Flowsheet_eqFunction_37(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_38(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_39(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_40(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_41(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_42(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_43(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_44(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_45(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_46(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_47(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 111
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo.SeedNLSJac1[2] + MatStm1.compMolFrac.SeedNLSJac1[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_111(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,111};
  jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac1[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */) * (data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 112
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo.SeedNLSJac1[2] + MatStm1.compMolFrac.SeedNLSJac1[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_112(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,112};
  jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac1[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */) * (data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 113
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1 = 0.01 * MatStm1.totMolFlo.SeedNLSJac1[2]
*/
void Flowsheet_eqFunction_113(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,113};
  jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac1[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 114
type: SIMPLE_ASSIGN
MatStm1._totMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3] = (-100.0) * MatStm1.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1
*/
void Flowsheet_eqFunction_114(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,114};
  jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */ = (-100.0) * (jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 115
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] + MatStm1.compMolFrac.SeedNLSJac1[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_115(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,115};
  jacobian->tmpVars[4] /* MatStm1.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */) * (jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */) * (data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] + MatStm1.compMolFrac.SeedNLSJac1[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_116(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,116};
  jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */) * (jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */) * (data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac1._dummyVarNLSJac1 = MatStm1.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] + MatStm1.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2]
*/
void Flowsheet_eqFunction_117(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,117};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac1._dummyVarNLSJac1 = MatStm1.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] + MatStm1.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1]
*/
void Flowsheet_eqFunction_118(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,118};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[4] /* MatStm1.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac1[3,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac1[3,1] - MatStm1.K[1] * MatStm1.compMolFrac.SeedNLSJac1[2,1] else MatStm1.compMolFrac.SeedNLSJac1[2,1]
*/
void Flowsheet_eqFunction_119(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,119};
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  tmp11 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp13 = (modelica_boolean)tmp11;
  if(tmp13)
  {
    tmp14 = jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */;
  }
  else
  {
    tmp12 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp14 = (tmp12?jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */ - ((data->localData[0]->realVars[0] /* MatStm1.K[1] variable */) * (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */)):jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp14;
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac1[2,1] + MatStm1.compMolFrac.SeedNLSJac1[2,2] else MatStm1.compMolFrac.SeedNLSJac1[3,1] + MatStm1.compMolFrac.SeedNLSJac1[3,2]
*/
void Flowsheet_eqFunction_120(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,120};
  modelica_boolean tmp15;
  tmp15 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = (tmp15?jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */:jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */ + jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac1[3,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac1[3,2] - MatStm1.K[2] * MatStm1.compMolFrac.SeedNLSJac1[2,2] else MatStm1.compMolFrac.SeedNLSJac1[2,2]
*/
void Flowsheet_eqFunction_121(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,121};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  tmp16 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pbubl variable */);
  tmp18 = (modelica_boolean)tmp16;
  if(tmp18)
  {
    tmp19 = jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */;
  }
  else
  {
    tmp17 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp19 = (tmp17?jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac1[3,2] SEED_VAR */ - ((data->localData[0]->realVars[1] /* MatStm1.K[2] variable */) * (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */)):jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac1[2,2] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp19;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac1_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac1;
  Flowsheet_eqFunction_111(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_112(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_113(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_114(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_115(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_116(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_117(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_118(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_119(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_120(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_121(data, threadData, jacobian, parentJacobian);
  
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


