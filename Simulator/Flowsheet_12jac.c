/* Jacobians 6 */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac0(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+3] = {0,3,2,3};
  const int rowIndex[8] = {0,1,2,1,2,0,1,2};
  int i = 0;
  
  jacobian->sizeCols = 3;
  jacobian->sizeRows = 3;
  jacobian->sizeTmpVars = 8;
  jacobian->seedVars = (modelica_real*) calloc(3,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(3,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(8,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((3+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(8*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 8;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(3*sizeof(int));
  jacobian->sparsePattern.maxColors = 3;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (3+1)*sizeof(int));
  
  for(i=2;i<3+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 8*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[2] = 1;
  jacobian->sparsePattern.colorCols[1] = 2;
  jacobian->sparsePattern.colorCols[0] = 3;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac1(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+3] = {0,3,2,3};
  const int rowIndex[8] = {0,1,2,0,2,0,1,2};
  int i = 0;
  
  jacobian->sizeCols = 3;
  jacobian->sizeRows = 3;
  jacobian->sizeTmpVars = 8;
  jacobian->seedVars = (modelica_real*) calloc(3,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(3,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(8,sizeof(modelica_real));
  jacobian->sparsePattern.leadindex = (unsigned int*) malloc((3+1)*sizeof(int));
  jacobian->sparsePattern.index = (unsigned int*) malloc(8*sizeof(int));
  jacobian->sparsePattern.numberOfNoneZeros = 8;
  jacobian->sparsePattern.colorCols = (unsigned int*) malloc(3*sizeof(int));
  jacobian->sparsePattern.maxColors = 3;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern.leadindex, colPtrIndex, (3+1)*sizeof(int));
  
  for(i=2;i<3+1;++i)
    jacobian->sparsePattern.leadindex[i] += jacobian->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern.index, rowIndex, 8*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern.colorCols[2] = 1;
  jacobian->sparsePattern.colorCols[1] = 2;
  jacobian->sparsePattern.colorCols[0] = 3;
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
equation index: 24
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo.SeedNLSJac0[3] + MatStm1.compMolFrac.SeedNLSJac0[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_24(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,24};
  jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[3] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */) * (data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = (-0.01) * MatStm1.totMolFlo.SeedNLSJac0[3]
*/
void Flowsheet_eqFunction_25(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,25};
  jacobian->tmpVars[1] /* MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (-0.01) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[3] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = -MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void Flowsheet_eqFunction_26(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,26};
  jacobian->tmpVars[2] /* MatStm1.vapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[1] /* MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
MatStm1._totMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2] = 100.0 * MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void Flowsheet_eqFunction_27(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,27};
  jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[1] /* MatStm1.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] + MatStm1.compMolFrac.SeedNLSJac0[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_28(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,28};
  jacobian->tmpVars[4] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */) * (jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */) * (data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.totMolFlo.SeedNLSJac0[3] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac0[3,1] else MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2]
*/
void Flowsheet_eqFunction_29(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,29};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac0[3] SEED_VAR */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */:jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp3;
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac0._dummyVarNLSJac0 = MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] + MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1]
*/
void Flowsheet_eqFunction_30(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,30};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[4] /* MatStm1.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac0[3,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac0[2,1] + MatStm1.compMolFrac[1,1] * MatStm1.vapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 * (-1.0 + MatStm1.K[1]) / (1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[1])) ^ 2.0 else MatStm1.compMolFrac.SeedNLSJac0[2,1]
*/
void Flowsheet_eqFunction_31(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,31};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp9 = (modelica_boolean)tmp4;
  if(tmp9)
  {
    tmp10 = jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp7 = (modelica_boolean)tmp5;
    if(tmp7)
    {
      tmp6 = 1.0 + (data->localData[0]->realVars[61] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[0] /* MatStm1.K[1] variable */);
      tmp8 = jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[24] /* MatStm1.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[2] /* MatStm1.vapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[0] /* MatStm1.K[1] variable */)),(tmp6 * tmp6),"(1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[1])) ^ 2.0");
    }
    else
    {
      tmp8 = jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */;
    }
    tmp10 = tmp8;
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp10;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac0_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac0;
  Flowsheet_eqFunction_24(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_25(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_26(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_27(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_28(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_29(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_30(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_31(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 78
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo.SeedNLSJac1[2] + MatStm1.compMolFrac.SeedNLSJac1[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_78(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,78};
  jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac1[2] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */) * (data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1 = 0.01 * MatStm1.totMolFlo.SeedNLSJac1[2]
*/
void Flowsheet_eqFunction_79(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,79};
  jacobian->tmpVars[1] /* MatStm1.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac1[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 80
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac._$pDERNLSJac1._dummyVarNLSJac1 = -MatStm1.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1
*/
void Flowsheet_eqFunction_80(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,80};
  jacobian->tmpVars[2] /* MatStm1.vapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[1] /* MatStm1.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 81
type: SIMPLE_ASSIGN
MatStm1._totMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3] = (-100.0) * MatStm1.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1
*/
void Flowsheet_eqFunction_81(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,81};
  jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */ = (-100.0) * (jacobian->tmpVars[1] /* MatStm1.liqPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 82
type: SIMPLE_ASSIGN
MatStm1._compMolFlo._$pDERNLSJac1._dummyVarNLSJac1[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] + MatStm1.compMolFrac.SeedNLSJac1[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_82(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,82};
  jacobian->tmpVars[4] /* MatStm1.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */) * (jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */) * (data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 83
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac1._dummyVarNLSJac1 = MatStm1.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] + MatStm1.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1]
*/
void Flowsheet_eqFunction_83(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,83};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[4] /* MatStm1.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm1.compMolFlo.$pDERNLSJac1.dummyVarNLSJac1[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 84
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm1.Pbubl then MatStm1.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac1[3,1] else MatStm1.totMolFlo.SeedNLSJac1[2]
*/
void Flowsheet_eqFunction_84(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,84};
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_real tmp14;
  tmp11 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp13 = (modelica_boolean)tmp11;
  if(tmp13)
  {
    tmp14 = jacobian->tmpVars[3] /* MatStm1.totMolFlo.$pDERNLSJac1.dummyVarNLSJac1[3] JACOBIAN_DIFF_VAR */;
  }
  else
  {
    tmp12 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp14 = (tmp12?jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */:jacobian->seedVars[0] /* MatStm1.totMolFlo.SeedNLSJac1[2] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp14;
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac1._dummyVarNLSJac1 = if 101325.0 >= MatStm1.Pbubl then MatStm1.compMolFrac.SeedNLSJac1[3,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMolFrac.SeedNLSJac1[2,1] + MatStm1.compMolFrac[1,1] * MatStm1.vapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 * (-1.0 + MatStm1.K[1]) / (1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[1])) ^ 2.0 else MatStm1.compMolFrac.SeedNLSJac1[2,1]
*/
void Flowsheet_eqFunction_85(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,85};
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  tmp15 = GreaterEq(101325.0,data->localData[0]->realVars[5] /* MatStm1.Pbubl variable */);
  tmp20 = (modelica_boolean)tmp15;
  if(tmp20)
  {
    tmp21 = jacobian->seedVars[2] /* MatStm1.compMolFrac.SeedNLSJac1[3,1] SEED_VAR */;
  }
  else
  {
    tmp16 = GreaterEq(101325.0,data->localData[0]->realVars[6] /* MatStm1.Pdew variable */);
    tmp18 = (modelica_boolean)tmp16;
    if(tmp18)
    {
      tmp17 = 1.0 + (data->localData[0]->realVars[61] /* MatStm1.vapPhasMolFrac variable */) * (-1.0 + data->localData[0]->realVars[0] /* MatStm1.K[1] variable */);
      tmp19 = jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */ + DIVISION((data->localData[0]->realVars[24] /* MatStm1.compMolFrac[1,1] variable */) * ((jacobian->tmpVars[2] /* MatStm1.vapPhasMolFrac.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) * (-1.0 + data->localData[0]->realVars[0] /* MatStm1.K[1] variable */)),(tmp17 * tmp17),"(1.0 + MatStm1.vapPhasMolFrac * (-1.0 + MatStm1.K[1])) ^ 2.0");
    }
    else
    {
      tmp19 = jacobian->seedVars[1] /* MatStm1.compMolFrac.SeedNLSJac1[2,1] SEED_VAR */;
    }
    tmp21 = tmp19;
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = tmp21;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac1_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac1;
  Flowsheet_eqFunction_78(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_79(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_80(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_81(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_82(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_83(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_84(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_85(data, threadData, jacobian, parentJacobian);
  
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


