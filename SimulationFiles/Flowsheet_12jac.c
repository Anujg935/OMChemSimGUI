/* Jacobians 6 */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac0(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {1,3,1,2,4,0,2,3,1,2,4,0,2,3};
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
int Flowsheet_initialAnalyticJacobianNLSJac2(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
  const int rowIndex[14] = {0,4,2,3,4,2,3,4,0,1,2,0,1,2};
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
equation index: 43
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo.SeedNLSJac0[2] + MatStm1.compMolFrac.SeedNLSJac0[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_43(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,43};
  jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[48] /* MatStm1.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */) * (data->localData[0]->realVars[89] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo.SeedNLSJac0[2] + MatStm1.compMolFrac.SeedNLSJac0[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_44(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,44};
  jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[49] /* MatStm1.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */) * (data->localData[0]->realVars[89] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = 0.01052631578947368 * MatStm1.totMolFlo.SeedNLSJac0[2]
*/
void Flowsheet_eqFunction_45(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,45};
  jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (0.01052631578947368) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = -MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void Flowsheet_eqFunction_46(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,46};
  jacobian->tmpVars[3] /* MatStm1.vapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
MatStm1._totMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3] = 95.0 * MatStm1.vapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void Flowsheet_eqFunction_47(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,47};
  jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */ = (95.0) * (jacobian->tmpVars[3] /* MatStm1.vapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] + MatStm1.compMolFrac.SeedNLSJac0[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_48(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,48};
  jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */) * (data->localData[0]->realVars[90] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] + MatStm1.compMolFrac.SeedNLSJac0[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_49(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,49};
  jacobian->tmpVars[6] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[50] /* MatStm1.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */) * (data->localData[0]->realVars[90] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac0[3,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac0[3,2] - MatStm1.K[2] * MatStm1.compMolFrac.SeedNLSJac0[2,2] else MatStm1.compMolFrac.SeedNLSJac0[2,2]
*/
void Flowsheet_eqFunction_50(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,50};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp2 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp4 = (modelica_boolean)tmp2;
  if(tmp4)
  {
    tmp5 = jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */;
  }
  else
  {
    tmp3 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp5 = (tmp3?jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */ - ((data->localData[0]->realVars[6] /* MatStm1.K[2] variable */) * (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */)):jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp5;
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac0._dummyVarNLSJac0 = MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] + MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1]
*/
void Flowsheet_eqFunction_51(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,51};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac0[2,1] + MatStm1.compMolFrac.SeedNLSJac0[2,2] else MatStm1.compMolFrac.SeedNLSJac0[3,1] + MatStm1.compMolFrac.SeedNLSJac0[3,2]
*/
void Flowsheet_eqFunction_52(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,52};
  modelica_boolean tmp6;
  tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = (tmp6?jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */:jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac0._dummyVarNLSJac0 = MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] + MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2]
*/
void Flowsheet_eqFunction_53(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,53};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac0[3,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac0[3,1] - MatStm1.K[1] * MatStm1.compMolFrac.SeedNLSJac0[2,1] else MatStm1.compMolFrac.SeedNLSJac0[2,1]
*/
void Flowsheet_eqFunction_54(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,54};
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
  Flowsheet_eqFunction_43(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_44(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_45(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_46(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_47(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_48(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_49(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_50(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_51(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_52(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_53(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_54(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 193
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo.SeedNLSJac2[3] + MatStm1.compMolFrac.SeedNLSJac2[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_193(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,193};
  jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[50] /* MatStm1.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac2[3] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */) * (data->localData[0]->realVars[90] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 194
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo.SeedNLSJac2[3] + MatStm1.compMolFrac.SeedNLSJac2[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_194(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,194};
  jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac2[3] SEED_VAR */) + (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */) * (data->localData[0]->realVars[90] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 195
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac._$pDERNLSJac2._dummyVarNLSJac2 = 0.01052631578947368 * MatStm1.totMolFlo.SeedNLSJac2[3]
*/
void Flowsheet_eqFunction_195(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,195};
  jacobian->tmpVars[2] /* MatStm1.vapPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (0.01052631578947368) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac2[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 196
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac._$pDERNLSJac2._dummyVarNLSJac2 = -MatStm1.vapPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2
*/
void Flowsheet_eqFunction_196(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,196};
  jacobian->tmpVars[3] /* MatStm1.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm1.vapPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
MatStm1._totMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2] = 95.0 * MatStm1.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2
*/
void Flowsheet_eqFunction_197(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,197};
  jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2] JACOBIAN_DIFF_VAR */ = (95.0) * (jacobian->tmpVars[3] /* MatStm1.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2] + MatStm1.compMolFrac.SeedNLSJac2[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_198(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,198};
  jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[48] /* MatStm1.compMolFrac[2,1] variable */) * (jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */) * (data->localData[0]->realVars[89] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2] + MatStm1.compMolFrac.SeedNLSJac2[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_199(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,199};
  jacobian->tmpVars[6] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[49] /* MatStm1.compMolFrac[2,2] variable */) * (jacobian->tmpVars[4] /* MatStm1.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */) * (data->localData[0]->realVars[89] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac2._dummyVarNLSJac2 = MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] + MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2]
*/
void Flowsheet_eqFunction_200(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,200};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac2._dummyVarNLSJac2 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac2[3,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac2[3,2] - MatStm1.K[2] * MatStm1.compMolFrac.SeedNLSJac2[2,2] else MatStm1.compMolFrac.SeedNLSJac2[2,2]
*/
void Flowsheet_eqFunction_201(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,201};
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  tmp11 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp13 = (modelica_boolean)tmp11;
  if(tmp13)
  {
    tmp14 = jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */;
  }
  else
  {
    tmp12 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp14 = (tmp12?jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */ - ((data->localData[0]->realVars[6] /* MatStm1.K[2] variable */) * (jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */)):jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp14;
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac2._dummyVarNLSJac2 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac2[2,1] + MatStm1.compMolFrac.SeedNLSJac2[2,2] else MatStm1.compMolFrac.SeedNLSJac2[3,1] + MatStm1.compMolFrac.SeedNLSJac2[3,2]
*/
void Flowsheet_eqFunction_202(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,202};
  modelica_boolean tmp15;
  tmp15 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  jacobian->resultVars[2] /* $res3.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (tmp15?jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */:jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac2._dummyVarNLSJac2 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac2[3,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac2[3,1] - MatStm1.K[1] * MatStm1.compMolFrac.SeedNLSJac2[2,1] else MatStm1.compMolFrac.SeedNLSJac2[2,1]
*/
void Flowsheet_eqFunction_203(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,203};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  tmp16 = GreaterEq(101325.0,data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */);
  tmp18 = (modelica_boolean)tmp16;
  if(tmp18)
  {
    tmp19 = jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */;
  }
  else
  {
    tmp17 = GreaterEq(101325.0,data->localData[0]->realVars[12] /* MatStm1.Pdew variable */);
    tmp19 = (tmp17?jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */ - ((data->localData[0]->realVars[5] /* MatStm1.K[1] variable */) * (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */)):jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */);
  }
  jacobian->resultVars[3] /* $res4.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp19;
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac2._dummyVarNLSJac2 = MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] + MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1]
*/
void Flowsheet_eqFunction_204(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,204};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm1.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac2_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac2;
  Flowsheet_eqFunction_193(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_194(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_195(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_196(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_197(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_198(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_199(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_200(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_201(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_202(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_203(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_204(data, threadData, jacobian, parentJacobian);
  
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


