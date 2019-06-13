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
equation index: 107
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,1] = MatStm1.compMolFlo[1,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->localData[0]->realVars[18] /* MatStm1.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[54] /* MatStm1.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[117]);
  TRACE_POP
}
/*
equation index: 108
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,2] = MatStm1.compMolFlo[1,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[55] /* MatStm1.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[118]);
  TRACE_POP
}
/*
equation index: 109
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,3] = MatStm1.compMolFlo[1,3] * MatStm1.comp[3].MW
*/
void Flowsheet_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,3] variable */ = (data->localData[0]->realVars[56] /* MatStm1.compMolFlo[1,3] variable */) * (data->simulationInfo->realParameter[119]);
  TRACE_POP
}
void Flowsheet_eqFunction_110(DATA*, threadData_t*);
void Flowsheet_eqFunction_111(DATA*, threadData_t*);
void Flowsheet_eqFunction_112(DATA*, threadData_t*);
void Flowsheet_eqFunction_113(DATA*, threadData_t*);
void Flowsheet_eqFunction_114(DATA*, threadData_t*);
/*
equation index: 123
indexNonlinear: 3
type: NONLINEAR

vars: {$cse10}
eqns: {110, 111, 112, 113, 114}
*/
void Flowsheet_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 123 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[0] /* $cse10 variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,123};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 123 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[0] /* $cse10 variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  TRACE_POP
}
void Flowsheet_eqFunction_124(DATA*, threadData_t*);
void Flowsheet_eqFunction_125(DATA*, threadData_t*);
void Flowsheet_eqFunction_126(DATA*, threadData_t*);
void Flowsheet_eqFunction_127(DATA*, threadData_t*);
void Flowsheet_eqFunction_128(DATA*, threadData_t*);
/*
equation index: 137
indexNonlinear: 4
type: NONLINEAR

vars: {$cse14}
eqns: {124, 125, 126, 127, 128}
*/
void Flowsheet_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 137 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[4] /* $cse14 variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,137};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 137 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[4] /* $cse14 variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  TRACE_POP
}
void Flowsheet_eqFunction_138(DATA*, threadData_t*);
void Flowsheet_eqFunction_139(DATA*, threadData_t*);
void Flowsheet_eqFunction_140(DATA*, threadData_t*);
void Flowsheet_eqFunction_141(DATA*, threadData_t*);
void Flowsheet_eqFunction_142(DATA*, threadData_t*);
void Flowsheet_eqFunction_143(DATA*, threadData_t*);
void Flowsheet_eqFunction_144(DATA*, threadData_t*);
void Flowsheet_eqFunction_145(DATA*, threadData_t*);
void Flowsheet_eqFunction_152(DATA*, threadData_t*);
void Flowsheet_eqFunction_151(DATA*, threadData_t*);
void Flowsheet_eqFunction_150(DATA*, threadData_t*);
void Flowsheet_eqFunction_149(DATA*, threadData_t*);
void Flowsheet_eqFunction_148(DATA*, threadData_t*);
void Flowsheet_eqFunction_147(DATA*, threadData_t*);
void Flowsheet_eqFunction_146(DATA*, threadData_t*);
/*
equation index: 168
indexNonlinear: 5
type: NONLINEAR

vars: {MatStm1._totMolFlo[2], MatStm1._compMolFrac[2,3], MatStm1._compMolFrac[3,3], MatStm1._compMolFrac[2,1], MatStm1._compMolFrac[2,2], MatStm1._compMolFrac[3,2], MatStm1._compMolFrac[3,1]}
eqns: {138, 139, 140, 141, 142, 143, 144, 145, 152, 151, 150, 149, 148, 147, 146}
*/
void Flowsheet_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 168 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[1] = data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[2] = data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[3] = data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[4] = data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[5] = data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[6] = data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,168};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 168 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[1];
  data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[2];
  data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[3];
  data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[4];
  data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[5];
  data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[6];
  TRACE_POP
}
/*
equation index: 169
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,1] = MatStm1.compMolFlo[2,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->localData[0]->realVars[21] /* MatStm1.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[57] /* MatStm1.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[117]);
  TRACE_POP
}
/*
equation index: 170
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,1] = MatStm1.compMolFlo[3,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[60] /* MatStm1.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[117]);
  TRACE_POP
}
/*
equation index: 171
type: ALGORITHM

  (MatStm1.compMolEntr[2,2], MatStm1.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[2].AS, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tb, MatStm1.comp[2].Tc, 300.0, 101325.0, MatStm1.compMolFrac[2,2], MatStm1.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[177], (modelica_real)data->simulationInfo->realParameter[178], (modelica_real)data->simulationInfo->realParameter[179], (modelica_real)data->simulationInfo->realParameter[180], (modelica_real)data->simulationInfo->realParameter[181], (modelica_real)data->simulationInfo->realParameter[182]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[27], (modelica_real)data->simulationInfo->realParameter[28], (modelica_real)data->simulationInfo->realParameter[29], (modelica_real)data->simulationInfo->realParameter[30], (modelica_real)data->simulationInfo->realParameter[31], (modelica_real)data->simulationInfo->realParameter[32]);
  data->localData[0]->realVars[49] /* MatStm1.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[4], tmp0, tmp1, data->simulationInfo->realParameter[139], data->simulationInfo->realParameter[142], 300.0, 101325.0, data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */, data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[52] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 172
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,2] = MatStm1.compMolFlo[2,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[58] /* MatStm1.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[118]);
  TRACE_POP
}
/*
equation index: 173
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,2] = MatStm1.compMolFlo[3,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->localData[0]->realVars[25] /* MatStm1.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[61] /* MatStm1.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[118]);
  TRACE_POP
}
/*
equation index: 174
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac = (-MatStm1.liqPhasMolFrac) - -1.0
*/
void Flowsheet_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->localData[0]->realVars[108] /* MatStm1.vapPhasMolFrac variable */ = (-data->localData[0]->realVars[82] /* MatStm1.liqPhasMolFrac variable */) - (-1.0);
  TRACE_POP
}
/*
equation index: 175
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, 300.0, 101325.0, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[171], (modelica_real)data->simulationInfo->realParameter[172], (modelica_real)data->simulationInfo->realParameter[173], (modelica_real)data->simulationInfo->realParameter[174], (modelica_real)data->simulationInfo->realParameter[175], (modelica_real)data->simulationInfo->realParameter[176]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[21], (modelica_real)data->simulationInfo->realParameter[22], (modelica_real)data->simulationInfo->realParameter[23], (modelica_real)data->simulationInfo->realParameter[24], (modelica_real)data->simulationInfo->realParameter[25], (modelica_real)data->simulationInfo->realParameter[26]);
  data->localData[0]->realVars[48] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[3], tmp2, tmp3, data->simulationInfo->realParameter[138], data->simulationInfo->realParameter[141], 300.0, 101325.0, data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[51] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 176
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEnth[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEnth[3,2] + MatStm1.compMolFrac[3,3] * MatStm1.compMolEnth[3,3]
*/
void Flowsheet_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->localData[0]->realVars[85] /* MatStm1.phasMolEnth[3] variable */ = (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[42] /* MatStm1.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[43] /* MatStm1.compMolEnth[3,2] variable */) + (data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[44] /* MatStm1.compMolEnth[3,3] variable */);
  TRACE_POP
}
/*
equation index: 177
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolSpHeat[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolSpHeat[3,2] + MatStm1.compMolFrac[3,3] * MatStm1.compMolSpHeat[3,3]
*/
void Flowsheet_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->localData[0]->realVars[91] /* MatStm1.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[78] /* MatStm1.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[79] /* MatStm1.compMolSpHeat[3,2] variable */) + (data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[80] /* MatStm1.compMolSpHeat[3,3] variable */);
  TRACE_POP
}
/*
equation index: 178
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,3] = MatStm1.compMolFlo[3,3] * MatStm1.comp[3].MW
*/
void Flowsheet_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,3] variable */ = (data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,3] variable */) * (data->simulationInfo->realParameter[119]);
  TRACE_POP
}
/*
equation index: 179
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,3] = MatStm1.compMolFlo[2,3] * MatStm1.comp[3].MW
*/
void Flowsheet_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->localData[0]->realVars[23] /* MatStm1.compMasFlo[2,3] variable */ = (data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,3] variable */) * (data->simulationInfo->realParameter[119]);
  TRACE_POP
}
/*
equation index: 180
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEnth[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEnth[2,2] + MatStm1.compMolFrac[2,3] * MatStm1.compMolEnth[2,3]
*/
void Flowsheet_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->localData[0]->realVars[84] /* MatStm1.phasMolEnth[2] variable */ = (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[39] /* MatStm1.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[40] /* MatStm1.compMolEnth[2,2] variable */) + (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[41] /* MatStm1.compMolEnth[2,3] variable */);
  TRACE_POP
}
/*
equation index: 181
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolEnth[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolEnth[3]
*/
void Flowsheet_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->localData[0]->realVars[83] /* MatStm1.phasMolEnth[1] variable */ = (data->localData[0]->realVars[82] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[84] /* MatStm1.phasMolEnth[2] variable */) + (data->localData[0]->realVars[108] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[85] /* MatStm1.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 182
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,3] = MatStm1.compMolFrac[1,3] * MatStm1.phasMolEnth[1]
*/
void Flowsheet_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->localData[0]->realVars[38] /* MatStm1.compMolEnth[1,3] variable */ = (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[83] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 183
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolEnth[1]
*/
void Flowsheet_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->localData[0]->realVars[37] /* MatStm1.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[64] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[83] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 184
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEnth[1]
*/
void Flowsheet_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  data->localData[0]->realVars[36] /* MatStm1.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[63] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[83] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 185
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolSpHeat[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolSpHeat[2,2] + MatStm1.compMolFrac[2,3] * MatStm1.compMolSpHeat[2,3]
*/
void Flowsheet_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  data->localData[0]->realVars[90] /* MatStm1.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[75] /* MatStm1.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[76] /* MatStm1.compMolSpHeat[2,2] variable */) + (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[77] /* MatStm1.compMolSpHeat[2,3] variable */);
  TRACE_POP
}
/*
equation index: 186
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolSpHeat[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  data->localData[0]->realVars[89] /* MatStm1.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[82] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[90] /* MatStm1.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[108] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[91] /* MatStm1.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 187
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,3] = MatStm1.compMolFrac[1,3] * MatStm1.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  data->localData[0]->realVars[74] /* MatStm1.compMolSpHeat[1,3] variable */ = (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[89] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 188
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  data->localData[0]->realVars[73] /* MatStm1.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[64] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[89] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 189
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->localData[0]->realVars[72] /* MatStm1.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[63] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[89] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 190
type: ALGORITHM

  (MatStm1.compMolEntr[2,3], MatStm1.compMolEntr[3,3]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[3].AS, {MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, {MatStm1.comp[3].HOV[1], MatStm1.comp[3].HOV[2], MatStm1.comp[3].HOV[3], MatStm1.comp[3].HOV[4], MatStm1.comp[3].HOV[5], MatStm1.comp[3].HOV[6]}, MatStm1.comp[3].Tb, MatStm1.comp[3].Tc, 300.0, 101325.0, MatStm1.compMolFrac[2,3], MatStm1.compMolFrac[3,3]);
*/
void Flowsheet_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  real_array tmp4;
  real_array tmp5;
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[183], (modelica_real)data->simulationInfo->realParameter[184], (modelica_real)data->simulationInfo->realParameter[185], (modelica_real)data->simulationInfo->realParameter[186], (modelica_real)data->simulationInfo->realParameter[187], (modelica_real)data->simulationInfo->realParameter[188]);
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[33], (modelica_real)data->simulationInfo->realParameter[34], (modelica_real)data->simulationInfo->realParameter[35], (modelica_real)data->simulationInfo->realParameter[36], (modelica_real)data->simulationInfo->realParameter[37], (modelica_real)data->simulationInfo->realParameter[38]);
  data->localData[0]->realVars[50] /* MatStm1.compMolEntr[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[5], tmp4, tmp5, data->simulationInfo->realParameter[140], data->simulationInfo->realParameter[143], 300.0, 101325.0, data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */, data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */ ,&data->localData[0]->realVars[53] /* MatStm1.compMolEntr[3,3] variable */);
  TRACE_POP
}
/*
equation index: 191
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEntr[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEntr[3,2] + MatStm1.compMolFrac[3,3] * MatStm1.compMolEntr[3,3]
*/
void Flowsheet_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->localData[0]->realVars[88] /* MatStm1.phasMolEntr[3] variable */ = (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[51] /* MatStm1.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[52] /* MatStm1.compMolEntr[3,2] variable */) + (data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[53] /* MatStm1.compMolEntr[3,3] variable */);
  TRACE_POP
}
/*
equation index: 192
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEntr[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEntr[2,2] + MatStm1.compMolFrac[2,3] * MatStm1.compMolEntr[2,3]
*/
void Flowsheet_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->localData[0]->realVars[87] /* MatStm1.phasMolEntr[2] variable */ = (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[48] /* MatStm1.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[49] /* MatStm1.compMolEntr[2,2] variable */) + (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[50] /* MatStm1.compMolEntr[2,3] variable */);
  TRACE_POP
}
/*
equation index: 193
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolEntr[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolEntr[3]
*/
void Flowsheet_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->localData[0]->realVars[86] /* MatStm1.phasMolEntr[1] variable */ = (data->localData[0]->realVars[82] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[87] /* MatStm1.phasMolEntr[2] variable */) + (data->localData[0]->realVars[108] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[88] /* MatStm1.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 194
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,3] = MatStm1.compMolFrac[1,3] * MatStm1.phasMolEntr[1]
*/
void Flowsheet_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->localData[0]->realVars[47] /* MatStm1.compMolEntr[1,3] variable */ = (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[86] /* MatStm1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 195
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolEntr[1]
*/
void Flowsheet_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->localData[0]->realVars[46] /* MatStm1.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[64] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[86] /* MatStm1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 196
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEntr[1]
*/
void Flowsheet_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->localData[0]->realVars[45] /* MatStm1.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[63] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[86] /* MatStm1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 197
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:3 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  real_array tmp6;
  index_spec_t tmp7;
  real_array tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  data->localData[0]->realVars[13] /* MatStm1.MW[3] variable */ = data->modelData->realVarsData[13].attribute /* MatStm1.MW[3] variable */.start;

  data->localData[0]->realVars[12] /* MatStm1.MW[2] variable */ = data->modelData->realVarsData[12].attribute /* MatStm1.MW[2] variable */.start;

  data->localData[0]->realVars[11] /* MatStm1.MW[1] variable */ = data->modelData->realVarsData[11].attribute /* MatStm1.MW[1] variable */.start;

  tmp9 = ((modelica_integer) 1); tmp10 = 1; tmp11 = ((modelica_integer) 3);
  if(!(((tmp10 > 0) && (tmp9 > tmp11)) || ((tmp10 < 0) && (tmp9 < tmp11))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp9, tmp11); $Pi += tmp10)
    {
      array_alloc_scalar_real_array(&tmp6, 3, (modelica_real)data->localData[0]->realVars[11] /* MatStm1.MW[1] variable */ + ((&data->localData[0]->realVars[63] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[117])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[12] /* MatStm1.MW[2] variable */ + ((&data->localData[0]->realVars[63] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[117])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[13] /* MatStm1.MW[3] variable */ + ((&data->localData[0]->realVars[63] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 3, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[117])[calc_base_index_dims_subs(1, 3, (modelica_integer)$Pi)]));
      create_index_spec(&tmp7, 1, (1), (int*)0, 'W');
      real_array_create(&tmp8, (modelica_real*)&data->localData[0]->realVars[11] /* MatStm1.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp6, &tmp8, &tmp7);
    }
  }
  TRACE_POP
}
/*
equation index: 198
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[3] = MatStm1.totMolFlo[3] * MatStm1.MW[3]
*/
void Flowsheet_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->localData[0]->realVars[103] /* MatStm1.totMasFlo[3] variable */ = (data->localData[0]->realVars[106] /* MatStm1.totMolFlo[3] variable */) * (data->localData[0]->realVars[13] /* MatStm1.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 199
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[1] = 100.0 * MatStm1.MW[1]
*/
void Flowsheet_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */ = (100.0) * (data->localData[0]->realVars[11] /* MatStm1.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 200
type: SIMPLE_ASSIGN
MatStm1._vapPhasMasFrac = MatStm1.totMasFlo[3] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  data->localData[0]->realVars[107] /* MatStm1.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[103] /* MatStm1.totMasFlo[3] variable */,data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 201
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[2] = MatStm1.totMolFlo[2] * MatStm1.MW[2]
*/
void Flowsheet_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  data->localData[0]->realVars[102] /* MatStm1.totMasFlo[2] variable */ = (data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */) * (data->localData[0]->realVars[12] /* MatStm1.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 202
type: SIMPLE_ASSIGN
MatStm1._liqPhasMasFrac = MatStm1.totMasFlo[2] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->localData[0]->realVars[81] /* MatStm1.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[102] /* MatStm1.totMasFlo[2] variable */,data->localData[0]->realVars[101] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 203
type: LINEAR

<var>MatStm1._compMasFrac[3,3]</var>
<var>MatStm1._compMasFrac[2,3]</var>
<var>MatStm1._compMasFrac[2,2]</var>
<var>MatStm1._compMasFrac[1,2]</var>
<var>MatStm1._compMasFrac[1,1]</var>
<var>MatStm1._compMasFrac[1,3]</var>
<var>MatStm1._compMasFrac[3,2]</var>
<var>MatStm1._compMasFrac[2,1]</var>
<var>MatStm1._compMasFrac[3,1]</var>
<row>
  <cell>if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else MatStm1.compMasFlo[3,1]</cell>
  <cell>if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else MatStm1.compMasFlo[1,1]</cell>
  <cell>if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else MatStm1.compMasFlo[2,1]</cell>
  <cell>if 300.0 <= MatStm1.Tbubl then MatStm1.compMasFlo[1,3] else if 300.0 >= MatStm1.Tdew then MatStm1.compMasFlo[1,3] else MatStm1.compMasFlo[3,2]</cell>
  <cell>if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else MatStm1.compMasFlo[1,3]</cell>
  <cell>if 300.0 <= MatStm1.Tbubl then MatStm1.compMasFlo[1,1] else if 300.0 >= MatStm1.Tdew then MatStm1.compMasFlo[1,1] else MatStm1.compMasFlo[1,2]</cell>
  <cell>if 300.0 <= MatStm1.Tbubl then MatStm1.compMasFlo[1,2] else if 300.0 >= MatStm1.Tdew then MatStm1.compMasFlo[1,2] else MatStm1.compMasFlo[2,2]</cell>
  <cell>if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else MatStm1.compMasFlo[2,3]</cell>
  <cell>if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else MatStm1.compMasFlo[3,3]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 1.0 else 0.0)</residual>
  </cell><cell row="0" col="1">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="8">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else -MatStm1.totMasFlo[3])</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="1" col="7">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="8">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 1.0 else 0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="6">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 1.0 else 0.0)</residual>
  </cell><cell row="2" col="7">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else -MatStm1.totMasFlo[2])</residual>
  </cell><cell row="3" col="5">
    <residual>-(if 300.0 <= MatStm1.Tbubl then -MatStm1.totMasFlo[1] else if 300.0 >= MatStm1.Tdew then -MatStm1.totMasFlo[1] else -0.0)</residual>
  </cell><cell row="3" col="6">
    <residual>-(if 300.0 <= MatStm1.Tbubl then -0.0 else if 300.0 >= MatStm1.Tdew then -0.0 else -MatStm1.totMasFlo[3])</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 300.0 <= MatStm1.Tbubl then -1.0 else if 300.0 >= MatStm1.Tdew then -1.0 else -0.0)</residual>
  </cell><cell row="4" col="5">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="4" col="7">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 1.0 else 0.0)</residual>
  </cell><cell row="4" col="8">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 1.0 else -0.0)</residual>
  </cell><cell row="5" col="3">
    <residual>-(if 300.0 <= MatStm1.Tbubl then -0.0 else if 300.0 >= MatStm1.Tdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="5" col="4">
    <residual>-(if 300.0 <= MatStm1.Tbubl then -MatStm1.totMasFlo[1] else if 300.0 >= MatStm1.Tdew then -MatStm1.totMasFlo[1] else -0.0)</residual>
  </cell><cell row="6" col="2">
    <residual>-(if 300.0 <= MatStm1.Tbubl then -0.0 else if 300.0 >= MatStm1.Tdew then -0.0 else -MatStm1.totMasFlo[2])</residual>
  </cell><cell row="6" col="3">
    <residual>-(if 300.0 <= MatStm1.Tbubl then -MatStm1.totMasFlo[1] else if 300.0 >= MatStm1.Tdew then -MatStm1.totMasFlo[1] else -0.0)</residual>
  </cell><cell row="7" col="1">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else -MatStm1.totMasFlo[2])</residual>
  </cell><cell row="7" col="2">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 1.0 else 0.0)</residual>
  </cell><cell row="7" col="3">
    <residual>-(if 300.0 <= MatStm1.Tbubl then -1.0 else if 300.0 >= MatStm1.Tdew then -1.0 else -0.0)</residual>
  </cell><cell row="7" col="6">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 1.0 else -0.0)</residual>
  </cell><cell row="8" col="0">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 1.0 else -MatStm1.totMasFlo[3])</residual>
  </cell><cell row="8" col="1">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 1.0 else 0.0)</residual>
  </cell><cell row="8" col="5">
    <residual>-(if 300.0 <= MatStm1.Tbubl then -1.0 else if 300.0 >= MatStm1.Tdew then -1.0 else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  /* Linear equation system */
  int retValue;
  double aux_x[9] = { data->localData[1]->realVars[35] /* MatStm1.compMasFrac[3,3] variable */,data->localData[1]->realVars[32] /* MatStm1.compMasFrac[2,3] variable */,data->localData[1]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */,data->localData[1]->realVars[28] /* MatStm1.compMasFrac[1,2] variable */,data->localData[1]->realVars[27] /* MatStm1.compMasFrac[1,1] variable */,data->localData[1]->realVars[29] /* MatStm1.compMasFrac[1,3] variable */,data->localData[1]->realVars[34] /* MatStm1.compMasFrac[3,2] variable */,data->localData[1]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */,data->localData[1]->realVars[33] /* MatStm1.compMasFrac[3,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 203 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,203};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 203 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[35] /* MatStm1.compMasFrac[3,3] variable */ = aux_x[0];
  data->localData[0]->realVars[32] /* MatStm1.compMasFrac[2,3] variable */ = aux_x[1];
  data->localData[0]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */ = aux_x[2];
  data->localData[0]->realVars[28] /* MatStm1.compMasFrac[1,2] variable */ = aux_x[3];
  data->localData[0]->realVars[27] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[4];
  data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,3] variable */ = aux_x[5];
  data->localData[0]->realVars[34] /* MatStm1.compMasFrac[3,2] variable */ = aux_x[6];
  data->localData[0]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[7];
  data->localData[0]->realVars[33] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[8];
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
  Flowsheet_eqFunction_107(data, threadData);

  Flowsheet_eqFunction_108(data, threadData);

  Flowsheet_eqFunction_109(data, threadData);

  Flowsheet_eqFunction_123(data, threadData);

  Flowsheet_eqFunction_137(data, threadData);

  Flowsheet_eqFunction_168(data, threadData);

  Flowsheet_eqFunction_169(data, threadData);

  Flowsheet_eqFunction_170(data, threadData);

  Flowsheet_eqFunction_171(data, threadData);

  Flowsheet_eqFunction_172(data, threadData);

  Flowsheet_eqFunction_173(data, threadData);

  Flowsheet_eqFunction_174(data, threadData);

  Flowsheet_eqFunction_175(data, threadData);

  Flowsheet_eqFunction_176(data, threadData);

  Flowsheet_eqFunction_177(data, threadData);

  Flowsheet_eqFunction_178(data, threadData);

  Flowsheet_eqFunction_179(data, threadData);

  Flowsheet_eqFunction_180(data, threadData);

  Flowsheet_eqFunction_181(data, threadData);

  Flowsheet_eqFunction_182(data, threadData);

  Flowsheet_eqFunction_183(data, threadData);

  Flowsheet_eqFunction_184(data, threadData);

  Flowsheet_eqFunction_185(data, threadData);

  Flowsheet_eqFunction_186(data, threadData);

  Flowsheet_eqFunction_187(data, threadData);

  Flowsheet_eqFunction_188(data, threadData);

  Flowsheet_eqFunction_189(data, threadData);

  Flowsheet_eqFunction_190(data, threadData);

  Flowsheet_eqFunction_191(data, threadData);

  Flowsheet_eqFunction_192(data, threadData);

  Flowsheet_eqFunction_193(data, threadData);

  Flowsheet_eqFunction_194(data, threadData);

  Flowsheet_eqFunction_195(data, threadData);

  Flowsheet_eqFunction_196(data, threadData);

  Flowsheet_eqFunction_197(data, threadData);

  Flowsheet_eqFunction_198(data, threadData);

  Flowsheet_eqFunction_199(data, threadData);

  Flowsheet_eqFunction_200(data, threadData);

  Flowsheet_eqFunction_201(data, threadData);

  Flowsheet_eqFunction_202(data, threadData);

  Flowsheet_eqFunction_203(data, threadData);
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
  data->modelData->modelGUID = "{e8058990-0053-48eb-a489-309c46f4c814}";
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
  data->modelData->nVariablesReal = 109;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 684;
  data->modelData->nParametersInteger = 12;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 9;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 18;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 4;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 4;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.fileName = "Flowsheet_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 7;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 518;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 2;
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


