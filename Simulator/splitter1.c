/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "splitter1_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation splitter1_performSimulation
#define prefixedName_updateContinuousSystem splitter1_updateContinuousSystem
#include <simulation/solver/perform_simulation.c>

#define prefixedName_performQSSSimulation splitter1_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int splitter1_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int splitter1_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int splitter1_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int splitter1_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int splitter1_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 292
type: SIMPLE_ASSIGN
MatStm4._K[1] = 9.869232667160129e-006 * MatStm4.Psat[1]
*/
void splitter1_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  data->localData[0]->realVars[99] /* MatStm4.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[106] /* MatStm4.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 293
type: SIMPLE_ASSIGN
MatStm4._K[2] = 9.869232667160129e-006 * MatStm4.Psat[2]
*/
void splitter1_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  data->localData[0]->realVars[100] /* MatStm4.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[107] /* MatStm4.Psat[2] variable */);
  TRACE_POP
}
/*
equation index: 294
type: SIMPLE_ASSIGN
MatStm5._K[1] = 9.869232667160129e-006 * MatStm5.Psat[1]
*/
void splitter1_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  data->localData[0]->realVars[187] /* MatStm5.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[194] /* MatStm5.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 295
type: SIMPLE_ASSIGN
MatStm5._K[2] = 9.869232667160129e-006 * MatStm5.Psat[2]
*/
void splitter1_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  data->localData[0]->realVars[188] /* MatStm5.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[195] /* MatStm5.Psat[2] variable */);
  TRACE_POP
}
/*
equation index: 296
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[1,1] = MatStm3.compMolFlo[1,1] * MatStm3.comp[1].MW
*/
void splitter1_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->localData[0]->realVars[19] /* MatStm3.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[43] /* MatStm3.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[163]);
  TRACE_POP
}
/*
equation index: 297
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[1,2] = MatStm3.compMolFlo[1,2] * MatStm3.comp[2].MW
*/
void splitter1_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  data->localData[0]->realVars[20] /* MatStm3.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[44] /* MatStm3.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[164]);
  TRACE_POP
}
/*
equation index: 298
type: SIMPLE_ASSIGN
MatStm3._K[1] = 9.869232667160129e-006 * MatStm3.Psat[1]
*/
void splitter1_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  data->localData[0]->realVars[8] /* MatStm3.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[16] /* MatStm3.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 299
type: SIMPLE_ASSIGN
MatStm3._K[2] = 9.869232667160129e-006 * MatStm3.Psat[2]
*/
void splitter1_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->localData[0]->realVars[9] /* MatStm3.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[17] /* MatStm3.Psat[2] variable */);
  TRACE_POP
}
void splitter1_eqFunction_300(DATA*, threadData_t*);
void splitter1_eqFunction_301(DATA*, threadData_t*);
void splitter1_eqFunction_302(DATA*, threadData_t*);
void splitter1_eqFunction_303(DATA*, threadData_t*);
void splitter1_eqFunction_304(DATA*, threadData_t*);
void splitter1_eqFunction_305(DATA*, threadData_t*);
void splitter1_eqFunction_306(DATA*, threadData_t*);
void splitter1_eqFunction_311(DATA*, threadData_t*);
void splitter1_eqFunction_310(DATA*, threadData_t*);
void splitter1_eqFunction_309(DATA*, threadData_t*);
void splitter1_eqFunction_308(DATA*, threadData_t*);
void splitter1_eqFunction_307(DATA*, threadData_t*);
/*
equation index: 324
indexNonlinear: 3
type: NONLINEAR

vars: {MatStm3._totMolFlo[3], MatStm3._compMolFrac[2,2], MatStm3._compMolFrac[3,2], MatStm3._compMolFrac[3,1], MatStm3._compMolFrac[2,1]}
eqns: {300, 301, 302, 303, 304, 305, 306, 311, 310, 309, 308, 307}
*/
void splitter1_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 324 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[94] /* MatStm3.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[1] = data->localData[0]->realVars[52] /* MatStm3.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[2] = data->localData[0]->realVars[54] /* MatStm3.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[3] = data->localData[0]->realVars[53] /* MatStm3.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[4] = data->localData[0]->realVars[51] /* MatStm3.compMolFrac[2,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,324};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 324 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[94] /* MatStm3.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  data->localData[0]->realVars[52] /* MatStm3.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[1];
  data->localData[0]->realVars[54] /* MatStm3.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[2];
  data->localData[0]->realVars[53] /* MatStm3.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[3];
  data->localData[0]->realVars[51] /* MatStm3.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[4];
  TRACE_POP
}
/*
equation index: 325
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[3,1] = MatStm3.compMolFlo[3,1] * MatStm3.comp[1].MW
*/
void splitter1_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  data->localData[0]->realVars[23] /* MatStm3.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[47] /* MatStm3.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[163]);
  TRACE_POP
}
/*
equation index: 326
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[2,1] = MatStm3.compMolFlo[2,1] * MatStm3.comp[1].MW
*/
void splitter1_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->localData[0]->realVars[21] /* MatStm3.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[45] /* MatStm3.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[163]);
  TRACE_POP
}
/*
equation index: 327
type: ALGORITHM

  (MatStm3.compMolEntr[2,1], MatStm3.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[1].AS, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tb, MatStm3.comp[1].Tc, 315.0287067347126, 101325.0, MatStm3.compMolFrac[2,1], MatStm3.compMolFrac[3,1]);
*/
void splitter1_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[39] /* MatStm3.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[81], tmp0, tmp1, data->simulationInfo->realParameter[177], data->simulationInfo->realParameter[179], 315.0287067347126, 101325.0, data->localData[0]->realVars[51] /* MatStm3.compMolFrac[2,1] variable */, data->localData[0]->realVars[53] /* MatStm3.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[41] /* MatStm3.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 328
type: SIMPLE_ASSIGN
MatStm3._phasMolEnth[3] = MatStm3.compMolFrac[3,1] * MatStm3.compMolEnth[3,1] + MatStm3.compMolFrac[3,2] * MatStm3.compMolEnth[3,2]
*/
void splitter1_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->localData[0]->realVars[73] /* MatStm3.phasMolEnth[3] variable */ = (data->localData[0]->realVars[53] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[35] /* MatStm3.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[54] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[36] /* MatStm3.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 329
type: SIMPLE_ASSIGN
MatStm3._phasMolSpHeat[3] = MatStm3.compMolFrac[3,1] * MatStm3.compMolSpHeat[3,1] + MatStm3.compMolFrac[3,2] * MatStm3.compMolSpHeat[3,2]
*/
void splitter1_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->localData[0]->realVars[79] /* MatStm3.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[53] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[59] /* MatStm3.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[54] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[60] /* MatStm3.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 330
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[3,2] = MatStm3.compMolFlo[3,2] * MatStm3.comp[2].MW
*/
void splitter1_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->localData[0]->realVars[24] /* MatStm3.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[48] /* MatStm3.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[164]);
  TRACE_POP
}
/*
equation index: 331
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[2,2] = MatStm3.compMolFlo[2,2] * MatStm3.comp[2].MW
*/
void splitter1_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->localData[0]->realVars[22] /* MatStm3.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[46] /* MatStm3.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[164]);
  TRACE_POP
}
/*
equation index: 332
type: SIMPLE_ASSIGN
MatStm3._phasMolEnth[2] = MatStm3.compMolFrac[2,1] * MatStm3.compMolEnth[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.compMolEnth[2,2]
*/
void splitter1_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->localData[0]->realVars[72] /* MatStm3.phasMolEnth[2] variable */ = (data->localData[0]->realVars[51] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[33] /* MatStm3.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[52] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[34] /* MatStm3.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 333
type: SIMPLE_ASSIGN
MatStm3._phasMolEnth[1] = MatStm3.liqPhasMolFrac * MatStm3.phasMolEnth[2] + MatStm3.vapPhasMolFrac * MatStm3.phasMolEnth[3]
*/
void splitter1_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->localData[0]->realVars[71] /* MatStm3.phasMolEnth[1] variable */ = (data->localData[0]->realVars[68] /* MatStm3.liqPhasMolFrac variable */) * (data->localData[0]->realVars[72] /* MatStm3.phasMolEnth[2] variable */) + (data->localData[0]->realVars[96] /* MatStm3.vapPhasMolFrac variable */) * (data->localData[0]->realVars[73] /* MatStm3.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 334
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[1,2] = MatStm3.compMolFrac[1,2] * MatStm3.phasMolEnth[1]
*/
void splitter1_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->localData[0]->realVars[32] /* MatStm3.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[50] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[71] /* MatStm3.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 335
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[1,1] = MatStm3.compMolFrac[1,1] * MatStm3.phasMolEnth[1]
*/
void splitter1_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->localData[0]->realVars[31] /* MatStm3.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[49] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[71] /* MatStm3.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 336
type: SIMPLE_ASSIGN
MatStm3._phasMolSpHeat[2] = MatStm3.compMolFrac[2,1] * MatStm3.compMolSpHeat[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.compMolSpHeat[2,2]
*/
void splitter1_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->localData[0]->realVars[78] /* MatStm3.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[51] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[57] /* MatStm3.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[52] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[58] /* MatStm3.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 337
type: SIMPLE_ASSIGN
MatStm3._phasMolSpHeat[1] = MatStm3.liqPhasMolFrac * MatStm3.phasMolSpHeat[2] + MatStm3.vapPhasMolFrac * MatStm3.phasMolSpHeat[3]
*/
void splitter1_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->localData[0]->realVars[77] /* MatStm3.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[68] /* MatStm3.liqPhasMolFrac variable */) * (data->localData[0]->realVars[78] /* MatStm3.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[96] /* MatStm3.vapPhasMolFrac variable */) * (data->localData[0]->realVars[79] /* MatStm3.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 338
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[1,2] = MatStm3.compMolFrac[1,2] * MatStm3.phasMolSpHeat[1]
*/
void splitter1_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->localData[0]->realVars[56] /* MatStm3.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[50] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[77] /* MatStm3.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 339
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[1,1] = MatStm3.compMolFrac[1,1] * MatStm3.phasMolSpHeat[1]
*/
void splitter1_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->localData[0]->realVars[55] /* MatStm3.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[49] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[77] /* MatStm3.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 340
type: ALGORITHM

  (MatStm3.compMolEntr[2,2], MatStm3.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[2].AS, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tb, MatStm3.comp[2].Tc, 315.0287067347126, 101325.0, MatStm3.compMolFrac[2,2], MatStm3.compMolFrac[3,2]);
*/
void splitter1_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[40] /* MatStm3.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[82], tmp2, tmp3, data->simulationInfo->realParameter[178], data->simulationInfo->realParameter[180], 315.0287067347126, 101325.0, data->localData[0]->realVars[52] /* MatStm3.compMolFrac[2,2] variable */, data->localData[0]->realVars[54] /* MatStm3.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[42] /* MatStm3.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 341
type: SIMPLE_ASSIGN
MatStm3._phasMolEntr[3] = MatStm3.compMolFrac[3,1] * MatStm3.compMolEntr[3,1] + MatStm3.compMolFrac[3,2] * MatStm3.compMolEntr[3,2]
*/
void splitter1_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  data->localData[0]->realVars[76] /* MatStm3.phasMolEntr[3] variable */ = (data->localData[0]->realVars[53] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[41] /* MatStm3.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[54] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[42] /* MatStm3.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 342
type: SIMPLE_ASSIGN
MatStm3._phasMolEntr[2] = MatStm3.compMolFrac[2,1] * MatStm3.compMolEntr[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.compMolEntr[2,2]
*/
void splitter1_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  data->localData[0]->realVars[75] /* MatStm3.phasMolEntr[2] variable */ = (data->localData[0]->realVars[51] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[39] /* MatStm3.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[52] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[40] /* MatStm3.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 343
type: SIMPLE_ASSIGN
MatStm3._phasMolEntr[1] = MatStm3.liqPhasMolFrac * MatStm3.phasMolEntr[2] + MatStm3.vapPhasMolFrac * MatStm3.phasMolEntr[3]
*/
void splitter1_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  data->localData[0]->realVars[74] /* MatStm3.phasMolEntr[1] variable */ = (data->localData[0]->realVars[68] /* MatStm3.liqPhasMolFrac variable */) * (data->localData[0]->realVars[75] /* MatStm3.phasMolEntr[2] variable */) + (data->localData[0]->realVars[96] /* MatStm3.vapPhasMolFrac variable */) * (data->localData[0]->realVars[76] /* MatStm3.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 344
type: SIMPLE_ASSIGN
MatStm3._compMolEntr[1,2] = MatStm3.compMolFrac[1,2] * MatStm3.phasMolEntr[1]
*/
void splitter1_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  data->localData[0]->realVars[38] /* MatStm3.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[50] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[74] /* MatStm3.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 345
type: SIMPLE_ASSIGN
MatStm3._compMolEntr[1,1] = MatStm3.compMolFrac[1,1] * MatStm3.phasMolEntr[1]
*/
void splitter1_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  data->localData[0]->realVars[37] /* MatStm3.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[49] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[74] /* MatStm3.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 346
type: ALGORITHM

  MatStm3.MW[3] := $START.MatStm3.MW[3];
  MatStm3.MW[2] := $START.MatStm3.MW[2];
  MatStm3.MW[1] := $START.MatStm3.MW[1];
  for i in 1:2 loop
    MatStm3.MW[:] := {MatStm3.MW[1] + MatStm3.compMolFrac[1,i] * MatStm3.comp[i].MW, MatStm3.MW[2] + MatStm3.compMolFrac[2,i] * MatStm3.comp[i].MW, MatStm3.MW[3] + MatStm3.compMolFrac[3,i] * MatStm3.comp[i].MW};
  end for;
*/
void splitter1_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[12] /* MatStm3.MW[3] variable */ = data->modelData->realVarsData[12].attribute /* MatStm3.MW[3] variable */.start;

  data->localData[0]->realVars[11] /* MatStm3.MW[2] variable */ = data->modelData->realVarsData[11].attribute /* MatStm3.MW[2] variable */.start;

  data->localData[0]->realVars[10] /* MatStm3.MW[1] variable */ = data->modelData->realVarsData[10].attribute /* MatStm3.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[10] /* MatStm3.MW[1] variable */ + ((&data->localData[0]->realVars[49] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[11] /* MatStm3.MW[2] variable */ + ((&data->localData[0]->realVars[49] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[12] /* MatStm3.MW[3] variable */ + ((&data->localData[0]->realVars[49] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[10] /* MatStm3.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
/*
equation index: 347
type: SIMPLE_ASSIGN
MatStm3._totMasFlo[3] = MatStm3.totMolFlo[3] * MatStm3.MW[3]
*/
void splitter1_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->localData[0]->realVars[91] /* MatStm3.totMasFlo[3] variable */ = (data->localData[0]->realVars[94] /* MatStm3.totMolFlo[3] variable */) * (data->localData[0]->realVars[12] /* MatStm3.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 348
type: SIMPLE_ASSIGN
MatStm3._totMasFlo[2] = MatStm3.totMolFlo[2] * MatStm3.MW[2]
*/
void splitter1_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->localData[0]->realVars[90] /* MatStm3.totMasFlo[2] variable */ = (data->localData[0]->realVars[93] /* MatStm3.totMolFlo[2] variable */) * (data->localData[0]->realVars[11] /* MatStm3.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 349
type: SIMPLE_ASSIGN
MatStm3._totMasFlo[1] = 200.0 * MatStm3.MW[1]
*/
void splitter1_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->localData[0]->realVars[89] /* MatStm3.totMasFlo[1] variable */ = (200.0) * (data->localData[0]->realVars[10] /* MatStm3.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 350
type: SIMPLE_ASSIGN
MatStm3._vapPhasMasFrac = MatStm3.totMasFlo[3] / MatStm3.totMasFlo[1]
*/
void splitter1_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->localData[0]->realVars[95] /* MatStm3.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[91] /* MatStm3.totMasFlo[3] variable */,data->localData[0]->realVars[89] /* MatStm3.totMasFlo[1] variable */,"MatStm3.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 351
type: SIMPLE_ASSIGN
MatStm3._compMasFrac[1,2] = MatStm3.compMasFlo[1,2] / MatStm3.totMasFlo[1]
*/
void splitter1_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->localData[0]->realVars[26] /* MatStm3.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[20] /* MatStm3.compMasFlo[1,2] variable */,data->localData[0]->realVars[89] /* MatStm3.totMasFlo[1] variable */,"MatStm3.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 352
type: SIMPLE_ASSIGN
MatStm3._liqPhasMasFrac = MatStm3.totMasFlo[2] / MatStm3.totMasFlo[1]
*/
void splitter1_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  data->localData[0]->realVars[67] /* MatStm3.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[90] /* MatStm3.totMasFlo[2] variable */,data->localData[0]->realVars[89] /* MatStm3.totMasFlo[1] variable */,"MatStm3.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 353
type: LINEAR

<var>MatStm3._compMasFrac[3,1]</var>
<var>MatStm3._compMasFrac[1,1]</var>
<var>MatStm3._compMasFrac[2,2]</var>
<var>MatStm3._compMasFrac[3,2]</var>
<var>MatStm3._compMasFrac[2,1]</var>
<row>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then -MatStm3.compMasFrac[1,2] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,2] else -MatStm3.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,1] else if 101325.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,1] else MatStm3.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -1.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="4">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101325.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void splitter1_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[29] /* MatStm3.compMasFrac[3,1] variable */,data->localData[1]->realVars[25] /* MatStm3.compMasFrac[1,1] variable */,data->localData[1]->realVars[28] /* MatStm3.compMasFrac[2,2] variable */,data->localData[1]->realVars[30] /* MatStm3.compMasFrac[3,2] variable */,data->localData[1]->realVars[27] /* MatStm3.compMasFrac[2,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 353 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 3, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,353};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 353 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[29] /* MatStm3.compMasFrac[3,1] variable */ = aux_x[0];
  data->localData[0]->realVars[25] /* MatStm3.compMasFrac[1,1] variable */ = aux_x[1];
  data->localData[0]->realVars[28] /* MatStm3.compMasFrac[2,2] variable */ = aux_x[2];
  data->localData[0]->realVars[30] /* MatStm3.compMasFrac[3,2] variable */ = aux_x[3];
  data->localData[0]->realVars[27] /* MatStm3.compMasFrac[2,1] variable */ = aux_x[4];
  TRACE_POP
}
/*
equation index: 354
type: SIMPLE_ASSIGN
Splitter1._inMixMolFrac[2] = MatStm3.compMolFrac[1,2]
*/
void splitter1_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  data->localData[0]->realVars[277] /* Splitter1.inMixMolFrac[2] variable */ = data->localData[0]->realVars[50] /* MatStm3.compMolFrac[1,2] variable */;
  TRACE_POP
}
/*
equation index: 355
type: SIMPLE_ASSIGN
MatStm5._compMolFrac[1,2] = MatStm3.compMolFrac[1,2]
*/
void splitter1_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  data->localData[0]->realVars[227] /* MatStm5.compMolFrac[1,2] variable */ = data->localData[0]->realVars[50] /* MatStm3.compMolFrac[1,2] variable */;
  TRACE_POP
}
/*
equation index: 356
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[1,2] = 50.0 * MatStm5.compMolFrac[1,2]
*/
void splitter1_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->localData[0]->realVars[221] /* MatStm5.compMolFlo[1,2] variable */ = (50.0) * (data->localData[0]->realVars[227] /* MatStm5.compMolFrac[1,2] variable */);
  TRACE_POP
}
/*
equation index: 357
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[1,2] = MatStm5.compMolFlo[1,2] * MatStm5.comp[2].MW
*/
void splitter1_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->localData[0]->realVars[197] /* MatStm5.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[221] /* MatStm5.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[480]);
  TRACE_POP
}
/*
equation index: 358
type: SIMPLE_ASSIGN
MatStm4._compMolFrac[1,2] = MatStm3.compMolFrac[1,2]
*/
void splitter1_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->localData[0]->realVars[139] /* MatStm4.compMolFrac[1,2] variable */ = data->localData[0]->realVars[50] /* MatStm3.compMolFrac[1,2] variable */;
  TRACE_POP
}
/*
equation index: 359
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[1,2] = 50.0 * MatStm4.compMolFrac[1,2]
*/
void splitter1_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->localData[0]->realVars[133] /* MatStm4.compMolFlo[1,2] variable */ = (50.0) * (data->localData[0]->realVars[139] /* MatStm4.compMolFrac[1,2] variable */);
  TRACE_POP
}
/*
equation index: 360
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[1,2] = MatStm4.compMolFlo[1,2] * MatStm4.comp[2].MW
*/
void splitter1_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->localData[0]->realVars[109] /* MatStm4.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[133] /* MatStm4.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[322]);
  TRACE_POP
}
/*
equation index: 361
type: SIMPLE_ASSIGN
Splitter1._inMixMolFrac[1] = MatStm3.compMolFrac[1,1]
*/
void splitter1_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  data->localData[0]->realVars[276] /* Splitter1.inMixMolFrac[1] variable */ = data->localData[0]->realVars[49] /* MatStm3.compMolFrac[1,1] variable */;
  TRACE_POP
}
/*
equation index: 362
type: ALGORITHM

  Splitter1.MW := $START.Splitter1.MW;
  Splitter1.MW := 0.0;
  for i in 1:2 loop
    Splitter1.MW := Splitter1.MW + Splitter1.comp[i].MW * Splitter1.inMixMolFrac[i];
  end for;
*/
void splitter1_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  data->localData[0]->realVars[275] /* Splitter1.MW variable */ = data->modelData->realVarsData[275].attribute /* Splitter1.MW variable */.start;

  data->localData[0]->realVars[275] /* Splitter1.MW variable */ = 0.0;

  tmp10 = ((modelica_integer) 1); tmp11 = 1; tmp12 = ((modelica_integer) 2);
  if(!(((tmp11 > 0) && (tmp10 > tmp12)) || ((tmp11 < 0) && (tmp10 < tmp12))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp10, tmp12); $Pi += tmp11)
    {
      data->localData[0]->realVars[275] /* Splitter1.MW variable */ = data->localData[0]->realVars[275] /* Splitter1.MW variable */ + ((&data->simulationInfo->realParameter[637])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[276] /* Splitter1.inMixMolFrac[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]);
    }
  }
  TRACE_POP
}
/*
equation index: 363
type: SIMPLE_ASSIGN
Splitter1._outMixMasFlo[1] = 50.0 * Splitter1.MW
*/
void splitter1_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  data->localData[0]->realVars[278] /* Splitter1.outMixMasFlo[1] variable */ = (50.0) * (data->localData[0]->realVars[275] /* Splitter1.MW variable */);
  TRACE_POP
}
/*
equation index: 364
type: SIMPLE_ASSIGN
Splitter1._outMixMasFlo[2] = Splitter1.outMixMasFlo[1]
*/
void splitter1_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  data->localData[0]->realVars[279] /* Splitter1.outMixMasFlo[2] variable */ = data->localData[0]->realVars[278] /* Splitter1.outMixMasFlo[1] variable */;
  TRACE_POP
}
/*
equation index: 365
type: SIMPLE_ASSIGN
MatStm5._compMolFrac[1,1] = MatStm3.compMolFrac[1,1]
*/
void splitter1_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  data->localData[0]->realVars[226] /* MatStm5.compMolFrac[1,1] variable */ = data->localData[0]->realVars[49] /* MatStm3.compMolFrac[1,1] variable */;
  TRACE_POP
}
/*
equation index: 366
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[1,1] = 50.0 * MatStm5.compMolFrac[1,1]
*/
void splitter1_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->localData[0]->realVars[220] /* MatStm5.compMolFlo[1,1] variable */ = (50.0) * (data->localData[0]->realVars[226] /* MatStm5.compMolFrac[1,1] variable */);
  TRACE_POP
}
/*
equation index: 367
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[1,1] = MatStm5.compMolFlo[1,1] * MatStm5.comp[1].MW
*/
void splitter1_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->localData[0]->realVars[196] /* MatStm5.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[220] /* MatStm5.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[479]);
  TRACE_POP
}
/*
equation index: 368
type: SIMPLE_ASSIGN
MatStm5._Pbubl = MatStm5.compMolFrac[1,1] * $cse3 + MatStm5.compMolFrac[1,2] * $cse4
*/
void splitter1_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->localData[0]->realVars[192] /* MatStm5.Pbubl variable */ = (data->localData[0]->realVars[226] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[2] /* $cse3 variable */) + (data->localData[0]->realVars[227] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[3] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 369
type: SIMPLE_ASSIGN
MatStm5._Pdew = 1.0 / (MatStm5.compMolFrac[1,1] * $cse1 + MatStm5.compMolFrac[1,2] * $cse2)
*/
void splitter1_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->localData[0]->realVars[193] /* MatStm5.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[226] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[0] /* $cse1 variable */) + (data->localData[0]->realVars[227] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[1] /* $cse2 variable */),"MatStm5.compMolFrac[1,1] * $cse1 + MatStm5.compMolFrac[1,2] * $cse2",equationIndexes);
  TRACE_POP
}
void splitter1_eqFunction_370(DATA*, threadData_t*);
void splitter1_eqFunction_371(DATA*, threadData_t*);
void splitter1_eqFunction_372(DATA*, threadData_t*);
void splitter1_eqFunction_373(DATA*, threadData_t*);
void splitter1_eqFunction_374(DATA*, threadData_t*);
void splitter1_eqFunction_375(DATA*, threadData_t*);
void splitter1_eqFunction_376(DATA*, threadData_t*);
void splitter1_eqFunction_381(DATA*, threadData_t*);
void splitter1_eqFunction_380(DATA*, threadData_t*);
void splitter1_eqFunction_379(DATA*, threadData_t*);
void splitter1_eqFunction_378(DATA*, threadData_t*);
void splitter1_eqFunction_377(DATA*, threadData_t*);
/*
equation index: 394
indexNonlinear: 4
type: NONLINEAR

vars: {MatStm5._totMolFlo[3], MatStm5._compMolFrac[2,1], MatStm5._compMolFrac[2,2], MatStm5._compMolFrac[3,2], MatStm5._compMolFrac[3,1]}
eqns: {370, 371, 372, 373, 374, 375, 376, 381, 380, 379, 378, 377}
*/
void splitter1_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 394 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[270] /* MatStm5.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[1] = data->localData[0]->realVars[228] /* MatStm5.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[2] = data->localData[0]->realVars[229] /* MatStm5.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[3] = data->localData[0]->realVars[231] /* MatStm5.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[4] = data->localData[0]->realVars[230] /* MatStm5.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,394};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 394 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[270] /* MatStm5.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  data->localData[0]->realVars[228] /* MatStm5.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[1];
  data->localData[0]->realVars[229] /* MatStm5.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[2];
  data->localData[0]->realVars[231] /* MatStm5.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[3];
  data->localData[0]->realVars[230] /* MatStm5.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[4];
  TRACE_POP
}
/*
equation index: 395
type: SIMPLE_ASSIGN
MatStm5._phasMolEnth[3] = MatStm5.compMolFrac[3,1] * MatStm5.compMolEnth[3,1] + MatStm5.compMolFrac[3,2] * MatStm5.compMolEnth[3,2]
*/
void splitter1_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->localData[0]->realVars[250] /* MatStm5.phasMolEnth[3] variable */ = (data->localData[0]->realVars[230] /* MatStm5.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[212] /* MatStm5.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[231] /* MatStm5.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[213] /* MatStm5.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 396
type: SIMPLE_ASSIGN
MatStm5._phasMolSpHeat[3] = MatStm5.compMolFrac[3,1] * MatStm5.compMolSpHeat[3,1] + MatStm5.compMolFrac[3,2] * MatStm5.compMolSpHeat[3,2]
*/
void splitter1_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->localData[0]->realVars[256] /* MatStm5.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[230] /* MatStm5.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[236] /* MatStm5.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[231] /* MatStm5.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[237] /* MatStm5.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 397
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[3,2] = MatStm5.compMolFlo[3,2] * MatStm5.comp[2].MW
*/
void splitter1_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->localData[0]->realVars[201] /* MatStm5.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[225] /* MatStm5.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[480]);
  TRACE_POP
}
/*
equation index: 398
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[2,2] = MatStm5.compMolFlo[2,2] * MatStm5.comp[2].MW
*/
void splitter1_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  data->localData[0]->realVars[199] /* MatStm5.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[223] /* MatStm5.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[480]);
  TRACE_POP
}
/*
equation index: 399
type: ALGORITHM

  (MatStm5.compMolEntr[2,2], MatStm5.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm5.comp[2].AS, {MatStm5.comp[2].VapCp[1], MatStm5.comp[2].VapCp[2], MatStm5.comp[2].VapCp[3], MatStm5.comp[2].VapCp[4], MatStm5.comp[2].VapCp[5], MatStm5.comp[2].VapCp[6]}, {MatStm5.comp[2].HOV[1], MatStm5.comp[2].HOV[2], MatStm5.comp[2].HOV[3], MatStm5.comp[2].HOV[4], MatStm5.comp[2].HOV[5], MatStm5.comp[2].HOV[6]}, MatStm5.comp[2].Tb, MatStm5.comp[2].Tc, 315.0287067347126, 101325.0, MatStm5.compMolFrac[2,2], MatStm5.compMolFrac[3,2]);
*/
void splitter1_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426]);
  data->localData[0]->realVars[217] /* MatStm5.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[398], tmp0, tmp1, data->simulationInfo->realParameter[494], data->simulationInfo->realParameter[496], 315.0287067347126, 101325.0, data->localData[0]->realVars[229] /* MatStm5.compMolFrac[2,2] variable */, data->localData[0]->realVars[231] /* MatStm5.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[219] /* MatStm5.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 400
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[3,1] = MatStm5.compMolFlo[3,1] * MatStm5.comp[1].MW
*/
void splitter1_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->localData[0]->realVars[200] /* MatStm5.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[224] /* MatStm5.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[479]);
  TRACE_POP
}
/*
equation index: 401
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[2,1] = MatStm5.compMolFlo[2,1] * MatStm5.comp[1].MW
*/
void splitter1_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  data->localData[0]->realVars[198] /* MatStm5.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[222] /* MatStm5.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[479]);
  TRACE_POP
}
/*
equation index: 402
type: ALGORITHM

  (MatStm5.compMolEntr[2,1], MatStm5.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm5.comp[1].AS, {MatStm5.comp[1].VapCp[1], MatStm5.comp[1].VapCp[2], MatStm5.comp[1].VapCp[3], MatStm5.comp[1].VapCp[4], MatStm5.comp[1].VapCp[5], MatStm5.comp[1].VapCp[6]}, {MatStm5.comp[1].HOV[1], MatStm5.comp[1].HOV[2], MatStm5.comp[1].HOV[3], MatStm5.comp[1].HOV[4], MatStm5.comp[1].HOV[5], MatStm5.comp[1].HOV[6]}, MatStm5.comp[1].Tb, MatStm5.comp[1].Tc, 315.0287067347126, 101325.0, MatStm5.compMolFrac[2,1], MatStm5.compMolFrac[3,1]);
*/
void splitter1_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420]);
  data->localData[0]->realVars[216] /* MatStm5.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[397], tmp2, tmp3, data->simulationInfo->realParameter[493], data->simulationInfo->realParameter[495], 315.0287067347126, 101325.0, data->localData[0]->realVars[228] /* MatStm5.compMolFrac[2,1] variable */, data->localData[0]->realVars[230] /* MatStm5.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[218] /* MatStm5.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 403
type: SIMPLE_ASSIGN
MatStm5._phasMolEntr[3] = MatStm5.compMolFrac[3,1] * MatStm5.compMolEntr[3,1] + MatStm5.compMolFrac[3,2] * MatStm5.compMolEntr[3,2]
*/
void splitter1_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  data->localData[0]->realVars[253] /* MatStm5.phasMolEntr[3] variable */ = (data->localData[0]->realVars[230] /* MatStm5.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[218] /* MatStm5.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[231] /* MatStm5.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[219] /* MatStm5.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 404
type: SIMPLE_ASSIGN
MatStm5._phasMolEnth[2] = MatStm5.compMolFrac[2,1] * MatStm5.compMolEnth[2,1] + MatStm5.compMolFrac[2,2] * MatStm5.compMolEnth[2,2]
*/
void splitter1_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->localData[0]->realVars[249] /* MatStm5.phasMolEnth[2] variable */ = (data->localData[0]->realVars[228] /* MatStm5.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[210] /* MatStm5.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[229] /* MatStm5.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[211] /* MatStm5.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 405
type: SIMPLE_ASSIGN
MatStm5._phasMolEnth[1] = MatStm5.liqPhasMolFrac * MatStm5.phasMolEnth[2] + MatStm5.vapPhasMolFrac * MatStm5.phasMolEnth[3]
*/
void splitter1_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  data->localData[0]->realVars[248] /* MatStm5.phasMolEnth[1] variable */ = (data->localData[0]->realVars[245] /* MatStm5.liqPhasMolFrac variable */) * (data->localData[0]->realVars[249] /* MatStm5.phasMolEnth[2] variable */) + (data->localData[0]->realVars[272] /* MatStm5.vapPhasMolFrac variable */) * (data->localData[0]->realVars[250] /* MatStm5.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 406
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[1,2] = MatStm5.compMolFrac[1,2] * MatStm5.phasMolEnth[1]
*/
void splitter1_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  data->localData[0]->realVars[209] /* MatStm5.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[227] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[248] /* MatStm5.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 407
type: SIMPLE_ASSIGN
MatStm5._phasMolSpHeat[2] = MatStm5.compMolFrac[2,1] * MatStm5.compMolSpHeat[2,1] + MatStm5.compMolFrac[2,2] * MatStm5.compMolSpHeat[2,2]
*/
void splitter1_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->localData[0]->realVars[255] /* MatStm5.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[228] /* MatStm5.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[234] /* MatStm5.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[229] /* MatStm5.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[235] /* MatStm5.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 408
type: SIMPLE_ASSIGN
MatStm5._phasMolSpHeat[1] = MatStm5.liqPhasMolFrac * MatStm5.phasMolSpHeat[2] + MatStm5.vapPhasMolFrac * MatStm5.phasMolSpHeat[3]
*/
void splitter1_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->localData[0]->realVars[254] /* MatStm5.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[245] /* MatStm5.liqPhasMolFrac variable */) * (data->localData[0]->realVars[255] /* MatStm5.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[272] /* MatStm5.vapPhasMolFrac variable */) * (data->localData[0]->realVars[256] /* MatStm5.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 409
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[1,2] = MatStm5.compMolFrac[1,2] * MatStm5.phasMolSpHeat[1]
*/
void splitter1_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->localData[0]->realVars[233] /* MatStm5.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[227] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[254] /* MatStm5.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 410
type: SIMPLE_ASSIGN
MatStm5._phasMolEntr[2] = MatStm5.compMolFrac[2,1] * MatStm5.compMolEntr[2,1] + MatStm5.compMolFrac[2,2] * MatStm5.compMolEntr[2,2]
*/
void splitter1_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->localData[0]->realVars[252] /* MatStm5.phasMolEntr[2] variable */ = (data->localData[0]->realVars[228] /* MatStm5.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[216] /* MatStm5.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[229] /* MatStm5.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[217] /* MatStm5.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 411
type: SIMPLE_ASSIGN
MatStm5._phasMolEntr[1] = MatStm5.liqPhasMolFrac * MatStm5.phasMolEntr[2] + MatStm5.vapPhasMolFrac * MatStm5.phasMolEntr[3]
*/
void splitter1_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  data->localData[0]->realVars[251] /* MatStm5.phasMolEntr[1] variable */ = (data->localData[0]->realVars[245] /* MatStm5.liqPhasMolFrac variable */) * (data->localData[0]->realVars[252] /* MatStm5.phasMolEntr[2] variable */) + (data->localData[0]->realVars[272] /* MatStm5.vapPhasMolFrac variable */) * (data->localData[0]->realVars[253] /* MatStm5.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 412
type: SIMPLE_ASSIGN
MatStm5._compMolEntr[1,2] = MatStm5.compMolFrac[1,2] * MatStm5.phasMolEntr[1]
*/
void splitter1_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->localData[0]->realVars[215] /* MatStm5.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[227] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[251] /* MatStm5.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 413
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[1,1] = MatStm5.compMolFrac[1,1] * MatStm5.phasMolEnth[1]
*/
void splitter1_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->localData[0]->realVars[208] /* MatStm5.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[226] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[248] /* MatStm5.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 414
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[1,1] = MatStm5.compMolFrac[1,1] * MatStm5.phasMolSpHeat[1]
*/
void splitter1_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->localData[0]->realVars[232] /* MatStm5.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[226] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[254] /* MatStm5.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 415
type: SIMPLE_ASSIGN
MatStm5._compMolEntr[1,1] = MatStm5.compMolFrac[1,1] * MatStm5.phasMolEntr[1]
*/
void splitter1_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->localData[0]->realVars[214] /* MatStm5.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[226] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[251] /* MatStm5.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 416
type: ALGORITHM

  MatStm5.MW[3] := $START.MatStm5.MW[3];
  MatStm5.MW[2] := $START.MatStm5.MW[2];
  MatStm5.MW[1] := $START.MatStm5.MW[1];
  for i in 1:2 loop
    MatStm5.MW[:] := {MatStm5.MW[1] + MatStm5.compMolFrac[1,i] * MatStm5.comp[i].MW, MatStm5.MW[2] + MatStm5.compMolFrac[2,i] * MatStm5.comp[i].MW, MatStm5.MW[3] + MatStm5.compMolFrac[3,i] * MatStm5.comp[i].MW};
  end for;
*/
void splitter1_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[191] /* MatStm5.MW[3] variable */ = data->modelData->realVarsData[191].attribute /* MatStm5.MW[3] variable */.start;

  data->localData[0]->realVars[190] /* MatStm5.MW[2] variable */ = data->modelData->realVarsData[190].attribute /* MatStm5.MW[2] variable */.start;

  data->localData[0]->realVars[189] /* MatStm5.MW[1] variable */ = data->modelData->realVarsData[189].attribute /* MatStm5.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[189] /* MatStm5.MW[1] variable */ + ((&data->localData[0]->realVars[226] /* MatStm5.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[190] /* MatStm5.MW[2] variable */ + ((&data->localData[0]->realVars[226] /* MatStm5.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[191] /* MatStm5.MW[3] variable */ + ((&data->localData[0]->realVars[226] /* MatStm5.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[189] /* MatStm5.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
/*
equation index: 417
type: SIMPLE_ASSIGN
MatStm5._totMasFlo[3] = MatStm5.totMolFlo[3] * MatStm5.MW[3]
*/
void splitter1_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->localData[0]->realVars[268] /* MatStm5.totMasFlo[3] variable */ = (data->localData[0]->realVars[270] /* MatStm5.totMolFlo[3] variable */) * (data->localData[0]->realVars[191] /* MatStm5.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 418
type: SIMPLE_ASSIGN
MatStm5._totMasFlo[1] = 50.0 * MatStm5.MW[1]
*/
void splitter1_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->localData[0]->realVars[266] /* MatStm5.totMasFlo[1] variable */ = (50.0) * (data->localData[0]->realVars[189] /* MatStm5.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 419
type: SIMPLE_ASSIGN
MatStm5._vapPhasMasFrac = MatStm5.totMasFlo[3] / MatStm5.totMasFlo[1]
*/
void splitter1_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->localData[0]->realVars[271] /* MatStm5.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[268] /* MatStm5.totMasFlo[3] variable */,data->localData[0]->realVars[266] /* MatStm5.totMasFlo[1] variable */,"MatStm5.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 420
type: SIMPLE_ASSIGN
MatStm5._compMasFrac[1,2] = MatStm5.compMasFlo[1,2] / MatStm5.totMasFlo[1]
*/
void splitter1_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->localData[0]->realVars[203] /* MatStm5.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[197] /* MatStm5.compMasFlo[1,2] variable */,data->localData[0]->realVars[266] /* MatStm5.totMasFlo[1] variable */,"MatStm5.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 421
type: SIMPLE_ASSIGN
MatStm5._totMasFlo[2] = MatStm5.totMolFlo[2] * MatStm5.MW[2]
*/
void splitter1_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->localData[0]->realVars[267] /* MatStm5.totMasFlo[2] variable */ = (data->localData[0]->realVars[269] /* MatStm5.totMolFlo[2] variable */) * (data->localData[0]->realVars[190] /* MatStm5.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 422
type: SIMPLE_ASSIGN
MatStm5._liqPhasMasFrac = MatStm5.totMasFlo[2] / MatStm5.totMasFlo[1]
*/
void splitter1_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  data->localData[0]->realVars[244] /* MatStm5.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[267] /* MatStm5.totMasFlo[2] variable */,data->localData[0]->realVars[266] /* MatStm5.totMasFlo[1] variable */,"MatStm5.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 423
type: LINEAR

<var>MatStm5._compMasFrac[3,2]</var>
<var>MatStm5._compMasFrac[2,1]</var>
<var>MatStm5._compMasFrac[1,1]</var>
<var>MatStm5._compMasFrac[3,1]</var>
<var>MatStm5._compMasFrac[2,2]</var>
<row>
  <cell>if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then MatStm5.compMasFlo[1,1] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[3,1] else MatStm5.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then -MatStm5.compMasFrac[1,2] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[3,2] else -MatStm5.compMasFrac[1,2]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="1">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="1">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then -1.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then -MatStm5.totMasFlo[1] else if 101325.0 >= MatStm5.Pdew then -0.0 else -MatStm5.totMasFlo[1])</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then -0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void splitter1_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[207] /* MatStm5.compMasFrac[3,2] variable */,data->localData[1]->realVars[204] /* MatStm5.compMasFrac[2,1] variable */,data->localData[1]->realVars[202] /* MatStm5.compMasFrac[1,1] variable */,data->localData[1]->realVars[206] /* MatStm5.compMasFrac[3,1] variable */,data->localData[1]->realVars[205] /* MatStm5.compMasFrac[2,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 423 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 4, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,423};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 423 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[207] /* MatStm5.compMasFrac[3,2] variable */ = aux_x[0];
  data->localData[0]->realVars[204] /* MatStm5.compMasFrac[2,1] variable */ = aux_x[1];
  data->localData[0]->realVars[202] /* MatStm5.compMasFrac[1,1] variable */ = aux_x[2];
  data->localData[0]->realVars[206] /* MatStm5.compMasFrac[3,1] variable */ = aux_x[3];
  data->localData[0]->realVars[205] /* MatStm5.compMasFrac[2,2] variable */ = aux_x[4];
  TRACE_POP
}
/*
equation index: 424
type: SIMPLE_ASSIGN
MatStm4._compMolFrac[1,1] = MatStm3.compMolFrac[1,1]
*/
void splitter1_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->localData[0]->realVars[138] /* MatStm4.compMolFrac[1,1] variable */ = data->localData[0]->realVars[49] /* MatStm3.compMolFrac[1,1] variable */;
  TRACE_POP
}
/*
equation index: 425
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[1,1] = 50.0 * MatStm4.compMolFrac[1,1]
*/
void splitter1_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->localData[0]->realVars[132] /* MatStm4.compMolFlo[1,1] variable */ = (50.0) * (data->localData[0]->realVars[138] /* MatStm4.compMolFrac[1,1] variable */);
  TRACE_POP
}
/*
equation index: 426
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[1,1] = MatStm4.compMolFlo[1,1] * MatStm4.comp[1].MW
*/
void splitter1_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  data->localData[0]->realVars[108] /* MatStm4.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[132] /* MatStm4.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[321]);
  TRACE_POP
}
/*
equation index: 427
type: SIMPLE_ASSIGN
MatStm4._Pbubl = MatStm4.compMolFrac[1,1] * $cse7 + MatStm4.compMolFrac[1,2] * $cse8
*/
void splitter1_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->localData[0]->realVars[104] /* MatStm4.Pbubl variable */ = (data->localData[0]->realVars[138] /* MatStm4.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[6] /* $cse7 variable */) + (data->localData[0]->realVars[139] /* MatStm4.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[7] /* $cse8 variable */);
  TRACE_POP
}
/*
equation index: 428
type: SIMPLE_ASSIGN
MatStm4._Pdew = 1.0 / (MatStm4.compMolFrac[1,1] * $cse5 + MatStm4.compMolFrac[1,2] * $cse6)
*/
void splitter1_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->localData[0]->realVars[105] /* MatStm4.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[138] /* MatStm4.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[4] /* $cse5 variable */) + (data->localData[0]->realVars[139] /* MatStm4.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[5] /* $cse6 variable */),"MatStm4.compMolFrac[1,1] * $cse5 + MatStm4.compMolFrac[1,2] * $cse6",equationIndexes);
  TRACE_POP
}
void splitter1_eqFunction_429(DATA*, threadData_t*);
void splitter1_eqFunction_430(DATA*, threadData_t*);
void splitter1_eqFunction_431(DATA*, threadData_t*);
void splitter1_eqFunction_432(DATA*, threadData_t*);
void splitter1_eqFunction_433(DATA*, threadData_t*);
void splitter1_eqFunction_434(DATA*, threadData_t*);
void splitter1_eqFunction_435(DATA*, threadData_t*);
void splitter1_eqFunction_440(DATA*, threadData_t*);
void splitter1_eqFunction_439(DATA*, threadData_t*);
void splitter1_eqFunction_438(DATA*, threadData_t*);
void splitter1_eqFunction_437(DATA*, threadData_t*);
void splitter1_eqFunction_436(DATA*, threadData_t*);
/*
equation index: 453
indexNonlinear: 5
type: NONLINEAR

vars: {MatStm4._totMolFlo[3], MatStm4._compMolFrac[2,1], MatStm4._compMolFrac[3,1], MatStm4._compMolFrac[3,2], MatStm4._compMolFrac[2,2]}
eqns: {429, 430, 431, 432, 433, 434, 435, 440, 439, 438, 437, 436}
*/
void splitter1_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 453 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = data->localData[0]->realVars[182] /* MatStm4.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[1] = data->localData[0]->realVars[140] /* MatStm4.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[2] = data->localData[0]->realVars[142] /* MatStm4.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[3] = data->localData[0]->realVars[143] /* MatStm4.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[4] = data->localData[0]->realVars[141] /* MatStm4.compMolFrac[2,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,453};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 453 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[182] /* MatStm4.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  data->localData[0]->realVars[140] /* MatStm4.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[1];
  data->localData[0]->realVars[142] /* MatStm4.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[2];
  data->localData[0]->realVars[143] /* MatStm4.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[3];
  data->localData[0]->realVars[141] /* MatStm4.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[4];
  TRACE_POP
}
/*
equation index: 454
type: ALGORITHM

  (MatStm4.compMolEntr[2,2], MatStm4.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm4.comp[2].AS, {MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, {MatStm4.comp[2].HOV[1], MatStm4.comp[2].HOV[2], MatStm4.comp[2].HOV[3], MatStm4.comp[2].HOV[4], MatStm4.comp[2].HOV[5], MatStm4.comp[2].HOV[6]}, MatStm4.comp[2].Tb, MatStm4.comp[2].Tc, 315.0287067347126, 101325.0, MatStm4.compMolFrac[2,2], MatStm4.compMolFrac[3,2]);
*/
void splitter1_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364], (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264], (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268]);
  data->localData[0]->realVars[129] /* MatStm4.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[240], tmp0, tmp1, data->simulationInfo->realParameter[336], data->simulationInfo->realParameter[338], 315.0287067347126, 101325.0, data->localData[0]->realVars[141] /* MatStm4.compMolFrac[2,2] variable */, data->localData[0]->realVars[143] /* MatStm4.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[131] /* MatStm4.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 455
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[3,2] = MatStm4.compMolFlo[3,2] * MatStm4.comp[2].MW
*/
void splitter1_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  data->localData[0]->realVars[113] /* MatStm4.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[137] /* MatStm4.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[322]);
  TRACE_POP
}
/*
equation index: 456
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[2,2] = MatStm4.compMolFlo[2,2] * MatStm4.comp[2].MW
*/
void splitter1_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  data->localData[0]->realVars[111] /* MatStm4.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[135] /* MatStm4.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[322]);
  TRACE_POP
}
/*
equation index: 457
type: SIMPLE_ASSIGN
MatStm4._phasMolEnth[3] = MatStm4.compMolFrac[3,1] * MatStm4.compMolEnth[3,1] + MatStm4.compMolFrac[3,2] * MatStm4.compMolEnth[3,2]
*/
void splitter1_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  data->localData[0]->realVars[162] /* MatStm4.phasMolEnth[3] variable */ = (data->localData[0]->realVars[142] /* MatStm4.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[124] /* MatStm4.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[143] /* MatStm4.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[125] /* MatStm4.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 458
type: SIMPLE_ASSIGN
MatStm4._phasMolSpHeat[3] = MatStm4.compMolFrac[3,1] * MatStm4.compMolSpHeat[3,1] + MatStm4.compMolFrac[3,2] * MatStm4.compMolSpHeat[3,2]
*/
void splitter1_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  data->localData[0]->realVars[168] /* MatStm4.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[142] /* MatStm4.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[148] /* MatStm4.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[143] /* MatStm4.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[149] /* MatStm4.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 459
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[3,1] = MatStm4.compMolFlo[3,1] * MatStm4.comp[1].MW
*/
void splitter1_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  data->localData[0]->realVars[112] /* MatStm4.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[136] /* MatStm4.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[321]);
  TRACE_POP
}
/*
equation index: 460
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[2,1] = MatStm4.compMolFlo[2,1] * MatStm4.comp[1].MW
*/
void splitter1_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  data->localData[0]->realVars[110] /* MatStm4.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[134] /* MatStm4.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[321]);
  TRACE_POP
}
/*
equation index: 461
type: ALGORITHM

  (MatStm4.compMolEntr[2,1], MatStm4.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm4.comp[1].AS, {MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, {MatStm4.comp[1].HOV[1], MatStm4.comp[1].HOV[2], MatStm4.comp[1].HOV[3], MatStm4.comp[1].HOV[4], MatStm4.comp[1].HOV[5], MatStm4.comp[1].HOV[6]}, MatStm4.comp[1].Tb, MatStm4.comp[1].Tc, 315.0287067347126, 101325.0, MatStm4.compMolFrac[2,1], MatStm4.compMolFrac[3,1]);
*/
void splitter1_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358], (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[257], (modelica_real)data->simulationInfo->realParameter[258], (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262]);
  data->localData[0]->realVars[128] /* MatStm4.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[239], tmp2, tmp3, data->simulationInfo->realParameter[335], data->simulationInfo->realParameter[337], 315.0287067347126, 101325.0, data->localData[0]->realVars[140] /* MatStm4.compMolFrac[2,1] variable */, data->localData[0]->realVars[142] /* MatStm4.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[130] /* MatStm4.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 462
type: SIMPLE_ASSIGN
MatStm4._phasMolEntr[3] = MatStm4.compMolFrac[3,1] * MatStm4.compMolEntr[3,1] + MatStm4.compMolFrac[3,2] * MatStm4.compMolEntr[3,2]
*/
void splitter1_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  data->localData[0]->realVars[165] /* MatStm4.phasMolEntr[3] variable */ = (data->localData[0]->realVars[142] /* MatStm4.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[130] /* MatStm4.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[143] /* MatStm4.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[131] /* MatStm4.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 463
type: SIMPLE_ASSIGN
MatStm4._phasMolEnth[2] = MatStm4.compMolFrac[2,1] * MatStm4.compMolEnth[2,1] + MatStm4.compMolFrac[2,2] * MatStm4.compMolEnth[2,2]
*/
void splitter1_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->localData[0]->realVars[161] /* MatStm4.phasMolEnth[2] variable */ = (data->localData[0]->realVars[140] /* MatStm4.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[122] /* MatStm4.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[141] /* MatStm4.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[123] /* MatStm4.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 464
type: SIMPLE_ASSIGN
MatStm4._phasMolEnth[1] = MatStm4.liqPhasMolFrac * MatStm4.phasMolEnth[2] + MatStm4.vapPhasMolFrac * MatStm4.phasMolEnth[3]
*/
void splitter1_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  data->localData[0]->realVars[160] /* MatStm4.phasMolEnth[1] variable */ = (data->localData[0]->realVars[157] /* MatStm4.liqPhasMolFrac variable */) * (data->localData[0]->realVars[161] /* MatStm4.phasMolEnth[2] variable */) + (data->localData[0]->realVars[184] /* MatStm4.vapPhasMolFrac variable */) * (data->localData[0]->realVars[162] /* MatStm4.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 465
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[1,2] = MatStm4.compMolFrac[1,2] * MatStm4.phasMolEnth[1]
*/
void splitter1_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  data->localData[0]->realVars[121] /* MatStm4.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[139] /* MatStm4.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[160] /* MatStm4.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 466
type: SIMPLE_ASSIGN
MatStm4._phasMolSpHeat[2] = MatStm4.compMolFrac[2,1] * MatStm4.compMolSpHeat[2,1] + MatStm4.compMolFrac[2,2] * MatStm4.compMolSpHeat[2,2]
*/
void splitter1_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->localData[0]->realVars[167] /* MatStm4.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[140] /* MatStm4.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[146] /* MatStm4.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[141] /* MatStm4.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[147] /* MatStm4.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 467
type: SIMPLE_ASSIGN
MatStm4._phasMolSpHeat[1] = MatStm4.liqPhasMolFrac * MatStm4.phasMolSpHeat[2] + MatStm4.vapPhasMolFrac * MatStm4.phasMolSpHeat[3]
*/
void splitter1_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  data->localData[0]->realVars[166] /* MatStm4.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[157] /* MatStm4.liqPhasMolFrac variable */) * (data->localData[0]->realVars[167] /* MatStm4.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[184] /* MatStm4.vapPhasMolFrac variable */) * (data->localData[0]->realVars[168] /* MatStm4.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 468
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[1,2] = MatStm4.compMolFrac[1,2] * MatStm4.phasMolSpHeat[1]
*/
void splitter1_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  data->localData[0]->realVars[145] /* MatStm4.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[139] /* MatStm4.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[166] /* MatStm4.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 469
type: SIMPLE_ASSIGN
MatStm4._phasMolEntr[2] = MatStm4.compMolFrac[2,1] * MatStm4.compMolEntr[2,1] + MatStm4.compMolFrac[2,2] * MatStm4.compMolEntr[2,2]
*/
void splitter1_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  data->localData[0]->realVars[164] /* MatStm4.phasMolEntr[2] variable */ = (data->localData[0]->realVars[140] /* MatStm4.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[128] /* MatStm4.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[141] /* MatStm4.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[129] /* MatStm4.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 470
type: SIMPLE_ASSIGN
MatStm4._phasMolEntr[1] = MatStm4.liqPhasMolFrac * MatStm4.phasMolEntr[2] + MatStm4.vapPhasMolFrac * MatStm4.phasMolEntr[3]
*/
void splitter1_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  data->localData[0]->realVars[163] /* MatStm4.phasMolEntr[1] variable */ = (data->localData[0]->realVars[157] /* MatStm4.liqPhasMolFrac variable */) * (data->localData[0]->realVars[164] /* MatStm4.phasMolEntr[2] variable */) + (data->localData[0]->realVars[184] /* MatStm4.vapPhasMolFrac variable */) * (data->localData[0]->realVars[165] /* MatStm4.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 471
type: SIMPLE_ASSIGN
MatStm4._compMolEntr[1,2] = MatStm4.compMolFrac[1,2] * MatStm4.phasMolEntr[1]
*/
void splitter1_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  data->localData[0]->realVars[127] /* MatStm4.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[139] /* MatStm4.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[163] /* MatStm4.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 472
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[1,1] = MatStm4.compMolFrac[1,1] * MatStm4.phasMolEnth[1]
*/
void splitter1_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  data->localData[0]->realVars[120] /* MatStm4.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[138] /* MatStm4.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[160] /* MatStm4.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 473
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[1,1] = MatStm4.compMolFrac[1,1] * MatStm4.phasMolSpHeat[1]
*/
void splitter1_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->localData[0]->realVars[144] /* MatStm4.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[138] /* MatStm4.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[166] /* MatStm4.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 474
type: SIMPLE_ASSIGN
MatStm4._compMolEntr[1,1] = MatStm4.compMolFrac[1,1] * MatStm4.phasMolEntr[1]
*/
void splitter1_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->localData[0]->realVars[126] /* MatStm4.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[138] /* MatStm4.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[163] /* MatStm4.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 475
type: ALGORITHM

  MatStm4.MW[3] := $START.MatStm4.MW[3];
  MatStm4.MW[2] := $START.MatStm4.MW[2];
  MatStm4.MW[1] := $START.MatStm4.MW[1];
  for i in 1:2 loop
    MatStm4.MW[:] := {MatStm4.MW[1] + MatStm4.compMolFrac[1,i] * MatStm4.comp[i].MW, MatStm4.MW[2] + MatStm4.compMolFrac[2,i] * MatStm4.comp[i].MW, MatStm4.MW[3] + MatStm4.compMolFrac[3,i] * MatStm4.comp[i].MW};
  end for;
*/
void splitter1_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[103] /* MatStm4.MW[3] variable */ = data->modelData->realVarsData[103].attribute /* MatStm4.MW[3] variable */.start;

  data->localData[0]->realVars[102] /* MatStm4.MW[2] variable */ = data->modelData->realVarsData[102].attribute /* MatStm4.MW[2] variable */.start;

  data->localData[0]->realVars[101] /* MatStm4.MW[1] variable */ = data->modelData->realVarsData[101].attribute /* MatStm4.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[101] /* MatStm4.MW[1] variable */ + ((&data->localData[0]->realVars[138] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[102] /* MatStm4.MW[2] variable */ + ((&data->localData[0]->realVars[138] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[103] /* MatStm4.MW[3] variable */ + ((&data->localData[0]->realVars[138] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[101] /* MatStm4.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
/*
equation index: 476
type: SIMPLE_ASSIGN
MatStm4._totMasFlo[1] = 50.0 * MatStm4.MW[1]
*/
void splitter1_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  data->localData[0]->realVars[178] /* MatStm4.totMasFlo[1] variable */ = (50.0) * (data->localData[0]->realVars[101] /* MatStm4.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 477
type: SIMPLE_ASSIGN
MatStm4._compMasFrac[1,2] = MatStm4.compMasFlo[1,2] / MatStm4.totMasFlo[1]
*/
void splitter1_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  data->localData[0]->realVars[115] /* MatStm4.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[109] /* MatStm4.compMasFlo[1,2] variable */,data->localData[0]->realVars[178] /* MatStm4.totMasFlo[1] variable */,"MatStm4.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 478
type: SIMPLE_ASSIGN
MatStm4._totMasFlo[2] = MatStm4.totMolFlo[2] * MatStm4.MW[2]
*/
void splitter1_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  data->localData[0]->realVars[179] /* MatStm4.totMasFlo[2] variable */ = (data->localData[0]->realVars[181] /* MatStm4.totMolFlo[2] variable */) * (data->localData[0]->realVars[102] /* MatStm4.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 479
type: SIMPLE_ASSIGN
MatStm4._liqPhasMasFrac = MatStm4.totMasFlo[2] / MatStm4.totMasFlo[1]
*/
void splitter1_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->localData[0]->realVars[156] /* MatStm4.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[179] /* MatStm4.totMasFlo[2] variable */,data->localData[0]->realVars[178] /* MatStm4.totMasFlo[1] variable */,"MatStm4.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 480
type: SIMPLE_ASSIGN
MatStm4._totMasFlo[3] = MatStm4.totMolFlo[3] * MatStm4.MW[3]
*/
void splitter1_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->localData[0]->realVars[180] /* MatStm4.totMasFlo[3] variable */ = (data->localData[0]->realVars[182] /* MatStm4.totMolFlo[3] variable */) * (data->localData[0]->realVars[103] /* MatStm4.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 481
type: SIMPLE_ASSIGN
MatStm4._vapPhasMasFrac = MatStm4.totMasFlo[3] / MatStm4.totMasFlo[1]
*/
void splitter1_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->localData[0]->realVars[183] /* MatStm4.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[180] /* MatStm4.totMasFlo[3] variable */,data->localData[0]->realVars[178] /* MatStm4.totMasFlo[1] variable */,"MatStm4.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 482
type: LINEAR

<var>MatStm4._compMasFrac[3,2]</var>
<var>MatStm4._compMasFrac[2,1]</var>
<var>MatStm4._compMasFrac[2,2]</var>
<var>MatStm4._compMasFrac[3,1]</var>
<var>MatStm4._compMasFrac[1,1]</var>
<row>
  <cell>if 101325.0 >= MatStm4.Pbubl then MatStm4.compMasFlo[1,1] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[3,1] else MatStm4.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then -MatStm4.compMasFrac[1,2] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[3,2] else -MatStm4.compMasFrac[1,2]</cell>
</row>
<matrix>
  <cell row="0" col="3">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -MatStm4.totMasFlo[1] else if 101325.0 >= MatStm4.Pdew then -0.0 else -MatStm4.totMasFlo[1])</residual>
  </cell><cell row="1" col="1">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="4">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -1.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="4" col="2">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void splitter1_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[119] /* MatStm4.compMasFrac[3,2] variable */,data->localData[1]->realVars[116] /* MatStm4.compMasFrac[2,1] variable */,data->localData[1]->realVars[117] /* MatStm4.compMasFrac[2,2] variable */,data->localData[1]->realVars[118] /* MatStm4.compMasFrac[3,1] variable */,data->localData[1]->realVars[114] /* MatStm4.compMasFrac[1,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 482 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 5, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,482};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 482 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[119] /* MatStm4.compMasFrac[3,2] variable */ = aux_x[0];
  data->localData[0]->realVars[116] /* MatStm4.compMasFrac[2,1] variable */ = aux_x[1];
  data->localData[0]->realVars[117] /* MatStm4.compMasFrac[2,2] variable */ = aux_x[2];
  data->localData[0]->realVars[118] /* MatStm4.compMasFrac[3,1] variable */ = aux_x[3];
  data->localData[0]->realVars[114] /* MatStm4.compMasFrac[1,1] variable */ = aux_x[4];
  TRACE_POP
}

OMC_DISABLE_OPT
int splitter1_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  
  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  splitter1_functionLocalKnownVars(data, threadData);
  splitter1_eqFunction_292(data, threadData);

  splitter1_eqFunction_293(data, threadData);

  splitter1_eqFunction_294(data, threadData);

  splitter1_eqFunction_295(data, threadData);

  splitter1_eqFunction_296(data, threadData);

  splitter1_eqFunction_297(data, threadData);

  splitter1_eqFunction_298(data, threadData);

  splitter1_eqFunction_299(data, threadData);

  splitter1_eqFunction_324(data, threadData);

  splitter1_eqFunction_325(data, threadData);

  splitter1_eqFunction_326(data, threadData);

  splitter1_eqFunction_327(data, threadData);

  splitter1_eqFunction_328(data, threadData);

  splitter1_eqFunction_329(data, threadData);

  splitter1_eqFunction_330(data, threadData);

  splitter1_eqFunction_331(data, threadData);

  splitter1_eqFunction_332(data, threadData);

  splitter1_eqFunction_333(data, threadData);

  splitter1_eqFunction_334(data, threadData);

  splitter1_eqFunction_335(data, threadData);

  splitter1_eqFunction_336(data, threadData);

  splitter1_eqFunction_337(data, threadData);

  splitter1_eqFunction_338(data, threadData);

  splitter1_eqFunction_339(data, threadData);

  splitter1_eqFunction_340(data, threadData);

  splitter1_eqFunction_341(data, threadData);

  splitter1_eqFunction_342(data, threadData);

  splitter1_eqFunction_343(data, threadData);

  splitter1_eqFunction_344(data, threadData);

  splitter1_eqFunction_345(data, threadData);

  splitter1_eqFunction_346(data, threadData);

  splitter1_eqFunction_347(data, threadData);

  splitter1_eqFunction_348(data, threadData);

  splitter1_eqFunction_349(data, threadData);

  splitter1_eqFunction_350(data, threadData);

  splitter1_eqFunction_351(data, threadData);

  splitter1_eqFunction_352(data, threadData);

  splitter1_eqFunction_353(data, threadData);

  splitter1_eqFunction_354(data, threadData);

  splitter1_eqFunction_355(data, threadData);

  splitter1_eqFunction_356(data, threadData);

  splitter1_eqFunction_357(data, threadData);

  splitter1_eqFunction_358(data, threadData);

  splitter1_eqFunction_359(data, threadData);

  splitter1_eqFunction_360(data, threadData);

  splitter1_eqFunction_361(data, threadData);

  splitter1_eqFunction_362(data, threadData);

  splitter1_eqFunction_363(data, threadData);

  splitter1_eqFunction_364(data, threadData);

  splitter1_eqFunction_365(data, threadData);

  splitter1_eqFunction_366(data, threadData);

  splitter1_eqFunction_367(data, threadData);

  splitter1_eqFunction_368(data, threadData);

  splitter1_eqFunction_369(data, threadData);

  splitter1_eqFunction_394(data, threadData);

  splitter1_eqFunction_395(data, threadData);

  splitter1_eqFunction_396(data, threadData);

  splitter1_eqFunction_397(data, threadData);

  splitter1_eqFunction_398(data, threadData);

  splitter1_eqFunction_399(data, threadData);

  splitter1_eqFunction_400(data, threadData);

  splitter1_eqFunction_401(data, threadData);

  splitter1_eqFunction_402(data, threadData);

  splitter1_eqFunction_403(data, threadData);

  splitter1_eqFunction_404(data, threadData);

  splitter1_eqFunction_405(data, threadData);

  splitter1_eqFunction_406(data, threadData);

  splitter1_eqFunction_407(data, threadData);

  splitter1_eqFunction_408(data, threadData);

  splitter1_eqFunction_409(data, threadData);

  splitter1_eqFunction_410(data, threadData);

  splitter1_eqFunction_411(data, threadData);

  splitter1_eqFunction_412(data, threadData);

  splitter1_eqFunction_413(data, threadData);

  splitter1_eqFunction_414(data, threadData);

  splitter1_eqFunction_415(data, threadData);

  splitter1_eqFunction_416(data, threadData);

  splitter1_eqFunction_417(data, threadData);

  splitter1_eqFunction_418(data, threadData);

  splitter1_eqFunction_419(data, threadData);

  splitter1_eqFunction_420(data, threadData);

  splitter1_eqFunction_421(data, threadData);

  splitter1_eqFunction_422(data, threadData);

  splitter1_eqFunction_423(data, threadData);

  splitter1_eqFunction_424(data, threadData);

  splitter1_eqFunction_425(data, threadData);

  splitter1_eqFunction_426(data, threadData);

  splitter1_eqFunction_427(data, threadData);

  splitter1_eqFunction_428(data, threadData);

  splitter1_eqFunction_453(data, threadData);

  splitter1_eqFunction_454(data, threadData);

  splitter1_eqFunction_455(data, threadData);

  splitter1_eqFunction_456(data, threadData);

  splitter1_eqFunction_457(data, threadData);

  splitter1_eqFunction_458(data, threadData);

  splitter1_eqFunction_459(data, threadData);

  splitter1_eqFunction_460(data, threadData);

  splitter1_eqFunction_461(data, threadData);

  splitter1_eqFunction_462(data, threadData);

  splitter1_eqFunction_463(data, threadData);

  splitter1_eqFunction_464(data, threadData);

  splitter1_eqFunction_465(data, threadData);

  splitter1_eqFunction_466(data, threadData);

  splitter1_eqFunction_467(data, threadData);

  splitter1_eqFunction_468(data, threadData);

  splitter1_eqFunction_469(data, threadData);

  splitter1_eqFunction_470(data, threadData);

  splitter1_eqFunction_471(data, threadData);

  splitter1_eqFunction_472(data, threadData);

  splitter1_eqFunction_473(data, threadData);

  splitter1_eqFunction_474(data, threadData);

  splitter1_eqFunction_475(data, threadData);

  splitter1_eqFunction_476(data, threadData);

  splitter1_eqFunction_477(data, threadData);

  splitter1_eqFunction_478(data, threadData);

  splitter1_eqFunction_479(data, threadData);

  splitter1_eqFunction_480(data, threadData);

  splitter1_eqFunction_481(data, threadData);

  splitter1_eqFunction_482(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int splitter1_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int splitter1_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  data->simulationInfo->callStatistics.functionODE++;
  
  splitter1_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

  
  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "splitter1_12jac.h"
#include "splitter1_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks splitter1_callback = {
   (int (*)(DATA *, threadData_t *, void *)) splitter1_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) splitter1_performQSSSimulation,
   splitter1_updateContinuousSystem,
   splitter1_callExternalObjectDestructors,
   splitter1_initialNonLinearSystem,
   splitter1_initialLinearSystem,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   splitter1_initializeStateSets,
   #else
   NULL,
   #endif
   splitter1_initializeDAEmodeData,
   splitter1_functionODE,
   splitter1_functionAlgebraics,
   splitter1_functionDAE,
   splitter1_functionLocalKnownVars,
   splitter1_input_function,
   splitter1_input_function_init,
   splitter1_input_function_updateStartValues,
   splitter1_output_function,
   splitter1_function_storeDelayed,
   splitter1_updateBoundVariableAttributes,
   splitter1_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   splitter1_functionInitialEquations_lambda0,
   splitter1_functionRemovedInitialEquations,
   splitter1_updateBoundParameters,
   splitter1_checkForAsserts,
   splitter1_function_ZeroCrossingsEquations,
   splitter1_function_ZeroCrossings,
   splitter1_function_updateRelations,
   splitter1_zeroCrossingDescription,
   splitter1_relationDescription,
   splitter1_function_initSample,
   splitter1_INDEX_JAC_A,
   splitter1_INDEX_JAC_B,
   splitter1_INDEX_JAC_C,
   splitter1_INDEX_JAC_D,
   splitter1_initialAnalyticJacobianA,
   splitter1_initialAnalyticJacobianB,
   splitter1_initialAnalyticJacobianC,
   splitter1_initialAnalyticJacobianD,
   splitter1_functionJacA_column,
   splitter1_functionJacB_column,
   splitter1_functionJacC_column,
   splitter1_functionJacD_column,
   splitter1_linear_model_frame,
   splitter1_linear_model_datarecovery_frame,
   splitter1_mayer,
   splitter1_lagrange,
   splitter1_pickUpBoundsForInputsInOptimization,
   splitter1_setInputData,
   splitter1_getTimeGrid,
   splitter1_symbolicInlineSystem,
   splitter1_function_initSynchronous,
   splitter1_function_updateSynchronous,
   splitter1_function_equationsSynchronous,
   splitter1_inputNames,
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
#define _OMC_LIT_RESOURCE_3_dir_data "C:/OMChemSimGUI/Simulator/Simulator"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,9,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,35,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "splitter1"
#define _OMC_LIT_RESOURCE_4_dir_data "C:/OMChemSimGUI/Simulator"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,9,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,25,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void splitter1_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &splitter1_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "splitter1";
  data->modelData->modelFilePrefix = "splitter1";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/OMChemSimGUI/Simulator";
  data->modelData->modelGUID = "{a3afcbf2-4f81-4635-8783-23e570472913}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "splitter1_init.c"
    ;
  static const char contents_info[] =
    #include "splitter1_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "splitter1_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "splitter1_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 284;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 790;
  data->modelData->nParametersInteger = 24;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 21;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 127;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 4;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 4;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.fileName = "splitter1_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 7;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1385;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 6;
  data->modelData->nNonLinearSystems = 6;
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
  
    splitter1_setupDataStruc(&data, threadData);
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


