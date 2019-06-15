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
equation index: 477
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,3] = 300.0 * MatStm1.compMolFrac[1,3]
*/
void Flowsheet_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  data->localData[0]->realVars[58] /* MatStm1.compMolFlo[1,3] variable */ = (300.0) * (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[1,3] variable */);
  TRACE_POP
}
/*
equation index: 478
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,3] = MatStm1.compMolFlo[1,3] * MatStm1.comp[3].MW
*/
void Flowsheet_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,3] variable */ = (data->localData[0]->realVars[58] /* MatStm1.compMolFlo[1,3] variable */) * (data->simulationInfo->realParameter[365]);
  TRACE_POP
}
/*
equation index: 479
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,2] = 300.0 * MatStm1.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->localData[0]->realVars[57] /* MatStm1.compMolFlo[1,2] variable */ = (300.0) * (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[1,2] variable */);
  TRACE_POP
}
/*
equation index: 480
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,2] = MatStm1.compMolFlo[1,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[57] /* MatStm1.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[364]);
  TRACE_POP
}
/*
equation index: 481
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,1] = 300.0 * MatStm1.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->localData[0]->realVars[56] /* MatStm1.compMolFlo[1,1] variable */ = (300.0) * (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */);
  TRACE_POP
}
/*
equation index: 482
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,1] = MatStm1.compMolFlo[1,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[56] /* MatStm1.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[363]);
  TRACE_POP
}
void Flowsheet_eqFunction_483(DATA*, threadData_t*);
void Flowsheet_eqFunction_484(DATA*, threadData_t*);
void Flowsheet_eqFunction_485(DATA*, threadData_t*);
void Flowsheet_eqFunction_486(DATA*, threadData_t*);
void Flowsheet_eqFunction_487(DATA*, threadData_t*);
void Flowsheet_eqFunction_488(DATA*, threadData_t*);
void Flowsheet_eqFunction_489(DATA*, threadData_t*);
void Flowsheet_eqFunction_490(DATA*, threadData_t*);
void Flowsheet_eqFunction_491(DATA*, threadData_t*);
void Flowsheet_eqFunction_498(DATA*, threadData_t*);
void Flowsheet_eqFunction_497(DATA*, threadData_t*);
void Flowsheet_eqFunction_496(DATA*, threadData_t*);
void Flowsheet_eqFunction_495(DATA*, threadData_t*);
void Flowsheet_eqFunction_494(DATA*, threadData_t*);
void Flowsheet_eqFunction_493(DATA*, threadData_t*);
void Flowsheet_eqFunction_492(DATA*, threadData_t*);
/*
equation index: 515
indexNonlinear: 4
type: NONLINEAR

vars: {MatStm2._totMolFlo[2], MatStm2._compMolFrac[3,1], MatStm2._compMolFrac[2,1], MatStm2._compMolFrac[3,3], MatStm2._compMolFrac[2,3], MatStm2._compMolFrac[3,2], MatStm2._compMolFrac[2,2]}
eqns: {483, 484, 485, 486, 487, 488, 489, 490, 491, 498, 497, 496, 495, 494, 493, 492}
*/
void Flowsheet_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 515 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[1] = data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[2] = data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[3] = data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[4] = data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[5] = data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[6] = data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,515};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 515 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[1];
  data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[2];
  data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[3];
  data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[4];
  data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[5];
  data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[6];
  TRACE_POP
}
/*
equation index: 516
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[3,2] = MatStm2.compMolFlo[3,2] * MatStm2.comp[2].MW
*/
void Flowsheet_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->localData[0]->realVars[146] /* MatStm2.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[182] /* MatStm2.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[601]);
  TRACE_POP
}
/*
equation index: 517
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[2,2] = MatStm2.compMolFlo[2,2] * MatStm2.comp[2].MW
*/
void Flowsheet_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->localData[0]->realVars[143] /* MatStm2.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[179] /* MatStm2.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[601]);
  TRACE_POP
}
/*
equation index: 518
type: ALGORITHM

  (MatStm2.compMolEntr[2,2], MatStm2.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[2].AS, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tb, MatStm2.comp[2].Tc, 300.0, 101325.0, MatStm2.compMolFrac[2,2], MatStm2.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[660], (modelica_real)data->simulationInfo->realParameter[661], (modelica_real)data->simulationInfo->realParameter[662], (modelica_real)data->simulationInfo->realParameter[663], (modelica_real)data->simulationInfo->realParameter[664], (modelica_real)data->simulationInfo->realParameter[665]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[510], (modelica_real)data->simulationInfo->realParameter[511], (modelica_real)data->simulationInfo->realParameter[512], (modelica_real)data->simulationInfo->realParameter[513], (modelica_real)data->simulationInfo->realParameter[514], (modelica_real)data->simulationInfo->realParameter[515]);
  data->localData[0]->realVars[170] /* MatStm2.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[478], tmp0, tmp1, data->simulationInfo->realParameter[622], data->simulationInfo->realParameter[625], 300.0, 101325.0, data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */, data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[173] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 519
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[3,3] = MatStm2.compMolFlo[3,3] * MatStm2.comp[3].MW
*/
void Flowsheet_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->localData[0]->realVars[147] /* MatStm2.compMasFlo[3,3] variable */ = (data->localData[0]->realVars[183] /* MatStm2.compMolFlo[3,3] variable */) * (data->simulationInfo->realParameter[602]);
  TRACE_POP
}
/*
equation index: 520
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[2,3] = MatStm2.compMolFlo[2,3] * MatStm2.comp[3].MW
*/
void Flowsheet_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  data->localData[0]->realVars[144] /* MatStm2.compMasFlo[2,3] variable */ = (data->localData[0]->realVars[180] /* MatStm2.compMolFlo[2,3] variable */) * (data->simulationInfo->realParameter[602]);
  TRACE_POP
}
/*
equation index: 521
type: ALGORITHM

  (MatStm2.compMolEntr[2,3], MatStm2.compMolEntr[3,3]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[3].AS, {MatStm2.comp[3].VapCp[1], MatStm2.comp[3].VapCp[2], MatStm2.comp[3].VapCp[3], MatStm2.comp[3].VapCp[4], MatStm2.comp[3].VapCp[5], MatStm2.comp[3].VapCp[6]}, {MatStm2.comp[3].HOV[1], MatStm2.comp[3].HOV[2], MatStm2.comp[3].HOV[3], MatStm2.comp[3].HOV[4], MatStm2.comp[3].HOV[5], MatStm2.comp[3].HOV[6]}, MatStm2.comp[3].Tb, MatStm2.comp[3].Tc, 300.0, 101325.0, MatStm2.compMolFrac[2,3], MatStm2.compMolFrac[3,3]);
*/
void Flowsheet_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[666], (modelica_real)data->simulationInfo->realParameter[667], (modelica_real)data->simulationInfo->realParameter[668], (modelica_real)data->simulationInfo->realParameter[669], (modelica_real)data->simulationInfo->realParameter[670], (modelica_real)data->simulationInfo->realParameter[671]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521]);
  data->localData[0]->realVars[171] /* MatStm2.compMolEntr[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[479], tmp2, tmp3, data->simulationInfo->realParameter[623], data->simulationInfo->realParameter[626], 300.0, 101325.0, data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */, data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */ ,&data->localData[0]->realVars[174] /* MatStm2.compMolEntr[3,3] variable */);
  TRACE_POP
}
/*
equation index: 522
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolSpHeat[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolSpHeat[2,2] + MatStm2.compMolFrac[2,3] * MatStm2.compMolSpHeat[2,3]
*/
void Flowsheet_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->localData[0]->realVars[223] /* MatStm2.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[196] /* MatStm2.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[197] /* MatStm2.compMolSpHeat[2,2] variable */) + (data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[198] /* MatStm2.compMolSpHeat[2,3] variable */);
  TRACE_POP
}
/*
equation index: 523
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolEnth[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolEnth[2,2] + MatStm2.compMolFrac[2,3] * MatStm2.compMolEnth[2,3]
*/
void Flowsheet_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  data->localData[0]->realVars[217] /* MatStm2.phasMolEnth[2] variable */ = (data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[160] /* MatStm2.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[161] /* MatStm2.compMolEnth[2,2] variable */) + (data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[162] /* MatStm2.compMolEnth[2,3] variable */);
  TRACE_POP
}
/*
equation index: 524
type: ALGORITHM

  (MatStm2.compMolEntr[2,1], MatStm2.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[1].AS, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tb, MatStm2.comp[1].Tc, 300.0, 101325.0, MatStm2.compMolFrac[2,1], MatStm2.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  real_array tmp4;
  real_array tmp5;
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[654], (modelica_real)data->simulationInfo->realParameter[655], (modelica_real)data->simulationInfo->realParameter[656], (modelica_real)data->simulationInfo->realParameter[657], (modelica_real)data->simulationInfo->realParameter[658], (modelica_real)data->simulationInfo->realParameter[659]);
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[504], (modelica_real)data->simulationInfo->realParameter[505], (modelica_real)data->simulationInfo->realParameter[506], (modelica_real)data->simulationInfo->realParameter[507], (modelica_real)data->simulationInfo->realParameter[508], (modelica_real)data->simulationInfo->realParameter[509]);
  data->localData[0]->realVars[169] /* MatStm2.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[477], tmp4, tmp5, data->simulationInfo->realParameter[621], data->simulationInfo->realParameter[624], 300.0, 101325.0, data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */, data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[172] /* MatStm2.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 525
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolEntr[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolEntr[2,2] + MatStm2.compMolFrac[2,3] * MatStm2.compMolEntr[2,3]
*/
void Flowsheet_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->localData[0]->realVars[220] /* MatStm2.phasMolEntr[2] variable */ = (data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[169] /* MatStm2.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[170] /* MatStm2.compMolEntr[2,2] variable */) + (data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[171] /* MatStm2.compMolEntr[2,3] variable */);
  TRACE_POP
}
/*
equation index: 526
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolSpHeat[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolSpHeat[3,2] + MatStm2.compMolFrac[3,3] * MatStm2.compMolSpHeat[3,3]
*/
void Flowsheet_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->localData[0]->realVars[224] /* MatStm2.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[199] /* MatStm2.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[200] /* MatStm2.compMolSpHeat[3,2] variable */) + (data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[201] /* MatStm2.compMolSpHeat[3,3] variable */);
  TRACE_POP
}
/*
equation index: 527
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolEnth[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolEnth[3,2] + MatStm2.compMolFrac[3,3] * MatStm2.compMolEnth[3,3]
*/
void Flowsheet_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->localData[0]->realVars[218] /* MatStm2.phasMolEnth[3] variable */ = (data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[163] /* MatStm2.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[164] /* MatStm2.compMolEnth[3,2] variable */) + (data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[165] /* MatStm2.compMolEnth[3,3] variable */);
  TRACE_POP
}
/*
equation index: 528
type: ALGORITHM

  MatStm2.MW[3] := $START.MatStm2.MW[3];
  MatStm2.MW[2] := $START.MatStm2.MW[2];
  MatStm2.MW[1] := $START.MatStm2.MW[1];
  for i in 1:3 loop
    MatStm2.MW[:] := {MatStm2.MW[1] + MatStm2.compMolFrac[1,i] * MatStm2.comp[i].MW, MatStm2.MW[2] + MatStm2.compMolFrac[2,i] * MatStm2.comp[i].MW, MatStm2.MW[3] + MatStm2.compMolFrac[3,i] * MatStm2.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  real_array tmp6;
  index_spec_t tmp7;
  real_array tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  data->localData[0]->realVars[131] /* MatStm2.MW[3] variable */ = data->modelData->realVarsData[131].attribute /* MatStm2.MW[3] variable */.start;

  data->localData[0]->realVars[130] /* MatStm2.MW[2] variable */ = data->modelData->realVarsData[130].attribute /* MatStm2.MW[2] variable */.start;

  data->localData[0]->realVars[129] /* MatStm2.MW[1] variable */ = data->modelData->realVarsData[129].attribute /* MatStm2.MW[1] variable */.start;

  tmp9 = ((modelica_integer) 1); tmp10 = 1; tmp11 = ((modelica_integer) 3);
  if(!(((tmp10 > 0) && (tmp9 > tmp11)) || ((tmp10 < 0) && (tmp9 < tmp11))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp9, tmp11); $Pi += tmp10)
    {
      array_alloc_scalar_real_array(&tmp6, 3, (modelica_real)data->localData[0]->realVars[129] /* MatStm2.MW[1] variable */ + ((&data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[600])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[130] /* MatStm2.MW[2] variable */ + ((&data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[600])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[131] /* MatStm2.MW[3] variable */ + ((&data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[600])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]));
      create_index_spec(&tmp7, 1, (1), (int*)0, 'W');
      real_array_create(&tmp8, (modelica_real*)&data->localData[0]->realVars[129] /* MatStm2.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp6, &tmp8, &tmp7);
    }
  }
  TRACE_POP
}
/*
equation index: 529
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[3] = MatStm2.totMolFlo[3] * MatStm2.MW[3]
*/
void Flowsheet_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */ = (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */) * (data->localData[0]->realVars[131] /* MatStm2.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 530
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[1] = 100.0 * MatStm2.MW[1]
*/
void Flowsheet_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */ = (100.0) * (data->localData[0]->realVars[129] /* MatStm2.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 531
type: SIMPLE_ASSIGN
MatStm2._vapPhasMasFrac = MatStm2.totMasFlo[3] / MatStm2.totMasFlo[1]
*/
void Flowsheet_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  data->localData[0]->realVars[240] /* MatStm2.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */,data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 532
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolEntr[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolEntr[3,2] + MatStm2.compMolFrac[3,3] * MatStm2.compMolEntr[3,3]
*/
void Flowsheet_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->localData[0]->realVars[221] /* MatStm2.phasMolEntr[3] variable */ = (data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[172] /* MatStm2.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[173] /* MatStm2.compMolEntr[3,2] variable */) + (data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[174] /* MatStm2.compMolEntr[3,3] variable */);
  TRACE_POP
}
/*
equation index: 533
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[3,1] = MatStm2.compMolFlo[3,1] * MatStm2.comp[1].MW
*/
void Flowsheet_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->localData[0]->realVars[145] /* MatStm2.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[181] /* MatStm2.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[600]);
  TRACE_POP
}
/*
equation index: 534
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[2,1] = MatStm2.compMolFlo[2,1] * MatStm2.comp[1].MW
*/
void Flowsheet_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->localData[0]->realVars[142] /* MatStm2.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[178] /* MatStm2.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[600]);
  TRACE_POP
}
/*
equation index: 535
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[2] = MatStm2.totMolFlo[2] * MatStm2.MW[2]
*/
void Flowsheet_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */ = (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */) * (data->localData[0]->realVars[130] /* MatStm2.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 536
type: SIMPLE_ASSIGN
MatStm2._liqPhasMasFrac = MatStm2.totMasFlo[2] / MatStm2.totMasFlo[1]
*/
void Flowsheet_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->localData[0]->realVars[211] /* MatStm2.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */,data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 537
type: LINEAR

<var>MatStm2._compMasFrac[3,2]</var>
<var>MatStm2._compMasFrac[1,1]</var>
<var>MatStm2._compMasFrac[1,2]</var>
<var>MatStm2._compMasFrac[2,2]</var>
<var>MatStm2._compMasFrac[3,3]</var>
<var>MatStm2._compMasFrac[3,1]</var>
<var>MatStm2._compMasFrac[2,1]</var>
<var>MatStm2._compMasFrac[1,3]</var>
<var>MatStm2._compMasFrac[2,3]</var>
<row>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,2] else MatStm2.compMasFlo[1,2]</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,2] else MatStm2.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,3] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,2] else MatStm2.compMasFlo[1,3]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="0" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="8">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="7">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="1" col="8">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="5">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="6">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="7">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="5">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="6">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="5">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 0.0)</residual>
  </cell><cell row="4" col="8">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="5" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="5" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="5" col="6">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="6" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101325.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="6" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="7" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101325.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="7" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else -0.0)</residual>
  </cell><cell row="8" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="8" col="7">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101325.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  /* Linear equation system */
  int retValue;
  double aux_x[9] = { data->localData[1]->realVars[155] /* MatStm2.compMasFrac[3,2] variable */,data->localData[1]->realVars[148] /* MatStm2.compMasFrac[1,1] variable */,data->localData[1]->realVars[149] /* MatStm2.compMasFrac[1,2] variable */,data->localData[1]->realVars[152] /* MatStm2.compMasFrac[2,2] variable */,data->localData[1]->realVars[156] /* MatStm2.compMasFrac[3,3] variable */,data->localData[1]->realVars[154] /* MatStm2.compMasFrac[3,1] variable */,data->localData[1]->realVars[151] /* MatStm2.compMasFrac[2,1] variable */,data->localData[1]->realVars[150] /* MatStm2.compMasFrac[1,3] variable */,data->localData[1]->realVars[153] /* MatStm2.compMasFrac[2,3] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 537 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 4, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,537};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 537 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[155] /* MatStm2.compMasFrac[3,2] variable */ = aux_x[0];
  data->localData[0]->realVars[148] /* MatStm2.compMasFrac[1,1] variable */ = aux_x[1];
  data->localData[0]->realVars[149] /* MatStm2.compMasFrac[1,2] variable */ = aux_x[2];
  data->localData[0]->realVars[152] /* MatStm2.compMasFrac[2,2] variable */ = aux_x[3];
  data->localData[0]->realVars[156] /* MatStm2.compMasFrac[3,3] variable */ = aux_x[4];
  data->localData[0]->realVars[154] /* MatStm2.compMasFrac[3,1] variable */ = aux_x[5];
  data->localData[0]->realVars[151] /* MatStm2.compMasFrac[2,1] variable */ = aux_x[6];
  data->localData[0]->realVars[150] /* MatStm2.compMasFrac[1,3] variable */ = aux_x[7];
  data->localData[0]->realVars[153] /* MatStm2.compMasFrac[2,3] variable */ = aux_x[8];
  TRACE_POP
}
/*
equation index: 538
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolSpHeat[2] + Mixer1.inVapPhasMolFrac[3] * MatStm2.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  data->localData[0]->realVars[222] /* MatStm2.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[223] /* MatStm2.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[482] /* Mixer1.inVapPhasMolFrac[3] variable */) * (data->localData[0]->realVars[224] /* MatStm2.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 539
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  data->localData[0]->realVars[193] /* MatStm2.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[222] /* MatStm2.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 540
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[1,2] = MatStm2.compMolFrac[1,2] * MatStm2.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  data->localData[0]->realVars[194] /* MatStm2.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[185] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[222] /* MatStm2.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 541
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[1,3] = MatStm2.compMolFrac[1,3] * MatStm2.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  data->localData[0]->realVars[195] /* MatStm2.compMolSpHeat[1,3] variable */ = (data->localData[0]->realVars[186] /* MatStm2.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[222] /* MatStm2.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 542
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolEnth[2] + Mixer1.inVapPhasMolFrac[3] * MatStm2.phasMolEnth[3]
*/
void Flowsheet_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  data->localData[0]->realVars[216] /* MatStm2.phasMolEnth[1] variable */ = (data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[217] /* MatStm2.phasMolEnth[2] variable */) + (data->localData[0]->realVars[482] /* Mixer1.inVapPhasMolFrac[3] variable */) * (data->localData[0]->realVars[218] /* MatStm2.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 543
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolEnth[1]
*/
void Flowsheet_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  data->localData[0]->realVars[157] /* MatStm2.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[216] /* MatStm2.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 544
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[1,2] = MatStm2.compMolFrac[1,2] * MatStm2.phasMolEnth[1]
*/
void Flowsheet_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  data->localData[0]->realVars[158] /* MatStm2.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[185] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[216] /* MatStm2.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 545
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[1,3] = MatStm2.compMolFrac[1,3] * MatStm2.phasMolEnth[1]
*/
void Flowsheet_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  data->localData[0]->realVars[159] /* MatStm2.compMolEnth[1,3] variable */ = (data->localData[0]->realVars[186] /* MatStm2.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[216] /* MatStm2.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 546
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolEntr[2] + Mixer1.inVapPhasMolFrac[3] * MatStm2.phasMolEntr[3]
*/
void Flowsheet_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  data->localData[0]->realVars[219] /* MatStm2.phasMolEntr[1] variable */ = (data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[220] /* MatStm2.phasMolEntr[2] variable */) + (data->localData[0]->realVars[482] /* Mixer1.inVapPhasMolFrac[3] variable */) * (data->localData[0]->realVars[221] /* MatStm2.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 547
type: SIMPLE_ASSIGN
MatStm2._compMolEntr[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolEntr[1]
*/
void Flowsheet_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  data->localData[0]->realVars[166] /* MatStm2.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[219] /* MatStm2.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 548
type: SIMPLE_ASSIGN
MatStm2._compMolEntr[1,2] = MatStm2.compMolFrac[1,2] * MatStm2.phasMolEntr[1]
*/
void Flowsheet_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  data->localData[0]->realVars[167] /* MatStm2.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[185] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[219] /* MatStm2.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 549
type: SIMPLE_ASSIGN
MatStm2._compMolEntr[1,3] = MatStm2.compMolFrac[1,3] * MatStm2.phasMolEntr[1]
*/
void Flowsheet_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  data->localData[0]->realVars[168] /* MatStm2.compMolEntr[1,3] variable */ = (data->localData[0]->realVars[186] /* MatStm2.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[219] /* MatStm2.phasMolEntr[1] variable */);
  TRACE_POP
}
void Flowsheet_eqFunction_550(DATA*, threadData_t*);
void Flowsheet_eqFunction_551(DATA*, threadData_t*);
void Flowsheet_eqFunction_552(DATA*, threadData_t*);
void Flowsheet_eqFunction_553(DATA*, threadData_t*);
void Flowsheet_eqFunction_554(DATA*, threadData_t*);
void Flowsheet_eqFunction_555(DATA*, threadData_t*);
void Flowsheet_eqFunction_556(DATA*, threadData_t*);
void Flowsheet_eqFunction_557(DATA*, threadData_t*);
void Flowsheet_eqFunction_558(DATA*, threadData_t*);
void Flowsheet_eqFunction_565(DATA*, threadData_t*);
void Flowsheet_eqFunction_564(DATA*, threadData_t*);
void Flowsheet_eqFunction_563(DATA*, threadData_t*);
void Flowsheet_eqFunction_562(DATA*, threadData_t*);
void Flowsheet_eqFunction_561(DATA*, threadData_t*);
void Flowsheet_eqFunction_560(DATA*, threadData_t*);
void Flowsheet_eqFunction_559(DATA*, threadData_t*);
/*
equation index: 582
indexNonlinear: 5
type: NONLINEAR

vars: {MatStm3._totMolFlo[2], MatStm3._compMolFrac[2,2], MatStm3._compMolFrac[2,1], MatStm3._compMolFrac[3,1], MatStm3._compMolFrac[3,2], MatStm3._compMolFrac[2,3], MatStm3._compMolFrac[3,3]}
eqns: {550, 551, 552, 553, 554, 555, 556, 557, 558, 565, 564, 563, 562, 561, 560, 559}
*/
void Flowsheet_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 582 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[1] = data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[2] = data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[3] = data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[4] = data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[5] = data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[6] = data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */;
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,582};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 582 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[1];
  data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[2];
  data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[3];
  data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[4];
  data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[5];
  data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[6];
  TRACE_POP
}
/*
equation index: 583
type: ALGORITHM

  (MatStm3.compMolEntr[2,3], MatStm3.compMolEntr[3,3]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[3].AS, {MatStm3.comp[3].VapCp[1], MatStm3.comp[3].VapCp[2], MatStm3.comp[3].VapCp[3], MatStm3.comp[3].VapCp[4], MatStm3.comp[3].VapCp[5], MatStm3.comp[3].VapCp[6]}, {MatStm3.comp[3].HOV[1], MatStm3.comp[3].HOV[2], MatStm3.comp[3].HOV[3], MatStm3.comp[3].HOV[4], MatStm3.comp[3].HOV[5], MatStm3.comp[3].HOV[6]}, MatStm3.comp[3].Tb, MatStm3.comp[3].Tc, 300.0, 101325.0, MatStm3.compMolFrac[2,3], MatStm3.compMolFrac[3,3]);
*/
void Flowsheet_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[903], (modelica_real)data->simulationInfo->realParameter[904], (modelica_real)data->simulationInfo->realParameter[905], (modelica_real)data->simulationInfo->realParameter[906], (modelica_real)data->simulationInfo->realParameter[907], (modelica_real)data->simulationInfo->realParameter[908]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[753], (modelica_real)data->simulationInfo->realParameter[754], (modelica_real)data->simulationInfo->realParameter[755], (modelica_real)data->simulationInfo->realParameter[756], (modelica_real)data->simulationInfo->realParameter[757], (modelica_real)data->simulationInfo->realParameter[758]);
  data->localData[0]->realVars[289] /* MatStm3.compMolEntr[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[716], tmp0, tmp1, data->simulationInfo->realParameter[860], data->simulationInfo->realParameter[863], 300.0, 101325.0, data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */, data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */ ,&data->localData[0]->realVars[292] /* MatStm3.compMolEntr[3,3] variable */);
  TRACE_POP
}
/*
equation index: 584
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[2,3] = MatStm3.compMolFlo[2,3] * MatStm3.comp[3].MW
*/
void Flowsheet_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  data->localData[0]->realVars[262] /* MatStm3.compMasFlo[2,3] variable */ = (data->localData[0]->realVars[298] /* MatStm3.compMolFlo[2,3] variable */) * (data->simulationInfo->realParameter[839]);
  TRACE_POP
}
/*
equation index: 585
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[3,3] = MatStm3.compMolFlo[3,3] * MatStm3.comp[3].MW
*/
void Flowsheet_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  data->localData[0]->realVars[265] /* MatStm3.compMasFlo[3,3] variable */ = (data->localData[0]->realVars[301] /* MatStm3.compMolFlo[3,3] variable */) * (data->simulationInfo->realParameter[839]);
  TRACE_POP
}
/*
equation index: 586
type: SIMPLE_ASSIGN
MatStm3._phasMolSpHeat[3] = MatStm3.compMolFrac[3,1] * MatStm3.compMolSpHeat[3,1] + MatStm3.compMolFrac[3,2] * MatStm3.compMolSpHeat[3,2] + MatStm3.compMolFrac[3,3] * MatStm3.compMolSpHeat[3,3]
*/
void Flowsheet_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  data->localData[0]->realVars[342] /* MatStm3.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[317] /* MatStm3.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[318] /* MatStm3.compMolSpHeat[3,2] variable */) + (data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[319] /* MatStm3.compMolSpHeat[3,3] variable */);
  TRACE_POP
}
/*
equation index: 587
type: SIMPLE_ASSIGN
MatStm3._phasMolEnth[3] = MatStm3.compMolFrac[3,1] * MatStm3.compMolEnth[3,1] + MatStm3.compMolFrac[3,2] * MatStm3.compMolEnth[3,2] + MatStm3.compMolFrac[3,3] * MatStm3.compMolEnth[3,3]
*/
void Flowsheet_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  data->localData[0]->realVars[336] /* MatStm3.phasMolEnth[3] variable */ = (data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[281] /* MatStm3.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[282] /* MatStm3.compMolEnth[3,2] variable */) + (data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[283] /* MatStm3.compMolEnth[3,3] variable */);
  TRACE_POP
}
/*
equation index: 588
type: ALGORITHM

  (MatStm3.compMolEntr[2,1], MatStm3.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[1].AS, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tb, MatStm3.comp[1].Tc, 300.0, 101325.0, MatStm3.compMolFrac[2,1], MatStm3.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[891], (modelica_real)data->simulationInfo->realParameter[892], (modelica_real)data->simulationInfo->realParameter[893], (modelica_real)data->simulationInfo->realParameter[894], (modelica_real)data->simulationInfo->realParameter[895], (modelica_real)data->simulationInfo->realParameter[896]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[741], (modelica_real)data->simulationInfo->realParameter[742], (modelica_real)data->simulationInfo->realParameter[743], (modelica_real)data->simulationInfo->realParameter[744], (modelica_real)data->simulationInfo->realParameter[745], (modelica_real)data->simulationInfo->realParameter[746]);
  data->localData[0]->realVars[287] /* MatStm3.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[714], tmp2, tmp3, data->simulationInfo->realParameter[858], data->simulationInfo->realParameter[861], 300.0, 101325.0, data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */, data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[290] /* MatStm3.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 589
type: SIMPLE_ASSIGN
MatStm3._phasMolSpHeat[2] = MatStm3.compMolFrac[2,1] * MatStm3.compMolSpHeat[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.compMolSpHeat[2,2] + MatStm3.compMolFrac[2,3] * MatStm3.compMolSpHeat[2,3]
*/
void Flowsheet_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  data->localData[0]->realVars[341] /* MatStm3.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[314] /* MatStm3.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[315] /* MatStm3.compMolSpHeat[2,2] variable */) + (data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[316] /* MatStm3.compMolSpHeat[2,3] variable */);
  TRACE_POP
}
/*
equation index: 590
type: SIMPLE_ASSIGN
MatStm3._phasMolEnth[2] = MatStm3.compMolFrac[2,1] * MatStm3.compMolEnth[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.compMolEnth[2,2] + MatStm3.compMolFrac[2,3] * MatStm3.compMolEnth[2,3]
*/
void Flowsheet_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  data->localData[0]->realVars[335] /* MatStm3.phasMolEnth[2] variable */ = (data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[278] /* MatStm3.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[279] /* MatStm3.compMolEnth[2,2] variable */) + (data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[280] /* MatStm3.compMolEnth[2,3] variable */);
  TRACE_POP
}
/*
equation index: 591
type: ALGORITHM

  MatStm3.MW[3] := $START.MatStm3.MW[3];
  MatStm3.MW[2] := $START.MatStm3.MW[2];
  MatStm3.MW[1] := $START.MatStm3.MW[1];
  for i in 1:3 loop
    MatStm3.MW[:] := {MatStm3.MW[1] + MatStm3.compMolFrac[1,i] * MatStm3.comp[i].MW, MatStm3.MW[2] + MatStm3.compMolFrac[2,i] * MatStm3.comp[i].MW, MatStm3.MW[3] + MatStm3.compMolFrac[3,i] * MatStm3.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[249] /* MatStm3.MW[3] variable */ = data->modelData->realVarsData[249].attribute /* MatStm3.MW[3] variable */.start;

  data->localData[0]->realVars[248] /* MatStm3.MW[2] variable */ = data->modelData->realVarsData[248].attribute /* MatStm3.MW[2] variable */.start;

  data->localData[0]->realVars[247] /* MatStm3.MW[1] variable */ = data->modelData->realVarsData[247].attribute /* MatStm3.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 3);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[247] /* MatStm3.MW[1] variable */ + ((&data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[837])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[248] /* MatStm3.MW[2] variable */ + ((&data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[837])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[249] /* MatStm3.MW[3] variable */ + ((&data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[837])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[247] /* MatStm3.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
/*
equation index: 592
type: SIMPLE_ASSIGN
MatStm3._totMasFlo[1] = 100.0 * MatStm3.MW[1]
*/
void Flowsheet_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */ = (100.0) * (data->localData[0]->realVars[247] /* MatStm3.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 593
type: ALGORITHM

  (MatStm3.compMolEntr[2,2], MatStm3.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[2].AS, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tb, MatStm3.comp[2].Tc, 300.0, 101325.0, MatStm3.compMolFrac[2,2], MatStm3.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[897], (modelica_real)data->simulationInfo->realParameter[898], (modelica_real)data->simulationInfo->realParameter[899], (modelica_real)data->simulationInfo->realParameter[900], (modelica_real)data->simulationInfo->realParameter[901], (modelica_real)data->simulationInfo->realParameter[902]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[747], (modelica_real)data->simulationInfo->realParameter[748], (modelica_real)data->simulationInfo->realParameter[749], (modelica_real)data->simulationInfo->realParameter[750], (modelica_real)data->simulationInfo->realParameter[751], (modelica_real)data->simulationInfo->realParameter[752]);
  data->localData[0]->realVars[288] /* MatStm3.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[715], tmp10, tmp11, data->simulationInfo->realParameter[859], data->simulationInfo->realParameter[862], 300.0, 101325.0, data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */, data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[291] /* MatStm3.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 594
type: SIMPLE_ASSIGN
MatStm3._phasMolEntr[3] = MatStm3.compMolFrac[3,1] * MatStm3.compMolEntr[3,1] + MatStm3.compMolFrac[3,2] * MatStm3.compMolEntr[3,2] + MatStm3.compMolFrac[3,3] * MatStm3.compMolEntr[3,3]
*/
void Flowsheet_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  data->localData[0]->realVars[339] /* MatStm3.phasMolEntr[3] variable */ = (data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[290] /* MatStm3.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[291] /* MatStm3.compMolEntr[3,2] variable */) + (data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[292] /* MatStm3.compMolEntr[3,3] variable */);
  TRACE_POP
}
/*
equation index: 595
type: SIMPLE_ASSIGN
MatStm3._phasMolEntr[2] = MatStm3.compMolFrac[2,1] * MatStm3.compMolEntr[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.compMolEntr[2,2] + MatStm3.compMolFrac[2,3] * MatStm3.compMolEntr[2,3]
*/
void Flowsheet_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  data->localData[0]->realVars[338] /* MatStm3.phasMolEntr[2] variable */ = (data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[287] /* MatStm3.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[288] /* MatStm3.compMolEntr[2,2] variable */) + (data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[289] /* MatStm3.compMolEntr[2,3] variable */);
  TRACE_POP
}
/*
equation index: 596
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[2,2] = MatStm3.compMolFlo[2,2] * MatStm3.comp[2].MW
*/
void Flowsheet_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  data->localData[0]->realVars[261] /* MatStm3.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[297] /* MatStm3.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[838]);
  TRACE_POP
}
/*
equation index: 597
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[3,2] = MatStm3.compMolFlo[3,2] * MatStm3.comp[2].MW
*/
void Flowsheet_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  data->localData[0]->realVars[264] /* MatStm3.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[300] /* MatStm3.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[838]);
  TRACE_POP
}
/*
equation index: 598
type: SIMPLE_ASSIGN
MatStm3._totMasFlo[3] = MatStm3.totMolFlo[3] * MatStm3.MW[3]
*/
void Flowsheet_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */ = (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */) * (data->localData[0]->realVars[249] /* MatStm3.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 599
type: SIMPLE_ASSIGN
MatStm3._vapPhasMasFrac = MatStm3.totMasFlo[3] / MatStm3.totMasFlo[1]
*/
void Flowsheet_eqFunction_599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,599};
  data->localData[0]->realVars[358] /* MatStm3.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */,data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */,"MatStm3.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 600
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[3,1] = MatStm3.compMolFlo[3,1] * MatStm3.comp[1].MW
*/
void Flowsheet_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  data->localData[0]->realVars[263] /* MatStm3.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[299] /* MatStm3.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[837]);
  TRACE_POP
}
/*
equation index: 601
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[2,1] = MatStm3.compMolFlo[2,1] * MatStm3.comp[1].MW
*/
void Flowsheet_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  data->localData[0]->realVars[260] /* MatStm3.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[296] /* MatStm3.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[837]);
  TRACE_POP
}
/*
equation index: 602
type: SIMPLE_ASSIGN
MatStm3._totMasFlo[2] = MatStm3.totMolFlo[2] * MatStm3.MW[2]
*/
void Flowsheet_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */ = (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */) * (data->localData[0]->realVars[248] /* MatStm3.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 603
type: SIMPLE_ASSIGN
MatStm3._liqPhasMasFrac = MatStm3.totMasFlo[2] / MatStm3.totMasFlo[1]
*/
void Flowsheet_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  data->localData[0]->realVars[329] /* MatStm3.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */,data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */,"MatStm3.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 604
type: LINEAR

<var>MatStm3._compMasFrac[2,2]</var>
<var>MatStm3._compMasFrac[1,2]</var>
<var>MatStm3._compMasFrac[1,1]</var>
<var>MatStm3._compMasFrac[2,1]</var>
<var>MatStm3._compMasFrac[3,2]</var>
<var>MatStm3._compMasFrac[1,3]</var>
<var>MatStm3._compMasFrac[3,1]</var>
<var>MatStm3._compMasFrac[3,3]</var>
<var>MatStm3._compMasFrac[2,3]</var>
<row>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,3] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,2] else MatStm3.compMasFlo[1,3]</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,2] else MatStm3.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,2] else MatStm3.compMasFlo[1,2]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -1.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="0" col="8">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="5">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -1.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="1" col="7">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="8">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="6">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else 0.0)</residual>
  </cell><cell row="2" col="7">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="8">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -1.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="5">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="6">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="5">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101325.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell><cell row="5" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="5" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="5" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="6" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="6" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="6" col="6">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="7" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else -0.0)</residual>
  </cell><cell row="7" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101325.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell><cell row="8" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="8" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101325.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  /* Linear equation system */
  int retValue;
  double aux_x[9] = { data->localData[1]->realVars[270] /* MatStm3.compMasFrac[2,2] variable */,data->localData[1]->realVars[267] /* MatStm3.compMasFrac[1,2] variable */,data->localData[1]->realVars[266] /* MatStm3.compMasFrac[1,1] variable */,data->localData[1]->realVars[269] /* MatStm3.compMasFrac[2,1] variable */,data->localData[1]->realVars[273] /* MatStm3.compMasFrac[3,2] variable */,data->localData[1]->realVars[268] /* MatStm3.compMasFrac[1,3] variable */,data->localData[1]->realVars[272] /* MatStm3.compMasFrac[3,1] variable */,data->localData[1]->realVars[274] /* MatStm3.compMasFrac[3,3] variable */,data->localData[1]->realVars[271] /* MatStm3.compMasFrac[2,3] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 604 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 5, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,604};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 604 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[270] /* MatStm3.compMasFrac[2,2] variable */ = aux_x[0];
  data->localData[0]->realVars[267] /* MatStm3.compMasFrac[1,2] variable */ = aux_x[1];
  data->localData[0]->realVars[266] /* MatStm3.compMasFrac[1,1] variable */ = aux_x[2];
  data->localData[0]->realVars[269] /* MatStm3.compMasFrac[2,1] variable */ = aux_x[3];
  data->localData[0]->realVars[273] /* MatStm3.compMasFrac[3,2] variable */ = aux_x[4];
  data->localData[0]->realVars[268] /* MatStm3.compMasFrac[1,3] variable */ = aux_x[5];
  data->localData[0]->realVars[272] /* MatStm3.compMasFrac[3,1] variable */ = aux_x[6];
  data->localData[0]->realVars[274] /* MatStm3.compMasFrac[3,3] variable */ = aux_x[7];
  data->localData[0]->realVars[271] /* MatStm3.compMasFrac[2,3] variable */ = aux_x[8];
  TRACE_POP
}
/*
equation index: 605
type: SIMPLE_ASSIGN
MatStm3._phasMolSpHeat[1] = MatStm3.liqPhasMolFrac * MatStm3.phasMolSpHeat[2] + Mixer1.inVapPhasMolFrac[2] * MatStm3.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  data->localData[0]->realVars[340] /* MatStm3.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */) * (data->localData[0]->realVars[341] /* MatStm3.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[481] /* Mixer1.inVapPhasMolFrac[2] variable */) * (data->localData[0]->realVars[342] /* MatStm3.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 606
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[1,1] = MatStm3.compMolFrac[1,1] * MatStm3.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  data->localData[0]->realVars[311] /* MatStm3.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[340] /* MatStm3.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 607
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[1,2] = MatStm3.compMolFrac[1,2] * MatStm3.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  data->localData[0]->realVars[312] /* MatStm3.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[303] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[340] /* MatStm3.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 608
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[1,3] = MatStm3.compMolFrac[1,3] * MatStm3.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  data->localData[0]->realVars[313] /* MatStm3.compMolSpHeat[1,3] variable */ = (data->localData[0]->realVars[304] /* MatStm3.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[340] /* MatStm3.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 609
type: SIMPLE_ASSIGN
MatStm3._phasMolEnth[1] = MatStm3.liqPhasMolFrac * MatStm3.phasMolEnth[2] + Mixer1.inVapPhasMolFrac[2] * MatStm3.phasMolEnth[3]
*/
void Flowsheet_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  data->localData[0]->realVars[334] /* MatStm3.phasMolEnth[1] variable */ = (data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */) * (data->localData[0]->realVars[335] /* MatStm3.phasMolEnth[2] variable */) + (data->localData[0]->realVars[481] /* Mixer1.inVapPhasMolFrac[2] variable */) * (data->localData[0]->realVars[336] /* MatStm3.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 610
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[1,1] = MatStm3.compMolFrac[1,1] * MatStm3.phasMolEnth[1]
*/
void Flowsheet_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  data->localData[0]->realVars[275] /* MatStm3.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[334] /* MatStm3.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 611
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[1,2] = MatStm3.compMolFrac[1,2] * MatStm3.phasMolEnth[1]
*/
void Flowsheet_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  data->localData[0]->realVars[276] /* MatStm3.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[303] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[334] /* MatStm3.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 612
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[1,3] = MatStm3.compMolFrac[1,3] * MatStm3.phasMolEnth[1]
*/
void Flowsheet_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  data->localData[0]->realVars[277] /* MatStm3.compMolEnth[1,3] variable */ = (data->localData[0]->realVars[304] /* MatStm3.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[334] /* MatStm3.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 613
type: SIMPLE_ASSIGN
MatStm3._phasMolEntr[1] = MatStm3.liqPhasMolFrac * MatStm3.phasMolEntr[2] + Mixer1.inVapPhasMolFrac[2] * MatStm3.phasMolEntr[3]
*/
void Flowsheet_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  data->localData[0]->realVars[337] /* MatStm3.phasMolEntr[1] variable */ = (data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */) * (data->localData[0]->realVars[338] /* MatStm3.phasMolEntr[2] variable */) + (data->localData[0]->realVars[481] /* Mixer1.inVapPhasMolFrac[2] variable */) * (data->localData[0]->realVars[339] /* MatStm3.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 614
type: SIMPLE_ASSIGN
MatStm3._compMolEntr[1,1] = MatStm3.compMolFrac[1,1] * MatStm3.phasMolEntr[1]
*/
void Flowsheet_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  data->localData[0]->realVars[284] /* MatStm3.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[337] /* MatStm3.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 615
type: SIMPLE_ASSIGN
MatStm3._compMolEntr[1,2] = MatStm3.compMolFrac[1,2] * MatStm3.phasMolEntr[1]
*/
void Flowsheet_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  data->localData[0]->realVars[285] /* MatStm3.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[303] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[337] /* MatStm3.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 616
type: SIMPLE_ASSIGN
MatStm3._compMolEntr[1,3] = MatStm3.compMolFrac[1,3] * MatStm3.phasMolEntr[1]
*/
void Flowsheet_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  data->localData[0]->realVars[286] /* MatStm3.compMolEntr[1,3] variable */ = (data->localData[0]->realVars[304] /* MatStm3.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[337] /* MatStm3.phasMolEntr[1] variable */);
  TRACE_POP
}
void Flowsheet_eqFunction_617(DATA*, threadData_t*);
void Flowsheet_eqFunction_618(DATA*, threadData_t*);
void Flowsheet_eqFunction_619(DATA*, threadData_t*);
void Flowsheet_eqFunction_620(DATA*, threadData_t*);
void Flowsheet_eqFunction_621(DATA*, threadData_t*);
void Flowsheet_eqFunction_622(DATA*, threadData_t*);
void Flowsheet_eqFunction_623(DATA*, threadData_t*);
void Flowsheet_eqFunction_624(DATA*, threadData_t*);
void Flowsheet_eqFunction_625(DATA*, threadData_t*);
void Flowsheet_eqFunction_632(DATA*, threadData_t*);
void Flowsheet_eqFunction_631(DATA*, threadData_t*);
void Flowsheet_eqFunction_630(DATA*, threadData_t*);
void Flowsheet_eqFunction_629(DATA*, threadData_t*);
void Flowsheet_eqFunction_628(DATA*, threadData_t*);
void Flowsheet_eqFunction_627(DATA*, threadData_t*);
void Flowsheet_eqFunction_626(DATA*, threadData_t*);
/*
equation index: 649
indexNonlinear: 6
type: NONLINEAR

vars: {MatStm4._totMolFlo[2], MatStm4._compMolFrac[2,1], MatStm4._compMolFrac[3,1], MatStm4._compMolFrac[3,2], MatStm4._compMolFrac[2,2], MatStm4._compMolFrac[3,3], MatStm4._compMolFrac[2,3]}
eqns: {617, 618, 619, 620, 621, 622, 623, 624, 625, 632, 631, 630, 629, 628, 627, 626}
*/
void Flowsheet_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 649 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[0] = data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[1] = data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[2] = data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[3] = data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[4] = data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[5] = data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[6] = data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */;
  retValue = solve_nonlinear_system(data, threadData, 6);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,649};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 649 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[0];
  data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[1];
  data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[2];
  data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[3];
  data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[4];
  data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[5];
  data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[6];
  TRACE_POP
}
/*
equation index: 650
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[3,3] = MatStm4.compMolFlo[3,3] * MatStm4.comp[3].MW
*/
void Flowsheet_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  data->localData[0]->realVars[383] /* MatStm4.compMasFlo[3,3] variable */ = (data->localData[0]->realVars[419] /* MatStm4.compMolFlo[3,3] variable */) * (data->simulationInfo->realParameter[1076]);
  TRACE_POP
}
/*
equation index: 651
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[2,3] = MatStm4.compMolFlo[2,3] * MatStm4.comp[3].MW
*/
void Flowsheet_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  data->localData[0]->realVars[380] /* MatStm4.compMasFlo[2,3] variable */ = (data->localData[0]->realVars[416] /* MatStm4.compMolFlo[2,3] variable */) * (data->simulationInfo->realParameter[1076]);
  TRACE_POP
}
/*
equation index: 652
type: ALGORITHM

  (MatStm4.compMolEntr[2,3], MatStm4.compMolEntr[3,3]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm4.comp[3].AS, {MatStm4.comp[3].VapCp[1], MatStm4.comp[3].VapCp[2], MatStm4.comp[3].VapCp[3], MatStm4.comp[3].VapCp[4], MatStm4.comp[3].VapCp[5], MatStm4.comp[3].VapCp[6]}, {MatStm4.comp[3].HOV[1], MatStm4.comp[3].HOV[2], MatStm4.comp[3].HOV[3], MatStm4.comp[3].HOV[4], MatStm4.comp[3].HOV[5], MatStm4.comp[3].HOV[6]}, MatStm4.comp[3].Tb, MatStm4.comp[3].Tc, 300.0, 101325.0, MatStm4.compMolFrac[2,3], MatStm4.compMolFrac[3,3]);
*/
void Flowsheet_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[1140], (modelica_real)data->simulationInfo->realParameter[1141], (modelica_real)data->simulationInfo->realParameter[1142], (modelica_real)data->simulationInfo->realParameter[1143], (modelica_real)data->simulationInfo->realParameter[1144], (modelica_real)data->simulationInfo->realParameter[1145]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[990], (modelica_real)data->simulationInfo->realParameter[991], (modelica_real)data->simulationInfo->realParameter[992], (modelica_real)data->simulationInfo->realParameter[993], (modelica_real)data->simulationInfo->realParameter[994], (modelica_real)data->simulationInfo->realParameter[995]);
  data->localData[0]->realVars[407] /* MatStm4.compMolEntr[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[953], tmp0, tmp1, data->simulationInfo->realParameter[1097], data->simulationInfo->realParameter[1100], 300.0, 101325.0, data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */, data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */ ,&data->localData[0]->realVars[410] /* MatStm4.compMolEntr[3,3] variable */);
  TRACE_POP
}
/*
equation index: 653
type: ALGORITHM

  (MatStm4.compMolEntr[2,2], MatStm4.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm4.comp[2].AS, {MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, {MatStm4.comp[2].HOV[1], MatStm4.comp[2].HOV[2], MatStm4.comp[2].HOV[3], MatStm4.comp[2].HOV[4], MatStm4.comp[2].HOV[5], MatStm4.comp[2].HOV[6]}, MatStm4.comp[2].Tb, MatStm4.comp[2].Tc, 300.0, 101325.0, MatStm4.compMolFrac[2,2], MatStm4.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[1134], (modelica_real)data->simulationInfo->realParameter[1135], (modelica_real)data->simulationInfo->realParameter[1136], (modelica_real)data->simulationInfo->realParameter[1137], (modelica_real)data->simulationInfo->realParameter[1138], (modelica_real)data->simulationInfo->realParameter[1139]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[984], (modelica_real)data->simulationInfo->realParameter[985], (modelica_real)data->simulationInfo->realParameter[986], (modelica_real)data->simulationInfo->realParameter[987], (modelica_real)data->simulationInfo->realParameter[988], (modelica_real)data->simulationInfo->realParameter[989]);
  data->localData[0]->realVars[406] /* MatStm4.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[952], tmp2, tmp3, data->simulationInfo->realParameter[1096], data->simulationInfo->realParameter[1099], 300.0, 101325.0, data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */, data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[409] /* MatStm4.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 654
type: SIMPLE_ASSIGN
MatStm4._phasMolSpHeat[3] = MatStm4.compMolFrac[3,1] * MatStm4.compMolSpHeat[3,1] + MatStm4.compMolFrac[3,2] * MatStm4.compMolSpHeat[3,2] + MatStm4.compMolFrac[3,3] * MatStm4.compMolSpHeat[3,3]
*/
void Flowsheet_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  data->localData[0]->realVars[460] /* MatStm4.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[435] /* MatStm4.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[436] /* MatStm4.compMolSpHeat[3,2] variable */) + (data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[437] /* MatStm4.compMolSpHeat[3,3] variable */);
  TRACE_POP
}
/*
equation index: 655
type: SIMPLE_ASSIGN
MatStm4._phasMolEnth[3] = MatStm4.compMolFrac[3,1] * MatStm4.compMolEnth[3,1] + MatStm4.compMolFrac[3,2] * MatStm4.compMolEnth[3,2] + MatStm4.compMolFrac[3,3] * MatStm4.compMolEnth[3,3]
*/
void Flowsheet_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  data->localData[0]->realVars[454] /* MatStm4.phasMolEnth[3] variable */ = (data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[399] /* MatStm4.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[400] /* MatStm4.compMolEnth[3,2] variable */) + (data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[401] /* MatStm4.compMolEnth[3,3] variable */);
  TRACE_POP
}
/*
equation index: 656
type: SIMPLE_ASSIGN
MatStm4._phasMolSpHeat[2] = MatStm4.compMolFrac[2,1] * MatStm4.compMolSpHeat[2,1] + MatStm4.compMolFrac[2,2] * MatStm4.compMolSpHeat[2,2] + MatStm4.compMolFrac[2,3] * MatStm4.compMolSpHeat[2,3]
*/
void Flowsheet_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  data->localData[0]->realVars[459] /* MatStm4.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[432] /* MatStm4.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[433] /* MatStm4.compMolSpHeat[2,2] variable */) + (data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[434] /* MatStm4.compMolSpHeat[2,3] variable */);
  TRACE_POP
}
/*
equation index: 657
type: SIMPLE_ASSIGN
MatStm4._phasMolEnth[2] = MatStm4.compMolFrac[2,1] * MatStm4.compMolEnth[2,1] + MatStm4.compMolFrac[2,2] * MatStm4.compMolEnth[2,2] + MatStm4.compMolFrac[2,3] * MatStm4.compMolEnth[2,3]
*/
void Flowsheet_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  data->localData[0]->realVars[453] /* MatStm4.phasMolEnth[2] variable */ = (data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[396] /* MatStm4.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[397] /* MatStm4.compMolEnth[2,2] variable */) + (data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[398] /* MatStm4.compMolEnth[2,3] variable */);
  TRACE_POP
}
/*
equation index: 658
type: ALGORITHM

  (MatStm4.compMolEntr[2,1], MatStm4.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm4.comp[1].AS, {MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, {MatStm4.comp[1].HOV[1], MatStm4.comp[1].HOV[2], MatStm4.comp[1].HOV[3], MatStm4.comp[1].HOV[4], MatStm4.comp[1].HOV[5], MatStm4.comp[1].HOV[6]}, MatStm4.comp[1].Tb, MatStm4.comp[1].Tc, 300.0, 101325.0, MatStm4.compMolFrac[2,1], MatStm4.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  real_array tmp4;
  real_array tmp5;
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[1128], (modelica_real)data->simulationInfo->realParameter[1129], (modelica_real)data->simulationInfo->realParameter[1130], (modelica_real)data->simulationInfo->realParameter[1131], (modelica_real)data->simulationInfo->realParameter[1132], (modelica_real)data->simulationInfo->realParameter[1133]);
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[978], (modelica_real)data->simulationInfo->realParameter[979], (modelica_real)data->simulationInfo->realParameter[980], (modelica_real)data->simulationInfo->realParameter[981], (modelica_real)data->simulationInfo->realParameter[982], (modelica_real)data->simulationInfo->realParameter[983]);
  data->localData[0]->realVars[405] /* MatStm4.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[951], tmp4, tmp5, data->simulationInfo->realParameter[1095], data->simulationInfo->realParameter[1098], 300.0, 101325.0, data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */, data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[408] /* MatStm4.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 659
type: SIMPLE_ASSIGN
MatStm4._phasMolEntr[3] = MatStm4.compMolFrac[3,1] * MatStm4.compMolEntr[3,1] + MatStm4.compMolFrac[3,2] * MatStm4.compMolEntr[3,2] + MatStm4.compMolFrac[3,3] * MatStm4.compMolEntr[3,3]
*/
void Flowsheet_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  data->localData[0]->realVars[457] /* MatStm4.phasMolEntr[3] variable */ = (data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[408] /* MatStm4.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[409] /* MatStm4.compMolEntr[3,2] variable */) + (data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[410] /* MatStm4.compMolEntr[3,3] variable */);
  TRACE_POP
}
/*
equation index: 660
type: ALGORITHM

  MatStm4.MW[3] := $START.MatStm4.MW[3];
  MatStm4.MW[2] := $START.MatStm4.MW[2];
  MatStm4.MW[1] := $START.MatStm4.MW[1];
  for i in 1:3 loop
    MatStm4.MW[:] := {MatStm4.MW[1] + MatStm4.compMolFrac[1,i] * MatStm4.comp[i].MW, MatStm4.MW[2] + MatStm4.compMolFrac[2,i] * MatStm4.comp[i].MW, MatStm4.MW[3] + MatStm4.compMolFrac[3,i] * MatStm4.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  real_array tmp6;
  index_spec_t tmp7;
  real_array tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  data->localData[0]->realVars[367] /* MatStm4.MW[3] variable */ = data->modelData->realVarsData[367].attribute /* MatStm4.MW[3] variable */.start;

  data->localData[0]->realVars[366] /* MatStm4.MW[2] variable */ = data->modelData->realVarsData[366].attribute /* MatStm4.MW[2] variable */.start;

  data->localData[0]->realVars[365] /* MatStm4.MW[1] variable */ = data->modelData->realVarsData[365].attribute /* MatStm4.MW[1] variable */.start;

  tmp9 = ((modelica_integer) 1); tmp10 = 1; tmp11 = ((modelica_integer) 3);
  if(!(((tmp10 > 0) && (tmp9 > tmp11)) || ((tmp10 < 0) && (tmp9 < tmp11))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp9, tmp11); $Pi += tmp10)
    {
      array_alloc_scalar_real_array(&tmp6, 3, (modelica_real)data->localData[0]->realVars[365] /* MatStm4.MW[1] variable */ + ((&data->localData[0]->realVars[420] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[1074])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[366] /* MatStm4.MW[2] variable */ + ((&data->localData[0]->realVars[420] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[1074])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[367] /* MatStm4.MW[3] variable */ + ((&data->localData[0]->realVars[420] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[1074])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]));
      create_index_spec(&tmp7, 1, (1), (int*)0, 'W');
      real_array_create(&tmp8, (modelica_real*)&data->localData[0]->realVars[365] /* MatStm4.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp6, &tmp8, &tmp7);
    }
  }
  TRACE_POP
}
/*
equation index: 661
type: SIMPLE_ASSIGN
MatStm4._totMasFlo[1] = 100.0 * MatStm4.MW[1]
*/
void Flowsheet_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */ = (100.0) * (data->localData[0]->realVars[365] /* MatStm4.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 662
type: SIMPLE_ASSIGN
MatStm4._phasMolEntr[2] = MatStm4.compMolFrac[2,1] * MatStm4.compMolEntr[2,1] + MatStm4.compMolFrac[2,2] * MatStm4.compMolEntr[2,2] + MatStm4.compMolFrac[2,3] * MatStm4.compMolEntr[2,3]
*/
void Flowsheet_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  data->localData[0]->realVars[456] /* MatStm4.phasMolEntr[2] variable */ = (data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[405] /* MatStm4.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[406] /* MatStm4.compMolEntr[2,2] variable */) + (data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[407] /* MatStm4.compMolEntr[2,3] variable */);
  TRACE_POP
}
/*
equation index: 663
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[2,1] = MatStm4.compMolFlo[2,1] * MatStm4.comp[1].MW
*/
void Flowsheet_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->localData[0]->realVars[378] /* MatStm4.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[414] /* MatStm4.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[1074]);
  TRACE_POP
}
/*
equation index: 664
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[3,1] = MatStm4.compMolFlo[3,1] * MatStm4.comp[1].MW
*/
void Flowsheet_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  data->localData[0]->realVars[381] /* MatStm4.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[417] /* MatStm4.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[1074]);
  TRACE_POP
}
/*
equation index: 665
type: SIMPLE_ASSIGN
MatStm4._totMasFlo[3] = MatStm4.totMolFlo[3] * MatStm4.MW[3]
*/
void Flowsheet_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  data->localData[0]->realVars[472] /* MatStm4.totMasFlo[3] variable */ = (data->localData[0]->realVars[475] /* MatStm4.totMolFlo[3] variable */) * (data->localData[0]->realVars[367] /* MatStm4.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 666
type: SIMPLE_ASSIGN
MatStm4._vapPhasMasFrac = MatStm4.totMasFlo[3] / MatStm4.totMasFlo[1]
*/
void Flowsheet_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  data->localData[0]->realVars[476] /* MatStm4.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[472] /* MatStm4.totMasFlo[3] variable */,data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */,"MatStm4.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 667
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[3,2] = MatStm4.compMolFlo[3,2] * MatStm4.comp[2].MW
*/
void Flowsheet_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->localData[0]->realVars[382] /* MatStm4.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[418] /* MatStm4.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[1075]);
  TRACE_POP
}
/*
equation index: 668
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[2,2] = MatStm4.compMolFlo[2,2] * MatStm4.comp[2].MW
*/
void Flowsheet_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  data->localData[0]->realVars[379] /* MatStm4.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[415] /* MatStm4.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[1075]);
  TRACE_POP
}
/*
equation index: 669
type: SIMPLE_ASSIGN
MatStm4._totMasFlo[2] = MatStm4.totMolFlo[2] * MatStm4.MW[2]
*/
void Flowsheet_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  data->localData[0]->realVars[471] /* MatStm4.totMasFlo[2] variable */ = (data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */) * (data->localData[0]->realVars[366] /* MatStm4.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 670
type: SIMPLE_ASSIGN
MatStm4._liqPhasMasFrac = MatStm4.totMasFlo[2] / MatStm4.totMasFlo[1]
*/
void Flowsheet_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  data->localData[0]->realVars[447] /* MatStm4.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[471] /* MatStm4.totMasFlo[2] variable */,data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */,"MatStm4.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 671
type: LINEAR

<var>MatStm4._compMasFrac[1,3]</var>
<var>MatStm4._compMasFrac[2,3]</var>
<var>MatStm4._compMasFrac[3,3]</var>
<var>MatStm4._compMasFrac[3,1]</var>
<var>MatStm4._compMasFrac[2,1]</var>
<var>MatStm4._compMasFrac[1,1]</var>
<var>MatStm4._compMasFrac[1,2]</var>
<var>MatStm4._compMasFrac[2,2]</var>
<var>MatStm4._compMasFrac[3,2]</var>
<row>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[2,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then MatStm4.compMasFlo[1,2] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[2,2] else MatStm4.compMasFlo[1,2]</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then MatStm4.compMasFlo[1,1] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[1,2] else MatStm4.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[1,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[3,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[3,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then MatStm4.compMasFlo[1,3] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[3,2] else MatStm4.compMasFlo[1,3]</cell>
</row>
<matrix>
  <cell row="0" col="1">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="0" col="6">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -1.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="0" col="7">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="8">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="7">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="8">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="6">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -MatStm4.totMasFlo[1] else if 101325.0 >= MatStm4.Pdew then -0.0 else -MatStm4.totMasFlo[1])</residual>
  </cell><cell row="2" col="7">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="3" col="5">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -MatStm4.totMasFlo[1] else if 101325.0 >= MatStm4.Pdew then -0.0 else -MatStm4.totMasFlo[1])</residual>
  </cell><cell row="3" col="6">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[1] else -0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="4" col="3">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="5">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -1.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="5" col="3">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="5" col="4">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="5" col="5">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="6" col="1">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="6" col="2">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="6" col="3">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[3] else 0.0)</residual>
  </cell><cell row="7" col="0">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -1.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="7" col="1">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="7" col="2">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="8" col="0">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -MatStm4.totMasFlo[1] else if 101325.0 >= MatStm4.Pdew then -0.0 else -MatStm4.totMasFlo[1])</residual>
  </cell><cell row="8" col="8">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[3] else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  /* Linear equation system */
  int retValue;
  double aux_x[9] = { data->localData[1]->realVars[386] /* MatStm4.compMasFrac[1,3] variable */,data->localData[1]->realVars[389] /* MatStm4.compMasFrac[2,3] variable */,data->localData[1]->realVars[392] /* MatStm4.compMasFrac[3,3] variable */,data->localData[1]->realVars[390] /* MatStm4.compMasFrac[3,1] variable */,data->localData[1]->realVars[387] /* MatStm4.compMasFrac[2,1] variable */,data->localData[1]->realVars[384] /* MatStm4.compMasFrac[1,1] variable */,data->localData[1]->realVars[385] /* MatStm4.compMasFrac[1,2] variable */,data->localData[1]->realVars[388] /* MatStm4.compMasFrac[2,2] variable */,data->localData[1]->realVars[391] /* MatStm4.compMasFrac[3,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 671 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 6, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,671};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 671 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[386] /* MatStm4.compMasFrac[1,3] variable */ = aux_x[0];
  data->localData[0]->realVars[389] /* MatStm4.compMasFrac[2,3] variable */ = aux_x[1];
  data->localData[0]->realVars[392] /* MatStm4.compMasFrac[3,3] variable */ = aux_x[2];
  data->localData[0]->realVars[390] /* MatStm4.compMasFrac[3,1] variable */ = aux_x[3];
  data->localData[0]->realVars[387] /* MatStm4.compMasFrac[2,1] variable */ = aux_x[4];
  data->localData[0]->realVars[384] /* MatStm4.compMasFrac[1,1] variable */ = aux_x[5];
  data->localData[0]->realVars[385] /* MatStm4.compMasFrac[1,2] variable */ = aux_x[6];
  data->localData[0]->realVars[388] /* MatStm4.compMasFrac[2,2] variable */ = aux_x[7];
  data->localData[0]->realVars[391] /* MatStm4.compMasFrac[3,2] variable */ = aux_x[8];
  TRACE_POP
}
/*
equation index: 672
type: SIMPLE_ASSIGN
MatStm4._phasMolSpHeat[1] = MatStm4.liqPhasMolFrac * MatStm4.phasMolSpHeat[2] + Mixer1.inVapPhasMolFrac[1] * MatStm4.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  data->localData[0]->realVars[458] /* MatStm4.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[448] /* MatStm4.liqPhasMolFrac variable */) * (data->localData[0]->realVars[459] /* MatStm4.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[480] /* Mixer1.inVapPhasMolFrac[1] variable */) * (data->localData[0]->realVars[460] /* MatStm4.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 673
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[1,1] = MatStm4.compMolFrac[1,1] * MatStm4.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  data->localData[0]->realVars[429] /* MatStm4.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[420] /* MatStm4.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[458] /* MatStm4.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 674
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[1,2] = MatStm4.compMolFrac[1,2] * MatStm4.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  data->localData[0]->realVars[430] /* MatStm4.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[421] /* MatStm4.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[458] /* MatStm4.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 675
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[1,3] = MatStm4.compMolFrac[1,3] * MatStm4.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  data->localData[0]->realVars[431] /* MatStm4.compMolSpHeat[1,3] variable */ = (data->localData[0]->realVars[422] /* MatStm4.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[458] /* MatStm4.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 676
type: SIMPLE_ASSIGN
MatStm4._phasMolEnth[1] = MatStm4.liqPhasMolFrac * MatStm4.phasMolEnth[2] + Mixer1.inVapPhasMolFrac[1] * MatStm4.phasMolEnth[3]
*/
void Flowsheet_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  data->localData[0]->realVars[452] /* MatStm4.phasMolEnth[1] variable */ = (data->localData[0]->realVars[448] /* MatStm4.liqPhasMolFrac variable */) * (data->localData[0]->realVars[453] /* MatStm4.phasMolEnth[2] variable */) + (data->localData[0]->realVars[480] /* Mixer1.inVapPhasMolFrac[1] variable */) * (data->localData[0]->realVars[454] /* MatStm4.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 677
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[1,1] = MatStm4.compMolFrac[1,1] * MatStm4.phasMolEnth[1]
*/
void Flowsheet_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  data->localData[0]->realVars[393] /* MatStm4.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[420] /* MatStm4.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[452] /* MatStm4.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 678
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[1,2] = MatStm4.compMolFrac[1,2] * MatStm4.phasMolEnth[1]
*/
void Flowsheet_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  data->localData[0]->realVars[394] /* MatStm4.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[421] /* MatStm4.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[452] /* MatStm4.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 679
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[1,3] = MatStm4.compMolFrac[1,3] * MatStm4.phasMolEnth[1]
*/
void Flowsheet_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  data->localData[0]->realVars[395] /* MatStm4.compMolEnth[1,3] variable */ = (data->localData[0]->realVars[422] /* MatStm4.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[452] /* MatStm4.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 680
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[1] = 100.0 * (MatStm4.phasMolEnth[1] + MatStm3.phasMolEnth[1] + MatStm2.phasMolEnth[1]) / 300.0
*/
void Flowsheet_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  data->localData[0]->realVars[97] /* MatStm1.phasMolEnth[1] variable */ = (100.0) * (DIVISION_SIM(data->localData[0]->realVars[452] /* MatStm4.phasMolEnth[1] variable */ + data->localData[0]->realVars[334] /* MatStm3.phasMolEnth[1] variable */ + data->localData[0]->realVars[216] /* MatStm2.phasMolEnth[1] variable */,300.0,"300.0",equationIndexes));
  TRACE_POP
}
void Flowsheet_eqFunction_681(DATA*, threadData_t*);
void Flowsheet_eqFunction_682(DATA*, threadData_t*);
void Flowsheet_eqFunction_683(DATA*, threadData_t*);
void Flowsheet_eqFunction_684(DATA*, threadData_t*);
void Flowsheet_eqFunction_685(DATA*, threadData_t*);
void Flowsheet_eqFunction_686(DATA*, threadData_t*);
void Flowsheet_eqFunction_687(DATA*, threadData_t*);
void Flowsheet_eqFunction_688(DATA*, threadData_t*);
void Flowsheet_eqFunction_689(DATA*, threadData_t*);
void Flowsheet_eqFunction_690(DATA*, threadData_t*);
void Flowsheet_eqFunction_691(DATA*, threadData_t*);
void Flowsheet_eqFunction_692(DATA*, threadData_t*);
void Flowsheet_eqFunction_693(DATA*, threadData_t*);
void Flowsheet_eqFunction_694(DATA*, threadData_t*);
void Flowsheet_eqFunction_695(DATA*, threadData_t*);
void Flowsheet_eqFunction_696(DATA*, threadData_t*);
void Flowsheet_eqFunction_697(DATA*, threadData_t*);
void Flowsheet_eqFunction_698(DATA*, threadData_t*);
void Flowsheet_eqFunction_699(DATA*, threadData_t*);
void Flowsheet_eqFunction_700(DATA*, threadData_t*);
void Flowsheet_eqFunction_701(DATA*, threadData_t*);
void Flowsheet_eqFunction_702(DATA*, threadData_t*);
void Flowsheet_eqFunction_703(DATA*, threadData_t*);
void Flowsheet_eqFunction_704(DATA*, threadData_t*);
void Flowsheet_eqFunction_705(DATA*, threadData_t*);
void Flowsheet_eqFunction_706(DATA*, threadData_t*);
void Flowsheet_eqFunction_707(DATA*, threadData_t*);
void Flowsheet_eqFunction_708(DATA*, threadData_t*);
void Flowsheet_eqFunction_709(DATA*, threadData_t*);
void Flowsheet_eqFunction_710(DATA*, threadData_t*);
void Flowsheet_eqFunction_711(DATA*, threadData_t*);
void Flowsheet_eqFunction_712(DATA*, threadData_t*);
void Flowsheet_eqFunction_720(DATA*, threadData_t*);
void Flowsheet_eqFunction_719(DATA*, threadData_t*);
void Flowsheet_eqFunction_718(DATA*, threadData_t*);
void Flowsheet_eqFunction_717(DATA*, threadData_t*);
void Flowsheet_eqFunction_716(DATA*, threadData_t*);
void Flowsheet_eqFunction_715(DATA*, threadData_t*);
void Flowsheet_eqFunction_714(DATA*, threadData_t*);
void Flowsheet_eqFunction_713(DATA*, threadData_t*);
/*
equation index: 721
indexNonlinear: 7
type: NONLINEAR

vars: {MatStm1._totMolFlo[3], MatStm1._T, MatStm1._compMolFrac[3,3], MatStm1._compMolFrac[2,3], MatStm1._compMolFrac[2,1], MatStm1._compMolFrac[2,2], MatStm1._compMolFrac[3,2], MatStm1._compMolFrac[3,1]}
eqns: {681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 720, 719, 718, 717, 716, 715, 714, 713}
*/
void Flowsheet_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 721 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[0] = data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[1] = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[2] = data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[3] = data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[4] = data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[5] = data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[6] = data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[7] = data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 7);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,721};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 721 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[0];
  data->localData[0]->realVars[19] /* MatStm1.T variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[1];
  data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[2];
  data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[3];
  data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[4];
  data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[5];
  data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[6];
  data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[7];
  TRACE_POP
}
/*
equation index: 722
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,2] = MatStm1.compMolFlo[2,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[60] /* MatStm1.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[364]);
  TRACE_POP
}
/*
equation index: 723
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,2] = MatStm1.compMolFlo[3,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,723};
  data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[63] /* MatStm1.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[364]);
  TRACE_POP
}
/*
equation index: 724
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,1] = MatStm1.compMolFlo[3,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,724};
  data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[363]);
  TRACE_POP
}
/*
equation index: 725
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,1] = MatStm1.compMolFlo[2,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,725};
  data->localData[0]->realVars[23] /* MatStm1.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[363]);
  TRACE_POP
}
/*
equation index: 726
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,3] = MatStm1.compMolFlo[2,3] * MatStm1.comp[3].MW
*/
void Flowsheet_eqFunction_726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,726};
  data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,3] variable */ = (data->localData[0]->realVars[61] /* MatStm1.compMolFlo[2,3] variable */) * (data->simulationInfo->realParameter[365]);
  TRACE_POP
}
/*
equation index: 727
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,3] = MatStm1.compMolFlo[3,3] * MatStm1.comp[3].MW
*/
void Flowsheet_eqFunction_727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,727};
  data->localData[0]->realVars[28] /* MatStm1.compMasFlo[3,3] variable */ = (data->localData[0]->realVars[64] /* MatStm1.compMolFlo[3,3] variable */) * (data->simulationInfo->realParameter[365]);
  TRACE_POP
}
/*
equation index: 728
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:3 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,728};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  data->localData[0]->realVars[12] /* MatStm1.MW[3] variable */ = data->modelData->realVarsData[12].attribute /* MatStm1.MW[3] variable */.start;

  data->localData[0]->realVars[11] /* MatStm1.MW[2] variable */ = data->modelData->realVarsData[11].attribute /* MatStm1.MW[2] variable */.start;

  data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */ = data->modelData->realVarsData[10].attribute /* MatStm1.MW[1] variable */.start;

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 3);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp3, tmp5); $Pi += tmp4)
    {
      array_alloc_scalar_real_array(&tmp0, 3, (modelica_real)data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */ + ((&data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[363])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[11] /* MatStm1.MW[2] variable */ + ((&data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[363])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[12] /* MatStm1.MW[3] variable */ + ((&data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[363])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]));
      create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
      real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp0, &tmp2, &tmp1);
    }
  }
  TRACE_POP
}
/*
equation index: 729
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[2] = MatStm1.totMolFlo[2] * MatStm1.MW[2]
*/
void Flowsheet_eqFunction_729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,729};
  data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */ = (data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */) * (data->localData[0]->realVars[11] /* MatStm1.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 730
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[1] = 300.0 * MatStm1.MW[1]
*/
void Flowsheet_eqFunction_730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,730};
  data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */ = (300.0) * (data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 731
type: SIMPLE_ASSIGN
MatStm1._liqPhasMasFrac = MatStm1.totMasFlo[2] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  data->localData[0]->realVars[92] /* MatStm1.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */,data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 732
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[3] = MatStm1.totMolFlo[3] * MatStm1.MW[3]
*/
void Flowsheet_eqFunction_732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,732};
  data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */ = (data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */) * (data->localData[0]->realVars[12] /* MatStm1.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 733
type: LINEAR

<var>MatStm1._compMasFrac[2,1]</var>
<var>MatStm1._compMasFrac[2,2]</var>
<var>MatStm1._compMasFrac[1,2]</var>
<var>MatStm1._compMasFrac[1,1]</var>
<var>MatStm1._compMasFrac[3,1]</var>
<var>MatStm1._compMasFrac[1,3]</var>
<var>MatStm1._compMasFrac[3,2]</var>
<var>MatStm1._compMasFrac[2,3]</var>
<var>MatStm1._compMasFrac[3,3]</var>
<row>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,3] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,2] else MatStm1.compMasFlo[1,3]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,2] else MatStm1.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,2] else MatStm1.compMasFlo[1,2]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,1] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="5">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="0" col="7">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="8">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 0.0)</residual>
  </cell><cell row="1" col="7">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="8">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="6">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="7">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="5">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="3" col="6">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="5">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="5" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="5" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="5" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="6" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else -0.0)</residual>
  </cell><cell row="6" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="7" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="7" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="8" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="8" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="8" col="6">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,733};
  /* Linear equation system */
  int retValue;
  double aux_x[9] = { data->localData[1]->realVars[32] /* MatStm1.compMasFrac[2,1] variable */,data->localData[1]->realVars[33] /* MatStm1.compMasFrac[2,2] variable */,data->localData[1]->realVars[30] /* MatStm1.compMasFrac[1,2] variable */,data->localData[1]->realVars[29] /* MatStm1.compMasFrac[1,1] variable */,data->localData[1]->realVars[35] /* MatStm1.compMasFrac[3,1] variable */,data->localData[1]->realVars[31] /* MatStm1.compMasFrac[1,3] variable */,data->localData[1]->realVars[36] /* MatStm1.compMasFrac[3,2] variable */,data->localData[1]->realVars[34] /* MatStm1.compMasFrac[2,3] variable */,data->localData[1]->realVars[37] /* MatStm1.compMasFrac[3,3] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 733 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 7, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,733};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 733 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[32] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[0];
  data->localData[0]->realVars[33] /* MatStm1.compMasFrac[2,2] variable */ = aux_x[1];
  data->localData[0]->realVars[30] /* MatStm1.compMasFrac[1,2] variable */ = aux_x[2];
  data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[3];
  data->localData[0]->realVars[35] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[4];
  data->localData[0]->realVars[31] /* MatStm1.compMasFrac[1,3] variable */ = aux_x[5];
  data->localData[0]->realVars[36] /* MatStm1.compMasFrac[3,2] variable */ = aux_x[6];
  data->localData[0]->realVars[34] /* MatStm1.compMasFrac[2,3] variable */ = aux_x[7];
  data->localData[0]->realVars[37] /* MatStm1.compMasFrac[3,3] variable */ = aux_x[8];
  TRACE_POP
}
/*
equation index: 734
type: SIMPLE_ASSIGN
MatStm1._vapPhasMasFrac = MatStm1.totMasFlo[3] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,734};
  data->localData[0]->realVars[121] /* MatStm1.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */,data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 735
type: ALGORITHM

  (MatStm1.compMolEntr[2,3], MatStm1.compMolEntr[3,3]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[3].AS, {MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, {MatStm1.comp[3].HOV[1], MatStm1.comp[3].HOV[2], MatStm1.comp[3].HOV[3], MatStm1.comp[3].HOV[4], MatStm1.comp[3].HOV[5], MatStm1.comp[3].HOV[6]}, MatStm1.comp[3].Tb, MatStm1.comp[3].Tc, MatStm1.T, 101325.0, MatStm1.compMolFrac[2,3], MatStm1.compMolFrac[3,3]);
*/
void Flowsheet_eqFunction_735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,735};
  real_array tmp6;
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[429], (modelica_real)data->simulationInfo->realParameter[430], (modelica_real)data->simulationInfo->realParameter[431], (modelica_real)data->simulationInfo->realParameter[432], (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434]);
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[279], (modelica_real)data->simulationInfo->realParameter[280], (modelica_real)data->simulationInfo->realParameter[281], (modelica_real)data->simulationInfo->realParameter[282], (modelica_real)data->simulationInfo->realParameter[283], (modelica_real)data->simulationInfo->realParameter[284]);
  data->localData[0]->realVars[52] /* MatStm1.compMolEntr[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[242], tmp6, tmp7, data->simulationInfo->realParameter[386], data->simulationInfo->realParameter[389], data->localData[0]->realVars[19] /* MatStm1.T variable */, 101325.0, data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */, data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */ ,&data->localData[0]->realVars[55] /* MatStm1.compMolEntr[3,3] variable */);
  TRACE_POP
}
/*
equation index: 736
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,3] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,736};
  real_array tmp8;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[429], (modelica_real)data->simulationInfo->realParameter[430], (modelica_real)data->simulationInfo->realParameter[431], (modelica_real)data->simulationInfo->realParameter[432], (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434]);
  data->localData[0]->realVars[82] /* MatStm1.compMolSpHeat[3,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp8, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 737
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,3] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[3].LiqCp[1], MatStm1.comp[3].LiqCp[2], MatStm1.comp[3].LiqCp[3], MatStm1.comp[3].LiqCp[4], MatStm1.comp[3].LiqCp[5], MatStm1.comp[3].LiqCp[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[303], (modelica_real)data->simulationInfo->realParameter[304], (modelica_real)data->simulationInfo->realParameter[305], (modelica_real)data->simulationInfo->realParameter[306], (modelica_real)data->simulationInfo->realParameter[307], (modelica_real)data->simulationInfo->realParameter[308]);
  data->localData[0]->realVars[79] /* MatStm1.compMolSpHeat[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp9, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 738
type: ALGORITHM

  (MatStm1.compMolEntr[2,2], MatStm1.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[2].AS, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tb, MatStm1.comp[2].Tc, MatStm1.T, 101325.0, MatStm1.compMolFrac[2,2], MatStm1.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,738};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[273], (modelica_real)data->simulationInfo->realParameter[274], (modelica_real)data->simulationInfo->realParameter[275], (modelica_real)data->simulationInfo->realParameter[276], (modelica_real)data->simulationInfo->realParameter[277], (modelica_real)data->simulationInfo->realParameter[278]);
  data->localData[0]->realVars[51] /* MatStm1.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[241], tmp10, tmp11, data->simulationInfo->realParameter[385], data->simulationInfo->realParameter[388], data->localData[0]->realVars[19] /* MatStm1.T variable */, 101325.0, data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */, data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[54] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 739
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  real_array tmp12;
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  data->localData[0]->realVars[81] /* MatStm1.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp12, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 740
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[2].LiqCp[1], MatStm1.comp[2].LiqCp[2], MatStm1.comp[2].LiqCp[3], MatStm1.comp[2].LiqCp[4], MatStm1.comp[2].LiqCp[5], MatStm1.comp[2].LiqCp[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)data->simulationInfo->realParameter[297], (modelica_real)data->simulationInfo->realParameter[298], (modelica_real)data->simulationInfo->realParameter[299], (modelica_real)data->simulationInfo->realParameter[300], (modelica_real)data->simulationInfo->realParameter[301], (modelica_real)data->simulationInfo->realParameter[302]);
  data->localData[0]->realVars[78] /* MatStm1.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp13, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 741
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, MatStm1.T, 101325.0, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  real_array tmp14;
  real_array tmp15;
  array_alloc_scalar_real_array(&tmp14, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  array_alloc_scalar_real_array(&tmp15, 6, (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270], (modelica_real)data->simulationInfo->realParameter[271], (modelica_real)data->simulationInfo->realParameter[272]);
  data->localData[0]->realVars[50] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[240], tmp14, tmp15, data->simulationInfo->realParameter[384], data->simulationInfo->realParameter[387], data->localData[0]->realVars[19] /* MatStm1.T variable */, 101325.0, data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[53] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 742
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEntr[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEntr[2,2] + MatStm1.compMolFrac[2,3] * MatStm1.compMolEntr[2,3]
*/
void Flowsheet_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  data->localData[0]->realVars[101] /* MatStm1.phasMolEntr[2] variable */ = (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[50] /* MatStm1.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[51] /* MatStm1.compMolEntr[2,2] variable */) + (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[52] /* MatStm1.compMolEntr[2,3] variable */);
  TRACE_POP
}
/*
equation index: 743
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEntr[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEntr[3,2] + MatStm1.compMolFrac[3,3] * MatStm1.compMolEntr[3,3]
*/
void Flowsheet_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  data->localData[0]->realVars[102] /* MatStm1.phasMolEntr[3] variable */ = (data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[53] /* MatStm1.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[54] /* MatStm1.compMolEntr[3,2] variable */) + (data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[55] /* MatStm1.compMolEntr[3,3] variable */);
  TRACE_POP
}
/*
equation index: 744
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolEntr[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolEntr[3]
*/
void Flowsheet_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  data->localData[0]->realVars[100] /* MatStm1.phasMolEntr[1] variable */ = (data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[101] /* MatStm1.phasMolEntr[2] variable */) + (data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[102] /* MatStm1.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 745
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEntr[1]
*/
void Flowsheet_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  data->localData[0]->realVars[47] /* MatStm1.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[100] /* MatStm1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 746
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolEntr[1]
*/
void Flowsheet_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  data->localData[0]->realVars[48] /* MatStm1.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[100] /* MatStm1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 747
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,3] = MatStm1.compMolFrac[1,3] * MatStm1.phasMolEntr[1]
*/
void Flowsheet_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  data->localData[0]->realVars[49] /* MatStm1.compMolEntr[1,3] variable */ = (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[100] /* MatStm1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 748
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  real_array tmp16;
  array_alloc_scalar_real_array(&tmp16, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  data->localData[0]->realVars[80] /* MatStm1.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp16, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 749
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolSpHeat[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolSpHeat[3,2] + MatStm1.compMolFrac[3,3] * MatStm1.compMolSpHeat[3,3]
*/
void Flowsheet_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  data->localData[0]->realVars[105] /* MatStm1.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[80] /* MatStm1.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[81] /* MatStm1.compMolSpHeat[3,2] variable */) + (data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[82] /* MatStm1.compMolSpHeat[3,3] variable */);
  TRACE_POP
}
/*
equation index: 750
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[1].LiqCp[1], MatStm1.comp[1].LiqCp[2], MatStm1.comp[1].LiqCp[3], MatStm1.comp[1].LiqCp[4], MatStm1.comp[1].LiqCp[5], MatStm1.comp[1].LiqCp[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  real_array tmp17;
  array_alloc_scalar_real_array(&tmp17, 6, (modelica_real)data->simulationInfo->realParameter[291], (modelica_real)data->simulationInfo->realParameter[292], (modelica_real)data->simulationInfo->realParameter[293], (modelica_real)data->simulationInfo->realParameter[294], (modelica_real)data->simulationInfo->realParameter[295], (modelica_real)data->simulationInfo->realParameter[296]);
  data->localData[0]->realVars[77] /* MatStm1.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp17, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 751
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolSpHeat[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolSpHeat[2,2] + MatStm1.compMolFrac[2,3] * MatStm1.compMolSpHeat[2,3]
*/
void Flowsheet_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  data->localData[0]->realVars[104] /* MatStm1.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[77] /* MatStm1.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[78] /* MatStm1.compMolSpHeat[2,2] variable */) + (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[79] /* MatStm1.compMolSpHeat[2,3] variable */);
  TRACE_POP
}
/*
equation index: 752
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolSpHeat[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  data->localData[0]->realVars[103] /* MatStm1.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[104] /* MatStm1.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[105] /* MatStm1.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 753
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  data->localData[0]->realVars[74] /* MatStm1.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[103] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 754
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  data->localData[0]->realVars[75] /* MatStm1.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[103] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 755
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,3] = MatStm1.compMolFrac[1,3] * MatStm1.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  data->localData[0]->realVars[76] /* MatStm1.compMolSpHeat[1,3] variable */ = (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[103] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 756
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEnth[1]
*/
void Flowsheet_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  data->localData[0]->realVars[38] /* MatStm1.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[97] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 757
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolEnth[1]
*/
void Flowsheet_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  data->localData[0]->realVars[39] /* MatStm1.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[97] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 758
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,3] = MatStm1.compMolFrac[1,3] * MatStm1.phasMolEnth[1]
*/
void Flowsheet_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  data->localData[0]->realVars[40] /* MatStm1.compMolEnth[1,3] variable */ = (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[97] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 759
type: SIMPLE_ASSIGN
MatStm4._phasMolEntr[1] = MatStm4.liqPhasMolFrac * MatStm4.phasMolEntr[2] + Mixer1.inVapPhasMolFrac[1] * MatStm4.phasMolEntr[3]
*/
void Flowsheet_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  data->localData[0]->realVars[455] /* MatStm4.phasMolEntr[1] variable */ = (data->localData[0]->realVars[448] /* MatStm4.liqPhasMolFrac variable */) * (data->localData[0]->realVars[456] /* MatStm4.phasMolEntr[2] variable */) + (data->localData[0]->realVars[480] /* Mixer1.inVapPhasMolFrac[1] variable */) * (data->localData[0]->realVars[457] /* MatStm4.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 760
type: SIMPLE_ASSIGN
MatStm4._compMolEntr[1,1] = MatStm4.compMolFrac[1,1] * MatStm4.phasMolEntr[1]
*/
void Flowsheet_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  data->localData[0]->realVars[402] /* MatStm4.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[420] /* MatStm4.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[455] /* MatStm4.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 761
type: SIMPLE_ASSIGN
MatStm4._compMolEntr[1,2] = MatStm4.compMolFrac[1,2] * MatStm4.phasMolEntr[1]
*/
void Flowsheet_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  data->localData[0]->realVars[403] /* MatStm4.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[421] /* MatStm4.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[455] /* MatStm4.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 762
type: SIMPLE_ASSIGN
MatStm4._compMolEntr[1,3] = MatStm4.compMolFrac[1,3] * MatStm4.phasMolEntr[1]
*/
void Flowsheet_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  data->localData[0]->realVars[404] /* MatStm4.compMolEntr[1,3] variable */ = (data->localData[0]->realVars[422] /* MatStm4.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[455] /* MatStm4.phasMolEntr[1] variable */);
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
  Flowsheet_eqFunction_477(data, threadData);

  Flowsheet_eqFunction_478(data, threadData);

  Flowsheet_eqFunction_479(data, threadData);

  Flowsheet_eqFunction_480(data, threadData);

  Flowsheet_eqFunction_481(data, threadData);

  Flowsheet_eqFunction_482(data, threadData);

  Flowsheet_eqFunction_515(data, threadData);

  Flowsheet_eqFunction_516(data, threadData);

  Flowsheet_eqFunction_517(data, threadData);

  Flowsheet_eqFunction_518(data, threadData);

  Flowsheet_eqFunction_519(data, threadData);

  Flowsheet_eqFunction_520(data, threadData);

  Flowsheet_eqFunction_521(data, threadData);

  Flowsheet_eqFunction_522(data, threadData);

  Flowsheet_eqFunction_523(data, threadData);

  Flowsheet_eqFunction_524(data, threadData);

  Flowsheet_eqFunction_525(data, threadData);

  Flowsheet_eqFunction_526(data, threadData);

  Flowsheet_eqFunction_527(data, threadData);

  Flowsheet_eqFunction_528(data, threadData);

  Flowsheet_eqFunction_529(data, threadData);

  Flowsheet_eqFunction_530(data, threadData);

  Flowsheet_eqFunction_531(data, threadData);

  Flowsheet_eqFunction_532(data, threadData);

  Flowsheet_eqFunction_533(data, threadData);

  Flowsheet_eqFunction_534(data, threadData);

  Flowsheet_eqFunction_535(data, threadData);

  Flowsheet_eqFunction_536(data, threadData);

  Flowsheet_eqFunction_537(data, threadData);

  Flowsheet_eqFunction_538(data, threadData);

  Flowsheet_eqFunction_539(data, threadData);

  Flowsheet_eqFunction_540(data, threadData);

  Flowsheet_eqFunction_541(data, threadData);

  Flowsheet_eqFunction_542(data, threadData);

  Flowsheet_eqFunction_543(data, threadData);

  Flowsheet_eqFunction_544(data, threadData);

  Flowsheet_eqFunction_545(data, threadData);

  Flowsheet_eqFunction_546(data, threadData);

  Flowsheet_eqFunction_547(data, threadData);

  Flowsheet_eqFunction_548(data, threadData);

  Flowsheet_eqFunction_549(data, threadData);

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

  Flowsheet_eqFunction_613(data, threadData);

  Flowsheet_eqFunction_614(data, threadData);

  Flowsheet_eqFunction_615(data, threadData);

  Flowsheet_eqFunction_616(data, threadData);

  Flowsheet_eqFunction_649(data, threadData);

  Flowsheet_eqFunction_650(data, threadData);

  Flowsheet_eqFunction_651(data, threadData);

  Flowsheet_eqFunction_652(data, threadData);

  Flowsheet_eqFunction_653(data, threadData);

  Flowsheet_eqFunction_654(data, threadData);

  Flowsheet_eqFunction_655(data, threadData);

  Flowsheet_eqFunction_656(data, threadData);

  Flowsheet_eqFunction_657(data, threadData);

  Flowsheet_eqFunction_658(data, threadData);

  Flowsheet_eqFunction_659(data, threadData);

  Flowsheet_eqFunction_660(data, threadData);

  Flowsheet_eqFunction_661(data, threadData);

  Flowsheet_eqFunction_662(data, threadData);

  Flowsheet_eqFunction_663(data, threadData);

  Flowsheet_eqFunction_664(data, threadData);

  Flowsheet_eqFunction_665(data, threadData);

  Flowsheet_eqFunction_666(data, threadData);

  Flowsheet_eqFunction_667(data, threadData);

  Flowsheet_eqFunction_668(data, threadData);

  Flowsheet_eqFunction_669(data, threadData);

  Flowsheet_eqFunction_670(data, threadData);

  Flowsheet_eqFunction_671(data, threadData);

  Flowsheet_eqFunction_672(data, threadData);

  Flowsheet_eqFunction_673(data, threadData);

  Flowsheet_eqFunction_674(data, threadData);

  Flowsheet_eqFunction_675(data, threadData);

  Flowsheet_eqFunction_676(data, threadData);

  Flowsheet_eqFunction_677(data, threadData);

  Flowsheet_eqFunction_678(data, threadData);

  Flowsheet_eqFunction_679(data, threadData);

  Flowsheet_eqFunction_680(data, threadData);

  Flowsheet_eqFunction_721(data, threadData);

  Flowsheet_eqFunction_722(data, threadData);

  Flowsheet_eqFunction_723(data, threadData);

  Flowsheet_eqFunction_724(data, threadData);

  Flowsheet_eqFunction_725(data, threadData);

  Flowsheet_eqFunction_726(data, threadData);

  Flowsheet_eqFunction_727(data, threadData);

  Flowsheet_eqFunction_728(data, threadData);

  Flowsheet_eqFunction_729(data, threadData);

  Flowsheet_eqFunction_730(data, threadData);

  Flowsheet_eqFunction_731(data, threadData);

  Flowsheet_eqFunction_732(data, threadData);

  Flowsheet_eqFunction_733(data, threadData);

  Flowsheet_eqFunction_734(data, threadData);

  Flowsheet_eqFunction_735(data, threadData);

  Flowsheet_eqFunction_736(data, threadData);

  Flowsheet_eqFunction_737(data, threadData);

  Flowsheet_eqFunction_738(data, threadData);

  Flowsheet_eqFunction_739(data, threadData);

  Flowsheet_eqFunction_740(data, threadData);

  Flowsheet_eqFunction_741(data, threadData);

  Flowsheet_eqFunction_742(data, threadData);

  Flowsheet_eqFunction_743(data, threadData);

  Flowsheet_eqFunction_744(data, threadData);

  Flowsheet_eqFunction_745(data, threadData);

  Flowsheet_eqFunction_746(data, threadData);

  Flowsheet_eqFunction_747(data, threadData);

  Flowsheet_eqFunction_748(data, threadData);

  Flowsheet_eqFunction_749(data, threadData);

  Flowsheet_eqFunction_750(data, threadData);

  Flowsheet_eqFunction_751(data, threadData);

  Flowsheet_eqFunction_752(data, threadData);

  Flowsheet_eqFunction_753(data, threadData);

  Flowsheet_eqFunction_754(data, threadData);

  Flowsheet_eqFunction_755(data, threadData);

  Flowsheet_eqFunction_756(data, threadData);

  Flowsheet_eqFunction_757(data, threadData);

  Flowsheet_eqFunction_758(data, threadData);

  Flowsheet_eqFunction_759(data, threadData);

  Flowsheet_eqFunction_760(data, threadData);

  Flowsheet_eqFunction_761(data, threadData);

  Flowsheet_eqFunction_762(data, threadData);
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
  data->modelData->modelGUID = "{ac60e8d7-1d50-46fb-9986-276ac989b7b6}";
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
  data->modelData->nVariablesReal = 483;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 1422;
  data->modelData->nParametersInteger = 36;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 37;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 216;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 2;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 2;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.fileName = "Flowsheet_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 7;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 2379;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 8;
  data->modelData->nNonLinearSystems = 8;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 10;
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


