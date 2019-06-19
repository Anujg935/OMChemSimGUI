/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "Flowsheet_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation Flowsheet_performSimulation
#define prefixedName_updateContinuousSystem Flowsheet_updateContinuousSystem
#include <simulation/solver/perform_simulation.c>

#define prefixedName_performQSSSimulation Flowsheet_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int Flowsheet_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Flowsheet_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Flowsheet_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Flowsheet_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Flowsheet_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 478
type: SIMPLE_ASSIGN
MatStm3._S_bubl[4] = MatStm3.theta_bubl[1] * MatStm3.tau[1,4] + MatStm3.theta_bubl[2] * MatStm3.tau[2,4] + MatStm3.theta_bubl[3] * MatStm3.tau[3,4] + MatStm3.theta_bubl[4] * MatStm3.tau[4,4]
*/
void Flowsheet_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  data->localData[0]->realVars[491] /* MatStm3.S_bubl[4] variable */ = (data->localData[0]->realVars[619] /* MatStm3.theta_bubl[1] variable */) * (data->localData[0]->realVars[602] /* MatStm3.tau[1,4] variable */) + (data->localData[0]->realVars[620] /* MatStm3.theta_bubl[2] variable */) * (data->localData[0]->realVars[606] /* MatStm3.tau[2,4] variable */) + (data->localData[0]->realVars[621] /* MatStm3.theta_bubl[3] variable */) * (data->localData[0]->realVars[610] /* MatStm3.tau[3,4] variable */) + (data->localData[0]->realVars[622] /* MatStm3.theta_bubl[4] variable */) * (data->localData[0]->realVars[614] /* MatStm3.tau[4,4] variable */);
  TRACE_POP
}
/*
equation index: 479
type: SIMPLE_ASSIGN
MatStm3._S_bubl[3] = MatStm3.theta_bubl[1] * MatStm3.tau[1,3] + MatStm3.theta_bubl[2] * MatStm3.tau[2,3] + MatStm3.theta_bubl[3] * MatStm3.tau[3,3] + MatStm3.theta_bubl[4] * MatStm3.tau[4,3]
*/
void Flowsheet_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->localData[0]->realVars[490] /* MatStm3.S_bubl[3] variable */ = (data->localData[0]->realVars[619] /* MatStm3.theta_bubl[1] variable */) * (data->localData[0]->realVars[601] /* MatStm3.tau[1,3] variable */) + (data->localData[0]->realVars[620] /* MatStm3.theta_bubl[2] variable */) * (data->localData[0]->realVars[605] /* MatStm3.tau[2,3] variable */) + (data->localData[0]->realVars[621] /* MatStm3.theta_bubl[3] variable */) * (data->localData[0]->realVars[609] /* MatStm3.tau[3,3] variable */) + (data->localData[0]->realVars[622] /* MatStm3.theta_bubl[4] variable */) * (data->localData[0]->realVars[613] /* MatStm3.tau[4,3] variable */);
  TRACE_POP
}
/*
equation index: 480
type: SIMPLE_ASSIGN
MatStm3._S_bubl[2] = MatStm3.theta_bubl[1] * MatStm3.tau[1,2] + MatStm3.theta_bubl[2] * MatStm3.tau[2,2] + MatStm3.theta_bubl[3] * MatStm3.tau[3,2] + MatStm3.theta_bubl[4] * MatStm3.tau[4,2]
*/
void Flowsheet_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->localData[0]->realVars[489] /* MatStm3.S_bubl[2] variable */ = (data->localData[0]->realVars[619] /* MatStm3.theta_bubl[1] variable */) * (data->localData[0]->realVars[600] /* MatStm3.tau[1,2] variable */) + (data->localData[0]->realVars[620] /* MatStm3.theta_bubl[2] variable */) * (data->localData[0]->realVars[604] /* MatStm3.tau[2,2] variable */) + (data->localData[0]->realVars[621] /* MatStm3.theta_bubl[3] variable */) * (data->localData[0]->realVars[608] /* MatStm3.tau[3,2] variable */) + (data->localData[0]->realVars[622] /* MatStm3.theta_bubl[4] variable */) * (data->localData[0]->realVars[612] /* MatStm3.tau[4,2] variable */);
  TRACE_POP
}
/*
equation index: 481
type: SIMPLE_ASSIGN
MatStm3._S_bubl[1] = MatStm3.theta_bubl[1] * MatStm3.tau[1,1] + MatStm3.theta_bubl[2] * MatStm3.tau[2,1] + MatStm3.theta_bubl[3] * MatStm3.tau[3,1] + MatStm3.theta_bubl[4] * MatStm3.tau[4,1]
*/
void Flowsheet_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->localData[0]->realVars[488] /* MatStm3.S_bubl[1] variable */ = (data->localData[0]->realVars[619] /* MatStm3.theta_bubl[1] variable */) * (data->localData[0]->realVars[599] /* MatStm3.tau[1,1] variable */) + (data->localData[0]->realVars[620] /* MatStm3.theta_bubl[2] variable */) * (data->localData[0]->realVars[603] /* MatStm3.tau[2,1] variable */) + (data->localData[0]->realVars[621] /* MatStm3.theta_bubl[3] variable */) * (data->localData[0]->realVars[607] /* MatStm3.tau[3,1] variable */) + (data->localData[0]->realVars[622] /* MatStm3.theta_bubl[4] variable */) * (data->localData[0]->realVars[611] /* MatStm3.tau[4,1] variable */);
  TRACE_POP
}
/*
equation index: 482
type: SIMPLE_ASSIGN
MatStm2._theta_bubl[4] = (MatStm2.compMolFrac[1,1] * MatStm2.q[1] * MatStm2.e[4,1] + MatStm2.compMolFrac[1,2] * MatStm2.q[2] * MatStm2.e[4,2]) / (MatStm2.compMolFrac[1,1] * MatStm2.q[1] + MatStm2.compMolFrac[1,2] * MatStm2.q[2])
*/
void Flowsheet_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  data->localData[0]->realVars[439] /* MatStm2.theta_bubl[4] variable */ = DIVISION_SIM((data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[364] /* MatStm2.e[4,1] variable */)) + (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[365] /* MatStm2.e[4,2] variable */)),(data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */),"MatStm2.compMolFrac[1,1] * MatStm2.q[1] + MatStm2.compMolFrac[1,2] * MatStm2.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 483
type: SIMPLE_ASSIGN
MatStm2._theta_bubl[3] = (MatStm2.compMolFrac[1,1] * MatStm2.q[1] * MatStm2.e[3,1] + MatStm2.compMolFrac[1,2] * MatStm2.q[2] * MatStm2.e[3,2]) / (MatStm2.compMolFrac[1,1] * MatStm2.q[1] + MatStm2.compMolFrac[1,2] * MatStm2.q[2])
*/
void Flowsheet_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  data->localData[0]->realVars[438] /* MatStm2.theta_bubl[3] variable */ = DIVISION_SIM((data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[362] /* MatStm2.e[3,1] variable */)) + (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[363] /* MatStm2.e[3,2] variable */)),(data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */),"MatStm2.compMolFrac[1,1] * MatStm2.q[1] + MatStm2.compMolFrac[1,2] * MatStm2.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 484
type: SIMPLE_ASSIGN
MatStm2._theta_bubl[2] = (MatStm2.compMolFrac[1,1] * MatStm2.q[1] * MatStm2.e[2,1] + MatStm2.compMolFrac[1,2] * MatStm2.q[2] * MatStm2.e[2,2]) / (MatStm2.compMolFrac[1,1] * MatStm2.q[1] + MatStm2.compMolFrac[1,2] * MatStm2.q[2])
*/
void Flowsheet_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  data->localData[0]->realVars[437] /* MatStm2.theta_bubl[2] variable */ = DIVISION_SIM((data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[360] /* MatStm2.e[2,1] variable */)) + (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[361] /* MatStm2.e[2,2] variable */)),(data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */),"MatStm2.compMolFrac[1,1] * MatStm2.q[1] + MatStm2.compMolFrac[1,2] * MatStm2.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 485
type: SIMPLE_ASSIGN
MatStm2._theta_bubl[1] = (MatStm2.compMolFrac[1,1] * MatStm2.q[1] * MatStm2.e[1,1] + MatStm2.compMolFrac[1,2] * MatStm2.q[2] * MatStm2.e[1,2]) / (MatStm2.compMolFrac[1,1] * MatStm2.q[1] + MatStm2.compMolFrac[1,2] * MatStm2.q[2])
*/
void Flowsheet_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  data->localData[0]->realVars[436] /* MatStm2.theta_bubl[1] variable */ = DIVISION_SIM((data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */)) + (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[359] /* MatStm2.e[1,2] variable */)),(data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */),"MatStm2.compMolFrac[1,1] * MatStm2.q[1] + MatStm2.compMolFrac[1,2] * MatStm2.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 486
type: SIMPLE_ASSIGN
MatStm2._L_bubl[2] = MatStm2.q[2] / (MatStm2.q[1] * MatStm2.compMolFrac[1,1] + MatStm2.q[2] * MatStm2.compMolFrac[1,2])
*/
void Flowsheet_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->localData[0]->realVars[290] /* MatStm2.L_bubl[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[398] /* MatStm2.q[2] variable */,(data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) + (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */),"MatStm2.q[1] * MatStm2.compMolFrac[1,1] + MatStm2.q[2] * MatStm2.compMolFrac[1,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 487
type: SIMPLE_ASSIGN
MatStm2._J_bubl[2] = MatStm2.r[2] / (MatStm2.r[1] * MatStm2.compMolFrac[1,1] + MatStm2.r[2] * MatStm2.compMolFrac[1,2])
*/
void Flowsheet_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->localData[0]->realVars[282] /* MatStm2.J_bubl[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[400] /* MatStm2.r[2] variable */,(data->localData[0]->realVars[399] /* MatStm2.r[1] variable */) * (data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) + (data->localData[0]->realVars[400] /* MatStm2.r[2] variable */) * (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */),"MatStm2.r[1] * MatStm2.compMolFrac[1,1] + MatStm2.r[2] * MatStm2.compMolFrac[1,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 488
type: SIMPLE_ASSIGN
$cse49 = log(MatStm2.J_bubl[2] / MatStm2.L_bubl[2])
*/
void Flowsheet_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->localData[0]->realVars[282] /* MatStm2.J_bubl[2] variable */,data->localData[0]->realVars[290] /* MatStm2.L_bubl[2] variable */,"MatStm2.L_bubl[2]",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J_bubl[2] / MatStm2.L_bubl[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[55] /* $cse49 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 489
type: SIMPLE_ASSIGN
$cse48 = log(MatStm2.J_bubl[2])
*/
void Flowsheet_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  modelica_real tmp1;
  tmp1 = data->localData[0]->realVars[282] /* MatStm2.J_bubl[2] variable */;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J_bubl[2]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[54] /* $cse48 variable */ = log(tmp1);
  TRACE_POP
}
/*
equation index: 490
type: SIMPLE_ASSIGN
MatStm2._L_bubl[1] = MatStm2.q[1] / (MatStm2.q[1] * MatStm2.compMolFrac[1,1] + MatStm2.q[2] * MatStm2.compMolFrac[1,2])
*/
void Flowsheet_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->localData[0]->realVars[289] /* MatStm2.L_bubl[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[397] /* MatStm2.q[1] variable */,(data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) + (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */),"MatStm2.q[1] * MatStm2.compMolFrac[1,1] + MatStm2.q[2] * MatStm2.compMolFrac[1,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 491
type: SIMPLE_ASSIGN
MatStm2._J_bubl[1] = MatStm2.r[1] / (MatStm2.r[1] * MatStm2.compMolFrac[1,1] + MatStm2.r[2] * MatStm2.compMolFrac[1,2])
*/
void Flowsheet_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  data->localData[0]->realVars[281] /* MatStm2.J_bubl[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[399] /* MatStm2.r[1] variable */,(data->localData[0]->realVars[399] /* MatStm2.r[1] variable */) * (data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) + (data->localData[0]->realVars[400] /* MatStm2.r[2] variable */) * (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */),"MatStm2.r[1] * MatStm2.compMolFrac[1,1] + MatStm2.r[2] * MatStm2.compMolFrac[1,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 492
type: SIMPLE_ASSIGN
$cse47 = log(MatStm2.J_bubl[1] / MatStm2.L_bubl[1])
*/
void Flowsheet_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  modelica_real tmp2;
  tmp2 = DIVISION_SIM(data->localData[0]->realVars[281] /* MatStm2.J_bubl[1] variable */,data->localData[0]->realVars[289] /* MatStm2.L_bubl[1] variable */,"MatStm2.L_bubl[1]",equationIndexes);
  if(!(tmp2 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J_bubl[1] / MatStm2.L_bubl[1]) was %g should be > 0", tmp2);
  }
  data->localData[0]->realVars[53] /* $cse47 variable */ = log(tmp2);
  TRACE_POP
}
/*
equation index: 493
type: SIMPLE_ASSIGN
$cse46 = log(MatStm2.J_bubl[1])
*/
void Flowsheet_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  modelica_real tmp3;
  tmp3 = data->localData[0]->realVars[281] /* MatStm2.J_bubl[1] variable */;
  if(!(tmp3 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J_bubl[1]) was %g should be > 0", tmp3);
  }
  data->localData[0]->realVars[52] /* $cse46 variable */ = log(tmp3);
  TRACE_POP
}
/*
equation index: 494
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[1,2] = 150.0 * MatStm2.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  data->localData[0]->realVars[339] /* MatStm2.compMolFlo[1,2] variable */ = (150.0) * (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */);
  TRACE_POP
}
/*
equation index: 495
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[1,2] = MatStm2.compMolFlo[1,2] * MatStm2.comp[2].MW
*/
void Flowsheet_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  data->localData[0]->realVars[315] /* MatStm2.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[339] /* MatStm2.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[481]);
  TRACE_POP
}
/*
equation index: 496
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[1,1] = 150.0 * MatStm2.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  data->localData[0]->realVars[338] /* MatStm2.compMolFlo[1,1] variable */ = (150.0) * (data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */);
  TRACE_POP
}
/*
equation index: 497
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[1,1] = MatStm2.compMolFlo[1,1] * MatStm2.comp[1].MW
*/
void Flowsheet_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  data->localData[0]->realVars[314] /* MatStm2.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[338] /* MatStm2.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[480]);
  TRACE_POP
}
/*
equation index: 498
type: SIMPLE_ASSIGN
MatStm1._S_bubl[4] = MatStm1.theta_bubl[1] * MatStm1.tau[1,4] + MatStm1.theta_bubl[2] * MatStm1.tau[2,4] + MatStm1.theta_bubl[3] * MatStm1.tau[3,4] + MatStm1.theta_bubl[4] * MatStm1.tau[4,4]
*/
void Flowsheet_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  data->localData[0]->realVars[126] /* MatStm1.S_bubl[4] variable */ = (data->localData[0]->realVars[254] /* MatStm1.theta_bubl[1] variable */) * (data->localData[0]->realVars[237] /* MatStm1.tau[1,4] variable */) + (data->localData[0]->realVars[255] /* MatStm1.theta_bubl[2] variable */) * (data->localData[0]->realVars[241] /* MatStm1.tau[2,4] variable */) + (data->localData[0]->realVars[256] /* MatStm1.theta_bubl[3] variable */) * (data->localData[0]->realVars[245] /* MatStm1.tau[3,4] variable */) + (data->localData[0]->realVars[257] /* MatStm1.theta_bubl[4] variable */) * (data->localData[0]->realVars[249] /* MatStm1.tau[4,4] variable */);
  TRACE_POP
}
/*
equation index: 499
type: SIMPLE_ASSIGN
MatStm1._S_bubl[3] = MatStm1.theta_bubl[1] * MatStm1.tau[1,3] + MatStm1.theta_bubl[2] * MatStm1.tau[2,3] + MatStm1.theta_bubl[3] * MatStm1.tau[3,3] + MatStm1.theta_bubl[4] * MatStm1.tau[4,3]
*/
void Flowsheet_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  data->localData[0]->realVars[125] /* MatStm1.S_bubl[3] variable */ = (data->localData[0]->realVars[254] /* MatStm1.theta_bubl[1] variable */) * (data->localData[0]->realVars[236] /* MatStm1.tau[1,3] variable */) + (data->localData[0]->realVars[255] /* MatStm1.theta_bubl[2] variable */) * (data->localData[0]->realVars[240] /* MatStm1.tau[2,3] variable */) + (data->localData[0]->realVars[256] /* MatStm1.theta_bubl[3] variable */) * (data->localData[0]->realVars[244] /* MatStm1.tau[3,3] variable */) + (data->localData[0]->realVars[257] /* MatStm1.theta_bubl[4] variable */) * (data->localData[0]->realVars[248] /* MatStm1.tau[4,3] variable */);
  TRACE_POP
}
/*
equation index: 500
type: SIMPLE_ASSIGN
MatStm1._S_bubl[2] = MatStm1.theta_bubl[1] * MatStm1.tau[1,2] + MatStm1.theta_bubl[2] * MatStm1.tau[2,2] + MatStm1.theta_bubl[3] * MatStm1.tau[3,2] + MatStm1.theta_bubl[4] * MatStm1.tau[4,2]
*/
void Flowsheet_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  data->localData[0]->realVars[124] /* MatStm1.S_bubl[2] variable */ = (data->localData[0]->realVars[254] /* MatStm1.theta_bubl[1] variable */) * (data->localData[0]->realVars[235] /* MatStm1.tau[1,2] variable */) + (data->localData[0]->realVars[255] /* MatStm1.theta_bubl[2] variable */) * (data->localData[0]->realVars[239] /* MatStm1.tau[2,2] variable */) + (data->localData[0]->realVars[256] /* MatStm1.theta_bubl[3] variable */) * (data->localData[0]->realVars[243] /* MatStm1.tau[3,2] variable */) + (data->localData[0]->realVars[257] /* MatStm1.theta_bubl[4] variable */) * (data->localData[0]->realVars[247] /* MatStm1.tau[4,2] variable */);
  TRACE_POP
}
/*
equation index: 501
type: SIMPLE_ASSIGN
MatStm1._S_bubl[1] = MatStm1.theta_bubl[1] * MatStm1.tau[1,1] + MatStm1.theta_bubl[2] * MatStm1.tau[2,1] + MatStm1.theta_bubl[3] * MatStm1.tau[3,1] + MatStm1.theta_bubl[4] * MatStm1.tau[4,1]
*/
void Flowsheet_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  data->localData[0]->realVars[123] /* MatStm1.S_bubl[1] variable */ = (data->localData[0]->realVars[254] /* MatStm1.theta_bubl[1] variable */) * (data->localData[0]->realVars[234] /* MatStm1.tau[1,1] variable */) + (data->localData[0]->realVars[255] /* MatStm1.theta_bubl[2] variable */) * (data->localData[0]->realVars[238] /* MatStm1.tau[2,1] variable */) + (data->localData[0]->realVars[256] /* MatStm1.theta_bubl[3] variable */) * (data->localData[0]->realVars[242] /* MatStm1.tau[3,1] variable */) + (data->localData[0]->realVars[257] /* MatStm1.theta_bubl[4] variable */) * (data->localData[0]->realVars[246] /* MatStm1.tau[4,1] variable */);
  TRACE_POP
}
void Flowsheet_eqFunction_502(DATA*, threadData_t*);
void Flowsheet_eqFunction_503(DATA*, threadData_t*);
void Flowsheet_eqFunction_504(DATA*, threadData_t*);
void Flowsheet_eqFunction_505(DATA*, threadData_t*);
void Flowsheet_eqFunction_506(DATA*, threadData_t*);
void Flowsheet_eqFunction_507(DATA*, threadData_t*);
void Flowsheet_eqFunction_508(DATA*, threadData_t*);
void Flowsheet_eqFunction_509(DATA*, threadData_t*);
void Flowsheet_eqFunction_510(DATA*, threadData_t*);
void Flowsheet_eqFunction_511(DATA*, threadData_t*);
void Flowsheet_eqFunction_512(DATA*, threadData_t*);
void Flowsheet_eqFunction_513(DATA*, threadData_t*);
void Flowsheet_eqFunction_514(DATA*, threadData_t*);
void Flowsheet_eqFunction_515(DATA*, threadData_t*);
void Flowsheet_eqFunction_516(DATA*, threadData_t*);
void Flowsheet_eqFunction_517(DATA*, threadData_t*);
void Flowsheet_eqFunction_518(DATA*, threadData_t*);
void Flowsheet_eqFunction_519(DATA*, threadData_t*);
void Flowsheet_eqFunction_520(DATA*, threadData_t*);
void Flowsheet_eqFunction_521(DATA*, threadData_t*);
void Flowsheet_eqFunction_522(DATA*, threadData_t*);
void Flowsheet_eqFunction_523(DATA*, threadData_t*);
void Flowsheet_eqFunction_524(DATA*, threadData_t*);
void Flowsheet_eqFunction_525(DATA*, threadData_t*);
void Flowsheet_eqFunction_526(DATA*, threadData_t*);
void Flowsheet_eqFunction_527(DATA*, threadData_t*);
void Flowsheet_eqFunction_528(DATA*, threadData_t*);
void Flowsheet_eqFunction_529(DATA*, threadData_t*);
void Flowsheet_eqFunction_530(DATA*, threadData_t*);
void Flowsheet_eqFunction_531(DATA*, threadData_t*);
void Flowsheet_eqFunction_532(DATA*, threadData_t*);
void Flowsheet_eqFunction_533(DATA*, threadData_t*);
void Flowsheet_eqFunction_534(DATA*, threadData_t*);
void Flowsheet_eqFunction_535(DATA*, threadData_t*);
void Flowsheet_eqFunction_536(DATA*, threadData_t*);
void Flowsheet_eqFunction_537(DATA*, threadData_t*);
void Flowsheet_eqFunction_538(DATA*, threadData_t*);
void Flowsheet_eqFunction_539(DATA*, threadData_t*);
void Flowsheet_eqFunction_540(DATA*, threadData_t*);
void Flowsheet_eqFunction_541(DATA*, threadData_t*);
void Flowsheet_eqFunction_542(DATA*, threadData_t*);
void Flowsheet_eqFunction_543(DATA*, threadData_t*);
void Flowsheet_eqFunction_544(DATA*, threadData_t*);
void Flowsheet_eqFunction_545(DATA*, threadData_t*);
void Flowsheet_eqFunction_546(DATA*, threadData_t*);
void Flowsheet_eqFunction_547(DATA*, threadData_t*);
void Flowsheet_eqFunction_548(DATA*, threadData_t*);
void Flowsheet_eqFunction_549(DATA*, threadData_t*);
void Flowsheet_eqFunction_550(DATA*, threadData_t*);
void Flowsheet_eqFunction_551(DATA*, threadData_t*);
void Flowsheet_eqFunction_552(DATA*, threadData_t*);
void Flowsheet_eqFunction_553(DATA*, threadData_t*);
void Flowsheet_eqFunction_554(DATA*, threadData_t*);
void Flowsheet_eqFunction_555(DATA*, threadData_t*);
void Flowsheet_eqFunction_556(DATA*, threadData_t*);
void Flowsheet_eqFunction_557(DATA*, threadData_t*);
void Flowsheet_eqFunction_558(DATA*, threadData_t*);
void Flowsheet_eqFunction_559(DATA*, threadData_t*);
void Flowsheet_eqFunction_560(DATA*, threadData_t*);
void Flowsheet_eqFunction_561(DATA*, threadData_t*);
void Flowsheet_eqFunction_562(DATA*, threadData_t*);
void Flowsheet_eqFunction_563(DATA*, threadData_t*);
void Flowsheet_eqFunction_578(DATA*, threadData_t*);
void Flowsheet_eqFunction_577(DATA*, threadData_t*);
void Flowsheet_eqFunction_576(DATA*, threadData_t*);
void Flowsheet_eqFunction_575(DATA*, threadData_t*);
void Flowsheet_eqFunction_574(DATA*, threadData_t*);
void Flowsheet_eqFunction_573(DATA*, threadData_t*);
void Flowsheet_eqFunction_569(DATA*, threadData_t*);
void Flowsheet_eqFunction_570(DATA*, threadData_t*);
void Flowsheet_eqFunction_571(DATA*, threadData_t*);
void Flowsheet_eqFunction_572(DATA*, threadData_t*);
void Flowsheet_eqFunction_568(DATA*, threadData_t*);
void Flowsheet_eqFunction_567(DATA*, threadData_t*);
void Flowsheet_eqFunction_566(DATA*, threadData_t*);
void Flowsheet_eqFunction_565(DATA*, threadData_t*);
void Flowsheet_eqFunction_564(DATA*, threadData_t*);
/*
equation index: 579
indexNonlinear: 3
type: NONLINEAR

vars: {MatStm1._sum_dew[1], MatStm1._sum_dew[2], $cse5, MatStm1._dewLiqMolFrac[1], MatStm1._Pdew, $cse7, MatStm1._L_dew[2], MatStm1._J_dew[2], MatStm1._J_dew[1], MatStm1._totMolFlo[3], MatStm1._compMolFrac[2,2], MatStm1._compMolFrac[2,1], MatStm1._compMolFrac[3,2], MatStm1._compMolFrac[3,1]}
eqns: {502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 578, 577, 576, 575, 574, 573, 569, 570, 571, 572, 568, 567, 566, 565, 564}
*/
void Flowsheet_eqFunction_579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,579};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 579 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[232] /* MatStm1.sum_dew[1] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[1] = data->localData[0]->realVars[233] /* MatStm1.sum_dew[2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[2] = data->localData[0]->realVars[56] /* $cse5 variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[3] = data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[4] = data->localData[0]->realVars[116] /* MatStm1.Pdew variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[5] = data->localData[0]->realVars[78] /* $cse7 variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[6] = data->localData[0]->realVars[110] /* MatStm1.L_dew[2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[7] = data->localData[0]->realVars[102] /* MatStm1.J_dew[2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[8] = data->localData[0]->realVars[101] /* MatStm1.J_dew[1] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[9] = data->localData[0]->realVars[267] /* MatStm1.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[10] = data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[11] = data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[12] = data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[13] = data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,579};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 579 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[232] /* MatStm1.sum_dew[1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  data->localData[0]->realVars[233] /* MatStm1.sum_dew[2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[1];
  data->localData[0]->realVars[56] /* $cse5 variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[2];
  data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[3];
  data->localData[0]->realVars[116] /* MatStm1.Pdew variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[4];
  data->localData[0]->realVars[78] /* $cse7 variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[5];
  data->localData[0]->realVars[110] /* MatStm1.L_dew[2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[6];
  data->localData[0]->realVars[102] /* MatStm1.J_dew[2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[7];
  data->localData[0]->realVars[101] /* MatStm1.J_dew[1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[8];
  data->localData[0]->realVars[267] /* MatStm1.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[9];
  data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[10];
  data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[11];
  data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[12];
  data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[13];
  TRACE_POP
}
/*
equation index: 580
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,2] = MatStm1.compMolFlo[2,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  data->localData[0]->realVars[135] /* MatStm1.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[159] /* MatStm1.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[283]);
  TRACE_POP
}
/*
equation index: 581
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,2] = MatStm1.compMolFlo[3,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  data->localData[0]->realVars[137] /* MatStm1.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[161] /* MatStm1.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[283]);
  TRACE_POP
}
/*
equation index: 582
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolSpHeat[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolSpHeat[3,2]
*/
void Flowsheet_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  data->localData[0]->realVars[214] /* MatStm1.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[172] /* MatStm1.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[173] /* MatStm1.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 583
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEnth[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEnth[3,2]
*/
void Flowsheet_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  data->localData[0]->realVars[208] /* MatStm1.phasMolEnth[3] variable */ = (data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[148] /* MatStm1.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[149] /* MatStm1.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 584
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, 320.0, 101325.0, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[318], (modelica_real)data->simulationInfo->realParameter[319], (modelica_real)data->simulationInfo->realParameter[320], (modelica_real)data->simulationInfo->realParameter[321], (modelica_real)data->simulationInfo->realParameter[322], (modelica_real)data->simulationInfo->realParameter[323]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[218], (modelica_real)data->simulationInfo->realParameter[219], (modelica_real)data->simulationInfo->realParameter[220], (modelica_real)data->simulationInfo->realParameter[221], (modelica_real)data->simulationInfo->realParameter[222], (modelica_real)data->simulationInfo->realParameter[223]);
  data->localData[0]->realVars[152] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[200], tmp0, tmp1, data->simulationInfo->realParameter[296], data->simulationInfo->realParameter[298], 320.0, 101325.0, data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[154] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 585
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolSpHeat[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolSpHeat[2,2]
*/
void Flowsheet_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  data->localData[0]->realVars[213] /* MatStm1.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[170] /* MatStm1.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[171] /* MatStm1.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 586
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEnth[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEnth[2,2]
*/
void Flowsheet_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  data->localData[0]->realVars[207] /* MatStm1.phasMolEnth[2] variable */ = (data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[146] /* MatStm1.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[147] /* MatStm1.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 587
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:2 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  real_array tmp2;
  index_spec_t tmp3;
  real_array tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  data->localData[0]->realVars[113] /* MatStm1.MW[3] variable */ = data->modelData->realVarsData[113].attribute /* MatStm1.MW[3] variable */.start;

  data->localData[0]->realVars[112] /* MatStm1.MW[2] variable */ = data->modelData->realVarsData[112].attribute /* MatStm1.MW[2] variable */.start;

  data->localData[0]->realVars[111] /* MatStm1.MW[1] variable */ = data->modelData->realVarsData[111].attribute /* MatStm1.MW[1] variable */.start;

  tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = ((modelica_integer) 2);
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp5, tmp7); $Pi += tmp6)
    {
      array_alloc_scalar_real_array(&tmp2, 3, (modelica_real)data->localData[0]->realVars[111] /* MatStm1.MW[1] variable */ + ((&data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[282])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[112] /* MatStm1.MW[2] variable */ + ((&data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[282])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[113] /* MatStm1.MW[3] variable */ + ((&data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[282])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp3, 1, (1), (int*)0, 'W');
      real_array_create(&tmp4, (modelica_real*)&data->localData[0]->realVars[111] /* MatStm1.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp2, &tmp4, &tmp3);
    }
  }
  TRACE_POP
}
/*
equation index: 588
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[1] = 70.0 * MatStm1.MW[1]
*/
void Flowsheet_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  data->localData[0]->realVars[262] /* MatStm1.totMasFlo[1] variable */ = (70.0) * (data->localData[0]->realVars[111] /* MatStm1.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 589
type: SIMPLE_ASSIGN
MatStm1._compMasFrac[1,2] = MatStm1.compMasFlo[1,2] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  data->localData[0]->realVars[139] /* MatStm1.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[133] /* MatStm1.compMasFlo[1,2] variable */,data->localData[0]->realVars[262] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 590
type: ALGORITHM

  (MatStm1.compMolEntr[2,2], MatStm1.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[2].AS, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tb, MatStm1.comp[2].Tc, 320.0, 101325.0, MatStm1.compMolFrac[2,2], MatStm1.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[324], (modelica_real)data->simulationInfo->realParameter[325], (modelica_real)data->simulationInfo->realParameter[326], (modelica_real)data->simulationInfo->realParameter[327], (modelica_real)data->simulationInfo->realParameter[328], (modelica_real)data->simulationInfo->realParameter[329]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[224], (modelica_real)data->simulationInfo->realParameter[225], (modelica_real)data->simulationInfo->realParameter[226], (modelica_real)data->simulationInfo->realParameter[227], (modelica_real)data->simulationInfo->realParameter[228], (modelica_real)data->simulationInfo->realParameter[229]);
  data->localData[0]->realVars[153] /* MatStm1.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[201], tmp8, tmp9, data->simulationInfo->realParameter[297], data->simulationInfo->realParameter[299], 320.0, 101325.0, data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */, data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[155] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 591
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEntr[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEntr[3,2]
*/
void Flowsheet_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  data->localData[0]->realVars[211] /* MatStm1.phasMolEntr[3] variable */ = (data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[154] /* MatStm1.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[155] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 592
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEntr[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEntr[2,2]
*/
void Flowsheet_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  data->localData[0]->realVars[210] /* MatStm1.phasMolEntr[2] variable */ = (data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[152] /* MatStm1.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[153] /* MatStm1.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 593
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[2] = MatStm1.totMolFlo[2] * MatStm1.MW[2]
*/
void Flowsheet_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  data->localData[0]->realVars[263] /* MatStm1.totMasFlo[2] variable */ = (data->localData[0]->realVars[266] /* MatStm1.totMolFlo[2] variable */) * (data->localData[0]->realVars[112] /* MatStm1.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 594
type: SIMPLE_ASSIGN
MatStm1._liqPhasMasFrac = MatStm1.totMasFlo[2] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  data->localData[0]->realVars[202] /* MatStm1.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[263] /* MatStm1.totMasFlo[2] variable */,data->localData[0]->realVars[262] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 595
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,1] = MatStm1.compMolFlo[2,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  data->localData[0]->realVars[134] /* MatStm1.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[158] /* MatStm1.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[282]);
  TRACE_POP
}
/*
equation index: 596
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,1] = MatStm1.compMolFlo[3,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  data->localData[0]->realVars[136] /* MatStm1.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[160] /* MatStm1.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[282]);
  TRACE_POP
}
/*
equation index: 597
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[3] = MatStm1.totMolFlo[3] * MatStm1.MW[3]
*/
void Flowsheet_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  data->localData[0]->realVars[264] /* MatStm1.totMasFlo[3] variable */ = (data->localData[0]->realVars[267] /* MatStm1.totMolFlo[3] variable */) * (data->localData[0]->realVars[113] /* MatStm1.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 598
type: SIMPLE_ASSIGN
MatStm1._vapPhasMasFrac = MatStm1.totMasFlo[3] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  data->localData[0]->realVars[268] /* MatStm1.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[264] /* MatStm1.totMasFlo[3] variable */,data->localData[0]->realVars[262] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 599
type: LINEAR

<var>MatStm1._compMasFrac[3,2]</var>
<var>MatStm1._compMasFrac[2,2]</var>
<var>MatStm1._compMasFrac[2,1]</var>
<var>MatStm1._compMasFrac[1,1]</var>
<var>MatStm1._compMasFrac[3,1]</var>
<row>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,1] else MatStm1.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then -MatStm1.compMasFrac[1,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,2] else -MatStm1.compMasFrac[1,2]</cell>
</row>
<matrix>
  <cell row="0" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,599};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[143] /* MatStm1.compMasFrac[3,2] variable */,data->localData[1]->realVars[141] /* MatStm1.compMasFrac[2,2] variable */,data->localData[1]->realVars[140] /* MatStm1.compMasFrac[2,1] variable */,data->localData[1]->realVars[138] /* MatStm1.compMasFrac[1,1] variable */,data->localData[1]->realVars[142] /* MatStm1.compMasFrac[3,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 599 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 3, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,599};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 599 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[143] /* MatStm1.compMasFrac[3,2] variable */ = aux_x[0];
  data->localData[0]->realVars[141] /* MatStm1.compMasFrac[2,2] variable */ = aux_x[1];
  data->localData[0]->realVars[140] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[2];
  data->localData[0]->realVars[138] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[3];
  data->localData[0]->realVars[142] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[4];
  TRACE_POP
}
/*
equation index: 600
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolSpHeat[2] + Mixer1.inVapPhasMolFrac[2] * MatStm1.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  data->localData[0]->realVars[212] /* MatStm1.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[203] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[213] /* MatStm1.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[637] /* Mixer1.inVapPhasMolFrac[2] variable */) * (data->localData[0]->realVars[214] /* MatStm1.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 601
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  data->localData[0]->realVars[168] /* MatStm1.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[212] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 602
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  data->localData[0]->realVars[169] /* MatStm1.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[212] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 603
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolEnth[2] + Mixer1.inVapPhasMolFrac[2] * MatStm1.phasMolEnth[3]
*/
void Flowsheet_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  data->localData[0]->realVars[206] /* MatStm1.phasMolEnth[1] variable */ = (data->localData[0]->realVars[203] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[207] /* MatStm1.phasMolEnth[2] variable */) + (data->localData[0]->realVars[637] /* Mixer1.inVapPhasMolFrac[2] variable */) * (data->localData[0]->realVars[208] /* MatStm1.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 604
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEnth[1]
*/
void Flowsheet_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  data->localData[0]->realVars[144] /* MatStm1.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[206] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 605
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolEnth[1]
*/
void Flowsheet_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  data->localData[0]->realVars[145] /* MatStm1.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[206] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 606
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolEntr[2] + Mixer1.inVapPhasMolFrac[2] * MatStm1.phasMolEntr[3]
*/
void Flowsheet_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  data->localData[0]->realVars[209] /* MatStm1.phasMolEntr[1] variable */ = (data->localData[0]->realVars[203] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[210] /* MatStm1.phasMolEntr[2] variable */) + (data->localData[0]->realVars[637] /* Mixer1.inVapPhasMolFrac[2] variable */) * (data->localData[0]->realVars[211] /* MatStm1.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 607
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEntr[1]
*/
void Flowsheet_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  data->localData[0]->realVars[150] /* MatStm1.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[209] /* MatStm1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 608
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolEntr[1]
*/
void Flowsheet_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  data->localData[0]->realVars[151] /* MatStm1.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[209] /* MatStm1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 609
type: SIMPLE_ASSIGN
MatStm2._gammac_bubl[1] = exp(1.0 + $cse46 + (-5.0) * MatStm2.q[1] * (1.0 + $cse47 - MatStm2.J_bubl[1] / MatStm2.L_bubl[1]) - MatStm2.J_bubl[1])
*/
void Flowsheet_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  data->localData[0]->realVars[374] /* MatStm2.gammac_bubl[1] variable */ = exp(1.0 + data->localData[0]->realVars[52] /* $cse46 variable */ + (-5.0) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (1.0 + data->localData[0]->realVars[53] /* $cse47 variable */ - (DIVISION_SIM(data->localData[0]->realVars[281] /* MatStm2.J_bubl[1] variable */,data->localData[0]->realVars[289] /* MatStm2.L_bubl[1] variable */,"MatStm2.L_bubl[1]",equationIndexes)))) - data->localData[0]->realVars[281] /* MatStm2.J_bubl[1] variable */);
  TRACE_POP
}
/*
equation index: 610
type: SIMPLE_ASSIGN
$cse35 = log(MatStm2.gammac_bubl[1])
*/
void Flowsheet_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  modelica_real tmp10;
  tmp10 = data->localData[0]->realVars[374] /* MatStm2.gammac_bubl[1] variable */;
  if(!(tmp10 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammac_bubl[1]) was %g should be > 0", tmp10);
  }
  data->localData[0]->realVars[40] /* $cse35 variable */ = log(tmp10);
  TRACE_POP
}
/*
equation index: 611
type: SIMPLE_ASSIGN
MatStm2._gammac_bubl[2] = exp(1.0 + $cse48 + (-5.0) * MatStm2.q[2] * (1.0 + $cse49 - MatStm2.J_bubl[2] / MatStm2.L_bubl[2]) - MatStm2.J_bubl[2])
*/
void Flowsheet_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  data->localData[0]->realVars[375] /* MatStm2.gammac_bubl[2] variable */ = exp(1.0 + data->localData[0]->realVars[54] /* $cse48 variable */ + (-5.0) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (1.0 + data->localData[0]->realVars[55] /* $cse49 variable */ - (DIVISION_SIM(data->localData[0]->realVars[282] /* MatStm2.J_bubl[2] variable */,data->localData[0]->realVars[290] /* MatStm2.L_bubl[2] variable */,"MatStm2.L_bubl[2]",equationIndexes)))) - data->localData[0]->realVars[282] /* MatStm2.J_bubl[2] variable */);
  TRACE_POP
}
/*
equation index: 612
type: SIMPLE_ASSIGN
$cse37 = log(MatStm2.gammac_bubl[2])
*/
void Flowsheet_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  modelica_real tmp11;
  tmp11 = data->localData[0]->realVars[375] /* MatStm2.gammac_bubl[2] variable */;
  if(!(tmp11 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammac_bubl[2]) was %g should be > 0", tmp11);
  }
  data->localData[0]->realVars[42] /* $cse37 variable */ = log(tmp11);
  TRACE_POP
}
void Flowsheet_eqFunction_613(DATA*, threadData_t*);
void Flowsheet_eqFunction_614(DATA*, threadData_t*);
void Flowsheet_eqFunction_615(DATA*, threadData_t*);
void Flowsheet_eqFunction_616(DATA*, threadData_t*);
void Flowsheet_eqFunction_617(DATA*, threadData_t*);
void Flowsheet_eqFunction_618(DATA*, threadData_t*);
void Flowsheet_eqFunction_619(DATA*, threadData_t*);
void Flowsheet_eqFunction_620(DATA*, threadData_t*);
void Flowsheet_eqFunction_621(DATA*, threadData_t*);
void Flowsheet_eqFunction_622(DATA*, threadData_t*);
void Flowsheet_eqFunction_623(DATA*, threadData_t*);
void Flowsheet_eqFunction_624(DATA*, threadData_t*);
void Flowsheet_eqFunction_625(DATA*, threadData_t*);
void Flowsheet_eqFunction_626(DATA*, threadData_t*);
void Flowsheet_eqFunction_627(DATA*, threadData_t*);
void Flowsheet_eqFunction_628(DATA*, threadData_t*);
void Flowsheet_eqFunction_629(DATA*, threadData_t*);
void Flowsheet_eqFunction_630(DATA*, threadData_t*);
void Flowsheet_eqFunction_631(DATA*, threadData_t*);
void Flowsheet_eqFunction_632(DATA*, threadData_t*);
void Flowsheet_eqFunction_633(DATA*, threadData_t*);
void Flowsheet_eqFunction_634(DATA*, threadData_t*);
void Flowsheet_eqFunction_635(DATA*, threadData_t*);
void Flowsheet_eqFunction_636(DATA*, threadData_t*);
void Flowsheet_eqFunction_637(DATA*, threadData_t*);
void Flowsheet_eqFunction_638(DATA*, threadData_t*);
void Flowsheet_eqFunction_639(DATA*, threadData_t*);
void Flowsheet_eqFunction_640(DATA*, threadData_t*);
void Flowsheet_eqFunction_641(DATA*, threadData_t*);
void Flowsheet_eqFunction_642(DATA*, threadData_t*);
void Flowsheet_eqFunction_643(DATA*, threadData_t*);
void Flowsheet_eqFunction_644(DATA*, threadData_t*);
void Flowsheet_eqFunction_645(DATA*, threadData_t*);
void Flowsheet_eqFunction_646(DATA*, threadData_t*);
void Flowsheet_eqFunction_647(DATA*, threadData_t*);
void Flowsheet_eqFunction_648(DATA*, threadData_t*);
void Flowsheet_eqFunction_649(DATA*, threadData_t*);
void Flowsheet_eqFunction_650(DATA*, threadData_t*);
void Flowsheet_eqFunction_651(DATA*, threadData_t*);
void Flowsheet_eqFunction_652(DATA*, threadData_t*);
void Flowsheet_eqFunction_653(DATA*, threadData_t*);
void Flowsheet_eqFunction_654(DATA*, threadData_t*);
void Flowsheet_eqFunction_655(DATA*, threadData_t*);
void Flowsheet_eqFunction_656(DATA*, threadData_t*);
void Flowsheet_eqFunction_657(DATA*, threadData_t*);
void Flowsheet_eqFunction_658(DATA*, threadData_t*);
void Flowsheet_eqFunction_659(DATA*, threadData_t*);
void Flowsheet_eqFunction_660(DATA*, threadData_t*);
void Flowsheet_eqFunction_661(DATA*, threadData_t*);
void Flowsheet_eqFunction_662(DATA*, threadData_t*);
void Flowsheet_eqFunction_663(DATA*, threadData_t*);
void Flowsheet_eqFunction_664(DATA*, threadData_t*);
void Flowsheet_eqFunction_665(DATA*, threadData_t*);
void Flowsheet_eqFunction_666(DATA*, threadData_t*);
void Flowsheet_eqFunction_667(DATA*, threadData_t*);
void Flowsheet_eqFunction_668(DATA*, threadData_t*);
void Flowsheet_eqFunction_669(DATA*, threadData_t*);
void Flowsheet_eqFunction_670(DATA*, threadData_t*);
void Flowsheet_eqFunction_671(DATA*, threadData_t*);
void Flowsheet_eqFunction_672(DATA*, threadData_t*);
void Flowsheet_eqFunction_673(DATA*, threadData_t*);
void Flowsheet_eqFunction_674(DATA*, threadData_t*);
void Flowsheet_eqFunction_689(DATA*, threadData_t*);
void Flowsheet_eqFunction_688(DATA*, threadData_t*);
void Flowsheet_eqFunction_687(DATA*, threadData_t*);
void Flowsheet_eqFunction_686(DATA*, threadData_t*);
void Flowsheet_eqFunction_682(DATA*, threadData_t*);
void Flowsheet_eqFunction_683(DATA*, threadData_t*);
void Flowsheet_eqFunction_684(DATA*, threadData_t*);
void Flowsheet_eqFunction_685(DATA*, threadData_t*);
void Flowsheet_eqFunction_681(DATA*, threadData_t*);
void Flowsheet_eqFunction_680(DATA*, threadData_t*);
void Flowsheet_eqFunction_679(DATA*, threadData_t*);
void Flowsheet_eqFunction_678(DATA*, threadData_t*);
void Flowsheet_eqFunction_677(DATA*, threadData_t*);
void Flowsheet_eqFunction_676(DATA*, threadData_t*);
void Flowsheet_eqFunction_675(DATA*, threadData_t*);
/*
equation index: 690
indexNonlinear: 4
type: NONLINEAR

vars: {MatStm3._sum_dew[1], MatStm3._sum_dew[2], $cse60, MatStm3._dewLiqMolFrac[2], MatStm3._Pdew, $cse58, MatStm3._L_dew[1], MatStm3._J_dew[2], MatStm3._J_dew[1], MatStm3._totMolFlo[2], MatStm3._compMolFrac[2,1], MatStm3._compMolFrac[2,2], MatStm3._compMolFrac[3,2], MatStm3._compMolFrac[3,1]}
eqns: {613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 689, 688, 687, 686, 682, 683, 684, 685, 681, 680, 679, 678, 677, 676, 675}
*/
void Flowsheet_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 690 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[597] /* MatStm3.sum_dew[1] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[1] = data->localData[0]->realVars[598] /* MatStm3.sum_dew[2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[2] = data->localData[0]->realVars[68] /* $cse60 variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[3] = data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[4] = data->localData[0]->realVars[481] /* MatStm3.Pdew variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[5] = data->localData[0]->realVars[65] /* $cse58 variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[6] = data->localData[0]->realVars[474] /* MatStm3.L_dew[1] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[7] = data->localData[0]->realVars[467] /* MatStm3.J_dew[2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[8] = data->localData[0]->realVars[466] /* MatStm3.J_dew[1] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[9] = data->localData[0]->realVars[631] /* MatStm3.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[10] = data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[11] = data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[12] = data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[13] = data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,690};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 690 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[597] /* MatStm3.sum_dew[1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  data->localData[0]->realVars[598] /* MatStm3.sum_dew[2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[1];
  data->localData[0]->realVars[68] /* $cse60 variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[2];
  data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[3];
  data->localData[0]->realVars[481] /* MatStm3.Pdew variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[4];
  data->localData[0]->realVars[65] /* $cse58 variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[5];
  data->localData[0]->realVars[474] /* MatStm3.L_dew[1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[6];
  data->localData[0]->realVars[467] /* MatStm3.J_dew[2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[7];
  data->localData[0]->realVars[466] /* MatStm3.J_dew[1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[8];
  data->localData[0]->realVars[631] /* MatStm3.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[9];
  data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[10];
  data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[11];
  data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[12];
  data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[13];
  TRACE_POP
}
/*
equation index: 691
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[3,2] = MatStm3.compMolFlo[3,2] * MatStm3.comp[2].MW
*/
void Flowsheet_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  data->localData[0]->realVars[502] /* MatStm3.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[526] /* MatStm3.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[679]);
  TRACE_POP
}
/*
equation index: 692
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[2,2] = MatStm3.compMolFlo[2,2] * MatStm3.comp[2].MW
*/
void Flowsheet_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  data->localData[0]->realVars[500] /* MatStm3.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[524] /* MatStm3.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[679]);
  TRACE_POP
}
/*
equation index: 693
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[2,1] = MatStm3.compMolFlo[2,1] * MatStm3.comp[1].MW
*/
void Flowsheet_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  data->localData[0]->realVars[499] /* MatStm3.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[523] /* MatStm3.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[678]);
  TRACE_POP
}
/*
equation index: 694
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[3,1] = MatStm3.compMolFlo[3,1] * MatStm3.comp[1].MW
*/
void Flowsheet_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  data->localData[0]->realVars[501] /* MatStm3.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[525] /* MatStm3.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[678]);
  TRACE_POP
}
/*
equation index: 695
type: SIMPLE_ASSIGN
MatStm3._phasMolSpHeat[3] = MatStm3.compMolFrac[3,1] * MatStm3.compMolSpHeat[3,1] + MatStm3.compMolFrac[3,2] * MatStm3.compMolSpHeat[3,2]
*/
void Flowsheet_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  data->localData[0]->realVars[579] /* MatStm3.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[537] /* MatStm3.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[538] /* MatStm3.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 696
type: SIMPLE_ASSIGN
MatStm3._phasMolEnth[3] = MatStm3.compMolFrac[3,1] * MatStm3.compMolEnth[3,1] + MatStm3.compMolFrac[3,2] * MatStm3.compMolEnth[3,2]
*/
void Flowsheet_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  data->localData[0]->realVars[573] /* MatStm3.phasMolEnth[3] variable */ = (data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[513] /* MatStm3.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[514] /* MatStm3.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 697
type: ALGORITHM

  (MatStm3.compMolEntr[2,2], MatStm3.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[2].AS, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tb, MatStm3.comp[2].Tc, 310.0, 101325.0, MatStm3.compMolFrac[2,2], MatStm3.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[720], (modelica_real)data->simulationInfo->realParameter[721], (modelica_real)data->simulationInfo->realParameter[722], (modelica_real)data->simulationInfo->realParameter[723], (modelica_real)data->simulationInfo->realParameter[724], (modelica_real)data->simulationInfo->realParameter[725]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[620], (modelica_real)data->simulationInfo->realParameter[621], (modelica_real)data->simulationInfo->realParameter[622], (modelica_real)data->simulationInfo->realParameter[623], (modelica_real)data->simulationInfo->realParameter[624], (modelica_real)data->simulationInfo->realParameter[625]);
  data->localData[0]->realVars[518] /* MatStm3.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[597], tmp0, tmp1, data->simulationInfo->realParameter[693], data->simulationInfo->realParameter[695], 310.0, 101325.0, data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */, data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[520] /* MatStm3.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 698
type: SIMPLE_ASSIGN
MatStm3._phasMolSpHeat[2] = MatStm3.compMolFrac[2,1] * MatStm3.compMolSpHeat[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.compMolSpHeat[2,2]
*/
void Flowsheet_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  data->localData[0]->realVars[578] /* MatStm3.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[535] /* MatStm3.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[536] /* MatStm3.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 699
type: SIMPLE_ASSIGN
MatStm3._phasMolEnth[2] = MatStm3.compMolFrac[2,1] * MatStm3.compMolEnth[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.compMolEnth[2,2]
*/
void Flowsheet_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  data->localData[0]->realVars[572] /* MatStm3.phasMolEnth[2] variable */ = (data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[511] /* MatStm3.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[512] /* MatStm3.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 700
type: ALGORITHM

  (MatStm3.compMolEntr[2,1], MatStm3.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[1].AS, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tb, MatStm3.comp[1].Tc, 310.0, 101325.0, MatStm3.compMolFrac[2,1], MatStm3.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,700};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[714], (modelica_real)data->simulationInfo->realParameter[715], (modelica_real)data->simulationInfo->realParameter[716], (modelica_real)data->simulationInfo->realParameter[717], (modelica_real)data->simulationInfo->realParameter[718], (modelica_real)data->simulationInfo->realParameter[719]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[614], (modelica_real)data->simulationInfo->realParameter[615], (modelica_real)data->simulationInfo->realParameter[616], (modelica_real)data->simulationInfo->realParameter[617], (modelica_real)data->simulationInfo->realParameter[618], (modelica_real)data->simulationInfo->realParameter[619]);
  data->localData[0]->realVars[517] /* MatStm3.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[596], tmp2, tmp3, data->simulationInfo->realParameter[692], data->simulationInfo->realParameter[694], 310.0, 101325.0, data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */, data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[519] /* MatStm3.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 701
type: SIMPLE_ASSIGN
MatStm3._phasMolEntr[3] = MatStm3.compMolFrac[3,1] * MatStm3.compMolEntr[3,1] + MatStm3.compMolFrac[3,2] * MatStm3.compMolEntr[3,2]
*/
void Flowsheet_eqFunction_701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,701};
  data->localData[0]->realVars[576] /* MatStm3.phasMolEntr[3] variable */ = (data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[519] /* MatStm3.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[520] /* MatStm3.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 702
type: ALGORITHM

  MatStm3.MW[3] := $START.MatStm3.MW[3];
  MatStm3.MW[2] := $START.MatStm3.MW[2];
  MatStm3.MW[1] := $START.MatStm3.MW[1];
  for i in 1:2 loop
    MatStm3.MW[:] := {MatStm3.MW[1] + MatStm3.compMolFrac[1,i] * MatStm3.comp[i].MW, MatStm3.MW[2] + MatStm3.compMolFrac[2,i] * MatStm3.comp[i].MW, MatStm3.MW[3] + MatStm3.compMolFrac[3,i] * MatStm3.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,702};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[478] /* MatStm3.MW[3] variable */ = data->modelData->realVarsData[478].attribute /* MatStm3.MW[3] variable */.start;

  data->localData[0]->realVars[477] /* MatStm3.MW[2] variable */ = data->modelData->realVarsData[477].attribute /* MatStm3.MW[2] variable */.start;

  data->localData[0]->realVars[476] /* MatStm3.MW[1] variable */ = data->modelData->realVarsData[476].attribute /* MatStm3.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[476] /* MatStm3.MW[1] variable */ + ((&data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[678])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[477] /* MatStm3.MW[2] variable */ + ((&data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[678])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[478] /* MatStm3.MW[3] variable */ + ((&data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[678])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[476] /* MatStm3.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
/*
equation index: 703
type: SIMPLE_ASSIGN
MatStm3._totMasFlo[1] = 80.0 * MatStm3.MW[1]
*/
void Flowsheet_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  data->localData[0]->realVars[627] /* MatStm3.totMasFlo[1] variable */ = (80.0) * (data->localData[0]->realVars[476] /* MatStm3.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 704
type: SIMPLE_ASSIGN
MatStm3._compMasFrac[1,2] = MatStm3.compMasFlo[1,2] / MatStm3.totMasFlo[1]
*/
void Flowsheet_eqFunction_704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,704};
  data->localData[0]->realVars[504] /* MatStm3.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[498] /* MatStm3.compMasFlo[1,2] variable */,data->localData[0]->realVars[627] /* MatStm3.totMasFlo[1] variable */,"MatStm3.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 705
type: SIMPLE_ASSIGN
MatStm3._totMasFlo[3] = MatStm3.totMolFlo[3] * MatStm3.MW[3]
*/
void Flowsheet_eqFunction_705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,705};
  data->localData[0]->realVars[629] /* MatStm3.totMasFlo[3] variable */ = (data->localData[0]->realVars[632] /* MatStm3.totMolFlo[3] variable */) * (data->localData[0]->realVars[478] /* MatStm3.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 706
type: SIMPLE_ASSIGN
MatStm3._vapPhasMasFrac = MatStm3.totMasFlo[3] / MatStm3.totMasFlo[1]
*/
void Flowsheet_eqFunction_706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,706};
  data->localData[0]->realVars[633] /* MatStm3.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[629] /* MatStm3.totMasFlo[3] variable */,data->localData[0]->realVars[627] /* MatStm3.totMasFlo[1] variable */,"MatStm3.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 707
type: SIMPLE_ASSIGN
MatStm3._phasMolEntr[2] = MatStm3.compMolFrac[2,1] * MatStm3.compMolEntr[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.compMolEntr[2,2]
*/
void Flowsheet_eqFunction_707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,707};
  data->localData[0]->realVars[575] /* MatStm3.phasMolEntr[2] variable */ = (data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[517] /* MatStm3.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[518] /* MatStm3.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 708
type: SIMPLE_ASSIGN
MatStm3._totMasFlo[2] = MatStm3.totMolFlo[2] * MatStm3.MW[2]
*/
void Flowsheet_eqFunction_708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,708};
  data->localData[0]->realVars[628] /* MatStm3.totMasFlo[2] variable */ = (data->localData[0]->realVars[631] /* MatStm3.totMolFlo[2] variable */) * (data->localData[0]->realVars[477] /* MatStm3.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 709
type: SIMPLE_ASSIGN
MatStm3._liqPhasMasFrac = MatStm3.totMasFlo[2] / MatStm3.totMasFlo[1]
*/
void Flowsheet_eqFunction_709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,709};
  data->localData[0]->realVars[567] /* MatStm3.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[628] /* MatStm3.totMasFlo[2] variable */,data->localData[0]->realVars[627] /* MatStm3.totMasFlo[1] variable */,"MatStm3.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 710
type: LINEAR

<var>MatStm3._compMasFrac[3,1]</var>
<var>MatStm3._compMasFrac[1,1]</var>
<var>MatStm3._compMasFrac[2,1]</var>
<var>MatStm3._compMasFrac[3,2]</var>
<var>MatStm3._compMasFrac[2,2]</var>
<row>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then -MatStm3.compMasFrac[1,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,2] else -MatStm3.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,1] else MatStm3.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="0" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -1.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101325.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,710};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[507] /* MatStm3.compMasFrac[3,1] variable */,data->localData[1]->realVars[503] /* MatStm3.compMasFrac[1,1] variable */,data->localData[1]->realVars[505] /* MatStm3.compMasFrac[2,1] variable */,data->localData[1]->realVars[508] /* MatStm3.compMasFrac[3,2] variable */,data->localData[1]->realVars[506] /* MatStm3.compMasFrac[2,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 710 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 4, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,710};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 710 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[507] /* MatStm3.compMasFrac[3,1] variable */ = aux_x[0];
  data->localData[0]->realVars[503] /* MatStm3.compMasFrac[1,1] variable */ = aux_x[1];
  data->localData[0]->realVars[505] /* MatStm3.compMasFrac[2,1] variable */ = aux_x[2];
  data->localData[0]->realVars[508] /* MatStm3.compMasFrac[3,2] variable */ = aux_x[3];
  data->localData[0]->realVars[506] /* MatStm3.compMasFrac[2,2] variable */ = aux_x[4];
  TRACE_POP
}
/*
equation index: 711
type: SIMPLE_ASSIGN
MatStm3._phasMolSpHeat[1] = MatStm3.liqPhasMolFrac * MatStm3.phasMolSpHeat[2] + Mixer1.inVapPhasMolFrac[1] * MatStm3.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,711};
  data->localData[0]->realVars[577] /* MatStm3.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[568] /* MatStm3.liqPhasMolFrac variable */) * (data->localData[0]->realVars[578] /* MatStm3.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[636] /* Mixer1.inVapPhasMolFrac[1] variable */) * (data->localData[0]->realVars[579] /* MatStm3.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 712
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[1,1] = MatStm3.compMolFrac[1,1] * MatStm3.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,712};
  data->localData[0]->realVars[533] /* MatStm3.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[577] /* MatStm3.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 713
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[1,2] = MatStm3.compMolFrac[1,2] * MatStm3.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,713};
  data->localData[0]->realVars[534] /* MatStm3.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[577] /* MatStm3.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 714
type: SIMPLE_ASSIGN
MatStm3._phasMolEnth[1] = MatStm3.liqPhasMolFrac * MatStm3.phasMolEnth[2] + Mixer1.inVapPhasMolFrac[1] * MatStm3.phasMolEnth[3]
*/
void Flowsheet_eqFunction_714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,714};
  data->localData[0]->realVars[571] /* MatStm3.phasMolEnth[1] variable */ = (data->localData[0]->realVars[568] /* MatStm3.liqPhasMolFrac variable */) * (data->localData[0]->realVars[572] /* MatStm3.phasMolEnth[2] variable */) + (data->localData[0]->realVars[636] /* Mixer1.inVapPhasMolFrac[1] variable */) * (data->localData[0]->realVars[573] /* MatStm3.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 715
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[1,1] = MatStm3.compMolFrac[1,1] * MatStm3.phasMolEnth[1]
*/
void Flowsheet_eqFunction_715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,715};
  data->localData[0]->realVars[509] /* MatStm3.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[571] /* MatStm3.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 716
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[1,2] = MatStm3.compMolFrac[1,2] * MatStm3.phasMolEnth[1]
*/
void Flowsheet_eqFunction_716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,716};
  data->localData[0]->realVars[510] /* MatStm3.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[571] /* MatStm3.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 717
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[1] = 0.5333333333333333 * MatStm3.phasMolEnth[1] + 0.4666666666666667 * MatStm1.phasMolEnth[1]
*/
void Flowsheet_eqFunction_717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,717};
  data->localData[0]->realVars[388] /* MatStm2.phasMolEnth[1] variable */ = (0.5333333333333333) * (data->localData[0]->realVars[571] /* MatStm3.phasMolEnth[1] variable */) + (0.4666666666666667) * (data->localData[0]->realVars[206] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
void Flowsheet_eqFunction_718(DATA*, threadData_t*);
void Flowsheet_eqFunction_719(DATA*, threadData_t*);
void Flowsheet_eqFunction_720(DATA*, threadData_t*);
void Flowsheet_eqFunction_721(DATA*, threadData_t*);
void Flowsheet_eqFunction_722(DATA*, threadData_t*);
void Flowsheet_eqFunction_723(DATA*, threadData_t*);
void Flowsheet_eqFunction_724(DATA*, threadData_t*);
void Flowsheet_eqFunction_725(DATA*, threadData_t*);
void Flowsheet_eqFunction_726(DATA*, threadData_t*);
void Flowsheet_eqFunction_727(DATA*, threadData_t*);
void Flowsheet_eqFunction_728(DATA*, threadData_t*);
void Flowsheet_eqFunction_729(DATA*, threadData_t*);
void Flowsheet_eqFunction_730(DATA*, threadData_t*);
void Flowsheet_eqFunction_731(DATA*, threadData_t*);
void Flowsheet_eqFunction_732(DATA*, threadData_t*);
void Flowsheet_eqFunction_733(DATA*, threadData_t*);
void Flowsheet_eqFunction_734(DATA*, threadData_t*);
void Flowsheet_eqFunction_735(DATA*, threadData_t*);
void Flowsheet_eqFunction_736(DATA*, threadData_t*);
void Flowsheet_eqFunction_737(DATA*, threadData_t*);
void Flowsheet_eqFunction_738(DATA*, threadData_t*);
void Flowsheet_eqFunction_739(DATA*, threadData_t*);
void Flowsheet_eqFunction_740(DATA*, threadData_t*);
void Flowsheet_eqFunction_741(DATA*, threadData_t*);
void Flowsheet_eqFunction_742(DATA*, threadData_t*);
void Flowsheet_eqFunction_743(DATA*, threadData_t*);
void Flowsheet_eqFunction_744(DATA*, threadData_t*);
void Flowsheet_eqFunction_745(DATA*, threadData_t*);
void Flowsheet_eqFunction_746(DATA*, threadData_t*);
void Flowsheet_eqFunction_747(DATA*, threadData_t*);
void Flowsheet_eqFunction_748(DATA*, threadData_t*);
void Flowsheet_eqFunction_749(DATA*, threadData_t*);
void Flowsheet_eqFunction_750(DATA*, threadData_t*);
void Flowsheet_eqFunction_751(DATA*, threadData_t*);
void Flowsheet_eqFunction_752(DATA*, threadData_t*);
void Flowsheet_eqFunction_753(DATA*, threadData_t*);
void Flowsheet_eqFunction_754(DATA*, threadData_t*);
void Flowsheet_eqFunction_755(DATA*, threadData_t*);
void Flowsheet_eqFunction_756(DATA*, threadData_t*);
void Flowsheet_eqFunction_757(DATA*, threadData_t*);
void Flowsheet_eqFunction_758(DATA*, threadData_t*);
void Flowsheet_eqFunction_759(DATA*, threadData_t*);
void Flowsheet_eqFunction_760(DATA*, threadData_t*);
void Flowsheet_eqFunction_761(DATA*, threadData_t*);
void Flowsheet_eqFunction_762(DATA*, threadData_t*);
void Flowsheet_eqFunction_763(DATA*, threadData_t*);
void Flowsheet_eqFunction_764(DATA*, threadData_t*);
void Flowsheet_eqFunction_765(DATA*, threadData_t*);
void Flowsheet_eqFunction_766(DATA*, threadData_t*);
void Flowsheet_eqFunction_767(DATA*, threadData_t*);
void Flowsheet_eqFunction_768(DATA*, threadData_t*);
void Flowsheet_eqFunction_769(DATA*, threadData_t*);
void Flowsheet_eqFunction_770(DATA*, threadData_t*);
void Flowsheet_eqFunction_771(DATA*, threadData_t*);
void Flowsheet_eqFunction_772(DATA*, threadData_t*);
void Flowsheet_eqFunction_773(DATA*, threadData_t*);
void Flowsheet_eqFunction_774(DATA*, threadData_t*);
void Flowsheet_eqFunction_775(DATA*, threadData_t*);
void Flowsheet_eqFunction_776(DATA*, threadData_t*);
void Flowsheet_eqFunction_777(DATA*, threadData_t*);
void Flowsheet_eqFunction_778(DATA*, threadData_t*);
void Flowsheet_eqFunction_779(DATA*, threadData_t*);
void Flowsheet_eqFunction_780(DATA*, threadData_t*);
void Flowsheet_eqFunction_781(DATA*, threadData_t*);
void Flowsheet_eqFunction_782(DATA*, threadData_t*);
void Flowsheet_eqFunction_783(DATA*, threadData_t*);
void Flowsheet_eqFunction_784(DATA*, threadData_t*);
void Flowsheet_eqFunction_785(DATA*, threadData_t*);
void Flowsheet_eqFunction_786(DATA*, threadData_t*);
void Flowsheet_eqFunction_787(DATA*, threadData_t*);
void Flowsheet_eqFunction_788(DATA*, threadData_t*);
void Flowsheet_eqFunction_789(DATA*, threadData_t*);
void Flowsheet_eqFunction_790(DATA*, threadData_t*);
void Flowsheet_eqFunction_791(DATA*, threadData_t*);
void Flowsheet_eqFunction_792(DATA*, threadData_t*);
void Flowsheet_eqFunction_793(DATA*, threadData_t*);
void Flowsheet_eqFunction_794(DATA*, threadData_t*);
void Flowsheet_eqFunction_795(DATA*, threadData_t*);
void Flowsheet_eqFunction_796(DATA*, threadData_t*);
void Flowsheet_eqFunction_797(DATA*, threadData_t*);
void Flowsheet_eqFunction_798(DATA*, threadData_t*);
void Flowsheet_eqFunction_799(DATA*, threadData_t*);
void Flowsheet_eqFunction_800(DATA*, threadData_t*);
void Flowsheet_eqFunction_801(DATA*, threadData_t*);
void Flowsheet_eqFunction_802(DATA*, threadData_t*);
void Flowsheet_eqFunction_803(DATA*, threadData_t*);
void Flowsheet_eqFunction_804(DATA*, threadData_t*);
void Flowsheet_eqFunction_805(DATA*, threadData_t*);
void Flowsheet_eqFunction_806(DATA*, threadData_t*);
void Flowsheet_eqFunction_807(DATA*, threadData_t*);
void Flowsheet_eqFunction_808(DATA*, threadData_t*);
void Flowsheet_eqFunction_809(DATA*, threadData_t*);
void Flowsheet_eqFunction_810(DATA*, threadData_t*);
void Flowsheet_eqFunction_811(DATA*, threadData_t*);
void Flowsheet_eqFunction_812(DATA*, threadData_t*);
void Flowsheet_eqFunction_828(DATA*, threadData_t*);
void Flowsheet_eqFunction_827(DATA*, threadData_t*);
void Flowsheet_eqFunction_826(DATA*, threadData_t*);
void Flowsheet_eqFunction_822(DATA*, threadData_t*);
void Flowsheet_eqFunction_823(DATA*, threadData_t*);
void Flowsheet_eqFunction_824(DATA*, threadData_t*);
void Flowsheet_eqFunction_825(DATA*, threadData_t*);
void Flowsheet_eqFunction_821(DATA*, threadData_t*);
void Flowsheet_eqFunction_820(DATA*, threadData_t*);
void Flowsheet_eqFunction_819(DATA*, threadData_t*);
void Flowsheet_eqFunction_818(DATA*, threadData_t*);
void Flowsheet_eqFunction_817(DATA*, threadData_t*);
void Flowsheet_eqFunction_816(DATA*, threadData_t*);
void Flowsheet_eqFunction_815(DATA*, threadData_t*);
void Flowsheet_eqFunction_814(DATA*, threadData_t*);
void Flowsheet_eqFunction_813(DATA*, threadData_t*);
/*
equation index: 829
indexNonlinear: 5
type: NONLINEAR

vars: {MatStm2._sum_dew[1], MatStm2._sum_dew[2], $cse32, MatStm2._dewLiqMolFrac[2], MatStm2._Pdew, $cse30, MatStm2._L_dew[1], MatStm2._J_dew[2], MatStm2._J_dew[1], MatStm2._totMolFlo[2], MatStm2._T, MatStm2._compMolFrac[2,1], MatStm2._compMolFrac[3,2], MatStm2._compMolFrac[3,1], MatStm2._compMolFrac[2,2]}
eqns: {718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 828, 827, 826, 822, 823, 824, 825, 821, 820, 819, 818, 817, 816, 815, 814, 813}
*/
void Flowsheet_eqFunction_829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,829};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 829 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = data->localData[0]->realVars[414] /* MatStm2.sum_dew[1] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[1] = data->localData[0]->realVars[415] /* MatStm2.sum_dew[2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[2] = data->localData[0]->realVars[37] /* $cse32 variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[3] = data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[4] = data->localData[0]->realVars[298] /* MatStm2.Pdew variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[5] = data->localData[0]->realVars[35] /* $cse30 variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[6] = data->localData[0]->realVars[291] /* MatStm2.L_dew[1] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[7] = data->localData[0]->realVars[284] /* MatStm2.J_dew[2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[8] = data->localData[0]->realVars[283] /* MatStm2.J_dew[1] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[9] = data->localData[0]->realVars[448] /* MatStm2.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[10] = data->localData[0]->realVars[313] /* MatStm2.T variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[11] = data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[12] = data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[13] = data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[14] = data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,829};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 829 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[414] /* MatStm2.sum_dew[1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  data->localData[0]->realVars[415] /* MatStm2.sum_dew[2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[1];
  data->localData[0]->realVars[37] /* $cse32 variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[2];
  data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[3];
  data->localData[0]->realVars[298] /* MatStm2.Pdew variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[4];
  data->localData[0]->realVars[35] /* $cse30 variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[5];
  data->localData[0]->realVars[291] /* MatStm2.L_dew[1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[6];
  data->localData[0]->realVars[284] /* MatStm2.J_dew[2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[7];
  data->localData[0]->realVars[283] /* MatStm2.J_dew[1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[8];
  data->localData[0]->realVars[448] /* MatStm2.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[9];
  data->localData[0]->realVars[313] /* MatStm2.T variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[10];
  data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[11];
  data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[12];
  data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[13];
  data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[14];
  TRACE_POP
}
/*
equation index: 830
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[3,2] = MatStm2.compMolFlo[3,2] * MatStm2.comp[2].MW
*/
void Flowsheet_eqFunction_830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,830};
  data->localData[0]->realVars[319] /* MatStm2.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[343] /* MatStm2.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[481]);
  TRACE_POP
}
/*
equation index: 831
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[2,2] = MatStm2.compMolFlo[2,2] * MatStm2.comp[2].MW
*/
void Flowsheet_eqFunction_831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,831};
  data->localData[0]->realVars[317] /* MatStm2.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[341] /* MatStm2.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[481]);
  TRACE_POP
}
/*
equation index: 832
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[2,1] = MatStm2.compMolFlo[2,1] * MatStm2.comp[1].MW
*/
void Flowsheet_eqFunction_832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,832};
  data->localData[0]->realVars[316] /* MatStm2.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[340] /* MatStm2.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[480]);
  TRACE_POP
}
/*
equation index: 833
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[3,1] = MatStm2.compMolFlo[3,1] * MatStm2.comp[1].MW
*/
void Flowsheet_eqFunction_833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,833};
  data->localData[0]->realVars[318] /* MatStm2.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[342] /* MatStm2.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[480]);
  TRACE_POP
}
/*
equation index: 834
type: ALGORITHM

  MatStm2.MW[3] := $START.MatStm2.MW[3];
  MatStm2.MW[2] := $START.MatStm2.MW[2];
  MatStm2.MW[1] := $START.MatStm2.MW[1];
  for i in 1:2 loop
    MatStm2.MW[:] := {MatStm2.MW[1] + MatStm2.compMolFrac[1,i] * MatStm2.comp[i].MW, MatStm2.MW[2] + MatStm2.compMolFrac[2,i] * MatStm2.comp[i].MW, MatStm2.MW[3] + MatStm2.compMolFrac[3,i] * MatStm2.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,834};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  data->localData[0]->realVars[295] /* MatStm2.MW[3] variable */ = data->modelData->realVarsData[295].attribute /* MatStm2.MW[3] variable */.start;

  data->localData[0]->realVars[294] /* MatStm2.MW[2] variable */ = data->modelData->realVarsData[294].attribute /* MatStm2.MW[2] variable */.start;

  data->localData[0]->realVars[293] /* MatStm2.MW[1] variable */ = data->modelData->realVarsData[293].attribute /* MatStm2.MW[1] variable */.start;

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 2);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp3, tmp5); $Pi += tmp4)
    {
      array_alloc_scalar_real_array(&tmp0, 3, (modelica_real)data->localData[0]->realVars[293] /* MatStm2.MW[1] variable */ + ((&data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[480])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[294] /* MatStm2.MW[2] variable */ + ((&data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[480])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[295] /* MatStm2.MW[3] variable */ + ((&data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[480])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
      real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[293] /* MatStm2.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp0, &tmp2, &tmp1);
    }
  }
  TRACE_POP
}
/*
equation index: 835
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[2] = MatStm2.totMolFlo[2] * MatStm2.MW[2]
*/
void Flowsheet_eqFunction_835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,835};
  data->localData[0]->realVars[445] /* MatStm2.totMasFlo[2] variable */ = (data->localData[0]->realVars[448] /* MatStm2.totMolFlo[2] variable */) * (data->localData[0]->realVars[294] /* MatStm2.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 836
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[3] = MatStm2.totMolFlo[3] * MatStm2.MW[3]
*/
void Flowsheet_eqFunction_836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,836};
  data->localData[0]->realVars[446] /* MatStm2.totMasFlo[3] variable */ = (data->localData[0]->realVars[449] /* MatStm2.totMolFlo[3] variable */) * (data->localData[0]->realVars[295] /* MatStm2.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 837
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[1] = 150.0 * MatStm2.MW[1]
*/
void Flowsheet_eqFunction_837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,837};
  data->localData[0]->realVars[444] /* MatStm2.totMasFlo[1] variable */ = (150.0) * (data->localData[0]->realVars[293] /* MatStm2.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 838
type: SIMPLE_ASSIGN
MatStm2._compMasFrac[1,2] = MatStm2.compMasFlo[1,2] / MatStm2.totMasFlo[1]
*/
void Flowsheet_eqFunction_838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,838};
  data->localData[0]->realVars[321] /* MatStm2.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[315] /* MatStm2.compMasFlo[1,2] variable */,data->localData[0]->realVars[444] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 839
type: SIMPLE_ASSIGN
MatStm2._vapPhasMasFrac = MatStm2.totMasFlo[3] / MatStm2.totMasFlo[1]
*/
void Flowsheet_eqFunction_839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,839};
  data->localData[0]->realVars[450] /* MatStm2.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[446] /* MatStm2.totMasFlo[3] variable */,data->localData[0]->realVars[444] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 840
type: SIMPLE_ASSIGN
MatStm2._liqPhasMasFrac = MatStm2.totMasFlo[2] / MatStm2.totMasFlo[1]
*/
void Flowsheet_eqFunction_840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,840};
  data->localData[0]->realVars[384] /* MatStm2.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[445] /* MatStm2.totMasFlo[2] variable */,data->localData[0]->realVars[444] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 841
type: LINEAR

<var>MatStm2._compMasFrac[2,2]</var>
<var>MatStm2._compMasFrac[3,1]</var>
<var>MatStm2._compMasFrac[1,1]</var>
<var>MatStm2._compMasFrac[2,1]</var>
<var>MatStm2._compMasFrac[3,2]</var>
<row>
  <cell>if 101325.0 >= MatStm2.Pbubl then -MatStm2.compMasFrac[1,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,2] else -MatStm2.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,1] else MatStm2.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,2] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101325.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="4" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,841};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[323] /* MatStm2.compMasFrac[2,2] variable */,data->localData[1]->realVars[324] /* MatStm2.compMasFrac[3,1] variable */,data->localData[1]->realVars[320] /* MatStm2.compMasFrac[1,1] variable */,data->localData[1]->realVars[322] /* MatStm2.compMasFrac[2,1] variable */,data->localData[1]->realVars[325] /* MatStm2.compMasFrac[3,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 841 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 5, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,841};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 841 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[323] /* MatStm2.compMasFrac[2,2] variable */ = aux_x[0];
  data->localData[0]->realVars[324] /* MatStm2.compMasFrac[3,1] variable */ = aux_x[1];
  data->localData[0]->realVars[320] /* MatStm2.compMasFrac[1,1] variable */ = aux_x[2];
  data->localData[0]->realVars[322] /* MatStm2.compMasFrac[2,1] variable */ = aux_x[3];
  data->localData[0]->realVars[325] /* MatStm2.compMasFrac[3,2] variable */ = aux_x[4];
  TRACE_POP
}
/*
equation index: 842
type: ALGORITHM

  (MatStm2.compMolEntr[2,2], MatStm2.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[2].AS, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tb, MatStm2.comp[2].Tc, MatStm2.T, 101325.0, MatStm2.compMolFrac[2,2], MatStm2.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,842};
  real_array tmp6;
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526], (modelica_real)data->simulationInfo->realParameter[527]);
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427]);
  data->localData[0]->realVars[335] /* MatStm2.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[399], tmp6, tmp7, data->simulationInfo->realParameter[495], data->simulationInfo->realParameter[497], data->localData[0]->realVars[313] /* MatStm2.T variable */, 101325.0, data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */, data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[337] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 843
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, MatStm2.T)
*/
void Flowsheet_eqFunction_843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,843};
  real_array tmp8;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526], (modelica_real)data->simulationInfo->realParameter[527]);
  data->localData[0]->realVars[355] /* MatStm2.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp8, data->localData[0]->realVars[313] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 844
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm2.comp[2].LiqCp[1], MatStm2.comp[2].LiqCp[2], MatStm2.comp[2].LiqCp[3], MatStm2.comp[2].LiqCp[4], MatStm2.comp[2].LiqCp[5], MatStm2.comp[2].LiqCp[6]}, MatStm2.T)
*/
void Flowsheet_eqFunction_844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,844};
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[438], (modelica_real)data->simulationInfo->realParameter[439], (modelica_real)data->simulationInfo->realParameter[440], (modelica_real)data->simulationInfo->realParameter[441], (modelica_real)data->simulationInfo->realParameter[442], (modelica_real)data->simulationInfo->realParameter[443]);
  data->localData[0]->realVars[353] /* MatStm2.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp9, data->localData[0]->realVars[313] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 845
type: ALGORITHM

  (MatStm2.compMolEntr[2,1], MatStm2.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[1].AS, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tb, MatStm2.comp[1].Tc, MatStm2.T, 101325.0, MatStm2.compMolFrac[2,1], MatStm2.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,845};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421]);
  data->localData[0]->realVars[334] /* MatStm2.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[398], tmp10, tmp11, data->simulationInfo->realParameter[494], data->simulationInfo->realParameter[496], data->localData[0]->realVars[313] /* MatStm2.T variable */, 101325.0, data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */, data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[336] /* MatStm2.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 846
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolEntr[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolEntr[3,2]
*/
void Flowsheet_eqFunction_846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,846};
  data->localData[0]->realVars[393] /* MatStm2.phasMolEntr[3] variable */ = (data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[336] /* MatStm2.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[337] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 847
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolEntr[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolEntr[2,2]
*/
void Flowsheet_eqFunction_847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,847};
  data->localData[0]->realVars[392] /* MatStm2.phasMolEntr[2] variable */ = (data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[334] /* MatStm2.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[335] /* MatStm2.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 848
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolEntr[2] + MatStm2.vapPhasMolFrac * MatStm2.phasMolEntr[3]
*/
void Flowsheet_eqFunction_848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,848};
  data->localData[0]->realVars[391] /* MatStm2.phasMolEntr[1] variable */ = (data->localData[0]->realVars[385] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[392] /* MatStm2.phasMolEntr[2] variable */) + (data->localData[0]->realVars[451] /* MatStm2.vapPhasMolFrac variable */) * (data->localData[0]->realVars[393] /* MatStm2.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 849
type: SIMPLE_ASSIGN
MatStm2._compMolEntr[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolEntr[1]
*/
void Flowsheet_eqFunction_849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,849};
  data->localData[0]->realVars[332] /* MatStm2.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[391] /* MatStm2.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 850
type: SIMPLE_ASSIGN
MatStm2._compMolEntr[1,2] = MatStm2.compMolFrac[1,2] * MatStm2.phasMolEntr[1]
*/
void Flowsheet_eqFunction_850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,850};
  data->localData[0]->realVars[333] /* MatStm2.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[391] /* MatStm2.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 851
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, MatStm2.T)
*/
void Flowsheet_eqFunction_851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,851};
  real_array tmp12;
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521]);
  data->localData[0]->realVars[354] /* MatStm2.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp12, data->localData[0]->realVars[313] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 852
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolSpHeat[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolSpHeat[3,2]
*/
void Flowsheet_eqFunction_852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,852};
  data->localData[0]->realVars[396] /* MatStm2.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[354] /* MatStm2.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[355] /* MatStm2.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 853
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm2.comp[1].LiqCp[1], MatStm2.comp[1].LiqCp[2], MatStm2.comp[1].LiqCp[3], MatStm2.comp[1].LiqCp[4], MatStm2.comp[1].LiqCp[5], MatStm2.comp[1].LiqCp[6]}, MatStm2.T)
*/
void Flowsheet_eqFunction_853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,853};
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)data->simulationInfo->realParameter[432], (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434], (modelica_real)data->simulationInfo->realParameter[435], (modelica_real)data->simulationInfo->realParameter[436], (modelica_real)data->simulationInfo->realParameter[437]);
  data->localData[0]->realVars[352] /* MatStm2.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp13, data->localData[0]->realVars[313] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 854
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolSpHeat[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolSpHeat[2,2]
*/
void Flowsheet_eqFunction_854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,854};
  data->localData[0]->realVars[395] /* MatStm2.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[352] /* MatStm2.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[353] /* MatStm2.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 855
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolSpHeat[2] + MatStm2.vapPhasMolFrac * MatStm2.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,855};
  data->localData[0]->realVars[394] /* MatStm2.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[385] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[395] /* MatStm2.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[451] /* MatStm2.vapPhasMolFrac variable */) * (data->localData[0]->realVars[396] /* MatStm2.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 856
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,856};
  data->localData[0]->realVars[350] /* MatStm2.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[394] /* MatStm2.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 857
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[1,2] = MatStm2.compMolFrac[1,2] * MatStm2.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,857};
  data->localData[0]->realVars[351] /* MatStm2.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[394] /* MatStm2.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 858
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolEnth[1]
*/
void Flowsheet_eqFunction_858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,858};
  data->localData[0]->realVars[326] /* MatStm2.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[388] /* MatStm2.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 859
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[1,2] = MatStm2.compMolFrac[1,2] * MatStm2.phasMolEnth[1]
*/
void Flowsheet_eqFunction_859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,859};
  data->localData[0]->realVars[327] /* MatStm2.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[388] /* MatStm2.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 860
type: SIMPLE_ASSIGN
MatStm3._phasMolEntr[1] = MatStm3.liqPhasMolFrac * MatStm3.phasMolEntr[2] + Mixer1.inVapPhasMolFrac[1] * MatStm3.phasMolEntr[3]
*/
void Flowsheet_eqFunction_860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,860};
  data->localData[0]->realVars[574] /* MatStm3.phasMolEntr[1] variable */ = (data->localData[0]->realVars[568] /* MatStm3.liqPhasMolFrac variable */) * (data->localData[0]->realVars[575] /* MatStm3.phasMolEntr[2] variable */) + (data->localData[0]->realVars[636] /* Mixer1.inVapPhasMolFrac[1] variable */) * (data->localData[0]->realVars[576] /* MatStm3.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 861
type: SIMPLE_ASSIGN
MatStm3._compMolEntr[1,1] = MatStm3.compMolFrac[1,1] * MatStm3.phasMolEntr[1]
*/
void Flowsheet_eqFunction_861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,861};
  data->localData[0]->realVars[515] /* MatStm3.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[574] /* MatStm3.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 862
type: SIMPLE_ASSIGN
MatStm3._compMolEntr[1,2] = MatStm3.compMolFrac[1,2] * MatStm3.phasMolEntr[1]
*/
void Flowsheet_eqFunction_862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,862};
  data->localData[0]->realVars[516] /* MatStm3.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[574] /* MatStm3.phasMolEntr[1] variable */);
  TRACE_POP
}

