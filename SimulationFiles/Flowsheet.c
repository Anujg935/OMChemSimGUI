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
equation index: 354
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,3] = 200.0 * MatStm1.compMolFrac[1,3]
*/
void Flowsheet_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  data->localData[0]->realVars[58] /* MatStm1.compMolFlo[1,3] variable */ = (200.0) * (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[1,3] variable */);
  TRACE_POP
}
/*
equation index: 355
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,3] = MatStm1.compMolFlo[1,3] * MatStm1.comp[3].MW
*/
void Flowsheet_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,3] variable */ = (data->localData[0]->realVars[58] /* MatStm1.compMolFlo[1,3] variable */) * (data->simulationInfo->realParameter[365]);
  TRACE_POP
}
/*
equation index: 356
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,2] = 200.0 * MatStm1.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->localData[0]->realVars[57] /* MatStm1.compMolFlo[1,2] variable */ = (200.0) * (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[1,2] variable */);
  TRACE_POP
}
/*
equation index: 357
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,2] = MatStm1.compMolFlo[1,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[57] /* MatStm1.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[364]);
  TRACE_POP
}
/*
equation index: 358
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,1] = 200.0 * MatStm1.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->localData[0]->realVars[56] /* MatStm1.compMolFlo[1,1] variable */ = (200.0) * (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */);
  TRACE_POP
}
/*
equation index: 359
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,1] = MatStm1.compMolFlo[1,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[56] /* MatStm1.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[363]);
  TRACE_POP
}
void Flowsheet_eqFunction_360(DATA*, threadData_t*);
void Flowsheet_eqFunction_361(DATA*, threadData_t*);
void Flowsheet_eqFunction_362(DATA*, threadData_t*);
void Flowsheet_eqFunction_363(DATA*, threadData_t*);
void Flowsheet_eqFunction_364(DATA*, threadData_t*);
void Flowsheet_eqFunction_365(DATA*, threadData_t*);
void Flowsheet_eqFunction_366(DATA*, threadData_t*);
void Flowsheet_eqFunction_367(DATA*, threadData_t*);
void Flowsheet_eqFunction_368(DATA*, threadData_t*);
void Flowsheet_eqFunction_375(DATA*, threadData_t*);
void Flowsheet_eqFunction_374(DATA*, threadData_t*);
void Flowsheet_eqFunction_373(DATA*, threadData_t*);
void Flowsheet_eqFunction_372(DATA*, threadData_t*);
void Flowsheet_eqFunction_371(DATA*, threadData_t*);
void Flowsheet_eqFunction_370(DATA*, threadData_t*);
void Flowsheet_eqFunction_369(DATA*, threadData_t*);
/*
equation index: 392
indexNonlinear: 3
type: NONLINEAR

vars: {MatStm2._totMolFlo[2], MatStm2._compMolFrac[2,2], MatStm2._compMolFrac[3,2], MatStm2._compMolFrac[2,1], MatStm2._compMolFrac[3,1], MatStm2._compMolFrac[2,3], MatStm2._compMolFrac[3,3]}
eqns: {360, 361, 362, 363, 364, 365, 366, 367, 368, 375, 374, 373, 372, 371, 370, 369}
*/
void Flowsheet_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 392 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[1] = data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[2] = data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[3] = data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[4] = data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[5] = data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[6] = data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,392};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 392 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[1];
  data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[2];
  data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[3];
  data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[4];
  data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[5];
  data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[6];
  TRACE_POP
}
/*
equation index: 393
type: ALGORITHM

  (MatStm2.compMolEntr[2,3], MatStm2.compMolEntr[3,3]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[3].AS, {MatStm2.comp[3].VapCp[1], MatStm2.comp[3].VapCp[2], MatStm2.comp[3].VapCp[3], MatStm2.comp[3].VapCp[4], MatStm2.comp[3].VapCp[5], MatStm2.comp[3].VapCp[6]}, {MatStm2.comp[3].HOV[1], MatStm2.comp[3].HOV[2], MatStm2.comp[3].HOV[3], MatStm2.comp[3].HOV[4], MatStm2.comp[3].HOV[5], MatStm2.comp[3].HOV[6]}, MatStm2.comp[3].Tb, MatStm2.comp[3].Tc, 300.0, 101325.0, MatStm2.compMolFrac[2,3], MatStm2.compMolFrac[3,3]);
*/
void Flowsheet_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[666], (modelica_real)data->simulationInfo->realParameter[667], (modelica_real)data->simulationInfo->realParameter[668], (modelica_real)data->simulationInfo->realParameter[669], (modelica_real)data->simulationInfo->realParameter[670], (modelica_real)data->simulationInfo->realParameter[671]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521]);
  data->localData[0]->realVars[171] /* MatStm2.compMolEntr[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[479], tmp0, tmp1, data->simulationInfo->realParameter[623], data->simulationInfo->realParameter[626], 300.0, 101325.0, data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */, data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */ ,&data->localData[0]->realVars[174] /* MatStm2.compMolEntr[3,3] variable */);
  TRACE_POP
}
/*
equation index: 394
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[2,3] = MatStm2.compMolFlo[2,3] * MatStm2.comp[3].MW
*/
void Flowsheet_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->localData[0]->realVars[144] /* MatStm2.compMasFlo[2,3] variable */ = (data->localData[0]->realVars[180] /* MatStm2.compMolFlo[2,3] variable */) * (data->simulationInfo->realParameter[602]);
  TRACE_POP
}
/*
equation index: 395
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[3,3] = MatStm2.compMolFlo[3,3] * MatStm2.comp[3].MW
*/
void Flowsheet_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->localData[0]->realVars[147] /* MatStm2.compMasFlo[3,3] variable */ = (data->localData[0]->realVars[183] /* MatStm2.compMolFlo[3,3] variable */) * (data->simulationInfo->realParameter[602]);
  TRACE_POP
}
/*
equation index: 396
type: ALGORITHM

  (MatStm2.compMolEntr[2,1], MatStm2.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[1].AS, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tb, MatStm2.comp[1].Tc, 300.0, 101325.0, MatStm2.compMolFrac[2,1], MatStm2.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[654], (modelica_real)data->simulationInfo->realParameter[655], (modelica_real)data->simulationInfo->realParameter[656], (modelica_real)data->simulationInfo->realParameter[657], (modelica_real)data->simulationInfo->realParameter[658], (modelica_real)data->simulationInfo->realParameter[659]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[504], (modelica_real)data->simulationInfo->realParameter[505], (modelica_real)data->simulationInfo->realParameter[506], (modelica_real)data->simulationInfo->realParameter[507], (modelica_real)data->simulationInfo->realParameter[508], (modelica_real)data->simulationInfo->realParameter[509]);
  data->localData[0]->realVars[169] /* MatStm2.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[477], tmp2, tmp3, data->simulationInfo->realParameter[621], data->simulationInfo->realParameter[624], 300.0, 101325.0, data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */, data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[172] /* MatStm2.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 397
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolSpHeat[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolSpHeat[3,2] + MatStm2.compMolFrac[3,3] * MatStm2.compMolSpHeat[3,3]
*/
void Flowsheet_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->localData[0]->realVars[224] /* MatStm2.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[199] /* MatStm2.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[200] /* MatStm2.compMolSpHeat[3,2] variable */) + (data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[201] /* MatStm2.compMolSpHeat[3,3] variable */);
  TRACE_POP
}
/*
equation index: 398
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolEnth[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolEnth[3,2] + MatStm2.compMolFrac[3,3] * MatStm2.compMolEnth[3,3]
*/
void Flowsheet_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  data->localData[0]->realVars[218] /* MatStm2.phasMolEnth[3] variable */ = (data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[163] /* MatStm2.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[164] /* MatStm2.compMolEnth[3,2] variable */) + (data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[165] /* MatStm2.compMolEnth[3,3] variable */);
  TRACE_POP
}
/*
equation index: 399
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolSpHeat[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolSpHeat[2,2] + MatStm2.compMolFrac[2,3] * MatStm2.compMolSpHeat[2,3]
*/
void Flowsheet_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->localData[0]->realVars[223] /* MatStm2.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[196] /* MatStm2.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[197] /* MatStm2.compMolSpHeat[2,2] variable */) + (data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[198] /* MatStm2.compMolSpHeat[2,3] variable */);
  TRACE_POP
}
/*
equation index: 400
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolEnth[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolEnth[2,2] + MatStm2.compMolFrac[2,3] * MatStm2.compMolEnth[2,3]
*/
void Flowsheet_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->localData[0]->realVars[217] /* MatStm2.phasMolEnth[2] variable */ = (data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[160] /* MatStm2.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[161] /* MatStm2.compMolEnth[2,2] variable */) + (data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[162] /* MatStm2.compMolEnth[2,3] variable */);
  TRACE_POP
}
/*
equation index: 401
type: ALGORITHM

  (MatStm2.compMolEntr[2,2], MatStm2.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[2].AS, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tb, MatStm2.comp[2].Tc, 300.0, 101325.0, MatStm2.compMolFrac[2,2], MatStm2.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  real_array tmp4;
  real_array tmp5;
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[660], (modelica_real)data->simulationInfo->realParameter[661], (modelica_real)data->simulationInfo->realParameter[662], (modelica_real)data->simulationInfo->realParameter[663], (modelica_real)data->simulationInfo->realParameter[664], (modelica_real)data->simulationInfo->realParameter[665]);
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[510], (modelica_real)data->simulationInfo->realParameter[511], (modelica_real)data->simulationInfo->realParameter[512], (modelica_real)data->simulationInfo->realParameter[513], (modelica_real)data->simulationInfo->realParameter[514], (modelica_real)data->simulationInfo->realParameter[515]);
  data->localData[0]->realVars[170] /* MatStm2.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[478], tmp4, tmp5, data->simulationInfo->realParameter[622], data->simulationInfo->realParameter[625], 300.0, 101325.0, data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */, data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[173] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 402
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolEntr[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolEntr[3,2] + MatStm2.compMolFrac[3,3] * MatStm2.compMolEntr[3,3]
*/
void Flowsheet_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  data->localData[0]->realVars[221] /* MatStm2.phasMolEntr[3] variable */ = (data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[172] /* MatStm2.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[173] /* MatStm2.compMolEntr[3,2] variable */) + (data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[174] /* MatStm2.compMolEntr[3,3] variable */);
  TRACE_POP
}
/*
equation index: 403
type: ALGORITHM

  MatStm2.MW[3] := $START.MatStm2.MW[3];
  MatStm2.MW[2] := $START.MatStm2.MW[2];
  MatStm2.MW[1] := $START.MatStm2.MW[1];
  for i in 1:3 loop
    MatStm2.MW[:] := {MatStm2.MW[1] + MatStm2.compMolFrac[1,i] * MatStm2.comp[i].MW, MatStm2.MW[2] + MatStm2.compMolFrac[2,i] * MatStm2.comp[i].MW, MatStm2.MW[3] + MatStm2.compMolFrac[3,i] * MatStm2.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
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
equation index: 404
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[1] = 100.0 * MatStm2.MW[1]
*/
void Flowsheet_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */ = (100.0) * (data->localData[0]->realVars[129] /* MatStm2.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 405
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolEntr[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolEntr[2,2] + MatStm2.compMolFrac[2,3] * MatStm2.compMolEntr[2,3]
*/
void Flowsheet_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  data->localData[0]->realVars[220] /* MatStm2.phasMolEntr[2] variable */ = (data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[169] /* MatStm2.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[170] /* MatStm2.compMolEntr[2,2] variable */) + (data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[171] /* MatStm2.compMolEntr[2,3] variable */);
  TRACE_POP
}
/*
equation index: 406
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[2,2] = MatStm2.compMolFlo[2,2] * MatStm2.comp[2].MW
*/
void Flowsheet_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  data->localData[0]->realVars[143] /* MatStm2.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[179] /* MatStm2.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[601]);
  TRACE_POP
}
/*
equation index: 407
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[3,2] = MatStm2.compMolFlo[3,2] * MatStm2.comp[2].MW
*/
void Flowsheet_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->localData[0]->realVars[146] /* MatStm2.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[182] /* MatStm2.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[601]);
  TRACE_POP
}
/*
equation index: 408
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[3] = MatStm2.totMolFlo[3] * MatStm2.MW[3]
*/
void Flowsheet_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */ = (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */) * (data->localData[0]->realVars[131] /* MatStm2.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 409
type: SIMPLE_ASSIGN
MatStm2._vapPhasMasFrac = MatStm2.totMasFlo[3] / MatStm2.totMasFlo[1]
*/
void Flowsheet_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->localData[0]->realVars[240] /* MatStm2.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */,data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 410
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[3,1] = MatStm2.compMolFlo[3,1] * MatStm2.comp[1].MW
*/
void Flowsheet_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->localData[0]->realVars[145] /* MatStm2.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[181] /* MatStm2.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[600]);
  TRACE_POP
}
/*
equation index: 411
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[2,1] = MatStm2.compMolFlo[2,1] * MatStm2.comp[1].MW
*/
void Flowsheet_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  data->localData[0]->realVars[142] /* MatStm2.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[178] /* MatStm2.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[600]);
  TRACE_POP
}
/*
equation index: 412
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[2] = MatStm2.totMolFlo[2] * MatStm2.MW[2]
*/
void Flowsheet_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */ = (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */) * (data->localData[0]->realVars[130] /* MatStm2.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 413
type: LINEAR

<var>MatStm2._compMasFrac[1,3]</var>
<var>MatStm2._compMasFrac[3,2]</var>
<var>MatStm2._compMasFrac[2,1]</var>
<var>MatStm2._compMasFrac[2,3]</var>
<var>MatStm2._compMasFrac[3,3]</var>
<var>MatStm2._compMasFrac[3,1]</var>
<var>MatStm2._compMasFrac[1,1]</var>
<var>MatStm2._compMasFrac[1,2]</var>
<var>MatStm2._compMasFrac[2,2]</var>
<row>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,2] else MatStm2.compMasFlo[1,2]</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,2] else MatStm2.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,3] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,2] else MatStm2.compMasFlo[1,3]</cell>
</row>
<matrix>
  <cell row="0" col="7">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101325.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="0" col="8">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="1" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="7">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="1" col="8">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="6">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101325.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="2" col="7">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else -0.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="5">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="6">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="4" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="5">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 0.0)</residual>
  </cell><cell row="5" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="5" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="5" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="6" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="6" col="5">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="6" col="6">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="7" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="7" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="7" col="8">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="8" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101325.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="8" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  /* Linear equation system */
  int retValue;
  double aux_x[9] = { data->localData[1]->realVars[150] /* MatStm2.compMasFrac[1,3] variable */,data->localData[1]->realVars[155] /* MatStm2.compMasFrac[3,2] variable */,data->localData[1]->realVars[151] /* MatStm2.compMasFrac[2,1] variable */,data->localData[1]->realVars[153] /* MatStm2.compMasFrac[2,3] variable */,data->localData[1]->realVars[156] /* MatStm2.compMasFrac[3,3] variable */,data->localData[1]->realVars[154] /* MatStm2.compMasFrac[3,1] variable */,data->localData[1]->realVars[148] /* MatStm2.compMasFrac[1,1] variable */,data->localData[1]->realVars[149] /* MatStm2.compMasFrac[1,2] variable */,data->localData[1]->realVars[152] /* MatStm2.compMasFrac[2,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 413 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 3, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,413};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 413 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[150] /* MatStm2.compMasFrac[1,3] variable */ = aux_x[0];
  data->localData[0]->realVars[155] /* MatStm2.compMasFrac[3,2] variable */ = aux_x[1];
  data->localData[0]->realVars[151] /* MatStm2.compMasFrac[2,1] variable */ = aux_x[2];
  data->localData[0]->realVars[153] /* MatStm2.compMasFrac[2,3] variable */ = aux_x[3];
  data->localData[0]->realVars[156] /* MatStm2.compMasFrac[3,3] variable */ = aux_x[4];
  data->localData[0]->realVars[154] /* MatStm2.compMasFrac[3,1] variable */ = aux_x[5];
  data->localData[0]->realVars[148] /* MatStm2.compMasFrac[1,1] variable */ = aux_x[6];
  data->localData[0]->realVars[149] /* MatStm2.compMasFrac[1,2] variable */ = aux_x[7];
  data->localData[0]->realVars[152] /* MatStm2.compMasFrac[2,2] variable */ = aux_x[8];
  TRACE_POP
}
/*
equation index: 414
type: SIMPLE_ASSIGN
MatStm2._liqPhasMasFrac = MatStm2.totMasFlo[2] / MatStm2.totMasFlo[1]
*/
void Flowsheet_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->localData[0]->realVars[211] /* MatStm2.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */,data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 415
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolSpHeat[2] + Mixer1.inVapPhasMolFrac[2] * MatStm2.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->localData[0]->realVars[222] /* MatStm2.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[223] /* MatStm2.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[363] /* Mixer1.inVapPhasMolFrac[2] variable */) * (data->localData[0]->realVars[224] /* MatStm2.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 416
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  data->localData[0]->realVars[193] /* MatStm2.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[222] /* MatStm2.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 417
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[1,2] = MatStm2.compMolFrac[1,2] * MatStm2.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->localData[0]->realVars[194] /* MatStm2.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[185] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[222] /* MatStm2.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 418
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[1,3] = MatStm2.compMolFrac[1,3] * MatStm2.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->localData[0]->realVars[195] /* MatStm2.compMolSpHeat[1,3] variable */ = (data->localData[0]->realVars[186] /* MatStm2.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[222] /* MatStm2.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 419
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolEnth[2] + Mixer1.inVapPhasMolFrac[2] * MatStm2.phasMolEnth[3]
*/
void Flowsheet_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->localData[0]->realVars[216] /* MatStm2.phasMolEnth[1] variable */ = (data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[217] /* MatStm2.phasMolEnth[2] variable */) + (data->localData[0]->realVars[363] /* Mixer1.inVapPhasMolFrac[2] variable */) * (data->localData[0]->realVars[218] /* MatStm2.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 420
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolEnth[1]
*/
void Flowsheet_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->localData[0]->realVars[157] /* MatStm2.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[216] /* MatStm2.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 421
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[1,2] = MatStm2.compMolFrac[1,2] * MatStm2.phasMolEnth[1]
*/
void Flowsheet_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->localData[0]->realVars[158] /* MatStm2.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[185] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[216] /* MatStm2.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 422
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[1,3] = MatStm2.compMolFrac[1,3] * MatStm2.phasMolEnth[1]
*/
void Flowsheet_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  data->localData[0]->realVars[159] /* MatStm2.compMolEnth[1,3] variable */ = (data->localData[0]->realVars[186] /* MatStm2.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[216] /* MatStm2.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 423
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolEntr[2] + Mixer1.inVapPhasMolFrac[2] * MatStm2.phasMolEntr[3]
*/
void Flowsheet_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->localData[0]->realVars[219] /* MatStm2.phasMolEntr[1] variable */ = (data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[220] /* MatStm2.phasMolEntr[2] variable */) + (data->localData[0]->realVars[363] /* Mixer1.inVapPhasMolFrac[2] variable */) * (data->localData[0]->realVars[221] /* MatStm2.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 424
type: SIMPLE_ASSIGN
MatStm2._compMolEntr[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolEntr[1]
*/
void Flowsheet_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->localData[0]->realVars[166] /* MatStm2.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[184] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[219] /* MatStm2.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 425
type: SIMPLE_ASSIGN
MatStm2._compMolEntr[1,2] = MatStm2.compMolFrac[1,2] * MatStm2.phasMolEntr[1]
*/
void Flowsheet_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->localData[0]->realVars[167] /* MatStm2.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[185] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[219] /* MatStm2.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 426
type: SIMPLE_ASSIGN
MatStm2._compMolEntr[1,3] = MatStm2.compMolFrac[1,3] * MatStm2.phasMolEntr[1]
*/
void Flowsheet_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  data->localData[0]->realVars[168] /* MatStm2.compMolEntr[1,3] variable */ = (data->localData[0]->realVars[186] /* MatStm2.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[219] /* MatStm2.phasMolEntr[1] variable */);
  TRACE_POP
}
void Flowsheet_eqFunction_427(DATA*, threadData_t*);
void Flowsheet_eqFunction_428(DATA*, threadData_t*);
void Flowsheet_eqFunction_429(DATA*, threadData_t*);
void Flowsheet_eqFunction_430(DATA*, threadData_t*);
void Flowsheet_eqFunction_431(DATA*, threadData_t*);
void Flowsheet_eqFunction_432(DATA*, threadData_t*);
void Flowsheet_eqFunction_433(DATA*, threadData_t*);
void Flowsheet_eqFunction_434(DATA*, threadData_t*);
void Flowsheet_eqFunction_435(DATA*, threadData_t*);
void Flowsheet_eqFunction_442(DATA*, threadData_t*);
void Flowsheet_eqFunction_441(DATA*, threadData_t*);
void Flowsheet_eqFunction_440(DATA*, threadData_t*);
void Flowsheet_eqFunction_439(DATA*, threadData_t*);
void Flowsheet_eqFunction_438(DATA*, threadData_t*);
void Flowsheet_eqFunction_437(DATA*, threadData_t*);
void Flowsheet_eqFunction_436(DATA*, threadData_t*);
/*
equation index: 459
indexNonlinear: 4
type: NONLINEAR

vars: {MatStm3._totMolFlo[3], MatStm3._compMolFrac[2,2], MatStm3._compMolFrac[2,1], MatStm3._compMolFrac[3,1], MatStm3._compMolFrac[3,2], MatStm3._compMolFrac[3,3], MatStm3._compMolFrac[2,3]}
eqns: {427, 428, 429, 430, 431, 432, 433, 434, 435, 442, 441, 440, 439, 438, 437, 436}
*/
void Flowsheet_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 459 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[1] = data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[2] = data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[3] = data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[4] = data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[5] = data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[6] = data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,459};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 459 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[1];
  data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[2];
  data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[3];
  data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[4];
  data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[5];
  data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[6];
  TRACE_POP
}
/*
equation index: 460
type: ALGORITHM

  (MatStm3.compMolEntr[2,3], MatStm3.compMolEntr[3,3]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[3].AS, {MatStm3.comp[3].VapCp[1], MatStm3.comp[3].VapCp[2], MatStm3.comp[3].VapCp[3], MatStm3.comp[3].VapCp[4], MatStm3.comp[3].VapCp[5], MatStm3.comp[3].VapCp[6]}, {MatStm3.comp[3].HOV[1], MatStm3.comp[3].HOV[2], MatStm3.comp[3].HOV[3], MatStm3.comp[3].HOV[4], MatStm3.comp[3].HOV[5], MatStm3.comp[3].HOV[6]}, MatStm3.comp[3].Tb, MatStm3.comp[3].Tc, 300.0, 101325.0, MatStm3.compMolFrac[2,3], MatStm3.compMolFrac[3,3]);
*/
void Flowsheet_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[903], (modelica_real)data->simulationInfo->realParameter[904], (modelica_real)data->simulationInfo->realParameter[905], (modelica_real)data->simulationInfo->realParameter[906], (modelica_real)data->simulationInfo->realParameter[907], (modelica_real)data->simulationInfo->realParameter[908]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[753], (modelica_real)data->simulationInfo->realParameter[754], (modelica_real)data->simulationInfo->realParameter[755], (modelica_real)data->simulationInfo->realParameter[756], (modelica_real)data->simulationInfo->realParameter[757], (modelica_real)data->simulationInfo->realParameter[758]);
  data->localData[0]->realVars[289] /* MatStm3.compMolEntr[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[716], tmp0, tmp1, data->simulationInfo->realParameter[860], data->simulationInfo->realParameter[863], 300.0, 101325.0, data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */, data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */ ,&data->localData[0]->realVars[292] /* MatStm3.compMolEntr[3,3] variable */);
  TRACE_POP
}
/*
equation index: 461
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[3,3] = MatStm3.compMolFlo[3,3] * MatStm3.comp[3].MW
*/
void Flowsheet_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  data->localData[0]->realVars[265] /* MatStm3.compMasFlo[3,3] variable */ = (data->localData[0]->realVars[301] /* MatStm3.compMolFlo[3,3] variable */) * (data->simulationInfo->realParameter[839]);
  TRACE_POP
}
/*
equation index: 462
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[2,3] = MatStm3.compMolFlo[2,3] * MatStm3.comp[3].MW
*/
void Flowsheet_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  data->localData[0]->realVars[262] /* MatStm3.compMasFlo[2,3] variable */ = (data->localData[0]->realVars[298] /* MatStm3.compMolFlo[2,3] variable */) * (data->simulationInfo->realParameter[839]);
  TRACE_POP
}
/*
equation index: 463
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[2,2] = MatStm3.compMolFlo[2,2] * MatStm3.comp[2].MW
*/
void Flowsheet_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->localData[0]->realVars[261] /* MatStm3.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[297] /* MatStm3.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[838]);
  TRACE_POP
}
/*
equation index: 464
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[3,2] = MatStm3.compMolFlo[3,2] * MatStm3.comp[2].MW
*/
void Flowsheet_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  data->localData[0]->realVars[264] /* MatStm3.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[300] /* MatStm3.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[838]);
  TRACE_POP
}
/*
equation index: 465
type: SIMPLE_ASSIGN
MatStm3._phasMolSpHeat[3] = MatStm3.compMolFrac[3,1] * MatStm3.compMolSpHeat[3,1] + MatStm3.compMolFrac[3,2] * MatStm3.compMolSpHeat[3,2] + MatStm3.compMolFrac[3,3] * MatStm3.compMolSpHeat[3,3]
*/
void Flowsheet_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  data->localData[0]->realVars[342] /* MatStm3.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[317] /* MatStm3.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[318] /* MatStm3.compMolSpHeat[3,2] variable */) + (data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[319] /* MatStm3.compMolSpHeat[3,3] variable */);
  TRACE_POP
}
/*
equation index: 466
type: SIMPLE_ASSIGN
MatStm3._phasMolEnth[3] = MatStm3.compMolFrac[3,1] * MatStm3.compMolEnth[3,1] + MatStm3.compMolFrac[3,2] * MatStm3.compMolEnth[3,2] + MatStm3.compMolFrac[3,3] * MatStm3.compMolEnth[3,3]
*/
void Flowsheet_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->localData[0]->realVars[336] /* MatStm3.phasMolEnth[3] variable */ = (data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[281] /* MatStm3.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[282] /* MatStm3.compMolEnth[3,2] variable */) + (data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[283] /* MatStm3.compMolEnth[3,3] variable */);
  TRACE_POP
}
/*
equation index: 467
type: ALGORITHM

  (MatStm3.compMolEntr[2,1], MatStm3.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[1].AS, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tb, MatStm3.comp[1].Tc, 300.0, 101325.0, MatStm3.compMolFrac[2,1], MatStm3.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[891], (modelica_real)data->simulationInfo->realParameter[892], (modelica_real)data->simulationInfo->realParameter[893], (modelica_real)data->simulationInfo->realParameter[894], (modelica_real)data->simulationInfo->realParameter[895], (modelica_real)data->simulationInfo->realParameter[896]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[741], (modelica_real)data->simulationInfo->realParameter[742], (modelica_real)data->simulationInfo->realParameter[743], (modelica_real)data->simulationInfo->realParameter[744], (modelica_real)data->simulationInfo->realParameter[745], (modelica_real)data->simulationInfo->realParameter[746]);
  data->localData[0]->realVars[287] /* MatStm3.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[714], tmp2, tmp3, data->simulationInfo->realParameter[858], data->simulationInfo->realParameter[861], 300.0, 101325.0, data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */, data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[290] /* MatStm3.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 468
type: SIMPLE_ASSIGN
MatStm3._phasMolSpHeat[2] = MatStm3.compMolFrac[2,1] * MatStm3.compMolSpHeat[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.compMolSpHeat[2,2] + MatStm3.compMolFrac[2,3] * MatStm3.compMolSpHeat[2,3]
*/
void Flowsheet_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  data->localData[0]->realVars[341] /* MatStm3.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[314] /* MatStm3.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[315] /* MatStm3.compMolSpHeat[2,2] variable */) + (data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[316] /* MatStm3.compMolSpHeat[2,3] variable */);
  TRACE_POP
}
/*
equation index: 469
type: SIMPLE_ASSIGN
MatStm3._phasMolEnth[2] = MatStm3.compMolFrac[2,1] * MatStm3.compMolEnth[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.compMolEnth[2,2] + MatStm3.compMolFrac[2,3] * MatStm3.compMolEnth[2,3]
*/
void Flowsheet_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  data->localData[0]->realVars[335] /* MatStm3.phasMolEnth[2] variable */ = (data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[278] /* MatStm3.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[279] /* MatStm3.compMolEnth[2,2] variable */) + (data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[280] /* MatStm3.compMolEnth[2,3] variable */);
  TRACE_POP
}
/*
equation index: 470
type: ALGORITHM

  MatStm3.MW[3] := $START.MatStm3.MW[3];
  MatStm3.MW[2] := $START.MatStm3.MW[2];
  MatStm3.MW[1] := $START.MatStm3.MW[1];
  for i in 1:3 loop
    MatStm3.MW[:] := {MatStm3.MW[1] + MatStm3.compMolFrac[1,i] * MatStm3.comp[i].MW, MatStm3.MW[2] + MatStm3.compMolFrac[2,i] * MatStm3.comp[i].MW, MatStm3.MW[3] + MatStm3.compMolFrac[3,i] * MatStm3.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
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
equation index: 471
type: SIMPLE_ASSIGN
MatStm3._totMasFlo[1] = 100.0 * MatStm3.MW[1]
*/
void Flowsheet_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */ = (100.0) * (data->localData[0]->realVars[247] /* MatStm3.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 472
type: ALGORITHM

  (MatStm3.compMolEntr[2,2], MatStm3.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[2].AS, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tb, MatStm3.comp[2].Tc, 300.0, 101325.0, MatStm3.compMolFrac[2,2], MatStm3.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[897], (modelica_real)data->simulationInfo->realParameter[898], (modelica_real)data->simulationInfo->realParameter[899], (modelica_real)data->simulationInfo->realParameter[900], (modelica_real)data->simulationInfo->realParameter[901], (modelica_real)data->simulationInfo->realParameter[902]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[747], (modelica_real)data->simulationInfo->realParameter[748], (modelica_real)data->simulationInfo->realParameter[749], (modelica_real)data->simulationInfo->realParameter[750], (modelica_real)data->simulationInfo->realParameter[751], (modelica_real)data->simulationInfo->realParameter[752]);
  data->localData[0]->realVars[288] /* MatStm3.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[715], tmp10, tmp11, data->simulationInfo->realParameter[859], data->simulationInfo->realParameter[862], 300.0, 101325.0, data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */, data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[291] /* MatStm3.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 473
type: SIMPLE_ASSIGN
MatStm3._phasMolEntr[3] = MatStm3.compMolFrac[3,1] * MatStm3.compMolEntr[3,1] + MatStm3.compMolFrac[3,2] * MatStm3.compMolEntr[3,2] + MatStm3.compMolFrac[3,3] * MatStm3.compMolEntr[3,3]
*/
void Flowsheet_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->localData[0]->realVars[339] /* MatStm3.phasMolEntr[3] variable */ = (data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[290] /* MatStm3.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[291] /* MatStm3.compMolEntr[3,2] variable */) + (data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[292] /* MatStm3.compMolEntr[3,3] variable */);
  TRACE_POP
}
/*
equation index: 474
type: SIMPLE_ASSIGN
MatStm3._phasMolEntr[2] = MatStm3.compMolFrac[2,1] * MatStm3.compMolEntr[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.compMolEntr[2,2] + MatStm3.compMolFrac[2,3] * MatStm3.compMolEntr[2,3]
*/
void Flowsheet_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->localData[0]->realVars[338] /* MatStm3.phasMolEntr[2] variable */ = (data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[287] /* MatStm3.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[288] /* MatStm3.compMolEntr[2,2] variable */) + (data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[289] /* MatStm3.compMolEntr[2,3] variable */);
  TRACE_POP
}
/*
equation index: 475
type: SIMPLE_ASSIGN
MatStm3._totMasFlo[2] = MatStm3.totMolFlo[2] * MatStm3.MW[2]
*/
void Flowsheet_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */ = (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */) * (data->localData[0]->realVars[248] /* MatStm3.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 476
type: SIMPLE_ASSIGN
MatStm3._liqPhasMasFrac = MatStm3.totMasFlo[2] / MatStm3.totMasFlo[1]
*/
void Flowsheet_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  data->localData[0]->realVars[329] /* MatStm3.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */,data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */,"MatStm3.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 477
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[2,1] = MatStm3.compMolFlo[2,1] * MatStm3.comp[1].MW
*/
void Flowsheet_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  data->localData[0]->realVars[260] /* MatStm3.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[296] /* MatStm3.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[837]);
  TRACE_POP
}
/*
equation index: 478
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[3,1] = MatStm3.compMolFlo[3,1] * MatStm3.comp[1].MW
*/
void Flowsheet_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  data->localData[0]->realVars[263] /* MatStm3.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[299] /* MatStm3.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[837]);
  TRACE_POP
}
/*
equation index: 479
type: SIMPLE_ASSIGN
MatStm3._totMasFlo[3] = MatStm3.totMolFlo[3] * MatStm3.MW[3]
*/
void Flowsheet_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */ = (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */) * (data->localData[0]->realVars[249] /* MatStm3.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 480
type: SIMPLE_ASSIGN
MatStm3._vapPhasMasFrac = MatStm3.totMasFlo[3] / MatStm3.totMasFlo[1]
*/
void Flowsheet_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->localData[0]->realVars[358] /* MatStm3.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */,data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */,"MatStm3.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 481
type: LINEAR

<var>MatStm3._compMasFrac[1,1]</var>
<var>MatStm3._compMasFrac[1,2]</var>
<var>MatStm3._compMasFrac[2,2]</var>
<var>MatStm3._compMasFrac[3,3]</var>
<var>MatStm3._compMasFrac[3,1]</var>
<var>MatStm3._compMasFrac[2,1]</var>
<var>MatStm3._compMasFrac[1,3]</var>
<var>MatStm3._compMasFrac[2,3]</var>
<var>MatStm3._compMasFrac[3,2]</var>
<row>
  <cell>if 101325.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,3] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,2] else MatStm3.compMasFlo[1,3]</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,2] else MatStm3.compMasFlo[1,2]</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,2] else MatStm3.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="6">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101325.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell><cell row="0" col="8">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="1" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -1.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="7">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="8">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="2" col="6">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -1.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="7">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -1.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="3" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="5">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="6">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="5">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="5" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="5" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else 0.0)</residual>
  </cell><cell row="5" col="7">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="6" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="6" col="5">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="6" col="8">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="7" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101325.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell><cell row="7" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="8" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101325.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell><cell row="8" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  /* Linear equation system */
  int retValue;
  double aux_x[9] = { data->localData[1]->realVars[266] /* MatStm3.compMasFrac[1,1] variable */,data->localData[1]->realVars[267] /* MatStm3.compMasFrac[1,2] variable */,data->localData[1]->realVars[270] /* MatStm3.compMasFrac[2,2] variable */,data->localData[1]->realVars[274] /* MatStm3.compMasFrac[3,3] variable */,data->localData[1]->realVars[272] /* MatStm3.compMasFrac[3,1] variable */,data->localData[1]->realVars[269] /* MatStm3.compMasFrac[2,1] variable */,data->localData[1]->realVars[268] /* MatStm3.compMasFrac[1,3] variable */,data->localData[1]->realVars[271] /* MatStm3.compMasFrac[2,3] variable */,data->localData[1]->realVars[273] /* MatStm3.compMasFrac[3,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 481 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 4, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,481};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 481 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[266] /* MatStm3.compMasFrac[1,1] variable */ = aux_x[0];
  data->localData[0]->realVars[267] /* MatStm3.compMasFrac[1,2] variable */ = aux_x[1];
  data->localData[0]->realVars[270] /* MatStm3.compMasFrac[2,2] variable */ = aux_x[2];
  data->localData[0]->realVars[274] /* MatStm3.compMasFrac[3,3] variable */ = aux_x[3];
  data->localData[0]->realVars[272] /* MatStm3.compMasFrac[3,1] variable */ = aux_x[4];
  data->localData[0]->realVars[269] /* MatStm3.compMasFrac[2,1] variable */ = aux_x[5];
  data->localData[0]->realVars[268] /* MatStm3.compMasFrac[1,3] variable */ = aux_x[6];
  data->localData[0]->realVars[271] /* MatStm3.compMasFrac[2,3] variable */ = aux_x[7];
  data->localData[0]->realVars[273] /* MatStm3.compMasFrac[3,2] variable */ = aux_x[8];
  TRACE_POP
}
/*
equation index: 482
type: SIMPLE_ASSIGN
MatStm3._phasMolSpHeat[1] = MatStm3.liqPhasMolFrac * MatStm3.phasMolSpHeat[2] + Mixer1.inVapPhasMolFrac[1] * MatStm3.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  data->localData[0]->realVars[340] /* MatStm3.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */) * (data->localData[0]->realVars[341] /* MatStm3.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[362] /* Mixer1.inVapPhasMolFrac[1] variable */) * (data->localData[0]->realVars[342] /* MatStm3.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 483
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[1,1] = MatStm3.compMolFrac[1,1] * MatStm3.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  data->localData[0]->realVars[311] /* MatStm3.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[340] /* MatStm3.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 484
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[1,2] = MatStm3.compMolFrac[1,2] * MatStm3.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  data->localData[0]->realVars[312] /* MatStm3.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[303] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[340] /* MatStm3.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 485
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[1,3] = MatStm3.compMolFrac[1,3] * MatStm3.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  data->localData[0]->realVars[313] /* MatStm3.compMolSpHeat[1,3] variable */ = (data->localData[0]->realVars[304] /* MatStm3.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[340] /* MatStm3.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 486
type: SIMPLE_ASSIGN
MatStm3._phasMolEnth[1] = MatStm3.liqPhasMolFrac * MatStm3.phasMolEnth[2] + Mixer1.inVapPhasMolFrac[1] * MatStm3.phasMolEnth[3]
*/
void Flowsheet_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->localData[0]->realVars[334] /* MatStm3.phasMolEnth[1] variable */ = (data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */) * (data->localData[0]->realVars[335] /* MatStm3.phasMolEnth[2] variable */) + (data->localData[0]->realVars[362] /* Mixer1.inVapPhasMolFrac[1] variable */) * (data->localData[0]->realVars[336] /* MatStm3.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 487
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[1,1] = MatStm3.compMolFrac[1,1] * MatStm3.phasMolEnth[1]
*/
void Flowsheet_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->localData[0]->realVars[275] /* MatStm3.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[334] /* MatStm3.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 488
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[1,2] = MatStm3.compMolFrac[1,2] * MatStm3.phasMolEnth[1]
*/
void Flowsheet_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  data->localData[0]->realVars[276] /* MatStm3.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[303] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[334] /* MatStm3.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 489
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[1,3] = MatStm3.compMolFrac[1,3] * MatStm3.phasMolEnth[1]
*/
void Flowsheet_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  data->localData[0]->realVars[277] /* MatStm3.compMolEnth[1,3] variable */ = (data->localData[0]->realVars[304] /* MatStm3.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[334] /* MatStm3.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 490
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[1] = 0.5 * (MatStm3.phasMolEnth[1] + MatStm2.phasMolEnth[1])
*/
void Flowsheet_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->localData[0]->realVars[97] /* MatStm1.phasMolEnth[1] variable */ = (0.5) * (data->localData[0]->realVars[334] /* MatStm3.phasMolEnth[1] variable */ + data->localData[0]->realVars[216] /* MatStm2.phasMolEnth[1] variable */);
  TRACE_POP
}
void Flowsheet_eqFunction_491(DATA*, threadData_t*);
void Flowsheet_eqFunction_492(DATA*, threadData_t*);
void Flowsheet_eqFunction_493(DATA*, threadData_t*);
void Flowsheet_eqFunction_494(DATA*, threadData_t*);
void Flowsheet_eqFunction_495(DATA*, threadData_t*);
void Flowsheet_eqFunction_496(DATA*, threadData_t*);
void Flowsheet_eqFunction_497(DATA*, threadData_t*);
void Flowsheet_eqFunction_498(DATA*, threadData_t*);
void Flowsheet_eqFunction_499(DATA*, threadData_t*);
void Flowsheet_eqFunction_500(DATA*, threadData_t*);
void Flowsheet_eqFunction_501(DATA*, threadData_t*);
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
void Flowsheet_eqFunction_530(DATA*, threadData_t*);
void Flowsheet_eqFunction_529(DATA*, threadData_t*);
void Flowsheet_eqFunction_528(DATA*, threadData_t*);
void Flowsheet_eqFunction_527(DATA*, threadData_t*);
void Flowsheet_eqFunction_526(DATA*, threadData_t*);
void Flowsheet_eqFunction_525(DATA*, threadData_t*);
void Flowsheet_eqFunction_524(DATA*, threadData_t*);
void Flowsheet_eqFunction_523(DATA*, threadData_t*);
/*
equation index: 531
indexNonlinear: 5
type: NONLINEAR

vars: {MatStm1._totMolFlo[3], MatStm1._T, MatStm1._compMolFrac[2,3], MatStm1._compMolFrac[3,3], MatStm1._compMolFrac[2,1], MatStm1._compMolFrac[2,2], MatStm1._compMolFrac[3,2], MatStm1._compMolFrac[3,1]}
eqns: {491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 530, 529, 528, 527, 526, 525, 524, 523}
*/
void Flowsheet_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 531 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[1] = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[2] = data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[3] = data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[4] = data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[5] = data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[6] = data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[7] = data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,531};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 531 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  data->localData[0]->realVars[19] /* MatStm1.T variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[1];
  data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[2];
  data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[3];
  data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[4];
  data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[5];
  data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[6];
  data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[7];
  TRACE_POP
}
/*
equation index: 532
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,2] = MatStm1.compMolFlo[2,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[60] /* MatStm1.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[364]);
  TRACE_POP
}
/*
equation index: 533
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,2] = MatStm1.compMolFlo[3,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[63] /* MatStm1.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[364]);
  TRACE_POP
}
/*
equation index: 534
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,1] = MatStm1.compMolFlo[3,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[363]);
  TRACE_POP
}
/*
equation index: 535
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,1] = MatStm1.compMolFlo[2,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  data->localData[0]->realVars[23] /* MatStm1.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[363]);
  TRACE_POP
}
/*
equation index: 536
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,3] = MatStm1.compMolFlo[3,3] * MatStm1.comp[3].MW
*/
void Flowsheet_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->localData[0]->realVars[28] /* MatStm1.compMasFlo[3,3] variable */ = (data->localData[0]->realVars[64] /* MatStm1.compMolFlo[3,3] variable */) * (data->simulationInfo->realParameter[365]);
  TRACE_POP
}
/*
equation index: 537
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,3] = MatStm1.compMolFlo[2,3] * MatStm1.comp[3].MW
*/
void Flowsheet_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,3] variable */ = (data->localData[0]->realVars[61] /* MatStm1.compMolFlo[2,3] variable */) * (data->simulationInfo->realParameter[365]);
  TRACE_POP
}
/*
equation index: 538
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:3 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
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
equation index: 539
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[3] = MatStm1.totMolFlo[3] * MatStm1.MW[3]
*/
void Flowsheet_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */ = (data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */) * (data->localData[0]->realVars[12] /* MatStm1.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 540
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[2] = MatStm1.totMolFlo[2] * MatStm1.MW[2]
*/
void Flowsheet_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */ = (data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */) * (data->localData[0]->realVars[11] /* MatStm1.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 541
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[1] = 200.0 * MatStm1.MW[1]
*/
void Flowsheet_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */ = (200.0) * (data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 542
type: SIMPLE_ASSIGN
MatStm1._vapPhasMasFrac = MatStm1.totMasFlo[3] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  data->localData[0]->realVars[121] /* MatStm1.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */,data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 543
type: LINEAR

<var>MatStm1._compMasFrac[2,2]</var>
<var>MatStm1._compMasFrac[2,3]</var>
<var>MatStm1._compMasFrac[3,2]</var>
<var>MatStm1._compMasFrac[1,3]</var>
<var>MatStm1._compMasFrac[3,3]</var>
<var>MatStm1._compMasFrac[3,1]</var>
<var>MatStm1._compMasFrac[2,1]</var>
<var>MatStm1._compMasFrac[1,1]</var>
<var>MatStm1._compMasFrac[1,2]</var>
<row>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,2] else MatStm1.compMasFlo[1,2]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,2] else MatStm1.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,3] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,2] else MatStm1.compMasFlo[1,3]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,3] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,1] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="0" col="8">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="1" col="7">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="1" col="8">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else -0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="2" col="5">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="6">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="7">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="3" col="5">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="6">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="7">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="5">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 0.0)</residual>
  </cell><cell row="5" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="5" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="5" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="6" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="6" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="7" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="7" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="7" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="7" col="8">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="8" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="8" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="8" col="6">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  /* Linear equation system */
  int retValue;
  double aux_x[9] = { data->localData[1]->realVars[33] /* MatStm1.compMasFrac[2,2] variable */,data->localData[1]->realVars[34] /* MatStm1.compMasFrac[2,3] variable */,data->localData[1]->realVars[36] /* MatStm1.compMasFrac[3,2] variable */,data->localData[1]->realVars[31] /* MatStm1.compMasFrac[1,3] variable */,data->localData[1]->realVars[37] /* MatStm1.compMasFrac[3,3] variable */,data->localData[1]->realVars[35] /* MatStm1.compMasFrac[3,1] variable */,data->localData[1]->realVars[32] /* MatStm1.compMasFrac[2,1] variable */,data->localData[1]->realVars[29] /* MatStm1.compMasFrac[1,1] variable */,data->localData[1]->realVars[30] /* MatStm1.compMasFrac[1,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 543 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 5, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,543};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 543 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[33] /* MatStm1.compMasFrac[2,2] variable */ = aux_x[0];
  data->localData[0]->realVars[34] /* MatStm1.compMasFrac[2,3] variable */ = aux_x[1];
  data->localData[0]->realVars[36] /* MatStm1.compMasFrac[3,2] variable */ = aux_x[2];
  data->localData[0]->realVars[31] /* MatStm1.compMasFrac[1,3] variable */ = aux_x[3];
  data->localData[0]->realVars[37] /* MatStm1.compMasFrac[3,3] variable */ = aux_x[4];
  data->localData[0]->realVars[35] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[5];
  data->localData[0]->realVars[32] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[6];
  data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[7];
  data->localData[0]->realVars[30] /* MatStm1.compMasFrac[1,2] variable */ = aux_x[8];
  TRACE_POP
}
/*
equation index: 544
type: SIMPLE_ASSIGN
MatStm1._liqPhasMasFrac = MatStm1.totMasFlo[2] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  data->localData[0]->realVars[92] /* MatStm1.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */,data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 545
type: ALGORITHM

  (MatStm1.compMolEntr[2,3], MatStm1.compMolEntr[3,3]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[3].AS, {MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, {MatStm1.comp[3].HOV[1], MatStm1.comp[3].HOV[2], MatStm1.comp[3].HOV[3], MatStm1.comp[3].HOV[4], MatStm1.comp[3].HOV[5], MatStm1.comp[3].HOV[6]}, MatStm1.comp[3].Tb, MatStm1.comp[3].Tc, MatStm1.T, 101325.0, MatStm1.compMolFrac[2,3], MatStm1.compMolFrac[3,3]);
*/
void Flowsheet_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  real_array tmp6;
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[429], (modelica_real)data->simulationInfo->realParameter[430], (modelica_real)data->simulationInfo->realParameter[431], (modelica_real)data->simulationInfo->realParameter[432], (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434]);
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[279], (modelica_real)data->simulationInfo->realParameter[280], (modelica_real)data->simulationInfo->realParameter[281], (modelica_real)data->simulationInfo->realParameter[282], (modelica_real)data->simulationInfo->realParameter[283], (modelica_real)data->simulationInfo->realParameter[284]);
  data->localData[0]->realVars[52] /* MatStm1.compMolEntr[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[242], tmp6, tmp7, data->simulationInfo->realParameter[386], data->simulationInfo->realParameter[389], data->localData[0]->realVars[19] /* MatStm1.T variable */, 101325.0, data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */, data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */ ,&data->localData[0]->realVars[55] /* MatStm1.compMolEntr[3,3] variable */);
  TRACE_POP
}
/*
equation index: 546
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,3] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  real_array tmp8;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[429], (modelica_real)data->simulationInfo->realParameter[430], (modelica_real)data->simulationInfo->realParameter[431], (modelica_real)data->simulationInfo->realParameter[432], (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434]);
  data->localData[0]->realVars[82] /* MatStm1.compMolSpHeat[3,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp8, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 547
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,3] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[3].LiqCp[1], MatStm1.comp[3].LiqCp[2], MatStm1.comp[3].LiqCp[3], MatStm1.comp[3].LiqCp[4], MatStm1.comp[3].LiqCp[5], MatStm1.comp[3].LiqCp[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[303], (modelica_real)data->simulationInfo->realParameter[304], (modelica_real)data->simulationInfo->realParameter[305], (modelica_real)data->simulationInfo->realParameter[306], (modelica_real)data->simulationInfo->realParameter[307], (modelica_real)data->simulationInfo->realParameter[308]);
  data->localData[0]->realVars[79] /* MatStm1.compMolSpHeat[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp9, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 548
type: ALGORITHM

  (MatStm1.compMolEntr[2,2], MatStm1.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[2].AS, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tb, MatStm1.comp[2].Tc, MatStm1.T, 101325.0, MatStm1.compMolFrac[2,2], MatStm1.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[273], (modelica_real)data->simulationInfo->realParameter[274], (modelica_real)data->simulationInfo->realParameter[275], (modelica_real)data->simulationInfo->realParameter[276], (modelica_real)data->simulationInfo->realParameter[277], (modelica_real)data->simulationInfo->realParameter[278]);
  data->localData[0]->realVars[51] /* MatStm1.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[241], tmp10, tmp11, data->simulationInfo->realParameter[385], data->simulationInfo->realParameter[388], data->localData[0]->realVars[19] /* MatStm1.T variable */, 101325.0, data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */, data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[54] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 549
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  real_array tmp12;
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  data->localData[0]->realVars[81] /* MatStm1.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp12, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 550
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[2].LiqCp[1], MatStm1.comp[2].LiqCp[2], MatStm1.comp[2].LiqCp[3], MatStm1.comp[2].LiqCp[4], MatStm1.comp[2].LiqCp[5], MatStm1.comp[2].LiqCp[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)data->simulationInfo->realParameter[297], (modelica_real)data->simulationInfo->realParameter[298], (modelica_real)data->simulationInfo->realParameter[299], (modelica_real)data->simulationInfo->realParameter[300], (modelica_real)data->simulationInfo->realParameter[301], (modelica_real)data->simulationInfo->realParameter[302]);
  data->localData[0]->realVars[78] /* MatStm1.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp13, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 551
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, MatStm1.T, 101325.0, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  real_array tmp14;
  real_array tmp15;
  array_alloc_scalar_real_array(&tmp14, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  array_alloc_scalar_real_array(&tmp15, 6, (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270], (modelica_real)data->simulationInfo->realParameter[271], (modelica_real)data->simulationInfo->realParameter[272]);
  data->localData[0]->realVars[50] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[240], tmp14, tmp15, data->simulationInfo->realParameter[384], data->simulationInfo->realParameter[387], data->localData[0]->realVars[19] /* MatStm1.T variable */, 101325.0, data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[53] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 552
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEntr[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEntr[3,2] + MatStm1.compMolFrac[3,3] * MatStm1.compMolEntr[3,3]
*/
void Flowsheet_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  data->localData[0]->realVars[102] /* MatStm1.phasMolEntr[3] variable */ = (data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[53] /* MatStm1.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[54] /* MatStm1.compMolEntr[3,2] variable */) + (data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[55] /* MatStm1.compMolEntr[3,3] variable */);
  TRACE_POP
}
/*
equation index: 553
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEntr[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEntr[2,2] + MatStm1.compMolFrac[2,3] * MatStm1.compMolEntr[2,3]
*/
void Flowsheet_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  data->localData[0]->realVars[101] /* MatStm1.phasMolEntr[2] variable */ = (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[50] /* MatStm1.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[51] /* MatStm1.compMolEntr[2,2] variable */) + (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[52] /* MatStm1.compMolEntr[2,3] variable */);
  TRACE_POP
}
/*
equation index: 554
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolEntr[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolEntr[3]
*/
void Flowsheet_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  data->localData[0]->realVars[100] /* MatStm1.phasMolEntr[1] variable */ = (data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[101] /* MatStm1.phasMolEntr[2] variable */) + (data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[102] /* MatStm1.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 555
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEntr[1]
*/
void Flowsheet_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  data->localData[0]->realVars[47] /* MatStm1.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[100] /* MatStm1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 556
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolEntr[1]
*/
void Flowsheet_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->localData[0]->realVars[48] /* MatStm1.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[100] /* MatStm1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 557
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,3] = MatStm1.compMolFrac[1,3] * MatStm1.phasMolEntr[1]
*/
void Flowsheet_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->localData[0]->realVars[49] /* MatStm1.compMolEntr[1,3] variable */ = (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[100] /* MatStm1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 558
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  real_array tmp16;
  array_alloc_scalar_real_array(&tmp16, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  data->localData[0]->realVars[80] /* MatStm1.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp16, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 559
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolSpHeat[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolSpHeat[3,2] + MatStm1.compMolFrac[3,3] * MatStm1.compMolSpHeat[3,3]
*/
void Flowsheet_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  data->localData[0]->realVars[105] /* MatStm1.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[80] /* MatStm1.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[81] /* MatStm1.compMolSpHeat[3,2] variable */) + (data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[82] /* MatStm1.compMolSpHeat[3,3] variable */);
  TRACE_POP
}
/*
equation index: 560
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[1].LiqCp[1], MatStm1.comp[1].LiqCp[2], MatStm1.comp[1].LiqCp[3], MatStm1.comp[1].LiqCp[4], MatStm1.comp[1].LiqCp[5], MatStm1.comp[1].LiqCp[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  real_array tmp17;
  array_alloc_scalar_real_array(&tmp17, 6, (modelica_real)data->simulationInfo->realParameter[291], (modelica_real)data->simulationInfo->realParameter[292], (modelica_real)data->simulationInfo->realParameter[293], (modelica_real)data->simulationInfo->realParameter[294], (modelica_real)data->simulationInfo->realParameter[295], (modelica_real)data->simulationInfo->realParameter[296]);
  data->localData[0]->realVars[77] /* MatStm1.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp17, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 561
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolSpHeat[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolSpHeat[2,2] + MatStm1.compMolFrac[2,3] * MatStm1.compMolSpHeat[2,3]
*/
void Flowsheet_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  data->localData[0]->realVars[104] /* MatStm1.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[77] /* MatStm1.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[78] /* MatStm1.compMolSpHeat[2,2] variable */) + (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[79] /* MatStm1.compMolSpHeat[2,3] variable */);
  TRACE_POP
}
/*
equation index: 562
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolSpHeat[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  data->localData[0]->realVars[103] /* MatStm1.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[104] /* MatStm1.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[105] /* MatStm1.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 563
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  data->localData[0]->realVars[74] /* MatStm1.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[103] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 564
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  data->localData[0]->realVars[75] /* MatStm1.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[103] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 565
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,3] = MatStm1.compMolFrac[1,3] * MatStm1.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  data->localData[0]->realVars[76] /* MatStm1.compMolSpHeat[1,3] variable */ = (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[103] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 566
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEnth[1]
*/
void Flowsheet_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  data->localData[0]->realVars[38] /* MatStm1.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[97] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 567
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolEnth[1]
*/
void Flowsheet_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  data->localData[0]->realVars[39] /* MatStm1.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[97] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 568
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,3] = MatStm1.compMolFrac[1,3] * MatStm1.phasMolEnth[1]
*/
void Flowsheet_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  data->localData[0]->realVars[40] /* MatStm1.compMolEnth[1,3] variable */ = (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[97] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 569
type: SIMPLE_ASSIGN
MatStm3._phasMolEntr[1] = MatStm3.liqPhasMolFrac * MatStm3.phasMolEntr[2] + Mixer1.inVapPhasMolFrac[1] * MatStm3.phasMolEntr[3]
*/
void Flowsheet_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  data->localData[0]->realVars[337] /* MatStm3.phasMolEntr[1] variable */ = (data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */) * (data->localData[0]->realVars[338] /* MatStm3.phasMolEntr[2] variable */) + (data->localData[0]->realVars[362] /* Mixer1.inVapPhasMolFrac[1] variable */) * (data->localData[0]->realVars[339] /* MatStm3.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 570
type: SIMPLE_ASSIGN
MatStm3._compMolEntr[1,1] = MatStm3.compMolFrac[1,1] * MatStm3.phasMolEntr[1]
*/
void Flowsheet_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  data->localData[0]->realVars[284] /* MatStm3.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[302] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[337] /* MatStm3.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 571
type: SIMPLE_ASSIGN
MatStm3._compMolEntr[1,2] = MatStm3.compMolFrac[1,2] * MatStm3.phasMolEntr[1]
*/
void Flowsheet_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  data->localData[0]->realVars[285] /* MatStm3.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[303] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[337] /* MatStm3.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 572
type: SIMPLE_ASSIGN
MatStm3._compMolEntr[1,3] = MatStm3.compMolFrac[1,3] * MatStm3.phasMolEntr[1]
*/
void Flowsheet_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  data->localData[0]->realVars[286] /* MatStm3.compMolEntr[1,3] variable */ = (data->localData[0]->realVars[304] /* MatStm3.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[337] /* MatStm3.phasMolEntr[1] variable */);
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
  Flowsheet_eqFunction_354(data, threadData);

  Flowsheet_eqFunction_355(data, threadData);

  Flowsheet_eqFunction_356(data, threadData);

  Flowsheet_eqFunction_357(data, threadData);

  Flowsheet_eqFunction_358(data, threadData);

  Flowsheet_eqFunction_359(data, threadData);

  Flowsheet_eqFunction_392(data, threadData);

  Flowsheet_eqFunction_393(data, threadData);

  Flowsheet_eqFunction_394(data, threadData);

  Flowsheet_eqFunction_395(data, threadData);

  Flowsheet_eqFunction_396(data, threadData);

  Flowsheet_eqFunction_397(data, threadData);

  Flowsheet_eqFunction_398(data, threadData);

  Flowsheet_eqFunction_399(data, threadData);

  Flowsheet_eqFunction_400(data, threadData);

  Flowsheet_eqFunction_401(data, threadData);

  Flowsheet_eqFunction_402(data, threadData);

  Flowsheet_eqFunction_403(data, threadData);

  Flowsheet_eqFunction_404(data, threadData);

  Flowsheet_eqFunction_405(data, threadData);

  Flowsheet_eqFunction_406(data, threadData);

  Flowsheet_eqFunction_407(data, threadData);

  Flowsheet_eqFunction_408(data, threadData);

  Flowsheet_eqFunction_409(data, threadData);

  Flowsheet_eqFunction_410(data, threadData);

  Flowsheet_eqFunction_411(data, threadData);

  Flowsheet_eqFunction_412(data, threadData);

  Flowsheet_eqFunction_413(data, threadData);

  Flowsheet_eqFunction_414(data, threadData);

  Flowsheet_eqFunction_415(data, threadData);

  Flowsheet_eqFunction_416(data, threadData);

  Flowsheet_eqFunction_417(data, threadData);

  Flowsheet_eqFunction_418(data, threadData);

  Flowsheet_eqFunction_419(data, threadData);

  Flowsheet_eqFunction_420(data, threadData);

  Flowsheet_eqFunction_421(data, threadData);

  Flowsheet_eqFunction_422(data, threadData);

  Flowsheet_eqFunction_423(data, threadData);

  Flowsheet_eqFunction_424(data, threadData);

  Flowsheet_eqFunction_425(data, threadData);

  Flowsheet_eqFunction_426(data, threadData);

  Flowsheet_eqFunction_459(data, threadData);

  Flowsheet_eqFunction_460(data, threadData);

  Flowsheet_eqFunction_461(data, threadData);

  Flowsheet_eqFunction_462(data, threadData);

  Flowsheet_eqFunction_463(data, threadData);

  Flowsheet_eqFunction_464(data, threadData);

  Flowsheet_eqFunction_465(data, threadData);

  Flowsheet_eqFunction_466(data, threadData);

  Flowsheet_eqFunction_467(data, threadData);

  Flowsheet_eqFunction_468(data, threadData);

  Flowsheet_eqFunction_469(data, threadData);

  Flowsheet_eqFunction_470(data, threadData);

  Flowsheet_eqFunction_471(data, threadData);

  Flowsheet_eqFunction_472(data, threadData);

  Flowsheet_eqFunction_473(data, threadData);

  Flowsheet_eqFunction_474(data, threadData);

  Flowsheet_eqFunction_475(data, threadData);

  Flowsheet_eqFunction_476(data, threadData);

  Flowsheet_eqFunction_477(data, threadData);

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

  Flowsheet_eqFunction_550(data, threadData);

  Flowsheet_eqFunction_551(data, threadData);

  Flowsheet_eqFunction_552(data, threadData);

  Flowsheet_eqFunction_553(data, threadData);

  Flowsheet_eqFunction_554(data, threadData);

  Flowsheet_eqFunction_555(data, threadData);

  Flowsheet_eqFunction_556(data, threadData);

  Flowsheet_eqFunction_557(data, threadData);

  Flowsheet_eqFunction_558(data, threadData);

  Flowsheet_eqFunction_559(data, threadData);

  Flowsheet_eqFunction_560(data, threadData);

  Flowsheet_eqFunction_561(data, threadData);

  Flowsheet_eqFunction_562(data, threadData);

  Flowsheet_eqFunction_563(data, threadData);

  Flowsheet_eqFunction_564(data, threadData);

  Flowsheet_eqFunction_565(data, threadData);

  Flowsheet_eqFunction_566(data, threadData);

  Flowsheet_eqFunction_567(data, threadData);

  Flowsheet_eqFunction_568(data, threadData);

  Flowsheet_eqFunction_569(data, threadData);

  Flowsheet_eqFunction_570(data, threadData);

  Flowsheet_eqFunction_571(data, threadData);

  Flowsheet_eqFunction_572(data, threadData);
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
  data->modelData->modelGUID = "{04951467-06d3-45ab-b851-a60528cbdbf8}";
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
  data->modelData->nVariablesReal = 364;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 1185;
  data->modelData->nParametersInteger = 29;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 31;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 162;
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
  data->modelData->modelDataXml.nEquations = 1844;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 6;
  data->modelData->nNonLinearSystems = 6;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 8;
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


