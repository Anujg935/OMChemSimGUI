/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "mixer3_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation mixer3_performSimulation
#define prefixedName_updateContinuousSystem mixer3_updateContinuousSystem
#include <simulation/solver/perform_simulation.c>

#define prefixedName_performQSSSimulation mixer3_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int mixer3_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int mixer3_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int mixer3_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int mixer3_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int mixer3_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 277
type: SIMPLE_ASSIGN
MatStm8._compMolFlo[1,2] = 200.0 * MatStm8.compMolFrac[1,2]
*/
void mixer3_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->localData[0]->realVars[221] /* MatStm8.compMolFlo[1,2] variable */ = (200.0) * (data->localData[0]->realVars[227] /* MatStm8.compMolFrac[1,2] variable */);
  TRACE_POP
}
/*
equation index: 278
type: SIMPLE_ASSIGN
MatStm8._compMasFlo[1,2] = MatStm8.compMolFlo[1,2] * MatStm8.comp[2].MW
*/
void mixer3_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->localData[0]->realVars[197] /* MatStm8.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[221] /* MatStm8.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[480]);
  TRACE_POP
}
/*
equation index: 279
type: SIMPLE_ASSIGN
MatStm8._compMolFlo[1,1] = 200.0 * MatStm8.compMolFrac[1,1]
*/
void mixer3_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->localData[0]->realVars[220] /* MatStm8.compMolFlo[1,1] variable */ = (200.0) * (data->localData[0]->realVars[226] /* MatStm8.compMolFrac[1,1] variable */);
  TRACE_POP
}
/*
equation index: 280
type: SIMPLE_ASSIGN
MatStm8._compMasFlo[1,1] = MatStm8.compMolFlo[1,1] * MatStm8.comp[1].MW
*/
void mixer3_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->localData[0]->realVars[196] /* MatStm8.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[220] /* MatStm8.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[479]);
  TRACE_POP
}
void mixer3_eqFunction_281(DATA*, threadData_t*);
void mixer3_eqFunction_282(DATA*, threadData_t*);
void mixer3_eqFunction_283(DATA*, threadData_t*);
void mixer3_eqFunction_284(DATA*, threadData_t*);
void mixer3_eqFunction_285(DATA*, threadData_t*);
void mixer3_eqFunction_286(DATA*, threadData_t*);
void mixer3_eqFunction_287(DATA*, threadData_t*);
void mixer3_eqFunction_292(DATA*, threadData_t*);
void mixer3_eqFunction_291(DATA*, threadData_t*);
void mixer3_eqFunction_290(DATA*, threadData_t*);
void mixer3_eqFunction_289(DATA*, threadData_t*);
void mixer3_eqFunction_288(DATA*, threadData_t*);
/*
equation index: 305
indexNonlinear: 3
type: NONLINEAR

vars: {MatStm7._totMolFlo[3], MatStm7._compMolFrac[3,2], MatStm7._compMolFrac[2,2], MatStm7._compMolFrac[3,1], MatStm7._compMolFrac[2,1]}
eqns: {281, 282, 283, 284, 285, 286, 287, 292, 291, 290, 289, 288}
*/
void mixer3_eqFunction_305(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[181] /* MatStm7.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[1] = data->localData[0]->realVars[141] /* MatStm7.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[2] = data->localData[0]->realVars[139] /* MatStm7.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[3] = data->localData[0]->realVars[140] /* MatStm7.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[4] = data->localData[0]->realVars[138] /* MatStm7.compMolFrac[2,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,305};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 305 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[181] /* MatStm7.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  data->localData[0]->realVars[141] /* MatStm7.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[1];
  data->localData[0]->realVars[139] /* MatStm7.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[2];
  data->localData[0]->realVars[140] /* MatStm7.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[3];
  data->localData[0]->realVars[138] /* MatStm7.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[4];
  TRACE_POP
}
/*
equation index: 306
type: SIMPLE_ASSIGN
MatStm7._compMasFlo[2,1] = MatStm7.compMolFlo[2,1] * MatStm7.comp[1].MW
*/
void mixer3_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->localData[0]->realVars[108] /* MatStm7.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[132] /* MatStm7.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[321]);
  TRACE_POP
}
/*
equation index: 307
type: SIMPLE_ASSIGN
MatStm7._compMasFlo[3,1] = MatStm7.compMolFlo[3,1] * MatStm7.comp[1].MW
*/
void mixer3_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->localData[0]->realVars[110] /* MatStm7.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[134] /* MatStm7.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[321]);
  TRACE_POP
}
/*
equation index: 308
type: ALGORITHM

  (MatStm7.compMolEntr[2,1], MatStm7.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm7.comp[1].AS, {MatStm7.comp[1].VapCp[1], MatStm7.comp[1].VapCp[2], MatStm7.comp[1].VapCp[3], MatStm7.comp[1].VapCp[4], MatStm7.comp[1].VapCp[5], MatStm7.comp[1].VapCp[6]}, {MatStm7.comp[1].HOV[1], MatStm7.comp[1].HOV[2], MatStm7.comp[1].HOV[3], MatStm7.comp[1].HOV[4], MatStm7.comp[1].HOV[5], MatStm7.comp[1].HOV[6]}, MatStm7.comp[1].Tb, MatStm7.comp[1].Tc, 3201.0, 101325.0, MatStm7.compMolFrac[2,1], MatStm7.compMolFrac[3,1]);
*/
void mixer3_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358], (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[257], (modelica_real)data->simulationInfo->realParameter[258], (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262]);
  data->localData[0]->realVars[126] /* MatStm7.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[239], tmp0, tmp1, data->simulationInfo->realParameter[335], data->simulationInfo->realParameter[337], 3201.0, 101325.0, data->localData[0]->realVars[138] /* MatStm7.compMolFrac[2,1] variable */, data->localData[0]->realVars[140] /* MatStm7.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[128] /* MatStm7.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 309
type: SIMPLE_ASSIGN
MatStm7._compMasFlo[3,2] = MatStm7.compMolFlo[3,2] * MatStm7.comp[2].MW
*/
void mixer3_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->localData[0]->realVars[111] /* MatStm7.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[135] /* MatStm7.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[322]);
  TRACE_POP
}
/*
equation index: 310
type: SIMPLE_ASSIGN
MatStm7._compMasFlo[2,2] = MatStm7.compMolFlo[2,2] * MatStm7.comp[2].MW
*/
void mixer3_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->localData[0]->realVars[109] /* MatStm7.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[133] /* MatStm7.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[322]);
  TRACE_POP
}
/*
equation index: 311
type: SIMPLE_ASSIGN
MatStm7._phasMolSpHeat[2] = MatStm7.compMolFrac[2,1] * MatStm7.compMolSpHeat[2,1] + MatStm7.compMolFrac[2,2] * MatStm7.compMolSpHeat[2,2]
*/
void mixer3_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  data->localData[0]->realVars[165] /* MatStm7.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[138] /* MatStm7.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[144] /* MatStm7.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[139] /* MatStm7.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[145] /* MatStm7.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 312
type: SIMPLE_ASSIGN
MatStm7._phasMolEnth[2] = MatStm7.compMolFrac[2,1] * MatStm7.compMolEnth[2,1] + MatStm7.compMolFrac[2,2] * MatStm7.compMolEnth[2,2]
*/
void mixer3_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->localData[0]->realVars[159] /* MatStm7.phasMolEnth[2] variable */ = (data->localData[0]->realVars[138] /* MatStm7.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[120] /* MatStm7.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[139] /* MatStm7.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[121] /* MatStm7.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 313
type: SIMPLE_ASSIGN
MatStm7._phasMolSpHeat[3] = MatStm7.compMolFrac[3,1] * MatStm7.compMolSpHeat[3,1] + MatStm7.compMolFrac[3,2] * MatStm7.compMolSpHeat[3,2]
*/
void mixer3_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  data->localData[0]->realVars[166] /* MatStm7.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[140] /* MatStm7.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[146] /* MatStm7.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[141] /* MatStm7.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[147] /* MatStm7.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 314
type: SIMPLE_ASSIGN
MatStm7._phasMolEnth[3] = MatStm7.compMolFrac[3,1] * MatStm7.compMolEnth[3,1] + MatStm7.compMolFrac[3,2] * MatStm7.compMolEnth[3,2]
*/
void mixer3_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->localData[0]->realVars[160] /* MatStm7.phasMolEnth[3] variable */ = (data->localData[0]->realVars[140] /* MatStm7.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[122] /* MatStm7.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[141] /* MatStm7.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[123] /* MatStm7.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 315
type: ALGORITHM

  (MatStm7.compMolEntr[2,2], MatStm7.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm7.comp[2].AS, {MatStm7.comp[2].VapCp[1], MatStm7.comp[2].VapCp[2], MatStm7.comp[2].VapCp[3], MatStm7.comp[2].VapCp[4], MatStm7.comp[2].VapCp[5], MatStm7.comp[2].VapCp[6]}, {MatStm7.comp[2].HOV[1], MatStm7.comp[2].HOV[2], MatStm7.comp[2].HOV[3], MatStm7.comp[2].HOV[4], MatStm7.comp[2].HOV[5], MatStm7.comp[2].HOV[6]}, MatStm7.comp[2].Tb, MatStm7.comp[2].Tc, 3201.0, 101325.0, MatStm7.compMolFrac[2,2], MatStm7.compMolFrac[3,2]);
*/
void mixer3_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364], (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264], (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268]);
  data->localData[0]->realVars[127] /* MatStm7.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[240], tmp2, tmp3, data->simulationInfo->realParameter[336], data->simulationInfo->realParameter[338], 3201.0, 101325.0, data->localData[0]->realVars[139] /* MatStm7.compMolFrac[2,2] variable */, data->localData[0]->realVars[141] /* MatStm7.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[129] /* MatStm7.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 316
type: SIMPLE_ASSIGN
MatStm7._phasMolEntr[2] = MatStm7.compMolFrac[2,1] * MatStm7.compMolEntr[2,1] + MatStm7.compMolFrac[2,2] * MatStm7.compMolEntr[2,2]
*/
void mixer3_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->localData[0]->realVars[162] /* MatStm7.phasMolEntr[2] variable */ = (data->localData[0]->realVars[138] /* MatStm7.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[126] /* MatStm7.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[139] /* MatStm7.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[127] /* MatStm7.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 317
type: ALGORITHM

  MatStm7.MW[3] := $START.MatStm7.MW[3];
  MatStm7.MW[2] := $START.MatStm7.MW[2];
  MatStm7.MW[1] := $START.MatStm7.MW[1];
  for i in 1:2 loop
    MatStm7.MW[:] := {MatStm7.MW[1] + MatStm7.compMolFrac[1,i] * MatStm7.comp[i].MW, MatStm7.MW[2] + MatStm7.compMolFrac[2,i] * MatStm7.comp[i].MW, MatStm7.MW[3] + MatStm7.compMolFrac[3,i] * MatStm7.comp[i].MW};
  end for;
*/
void mixer3_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[99] /* MatStm7.MW[3] variable */ = data->modelData->realVarsData[99].attribute /* MatStm7.MW[3] variable */.start;

  data->localData[0]->realVars[98] /* MatStm7.MW[2] variable */ = data->modelData->realVarsData[98].attribute /* MatStm7.MW[2] variable */.start;

  data->localData[0]->realVars[97] /* MatStm7.MW[1] variable */ = data->modelData->realVarsData[97].attribute /* MatStm7.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[97] /* MatStm7.MW[1] variable */ + ((&data->localData[0]->realVars[136] /* MatStm7.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[98] /* MatStm7.MW[2] variable */ + ((&data->localData[0]->realVars[136] /* MatStm7.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[99] /* MatStm7.MW[3] variable */ + ((&data->localData[0]->realVars[136] /* MatStm7.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[97] /* MatStm7.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
/*
equation index: 318
type: SIMPLE_ASSIGN
MatStm7._totMasFlo[2] = MatStm7.totMolFlo[2] * MatStm7.MW[2]
*/
void mixer3_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  data->localData[0]->realVars[177] /* MatStm7.totMasFlo[2] variable */ = (data->localData[0]->realVars[180] /* MatStm7.totMolFlo[2] variable */) * (data->localData[0]->realVars[98] /* MatStm7.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 319
type: SIMPLE_ASSIGN
MatStm7._totMasFlo[1] = 100.0 * MatStm7.MW[1]
*/
void mixer3_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  data->localData[0]->realVars[176] /* MatStm7.totMasFlo[1] variable */ = (100.0) * (data->localData[0]->realVars[97] /* MatStm7.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 320
type: SIMPLE_ASSIGN
MatStm7._compMasFrac[1,2] = MatStm7.compMasFlo[1,2] / MatStm7.totMasFlo[1]
*/
void mixer3_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->localData[0]->realVars[113] /* MatStm7.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[107] /* MatStm7.compMasFlo[1,2] variable */,data->localData[0]->realVars[176] /* MatStm7.totMasFlo[1] variable */,"MatStm7.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 321
type: SIMPLE_ASSIGN
MatStm7._liqPhasMasFrac = MatStm7.totMasFlo[2] / MatStm7.totMasFlo[1]
*/
void mixer3_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->localData[0]->realVars[154] /* MatStm7.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[177] /* MatStm7.totMasFlo[2] variable */,data->localData[0]->realVars[176] /* MatStm7.totMasFlo[1] variable */,"MatStm7.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 322
type: SIMPLE_ASSIGN
MatStm7._phasMolEntr[3] = MatStm7.compMolFrac[3,1] * MatStm7.compMolEntr[3,1] + MatStm7.compMolFrac[3,2] * MatStm7.compMolEntr[3,2]
*/
void mixer3_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->localData[0]->realVars[163] /* MatStm7.phasMolEntr[3] variable */ = (data->localData[0]->realVars[140] /* MatStm7.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[128] /* MatStm7.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[141] /* MatStm7.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[129] /* MatStm7.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 323
type: SIMPLE_ASSIGN
MatStm7._totMasFlo[3] = MatStm7.totMolFlo[3] * MatStm7.MW[3]
*/
void mixer3_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->localData[0]->realVars[178] /* MatStm7.totMasFlo[3] variable */ = (data->localData[0]->realVars[181] /* MatStm7.totMolFlo[3] variable */) * (data->localData[0]->realVars[99] /* MatStm7.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 324
type: SIMPLE_ASSIGN
MatStm7._vapPhasMasFrac = MatStm7.totMasFlo[3] / MatStm7.totMasFlo[1]
*/
void mixer3_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->localData[0]->realVars[182] /* MatStm7.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[178] /* MatStm7.totMasFlo[3] variable */,data->localData[0]->realVars[176] /* MatStm7.totMasFlo[1] variable */,"MatStm7.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 325
type: LINEAR

<var>MatStm7._compMasFrac[3,1]</var>
<var>MatStm7._compMasFrac[1,1]</var>
<var>MatStm7._compMasFrac[2,2]</var>
<var>MatStm7._compMasFrac[2,1]</var>
<var>MatStm7._compMasFrac[3,2]</var>
<row>
  <cell>if 101325.0 >= MatStm7.Pbubl then -MatStm7.compMasFrac[1,2] else if 101325.0 >= MatStm7.Pdew then MatStm7.compMasFlo[3,2] else -MatStm7.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm7.Pbubl then 0.0 else if 101325.0 >= MatStm7.Pdew then MatStm7.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm7.Pbubl then 0.0 else if 101325.0 >= MatStm7.Pdew then MatStm7.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm7.Pbubl then 0.0 else if 101325.0 >= MatStm7.Pdew then MatStm7.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm7.Pbubl then MatStm7.compMasFlo[1,1] else if 101325.0 >= MatStm7.Pdew then MatStm7.compMasFlo[3,1] else MatStm7.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm7.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm7.Pbubl then 0.0 else if 101325.0 >= MatStm7.Pdew then -MatStm7.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm7.Pbubl then 0.0 else if 101325.0 >= MatStm7.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm7.Pbubl then 0.0 else if 101325.0 >= MatStm7.Pdew then -MatStm7.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm7.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101325.0 >= MatStm7.Pbubl then 0.0 else if 101325.0 >= MatStm7.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm7.Pbubl then -1.0 else if 101325.0 >= MatStm7.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm7.Pbubl then 0.0 else if 101325.0 >= MatStm7.Pdew then -MatStm7.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm7.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm7.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm7.Pbubl then 0.0 else if 101325.0 >= MatStm7.Pdew then -MatStm7.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101325.0 >= MatStm7.Pbubl then 0.0 else if 101325.0 >= MatStm7.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm7.Pbubl then -0.0 else if 101325.0 >= MatStm7.Pdew then -MatStm7.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm7.Pbubl then -MatStm7.totMasFlo[1] else if 101325.0 >= MatStm7.Pdew then -0.0 else -MatStm7.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void mixer3_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[116] /* MatStm7.compMasFrac[3,1] variable */,data->localData[1]->realVars[112] /* MatStm7.compMasFrac[1,1] variable */,data->localData[1]->realVars[115] /* MatStm7.compMasFrac[2,2] variable */,data->localData[1]->realVars[114] /* MatStm7.compMasFrac[2,1] variable */,data->localData[1]->realVars[117] /* MatStm7.compMasFrac[3,2] variable */ };
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
  data->localData[0]->realVars[116] /* MatStm7.compMasFrac[3,1] variable */ = aux_x[0];
  data->localData[0]->realVars[112] /* MatStm7.compMasFrac[1,1] variable */ = aux_x[1];
  data->localData[0]->realVars[115] /* MatStm7.compMasFrac[2,2] variable */ = aux_x[2];
  data->localData[0]->realVars[114] /* MatStm7.compMasFrac[2,1] variable */ = aux_x[3];
  data->localData[0]->realVars[117] /* MatStm7.compMasFrac[3,2] variable */ = aux_x[4];
  TRACE_POP
}
/*
equation index: 326
type: SIMPLE_ASSIGN
MatStm7._phasMolSpHeat[1] = MatStm7.liqPhasMolFrac * MatStm7.phasMolSpHeat[2] + Mixer3.inVapPhasMolFrac[1] * MatStm7.phasMolSpHeat[3]
*/
void mixer3_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->localData[0]->realVars[164] /* MatStm7.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[155] /* MatStm7.liqPhasMolFrac variable */) * (data->localData[0]->realVars[165] /* MatStm7.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[276] /* Mixer3.inVapPhasMolFrac[1] variable */) * (data->localData[0]->realVars[166] /* MatStm7.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 327
type: SIMPLE_ASSIGN
MatStm7._compMolSpHeat[1,1] = MatStm7.compMolFrac[1,1] * MatStm7.phasMolSpHeat[1]
*/
void mixer3_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->localData[0]->realVars[142] /* MatStm7.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[136] /* MatStm7.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[164] /* MatStm7.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 328
type: SIMPLE_ASSIGN
MatStm7._compMolSpHeat[1,2] = MatStm7.compMolFrac[1,2] * MatStm7.phasMolSpHeat[1]
*/
void mixer3_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->localData[0]->realVars[143] /* MatStm7.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[137] /* MatStm7.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[164] /* MatStm7.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 329
type: SIMPLE_ASSIGN
MatStm7._phasMolEnth[1] = MatStm7.liqPhasMolFrac * MatStm7.phasMolEnth[2] + Mixer3.inVapPhasMolFrac[1] * MatStm7.phasMolEnth[3]
*/
void mixer3_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->localData[0]->realVars[158] /* MatStm7.phasMolEnth[1] variable */ = (data->localData[0]->realVars[155] /* MatStm7.liqPhasMolFrac variable */) * (data->localData[0]->realVars[159] /* MatStm7.phasMolEnth[2] variable */) + (data->localData[0]->realVars[276] /* Mixer3.inVapPhasMolFrac[1] variable */) * (data->localData[0]->realVars[160] /* MatStm7.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 330
type: SIMPLE_ASSIGN
MatStm7._compMolEnth[1,1] = MatStm7.compMolFrac[1,1] * MatStm7.phasMolEnth[1]
*/
void mixer3_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->localData[0]->realVars[118] /* MatStm7.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[136] /* MatStm7.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[158] /* MatStm7.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 331
type: SIMPLE_ASSIGN
MatStm7._compMolEnth[1,2] = MatStm7.compMolFrac[1,2] * MatStm7.phasMolEnth[1]
*/
void mixer3_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->localData[0]->realVars[119] /* MatStm7.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[137] /* MatStm7.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[158] /* MatStm7.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 332
type: SIMPLE_ASSIGN
MatStm7._phasMolEntr[1] = MatStm7.liqPhasMolFrac * MatStm7.phasMolEntr[2] + Mixer3.inVapPhasMolFrac[1] * MatStm7.phasMolEntr[3]
*/
void mixer3_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->localData[0]->realVars[161] /* MatStm7.phasMolEntr[1] variable */ = (data->localData[0]->realVars[155] /* MatStm7.liqPhasMolFrac variable */) * (data->localData[0]->realVars[162] /* MatStm7.phasMolEntr[2] variable */) + (data->localData[0]->realVars[276] /* Mixer3.inVapPhasMolFrac[1] variable */) * (data->localData[0]->realVars[163] /* MatStm7.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 333
type: SIMPLE_ASSIGN
MatStm7._compMolEntr[1,1] = MatStm7.compMolFrac[1,1] * MatStm7.phasMolEntr[1]
*/
void mixer3_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->localData[0]->realVars[124] /* MatStm7.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[136] /* MatStm7.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[161] /* MatStm7.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 334
type: SIMPLE_ASSIGN
MatStm7._compMolEntr[1,2] = MatStm7.compMolFrac[1,2] * MatStm7.phasMolEntr[1]
*/
void mixer3_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->localData[0]->realVars[125] /* MatStm7.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[137] /* MatStm7.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[161] /* MatStm7.phasMolEntr[1] variable */);
  TRACE_POP
}
void mixer3_eqFunction_335(DATA*, threadData_t*);
void mixer3_eqFunction_336(DATA*, threadData_t*);
void mixer3_eqFunction_337(DATA*, threadData_t*);
void mixer3_eqFunction_338(DATA*, threadData_t*);
void mixer3_eqFunction_339(DATA*, threadData_t*);
void mixer3_eqFunction_340(DATA*, threadData_t*);
void mixer3_eqFunction_341(DATA*, threadData_t*);
void mixer3_eqFunction_346(DATA*, threadData_t*);
void mixer3_eqFunction_345(DATA*, threadData_t*);
void mixer3_eqFunction_344(DATA*, threadData_t*);
void mixer3_eqFunction_343(DATA*, threadData_t*);
void mixer3_eqFunction_342(DATA*, threadData_t*);
/*
equation index: 359
indexNonlinear: 4
type: NONLINEAR

vars: {MatStm6._totMolFlo[2], MatStm6._compMolFrac[2,2], MatStm6._compMolFrac[3,2], MatStm6._compMolFrac[2,1], MatStm6._compMolFrac[3,1]}
eqns: {335, 336, 337, 338, 339, 340, 341, 346, 345, 344, 343, 342}
*/
void mixer3_eqFunction_359(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[90] /* MatStm6.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[1] = data->localData[0]->realVars[49] /* MatStm6.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[2] = data->localData[0]->realVars[51] /* MatStm6.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[3] = data->localData[0]->realVars[48] /* MatStm6.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[4] = data->localData[0]->realVars[50] /* MatStm6.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,359};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 359 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[90] /* MatStm6.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  data->localData[0]->realVars[49] /* MatStm6.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[1];
  data->localData[0]->realVars[51] /* MatStm6.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[2];
  data->localData[0]->realVars[48] /* MatStm6.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[3];
  data->localData[0]->realVars[50] /* MatStm6.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[4];
  TRACE_POP
}
/*
equation index: 360
type: SIMPLE_ASSIGN
MatStm6._compMasFlo[2,1] = MatStm6.compMolFlo[2,1] * MatStm6.comp[1].MW
*/
void mixer3_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->localData[0]->realVars[18] /* MatStm6.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[42] /* MatStm6.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[163]);
  TRACE_POP
}
/*
equation index: 361
type: SIMPLE_ASSIGN
MatStm6._compMasFlo[3,1] = MatStm6.compMolFlo[3,1] * MatStm6.comp[1].MW
*/
void mixer3_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  data->localData[0]->realVars[20] /* MatStm6.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[44] /* MatStm6.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[163]);
  TRACE_POP
}
/*
equation index: 362
type: ALGORITHM

  (MatStm6.compMolEntr[2,1], MatStm6.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm6.comp[1].AS, {MatStm6.comp[1].VapCp[1], MatStm6.comp[1].VapCp[2], MatStm6.comp[1].VapCp[3], MatStm6.comp[1].VapCp[4], MatStm6.comp[1].VapCp[5], MatStm6.comp[1].VapCp[6]}, {MatStm6.comp[1].HOV[1], MatStm6.comp[1].HOV[2], MatStm6.comp[1].HOV[3], MatStm6.comp[1].HOV[4], MatStm6.comp[1].HOV[5], MatStm6.comp[1].HOV[6]}, MatStm6.comp[1].Tb, MatStm6.comp[1].Tc, 310.0, 101325.0, MatStm6.compMolFrac[2,1], MatStm6.compMolFrac[3,1]);
*/
void mixer3_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[36] /* MatStm6.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[81], tmp0, tmp1, data->simulationInfo->realParameter[177], data->simulationInfo->realParameter[179], 310.0, 101325.0, data->localData[0]->realVars[48] /* MatStm6.compMolFrac[2,1] variable */, data->localData[0]->realVars[50] /* MatStm6.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[38] /* MatStm6.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 363
type: SIMPLE_ASSIGN
MatStm6._phasMolSpHeat[3] = MatStm6.compMolFrac[3,1] * MatStm6.compMolSpHeat[3,1] + MatStm6.compMolFrac[3,2] * MatStm6.compMolSpHeat[3,2]
*/
void mixer3_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  data->localData[0]->realVars[76] /* MatStm6.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[50] /* MatStm6.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[56] /* MatStm6.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[51] /* MatStm6.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[57] /* MatStm6.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 364
type: SIMPLE_ASSIGN
MatStm6._phasMolEnth[3] = MatStm6.compMolFrac[3,1] * MatStm6.compMolEnth[3,1] + MatStm6.compMolFrac[3,2] * MatStm6.compMolEnth[3,2]
*/
void mixer3_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  data->localData[0]->realVars[70] /* MatStm6.phasMolEnth[3] variable */ = (data->localData[0]->realVars[50] /* MatStm6.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[32] /* MatStm6.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[51] /* MatStm6.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[33] /* MatStm6.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 365
type: SIMPLE_ASSIGN
MatStm6._compMasFlo[3,2] = MatStm6.compMolFlo[3,2] * MatStm6.comp[2].MW
*/
void mixer3_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  data->localData[0]->realVars[21] /* MatStm6.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[45] /* MatStm6.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[164]);
  TRACE_POP
}
/*
equation index: 366
type: SIMPLE_ASSIGN
MatStm6._compMasFlo[2,2] = MatStm6.compMolFlo[2,2] * MatStm6.comp[2].MW
*/
void mixer3_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->localData[0]->realVars[19] /* MatStm6.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[43] /* MatStm6.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[164]);
  TRACE_POP
}
/*
equation index: 367
type: ALGORITHM

  (MatStm6.compMolEntr[2,2], MatStm6.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm6.comp[2].AS, {MatStm6.comp[2].VapCp[1], MatStm6.comp[2].VapCp[2], MatStm6.comp[2].VapCp[3], MatStm6.comp[2].VapCp[4], MatStm6.comp[2].VapCp[5], MatStm6.comp[2].VapCp[6]}, {MatStm6.comp[2].HOV[1], MatStm6.comp[2].HOV[2], MatStm6.comp[2].HOV[3], MatStm6.comp[2].HOV[4], MatStm6.comp[2].HOV[5], MatStm6.comp[2].HOV[6]}, MatStm6.comp[2].Tb, MatStm6.comp[2].Tc, 310.0, 101325.0, MatStm6.compMolFrac[2,2], MatStm6.compMolFrac[3,2]);
*/
void mixer3_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[37] /* MatStm6.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[82], tmp2, tmp3, data->simulationInfo->realParameter[178], data->simulationInfo->realParameter[180], 310.0, 101325.0, data->localData[0]->realVars[49] /* MatStm6.compMolFrac[2,2] variable */, data->localData[0]->realVars[51] /* MatStm6.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[39] /* MatStm6.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 368
type: SIMPLE_ASSIGN
MatStm6._phasMolEntr[3] = MatStm6.compMolFrac[3,1] * MatStm6.compMolEntr[3,1] + MatStm6.compMolFrac[3,2] * MatStm6.compMolEntr[3,2]
*/
void mixer3_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->localData[0]->realVars[73] /* MatStm6.phasMolEntr[3] variable */ = (data->localData[0]->realVars[50] /* MatStm6.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[38] /* MatStm6.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[51] /* MatStm6.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[39] /* MatStm6.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 369
type: SIMPLE_ASSIGN
MatStm6._phasMolSpHeat[2] = MatStm6.compMolFrac[2,1] * MatStm6.compMolSpHeat[2,1] + MatStm6.compMolFrac[2,2] * MatStm6.compMolSpHeat[2,2]
*/
void mixer3_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->localData[0]->realVars[75] /* MatStm6.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[48] /* MatStm6.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[54] /* MatStm6.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[49] /* MatStm6.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[55] /* MatStm6.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 370
type: SIMPLE_ASSIGN
MatStm6._phasMolEnth[2] = MatStm6.compMolFrac[2,1] * MatStm6.compMolEnth[2,1] + MatStm6.compMolFrac[2,2] * MatStm6.compMolEnth[2,2]
*/
void mixer3_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->localData[0]->realVars[69] /* MatStm6.phasMolEnth[2] variable */ = (data->localData[0]->realVars[48] /* MatStm6.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[30] /* MatStm6.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[49] /* MatStm6.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[31] /* MatStm6.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 371
type: ALGORITHM

  MatStm6.MW[3] := $START.MatStm6.MW[3];
  MatStm6.MW[2] := $START.MatStm6.MW[2];
  MatStm6.MW[1] := $START.MatStm6.MW[1];
  for i in 1:2 loop
    MatStm6.MW[:] := {MatStm6.MW[1] + MatStm6.compMolFrac[1,i] * MatStm6.comp[i].MW, MatStm6.MW[2] + MatStm6.compMolFrac[2,i] * MatStm6.comp[i].MW, MatStm6.MW[3] + MatStm6.compMolFrac[3,i] * MatStm6.comp[i].MW};
  end for;
*/
void mixer3_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[9] /* MatStm6.MW[3] variable */ = data->modelData->realVarsData[9].attribute /* MatStm6.MW[3] variable */.start;

  data->localData[0]->realVars[8] /* MatStm6.MW[2] variable */ = data->modelData->realVarsData[8].attribute /* MatStm6.MW[2] variable */.start;

  data->localData[0]->realVars[7] /* MatStm6.MW[1] variable */ = data->modelData->realVarsData[7].attribute /* MatStm6.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[7] /* MatStm6.MW[1] variable */ + ((&data->localData[0]->realVars[46] /* MatStm6.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[8] /* MatStm6.MW[2] variable */ + ((&data->localData[0]->realVars[46] /* MatStm6.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[9] /* MatStm6.MW[3] variable */ + ((&data->localData[0]->realVars[46] /* MatStm6.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[7] /* MatStm6.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
/*
equation index: 372
type: SIMPLE_ASSIGN
MatStm6._totMasFlo[2] = MatStm6.totMolFlo[2] * MatStm6.MW[2]
*/
void mixer3_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->localData[0]->realVars[87] /* MatStm6.totMasFlo[2] variable */ = (data->localData[0]->realVars[90] /* MatStm6.totMolFlo[2] variable */) * (data->localData[0]->realVars[8] /* MatStm6.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 373
type: SIMPLE_ASSIGN
MatStm6._totMasFlo[3] = MatStm6.totMolFlo[3] * MatStm6.MW[3]
*/
void mixer3_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->localData[0]->realVars[88] /* MatStm6.totMasFlo[3] variable */ = (data->localData[0]->realVars[91] /* MatStm6.totMolFlo[3] variable */) * (data->localData[0]->realVars[9] /* MatStm6.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 374
type: SIMPLE_ASSIGN
MatStm6._totMasFlo[1] = 100.0 * MatStm6.MW[1]
*/
void mixer3_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->localData[0]->realVars[86] /* MatStm6.totMasFlo[1] variable */ = (100.0) * (data->localData[0]->realVars[7] /* MatStm6.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 375
type: SIMPLE_ASSIGN
MatStm6._compMasFrac[1,2] = MatStm6.compMasFlo[1,2] / MatStm6.totMasFlo[1]
*/
void mixer3_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->localData[0]->realVars[23] /* MatStm6.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[17] /* MatStm6.compMasFlo[1,2] variable */,data->localData[0]->realVars[86] /* MatStm6.totMasFlo[1] variable */,"MatStm6.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 376
type: SIMPLE_ASSIGN
MatStm6._liqPhasMasFrac = MatStm6.totMasFlo[2] / MatStm6.totMasFlo[1]
*/
void mixer3_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->localData[0]->realVars[64] /* MatStm6.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[87] /* MatStm6.totMasFlo[2] variable */,data->localData[0]->realVars[86] /* MatStm6.totMasFlo[1] variable */,"MatStm6.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 377
type: LINEAR

<var>MatStm6._compMasFrac[3,1]</var>
<var>MatStm6._compMasFrac[2,1]</var>
<var>MatStm6._compMasFrac[3,2]</var>
<var>MatStm6._compMasFrac[2,2]</var>
<var>MatStm6._compMasFrac[1,1]</var>
<row>
  <cell>if 101325.0 >= MatStm6.Pbubl then 0.0 else if 101325.0 >= MatStm6.Pdew then MatStm6.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm6.Pbubl then 0.0 else if 101325.0 >= MatStm6.Pdew then MatStm6.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm6.Pbubl then -MatStm6.compMasFrac[1,2] else if 101325.0 >= MatStm6.Pdew then MatStm6.compMasFlo[3,2] else -MatStm6.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm6.Pbubl then 0.0 else if 101325.0 >= MatStm6.Pdew then MatStm6.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm6.Pbubl then MatStm6.compMasFlo[1,1] else if 101325.0 >= MatStm6.Pdew then MatStm6.compMasFlo[3,1] else MatStm6.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm6.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="1">
    <residual>-(if 101325.0 >= MatStm6.Pbubl then 0.0 else if 101325.0 >= MatStm6.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm6.Pbubl then 0.0 else if 101325.0 >= MatStm6.Pdew then -MatStm6.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="1" col="0">
    <residual>-(if 101325.0 >= MatStm6.Pbubl then 0.0 else if 101325.0 >= MatStm6.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="1">
    <residual>-(if 101325.0 >= MatStm6.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm6.Pbubl then 0.0 else if 101325.0 >= MatStm6.Pdew then -MatStm6.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm6.Pbubl then -1.0 else if 101325.0 >= MatStm6.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm6.Pbubl then 0.0 else if 101325.0 >= MatStm6.Pdew then -MatStm6.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm6.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm6.Pbubl then 0.0 else if 101325.0 >= MatStm6.Pdew then -MatStm6.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm6.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101325.0 >= MatStm6.Pbubl then 0.0 else if 101325.0 >= MatStm6.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm6.Pbubl then -0.0 else if 101325.0 >= MatStm6.Pdew then -MatStm6.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm6.Pbubl then -MatStm6.totMasFlo[1] else if 101325.0 >= MatStm6.Pdew then -0.0 else -MatStm6.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void mixer3_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[26] /* MatStm6.compMasFrac[3,1] variable */,data->localData[1]->realVars[24] /* MatStm6.compMasFrac[2,1] variable */,data->localData[1]->realVars[27] /* MatStm6.compMasFrac[3,2] variable */,data->localData[1]->realVars[25] /* MatStm6.compMasFrac[2,2] variable */,data->localData[1]->realVars[22] /* MatStm6.compMasFrac[1,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 377 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 4, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,377};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 377 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[26] /* MatStm6.compMasFrac[3,1] variable */ = aux_x[0];
  data->localData[0]->realVars[24] /* MatStm6.compMasFrac[2,1] variable */ = aux_x[1];
  data->localData[0]->realVars[27] /* MatStm6.compMasFrac[3,2] variable */ = aux_x[2];
  data->localData[0]->realVars[25] /* MatStm6.compMasFrac[2,2] variable */ = aux_x[3];
  data->localData[0]->realVars[22] /* MatStm6.compMasFrac[1,1] variable */ = aux_x[4];
  TRACE_POP
}
/*
equation index: 378
type: SIMPLE_ASSIGN
MatStm6._vapPhasMasFrac = MatStm6.totMasFlo[3] / MatStm6.totMasFlo[1]
*/
void mixer3_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  data->localData[0]->realVars[92] /* MatStm6.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[88] /* MatStm6.totMasFlo[3] variable */,data->localData[0]->realVars[86] /* MatStm6.totMasFlo[1] variable */,"MatStm6.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 379
type: SIMPLE_ASSIGN
MatStm6._phasMolEntr[2] = MatStm6.compMolFrac[2,1] * MatStm6.compMolEntr[2,1] + MatStm6.compMolFrac[2,2] * MatStm6.compMolEntr[2,2]
*/
void mixer3_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->localData[0]->realVars[72] /* MatStm6.phasMolEntr[2] variable */ = (data->localData[0]->realVars[48] /* MatStm6.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[36] /* MatStm6.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[49] /* MatStm6.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[37] /* MatStm6.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 380
type: SIMPLE_ASSIGN
MatStm6._phasMolSpHeat[1] = MatStm6.liqPhasMolFrac * MatStm6.phasMolSpHeat[2] + Mixer3.inVapPhasMolFrac[2] * MatStm6.phasMolSpHeat[3]
*/
void mixer3_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->localData[0]->realVars[74] /* MatStm6.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[65] /* MatStm6.liqPhasMolFrac variable */) * (data->localData[0]->realVars[75] /* MatStm6.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[277] /* Mixer3.inVapPhasMolFrac[2] variable */) * (data->localData[0]->realVars[76] /* MatStm6.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 381
type: SIMPLE_ASSIGN
MatStm6._compMolSpHeat[1,1] = MatStm6.compMolFrac[1,1] * MatStm6.phasMolSpHeat[1]
*/
void mixer3_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  data->localData[0]->realVars[52] /* MatStm6.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[46] /* MatStm6.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[74] /* MatStm6.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 382
type: SIMPLE_ASSIGN
MatStm6._compMolSpHeat[1,2] = MatStm6.compMolFrac[1,2] * MatStm6.phasMolSpHeat[1]
*/
void mixer3_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->localData[0]->realVars[53] /* MatStm6.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[47] /* MatStm6.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[74] /* MatStm6.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 383
type: SIMPLE_ASSIGN
MatStm6._phasMolEnth[1] = MatStm6.liqPhasMolFrac * MatStm6.phasMolEnth[2] + Mixer3.inVapPhasMolFrac[2] * MatStm6.phasMolEnth[3]
*/
void mixer3_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->localData[0]->realVars[68] /* MatStm6.phasMolEnth[1] variable */ = (data->localData[0]->realVars[65] /* MatStm6.liqPhasMolFrac variable */) * (data->localData[0]->realVars[69] /* MatStm6.phasMolEnth[2] variable */) + (data->localData[0]->realVars[277] /* Mixer3.inVapPhasMolFrac[2] variable */) * (data->localData[0]->realVars[70] /* MatStm6.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 384
type: SIMPLE_ASSIGN
MatStm6._compMolEnth[1,1] = MatStm6.compMolFrac[1,1] * MatStm6.phasMolEnth[1]
*/
void mixer3_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->localData[0]->realVars[28] /* MatStm6.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[46] /* MatStm6.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[68] /* MatStm6.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 385
type: SIMPLE_ASSIGN
MatStm6._compMolEnth[1,2] = MatStm6.compMolFrac[1,2] * MatStm6.phasMolEnth[1]
*/
void mixer3_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->localData[0]->realVars[29] /* MatStm6.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[47] /* MatStm6.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[68] /* MatStm6.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 386
type: SIMPLE_ASSIGN
MatStm8._phasMolEnth[1] = 0.5 * (MatStm7.phasMolEnth[1] + MatStm6.phasMolEnth[1])
*/
void mixer3_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->localData[0]->realVars[248] /* MatStm8.phasMolEnth[1] variable */ = (0.5) * (data->localData[0]->realVars[158] /* MatStm7.phasMolEnth[1] variable */ + data->localData[0]->realVars[68] /* MatStm6.phasMolEnth[1] variable */);
  TRACE_POP
}
void mixer3_eqFunction_387(DATA*, threadData_t*);
void mixer3_eqFunction_388(DATA*, threadData_t*);
void mixer3_eqFunction_389(DATA*, threadData_t*);
void mixer3_eqFunction_390(DATA*, threadData_t*);
void mixer3_eqFunction_391(DATA*, threadData_t*);
void mixer3_eqFunction_392(DATA*, threadData_t*);
void mixer3_eqFunction_393(DATA*, threadData_t*);
void mixer3_eqFunction_394(DATA*, threadData_t*);
void mixer3_eqFunction_395(DATA*, threadData_t*);
void mixer3_eqFunction_396(DATA*, threadData_t*);
void mixer3_eqFunction_397(DATA*, threadData_t*);
void mixer3_eqFunction_398(DATA*, threadData_t*);
void mixer3_eqFunction_399(DATA*, threadData_t*);
void mixer3_eqFunction_400(DATA*, threadData_t*);
void mixer3_eqFunction_401(DATA*, threadData_t*);
void mixer3_eqFunction_402(DATA*, threadData_t*);
void mixer3_eqFunction_403(DATA*, threadData_t*);
void mixer3_eqFunction_404(DATA*, threadData_t*);
void mixer3_eqFunction_405(DATA*, threadData_t*);
void mixer3_eqFunction_406(DATA*, threadData_t*);
void mixer3_eqFunction_407(DATA*, threadData_t*);
void mixer3_eqFunction_408(DATA*, threadData_t*);
void mixer3_eqFunction_409(DATA*, threadData_t*);
void mixer3_eqFunction_410(DATA*, threadData_t*);
void mixer3_eqFunction_416(DATA*, threadData_t*);
void mixer3_eqFunction_415(DATA*, threadData_t*);
void mixer3_eqFunction_414(DATA*, threadData_t*);
void mixer3_eqFunction_413(DATA*, threadData_t*);
void mixer3_eqFunction_412(DATA*, threadData_t*);
void mixer3_eqFunction_411(DATA*, threadData_t*);
/*
equation index: 417
indexNonlinear: 5
type: NONLINEAR

vars: {MatStm8._totMolFlo[3], MatStm8._T, MatStm8._compMolFrac[2,2], MatStm8._compMolFrac[3,2], MatStm8._compMolFrac[3,1], MatStm8._compMolFrac[2,1]}
eqns: {387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 416, 415, 414, 413, 412, 411}
*/
void mixer3_eqFunction_417(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = data->localData[0]->realVars[271] /* MatStm8.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[1] = data->localData[0]->realVars[195] /* MatStm8.T variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[2] = data->localData[0]->realVars[229] /* MatStm8.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[3] = data->localData[0]->realVars[231] /* MatStm8.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[4] = data->localData[0]->realVars[230] /* MatStm8.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[5] = data->localData[0]->realVars[228] /* MatStm8.compMolFrac[2,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,417};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 417 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[271] /* MatStm8.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  data->localData[0]->realVars[195] /* MatStm8.T variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[1];
  data->localData[0]->realVars[229] /* MatStm8.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[2];
  data->localData[0]->realVars[231] /* MatStm8.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[3];
  data->localData[0]->realVars[230] /* MatStm8.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[4];
  data->localData[0]->realVars[228] /* MatStm8.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[5];
  TRACE_POP
}
/*
equation index: 418
type: SIMPLE_ASSIGN
MatStm8._compMasFlo[2,1] = MatStm8.compMolFlo[2,1] * MatStm8.comp[1].MW
*/
void mixer3_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->localData[0]->realVars[198] /* MatStm8.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[222] /* MatStm8.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[479]);
  TRACE_POP
}
/*
equation index: 419
type: SIMPLE_ASSIGN
MatStm8._compMasFlo[3,1] = MatStm8.compMolFlo[3,1] * MatStm8.comp[1].MW
*/
void mixer3_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->localData[0]->realVars[200] /* MatStm8.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[224] /* MatStm8.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[479]);
  TRACE_POP
}
/*
equation index: 420
type: ALGORITHM

  MatStm8.MW[3] := $START.MatStm8.MW[3];
  MatStm8.MW[2] := $START.MatStm8.MW[2];
  MatStm8.MW[1] := $START.MatStm8.MW[1];
  for i in 1:2 loop
    MatStm8.MW[:] := {MatStm8.MW[1] + MatStm8.compMolFrac[1,i] * MatStm8.comp[i].MW, MatStm8.MW[2] + MatStm8.compMolFrac[2,i] * MatStm8.comp[i].MW, MatStm8.MW[3] + MatStm8.compMolFrac[3,i] * MatStm8.comp[i].MW};
  end for;
*/
void mixer3_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  data->localData[0]->realVars[189] /* MatStm8.MW[3] variable */ = data->modelData->realVarsData[189].attribute /* MatStm8.MW[3] variable */.start;

  data->localData[0]->realVars[188] /* MatStm8.MW[2] variable */ = data->modelData->realVarsData[188].attribute /* MatStm8.MW[2] variable */.start;

  data->localData[0]->realVars[187] /* MatStm8.MW[1] variable */ = data->modelData->realVarsData[187].attribute /* MatStm8.MW[1] variable */.start;

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 2);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp3, tmp5); $Pi += tmp4)
    {
      array_alloc_scalar_real_array(&tmp0, 3, (modelica_real)data->localData[0]->realVars[187] /* MatStm8.MW[1] variable */ + ((&data->localData[0]->realVars[226] /* MatStm8.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[188] /* MatStm8.MW[2] variable */ + ((&data->localData[0]->realVars[226] /* MatStm8.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[189] /* MatStm8.MW[3] variable */ + ((&data->localData[0]->realVars[226] /* MatStm8.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
      real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[187] /* MatStm8.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp0, &tmp2, &tmp1);
    }
  }
  TRACE_POP
}
/*
equation index: 421
type: SIMPLE_ASSIGN
MatStm8._totMasFlo[2] = MatStm8.totMolFlo[2] * MatStm8.MW[2]
*/
void mixer3_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->localData[0]->realVars[267] /* MatStm8.totMasFlo[2] variable */ = (data->localData[0]->realVars[270] /* MatStm8.totMolFlo[2] variable */) * (data->localData[0]->realVars[188] /* MatStm8.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 422
type: SIMPLE_ASSIGN
MatStm8._totMasFlo[1] = 200.0 * MatStm8.MW[1]
*/
void mixer3_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  data->localData[0]->realVars[266] /* MatStm8.totMasFlo[1] variable */ = (200.0) * (data->localData[0]->realVars[187] /* MatStm8.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 423
type: SIMPLE_ASSIGN
MatStm8._compMasFrac[1,2] = MatStm8.compMasFlo[1,2] / MatStm8.totMasFlo[1]
*/
void mixer3_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->localData[0]->realVars[203] /* MatStm8.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[197] /* MatStm8.compMasFlo[1,2] variable */,data->localData[0]->realVars[266] /* MatStm8.totMasFlo[1] variable */,"MatStm8.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 424
type: SIMPLE_ASSIGN
MatStm8._liqPhasMasFrac = MatStm8.totMasFlo[2] / MatStm8.totMasFlo[1]
*/
void mixer3_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->localData[0]->realVars[244] /* MatStm8.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[267] /* MatStm8.totMasFlo[2] variable */,data->localData[0]->realVars[266] /* MatStm8.totMasFlo[1] variable */,"MatStm8.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 425
type: SIMPLE_ASSIGN
MatStm8._compMasFlo[2,2] = MatStm8.compMolFlo[2,2] * MatStm8.comp[2].MW
*/
void mixer3_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->localData[0]->realVars[199] /* MatStm8.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[223] /* MatStm8.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[480]);
  TRACE_POP
}
/*
equation index: 426
type: SIMPLE_ASSIGN
MatStm8._compMasFlo[3,2] = MatStm8.compMolFlo[3,2] * MatStm8.comp[2].MW
*/
void mixer3_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  data->localData[0]->realVars[201] /* MatStm8.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[225] /* MatStm8.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[480]);
  TRACE_POP
}
/*
equation index: 427
type: SIMPLE_ASSIGN
MatStm8._totMasFlo[3] = MatStm8.totMolFlo[3] * MatStm8.MW[3]
*/
void mixer3_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->localData[0]->realVars[268] /* MatStm8.totMasFlo[3] variable */ = (data->localData[0]->realVars[271] /* MatStm8.totMolFlo[3] variable */) * (data->localData[0]->realVars[189] /* MatStm8.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 428
type: SIMPLE_ASSIGN
MatStm8._vapPhasMasFrac = MatStm8.totMasFlo[3] / MatStm8.totMasFlo[1]
*/
void mixer3_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->localData[0]->realVars[272] /* MatStm8.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[268] /* MatStm8.totMasFlo[3] variable */,data->localData[0]->realVars[266] /* MatStm8.totMasFlo[1] variable */,"MatStm8.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 429
type: LINEAR

<var>MatStm8._compMasFrac[2,2]</var>
<var>MatStm8._compMasFrac[3,2]</var>
<var>MatStm8._compMasFrac[1,1]</var>
<var>MatStm8._compMasFrac[2,1]</var>
<var>MatStm8._compMasFrac[3,1]</var>
<row>
  <cell>if 101325.0 >= MatStm8.Pbubl then MatStm8.compMasFlo[1,1] else if 101325.0 >= MatStm8.Pdew then MatStm8.compMasFlo[3,1] else MatStm8.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm8.Pbubl then 0.0 else if 101325.0 >= MatStm8.Pdew then MatStm8.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm8.Pbubl then 0.0 else if 101325.0 >= MatStm8.Pdew then MatStm8.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm8.Pbubl then 0.0 else if 101325.0 >= MatStm8.Pdew then MatStm8.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm8.Pbubl then -MatStm8.compMasFrac[1,2] else if 101325.0 >= MatStm8.Pdew then MatStm8.compMasFlo[3,2] else -MatStm8.compMasFrac[1,2]</cell>
</row>
<matrix>
  <cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm8.Pbubl then -MatStm8.totMasFlo[1] else if 101325.0 >= MatStm8.Pdew then -0.0 else -MatStm8.totMasFlo[1])</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm8.Pbubl then -0.0 else if 101325.0 >= MatStm8.Pdew then -MatStm8.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm8.Pbubl then 0.0 else if 101325.0 >= MatStm8.Pdew then -MatStm8.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm8.Pbubl then 0.0 else if 101325.0 >= MatStm8.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm8.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101325.0 >= MatStm8.Pbubl then 0.0 else if 101325.0 >= MatStm8.Pdew then -MatStm8.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm8.Pbubl then -1.0 else if 101325.0 >= MatStm8.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm8.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="4">
    <residual>-(if 101325.0 >= MatStm8.Pbubl then 0.0 else if 101325.0 >= MatStm8.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm8.Pbubl then 0.0 else if 101325.0 >= MatStm8.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm8.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101325.0 >= MatStm8.Pbubl then 0.0 else if 101325.0 >= MatStm8.Pdew then -MatStm8.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm8.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm8.Pbubl then 0.0 else if 101325.0 >= MatStm8.Pdew then -MatStm8.totMasFlo[3] else 1.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void mixer3_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[205] /* MatStm8.compMasFrac[2,2] variable */,data->localData[1]->realVars[207] /* MatStm8.compMasFrac[3,2] variable */,data->localData[1]->realVars[202] /* MatStm8.compMasFrac[1,1] variable */,data->localData[1]->realVars[204] /* MatStm8.compMasFrac[2,1] variable */,data->localData[1]->realVars[206] /* MatStm8.compMasFrac[3,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 429 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 5, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,429};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 429 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[205] /* MatStm8.compMasFrac[2,2] variable */ = aux_x[0];
  data->localData[0]->realVars[207] /* MatStm8.compMasFrac[3,2] variable */ = aux_x[1];
  data->localData[0]->realVars[202] /* MatStm8.compMasFrac[1,1] variable */ = aux_x[2];
  data->localData[0]->realVars[204] /* MatStm8.compMasFrac[2,1] variable */ = aux_x[3];
  data->localData[0]->realVars[206] /* MatStm8.compMasFrac[3,1] variable */ = aux_x[4];
  TRACE_POP
}
/*
equation index: 430
type: SIMPLE_ASSIGN
MatStm8._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm8.comp[2].VapCp[1], MatStm8.comp[2].VapCp[2], MatStm8.comp[2].VapCp[3], MatStm8.comp[2].VapCp[4], MatStm8.comp[2].VapCp[5], MatStm8.comp[2].VapCp[6]}, MatStm8.T)
*/
void mixer3_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  real_array tmp6;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  data->localData[0]->realVars[237] /* MatStm8.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp6, data->localData[0]->realVars[195] /* MatStm8.T variable */);
  TRACE_POP
}
/*
equation index: 431
type: SIMPLE_ASSIGN
MatStm8._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm8.comp[2].LiqCp[1], MatStm8.comp[2].LiqCp[2], MatStm8.comp[2].LiqCp[3], MatStm8.comp[2].LiqCp[4], MatStm8.comp[2].LiqCp[5], MatStm8.comp[2].LiqCp[6]}, MatStm8.T)
*/
void mixer3_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[437], (modelica_real)data->simulationInfo->realParameter[438], (modelica_real)data->simulationInfo->realParameter[439], (modelica_real)data->simulationInfo->realParameter[440], (modelica_real)data->simulationInfo->realParameter[441], (modelica_real)data->simulationInfo->realParameter[442]);
  data->localData[0]->realVars[235] /* MatStm8.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp7, data->localData[0]->realVars[195] /* MatStm8.T variable */);
  TRACE_POP
}
/*
equation index: 432
type: ALGORITHM

  (MatStm8.compMolEntr[2,1], MatStm8.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm8.comp[1].AS, {MatStm8.comp[1].VapCp[1], MatStm8.comp[1].VapCp[2], MatStm8.comp[1].VapCp[3], MatStm8.comp[1].VapCp[4], MatStm8.comp[1].VapCp[5], MatStm8.comp[1].VapCp[6]}, {MatStm8.comp[1].HOV[1], MatStm8.comp[1].HOV[2], MatStm8.comp[1].HOV[3], MatStm8.comp[1].HOV[4], MatStm8.comp[1].HOV[5], MatStm8.comp[1].HOV[6]}, MatStm8.comp[1].Tb, MatStm8.comp[1].Tc, MatStm8.T, 101325.0, MatStm8.compMolFrac[2,1], MatStm8.compMolFrac[3,1]);
*/
void mixer3_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420]);
  data->localData[0]->realVars[216] /* MatStm8.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[397], tmp8, tmp9, data->simulationInfo->realParameter[493], data->simulationInfo->realParameter[495], data->localData[0]->realVars[195] /* MatStm8.T variable */, 101325.0, data->localData[0]->realVars[228] /* MatStm8.compMolFrac[2,1] variable */, data->localData[0]->realVars[230] /* MatStm8.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[218] /* MatStm8.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 433
type: SIMPLE_ASSIGN
MatStm8._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm8.comp[1].VapCp[1], MatStm8.comp[1].VapCp[2], MatStm8.comp[1].VapCp[3], MatStm8.comp[1].VapCp[4], MatStm8.comp[1].VapCp[5], MatStm8.comp[1].VapCp[6]}, MatStm8.T)
*/
void mixer3_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  real_array tmp10;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  data->localData[0]->realVars[236] /* MatStm8.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp10, data->localData[0]->realVars[195] /* MatStm8.T variable */);
  TRACE_POP
}
/*
equation index: 434
type: SIMPLE_ASSIGN
MatStm8._phasMolSpHeat[3] = MatStm8.compMolFrac[3,1] * MatStm8.compMolSpHeat[3,1] + MatStm8.compMolFrac[3,2] * MatStm8.compMolSpHeat[3,2]
*/
void mixer3_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  data->localData[0]->realVars[256] /* MatStm8.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[230] /* MatStm8.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[236] /* MatStm8.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[231] /* MatStm8.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[237] /* MatStm8.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 435
type: SIMPLE_ASSIGN
MatStm8._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm8.comp[1].LiqCp[1], MatStm8.comp[1].LiqCp[2], MatStm8.comp[1].LiqCp[3], MatStm8.comp[1].LiqCp[4], MatStm8.comp[1].LiqCp[5], MatStm8.comp[1].LiqCp[6]}, MatStm8.T)
*/
void mixer3_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[431], (modelica_real)data->simulationInfo->realParameter[432], (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434], (modelica_real)data->simulationInfo->realParameter[435], (modelica_real)data->simulationInfo->realParameter[436]);
  data->localData[0]->realVars[234] /* MatStm8.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp11, data->localData[0]->realVars[195] /* MatStm8.T variable */);
  TRACE_POP
}
/*
equation index: 436
type: SIMPLE_ASSIGN
MatStm8._phasMolSpHeat[2] = MatStm8.compMolFrac[2,1] * MatStm8.compMolSpHeat[2,1] + MatStm8.compMolFrac[2,2] * MatStm8.compMolSpHeat[2,2]
*/
void mixer3_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  data->localData[0]->realVars[255] /* MatStm8.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[228] /* MatStm8.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[234] /* MatStm8.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[229] /* MatStm8.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[235] /* MatStm8.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 437
type: SIMPLE_ASSIGN
MatStm8._phasMolSpHeat[1] = MatStm8.liqPhasMolFrac * MatStm8.phasMolSpHeat[2] + MatStm8.vapPhasMolFrac * MatStm8.phasMolSpHeat[3]
*/
void mixer3_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  data->localData[0]->realVars[254] /* MatStm8.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[245] /* MatStm8.liqPhasMolFrac variable */) * (data->localData[0]->realVars[255] /* MatStm8.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[273] /* MatStm8.vapPhasMolFrac variable */) * (data->localData[0]->realVars[256] /* MatStm8.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 438
type: SIMPLE_ASSIGN
MatStm8._compMolSpHeat[1,1] = MatStm8.compMolFrac[1,1] * MatStm8.phasMolSpHeat[1]
*/
void mixer3_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  data->localData[0]->realVars[232] /* MatStm8.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[226] /* MatStm8.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[254] /* MatStm8.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 439
type: SIMPLE_ASSIGN
MatStm8._compMolSpHeat[1,2] = MatStm8.compMolFrac[1,2] * MatStm8.phasMolSpHeat[1]
*/
void mixer3_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  data->localData[0]->realVars[233] /* MatStm8.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[227] /* MatStm8.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[254] /* MatStm8.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 440
type: ALGORITHM

  (MatStm8.compMolEntr[2,2], MatStm8.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm8.comp[2].AS, {MatStm8.comp[2].VapCp[1], MatStm8.comp[2].VapCp[2], MatStm8.comp[2].VapCp[3], MatStm8.comp[2].VapCp[4], MatStm8.comp[2].VapCp[5], MatStm8.comp[2].VapCp[6]}, {MatStm8.comp[2].HOV[1], MatStm8.comp[2].HOV[2], MatStm8.comp[2].HOV[3], MatStm8.comp[2].HOV[4], MatStm8.comp[2].HOV[5], MatStm8.comp[2].HOV[6]}, MatStm8.comp[2].Tb, MatStm8.comp[2].Tc, MatStm8.T, 101325.0, MatStm8.compMolFrac[2,2], MatStm8.compMolFrac[3,2]);
*/
void mixer3_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  real_array tmp12;
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426]);
  data->localData[0]->realVars[217] /* MatStm8.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[398], tmp12, tmp13, data->simulationInfo->realParameter[494], data->simulationInfo->realParameter[496], data->localData[0]->realVars[195] /* MatStm8.T variable */, 101325.0, data->localData[0]->realVars[229] /* MatStm8.compMolFrac[2,2] variable */, data->localData[0]->realVars[231] /* MatStm8.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[219] /* MatStm8.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 441
type: SIMPLE_ASSIGN
MatStm8._phasMolEntr[3] = MatStm8.compMolFrac[3,1] * MatStm8.compMolEntr[3,1] + MatStm8.compMolFrac[3,2] * MatStm8.compMolEntr[3,2]
*/
void mixer3_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  data->localData[0]->realVars[253] /* MatStm8.phasMolEntr[3] variable */ = (data->localData[0]->realVars[230] /* MatStm8.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[218] /* MatStm8.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[231] /* MatStm8.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[219] /* MatStm8.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 442
type: SIMPLE_ASSIGN
MatStm8._phasMolEntr[2] = MatStm8.compMolFrac[2,1] * MatStm8.compMolEntr[2,1] + MatStm8.compMolFrac[2,2] * MatStm8.compMolEntr[2,2]
*/
void mixer3_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  data->localData[0]->realVars[252] /* MatStm8.phasMolEntr[2] variable */ = (data->localData[0]->realVars[228] /* MatStm8.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[216] /* MatStm8.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[229] /* MatStm8.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[217] /* MatStm8.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 443
type: SIMPLE_ASSIGN
MatStm8._phasMolEntr[1] = MatStm8.liqPhasMolFrac * MatStm8.phasMolEntr[2] + MatStm8.vapPhasMolFrac * MatStm8.phasMolEntr[3]
*/
void mixer3_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  data->localData[0]->realVars[251] /* MatStm8.phasMolEntr[1] variable */ = (data->localData[0]->realVars[245] /* MatStm8.liqPhasMolFrac variable */) * (data->localData[0]->realVars[252] /* MatStm8.phasMolEntr[2] variable */) + (data->localData[0]->realVars[273] /* MatStm8.vapPhasMolFrac variable */) * (data->localData[0]->realVars[253] /* MatStm8.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 444
type: SIMPLE_ASSIGN
MatStm8._compMolEntr[1,1] = MatStm8.compMolFrac[1,1] * MatStm8.phasMolEntr[1]
*/
void mixer3_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  data->localData[0]->realVars[214] /* MatStm8.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[226] /* MatStm8.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[251] /* MatStm8.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 445
type: SIMPLE_ASSIGN
MatStm8._compMolEntr[1,2] = MatStm8.compMolFrac[1,2] * MatStm8.phasMolEntr[1]
*/
void mixer3_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  data->localData[0]->realVars[215] /* MatStm8.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[227] /* MatStm8.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[251] /* MatStm8.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 446
type: SIMPLE_ASSIGN
MatStm8._compMolEnth[1,1] = MatStm8.compMolFrac[1,1] * MatStm8.phasMolEnth[1]
*/
void mixer3_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  data->localData[0]->realVars[208] /* MatStm8.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[226] /* MatStm8.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[248] /* MatStm8.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 447
type: SIMPLE_ASSIGN
MatStm8._compMolEnth[1,2] = MatStm8.compMolFrac[1,2] * MatStm8.phasMolEnth[1]
*/
void mixer3_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  data->localData[0]->realVars[209] /* MatStm8.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[227] /* MatStm8.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[248] /* MatStm8.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 448
type: SIMPLE_ASSIGN
MatStm6._phasMolEntr[1] = MatStm6.liqPhasMolFrac * MatStm6.phasMolEntr[2] + Mixer3.inVapPhasMolFrac[2] * MatStm6.phasMolEntr[3]
*/
void mixer3_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  data->localData[0]->realVars[71] /* MatStm6.phasMolEntr[1] variable */ = (data->localData[0]->realVars[65] /* MatStm6.liqPhasMolFrac variable */) * (data->localData[0]->realVars[72] /* MatStm6.phasMolEntr[2] variable */) + (data->localData[0]->realVars[277] /* Mixer3.inVapPhasMolFrac[2] variable */) * (data->localData[0]->realVars[73] /* MatStm6.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 449
type: SIMPLE_ASSIGN
MatStm6._compMolEntr[1,1] = MatStm6.compMolFrac[1,1] * MatStm6.phasMolEntr[1]
*/
void mixer3_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  data->localData[0]->realVars[34] /* MatStm6.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[46] /* MatStm6.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[71] /* MatStm6.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 450
type: SIMPLE_ASSIGN
MatStm6._compMolEntr[1,2] = MatStm6.compMolFrac[1,2] * MatStm6.phasMolEntr[1]
*/
void mixer3_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  data->localData[0]->realVars[35] /* MatStm6.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[47] /* MatStm6.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[71] /* MatStm6.phasMolEntr[1] variable */);
  TRACE_POP
}

OMC_DISABLE_OPT
int mixer3_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  
  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  mixer3_functionLocalKnownVars(data, threadData);
  mixer3_eqFunction_277(data, threadData);

  mixer3_eqFunction_278(data, threadData);

  mixer3_eqFunction_279(data, threadData);

  mixer3_eqFunction_280(data, threadData);

  mixer3_eqFunction_305(data, threadData);

  mixer3_eqFunction_306(data, threadData);

  mixer3_eqFunction_307(data, threadData);

  mixer3_eqFunction_308(data, threadData);

  mixer3_eqFunction_309(data, threadData);

  mixer3_eqFunction_310(data, threadData);

  mixer3_eqFunction_311(data, threadData);

  mixer3_eqFunction_312(data, threadData);

  mixer3_eqFunction_313(data, threadData);

  mixer3_eqFunction_314(data, threadData);

  mixer3_eqFunction_315(data, threadData);

  mixer3_eqFunction_316(data, threadData);

  mixer3_eqFunction_317(data, threadData);

  mixer3_eqFunction_318(data, threadData);

  mixer3_eqFunction_319(data, threadData);

  mixer3_eqFunction_320(data, threadData);

  mixer3_eqFunction_321(data, threadData);

  mixer3_eqFunction_322(data, threadData);

  mixer3_eqFunction_323(data, threadData);

  mixer3_eqFunction_324(data, threadData);

  mixer3_eqFunction_325(data, threadData);

  mixer3_eqFunction_326(data, threadData);

  mixer3_eqFunction_327(data, threadData);

  mixer3_eqFunction_328(data, threadData);

  mixer3_eqFunction_329(data, threadData);

  mixer3_eqFunction_330(data, threadData);

  mixer3_eqFunction_331(data, threadData);

  mixer3_eqFunction_332(data, threadData);

  mixer3_eqFunction_333(data, threadData);

  mixer3_eqFunction_334(data, threadData);

  mixer3_eqFunction_359(data, threadData);

  mixer3_eqFunction_360(data, threadData);

  mixer3_eqFunction_361(data, threadData);

  mixer3_eqFunction_362(data, threadData);

  mixer3_eqFunction_363(data, threadData);

  mixer3_eqFunction_364(data, threadData);

  mixer3_eqFunction_365(data, threadData);

  mixer3_eqFunction_366(data, threadData);

  mixer3_eqFunction_367(data, threadData);

  mixer3_eqFunction_368(data, threadData);

  mixer3_eqFunction_369(data, threadData);

  mixer3_eqFunction_370(data, threadData);

  mixer3_eqFunction_371(data, threadData);

  mixer3_eqFunction_372(data, threadData);

  mixer3_eqFunction_373(data, threadData);

  mixer3_eqFunction_374(data, threadData);

  mixer3_eqFunction_375(data, threadData);

  mixer3_eqFunction_376(data, threadData);

  mixer3_eqFunction_377(data, threadData);

  mixer3_eqFunction_378(data, threadData);

  mixer3_eqFunction_379(data, threadData);

  mixer3_eqFunction_380(data, threadData);

  mixer3_eqFunction_381(data, threadData);

  mixer3_eqFunction_382(data, threadData);

  mixer3_eqFunction_383(data, threadData);

  mixer3_eqFunction_384(data, threadData);

  mixer3_eqFunction_385(data, threadData);

  mixer3_eqFunction_386(data, threadData);

  mixer3_eqFunction_417(data, threadData);

  mixer3_eqFunction_418(data, threadData);

  mixer3_eqFunction_419(data, threadData);

  mixer3_eqFunction_420(data, threadData);

  mixer3_eqFunction_421(data, threadData);

  mixer3_eqFunction_422(data, threadData);

  mixer3_eqFunction_423(data, threadData);

  mixer3_eqFunction_424(data, threadData);

  mixer3_eqFunction_425(data, threadData);

  mixer3_eqFunction_426(data, threadData);

  mixer3_eqFunction_427(data, threadData);

  mixer3_eqFunction_428(data, threadData);

  mixer3_eqFunction_429(data, threadData);

  mixer3_eqFunction_430(data, threadData);

  mixer3_eqFunction_431(data, threadData);

  mixer3_eqFunction_432(data, threadData);

  mixer3_eqFunction_433(data, threadData);

  mixer3_eqFunction_434(data, threadData);

  mixer3_eqFunction_435(data, threadData);

  mixer3_eqFunction_436(data, threadData);

  mixer3_eqFunction_437(data, threadData);

  mixer3_eqFunction_438(data, threadData);

  mixer3_eqFunction_439(data, threadData);

  mixer3_eqFunction_440(data, threadData);

  mixer3_eqFunction_441(data, threadData);

  mixer3_eqFunction_442(data, threadData);

  mixer3_eqFunction_443(data, threadData);

  mixer3_eqFunction_444(data, threadData);

  mixer3_eqFunction_445(data, threadData);

  mixer3_eqFunction_446(data, threadData);

  mixer3_eqFunction_447(data, threadData);

  mixer3_eqFunction_448(data, threadData);

  mixer3_eqFunction_449(data, threadData);

  mixer3_eqFunction_450(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int mixer3_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int mixer3_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  data->simulationInfo->callStatistics.functionODE++;
  
  mixer3_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

  
  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "mixer3_12jac.h"
#include "mixer3_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks mixer3_callback = {
   (int (*)(DATA *, threadData_t *, void *)) mixer3_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) mixer3_performQSSSimulation,
   mixer3_updateContinuousSystem,
   mixer3_callExternalObjectDestructors,
   mixer3_initialNonLinearSystem,
   mixer3_initialLinearSystem,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   mixer3_initializeStateSets,
   #else
   NULL,
   #endif
   mixer3_initializeDAEmodeData,
   mixer3_functionODE,
   mixer3_functionAlgebraics,
   mixer3_functionDAE,
   mixer3_functionLocalKnownVars,
   mixer3_input_function,
   mixer3_input_function_init,
   mixer3_input_function_updateStartValues,
   mixer3_output_function,
   mixer3_function_storeDelayed,
   mixer3_updateBoundVariableAttributes,
   mixer3_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   mixer3_functionInitialEquations_lambda0,
   mixer3_functionRemovedInitialEquations,
   mixer3_updateBoundParameters,
   mixer3_checkForAsserts,
   mixer3_function_ZeroCrossingsEquations,
   mixer3_function_ZeroCrossings,
   mixer3_function_updateRelations,
   mixer3_zeroCrossingDescription,
   mixer3_relationDescription,
   mixer3_function_initSample,
   mixer3_INDEX_JAC_A,
   mixer3_INDEX_JAC_B,
   mixer3_INDEX_JAC_C,
   mixer3_INDEX_JAC_D,
   mixer3_initialAnalyticJacobianA,
   mixer3_initialAnalyticJacobianB,
   mixer3_initialAnalyticJacobianC,
   mixer3_initialAnalyticJacobianD,
   mixer3_functionJacA_column,
   mixer3_functionJacB_column,
   mixer3_functionJacC_column,
   mixer3_functionJacD_column,
   mixer3_linear_model_frame,
   mixer3_linear_model_datarecovery_frame,
   mixer3_mayer,
   mixer3_lagrange,
   mixer3_pickUpBoundsForInputsInOptimization,
   mixer3_setInputData,
   mixer3_getTimeGrid,
   mixer3_symbolicInlineSystem,
   mixer3_function_initSynchronous,
   mixer3_function_updateSynchronous,
   mixer3_function_equationsSynchronous,
   mixer3_inputNames,
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

#define _OMC_LIT_RESOURCE_4_name_data "mixer3"
#define _OMC_LIT_RESOURCE_4_dir_data "C:/OMChemSimGUI/Simulator"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,6,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,25,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void mixer3_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &mixer3_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "mixer3";
  data->modelData->modelFilePrefix = "mixer3";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/OMChemSimGUI/Simulator";
  data->modelData->modelGUID = "{c69d9e85-5d10-474a-8beb-d21a76a74746}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "mixer3_init.c"
    ;
  static const char contents_info[] =
    #include "mixer3_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "mixer3_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "mixer3_info.c"
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
  data->modelData->modelDataXml.fileName = "mixer3_info.json";
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
  
    mixer3_setupDataStruc(&data, threadData);
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


