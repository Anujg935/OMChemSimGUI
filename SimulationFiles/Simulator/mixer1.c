/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "mixer1_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation mixer1_performSimulation
#define prefixedName_updateContinuousSystem mixer1_updateContinuousSystem
#include <simulation/solver/perform_simulation.c>

#define prefixedName_performQSSSimulation mixer1_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int mixer1_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int mixer1_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int mixer1_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int mixer1_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int mixer1_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 277
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[1,2] = 200.0 * MatStm2.compMolFrac[1,2]
*/
void mixer1_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->localData[0]->realVars[41] /* MatStm2.compMolFlo[1,2] variable */ = (200.0) * (data->localData[0]->realVars[47] /* MatStm2.compMolFrac[1,2] variable */);
  TRACE_POP
}
/*
equation index: 278
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[1,2] = MatStm2.compMolFlo[1,2] * MatStm2.comp[2].MW
*/
void mixer1_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->localData[0]->realVars[17] /* MatStm2.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[41] /* MatStm2.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[164]);
  TRACE_POP
}
/*
equation index: 279
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[1,1] = 200.0 * MatStm2.compMolFrac[1,1]
*/
void mixer1_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->localData[0]->realVars[40] /* MatStm2.compMolFlo[1,1] variable */ = (200.0) * (data->localData[0]->realVars[46] /* MatStm2.compMolFrac[1,1] variable */);
  TRACE_POP
}
/*
equation index: 280
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[1,1] = MatStm2.compMolFlo[1,1] * MatStm2.comp[1].MW
*/
void mixer1_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->localData[0]->realVars[16] /* MatStm2.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[40] /* MatStm2.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[163]);
  TRACE_POP
}
void mixer1_eqFunction_281(DATA*, threadData_t*);
void mixer1_eqFunction_282(DATA*, threadData_t*);
void mixer1_eqFunction_283(DATA*, threadData_t*);
void mixer1_eqFunction_284(DATA*, threadData_t*);
void mixer1_eqFunction_285(DATA*, threadData_t*);
void mixer1_eqFunction_286(DATA*, threadData_t*);
void mixer1_eqFunction_287(DATA*, threadData_t*);
void mixer1_eqFunction_292(DATA*, threadData_t*);
void mixer1_eqFunction_291(DATA*, threadData_t*);
void mixer1_eqFunction_290(DATA*, threadData_t*);
void mixer1_eqFunction_289(DATA*, threadData_t*);
void mixer1_eqFunction_288(DATA*, threadData_t*);
/*
equation index: 305
indexNonlinear: 3
type: NONLINEAR

vars: {MatStm3._totMolFlo[3], MatStm3._compMolFrac[2,2], MatStm3._compMolFrac[3,2], MatStm3._compMolFrac[3,1], MatStm3._compMolFrac[2,1]}
eqns: {281, 282, 283, 284, 285, 286, 287, 292, 291, 290, 289, 288}
*/
void mixer1_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 305 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[182] /* MatStm3.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[1] = data->localData[0]->realVars[140] /* MatStm3.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[2] = data->localData[0]->realVars[142] /* MatStm3.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[3] = data->localData[0]->realVars[141] /* MatStm3.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[4] = data->localData[0]->realVars[139] /* MatStm3.compMolFrac[2,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,305};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 305 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[182] /* MatStm3.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  data->localData[0]->realVars[140] /* MatStm3.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[1];
  data->localData[0]->realVars[142] /* MatStm3.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[2];
  data->localData[0]->realVars[141] /* MatStm3.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[3];
  data->localData[0]->realVars[139] /* MatStm3.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[4];
  TRACE_POP
}
/*
equation index: 306
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[2,2] = MatStm3.compMolFlo[2,2] * MatStm3.comp[2].MW
*/
void mixer1_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->localData[0]->realVars[110] /* MatStm3.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[134] /* MatStm3.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[322]);
  TRACE_POP
}
/*
equation index: 307
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[3,2] = MatStm3.compMolFlo[3,2] * MatStm3.comp[2].MW
*/
void mixer1_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->localData[0]->realVars[112] /* MatStm3.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[136] /* MatStm3.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[322]);
  TRACE_POP
}
/*
equation index: 308
type: ALGORITHM

  (MatStm3.compMolEntr[2,1], MatStm3.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[1].AS, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tb, MatStm3.comp[1].Tc, 321.0, 101312.0, MatStm3.compMolFrac[2,1], MatStm3.compMolFrac[3,1]);
*/
void mixer1_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358], (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[257], (modelica_real)data->simulationInfo->realParameter[258], (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262]);
  data->localData[0]->realVars[127] /* MatStm3.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[239], tmp0, tmp1, data->simulationInfo->realParameter[335], data->simulationInfo->realParameter[337], 321.0, 101312.0, data->localData[0]->realVars[139] /* MatStm3.compMolFrac[2,1] variable */, data->localData[0]->realVars[141] /* MatStm3.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[129] /* MatStm3.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 309
type: SIMPLE_ASSIGN
MatStm3._phasMolSpHeat[3] = MatStm3.compMolFrac[3,1] * MatStm3.compMolSpHeat[3,1] + MatStm3.compMolFrac[3,2] * MatStm3.compMolSpHeat[3,2]
*/
void mixer1_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->localData[0]->realVars[167] /* MatStm3.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[141] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[147] /* MatStm3.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[142] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[148] /* MatStm3.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 310
type: SIMPLE_ASSIGN
MatStm3._phasMolEnth[3] = MatStm3.compMolFrac[3,1] * MatStm3.compMolEnth[3,1] + MatStm3.compMolFrac[3,2] * MatStm3.compMolEnth[3,2]
*/
void mixer1_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->localData[0]->realVars[161] /* MatStm3.phasMolEnth[3] variable */ = (data->localData[0]->realVars[141] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[123] /* MatStm3.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[142] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[124] /* MatStm3.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 311
type: SIMPLE_ASSIGN
MatStm3._phasMolSpHeat[2] = MatStm3.compMolFrac[2,1] * MatStm3.compMolSpHeat[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.compMolSpHeat[2,2]
*/
void mixer1_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  data->localData[0]->realVars[166] /* MatStm3.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[139] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[145] /* MatStm3.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[140] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[146] /* MatStm3.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 312
type: SIMPLE_ASSIGN
MatStm3._phasMolEnth[2] = MatStm3.compMolFrac[2,1] * MatStm3.compMolEnth[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.compMolEnth[2,2]
*/
void mixer1_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->localData[0]->realVars[160] /* MatStm3.phasMolEnth[2] variable */ = (data->localData[0]->realVars[139] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[121] /* MatStm3.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[140] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[122] /* MatStm3.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 313
type: ALGORITHM

  (MatStm3.compMolEntr[2,2], MatStm3.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[2].AS, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tb, MatStm3.comp[2].Tc, 321.0, 101312.0, MatStm3.compMolFrac[2,2], MatStm3.compMolFrac[3,2]);
*/
void mixer1_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364], (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264], (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268]);
  data->localData[0]->realVars[128] /* MatStm3.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[240], tmp2, tmp3, data->simulationInfo->realParameter[336], data->simulationInfo->realParameter[338], 321.0, 101312.0, data->localData[0]->realVars[140] /* MatStm3.compMolFrac[2,2] variable */, data->localData[0]->realVars[142] /* MatStm3.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[130] /* MatStm3.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 314
type: SIMPLE_ASSIGN
MatStm3._phasMolEntr[3] = MatStm3.compMolFrac[3,1] * MatStm3.compMolEntr[3,1] + MatStm3.compMolFrac[3,2] * MatStm3.compMolEntr[3,2]
*/
void mixer1_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->localData[0]->realVars[164] /* MatStm3.phasMolEntr[3] variable */ = (data->localData[0]->realVars[141] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[129] /* MatStm3.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[142] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[130] /* MatStm3.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 315
type: ALGORITHM

  MatStm3.MW[3] := $START.MatStm3.MW[3];
  MatStm3.MW[2] := $START.MatStm3.MW[2];
  MatStm3.MW[1] := $START.MatStm3.MW[1];
  for i in 1:2 loop
    MatStm3.MW[:] := {MatStm3.MW[1] + MatStm3.compMolFrac[1,i] * MatStm3.comp[i].MW, MatStm3.MW[2] + MatStm3.compMolFrac[2,i] * MatStm3.comp[i].MW, MatStm3.MW[3] + MatStm3.compMolFrac[3,i] * MatStm3.comp[i].MW};
  end for;
*/
void mixer1_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[100] /* MatStm3.MW[3] variable */ = data->modelData->realVarsData[100].attribute /* MatStm3.MW[3] variable */.start;

  data->localData[0]->realVars[99] /* MatStm3.MW[2] variable */ = data->modelData->realVarsData[99].attribute /* MatStm3.MW[2] variable */.start;

  data->localData[0]->realVars[98] /* MatStm3.MW[1] variable */ = data->modelData->realVarsData[98].attribute /* MatStm3.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[98] /* MatStm3.MW[1] variable */ + ((&data->localData[0]->realVars[137] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[99] /* MatStm3.MW[2] variable */ + ((&data->localData[0]->realVars[137] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[100] /* MatStm3.MW[3] variable */ + ((&data->localData[0]->realVars[137] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[98] /* MatStm3.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
/*
equation index: 316
type: SIMPLE_ASSIGN
MatStm3._totMasFlo[1] = 100.0 * MatStm3.MW[1]
*/
void mixer1_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->localData[0]->realVars[177] /* MatStm3.totMasFlo[1] variable */ = (100.0) * (data->localData[0]->realVars[98] /* MatStm3.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 317
type: SIMPLE_ASSIGN
MatStm3._compMasFrac[1,2] = MatStm3.compMasFlo[1,2] / MatStm3.totMasFlo[1]
*/
void mixer1_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  data->localData[0]->realVars[114] /* MatStm3.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[108] /* MatStm3.compMasFlo[1,2] variable */,data->localData[0]->realVars[177] /* MatStm3.totMasFlo[1] variable */,"MatStm3.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 318
type: SIMPLE_ASSIGN
MatStm3._phasMolEntr[2] = MatStm3.compMolFrac[2,1] * MatStm3.compMolEntr[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.compMolEntr[2,2]
*/
void mixer1_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  data->localData[0]->realVars[163] /* MatStm3.phasMolEntr[2] variable */ = (data->localData[0]->realVars[139] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[127] /* MatStm3.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[140] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[128] /* MatStm3.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 319
type: SIMPLE_ASSIGN
MatStm3._totMasFlo[2] = MatStm3.totMolFlo[2] * MatStm3.MW[2]
*/
void mixer1_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  data->localData[0]->realVars[178] /* MatStm3.totMasFlo[2] variable */ = (data->localData[0]->realVars[181] /* MatStm3.totMolFlo[2] variable */) * (data->localData[0]->realVars[99] /* MatStm3.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 320
type: SIMPLE_ASSIGN
MatStm3._liqPhasMasFrac = MatStm3.totMasFlo[2] / MatStm3.totMasFlo[1]
*/
void mixer1_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->localData[0]->realVars[155] /* MatStm3.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[178] /* MatStm3.totMasFlo[2] variable */,data->localData[0]->realVars[177] /* MatStm3.totMasFlo[1] variable */,"MatStm3.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 321
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[2,1] = MatStm3.compMolFlo[2,1] * MatStm3.comp[1].MW
*/
void mixer1_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->localData[0]->realVars[109] /* MatStm3.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[133] /* MatStm3.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[321]);
  TRACE_POP
}
/*
equation index: 322
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[3,1] = MatStm3.compMolFlo[3,1] * MatStm3.comp[1].MW
*/
void mixer1_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->localData[0]->realVars[111] /* MatStm3.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[135] /* MatStm3.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[321]);
  TRACE_POP
}
/*
equation index: 323
type: SIMPLE_ASSIGN
MatStm3._totMasFlo[3] = MatStm3.totMolFlo[3] * MatStm3.MW[3]
*/
void mixer1_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->localData[0]->realVars[179] /* MatStm3.totMasFlo[3] variable */ = (data->localData[0]->realVars[182] /* MatStm3.totMolFlo[3] variable */) * (data->localData[0]->realVars[100] /* MatStm3.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 324
type: SIMPLE_ASSIGN
MatStm3._vapPhasMasFrac = MatStm3.totMasFlo[3] / MatStm3.totMasFlo[1]
*/
void mixer1_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->localData[0]->realVars[183] /* MatStm3.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[179] /* MatStm3.totMasFlo[3] variable */,data->localData[0]->realVars[177] /* MatStm3.totMasFlo[1] variable */,"MatStm3.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 325
type: LINEAR

<var>MatStm3._compMasFrac[1,1]</var>
<var>MatStm3._compMasFrac[3,1]</var>
<var>MatStm3._compMasFrac[2,2]</var>
<var>MatStm3._compMasFrac[2,1]</var>
<var>MatStm3._compMasFrac[3,2]</var>
<row>
  <cell>if 101312.0 >= MatStm3.Pbubl then -MatStm3.compMasFrac[1,2] else if 101312.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,2] else -MatStm3.compMasFrac[1,2]</cell>
  <cell>if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then MatStm3.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then MatStm3.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101312.0 >= MatStm3.Pbubl then MatStm3.compMasFlo[1,1] else if 101312.0 >= MatStm3.Pdew then MatStm3.compMasFlo[3,1] else MatStm3.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="2">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then -1.0 else if 101312.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then 0.0 else if 101312.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101312.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101312.0 >= MatStm3.Pbubl then -0.0 else if 101312.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void mixer1_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[113] /* MatStm3.compMasFrac[1,1] variable */,data->localData[1]->realVars[117] /* MatStm3.compMasFrac[3,1] variable */,data->localData[1]->realVars[116] /* MatStm3.compMasFrac[2,2] variable */,data->localData[1]->realVars[115] /* MatStm3.compMasFrac[2,1] variable */,data->localData[1]->realVars[118] /* MatStm3.compMasFrac[3,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 325 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 3, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,325};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 325 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[113] /* MatStm3.compMasFrac[1,1] variable */ = aux_x[0];
  data->localData[0]->realVars[117] /* MatStm3.compMasFrac[3,1] variable */ = aux_x[1];
  data->localData[0]->realVars[116] /* MatStm3.compMasFrac[2,2] variable */ = aux_x[2];
  data->localData[0]->realVars[115] /* MatStm3.compMasFrac[2,1] variable */ = aux_x[3];
  data->localData[0]->realVars[118] /* MatStm3.compMasFrac[3,2] variable */ = aux_x[4];
  TRACE_POP
}
/*
equation index: 326
type: SIMPLE_ASSIGN
MatStm3._phasMolSpHeat[1] = MatStm3.liqPhasMolFrac * MatStm3.phasMolSpHeat[2] + Mixer1.inVapPhasMolFrac[1] * MatStm3.phasMolSpHeat[3]
*/
void mixer1_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->localData[0]->realVars[165] /* MatStm3.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[156] /* MatStm3.liqPhasMolFrac variable */) * (data->localData[0]->realVars[166] /* MatStm3.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[276] /* Mixer1.inVapPhasMolFrac[1] variable */) * (data->localData[0]->realVars[167] /* MatStm3.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 327
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[1,1] = MatStm3.compMolFrac[1,1] * MatStm3.phasMolSpHeat[1]
*/
void mixer1_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->localData[0]->realVars[143] /* MatStm3.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[137] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[165] /* MatStm3.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 328
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[1,2] = MatStm3.compMolFrac[1,2] * MatStm3.phasMolSpHeat[1]
*/
void mixer1_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->localData[0]->realVars[144] /* MatStm3.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[138] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[165] /* MatStm3.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 329
type: SIMPLE_ASSIGN
MatStm3._phasMolEnth[1] = MatStm3.liqPhasMolFrac * MatStm3.phasMolEnth[2] + Mixer1.inVapPhasMolFrac[1] * MatStm3.phasMolEnth[3]
*/
void mixer1_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->localData[0]->realVars[159] /* MatStm3.phasMolEnth[1] variable */ = (data->localData[0]->realVars[156] /* MatStm3.liqPhasMolFrac variable */) * (data->localData[0]->realVars[160] /* MatStm3.phasMolEnth[2] variable */) + (data->localData[0]->realVars[276] /* Mixer1.inVapPhasMolFrac[1] variable */) * (data->localData[0]->realVars[161] /* MatStm3.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 330
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[1,1] = MatStm3.compMolFrac[1,1] * MatStm3.phasMolEnth[1]
*/
void mixer1_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->localData[0]->realVars[119] /* MatStm3.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[137] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[159] /* MatStm3.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 331
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[1,2] = MatStm3.compMolFrac[1,2] * MatStm3.phasMolEnth[1]
*/
void mixer1_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->localData[0]->realVars[120] /* MatStm3.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[138] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[159] /* MatStm3.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 332
type: SIMPLE_ASSIGN
MatStm3._phasMolEntr[1] = MatStm3.liqPhasMolFrac * MatStm3.phasMolEntr[2] + Mixer1.inVapPhasMolFrac[1] * MatStm3.phasMolEntr[3]
*/
void mixer1_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->localData[0]->realVars[162] /* MatStm3.phasMolEntr[1] variable */ = (data->localData[0]->realVars[156] /* MatStm3.liqPhasMolFrac variable */) * (data->localData[0]->realVars[163] /* MatStm3.phasMolEntr[2] variable */) + (data->localData[0]->realVars[276] /* Mixer1.inVapPhasMolFrac[1] variable */) * (data->localData[0]->realVars[164] /* MatStm3.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 333
type: SIMPLE_ASSIGN
MatStm3._compMolEntr[1,1] = MatStm3.compMolFrac[1,1] * MatStm3.phasMolEntr[1]
*/
void mixer1_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->localData[0]->realVars[125] /* MatStm3.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[137] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[162] /* MatStm3.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 334
type: SIMPLE_ASSIGN
MatStm3._compMolEntr[1,2] = MatStm3.compMolFrac[1,2] * MatStm3.phasMolEntr[1]
*/
void mixer1_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->localData[0]->realVars[126] /* MatStm3.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[138] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[162] /* MatStm3.phasMolEntr[1] variable */);
  TRACE_POP
}
void mixer1_eqFunction_335(DATA*, threadData_t*);
void mixer1_eqFunction_336(DATA*, threadData_t*);
void mixer1_eqFunction_337(DATA*, threadData_t*);
void mixer1_eqFunction_338(DATA*, threadData_t*);
void mixer1_eqFunction_339(DATA*, threadData_t*);
void mixer1_eqFunction_340(DATA*, threadData_t*);
void mixer1_eqFunction_341(DATA*, threadData_t*);
void mixer1_eqFunction_346(DATA*, threadData_t*);
void mixer1_eqFunction_345(DATA*, threadData_t*);
void mixer1_eqFunction_344(DATA*, threadData_t*);
void mixer1_eqFunction_343(DATA*, threadData_t*);
void mixer1_eqFunction_342(DATA*, threadData_t*);
/*
equation index: 359
indexNonlinear: 4
type: NONLINEAR

vars: {MatStm4._totMolFlo[2], MatStm4._compMolFrac[2,1], MatStm4._compMolFrac[3,1], MatStm4._compMolFrac[3,2], MatStm4._compMolFrac[2,2]}
eqns: {335, 336, 337, 338, 339, 340, 341, 346, 345, 344, 343, 342}
*/
void mixer1_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 359 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[271] /* MatStm4.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[1] = data->localData[0]->realVars[229] /* MatStm4.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[2] = data->localData[0]->realVars[231] /* MatStm4.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[3] = data->localData[0]->realVars[232] /* MatStm4.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[4] = data->localData[0]->realVars[230] /* MatStm4.compMolFrac[2,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,359};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 359 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[271] /* MatStm4.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  data->localData[0]->realVars[229] /* MatStm4.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[1];
  data->localData[0]->realVars[231] /* MatStm4.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[2];
  data->localData[0]->realVars[232] /* MatStm4.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[3];
  data->localData[0]->realVars[230] /* MatStm4.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[4];
  TRACE_POP
}
/*
equation index: 360
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[3,2] = MatStm4.compMolFlo[3,2] * MatStm4.comp[2].MW
*/
void mixer1_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->localData[0]->realVars[202] /* MatStm4.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[226] /* MatStm4.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[480]);
  TRACE_POP
}
/*
equation index: 361
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[2,2] = MatStm4.compMolFlo[2,2] * MatStm4.comp[2].MW
*/
void mixer1_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  data->localData[0]->realVars[200] /* MatStm4.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[224] /* MatStm4.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[480]);
  TRACE_POP
}
/*
equation index: 362
type: ALGORITHM

  (MatStm4.compMolEntr[2,2], MatStm4.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm4.comp[2].AS, {MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, {MatStm4.comp[2].HOV[1], MatStm4.comp[2].HOV[2], MatStm4.comp[2].HOV[3], MatStm4.comp[2].HOV[4], MatStm4.comp[2].HOV[5], MatStm4.comp[2].HOV[6]}, MatStm4.comp[2].Tb, MatStm4.comp[2].Tc, 340.0, 101321.0, MatStm4.compMolFrac[2,2], MatStm4.compMolFrac[3,2]);
*/
void mixer1_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426]);
  data->localData[0]->realVars[218] /* MatStm4.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[398], tmp0, tmp1, data->simulationInfo->realParameter[494], data->simulationInfo->realParameter[496], 340.0, 101321.0, data->localData[0]->realVars[230] /* MatStm4.compMolFrac[2,2] variable */, data->localData[0]->realVars[232] /* MatStm4.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[220] /* MatStm4.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 363
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[2,1] = MatStm4.compMolFlo[2,1] * MatStm4.comp[1].MW
*/
void mixer1_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  data->localData[0]->realVars[199] /* MatStm4.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[223] /* MatStm4.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[479]);
  TRACE_POP
}
/*
equation index: 364
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[3,1] = MatStm4.compMolFlo[3,1] * MatStm4.comp[1].MW
*/
void mixer1_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  data->localData[0]->realVars[201] /* MatStm4.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[225] /* MatStm4.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[479]);
  TRACE_POP
}
/*
equation index: 365
type: SIMPLE_ASSIGN
MatStm4._phasMolSpHeat[3] = MatStm4.compMolFrac[3,1] * MatStm4.compMolSpHeat[3,1] + MatStm4.compMolFrac[3,2] * MatStm4.compMolSpHeat[3,2]
*/
void mixer1_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  data->localData[0]->realVars[257] /* MatStm4.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[231] /* MatStm4.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[237] /* MatStm4.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[232] /* MatStm4.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[238] /* MatStm4.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 366
type: SIMPLE_ASSIGN
MatStm4._phasMolEnth[3] = MatStm4.compMolFrac[3,1] * MatStm4.compMolEnth[3,1] + MatStm4.compMolFrac[3,2] * MatStm4.compMolEnth[3,2]
*/
void mixer1_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->localData[0]->realVars[251] /* MatStm4.phasMolEnth[3] variable */ = (data->localData[0]->realVars[231] /* MatStm4.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[213] /* MatStm4.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[232] /* MatStm4.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[214] /* MatStm4.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 367
type: SIMPLE_ASSIGN
MatStm4._phasMolSpHeat[2] = MatStm4.compMolFrac[2,1] * MatStm4.compMolSpHeat[2,1] + MatStm4.compMolFrac[2,2] * MatStm4.compMolSpHeat[2,2]
*/
void mixer1_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->localData[0]->realVars[256] /* MatStm4.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[229] /* MatStm4.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[235] /* MatStm4.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[230] /* MatStm4.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[236] /* MatStm4.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 368
type: SIMPLE_ASSIGN
MatStm4._phasMolEnth[2] = MatStm4.compMolFrac[2,1] * MatStm4.compMolEnth[2,1] + MatStm4.compMolFrac[2,2] * MatStm4.compMolEnth[2,2]
*/
void mixer1_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->localData[0]->realVars[250] /* MatStm4.phasMolEnth[2] variable */ = (data->localData[0]->realVars[229] /* MatStm4.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[211] /* MatStm4.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[230] /* MatStm4.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[212] /* MatStm4.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 369
type: ALGORITHM

  (MatStm4.compMolEntr[2,1], MatStm4.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm4.comp[1].AS, {MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, {MatStm4.comp[1].HOV[1], MatStm4.comp[1].HOV[2], MatStm4.comp[1].HOV[3], MatStm4.comp[1].HOV[4], MatStm4.comp[1].HOV[5], MatStm4.comp[1].HOV[6]}, MatStm4.comp[1].Tb, MatStm4.comp[1].Tc, 340.0, 101321.0, MatStm4.compMolFrac[2,1], MatStm4.compMolFrac[3,1]);
*/
void mixer1_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420]);
  data->localData[0]->realVars[217] /* MatStm4.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[397], tmp2, tmp3, data->simulationInfo->realParameter[493], data->simulationInfo->realParameter[495], 340.0, 101321.0, data->localData[0]->realVars[229] /* MatStm4.compMolFrac[2,1] variable */, data->localData[0]->realVars[231] /* MatStm4.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[219] /* MatStm4.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 370
type: SIMPLE_ASSIGN
MatStm4._phasMolEntr[3] = MatStm4.compMolFrac[3,1] * MatStm4.compMolEntr[3,1] + MatStm4.compMolFrac[3,2] * MatStm4.compMolEntr[3,2]
*/
void mixer1_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->localData[0]->realVars[254] /* MatStm4.phasMolEntr[3] variable */ = (data->localData[0]->realVars[231] /* MatStm4.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[219] /* MatStm4.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[232] /* MatStm4.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[220] /* MatStm4.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 371
type: ALGORITHM

  MatStm4.MW[3] := $START.MatStm4.MW[3];
  MatStm4.MW[2] := $START.MatStm4.MW[2];
  MatStm4.MW[1] := $START.MatStm4.MW[1];
  for i in 1:2 loop
    MatStm4.MW[:] := {MatStm4.MW[1] + MatStm4.compMolFrac[1,i] * MatStm4.comp[i].MW, MatStm4.MW[2] + MatStm4.compMolFrac[2,i] * MatStm4.comp[i].MW, MatStm4.MW[3] + MatStm4.compMolFrac[3,i] * MatStm4.comp[i].MW};
  end for;
*/
void mixer1_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[190] /* MatStm4.MW[3] variable */ = data->modelData->realVarsData[190].attribute /* MatStm4.MW[3] variable */.start;

  data->localData[0]->realVars[189] /* MatStm4.MW[2] variable */ = data->modelData->realVarsData[189].attribute /* MatStm4.MW[2] variable */.start;

  data->localData[0]->realVars[188] /* MatStm4.MW[1] variable */ = data->modelData->realVarsData[188].attribute /* MatStm4.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[188] /* MatStm4.MW[1] variable */ + ((&data->localData[0]->realVars[227] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[189] /* MatStm4.MW[2] variable */ + ((&data->localData[0]->realVars[227] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[190] /* MatStm4.MW[3] variable */ + ((&data->localData[0]->realVars[227] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[188] /* MatStm4.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
/*
equation index: 372
type: SIMPLE_ASSIGN
MatStm4._totMasFlo[3] = MatStm4.totMolFlo[3] * MatStm4.MW[3]
*/
void mixer1_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->localData[0]->realVars[269] /* MatStm4.totMasFlo[3] variable */ = (data->localData[0]->realVars[272] /* MatStm4.totMolFlo[3] variable */) * (data->localData[0]->realVars[190] /* MatStm4.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 373
type: SIMPLE_ASSIGN
MatStm4._totMasFlo[1] = 100.0 * MatStm4.MW[1]
*/
void mixer1_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->localData[0]->realVars[267] /* MatStm4.totMasFlo[1] variable */ = (100.0) * (data->localData[0]->realVars[188] /* MatStm4.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 374
type: SIMPLE_ASSIGN
MatStm4._compMasFrac[1,2] = MatStm4.compMasFlo[1,2] / MatStm4.totMasFlo[1]
*/
void mixer1_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->localData[0]->realVars[204] /* MatStm4.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[198] /* MatStm4.compMasFlo[1,2] variable */,data->localData[0]->realVars[267] /* MatStm4.totMasFlo[1] variable */,"MatStm4.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 375
type: SIMPLE_ASSIGN
MatStm4._vapPhasMasFrac = MatStm4.totMasFlo[3] / MatStm4.totMasFlo[1]
*/
void mixer1_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->localData[0]->realVars[273] /* MatStm4.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[269] /* MatStm4.totMasFlo[3] variable */,data->localData[0]->realVars[267] /* MatStm4.totMasFlo[1] variable */,"MatStm4.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 376
type: SIMPLE_ASSIGN
MatStm4._phasMolEntr[2] = MatStm4.compMolFrac[2,1] * MatStm4.compMolEntr[2,1] + MatStm4.compMolFrac[2,2] * MatStm4.compMolEntr[2,2]
*/
void mixer1_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->localData[0]->realVars[253] /* MatStm4.phasMolEntr[2] variable */ = (data->localData[0]->realVars[229] /* MatStm4.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[217] /* MatStm4.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[230] /* MatStm4.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[218] /* MatStm4.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 377
type: SIMPLE_ASSIGN
MatStm4._totMasFlo[2] = MatStm4.totMolFlo[2] * MatStm4.MW[2]
*/
void mixer1_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  data->localData[0]->realVars[268] /* MatStm4.totMasFlo[2] variable */ = (data->localData[0]->realVars[271] /* MatStm4.totMolFlo[2] variable */) * (data->localData[0]->realVars[189] /* MatStm4.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 378
type: LINEAR

<var>MatStm4._compMasFrac[1,1]</var>
<var>MatStm4._compMasFrac[3,1]</var>
<var>MatStm4._compMasFrac[2,1]</var>
<var>MatStm4._compMasFrac[3,2]</var>
<var>MatStm4._compMasFrac[2,2]</var>
<row>
  <cell>if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then MatStm4.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101321.0 >= MatStm4.Pbubl then -MatStm4.compMasFrac[1,2] else if 101321.0 >= MatStm4.Pdew then MatStm4.compMasFlo[3,2] else -MatStm4.compMasFrac[1,2]</cell>
  <cell>if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then MatStm4.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then MatStm4.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101321.0 >= MatStm4.Pbubl then MatStm4.compMasFlo[1,1] else if 101321.0 >= MatStm4.Pdew then MatStm4.compMasFlo[3,1] else MatStm4.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then -1.0 else if 101321.0 >= MatStm4.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="0" col="1">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="0" col="2">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="4">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then 0.0 else if 101321.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then -MatStm4.totMasFlo[1] else if 101321.0 >= MatStm4.Pdew then -0.0 else -MatStm4.totMasFlo[1])</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101321.0 >= MatStm4.Pbubl then -0.0 else if 101321.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[3] else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void mixer1_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[203] /* MatStm4.compMasFrac[1,1] variable */,data->localData[1]->realVars[207] /* MatStm4.compMasFrac[3,1] variable */,data->localData[1]->realVars[205] /* MatStm4.compMasFrac[2,1] variable */,data->localData[1]->realVars[208] /* MatStm4.compMasFrac[3,2] variable */,data->localData[1]->realVars[206] /* MatStm4.compMasFrac[2,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 378 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 4, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,378};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 378 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[203] /* MatStm4.compMasFrac[1,1] variable */ = aux_x[0];
  data->localData[0]->realVars[207] /* MatStm4.compMasFrac[3,1] variable */ = aux_x[1];
  data->localData[0]->realVars[205] /* MatStm4.compMasFrac[2,1] variable */ = aux_x[2];
  data->localData[0]->realVars[208] /* MatStm4.compMasFrac[3,2] variable */ = aux_x[3];
  data->localData[0]->realVars[206] /* MatStm4.compMasFrac[2,2] variable */ = aux_x[4];
  TRACE_POP
}
/*
equation index: 379
type: SIMPLE_ASSIGN
MatStm4._liqPhasMasFrac = MatStm4.totMasFlo[2] / MatStm4.totMasFlo[1]
*/
void mixer1_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->localData[0]->realVars[245] /* MatStm4.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[268] /* MatStm4.totMasFlo[2] variable */,data->localData[0]->realVars[267] /* MatStm4.totMasFlo[1] variable */,"MatStm4.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 380
type: SIMPLE_ASSIGN
MatStm4._phasMolSpHeat[1] = MatStm4.liqPhasMolFrac * MatStm4.phasMolSpHeat[2] + Mixer1.inVapPhasMolFrac[2] * MatStm4.phasMolSpHeat[3]
*/
void mixer1_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->localData[0]->realVars[255] /* MatStm4.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[246] /* MatStm4.liqPhasMolFrac variable */) * (data->localData[0]->realVars[256] /* MatStm4.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[277] /* Mixer1.inVapPhasMolFrac[2] variable */) * (data->localData[0]->realVars[257] /* MatStm4.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 381
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[1,1] = MatStm4.compMolFrac[1,1] * MatStm4.phasMolSpHeat[1]
*/
void mixer1_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  data->localData[0]->realVars[233] /* MatStm4.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[227] /* MatStm4.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[255] /* MatStm4.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 382
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[1,2] = MatStm4.compMolFrac[1,2] * MatStm4.phasMolSpHeat[1]
*/
void mixer1_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->localData[0]->realVars[234] /* MatStm4.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[228] /* MatStm4.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[255] /* MatStm4.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 383
type: SIMPLE_ASSIGN
MatStm4._phasMolEnth[1] = MatStm4.liqPhasMolFrac * MatStm4.phasMolEnth[2] + Mixer1.inVapPhasMolFrac[2] * MatStm4.phasMolEnth[3]
*/
void mixer1_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->localData[0]->realVars[249] /* MatStm4.phasMolEnth[1] variable */ = (data->localData[0]->realVars[246] /* MatStm4.liqPhasMolFrac variable */) * (data->localData[0]->realVars[250] /* MatStm4.phasMolEnth[2] variable */) + (data->localData[0]->realVars[277] /* Mixer1.inVapPhasMolFrac[2] variable */) * (data->localData[0]->realVars[251] /* MatStm4.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 384
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[1,1] = MatStm4.compMolFrac[1,1] * MatStm4.phasMolEnth[1]
*/
void mixer1_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->localData[0]->realVars[209] /* MatStm4.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[227] /* MatStm4.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[249] /* MatStm4.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 385
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[1,2] = MatStm4.compMolFrac[1,2] * MatStm4.phasMolEnth[1]
*/
void mixer1_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->localData[0]->realVars[210] /* MatStm4.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[228] /* MatStm4.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[249] /* MatStm4.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 386
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[1] = 0.5 * (MatStm3.phasMolEnth[1] + MatStm4.phasMolEnth[1])
*/
void mixer1_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->localData[0]->realVars[68] /* MatStm2.phasMolEnth[1] variable */ = (0.5) * (data->localData[0]->realVars[159] /* MatStm3.phasMolEnth[1] variable */ + data->localData[0]->realVars[249] /* MatStm4.phasMolEnth[1] variable */);
  TRACE_POP
}
void mixer1_eqFunction_387(DATA*, threadData_t*);
void mixer1_eqFunction_388(DATA*, threadData_t*);
void mixer1_eqFunction_389(DATA*, threadData_t*);
void mixer1_eqFunction_390(DATA*, threadData_t*);
void mixer1_eqFunction_391(DATA*, threadData_t*);
void mixer1_eqFunction_392(DATA*, threadData_t*);
void mixer1_eqFunction_393(DATA*, threadData_t*);
void mixer1_eqFunction_394(DATA*, threadData_t*);
void mixer1_eqFunction_395(DATA*, threadData_t*);
void mixer1_eqFunction_396(DATA*, threadData_t*);
void mixer1_eqFunction_397(DATA*, threadData_t*);
void mixer1_eqFunction_398(DATA*, threadData_t*);
void mixer1_eqFunction_399(DATA*, threadData_t*);
void mixer1_eqFunction_400(DATA*, threadData_t*);
void mixer1_eqFunction_401(DATA*, threadData_t*);
void mixer1_eqFunction_402(DATA*, threadData_t*);
void mixer1_eqFunction_403(DATA*, threadData_t*);
void mixer1_eqFunction_404(DATA*, threadData_t*);
void mixer1_eqFunction_405(DATA*, threadData_t*);
void mixer1_eqFunction_406(DATA*, threadData_t*);
void mixer1_eqFunction_407(DATA*, threadData_t*);
void mixer1_eqFunction_408(DATA*, threadData_t*);
void mixer1_eqFunction_409(DATA*, threadData_t*);
void mixer1_eqFunction_410(DATA*, threadData_t*);
void mixer1_eqFunction_416(DATA*, threadData_t*);
void mixer1_eqFunction_415(DATA*, threadData_t*);
void mixer1_eqFunction_414(DATA*, threadData_t*);
void mixer1_eqFunction_413(DATA*, threadData_t*);
void mixer1_eqFunction_412(DATA*, threadData_t*);
void mixer1_eqFunction_411(DATA*, threadData_t*);
/*
equation index: 417
indexNonlinear: 5
type: NONLINEAR

vars: {MatStm2._totMolFlo[2], MatStm2._T, MatStm2._compMolFrac[2,2], MatStm2._compMolFrac[2,1], MatStm2._compMolFrac[3,2], MatStm2._compMolFrac[3,1]}
eqns: {387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 416, 415, 414, 413, 412, 411}
*/
void mixer1_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 417 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = data->localData[0]->realVars[90] /* MatStm2.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[1] = data->localData[0]->realVars[15] /* MatStm2.T variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[2] = data->localData[0]->realVars[49] /* MatStm2.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[3] = data->localData[0]->realVars[48] /* MatStm2.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[4] = data->localData[0]->realVars[51] /* MatStm2.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[5] = data->localData[0]->realVars[50] /* MatStm2.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,417};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 417 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[90] /* MatStm2.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  data->localData[0]->realVars[15] /* MatStm2.T variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[1];
  data->localData[0]->realVars[49] /* MatStm2.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[2];
  data->localData[0]->realVars[48] /* MatStm2.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[3];
  data->localData[0]->realVars[51] /* MatStm2.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[4];
  data->localData[0]->realVars[50] /* MatStm2.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[5];
  TRACE_POP
}
/*
equation index: 418
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[2,1] = MatStm2.compMolFlo[2,1] * MatStm2.comp[1].MW
*/
void mixer1_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->localData[0]->realVars[18] /* MatStm2.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[42] /* MatStm2.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[163]);
  TRACE_POP
}
/*
equation index: 419
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[3,1] = MatStm2.compMolFlo[3,1] * MatStm2.comp[1].MW
*/
void mixer1_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->localData[0]->realVars[20] /* MatStm2.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[44] /* MatStm2.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[163]);
  TRACE_POP
}
/*
equation index: 420
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[2,2] = MatStm2.compMolFlo[2,2] * MatStm2.comp[2].MW
*/
void mixer1_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->localData[0]->realVars[19] /* MatStm2.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[43] /* MatStm2.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[164]);
  TRACE_POP
}
/*
equation index: 421
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[3,2] = MatStm2.compMolFlo[3,2] * MatStm2.comp[2].MW
*/
void mixer1_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->localData[0]->realVars[21] /* MatStm2.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[45] /* MatStm2.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[164]);
  TRACE_POP
}
/*
equation index: 422
type: ALGORITHM

  MatStm2.MW[3] := $START.MatStm2.MW[3];
  MatStm2.MW[2] := $START.MatStm2.MW[2];
  MatStm2.MW[1] := $START.MatStm2.MW[1];
  for i in 1:2 loop
    MatStm2.MW[:] := {MatStm2.MW[1] + MatStm2.compMolFrac[1,i] * MatStm2.comp[i].MW, MatStm2.MW[2] + MatStm2.compMolFrac[2,i] * MatStm2.comp[i].MW, MatStm2.MW[3] + MatStm2.compMolFrac[3,i] * MatStm2.comp[i].MW};
  end for;
*/
void mixer1_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  data->localData[0]->realVars[9] /* MatStm2.MW[3] variable */ = data->modelData->realVarsData[9].attribute /* MatStm2.MW[3] variable */.start;

  data->localData[0]->realVars[8] /* MatStm2.MW[2] variable */ = data->modelData->realVarsData[8].attribute /* MatStm2.MW[2] variable */.start;

  data->localData[0]->realVars[7] /* MatStm2.MW[1] variable */ = data->modelData->realVarsData[7].attribute /* MatStm2.MW[1] variable */.start;

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 2);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp3, tmp5); $Pi += tmp4)
    {
      array_alloc_scalar_real_array(&tmp0, 3, (modelica_real)data->localData[0]->realVars[7] /* MatStm2.MW[1] variable */ + ((&data->localData[0]->realVars[46] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[8] /* MatStm2.MW[2] variable */ + ((&data->localData[0]->realVars[46] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[9] /* MatStm2.MW[3] variable */ + ((&data->localData[0]->realVars[46] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
      real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[7] /* MatStm2.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp0, &tmp2, &tmp1);
    }
  }
  TRACE_POP
}
/*
equation index: 423
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[2] = MatStm2.totMolFlo[2] * MatStm2.MW[2]
*/
void mixer1_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->localData[0]->realVars[87] /* MatStm2.totMasFlo[2] variable */ = (data->localData[0]->realVars[90] /* MatStm2.totMolFlo[2] variable */) * (data->localData[0]->realVars[8] /* MatStm2.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 424
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[1] = 200.0 * MatStm2.MW[1]
*/
void mixer1_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->localData[0]->realVars[86] /* MatStm2.totMasFlo[1] variable */ = (200.0) * (data->localData[0]->realVars[7] /* MatStm2.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 425
type: SIMPLE_ASSIGN
MatStm2._compMasFrac[1,2] = MatStm2.compMasFlo[1,2] / MatStm2.totMasFlo[1]
*/
void mixer1_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->localData[0]->realVars[23] /* MatStm2.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[17] /* MatStm2.compMasFlo[1,2] variable */,data->localData[0]->realVars[86] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 426
type: SIMPLE_ASSIGN
MatStm2._liqPhasMasFrac = MatStm2.totMasFlo[2] / MatStm2.totMasFlo[1]
*/
void mixer1_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  data->localData[0]->realVars[64] /* MatStm2.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[87] /* MatStm2.totMasFlo[2] variable */,data->localData[0]->realVars[86] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 427
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[3] = MatStm2.totMolFlo[3] * MatStm2.MW[3]
*/
void mixer1_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->localData[0]->realVars[88] /* MatStm2.totMasFlo[3] variable */ = (data->localData[0]->realVars[91] /* MatStm2.totMolFlo[3] variable */) * (data->localData[0]->realVars[9] /* MatStm2.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 428
type: LINEAR

<var>MatStm2._compMasFrac[1,1]</var>
<var>MatStm2._compMasFrac[3,1]</var>
<var>MatStm2._compMasFrac[2,1]</var>
<var>MatStm2._compMasFrac[3,2]</var>
<var>MatStm2._compMasFrac[2,2]</var>
<row>
  <cell>if 101316.5 >= MatStm2.Pbubl then -MatStm2.compMasFrac[1,2] else if 101316.5 >= MatStm2.Pdew then MatStm2.compMasFlo[3,2] else -MatStm2.compMasFrac[1,2]</cell>
  <cell>if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then MatStm2.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then MatStm2.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then MatStm2.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101316.5 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,1] else if 101316.5 >= MatStm2.Pdew then MatStm2.compMasFlo[3,1] else MatStm2.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="3">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then -1.0 else if 101316.5 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="4">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then 0.0 else if 101316.5 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101316.5 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101316.5 >= MatStm2.Pbubl then -0.0 else if 101316.5 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void mixer1_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[22] /* MatStm2.compMasFrac[1,1] variable */,data->localData[1]->realVars[26] /* MatStm2.compMasFrac[3,1] variable */,data->localData[1]->realVars[24] /* MatStm2.compMasFrac[2,1] variable */,data->localData[1]->realVars[27] /* MatStm2.compMasFrac[3,2] variable */,data->localData[1]->realVars[25] /* MatStm2.compMasFrac[2,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 428 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 5, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,428};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 428 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[22] /* MatStm2.compMasFrac[1,1] variable */ = aux_x[0];
  data->localData[0]->realVars[26] /* MatStm2.compMasFrac[3,1] variable */ = aux_x[1];
  data->localData[0]->realVars[24] /* MatStm2.compMasFrac[2,1] variable */ = aux_x[2];
  data->localData[0]->realVars[27] /* MatStm2.compMasFrac[3,2] variable */ = aux_x[3];
  data->localData[0]->realVars[25] /* MatStm2.compMasFrac[2,2] variable */ = aux_x[4];
  TRACE_POP
}
/*
equation index: 429
type: SIMPLE_ASSIGN
MatStm2._vapPhasMasFrac = MatStm2.totMasFlo[3] / MatStm2.totMasFlo[1]
*/
void mixer1_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->localData[0]->realVars[92] /* MatStm2.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[88] /* MatStm2.totMasFlo[3] variable */,data->localData[0]->realVars[86] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 430
type: ALGORITHM

  (MatStm2.compMolEntr[2,2], MatStm2.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[2].AS, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tb, MatStm2.comp[2].Tc, MatStm2.T, 101316.5, MatStm2.compMolFrac[2,2], MatStm2.compMolFrac[3,2]);
*/
void mixer1_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  real_array tmp6;
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[37] /* MatStm2.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[82], tmp6, tmp7, data->simulationInfo->realParameter[178], data->simulationInfo->realParameter[180], data->localData[0]->realVars[15] /* MatStm2.T variable */, 101316.5, data->localData[0]->realVars[49] /* MatStm2.compMolFrac[2,2] variable */, data->localData[0]->realVars[51] /* MatStm2.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[39] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 431
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, MatStm2.T)
*/
void mixer1_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  real_array tmp8;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  data->localData[0]->realVars[57] /* MatStm2.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp8, data->localData[0]->realVars[15] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 432
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm2.comp[2].LiqCp[1], MatStm2.comp[2].LiqCp[2], MatStm2.comp[2].LiqCp[3], MatStm2.comp[2].LiqCp[4], MatStm2.comp[2].LiqCp[5], MatStm2.comp[2].LiqCp[6]}, MatStm2.T)
*/
void mixer1_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[121], (modelica_real)data->simulationInfo->realParameter[122], (modelica_real)data->simulationInfo->realParameter[123], (modelica_real)data->simulationInfo->realParameter[124], (modelica_real)data->simulationInfo->realParameter[125], (modelica_real)data->simulationInfo->realParameter[126]);
  data->localData[0]->realVars[55] /* MatStm2.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp9, data->localData[0]->realVars[15] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 433
type: ALGORITHM

  (MatStm2.compMolEntr[2,1], MatStm2.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[1].AS, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tb, MatStm2.comp[1].Tc, MatStm2.T, 101316.5, MatStm2.compMolFrac[2,1], MatStm2.compMolFrac[3,1]);
*/
void mixer1_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[36] /* MatStm2.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[81], tmp10, tmp11, data->simulationInfo->realParameter[177], data->simulationInfo->realParameter[179], data->localData[0]->realVars[15] /* MatStm2.T variable */, 101316.5, data->localData[0]->realVars[48] /* MatStm2.compMolFrac[2,1] variable */, data->localData[0]->realVars[50] /* MatStm2.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[38] /* MatStm2.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 434
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolEntr[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolEntr[2,2]
*/
void mixer1_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  data->localData[0]->realVars[72] /* MatStm2.phasMolEntr[2] variable */ = (data->localData[0]->realVars[48] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[36] /* MatStm2.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[49] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[37] /* MatStm2.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 435
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolEntr[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolEntr[3,2]
*/
void mixer1_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  data->localData[0]->realVars[73] /* MatStm2.phasMolEntr[3] variable */ = (data->localData[0]->realVars[50] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[38] /* MatStm2.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[51] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[39] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 436
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolEntr[2] + MatStm2.vapPhasMolFrac * MatStm2.phasMolEntr[3]
*/
void mixer1_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  data->localData[0]->realVars[71] /* MatStm2.phasMolEntr[1] variable */ = (data->localData[0]->realVars[65] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[72] /* MatStm2.phasMolEntr[2] variable */) + (data->localData[0]->realVars[93] /* MatStm2.vapPhasMolFrac variable */) * (data->localData[0]->realVars[73] /* MatStm2.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 437
type: SIMPLE_ASSIGN
MatStm2._compMolEntr[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolEntr[1]
*/
void mixer1_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  data->localData[0]->realVars[34] /* MatStm2.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[46] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[71] /* MatStm2.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 438
type: SIMPLE_ASSIGN
MatStm2._compMolEntr[1,2] = MatStm2.compMolFrac[1,2] * MatStm2.phasMolEntr[1]
*/
void mixer1_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  data->localData[0]->realVars[35] /* MatStm2.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[47] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[71] /* MatStm2.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 439
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, MatStm2.T)
*/
void mixer1_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  real_array tmp12;
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  data->localData[0]->realVars[56] /* MatStm2.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp12, data->localData[0]->realVars[15] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 440
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolSpHeat[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolSpHeat[3,2]
*/
void mixer1_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  data->localData[0]->realVars[76] /* MatStm2.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[50] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[56] /* MatStm2.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[51] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[57] /* MatStm2.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 441
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm2.comp[1].LiqCp[1], MatStm2.comp[1].LiqCp[2], MatStm2.comp[1].LiqCp[3], MatStm2.comp[1].LiqCp[4], MatStm2.comp[1].LiqCp[5], MatStm2.comp[1].LiqCp[6]}, MatStm2.T)
*/
void mixer1_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)data->simulationInfo->realParameter[115], (modelica_real)data->simulationInfo->realParameter[116], (modelica_real)data->simulationInfo->realParameter[117], (modelica_real)data->simulationInfo->realParameter[118], (modelica_real)data->simulationInfo->realParameter[119], (modelica_real)data->simulationInfo->realParameter[120]);
  data->localData[0]->realVars[54] /* MatStm2.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp13, data->localData[0]->realVars[15] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 442
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolSpHeat[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolSpHeat[2,2]
*/
void mixer1_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  data->localData[0]->realVars[75] /* MatStm2.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[48] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[54] /* MatStm2.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[49] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[55] /* MatStm2.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 443
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolSpHeat[2] + MatStm2.vapPhasMolFrac * MatStm2.phasMolSpHeat[3]
*/
void mixer1_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  data->localData[0]->realVars[74] /* MatStm2.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[65] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[75] /* MatStm2.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[93] /* MatStm2.vapPhasMolFrac variable */) * (data->localData[0]->realVars[76] /* MatStm2.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 444
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolSpHeat[1]
*/
void mixer1_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  data->localData[0]->realVars[52] /* MatStm2.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[46] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[74] /* MatStm2.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 445
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[1,2] = MatStm2.compMolFrac[1,2] * MatStm2.phasMolSpHeat[1]
*/
void mixer1_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  data->localData[0]->realVars[53] /* MatStm2.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[47] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[74] /* MatStm2.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 446
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolEnth[1]
*/
void mixer1_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  data->localData[0]->realVars[28] /* MatStm2.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[46] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[68] /* MatStm2.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 447
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[1,2] = MatStm2.compMolFrac[1,2] * MatStm2.phasMolEnth[1]
*/
void mixer1_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  data->localData[0]->realVars[29] /* MatStm2.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[47] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[68] /* MatStm2.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 448
type: SIMPLE_ASSIGN
MatStm4._phasMolEntr[1] = MatStm4.liqPhasMolFrac * MatStm4.phasMolEntr[2] + Mixer1.inVapPhasMolFrac[2] * MatStm4.phasMolEntr[3]
*/
void mixer1_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  data->localData[0]->realVars[252] /* MatStm4.phasMolEntr[1] variable */ = (data->localData[0]->realVars[246] /* MatStm4.liqPhasMolFrac variable */) * (data->localData[0]->realVars[253] /* MatStm4.phasMolEntr[2] variable */) + (data->localData[0]->realVars[277] /* Mixer1.inVapPhasMolFrac[2] variable */) * (data->localData[0]->realVars[254] /* MatStm4.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 449
type: SIMPLE_ASSIGN
MatStm4._compMolEntr[1,1] = MatStm4.compMolFrac[1,1] * MatStm4.phasMolEntr[1]
*/
void mixer1_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  data->localData[0]->realVars[215] /* MatStm4.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[227] /* MatStm4.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[252] /* MatStm4.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 450
type: SIMPLE_ASSIGN
MatStm4._compMolEntr[1,2] = MatStm4.compMolFrac[1,2] * MatStm4.phasMolEntr[1]
*/
void mixer1_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  data->localData[0]->realVars[216] /* MatStm4.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[228] /* MatStm4.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[252] /* MatStm4.phasMolEntr[1] variable */);
  TRACE_POP
}

OMC_DISABLE_OPT
int mixer1_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  
  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  mixer1_functionLocalKnownVars(data, threadData);
  mixer1_eqFunction_277(data, threadData);

  mixer1_eqFunction_278(data, threadData);

  mixer1_eqFunction_279(data, threadData);

  mixer1_eqFunction_280(data, threadData);

  mixer1_eqFunction_305(data, threadData);

  mixer1_eqFunction_306(data, threadData);

  mixer1_eqFunction_307(data, threadData);

  mixer1_eqFunction_308(data, threadData);

  mixer1_eqFunction_309(data, threadData);

  mixer1_eqFunction_310(data, threadData);

  mixer1_eqFunction_311(data, threadData);

  mixer1_eqFunction_312(data, threadData);

  mixer1_eqFunction_313(data, threadData);

  mixer1_eqFunction_314(data, threadData);

  mixer1_eqFunction_315(data, threadData);

  mixer1_eqFunction_316(data, threadData);

  mixer1_eqFunction_317(data, threadData);

  mixer1_eqFunction_318(data, threadData);

  mixer1_eqFunction_319(data, threadData);

  mixer1_eqFunction_320(data, threadData);

  mixer1_eqFunction_321(data, threadData);

  mixer1_eqFunction_322(data, threadData);

  mixer1_eqFunction_323(data, threadData);

  mixer1_eqFunction_324(data, threadData);

  mixer1_eqFunction_325(data, threadData);

  mixer1_eqFunction_326(data, threadData);

  mixer1_eqFunction_327(data, threadData);

  mixer1_eqFunction_328(data, threadData);

  mixer1_eqFunction_329(data, threadData);

  mixer1_eqFunction_330(data, threadData);

  mixer1_eqFunction_331(data, threadData);

  mixer1_eqFunction_332(data, threadData);

  mixer1_eqFunction_333(data, threadData);

  mixer1_eqFunction_334(data, threadData);

  mixer1_eqFunction_359(data, threadData);

  mixer1_eqFunction_360(data, threadData);

  mixer1_eqFunction_361(data, threadData);

  mixer1_eqFunction_362(data, threadData);

  mixer1_eqFunction_363(data, threadData);

  mixer1_eqFunction_364(data, threadData);

  mixer1_eqFunction_365(data, threadData);

  mixer1_eqFunction_366(data, threadData);

  mixer1_eqFunction_367(data, threadData);

  mixer1_eqFunction_368(data, threadData);

  mixer1_eqFunction_369(data, threadData);

  mixer1_eqFunction_370(data, threadData);

  mixer1_eqFunction_371(data, threadData);

  mixer1_eqFunction_372(data, threadData);

  mixer1_eqFunction_373(data, threadData);

  mixer1_eqFunction_374(data, threadData);

  mixer1_eqFunction_375(data, threadData);

  mixer1_eqFunction_376(data, threadData);

  mixer1_eqFunction_377(data, threadData);

  mixer1_eqFunction_378(data, threadData);

  mixer1_eqFunction_379(data, threadData);

  mixer1_eqFunction_380(data, threadData);

  mixer1_eqFunction_381(data, threadData);

  mixer1_eqFunction_382(data, threadData);

  mixer1_eqFunction_383(data, threadData);

  mixer1_eqFunction_384(data, threadData);

  mixer1_eqFunction_385(data, threadData);

  mixer1_eqFunction_386(data, threadData);

  mixer1_eqFunction_417(data, threadData);

  mixer1_eqFunction_418(data, threadData);

  mixer1_eqFunction_419(data, threadData);

  mixer1_eqFunction_420(data, threadData);

  mixer1_eqFunction_421(data, threadData);

  mixer1_eqFunction_422(data, threadData);

  mixer1_eqFunction_423(data, threadData);

  mixer1_eqFunction_424(data, threadData);

  mixer1_eqFunction_425(data, threadData);

  mixer1_eqFunction_426(data, threadData);

  mixer1_eqFunction_427(data, threadData);

  mixer1_eqFunction_428(data, threadData);

  mixer1_eqFunction_429(data, threadData);

  mixer1_eqFunction_430(data, threadData);

  mixer1_eqFunction_431(data, threadData);

  mixer1_eqFunction_432(data, threadData);

  mixer1_eqFunction_433(data, threadData);

  mixer1_eqFunction_434(data, threadData);

  mixer1_eqFunction_435(data, threadData);

  mixer1_eqFunction_436(data, threadData);

  mixer1_eqFunction_437(data, threadData);

  mixer1_eqFunction_438(data, threadData);

  mixer1_eqFunction_439(data, threadData);

  mixer1_eqFunction_440(data, threadData);

  mixer1_eqFunction_441(data, threadData);

  mixer1_eqFunction_442(data, threadData);

  mixer1_eqFunction_443(data, threadData);

  mixer1_eqFunction_444(data, threadData);

  mixer1_eqFunction_445(data, threadData);

  mixer1_eqFunction_446(data, threadData);

  mixer1_eqFunction_447(data, threadData);

  mixer1_eqFunction_448(data, threadData);

  mixer1_eqFunction_449(data, threadData);

  mixer1_eqFunction_450(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int mixer1_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int mixer1_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  data->simulationInfo->callStatistics.functionODE++;
  
  mixer1_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

  
  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "mixer1_12jac.h"
#include "mixer1_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks mixer1_callback = {
   (int (*)(DATA *, threadData_t *, void *)) mixer1_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) mixer1_performQSSSimulation,
   mixer1_updateContinuousSystem,
   mixer1_callExternalObjectDestructors,
   mixer1_initialNonLinearSystem,
   mixer1_initialLinearSystem,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   mixer1_initializeStateSets,
   #else
   NULL,
   #endif
   mixer1_initializeDAEmodeData,
   mixer1_functionODE,
   mixer1_functionAlgebraics,
   mixer1_functionDAE,
   mixer1_functionLocalKnownVars,
   mixer1_input_function,
   mixer1_input_function_init,
   mixer1_input_function_updateStartValues,
   mixer1_output_function,
   mixer1_function_storeDelayed,
   mixer1_updateBoundVariableAttributes,
   mixer1_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   mixer1_functionInitialEquations_lambda0,
   mixer1_functionRemovedInitialEquations,
   mixer1_updateBoundParameters,
   mixer1_checkForAsserts,
   mixer1_function_ZeroCrossingsEquations,
   mixer1_function_ZeroCrossings,
   mixer1_function_updateRelations,
   mixer1_zeroCrossingDescription,
   mixer1_relationDescription,
   mixer1_function_initSample,
   mixer1_INDEX_JAC_A,
   mixer1_INDEX_JAC_B,
   mixer1_INDEX_JAC_C,
   mixer1_INDEX_JAC_D,
   mixer1_initialAnalyticJacobianA,
   mixer1_initialAnalyticJacobianB,
   mixer1_initialAnalyticJacobianC,
   mixer1_initialAnalyticJacobianD,
   mixer1_functionJacA_column,
   mixer1_functionJacB_column,
   mixer1_functionJacC_column,
   mixer1_functionJacD_column,
   mixer1_linear_model_frame,
   mixer1_linear_model_datarecovery_frame,
   mixer1_mayer,
   mixer1_lagrange,
   mixer1_pickUpBoundsForInputsInOptimization,
   mixer1_setInputData,
   mixer1_getTimeGrid,
   mixer1_symbolicInlineSystem,
   mixer1_function_initSynchronous,
   mixer1_function_updateSynchronous,
   mixer1_function_equationsSynchronous,
   mixer1_inputNames,
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
#define _OMC_LIT_RESOURCE_3_dir_data "C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,9,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,83,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "mixer1"
#define _OMC_LIT_RESOURCE_4_dir_data "C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,6,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,93,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void mixer1_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &mixer1_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "mixer1";
  data->modelData->modelFilePrefix = "mixer1";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator";
  data->modelData->modelGUID = "{873af20b-fbbb-42f6-8d45-a63f22c540fc}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "mixer1_init.c"
    ;
  static const char contents_info[] =
    #include "mixer1_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "mixer1_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "mixer1_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 278;
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
  
  data->modelData->nAliasReal = 132;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 2;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 2;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.fileName = "mixer1_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 7;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1330;
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
  
    mixer1_setupDataStruc(&data, threadData);
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


