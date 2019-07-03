/* Jacobians 6 */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
OMC_DISABLE_OPT
int Flowsheet_initialAnalyticJacobianNLSJac0(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+5] = {0,2,3,3,3,3};
<<<<<<< HEAD
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
=======
  const int rowIndex[14] = {0,2,2,3,4,0,1,3,2,3,4,0,1,3};
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 11;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
<<<<<<< HEAD
  jacobian->tmpVars = (modelica_real*) calloc(11,sizeof(modelica_real));
=======
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
  const int rowIndex[14] = {1,4,0,3,4,1,2,3,1,2,3,0,3,4};
  int i = 0;
  
  jacobian->sizeCols = 5;
  jacobian->sizeRows = 5;
  jacobian->sizeTmpVars = 12;
  jacobian->seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(12,sizeof(modelica_real));
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
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
<<<<<<< HEAD
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
=======
equation index: 46
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.SeedNLSJac0[3] + MatStm2.compMolFrac.SeedNLSJac0[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_46(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,46};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac0[3] SEED_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  TRACE_POP
}

/*
<<<<<<< HEAD
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
=======
equation index: 47
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.SeedNLSJac0[3] + MatStm2.compMolFrac.SeedNLSJac0[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_47(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,47};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac0[3] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  TRACE_POP
}

/*
<<<<<<< HEAD
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
=======
equation index: 48
type: SIMPLE_ASSIGN
MatStm2._vapPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = 0.01 * MatStm2.totMolFlo.SeedNLSJac0[3]
*/
void Flowsheet_eqFunction_48(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,48};
  jacobian->tmpVars[2] /* MatStm2.vapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac0[3] SEED_VAR */);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  TRACE_POP
}

/*
<<<<<<< HEAD
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
=======
equation index: 49
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac0._dummyVarNLSJac0 = -MatStm2.vapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void Flowsheet_eqFunction_49(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,49};
  jacobian->tmpVars[3] /* MatStm2.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm2.vapPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  TRACE_POP
}

/*
<<<<<<< HEAD
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
=======
equation index: 50
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2] = 100.0 * MatStm2.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0
*/
void Flowsheet_eqFunction_50(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,50};
  jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[3] /* MatStm2.liqPhasMolFrac.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  TRACE_POP
}

/*
<<<<<<< HEAD
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
=======
equation index: 51
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] + MatStm2.compMolFrac.SeedNLSJac0[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_51(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,51};
  jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */) * (data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  TRACE_POP
}

/*
<<<<<<< HEAD
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
=======
equation index: 52
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac0._dummyVarNLSJac0[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] + MatStm2.compMolFrac.SeedNLSJac0[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_52(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,52};
  jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */) * (data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  TRACE_POP
}