OMC_DISABLE_OPT
int Flowsheet_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  
  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  Flowsheet_functionLocalKnownVars(data, threadData);
  Flowsheet_eqFunction_478(data, threadData);

  Flowsheet_eqFunction_479(data, threadData);

  Flowsheet_eqFunction_480(data, threadData);

  Flowsheet_eqFunction_481(data, threadData);

  Flowsheet_eqFunction_482(data, threadData);

  Flowsheet_eqFunction_483(data, threadData);

  Flowsheet_eqFunction_484(data, threadData);

  Flowsheet_eqFunction_485(data, threadData);

  Flowsheet_eqFunction_486(data, threadData);

  Flowsheet_eqFunction_487(data, threadData);

  Flowsheet_eqFunction_488(data, threadData);

  Flowsheet_eqFunction_489(data, threadData);

  Flowsheet_eqFunction_490(data, threadData);

  Flowsheet_eqFunction_491(data, threadData);

  Flowsheet_eqFunction_492(data, threadData);

  Flowsheet_eqFunction_493(data, threadData);

  Flowsheet_eqFunction_494(data, threadData);

  Flowsheet_eqFunction_495(data, threadData);

  Flowsheet_eqFunction_496(data, threadData);

  Flowsheet_eqFunction_497(data, threadData);

  Flowsheet_eqFunction_498(data, threadData);

  Flowsheet_eqFunction_499(data, threadData);

  Flowsheet_eqFunction_500(data, threadData);

  Flowsheet_eqFunction_501(data, threadData);

  Flowsheet_eqFunction_579(data, threadData);

  Flowsheet_eqFunction_580(data, threadData);

  Flowsheet_eqFunction_581(data, threadData);

  Flowsheet_eqFunction_582(data, threadData);

  Flowsheet_eqFunction_583(data, threadData);

  Flowsheet_eqFunction_584(data, threadData);

  Flowsheet_eqFunction_585(data, threadData);

  Flowsheet_eqFunction_586(data, threadData);

  Flowsheet_eqFunction_587(data, threadData);

  Flowsheet_eqFunction_588(data, threadData);

  Flowsheet_eqFunction_589(data, threadData);

  Flowsheet_eqFunction_590(data, threadData);

  Flowsheet_eqFunction_591(data, threadData);

  Flowsheet_eqFunction_592(data, threadData);

  Flowsheet_eqFunction_593(data, threadData);

  Flowsheet_eqFunction_594(data, threadData);

  Flowsheet_eqFunction_595(data, threadData);

  Flowsheet_eqFunction_596(data, threadData);

  Flowsheet_eqFunction_597(data, threadData);

  Flowsheet_eqFunction_598(data, threadData);

  Flowsheet_eqFunction_599(data, threadData);

  Flowsheet_eqFunction_600(data, threadData);

  Flowsheet_eqFunction_601(data, threadData);

  Flowsheet_eqFunction_602(data, threadData);

  Flowsheet_eqFunction_603(data, threadData);

  Flowsheet_eqFunction_604(data, threadData);

  Flowsheet_eqFunction_605(data, threadData);

  Flowsheet_eqFunction_606(data, threadData);

  Flowsheet_eqFunction_607(data, threadData);

  Flowsheet_eqFunction_608(data, threadData);

  Flowsheet_eqFunction_609(data, threadData);

  Flowsheet_eqFunction_610(data, threadData);

  Flowsheet_eqFunction_611(data, threadData);

  Flowsheet_eqFunction_612(data, threadData);

  Flowsheet_eqFunction_690(data, threadData);

  Flowsheet_eqFunction_691(data, threadData);

  Flowsheet_eqFunction_692(data, threadData);

  Flowsheet_eqFunction_693(data, threadData);

  Flowsheet_eqFunction_694(data, threadData);

  Flowsheet_eqFunction_695(data, threadData);

  Flowsheet_eqFunction_696(data, threadData);

  Flowsheet_eqFunction_697(data, threadData);

  Flowsheet_eqFunction_698(data, threadData);

  Flowsheet_eqFunction_699(data, threadData);

  Flowsheet_eqFunction_700(data, threadData);

  Flowsheet_eqFunction_701(data, threadData);

  Flowsheet_eqFunction_702(data, threadData);

  Flowsheet_eqFunction_703(data, threadData);

  Flowsheet_eqFunction_704(data, threadData);

  Flowsheet_eqFunction_705(data, threadData);

  Flowsheet_eqFunction_706(data, threadData);

  Flowsheet_eqFunction_707(data, threadData);

  Flowsheet_eqFunction_708(data, threadData);

  Flowsheet_eqFunction_709(data, threadData);

  Flowsheet_eqFunction_710(data, threadData);

  Flowsheet_eqFunction_711(data, threadData);

  Flowsheet_eqFunction_712(data, threadData);

  Flowsheet_eqFunction_713(data, threadData);

  Flowsheet_eqFunction_714(data, threadData);

  Flowsheet_eqFunction_715(data, threadData);

  Flowsheet_eqFunction_716(data, threadData);

  Flowsheet_eqFunction_717(data, threadData);

  Flowsheet_eqFunction_829(data, threadData);

  Flowsheet_eqFunction_830(data, threadData);

  Flowsheet_eqFunction_831(data, threadData);

  Flowsheet_eqFunction_832(data, threadData);

  Flowsheet_eqFunction_833(data, threadData);

  Flowsheet_eqFunction_834(data, threadData);

  Flowsheet_eqFunction_835(data, threadData);

  Flowsheet_eqFunction_836(data, threadData);

  Flowsheet_eqFunction_837(data, threadData);

  Flowsheet_eqFunction_838(data, threadData);

  Flowsheet_eqFunction_839(data, threadData);

  Flowsheet_eqFunction_840(data, threadData);

  Flowsheet_eqFunction_841(data, threadData);

  Flowsheet_eqFunction_842(data, threadData);

  Flowsheet_eqFunction_843(data, threadData);

  Flowsheet_eqFunction_844(data, threadData);

  Flowsheet_eqFunction_845(data, threadData);

  Flowsheet_eqFunction_846(data, threadData);

  Flowsheet_eqFunction_847(data, threadData);

  Flowsheet_eqFunction_848(data, threadData);

  Flowsheet_eqFunction_849(data, threadData);

  Flowsheet_eqFunction_850(data, threadData);

  Flowsheet_eqFunction_851(data, threadData);

  Flowsheet_eqFunction_852(data, threadData);

  Flowsheet_eqFunction_853(data, threadData);

  Flowsheet_eqFunction_854(data, threadData);

  Flowsheet_eqFunction_855(data, threadData);

  Flowsheet_eqFunction_856(data, threadData);

  Flowsheet_eqFunction_857(data, threadData);

  Flowsheet_eqFunction_858(data, threadData);

  Flowsheet_eqFunction_859(data, threadData);

  Flowsheet_eqFunction_860(data, threadData);

  Flowsheet_eqFunction_861(data, threadData);

  Flowsheet_eqFunction_862(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int Flowsheet_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int Flowsheet_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  data->simulationInfo->callStatistics.functionODE++;
  
  Flowsheet_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

  
  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "Flowsheet_12jac.h"
#include "Flowsheet_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks Flowsheet_callback = {
   (int (*)(DATA *, threadData_t *, void *)) Flowsheet_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) Flowsheet_performQSSSimulation,
   Flowsheet_updateContinuousSystem,
   Flowsheet_callExternalObjectDestructors,
   Flowsheet_initialNonLinearSystem,
   Flowsheet_initialLinearSystem,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   Flowsheet_initializeStateSets,
   #else
   NULL,
   #endif
   Flowsheet_initializeDAEmodeData,
   Flowsheet_functionODE,
   Flowsheet_functionAlgebraics,
   Flowsheet_functionDAE,
   Flowsheet_functionLocalKnownVars,
   Flowsheet_input_function,
   Flowsheet_input_function_init,
   Flowsheet_input_function_updateStartValues,
   Flowsheet_output_function,
   Flowsheet_function_storeDelayed,
   Flowsheet_updateBoundVariableAttributes,
   Flowsheet_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   Flowsheet_functionInitialEquations_lambda0,
   Flowsheet_functionRemovedInitialEquations,
   Flowsheet_updateBoundParameters,
   Flowsheet_checkForAsserts,
   Flowsheet_function_ZeroCrossingsEquations,
   Flowsheet_function_ZeroCrossings,
   Flowsheet_function_updateRelations,
   Flowsheet_zeroCrossingDescription,
   Flowsheet_relationDescription,
   Flowsheet_function_initSample,
   Flowsheet_INDEX_JAC_A,
   Flowsheet_INDEX_JAC_B,
   Flowsheet_INDEX_JAC_C,
   Flowsheet_INDEX_JAC_D,
   Flowsheet_initialAnalyticJacobianA,
   Flowsheet_initialAnalyticJacobianB,
   Flowsheet_initialAnalyticJacobianC,
   Flowsheet_initialAnalyticJacobianD,
   Flowsheet_functionJacA_column,
   Flowsheet_functionJacB_column,
   Flowsheet_functionJacC_column,
   Flowsheet_functionJacD_column,
   Flowsheet_linear_model_frame,
   Flowsheet_linear_model_datarecovery_frame,
   Flowsheet_mayer,
   Flowsheet_lagrange,
   Flowsheet_pickUpBoundsForInputsInOptimization,
   Flowsheet_setInputData,
   Flowsheet_getTimeGrid,
   Flowsheet_symbolicInlineSystem,
   Flowsheet_function_initSynchronous,
   Flowsheet_function_updateSynchronous,
   Flowsheet_function_equationsSynchronous,
   Flowsheet_inputNames,
   NULL,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "C:/OpenModelica1.13.264bit/lib/omlibrary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,40,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Flowsheet"
