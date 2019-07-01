/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "flash1_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation flash1_performSimulation
#define prefixedName_updateContinuousSystem flash1_updateContinuousSystem
#include <simulation/solver/perform_simulation.c>

#define prefixedName_performQSSSimulation flash1_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int flash1_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int flash1_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int flash1_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int flash1_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int flash1_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 336
type: SIMPLE_ASSIGN
Flash1._K[1] = 9.869232667160129e-006 * Flash1.Psat[1]
*/
void flash1_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->localData[0]->realVars[8] /* Flash1.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[12] /* Flash1.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 337
type: SIMPLE_ASSIGN
Flash1._K[2] = 9.869232667160129e-006 * Flash1.Psat[2]
*/
void flash1_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->localData[0]->realVars[9] /* Flash1.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[13] /* Flash1.Psat[2] variable */);
  TRACE_POP
}
/*
equation index: 338
type: SIMPLE_ASSIGN
MatStm5._K[1] = 9.869232667160129e-006 * MatStm5.Psat[1]
*/
void flash1_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->localData[0]->realVars[243] /* MatStm5.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[250] /* MatStm5.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 339
type: SIMPLE_ASSIGN
MatStm5._K[2] = 9.869232667160129e-006 * MatStm5.Psat[2]
*/
void flash1_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->localData[0]->realVars[244] /* MatStm5.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[251] /* MatStm5.Psat[2] variable */);
  TRACE_POP
}
/*
equation index: 340
type: SIMPLE_ASSIGN
MatStm2._K[1] = 9.869232667160129e-006 * MatStm2.Psat[1]
*/
void flash1_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->localData[0]->realVars[155] /* MatStm2.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[162] /* MatStm2.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 341
type: SIMPLE_ASSIGN
MatStm2._K[2] = 9.869232667160129e-006 * MatStm2.Psat[2]
*/
void flash1_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  data->localData[0]->realVars[156] /* MatStm2.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[163] /* MatStm2.Psat[2] variable */);
  TRACE_POP
}
/*
equation index: 342
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,1] = MatStm1.compMolFlo[1,1] * MatStm1.comp[1].MW
*/
void flash1_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  data->localData[0]->realVars[75] /* MatStm1.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[99] /* MatStm1.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[323]);
  TRACE_POP
}
/*
equation index: 343
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,2] = MatStm1.compMolFlo[1,2] * MatStm1.comp[2].MW
*/
void flash1_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  data->localData[0]->realVars[76] /* MatStm1.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[100] /* MatStm1.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[324]);
  TRACE_POP
}
/*
equation index: 344
type: SIMPLE_ASSIGN
MatStm1._K[1] = 9.869232667160129e-006 * MatStm1.Psat[1]
*/
void flash1_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  data->localData[0]->realVars[64] /* MatStm1.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[72] /* MatStm1.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 345
type: SIMPLE_ASSIGN
MatStm1._K[2] = 9.869232667160129e-006 * MatStm1.Psat[2]
*/
void flash1_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  data->localData[0]->realVars[65] /* MatStm1.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[73] /* MatStm1.Psat[2] variable */);
  TRACE_POP
}
void flash1_eqFunction_346(DATA*, threadData_t*);
void flash1_eqFunction_347(DATA*, threadData_t*);
void flash1_eqFunction_348(DATA*, threadData_t*);
void flash1_eqFunction_349(DATA*, threadData_t*);
void flash1_eqFunction_350(DATA*, threadData_t*);
void flash1_eqFunction_351(DATA*, threadData_t*);
void flash1_eqFunction_356(DATA*, threadData_t*);
void flash1_eqFunction_355(DATA*, threadData_t*);
void flash1_eqFunction_354(DATA*, threadData_t*);
void flash1_eqFunction_353(DATA*, threadData_t*);
void flash1_eqFunction_352(DATA*, threadData_t*);
/*
equation index: 368
indexNonlinear: 4
type: NONLINEAR

vars: {MatStm1._totMolFlo[2], MatStm1._compMolFrac[3,2], MatStm1._compMolFrac[2,1], MatStm1._compMolFrac[3,1], MatStm1._compMolFrac[2,2]}
eqns: {346, 347, 348, 349, 350, 351, 356, 355, 354, 353, 352}
*/
void flash1_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 368 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[1] = data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[2] = data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[3] = data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[4] = data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,368};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 368 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[1];
  data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[2];
  data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[3];
  data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[4];
  TRACE_POP
}
/*
equation index: 369
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,2] = MatStm1.compMolFlo[2,2] * MatStm1.comp[2].MW
*/
void flash1_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->localData[0]->realVars[78] /* MatStm1.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[102] /* MatStm1.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[324]);
  TRACE_POP
}
/*
equation index: 370
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,2] = MatStm1.compMolFlo[3,2] * MatStm1.comp[2].MW
*/
void flash1_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->localData[0]->realVars[80] /* MatStm1.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[104] /* MatStm1.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[324]);
  TRACE_POP
}
/*
equation index: 371
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac = (-MatStm1.liqPhasMolFrac) - -1.0
*/
void flash1_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->localData[0]->realVars[152] /* MatStm1.vapPhasMolFrac variable */ = (-data->localData[0]->realVars[124] /* MatStm1.liqPhasMolFrac variable */) - (-1.0);
  TRACE_POP
}
/*
equation index: 372
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,1] = MatStm1.compMolFlo[2,1] * MatStm1.comp[1].MW
*/
void flash1_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->localData[0]->realVars[77] /* MatStm1.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[101] /* MatStm1.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[323]);
  TRACE_POP
}
/*
equation index: 373
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,1] = MatStm1.compMolFlo[3,1] * MatStm1.comp[1].MW
*/
void flash1_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->localData[0]->realVars[79] /* MatStm1.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[103] /* MatStm1.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[323]);
  TRACE_POP
}
/*
equation index: 374
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEnth[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEnth[2,2]
*/
void flash1_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->localData[0]->realVars[128] /* MatStm1.phasMolEnth[2] variable */ = (data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[89] /* MatStm1.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[90] /* MatStm1.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 375
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolSpHeat[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolSpHeat[2,2]
*/
void flash1_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->localData[0]->realVars[134] /* MatStm1.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[113] /* MatStm1.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[114] /* MatStm1.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 376
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, 314.8885353767533, 101325.0, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void flash1_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362], (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262], (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264]);
  data->localData[0]->realVars[95] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[241], tmp0, tmp1, data->simulationInfo->realParameter[337], data->simulationInfo->realParameter[339], 314.8885353767533, 101325.0, data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[97] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 377
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEnth[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEnth[3,2]
*/
void flash1_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  data->localData[0]->realVars[129] /* MatStm1.phasMolEnth[3] variable */ = (data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[91] /* MatStm1.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[92] /* MatStm1.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 378
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolEnth[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolEnth[3]
*/
void flash1_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  data->localData[0]->realVars[127] /* MatStm1.phasMolEnth[1] variable */ = (data->localData[0]->realVars[124] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[128] /* MatStm1.phasMolEnth[2] variable */) + (data->localData[0]->realVars[152] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[129] /* MatStm1.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 379
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolEnth[1]
*/
void flash1_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->localData[0]->realVars[88] /* MatStm1.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[106] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[127] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 380
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEnth[1]
*/
void flash1_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->localData[0]->realVars[87] /* MatStm1.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[127] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 381
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolSpHeat[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolSpHeat[3,2]
*/
void flash1_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  data->localData[0]->realVars[135] /* MatStm1.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[115] /* MatStm1.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[116] /* MatStm1.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 382
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolSpHeat[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolSpHeat[3]
*/
void flash1_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->localData[0]->realVars[133] /* MatStm1.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[124] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[134] /* MatStm1.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[152] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[135] /* MatStm1.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 383
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolSpHeat[1]
*/
void flash1_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->localData[0]->realVars[112] /* MatStm1.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[106] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[133] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 384
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolSpHeat[1]
*/
void flash1_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->localData[0]->realVars[111] /* MatStm1.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[133] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 385
type: ALGORITHM

  (MatStm1.compMolEntr[2,2], MatStm1.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[2].AS, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tb, MatStm1.comp[2].Tc, 314.8885353767533, 101325.0, MatStm1.compMolFrac[2,2], MatStm1.compMolFrac[3,2]);
*/
void flash1_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368], (modelica_real)data->simulationInfo->realParameter[369], (modelica_real)data->simulationInfo->realParameter[370]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270]);
  data->localData[0]->realVars[96] /* MatStm1.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[242], tmp2, tmp3, data->simulationInfo->realParameter[338], data->simulationInfo->realParameter[340], 314.8885353767533, 101325.0, data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */, data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[98] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 386
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEntr[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEntr[2,2]
*/
void flash1_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->localData[0]->realVars[131] /* MatStm1.phasMolEntr[2] variable */ = (data->localData[0]->realVars[107] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[95] /* MatStm1.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[108] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[96] /* MatStm1.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 387
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEntr[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEntr[3,2]
*/
void flash1_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  data->localData[0]->realVars[132] /* MatStm1.phasMolEntr[3] variable */ = (data->localData[0]->realVars[109] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[97] /* MatStm1.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[110] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[98] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 388
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolEntr[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolEntr[3]
*/
void flash1_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  data->localData[0]->realVars[130] /* MatStm1.phasMolEntr[1] variable */ = (data->localData[0]->realVars[124] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[131] /* MatStm1.phasMolEntr[2] variable */) + (data->localData[0]->realVars[152] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[132] /* MatStm1.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 389
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolEntr[1]
*/
void flash1_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  data->localData[0]->realVars[94] /* MatStm1.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[106] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[130] /* MatStm1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 390
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEntr[1]
*/
void flash1_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  data->localData[0]->realVars[93] /* MatStm1.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[130] /* MatStm1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 391
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:2 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void flash1_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[68] /* MatStm1.MW[3] variable */ = data->modelData->realVarsData[68].attribute /* MatStm1.MW[3] variable */.start;

  data->localData[0]->realVars[67] /* MatStm1.MW[2] variable */ = data->modelData->realVarsData[67].attribute /* MatStm1.MW[2] variable */.start;

  data->localData[0]->realVars[66] /* MatStm1.MW[1] variable */ = data->modelData->realVarsData[66].attribute /* MatStm1.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[66] /* MatStm1.MW[1] variable */ + ((&data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[323])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[67] /* MatStm1.MW[2] variable */ + ((&data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[323])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[68] /* MatStm1.MW[3] variable */ + ((&data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[323])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[66] /* MatStm1.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
/*
equation index: 392
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[1] = 200.0 * MatStm1.MW[1]
*/
void flash1_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->localData[0]->realVars[145] /* MatStm1.totMasFlo[1] variable */ = (200.0) * (data->localData[0]->realVars[66] /* MatStm1.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 393
type: SIMPLE_ASSIGN
MatStm1._compMasFrac[1,2] = MatStm1.compMasFlo[1,2] / MatStm1.totMasFlo[1]
*/
void flash1_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  data->localData[0]->realVars[82] /* MatStm1.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[76] /* MatStm1.compMasFlo[1,2] variable */,data->localData[0]->realVars[145] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 394
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[2] = MatStm1.totMolFlo[2] * MatStm1.MW[2]
*/
void flash1_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->localData[0]->realVars[146] /* MatStm1.totMasFlo[2] variable */ = (data->localData[0]->realVars[149] /* MatStm1.totMolFlo[2] variable */) * (data->localData[0]->realVars[67] /* MatStm1.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 395
type: SIMPLE_ASSIGN
MatStm1._liqPhasMasFrac = MatStm1.totMasFlo[2] / MatStm1.totMasFlo[1]
*/
void flash1_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->localData[0]->realVars[123] /* MatStm1.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[146] /* MatStm1.totMasFlo[2] variable */,data->localData[0]->realVars[145] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 396
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[3] = MatStm1.totMolFlo[3] * MatStm1.MW[3]
*/
void flash1_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->localData[0]->realVars[147] /* MatStm1.totMasFlo[3] variable */ = (data->localData[0]->realVars[150] /* MatStm1.totMolFlo[3] variable */) * (data->localData[0]->realVars[68] /* MatStm1.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 397
type: SIMPLE_ASSIGN
MatStm1._vapPhasMasFrac = MatStm1.totMasFlo[3] / MatStm1.totMasFlo[1]
*/
void flash1_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->localData[0]->realVars[151] /* MatStm1.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[147] /* MatStm1.totMasFlo[3] variable */,data->localData[0]->realVars[145] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 398
type: LINEAR

<var>MatStm1._compMasFrac[1,1]</var>
<var>MatStm1._compMasFrac[2,2]</var>
<var>MatStm1._compMasFrac[3,2]</var>
<var>MatStm1._compMasFrac[2,1]</var>
<var>MatStm1._compMasFrac[3,1]</var>
<row>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,1] else MatStm1.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then -MatStm1.compMasFrac[1,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,2] else -MatStm1.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,2] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="1" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="4" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void flash1_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[81] /* MatStm1.compMasFrac[1,1] variable */,data->localData[1]->realVars[84] /* MatStm1.compMasFrac[2,2] variable */,data->localData[1]->realVars[86] /* MatStm1.compMasFrac[3,2] variable */,data->localData[1]->realVars[83] /* MatStm1.compMasFrac[2,1] variable */,data->localData[1]->realVars[85] /* MatStm1.compMasFrac[3,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 398 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 3, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,398};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 398 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[81] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[0];
  data->localData[0]->realVars[84] /* MatStm1.compMasFrac[2,2] variable */ = aux_x[1];
  data->localData[0]->realVars[86] /* MatStm1.compMasFrac[3,2] variable */ = aux_x[2];
  data->localData[0]->realVars[83] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[3];
  data->localData[0]->realVars[85] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[4];
  TRACE_POP
}
void flash1_eqFunction_399(DATA*, threadData_t*);
void flash1_eqFunction_400(DATA*, threadData_t*);
void flash1_eqFunction_405(DATA*, threadData_t*);
void flash1_eqFunction_404(DATA*, threadData_t*);
void flash1_eqFunction_403(DATA*, threadData_t*);
void flash1_eqFunction_402(DATA*, threadData_t*);
void flash1_eqFunction_401(DATA*, threadData_t*);
/*
equation index: 413
indexNonlinear: 5
type: NONLINEAR

vars: {Flash1._totMolFlo[3], MatStm5._compMolFrac[1,2], MatStm2._compMolFrac[1,1], MatStm5._compMolFrac[1,1], MatStm2._compMolFrac[1,2]}
eqns: {399, 400, 405, 404, 403, 402, 401}
*/
void flash1_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 413 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[1] = data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[2] = data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[3] = data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[4] = data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,413};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 413 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[1];
  data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[2];
  data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[3];
  data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[4];
  TRACE_POP
}
/*
equation index: 414
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[1,2] = MatStm2.compMolFrac[1,2] * Flash1.totMolFlo[2]
*/
void flash1_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->localData[0]->realVars[189] /* MatStm2.compMolFlo[1,2] variable */ = (data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[59] /* Flash1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 415
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[1,2] = MatStm2.compMolFlo[1,2] * MatStm2.comp[2].MW
*/
void flash1_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->localData[0]->realVars[165] /* MatStm2.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[189] /* MatStm2.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[482]);
  TRACE_POP
}
/*
equation index: 416
type: SIMPLE_ASSIGN
Flash1._vapPhasMolFrac = (-Flash1.liqPhasMolFrac) - -1.0
*/
void flash1_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  data->localData[0]->realVars[61] /* Flash1.vapPhasMolFrac variable */ = (-data->localData[0]->realVars[38] /* Flash1.liqPhasMolFrac variable */) - (-1.0);
  TRACE_POP
}
/*
equation index: 417
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[1,1] = MatStm5.compMolFrac[1,1] * Flash1.totMolFlo[3]
*/
void flash1_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->localData[0]->realVars[276] /* MatStm5.compMolFlo[1,1] variable */ = (data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 418
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[1,1] = MatStm5.compMolFlo[1,1] * MatStm5.comp[1].MW
*/
void flash1_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->localData[0]->realVars[252] /* MatStm5.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[276] /* MatStm5.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[639]);
  TRACE_POP
}
/*
equation index: 419
type: SIMPLE_ASSIGN
Flash1._phasMolEnth[2] = MatStm2.compMolFrac[1,1] * Flash1.compMolEnth[2,1] + MatStm2.compMolFrac[1,2] * Flash1.compMolEnth[2,2]
*/
void flash1_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->localData[0]->realVars[42] /* Flash1.phasMolEnth[2] variable */ = (data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[16] /* Flash1.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[17] /* Flash1.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 420
type: SIMPLE_ASSIGN
Flash1._phasMolSpHeat[2] = MatStm2.compMolFrac[1,1] * Flash1.compMolSpHeat[2,1] + MatStm2.compMolFrac[1,2] * Flash1.compMolSpHeat[2,2]
*/
void flash1_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->localData[0]->realVars[48] /* Flash1.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[28] /* Flash1.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[29] /* Flash1.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 421
type: ALGORITHM

  (Flash1.compMolEntr[2,1], Flash1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(Flash1.comp[1].AS, {Flash1.comp[1].VapCp[1], Flash1.comp[1].VapCp[2], Flash1.comp[1].VapCp[3], Flash1.comp[1].VapCp[4], Flash1.comp[1].VapCp[5], Flash1.comp[1].VapCp[6]}, {Flash1.comp[1].HOV[1], Flash1.comp[1].HOV[2], Flash1.comp[1].HOV[3], Flash1.comp[1].HOV[4], Flash1.comp[1].HOV[5], Flash1.comp[1].HOV[6]}, Flash1.comp[1].Tb, Flash1.comp[1].Tc, 314.8885353767533, 101325.0, MatStm2.compMolFrac[1,1], MatStm5.compMolFrac[1,1]);
*/
void flash1_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204], (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104], (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106]);
  data->localData[0]->realVars[22] /* Flash1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[83], tmp0, tmp1, data->simulationInfo->realParameter[179], data->simulationInfo->realParameter[181], 314.8885353767533, 101325.0, data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */, data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */ ,&data->localData[0]->realVars[24] /* Flash1.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 422
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[1,1] = MatStm2.compMolFrac[1,1] * Flash1.totMolFlo[2]
*/
void flash1_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  data->localData[0]->realVars[188] /* MatStm2.compMolFlo[1,1] variable */ = (data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[59] /* Flash1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 423
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[1,1] = MatStm2.compMolFlo[1,1] * MatStm2.comp[1].MW
*/
void flash1_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->localData[0]->realVars[164] /* MatStm2.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[188] /* MatStm2.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[481]);
  TRACE_POP
}
/*
equation index: 424
type: SIMPLE_ASSIGN
MatStm2._Pbubl = MatStm2.compMolFrac[1,1] * $cse3 + MatStm2.compMolFrac[1,2] * $cse4
*/
void flash1_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->localData[0]->realVars[160] /* MatStm2.Pbubl variable */ = (data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[2] /* $cse3 variable */) + (data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[3] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 425
type: SIMPLE_ASSIGN
MatStm2._Pdew = 1.0 / (MatStm2.compMolFrac[1,1] * $cse1 + MatStm2.compMolFrac[1,2] * $cse2)
*/
void flash1_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->localData[0]->realVars[161] /* MatStm2.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[0] /* $cse1 variable */) + (data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[1] /* $cse2 variable */),"MatStm2.compMolFrac[1,1] * $cse1 + MatStm2.compMolFrac[1,2] * $cse2",equationIndexes);
  TRACE_POP
}
void flash1_eqFunction_426(DATA*, threadData_t*);
void flash1_eqFunction_427(DATA*, threadData_t*);
void flash1_eqFunction_428(DATA*, threadData_t*);
void flash1_eqFunction_429(DATA*, threadData_t*);
void flash1_eqFunction_430(DATA*, threadData_t*);
void flash1_eqFunction_435(DATA*, threadData_t*);
void flash1_eqFunction_434(DATA*, threadData_t*);
void flash1_eqFunction_433(DATA*, threadData_t*);
void flash1_eqFunction_432(DATA*, threadData_t*);
void flash1_eqFunction_431(DATA*, threadData_t*);
/*
equation index: 445
indexNonlinear: 6
type: NONLINEAR

vars: {MatStm2._totMolFlo[2], MatStm2._compMolFrac[2,1], MatStm2._compMolFrac[2,2], MatStm2._compMolFrac[3,1], MatStm2._compMolFrac[3,2]}
eqns: {426, 427, 428, 429, 430, 435, 434, 433, 432, 431}
*/
void flash1_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 445 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[0] = data->localData[0]->realVars[237] /* MatStm2.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[1] = data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[2] = data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[3] = data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[4] = data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 6);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,445};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 445 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[237] /* MatStm2.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[0];
  data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[1];
  data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[2];
  data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[3];
  data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[4];
  TRACE_POP
}
/*
equation index: 446
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolEnth[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolEnth[3,2]
*/
void flash1_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  data->localData[0]->realVars[218] /* MatStm2.phasMolEnth[3] variable */ = (data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[180] /* MatStm2.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[181] /* MatStm2.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 447
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolSpHeat[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolSpHeat[3,2]
*/
void flash1_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  data->localData[0]->realVars[224] /* MatStm2.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[204] /* MatStm2.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[205] /* MatStm2.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 448
type: ALGORITHM

  (MatStm2.compMolEntr[2,2], MatStm2.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[2].AS, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tb, MatStm2.comp[2].Tc, 314.8885353767533, 101325.0, MatStm2.compMolFrac[2,2], MatStm2.compMolFrac[3,2]);
*/
void flash1_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526], (modelica_real)data->simulationInfo->realParameter[527], (modelica_real)data->simulationInfo->realParameter[528]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  data->localData[0]->realVars[185] /* MatStm2.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[400], tmp0, tmp1, data->simulationInfo->realParameter[496], data->simulationInfo->realParameter[498], 314.8885353767533, 101325.0, data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */, data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[187] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 449
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[2,2] = MatStm2.compMolFlo[2,2] * MatStm2.comp[2].MW
*/
void flash1_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  data->localData[0]->realVars[167] /* MatStm2.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[191] /* MatStm2.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[482]);
  TRACE_POP
}
/*
equation index: 450
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[3,2] = MatStm2.compMolFlo[3,2] * MatStm2.comp[2].MW
*/
void flash1_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  data->localData[0]->realVars[169] /* MatStm2.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[193] /* MatStm2.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[482]);
  TRACE_POP
}
/*
equation index: 451
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[2,1] = MatStm2.compMolFlo[2,1] * MatStm2.comp[1].MW
*/
void flash1_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  data->localData[0]->realVars[166] /* MatStm2.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[190] /* MatStm2.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[481]);
  TRACE_POP
}
/*
equation index: 452
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[3,1] = MatStm2.compMolFlo[3,1] * MatStm2.comp[1].MW
*/
void flash1_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  data->localData[0]->realVars[168] /* MatStm2.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[192] /* MatStm2.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[481]);
  TRACE_POP
}
/*
equation index: 453
type: SIMPLE_ASSIGN
MatStm2._vapPhasMolFrac = MatStm2.totMolFlo[3] / Flash1.totMolFlo[2]
*/
void flash1_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  data->localData[0]->realVars[240] /* MatStm2.vapPhasMolFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[238] /* MatStm2.totMolFlo[3] variable */,data->localData[0]->realVars[59] /* Flash1.totMolFlo[2] variable */,"Flash1.totMolFlo[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 454
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac = MatStm2.totMolFlo[2] / Flash1.totMolFlo[2]
*/
void flash1_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  data->localData[0]->realVars[213] /* MatStm2.liqPhasMolFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[237] /* MatStm2.totMolFlo[2] variable */,data->localData[0]->realVars[59] /* Flash1.totMolFlo[2] variable */,"Flash1.totMolFlo[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 455
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolEnth[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolEnth[2,2]
*/
void flash1_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  data->localData[0]->realVars[217] /* MatStm2.phasMolEnth[2] variable */ = (data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[178] /* MatStm2.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[179] /* MatStm2.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 456
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolEnth[2] + MatStm2.vapPhasMolFrac * MatStm2.phasMolEnth[3]
*/
void flash1_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  data->localData[0]->realVars[216] /* MatStm2.phasMolEnth[1] variable */ = (data->localData[0]->realVars[213] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[217] /* MatStm2.phasMolEnth[2] variable */) + (data->localData[0]->realVars[240] /* MatStm2.vapPhasMolFrac variable */) * (data->localData[0]->realVars[218] /* MatStm2.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 457
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[1,2] = MatStm2.compMolFrac[1,2] * MatStm2.phasMolEnth[1]
*/
void flash1_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  data->localData[0]->realVars[177] /* MatStm2.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[216] /* MatStm2.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 458
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolSpHeat[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolSpHeat[2,2]
*/
void flash1_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  data->localData[0]->realVars[223] /* MatStm2.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[202] /* MatStm2.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[203] /* MatStm2.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 459
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolSpHeat[2] + MatStm2.vapPhasMolFrac * MatStm2.phasMolSpHeat[3]
*/
void flash1_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  data->localData[0]->realVars[222] /* MatStm2.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[213] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[223] /* MatStm2.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[240] /* MatStm2.vapPhasMolFrac variable */) * (data->localData[0]->realVars[224] /* MatStm2.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 460
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[1,2] = MatStm2.compMolFrac[1,2] * MatStm2.phasMolSpHeat[1]
*/
void flash1_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  data->localData[0]->realVars[201] /* MatStm2.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[222] /* MatStm2.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 461
type: ALGORITHM

  (MatStm2.compMolEntr[2,1], MatStm2.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[1].AS, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tb, MatStm2.comp[1].Tc, 314.8885353767533, 101325.0, MatStm2.compMolFrac[2,1], MatStm2.compMolFrac[3,1]);
*/
void flash1_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  data->localData[0]->realVars[184] /* MatStm2.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[399], tmp2, tmp3, data->simulationInfo->realParameter[495], data->simulationInfo->realParameter[497], 314.8885353767533, 101325.0, data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */, data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[186] /* MatStm2.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 462
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolEntr[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolEntr[3,2]
*/
void flash1_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  data->localData[0]->realVars[221] /* MatStm2.phasMolEntr[3] variable */ = (data->localData[0]->realVars[198] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[186] /* MatStm2.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[199] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[187] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 463
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolEntr[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolEntr[2,2]
*/
void flash1_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->localData[0]->realVars[220] /* MatStm2.phasMolEntr[2] variable */ = (data->localData[0]->realVars[196] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[184] /* MatStm2.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[197] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[185] /* MatStm2.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 464
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolEntr[2] + MatStm2.vapPhasMolFrac * MatStm2.phasMolEntr[3]
*/
void flash1_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  data->localData[0]->realVars[219] /* MatStm2.phasMolEntr[1] variable */ = (data->localData[0]->realVars[213] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[220] /* MatStm2.phasMolEntr[2] variable */) + (data->localData[0]->realVars[240] /* MatStm2.vapPhasMolFrac variable */) * (data->localData[0]->realVars[221] /* MatStm2.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 465
type: SIMPLE_ASSIGN
MatStm2._compMolEntr[1,2] = MatStm2.compMolFrac[1,2] * MatStm2.phasMolEntr[1]
*/
void flash1_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  data->localData[0]->realVars[183] /* MatStm2.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[219] /* MatStm2.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 466
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolEnth[1]
*/
void flash1_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->localData[0]->realVars[176] /* MatStm2.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[216] /* MatStm2.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 467
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolSpHeat[1]
*/
void flash1_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  data->localData[0]->realVars[200] /* MatStm2.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[222] /* MatStm2.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 468
type: SIMPLE_ASSIGN
MatStm2._compMolEntr[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolEntr[1]
*/
void flash1_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  data->localData[0]->realVars[182] /* MatStm2.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[219] /* MatStm2.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 469
type: ALGORITHM

  MatStm2.MW[3] := $START.MatStm2.MW[3];
  MatStm2.MW[2] := $START.MatStm2.MW[2];
  MatStm2.MW[1] := $START.MatStm2.MW[1];
  for i in 1:2 loop
    MatStm2.MW[:] := {MatStm2.MW[1] + MatStm2.compMolFrac[1,i] * MatStm2.comp[i].MW, MatStm2.MW[2] + MatStm2.compMolFrac[2,i] * MatStm2.comp[i].MW, MatStm2.MW[3] + MatStm2.compMolFrac[3,i] * MatStm2.comp[i].MW};
  end for;
*/
void flash1_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[159] /* MatStm2.MW[3] variable */ = data->modelData->realVarsData[159].attribute /* MatStm2.MW[3] variable */.start;

  data->localData[0]->realVars[158] /* MatStm2.MW[2] variable */ = data->modelData->realVarsData[158].attribute /* MatStm2.MW[2] variable */.start;

  data->localData[0]->realVars[157] /* MatStm2.MW[1] variable */ = data->modelData->realVarsData[157].attribute /* MatStm2.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[157] /* MatStm2.MW[1] variable */ + ((&data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[481])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[158] /* MatStm2.MW[2] variable */ + ((&data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[481])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[159] /* MatStm2.MW[3] variable */ + ((&data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[481])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[157] /* MatStm2.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
/*
equation index: 470
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[1] = Flash1.totMolFlo[2] * MatStm2.MW[1]
*/
void flash1_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */ = (data->localData[0]->realVars[59] /* Flash1.totMolFlo[2] variable */) * (data->localData[0]->realVars[157] /* MatStm2.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 471
type: SIMPLE_ASSIGN
MatStm2._compMasFrac[1,2] = MatStm2.compMasFlo[1,2] / MatStm2.totMasFlo[1]
*/
void flash1_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  data->localData[0]->realVars[171] /* MatStm2.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[165] /* MatStm2.compMasFlo[1,2] variable */,data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 472
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[3] = MatStm2.totMolFlo[3] * MatStm2.MW[3]
*/
void flash1_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */ = (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[3] variable */) * (data->localData[0]->realVars[159] /* MatStm2.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 473
type: SIMPLE_ASSIGN
MatStm2._vapPhasMasFrac = MatStm2.totMasFlo[3] / MatStm2.totMasFlo[1]
*/
void flash1_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->localData[0]->realVars[239] /* MatStm2.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */,data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 474
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[2] = MatStm2.totMolFlo[2] * MatStm2.MW[2]
*/
void flash1_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */ = (data->localData[0]->realVars[237] /* MatStm2.totMolFlo[2] variable */) * (data->localData[0]->realVars[158] /* MatStm2.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 475
type: SIMPLE_ASSIGN
MatStm2._liqPhasMasFrac = MatStm2.totMasFlo[2] / MatStm2.totMasFlo[1]
*/
void flash1_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->localData[0]->realVars[212] /* MatStm2.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */,data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 476
type: LINEAR

<var>MatStm2._compMasFrac[1,1]</var>
<var>MatStm2._compMasFrac[3,1]</var>
<var>MatStm2._compMasFrac[2,1]</var>
<var>MatStm2._compMasFrac[2,2]</var>
<var>MatStm2._compMasFrac[3,2]</var>
<row>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then -MatStm2.compMasFrac[1,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,2] else -MatStm2.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,1] else MatStm2.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="0" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101325.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void flash1_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[170] /* MatStm2.compMasFrac[1,1] variable */,data->localData[1]->realVars[174] /* MatStm2.compMasFrac[3,1] variable */,data->localData[1]->realVars[172] /* MatStm2.compMasFrac[2,1] variable */,data->localData[1]->realVars[173] /* MatStm2.compMasFrac[2,2] variable */,data->localData[1]->realVars[175] /* MatStm2.compMasFrac[3,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 476 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 4, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,476};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 476 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[170] /* MatStm2.compMasFrac[1,1] variable */ = aux_x[0];
  data->localData[0]->realVars[174] /* MatStm2.compMasFrac[3,1] variable */ = aux_x[1];
  data->localData[0]->realVars[172] /* MatStm2.compMasFrac[2,1] variable */ = aux_x[2];
  data->localData[0]->realVars[173] /* MatStm2.compMasFrac[2,2] variable */ = aux_x[3];
  data->localData[0]->realVars[175] /* MatStm2.compMasFrac[3,2] variable */ = aux_x[4];
  TRACE_POP
}
/*
equation index: 477
type: SIMPLE_ASSIGN
Flash1._phasMolEnth[3] = MatStm5.compMolFrac[1,1] * Flash1.compMolEnth[3,1] + MatStm5.compMolFrac[1,2] * Flash1.compMolEnth[3,2]
*/
void flash1_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  data->localData[0]->realVars[43] /* Flash1.phasMolEnth[3] variable */ = (data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[18] /* Flash1.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[19] /* Flash1.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 478
type: SIMPLE_ASSIGN
Flash1._phasMolEnth[1] = Flash1.liqPhasMolFrac * Flash1.phasMolEnth[2] + Flash1.vapPhasMolFrac * Flash1.phasMolEnth[3]
*/
void flash1_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  data->localData[0]->realVars[41] /* Flash1.phasMolEnth[1] variable */ = (data->localData[0]->realVars[38] /* Flash1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[42] /* Flash1.phasMolEnth[2] variable */) + (data->localData[0]->realVars[61] /* Flash1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[43] /* Flash1.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 479
type: SIMPLE_ASSIGN
Flash1._compMolEnth[1,2] = MatStm1.compMolFrac[1,2] * Flash1.phasMolEnth[1]
*/
void flash1_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->localData[0]->realVars[15] /* Flash1.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[106] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[41] /* Flash1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 480
type: SIMPLE_ASSIGN
Flash1._compMolEnth[1,1] = MatStm1.compMolFrac[1,1] * Flash1.phasMolEnth[1]
*/
void flash1_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->localData[0]->realVars[14] /* Flash1.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[41] /* Flash1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 481
type: SIMPLE_ASSIGN
Flash1._phasMolSpHeat[3] = MatStm5.compMolFrac[1,1] * Flash1.compMolSpHeat[3,1] + MatStm5.compMolFrac[1,2] * Flash1.compMolSpHeat[3,2]
*/
void flash1_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->localData[0]->realVars[49] /* Flash1.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[30] /* Flash1.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[31] /* Flash1.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 482
type: SIMPLE_ASSIGN
Flash1._phasMolSpHeat[1] = Flash1.liqPhasMolFrac * Flash1.phasMolSpHeat[2] + Flash1.vapPhasMolFrac * Flash1.phasMolSpHeat[3]
*/
void flash1_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  data->localData[0]->realVars[47] /* Flash1.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[38] /* Flash1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[48] /* Flash1.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[61] /* Flash1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[49] /* Flash1.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 483
type: SIMPLE_ASSIGN
Flash1._compMolSpHeat[1,2] = MatStm1.compMolFrac[1,2] * Flash1.phasMolSpHeat[1]
*/
void flash1_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  data->localData[0]->realVars[27] /* Flash1.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[106] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[47] /* Flash1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 484
type: SIMPLE_ASSIGN
Flash1._compMolSpHeat[1,1] = MatStm1.compMolFrac[1,1] * Flash1.phasMolSpHeat[1]
*/
void flash1_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  data->localData[0]->realVars[26] /* Flash1.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[47] /* Flash1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 485
type: ALGORITHM

  (Flash1.compMolEntr[2,2], Flash1.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(Flash1.comp[2].AS, {Flash1.comp[2].VapCp[1], Flash1.comp[2].VapCp[2], Flash1.comp[2].VapCp[3], Flash1.comp[2].VapCp[4], Flash1.comp[2].VapCp[5], Flash1.comp[2].VapCp[6]}, {Flash1.comp[2].HOV[1], Flash1.comp[2].HOV[2], Flash1.comp[2].HOV[3], Flash1.comp[2].HOV[4], Flash1.comp[2].HOV[5], Flash1.comp[2].HOV[6]}, Flash1.comp[2].Tb, Flash1.comp[2].Tc, 314.8885353767533, 101325.0, MatStm2.compMolFrac[1,2], MatStm5.compMolFrac[1,2]);
*/
void flash1_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210], (modelica_real)data->simulationInfo->realParameter[211], (modelica_real)data->simulationInfo->realParameter[212]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110], (modelica_real)data->simulationInfo->realParameter[111], (modelica_real)data->simulationInfo->realParameter[112]);
  data->localData[0]->realVars[23] /* Flash1.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[84], tmp10, tmp11, data->simulationInfo->realParameter[180], data->simulationInfo->realParameter[182], 314.8885353767533, 101325.0, data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */, data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */ ,&data->localData[0]->realVars[25] /* Flash1.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 486
type: SIMPLE_ASSIGN
Flash1._phasMolEntr[2] = MatStm2.compMolFrac[1,1] * Flash1.compMolEntr[2,1] + MatStm2.compMolFrac[1,2] * Flash1.compMolEntr[2,2]
*/
void flash1_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->localData[0]->realVars[45] /* Flash1.phasMolEntr[2] variable */ = (data->localData[0]->realVars[194] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[22] /* Flash1.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[195] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[23] /* Flash1.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 487
type: SIMPLE_ASSIGN
Flash1._phasMolEntr[3] = MatStm5.compMolFrac[1,1] * Flash1.compMolEntr[3,1] + MatStm5.compMolFrac[1,2] * Flash1.compMolEntr[3,2]
*/
void flash1_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->localData[0]->realVars[46] /* Flash1.phasMolEntr[3] variable */ = (data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[24] /* Flash1.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[25] /* Flash1.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 488
type: SIMPLE_ASSIGN
Flash1._phasMolEntr[1] = Flash1.liqPhasMolFrac * Flash1.phasMolEntr[2] + Flash1.vapPhasMolFrac * Flash1.phasMolEntr[3]
*/
void flash1_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  data->localData[0]->realVars[44] /* Flash1.phasMolEntr[1] variable */ = (data->localData[0]->realVars[38] /* Flash1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[45] /* Flash1.phasMolEntr[2] variable */) + (data->localData[0]->realVars[61] /* Flash1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[46] /* Flash1.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 489
type: SIMPLE_ASSIGN
Flash1._compMolEntr[1,2] = MatStm1.compMolFrac[1,2] * Flash1.phasMolEntr[1]
*/
void flash1_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  data->localData[0]->realVars[21] /* Flash1.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[106] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[44] /* Flash1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 490
type: SIMPLE_ASSIGN
Flash1._compMolEntr[1,1] = MatStm1.compMolFrac[1,1] * Flash1.phasMolEntr[1]
*/
void flash1_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->localData[0]->realVars[20] /* Flash1.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[105] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[44] /* Flash1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 491
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[1,2] = MatStm5.compMolFrac[1,2] * Flash1.totMolFlo[3]
*/
void flash1_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  data->localData[0]->realVars[277] /* MatStm5.compMolFlo[1,2] variable */ = (data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 492
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[1,2] = MatStm5.compMolFlo[1,2] * MatStm5.comp[2].MW
*/
void flash1_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  data->localData[0]->realVars[253] /* MatStm5.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[277] /* MatStm5.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[640]);
  TRACE_POP
}
/*
equation index: 493
type: SIMPLE_ASSIGN
MatStm5._Pbubl = MatStm5.compMolFrac[1,1] * $cse7 + MatStm5.compMolFrac[1,2] * $cse8
*/
void flash1_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  data->localData[0]->realVars[248] /* MatStm5.Pbubl variable */ = (data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[6] /* $cse7 variable */) + (data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[7] /* $cse8 variable */);
  TRACE_POP
}
/*
equation index: 494
type: SIMPLE_ASSIGN
MatStm5._Pdew = 1.0 / (MatStm5.compMolFrac[1,1] * $cse5 + MatStm5.compMolFrac[1,2] * $cse6)
*/
void flash1_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  data->localData[0]->realVars[249] /* MatStm5.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[4] /* $cse5 variable */) + (data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[5] /* $cse6 variable */),"MatStm5.compMolFrac[1,1] * $cse5 + MatStm5.compMolFrac[1,2] * $cse6",equationIndexes);
  TRACE_POP
}
void flash1_eqFunction_495(DATA*, threadData_t*);
void flash1_eqFunction_496(DATA*, threadData_t*);
void flash1_eqFunction_497(DATA*, threadData_t*);
void flash1_eqFunction_498(DATA*, threadData_t*);
void flash1_eqFunction_499(DATA*, threadData_t*);
void flash1_eqFunction_504(DATA*, threadData_t*);
void flash1_eqFunction_503(DATA*, threadData_t*);
void flash1_eqFunction_502(DATA*, threadData_t*);
void flash1_eqFunction_501(DATA*, threadData_t*);
void flash1_eqFunction_500(DATA*, threadData_t*);
/*
equation index: 514
indexNonlinear: 7
type: NONLINEAR

vars: {MatStm5._totMolFlo[3], MatStm5._compMolFrac[3,1], MatStm5._compMolFrac[3,2], MatStm5._compMolFrac[2,1], MatStm5._compMolFrac[2,2]}
eqns: {495, 496, 497, 498, 499, 504, 503, 502, 501, 500}
*/
void flash1_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 514 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[0] = data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[1] = data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[2] = data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[3] = data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[4] = data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 7);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,514};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 514 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[0];
  data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[1];
  data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[2];
  data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[3];
  data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[4];
  TRACE_POP
}
/*
equation index: 515
type: SIMPLE_ASSIGN
MatStm5._phasMolEnth[2] = MatStm5.compMolFrac[2,1] * MatStm5.compMolEnth[2,1] + MatStm5.compMolFrac[2,2] * MatStm5.compMolEnth[2,2]
*/
void flash1_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  data->localData[0]->realVars[305] /* MatStm5.phasMolEnth[2] variable */ = (data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[266] /* MatStm5.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[267] /* MatStm5.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 516
type: SIMPLE_ASSIGN
MatStm5._phasMolSpHeat[2] = MatStm5.compMolFrac[2,1] * MatStm5.compMolSpHeat[2,1] + MatStm5.compMolFrac[2,2] * MatStm5.compMolSpHeat[2,2]
*/
void flash1_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->localData[0]->realVars[311] /* MatStm5.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[290] /* MatStm5.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[291] /* MatStm5.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 517
type: ALGORITHM

  (MatStm5.compMolEntr[2,2], MatStm5.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm5.comp[2].AS, {MatStm5.comp[2].VapCp[1], MatStm5.comp[2].VapCp[2], MatStm5.comp[2].VapCp[3], MatStm5.comp[2].VapCp[4], MatStm5.comp[2].VapCp[5], MatStm5.comp[2].VapCp[6]}, {MatStm5.comp[2].HOV[1], MatStm5.comp[2].HOV[2], MatStm5.comp[2].HOV[3], MatStm5.comp[2].HOV[4], MatStm5.comp[2].HOV[5], MatStm5.comp[2].HOV[6]}, MatStm5.comp[2].Tb, MatStm5.comp[2].Tc, 314.8885353767533, 101325.0, MatStm5.compMolFrac[2,2], MatStm5.compMolFrac[3,2]);
*/
void flash1_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[681], (modelica_real)data->simulationInfo->realParameter[682], (modelica_real)data->simulationInfo->realParameter[683], (modelica_real)data->simulationInfo->realParameter[684], (modelica_real)data->simulationInfo->realParameter[685], (modelica_real)data->simulationInfo->realParameter[686]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[581], (modelica_real)data->simulationInfo->realParameter[582], (modelica_real)data->simulationInfo->realParameter[583], (modelica_real)data->simulationInfo->realParameter[584], (modelica_real)data->simulationInfo->realParameter[585], (modelica_real)data->simulationInfo->realParameter[586]);
  data->localData[0]->realVars[273] /* MatStm5.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[558], tmp0, tmp1, data->simulationInfo->realParameter[654], data->simulationInfo->realParameter[656], 314.8885353767533, 101325.0, data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */, data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[275] /* MatStm5.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 518
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[3,2] = MatStm5.compMolFlo[3,2] * MatStm5.comp[2].MW
*/
void flash1_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  data->localData[0]->realVars[257] /* MatStm5.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[281] /* MatStm5.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[640]);
  TRACE_POP
}
/*
equation index: 519
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[2,2] = MatStm5.compMolFlo[2,2] * MatStm5.comp[2].MW
*/
void flash1_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->localData[0]->realVars[255] /* MatStm5.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[279] /* MatStm5.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[640]);
  TRACE_POP
}
/*
equation index: 520
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[3,1] = MatStm5.compMolFlo[3,1] * MatStm5.comp[1].MW
*/
void flash1_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  data->localData[0]->realVars[256] /* MatStm5.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[280] /* MatStm5.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[639]);
  TRACE_POP
}
/*
equation index: 521
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[2,1] = MatStm5.compMolFlo[2,1] * MatStm5.comp[1].MW
*/
void flash1_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  data->localData[0]->realVars[254] /* MatStm5.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[278] /* MatStm5.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[639]);
  TRACE_POP
}
/*
equation index: 522
type: SIMPLE_ASSIGN
MatStm5._liqPhasMolFrac = MatStm5.totMolFlo[2] / Flash1.totMolFlo[3]
*/
void flash1_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->localData[0]->realVars[301] /* MatStm5.liqPhasMolFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[325] /* MatStm5.totMolFlo[2] variable */,data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */,"Flash1.totMolFlo[3]",equationIndexes);
  TRACE_POP
}
/*
equation index: 523
type: SIMPLE_ASSIGN
MatStm5._vapPhasMolFrac = MatStm5.totMolFlo[3] / Flash1.totMolFlo[3]
*/
void flash1_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  data->localData[0]->realVars[328] /* MatStm5.vapPhasMolFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */,data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */,"Flash1.totMolFlo[3]",equationIndexes);
  TRACE_POP
}
/*
equation index: 524
type: ALGORITHM

  (MatStm5.compMolEntr[2,1], MatStm5.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm5.comp[1].AS, {MatStm5.comp[1].VapCp[1], MatStm5.comp[1].VapCp[2], MatStm5.comp[1].VapCp[3], MatStm5.comp[1].VapCp[4], MatStm5.comp[1].VapCp[5], MatStm5.comp[1].VapCp[6]}, {MatStm5.comp[1].HOV[1], MatStm5.comp[1].HOV[2], MatStm5.comp[1].HOV[3], MatStm5.comp[1].HOV[4], MatStm5.comp[1].HOV[5], MatStm5.comp[1].HOV[6]}, MatStm5.comp[1].Tb, MatStm5.comp[1].Tc, 314.8885353767533, 101325.0, MatStm5.compMolFrac[2,1], MatStm5.compMolFrac[3,1]);
*/
void flash1_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[675], (modelica_real)data->simulationInfo->realParameter[676], (modelica_real)data->simulationInfo->realParameter[677], (modelica_real)data->simulationInfo->realParameter[678], (modelica_real)data->simulationInfo->realParameter[679], (modelica_real)data->simulationInfo->realParameter[680]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[575], (modelica_real)data->simulationInfo->realParameter[576], (modelica_real)data->simulationInfo->realParameter[577], (modelica_real)data->simulationInfo->realParameter[578], (modelica_real)data->simulationInfo->realParameter[579], (modelica_real)data->simulationInfo->realParameter[580]);
  data->localData[0]->realVars[272] /* MatStm5.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[557], tmp2, tmp3, data->simulationInfo->realParameter[653], data->simulationInfo->realParameter[655], 314.8885353767533, 101325.0, data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */, data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[274] /* MatStm5.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 525
type: SIMPLE_ASSIGN
MatStm5._phasMolEntr[2] = MatStm5.compMolFrac[2,1] * MatStm5.compMolEntr[2,1] + MatStm5.compMolFrac[2,2] * MatStm5.compMolEntr[2,2]
*/
void flash1_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->localData[0]->realVars[308] /* MatStm5.phasMolEntr[2] variable */ = (data->localData[0]->realVars[284] /* MatStm5.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[272] /* MatStm5.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[285] /* MatStm5.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[273] /* MatStm5.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 526
type: SIMPLE_ASSIGN
MatStm5._phasMolEnth[3] = MatStm5.compMolFrac[3,1] * MatStm5.compMolEnth[3,1] + MatStm5.compMolFrac[3,2] * MatStm5.compMolEnth[3,2]
*/
void flash1_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->localData[0]->realVars[306] /* MatStm5.phasMolEnth[3] variable */ = (data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[268] /* MatStm5.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[269] /* MatStm5.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 527
type: SIMPLE_ASSIGN
MatStm5._phasMolEnth[1] = MatStm5.liqPhasMolFrac * MatStm5.phasMolEnth[2] + MatStm5.vapPhasMolFrac * MatStm5.phasMolEnth[3]
*/
void flash1_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->localData[0]->realVars[304] /* MatStm5.phasMolEnth[1] variable */ = (data->localData[0]->realVars[301] /* MatStm5.liqPhasMolFrac variable */) * (data->localData[0]->realVars[305] /* MatStm5.phasMolEnth[2] variable */) + (data->localData[0]->realVars[328] /* MatStm5.vapPhasMolFrac variable */) * (data->localData[0]->realVars[306] /* MatStm5.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 528
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[1,1] = MatStm5.compMolFrac[1,1] * MatStm5.phasMolEnth[1]
*/
void flash1_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->localData[0]->realVars[264] /* MatStm5.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[304] /* MatStm5.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 529
type: SIMPLE_ASSIGN
MatStm5._phasMolSpHeat[3] = MatStm5.compMolFrac[3,1] * MatStm5.compMolSpHeat[3,1] + MatStm5.compMolFrac[3,2] * MatStm5.compMolSpHeat[3,2]
*/
void flash1_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  data->localData[0]->realVars[312] /* MatStm5.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[292] /* MatStm5.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[293] /* MatStm5.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 530
type: SIMPLE_ASSIGN
MatStm5._phasMolSpHeat[1] = MatStm5.liqPhasMolFrac * MatStm5.phasMolSpHeat[2] + MatStm5.vapPhasMolFrac * MatStm5.phasMolSpHeat[3]
*/
void flash1_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  data->localData[0]->realVars[310] /* MatStm5.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[301] /* MatStm5.liqPhasMolFrac variable */) * (data->localData[0]->realVars[311] /* MatStm5.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[328] /* MatStm5.vapPhasMolFrac variable */) * (data->localData[0]->realVars[312] /* MatStm5.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 531
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[1,1] = MatStm5.compMolFrac[1,1] * MatStm5.phasMolSpHeat[1]
*/
void flash1_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  data->localData[0]->realVars[288] /* MatStm5.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[310] /* MatStm5.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 532
type: SIMPLE_ASSIGN
MatStm5._phasMolEntr[3] = MatStm5.compMolFrac[3,1] * MatStm5.compMolEntr[3,1] + MatStm5.compMolFrac[3,2] * MatStm5.compMolEntr[3,2]
*/
void flash1_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->localData[0]->realVars[309] /* MatStm5.phasMolEntr[3] variable */ = (data->localData[0]->realVars[286] /* MatStm5.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[274] /* MatStm5.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[287] /* MatStm5.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[275] /* MatStm5.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 533
type: SIMPLE_ASSIGN
MatStm5._phasMolEntr[1] = MatStm5.liqPhasMolFrac * MatStm5.phasMolEntr[2] + MatStm5.vapPhasMolFrac * MatStm5.phasMolEntr[3]
*/
void flash1_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->localData[0]->realVars[307] /* MatStm5.phasMolEntr[1] variable */ = (data->localData[0]->realVars[301] /* MatStm5.liqPhasMolFrac variable */) * (data->localData[0]->realVars[308] /* MatStm5.phasMolEntr[2] variable */) + (data->localData[0]->realVars[328] /* MatStm5.vapPhasMolFrac variable */) * (data->localData[0]->realVars[309] /* MatStm5.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 534
type: SIMPLE_ASSIGN
MatStm5._compMolEntr[1,1] = MatStm5.compMolFrac[1,1] * MatStm5.phasMolEntr[1]
*/
void flash1_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->localData[0]->realVars[270] /* MatStm5.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[307] /* MatStm5.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 535
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[1,2] = MatStm5.compMolFrac[1,2] * MatStm5.phasMolEnth[1]
*/
void flash1_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  data->localData[0]->realVars[265] /* MatStm5.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[304] /* MatStm5.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 536
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[1,2] = MatStm5.compMolFrac[1,2] * MatStm5.phasMolSpHeat[1]
*/
void flash1_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->localData[0]->realVars[289] /* MatStm5.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[310] /* MatStm5.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 537
type: SIMPLE_ASSIGN
MatStm5._compMolEntr[1,2] = MatStm5.compMolFrac[1,2] * MatStm5.phasMolEntr[1]
*/
void flash1_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  data->localData[0]->realVars[271] /* MatStm5.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[283] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[307] /* MatStm5.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 538
type: ALGORITHM

  MatStm5.MW[3] := $START.MatStm5.MW[3];
  MatStm5.MW[2] := $START.MatStm5.MW[2];
  MatStm5.MW[1] := $START.MatStm5.MW[1];
  for i in 1:2 loop
    MatStm5.MW[:] := {MatStm5.MW[1] + MatStm5.compMolFrac[1,i] * MatStm5.comp[i].MW, MatStm5.MW[2] + MatStm5.compMolFrac[2,i] * MatStm5.comp[i].MW, MatStm5.MW[3] + MatStm5.compMolFrac[3,i] * MatStm5.comp[i].MW};
  end for;
*/
void flash1_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[247] /* MatStm5.MW[3] variable */ = data->modelData->realVarsData[247].attribute /* MatStm5.MW[3] variable */.start;

  data->localData[0]->realVars[246] /* MatStm5.MW[2] variable */ = data->modelData->realVarsData[246].attribute /* MatStm5.MW[2] variable */.start;

  data->localData[0]->realVars[245] /* MatStm5.MW[1] variable */ = data->modelData->realVarsData[245].attribute /* MatStm5.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[245] /* MatStm5.MW[1] variable */ + ((&data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[639])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[246] /* MatStm5.MW[2] variable */ + ((&data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[639])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[247] /* MatStm5.MW[3] variable */ + ((&data->localData[0]->realVars[282] /* MatStm5.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[639])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[245] /* MatStm5.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
/*
equation index: 539
type: SIMPLE_ASSIGN
MatStm5._totMasFlo[3] = MatStm5.totMolFlo[3] * MatStm5.MW[3]
*/
void flash1_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  data->localData[0]->realVars[324] /* MatStm5.totMasFlo[3] variable */ = (data->localData[0]->realVars[326] /* MatStm5.totMolFlo[3] variable */) * (data->localData[0]->realVars[247] /* MatStm5.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 540
type: SIMPLE_ASSIGN
MatStm5._totMasFlo[2] = MatStm5.totMolFlo[2] * MatStm5.MW[2]
*/
void flash1_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  data->localData[0]->realVars[323] /* MatStm5.totMasFlo[2] variable */ = (data->localData[0]->realVars[325] /* MatStm5.totMolFlo[2] variable */) * (data->localData[0]->realVars[246] /* MatStm5.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 541
type: SIMPLE_ASSIGN
MatStm5._totMasFlo[1] = Flash1.totMolFlo[3] * MatStm5.MW[1]
*/
void flash1_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  data->localData[0]->realVars[322] /* MatStm5.totMasFlo[1] variable */ = (data->localData[0]->realVars[60] /* Flash1.totMolFlo[3] variable */) * (data->localData[0]->realVars[245] /* MatStm5.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 542
type: SIMPLE_ASSIGN
MatStm5._compMasFrac[1,2] = MatStm5.compMasFlo[1,2] / MatStm5.totMasFlo[1]
*/
void flash1_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  data->localData[0]->realVars[259] /* MatStm5.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[253] /* MatStm5.compMasFlo[1,2] variable */,data->localData[0]->realVars[322] /* MatStm5.totMasFlo[1] variable */,"MatStm5.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 543
type: SIMPLE_ASSIGN
MatStm5._liqPhasMasFrac = MatStm5.totMasFlo[2] / MatStm5.totMasFlo[1]
*/
void flash1_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  data->localData[0]->realVars[300] /* MatStm5.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[323] /* MatStm5.totMasFlo[2] variable */,data->localData[0]->realVars[322] /* MatStm5.totMasFlo[1] variable */,"MatStm5.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 544
type: SIMPLE_ASSIGN
MatStm5._vapPhasMasFrac = MatStm5.totMasFlo[3] / MatStm5.totMasFlo[1]
*/
void flash1_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  data->localData[0]->realVars[327] /* MatStm5.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[324] /* MatStm5.totMasFlo[3] variable */,data->localData[0]->realVars[322] /* MatStm5.totMasFlo[1] variable */,"MatStm5.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 545
type: LINEAR

<var>MatStm5._compMasFrac[3,2]</var>
<var>MatStm5._compMasFrac[2,2]</var>
<var>MatStm5._compMasFrac[3,1]</var>
<var>MatStm5._compMasFrac[1,1]</var>
<var>MatStm5._compMasFrac[2,1]</var>
<row>
  <cell>if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then MatStm5.compMasFlo[1,1] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[3,1] else MatStm5.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then -MatStm5.compMasFrac[1,2] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[3,2] else -MatStm5.compMasFrac[1,2]</cell>
</row>
<matrix>
  <cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="3">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="1">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then -1.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then -0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then -MatStm5.totMasFlo[1] else if 101325.0 >= MatStm5.Pdew then -0.0 else -MatStm5.totMasFlo[1])</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="4">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void flash1_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[263] /* MatStm5.compMasFrac[3,2] variable */,data->localData[1]->realVars[261] /* MatStm5.compMasFrac[2,2] variable */,data->localData[1]->realVars[262] /* MatStm5.compMasFrac[3,1] variable */,data->localData[1]->realVars[258] /* MatStm5.compMasFrac[1,1] variable */,data->localData[1]->realVars[260] /* MatStm5.compMasFrac[2,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 545 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 5, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,545};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 545 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[263] /* MatStm5.compMasFrac[3,2] variable */ = aux_x[0];
  data->localData[0]->realVars[261] /* MatStm5.compMasFrac[2,2] variable */ = aux_x[1];
  data->localData[0]->realVars[262] /* MatStm5.compMasFrac[3,1] variable */ = aux_x[2];
  data->localData[0]->realVars[258] /* MatStm5.compMasFrac[1,1] variable */ = aux_x[3];
  data->localData[0]->realVars[260] /* MatStm5.compMasFrac[2,1] variable */ = aux_x[4];
  TRACE_POP
}

OMC_DISABLE_OPT
int flash1_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  
  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  flash1_functionLocalKnownVars(data, threadData);
  flash1_eqFunction_336(data, threadData);

  flash1_eqFunction_337(data, threadData);

  flash1_eqFunction_338(data, threadData);

  flash1_eqFunction_339(data, threadData);

  flash1_eqFunction_340(data, threadData);

  flash1_eqFunction_341(data, threadData);

  flash1_eqFunction_342(data, threadData);

  flash1_eqFunction_343(data, threadData);

  flash1_eqFunction_344(data, threadData);

  flash1_eqFunction_345(data, threadData);

  flash1_eqFunction_368(data, threadData);

  flash1_eqFunction_369(data, threadData);

  flash1_eqFunction_370(data, threadData);

  flash1_eqFunction_371(data, threadData);

  flash1_eqFunction_372(data, threadData);

  flash1_eqFunction_373(data, threadData);

  flash1_eqFunction_374(data, threadData);

  flash1_eqFunction_375(data, threadData);

  flash1_eqFunction_376(data, threadData);

  flash1_eqFunction_377(data, threadData);

  flash1_eqFunction_378(data, threadData);

  flash1_eqFunction_379(data, threadData);

  flash1_eqFunction_380(data, threadData);

  flash1_eqFunction_381(data, threadData);

  flash1_eqFunction_382(data, threadData);

  flash1_eqFunction_383(data, threadData);

  flash1_eqFunction_384(data, threadData);

  flash1_eqFunction_385(data, threadData);

  flash1_eqFunction_386(data, threadData);

  flash1_eqFunction_387(data, threadData);

  flash1_eqFunction_388(data, threadData);

  flash1_eqFunction_389(data, threadData);

  flash1_eqFunction_390(data, threadData);

  flash1_eqFunction_391(data, threadData);

  flash1_eqFunction_392(data, threadData);

  flash1_eqFunction_393(data, threadData);

  flash1_eqFunction_394(data, threadData);

  flash1_eqFunction_395(data, threadData);

  flash1_eqFunction_396(data, threadData);

  flash1_eqFunction_397(data, threadData);

  flash1_eqFunction_398(data, threadData);

  flash1_eqFunction_413(data, threadData);

  flash1_eqFunction_414(data, threadData);

  flash1_eqFunction_415(data, threadData);

  flash1_eqFunction_416(data, threadData);

  flash1_eqFunction_417(data, threadData);

  flash1_eqFunction_418(data, threadData);

  flash1_eqFunction_419(data, threadData);

  flash1_eqFunction_420(data, threadData);

  flash1_eqFunction_421(data, threadData);

  flash1_eqFunction_422(data, threadData);

  flash1_eqFunction_423(data, threadData);

  flash1_eqFunction_424(data, threadData);

  flash1_eqFunction_425(data, threadData);

  flash1_eqFunction_445(data, threadData);

  flash1_eqFunction_446(data, threadData);

  flash1_eqFunction_447(data, threadData);

  flash1_eqFunction_448(data, threadData);

  flash1_eqFunction_449(data, threadData);

  flash1_eqFunction_450(data, threadData);

  flash1_eqFunction_451(data, threadData);

  flash1_eqFunction_452(data, threadData);

  flash1_eqFunction_453(data, threadData);

  flash1_eqFunction_454(data, threadData);

  flash1_eqFunction_455(data, threadData);

  flash1_eqFunction_456(data, threadData);

  flash1_eqFunction_457(data, threadData);

  flash1_eqFunction_458(data, threadData);

  flash1_eqFunction_459(data, threadData);

  flash1_eqFunction_460(data, threadData);

  flash1_eqFunction_461(data, threadData);

  flash1_eqFunction_462(data, threadData);

  flash1_eqFunction_463(data, threadData);

  flash1_eqFunction_464(data, threadData);

  flash1_eqFunction_465(data, threadData);

  flash1_eqFunction_466(data, threadData);

  flash1_eqFunction_467(data, threadData);

  flash1_eqFunction_468(data, threadData);

  flash1_eqFunction_469(data, threadData);

  flash1_eqFunction_470(data, threadData);

  flash1_eqFunction_471(data, threadData);

  flash1_eqFunction_472(data, threadData);

  flash1_eqFunction_473(data, threadData);

  flash1_eqFunction_474(data, threadData);

  flash1_eqFunction_475(data, threadData);

  flash1_eqFunction_476(data, threadData);

  flash1_eqFunction_477(data, threadData);

  flash1_eqFunction_478(data, threadData);

  flash1_eqFunction_479(data, threadData);

  flash1_eqFunction_480(data, threadData);

  flash1_eqFunction_481(data, threadData);

  flash1_eqFunction_482(data, threadData);

  flash1_eqFunction_483(data, threadData);

  flash1_eqFunction_484(data, threadData);

  flash1_eqFunction_485(data, threadData);

  flash1_eqFunction_486(data, threadData);

  flash1_eqFunction_487(data, threadData);

  flash1_eqFunction_488(data, threadData);

  flash1_eqFunction_489(data, threadData);

  flash1_eqFunction_490(data, threadData);

  flash1_eqFunction_491(data, threadData);

  flash1_eqFunction_492(data, threadData);

  flash1_eqFunction_493(data, threadData);

  flash1_eqFunction_494(data, threadData);

  flash1_eqFunction_514(data, threadData);

  flash1_eqFunction_515(data, threadData);

  flash1_eqFunction_516(data, threadData);

  flash1_eqFunction_517(data, threadData);

  flash1_eqFunction_518(data, threadData);

  flash1_eqFunction_519(data, threadData);

  flash1_eqFunction_520(data, threadData);

  flash1_eqFunction_521(data, threadData);

  flash1_eqFunction_522(data, threadData);

  flash1_eqFunction_523(data, threadData);

  flash1_eqFunction_524(data, threadData);

  flash1_eqFunction_525(data, threadData);

  flash1_eqFunction_526(data, threadData);

  flash1_eqFunction_527(data, threadData);

  flash1_eqFunction_528(data, threadData);

  flash1_eqFunction_529(data, threadData);

  flash1_eqFunction_530(data, threadData);

  flash1_eqFunction_531(data, threadData);

  flash1_eqFunction_532(data, threadData);

  flash1_eqFunction_533(data, threadData);

  flash1_eqFunction_534(data, threadData);

  flash1_eqFunction_535(data, threadData);

  flash1_eqFunction_536(data, threadData);

  flash1_eqFunction_537(data, threadData);

  flash1_eqFunction_538(data, threadData);

  flash1_eqFunction_539(data, threadData);

  flash1_eqFunction_540(data, threadData);

  flash1_eqFunction_541(data, threadData);

  flash1_eqFunction_542(data, threadData);

  flash1_eqFunction_543(data, threadData);

  flash1_eqFunction_544(data, threadData);

  flash1_eqFunction_545(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int flash1_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int flash1_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  data->simulationInfo->callStatistics.functionODE++;
  
  flash1_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

  
  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "flash1_12jac.h"
#include "flash1_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks flash1_callback = {
   (int (*)(DATA *, threadData_t *, void *)) flash1_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) flash1_performQSSSimulation,
   flash1_updateContinuousSystem,
   flash1_callExternalObjectDestructors,
   flash1_initialNonLinearSystem,
   flash1_initialLinearSystem,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   flash1_initializeStateSets,
   #else
   NULL,
   #endif
   flash1_initializeDAEmodeData,
   flash1_functionODE,
   flash1_functionAlgebraics,
   flash1_functionDAE,
   flash1_functionLocalKnownVars,
   flash1_input_function,
   flash1_input_function_init,
   flash1_input_function_updateStartValues,
   flash1_output_function,
   flash1_function_storeDelayed,
   flash1_updateBoundVariableAttributes,
   flash1_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   flash1_functionInitialEquations_lambda0,
   flash1_functionRemovedInitialEquations,
   flash1_updateBoundParameters,
   flash1_checkForAsserts,
   flash1_function_ZeroCrossingsEquations,
   flash1_function_ZeroCrossings,
   flash1_function_updateRelations,
   flash1_zeroCrossingDescription,
   flash1_relationDescription,
   flash1_function_initSample,
   flash1_INDEX_JAC_A,
   flash1_INDEX_JAC_B,
   flash1_INDEX_JAC_C,
   flash1_INDEX_JAC_D,
   flash1_initialAnalyticJacobianA,
   flash1_initialAnalyticJacobianB,
   flash1_initialAnalyticJacobianC,
   flash1_initialAnalyticJacobianD,
   flash1_functionJacA_column,
   flash1_functionJacB_column,
   flash1_functionJacC_column,
   flash1_functionJacD_column,
   flash1_linear_model_frame,
   flash1_linear_model_datarecovery_frame,
   flash1_mayer,
   flash1_lagrange,
   flash1_pickUpBoundsForInputsInOptimization,
   flash1_setInputData,
   flash1_getTimeGrid,
   flash1_symbolicInlineSystem,
   flash1_function_initSynchronous,
   flash1_function_updateSynchronous,
   flash1_function_equationsSynchronous,
   flash1_inputNames,
   NULL,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "C:/OpenModelica1.13.264bit/lib/omlibrary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,40,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Modelica"
#define _OMC_LIT_RESOURCE_1_dir_data "C:/OpenModelica1.13.264bit/lib/omlibrary/Modelica 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,55,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_2_dir_data "C:/OpenModelica1.13.264bit/lib/omlibrary/ModelicaServices 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,16,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,63,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "Simulator"
#define _OMC_LIT_RESOURCE_3_dir_data "C:/OMChemSimGUI/SimulationFiles"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,9,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,31,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "flash1"
#define _OMC_LIT_RESOURCE_4_dir_data "C:/OMChemSimGUI/SimulationFiles/Simulator"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,6,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,41,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void flash1_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &flash1_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "flash1";
  data->modelData->modelFilePrefix = "flash1";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/OMChemSimGUI/SimulationFiles/Simulator";
  data->modelData->modelGUID = "{865dd8d3-fe0d-4d9f-85e7-be9d6dfe673e}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "flash1_init.c"
    ;
  static const char contents_info[] =
    #include "flash1_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "flash1_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "flash1_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 331;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 792;
  data->modelData->nParametersInteger = 23;
  data->modelData->nParametersBoolean = 2;
  data->modelData->nParametersString = 20;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 123;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 4;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 4;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.fileName = "flash1_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 7;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1476;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 6;
  data->modelData->nNonLinearSystems = 8;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 12;
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
  
    flash1_setupDataStruc(&data, threadData);
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