/*
<<<<<<< HEAD
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
=======
equation index: 53
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac0._dummyVarNLSJac0 = MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] + MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2]
*/
void Flowsheet_eqFunction_53(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,53};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac0[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac0[3,2] - MatStm2.K[2] * MatStm2.compMolFrac.SeedNLSJac0[2,2] else MatStm2.compMolFrac.SeedNLSJac0[2,2]
*/
void Flowsheet_eqFunction_54(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,54};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp3 = (tmp1?jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */ - ((data->localData[0]->realVars[99] /* MatStm2.K[2] variable */) * (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */)):jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp3;
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac0._dummyVarNLSJac0 = MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] + MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1]
*/
void Flowsheet_eqFunction_55(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,55};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac0.dummyVarNLSJac0[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac0[2,1] + MatStm2.compMolFrac.SeedNLSJac0[2,2] else MatStm2.compMolFrac.SeedNLSJac0[3,1] + MatStm2.compMolFrac.SeedNLSJac0[3,2]
*/
void Flowsheet_eqFunction_56(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,56};
  modelica_boolean tmp4;
  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = (tmp4?jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */ + jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac0[2,2] SEED_VAR */:jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac0[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac0._dummyVarNLSJac0 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac0[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac0[3,1] - MatStm2.K[1] * MatStm2.compMolFrac.SeedNLSJac0[2,1] else MatStm2.compMolFrac.SeedNLSJac0[2,1]
*/
void Flowsheet_eqFunction_57(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,57};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  {
    tmp5 = jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */;
  }
  else
  {
<<<<<<< HEAD
    tmp3 = GreaterEq(101325.0,data->localData[0]->realVars[7] /* MatStm1.Pdew variable */);
    tmp5 = (tmp3?jacobian->seedVars[4] /* MatStm1.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ - ((data->localData[0]->realVars[0] /* MatStm1.K[1] variable */) * (jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */)):jacobian->seedVars[3] /* MatStm1.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */);
  }
  jacobian->resultVars[1] /* $res2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp5;
=======
    tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp8 = (tmp6?jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac0[3,1] SEED_VAR */ - ((data->localData[0]->realVars[98] /* MatStm2.K[1] variable */) * (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */)):jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac0[2,1] SEED_VAR */);
  }
  jacobian->resultVars[4] /* $res5.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = tmp8;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac0_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = Flowsheet_INDEX_JAC_NLSJac0;
  Flowsheet_eqFunction_46(data, threadData, jacobian, parentJacobian);

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
  
  TRACE_POP
  return 0;
}

/*
equation index: 200
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo.SeedNLSJac2[2] + MatStm2.compMolFrac.SeedNLSJac2[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_200(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,200};
  jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac2[2] SEED_VAR */) + (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */) * (data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo.SeedNLSJac2[2] + MatStm2.compMolFrac.SeedNLSJac2[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_201(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,201};
  jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac2[2] SEED_VAR */) + (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */) * (data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac._$pDERNLSJac2._dummyVarNLSJac2 = 0.01 * MatStm2.totMolFlo.SeedNLSJac2[2]
*/
void Flowsheet_eqFunction_202(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,202};
  jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (0.01) * (jacobian->seedVars[0] /* MatStm2.totMolFlo.SeedNLSJac2[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
MatStm2._vapPhasMolFrac._$pDERNLSJac2._dummyVarNLSJac2 = -MatStm2.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2
*/
void Flowsheet_eqFunction_203(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,203};
  jacobian->tmpVars[3] /* MatStm2.vapPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (-jacobian->tmpVars[2] /* MatStm2.liqPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
MatStm2._totMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3] = 100.0 * MatStm2.vapPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2
*/
void Flowsheet_eqFunction_204(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,204};
  jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] JACOBIAN_DIFF_VAR */ = (100.0) * (jacobian->tmpVars[3] /* MatStm2.vapPhasMolFrac.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] + MatStm2.compMolFrac.SeedNLSJac2[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_205(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,205};
  jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
MatStm2._compMolFlo._$pDERNLSJac2._dummyVarNLSJac2[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] + MatStm2.compMolFrac.SeedNLSJac2[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_206(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,206};
  jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] JACOBIAN_DIFF_VAR */ = (data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */) * (jacobian->tmpVars[4] /* MatStm2.totMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3] JACOBIAN_DIFF_VAR */) + (jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */) * (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  TRACE_POP
}

/*
<<<<<<< HEAD
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
=======
equation index: 207
type: SIMPLE_ASSIGN
$res1._$pDERNLSJac2._dummyVarNLSJac2 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac2[3,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac2[3,1] - MatStm2.K[1] * MatStm2.compMolFrac.SeedNLSJac2[2,1] else MatStm2.compMolFrac.SeedNLSJac2[2,1]
*/
void Flowsheet_eqFunction_207(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,207};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */;
  }
  else
  {
    tmp10 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp12 = (tmp10?jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */ - ((data->localData[0]->realVars[98] /* MatStm2.K[1] variable */) * (jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */)):jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */);
  }
  jacobian->resultVars[0] /* $res1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp12;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  TRACE_POP
}

/*
<<<<<<< HEAD
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
=======
equation index: 208
type: SIMPLE_ASSIGN
$res2._$pDERNLSJac2._dummyVarNLSJac2 = MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] + MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2]
*/
void Flowsheet_eqFunction_208(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,208};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,2] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 209
type: SIMPLE_ASSIGN
$res3._$pDERNLSJac2._dummyVarNLSJac2 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac2[3,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMolFrac.SeedNLSJac2[3,2] - MatStm2.K[2] * MatStm2.compMolFrac.SeedNLSJac2[2,2] else MatStm2.compMolFrac.SeedNLSJac2[2,2]
*/
void Flowsheet_eqFunction_209(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,209};
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  tmp13 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  tmp15 = (modelica_boolean)tmp13;
  if(tmp15)
  {
    tmp16 = jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */;
  }
  else
  {
    tmp14 = GreaterEq(101325.0,data->localData[0]->realVars[105] /* MatStm2.Pdew variable */);
    tmp16 = (tmp14?jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */ - ((data->localData[0]->realVars[99] /* MatStm2.K[2] variable */) * (jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */)):jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */);
  }
  jacobian->resultVars[2] /* $res3.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = tmp16;
  TRACE_POP
}

/*
equation index: 210
type: SIMPLE_ASSIGN
$res4._$pDERNLSJac2._dummyVarNLSJac2 = if 101325.0 >= MatStm2.Pbubl then MatStm2.compMolFrac.SeedNLSJac2[2,1] + MatStm2.compMolFrac.SeedNLSJac2[2,2] else MatStm2.compMolFrac.SeedNLSJac2[3,1] + MatStm2.compMolFrac.SeedNLSJac2[3,2]
*/
void Flowsheet_eqFunction_210(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,210};
  modelica_boolean tmp17;
  tmp17 = GreaterEq(101325.0,data->localData[0]->realVars[104] /* MatStm2.Pbubl variable */);
  jacobian->resultVars[3] /* $res4.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = (tmp17?jacobian->seedVars[4] /* MatStm2.compMolFrac.SeedNLSJac2[2,1] SEED_VAR */ + jacobian->seedVars[2] /* MatStm2.compMolFrac.SeedNLSJac2[2,2] SEED_VAR */:jacobian->seedVars[1] /* MatStm2.compMolFrac.SeedNLSJac2[3,1] SEED_VAR */ + jacobian->seedVars[3] /* MatStm2.compMolFrac.SeedNLSJac2[3,2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 211
type: SIMPLE_ASSIGN
$res5._$pDERNLSJac2._dummyVarNLSJac2 = MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] + MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1]
*/
void Flowsheet_eqFunction_211(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,211};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[3,1] JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[0] /* MatStm2.compMolFlo.$pDERNLSJac2.dummyVarNLSJac2[2,1] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
int Flowsheet_functionJacNLSJac2_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
<<<<<<< HEAD
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
=======
  int index = Flowsheet_INDEX_JAC_NLSJac2;
  Flowsheet_eqFunction_200(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_201(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_202(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_203(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_204(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_205(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_206(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_207(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_208(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_209(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_210(data, threadData, jacobian, parentJacobian);

  Flowsheet_eqFunction_211(data, threadData, jacobian, parentJacobian);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  
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