#define _OMC_LIT_RESOURCE_1_dir_data "C:/OMChemSimGUI/SimulationFiles"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,9,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,31,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Modelica"
#define _OMC_LIT_RESOURCE_2_dir_data "C:/OpenModelica1.13.264bit/lib/omlibrary/Modelica 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,8,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,55,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "C:/OpenModelica1.13.264bit/lib/omlibrary/ModelicaServices 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,63,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "Simulator"
#define _OMC_LIT_RESOURCE_4_dir_data "C:/OMChemSimGUI/SimulationFiles"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,9,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,31,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void Flowsheet_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &Flowsheet_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "Flowsheet";
  data->modelData->modelFilePrefix = "Flowsheet";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/OMChemSimGUI/SimulationFiles";
  data->modelData->modelGUID = "{3f78788b-6c3c-4f3c-8242-1f2a137247ea}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "Flowsheet_init.c"
    ;
  static const char contents_info[] =
    #include "Flowsheet_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "Flowsheet_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "Flowsheet_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 638;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 910;
  data->modelData->nParametersInteger = 30;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 21;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 132;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 6;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 6;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.fileName = "Flowsheet_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 7;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1828;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 6;
  data->modelData->nNonLinearSystems = 6;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 4;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nClocks = 0;
  data->modelData->nSubClocks = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
int main(int argc, char**argv)
{
  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    Flowsheet_setupDataStruc(&data, threadData);
    res = _main_SimulationRuntime(argc, argv, &data, threadData);
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  EXIT(res);
  return res;
}

#ifdef __cplusplus
}
#endif


