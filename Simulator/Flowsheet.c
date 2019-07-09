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
equation index: 472
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,2] = 200.0 * MatStm1.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  data->localData[0]->realVars[47] /* MatStm1.compMolFlo[1,2] variable */ = (200.0) * (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[1,2] variable */);
  TRACE_POP
}
/*
equation index: 473
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,2] = MatStm1.compMolFlo[1,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->localData[0]->realVars[23] /* MatStm1.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[47] /* MatStm1.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[164]);
  TRACE_POP
}
/*
equation index: 474
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,1] = 200.0 * MatStm1.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->localData[0]->realVars[46] /* MatStm1.compMolFlo[1,1] variable */ = (200.0) * (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */);
  TRACE_POP
}
/*
equation index: 475
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,1] = MatStm1.compMolFlo[1,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[46] /* MatStm1.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[163]);
  TRACE_POP
}
void Flowsheet_eqFunction_476(DATA*, threadData_t*);
void Flowsheet_eqFunction_477(DATA*, threadData_t*);
void Flowsheet_eqFunction_478(DATA*, threadData_t*);
void Flowsheet_eqFunction_479(DATA*, threadData_t*);
void Flowsheet_eqFunction_480(DATA*, threadData_t*);
void Flowsheet_eqFunction_481(DATA*, threadData_t*);
void Flowsheet_eqFunction_482(DATA*, threadData_t*);
void Flowsheet_eqFunction_487(DATA*, threadData_t*);
void Flowsheet_eqFunction_486(DATA*, threadData_t*);
void Flowsheet_eqFunction_485(DATA*, threadData_t*);
void Flowsheet_eqFunction_484(DATA*, threadData_t*);
void Flowsheet_eqFunction_483(DATA*, threadData_t*);
/*
equation index: 500
indexNonlinear: 5
type: NONLINEAR

vars: {MatStm2._totMolFlo[2], MatStm2._compMolFrac[2,2], MatStm2._compMolFrac[3,2], MatStm2._compMolFrac[3,1], MatStm2._compMolFrac[2,1]}
eqns: {476, 477, 478, 479, 480, 481, 482, 487, 486, 485, 484, 483}
*/
void Flowsheet_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 500 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[1] = data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[2] = data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[3] = data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[4] = data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,500};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 500 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[1];
  data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[2];
  data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[3];
  data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[4];
  TRACE_POP
}
/*
equation index: 501
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[3,1] = MatStm2.compMolFlo[3,1] * MatStm2.comp[1].MW
*/
void Flowsheet_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  data->localData[0]->realVars[117] /* MatStm2.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[321]);
  TRACE_POP
}
/*
equation index: 502
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[2,1] = MatStm2.compMolFlo[2,1] * MatStm2.comp[1].MW
*/
void Flowsheet_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  data->localData[0]->realVars[115] /* MatStm2.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[139] /* MatStm2.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[321]);
  TRACE_POP
}
/*
equation index: 503
type: ALGORITHM

  (MatStm2.compMolEntr[2,1], MatStm2.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[1].AS, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tb, MatStm2.comp[1].Tc, 310.0, 101325.0, MatStm2.compMolFrac[2,1], MatStm2.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358], (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[257], (modelica_real)data->simulationInfo->realParameter[258], (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262]);
  data->localData[0]->realVars[133] /* MatStm2.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[239], tmp0, tmp1, data->simulationInfo->realParameter[335], data->simulationInfo->realParameter[337], 310.0, 101325.0, data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */, data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[135] /* MatStm2.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 504
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[2,2] = MatStm2.compMolFlo[2,2] * MatStm2.comp[2].MW
*/
void Flowsheet_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->localData[0]->realVars[116] /* MatStm2.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[140] /* MatStm2.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[322]);
  TRACE_POP
}
/*
equation index: 505
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[3,2] = MatStm2.compMolFlo[3,2] * MatStm2.comp[2].MW
*/
void Flowsheet_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  data->localData[0]->realVars[118] /* MatStm2.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[142] /* MatStm2.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[322]);
  TRACE_POP
}
/*
equation index: 506
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolSpHeat[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolSpHeat[3,2]
*/
void Flowsheet_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->localData[0]->realVars[173] /* MatStm2.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[153] /* MatStm2.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[154] /* MatStm2.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 507
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolEnth[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolEnth[3,2]
*/
void Flowsheet_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->localData[0]->realVars[167] /* MatStm2.phasMolEnth[3] variable */ = (data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[129] /* MatStm2.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[130] /* MatStm2.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 508
type: ALGORITHM

  (MatStm2.compMolEntr[2,2], MatStm2.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[2].AS, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tb, MatStm2.comp[2].Tc, 310.0, 101325.0, MatStm2.compMolFrac[2,2], MatStm2.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364], (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264], (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268]);
  data->localData[0]->realVars[134] /* MatStm2.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[240], tmp2, tmp3, data->simulationInfo->realParameter[336], data->simulationInfo->realParameter[338], 310.0, 101325.0, data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */, data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[136] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 509
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolEntr[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolEntr[3,2]
*/
void Flowsheet_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->localData[0]->realVars[170] /* MatStm2.phasMolEntr[3] variable */ = (data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[135] /* MatStm2.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[136] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 510
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolSpHeat[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolSpHeat[2,2]
*/
void Flowsheet_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->localData[0]->realVars[172] /* MatStm2.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[151] /* MatStm2.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[152] /* MatStm2.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 511
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolEnth[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolEnth[2,2]
*/
void Flowsheet_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  data->localData[0]->realVars[166] /* MatStm2.phasMolEnth[2] variable */ = (data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[127] /* MatStm2.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[128] /* MatStm2.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 512
type: ALGORITHM

  MatStm2.MW[3] := $START.MatStm2.MW[3];
  MatStm2.MW[2] := $START.MatStm2.MW[2];
  MatStm2.MW[1] := $START.MatStm2.MW[1];
  for i in 1:2 loop
    MatStm2.MW[:] := {MatStm2.MW[1] + MatStm2.compMolFrac[1,i] * MatStm2.comp[i].MW, MatStm2.MW[2] + MatStm2.compMolFrac[2,i] * MatStm2.comp[i].MW, MatStm2.MW[3] + MatStm2.compMolFrac[3,i] * MatStm2.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[106] /* MatStm2.MW[3] variable */ = data->modelData->realVarsData[106].attribute /* MatStm2.MW[3] variable */.start;

  data->localData[0]->realVars[105] /* MatStm2.MW[2] variable */ = data->modelData->realVarsData[105].attribute /* MatStm2.MW[2] variable */.start;

  data->localData[0]->realVars[104] /* MatStm2.MW[1] variable */ = data->modelData->realVarsData[104].attribute /* MatStm2.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[104] /* MatStm2.MW[1] variable */ + ((&data->localData[0]->realVars[143] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[105] /* MatStm2.MW[2] variable */ + ((&data->localData[0]->realVars[143] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[106] /* MatStm2.MW[3] variable */ + ((&data->localData[0]->realVars[143] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[104] /* MatStm2.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
/*
equation index: 513
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[1] = 100.0 * MatStm2.MW[1]
*/
void Flowsheet_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->localData[0]->realVars[183] /* MatStm2.totMasFlo[1] variable */ = (100.0) * (data->localData[0]->realVars[104] /* MatStm2.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 514
type: SIMPLE_ASSIGN
MatStm2._compMasFrac[1,2] = MatStm2.compMasFlo[1,2] / MatStm2.totMasFlo[1]
*/
void Flowsheet_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  data->localData[0]->realVars[120] /* MatStm2.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[114] /* MatStm2.compMasFlo[1,2] variable */,data->localData[0]->realVars[183] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 515
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[3] = MatStm2.totMolFlo[3] * MatStm2.MW[3]
*/
void Flowsheet_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  data->localData[0]->realVars[185] /* MatStm2.totMasFlo[3] variable */ = (data->localData[0]->realVars[188] /* MatStm2.totMolFlo[3] variable */) * (data->localData[0]->realVars[106] /* MatStm2.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 516
type: SIMPLE_ASSIGN
MatStm2._vapPhasMasFrac = MatStm2.totMasFlo[3] / MatStm2.totMasFlo[1]
*/
void Flowsheet_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->localData[0]->realVars[189] /* MatStm2.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[185] /* MatStm2.totMasFlo[3] variable */,data->localData[0]->realVars[183] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 517
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolEntr[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolEntr[2,2]
*/
void Flowsheet_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->localData[0]->realVars[169] /* MatStm2.phasMolEntr[2] variable */ = (data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[133] /* MatStm2.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[134] /* MatStm2.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 518
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[2] = MatStm2.totMolFlo[2] * MatStm2.MW[2]
*/
void Flowsheet_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  data->localData[0]->realVars[184] /* MatStm2.totMasFlo[2] variable */ = (data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */) * (data->localData[0]->realVars[105] /* MatStm2.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 519
type: LINEAR

<var>MatStm2._compMasFrac[1,1]</var>
<var>MatStm2._compMasFrac[3,1]</var>
<var>MatStm2._compMasFrac[2,1]</var>
<var>MatStm2._compMasFrac[3,2]</var>
<var>MatStm2._compMasFrac[2,2]</var>
<row>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then -MatStm2.compMasFrac[1,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,2] else -MatStm2.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,1] else MatStm2.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="0" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
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
void Flowsheet_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[119] /* MatStm2.compMasFrac[1,1] variable */,data->localData[1]->realVars[123] /* MatStm2.compMasFrac[3,1] variable */,data->localData[1]->realVars[121] /* MatStm2.compMasFrac[2,1] variable */,data->localData[1]->realVars[124] /* MatStm2.compMasFrac[3,2] variable */,data->localData[1]->realVars[122] /* MatStm2.compMasFrac[2,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 519 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 5, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,519};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 519 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[119] /* MatStm2.compMasFrac[1,1] variable */ = aux_x[0];
  data->localData[0]->realVars[123] /* MatStm2.compMasFrac[3,1] variable */ = aux_x[1];
  data->localData[0]->realVars[121] /* MatStm2.compMasFrac[2,1] variable */ = aux_x[2];
  data->localData[0]->realVars[124] /* MatStm2.compMasFrac[3,2] variable */ = aux_x[3];
  data->localData[0]->realVars[122] /* MatStm2.compMasFrac[2,2] variable */ = aux_x[4];
  TRACE_POP
}
/*
equation index: 520
type: SIMPLE_ASSIGN
MatStm2._liqPhasMasFrac = MatStm2.totMasFlo[2] / MatStm2.totMasFlo[1]
*/
void Flowsheet_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  data->localData[0]->realVars[161] /* MatStm2.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[184] /* MatStm2.totMasFlo[2] variable */,data->localData[0]->realVars[183] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 521
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolSpHeat[2] + Mixer1.inVapPhasMolFrac[2] * MatStm2.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  data->localData[0]->realVars[171] /* MatStm2.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[162] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[172] /* MatStm2.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */) * (data->localData[0]->realVars[173] /* MatStm2.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 522
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->localData[0]->realVars[149] /* MatStm2.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[171] /* MatStm2.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 523
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[1,2] = MatStm2.compMolFrac[1,2] * MatStm2.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  data->localData[0]->realVars[150] /* MatStm2.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[144] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[171] /* MatStm2.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 524
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolEnth[2] + Mixer1.inVapPhasMolFrac[2] * MatStm2.phasMolEnth[3]
*/
void Flowsheet_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  data->localData[0]->realVars[165] /* MatStm2.phasMolEnth[1] variable */ = (data->localData[0]->realVars[162] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[166] /* MatStm2.phasMolEnth[2] variable */) + (data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */) * (data->localData[0]->realVars[167] /* MatStm2.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 525
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolEnth[1]
*/
void Flowsheet_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->localData[0]->realVars[125] /* MatStm2.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[165] /* MatStm2.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 526
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[1,2] = MatStm2.compMolFrac[1,2] * MatStm2.phasMolEnth[1]
*/
void Flowsheet_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->localData[0]->realVars[126] /* MatStm2.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[144] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[165] /* MatStm2.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 527
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolEntr[2] + Mixer1.inVapPhasMolFrac[2] * MatStm2.phasMolEntr[3]
*/
void Flowsheet_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->localData[0]->realVars[168] /* MatStm2.phasMolEntr[1] variable */ = (data->localData[0]->realVars[162] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[169] /* MatStm2.phasMolEntr[2] variable */) + (data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */) * (data->localData[0]->realVars[170] /* MatStm2.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 528
type: SIMPLE_ASSIGN
MatStm2._compMolEntr[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolEntr[1]
*/
void Flowsheet_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->localData[0]->realVars[131] /* MatStm2.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[168] /* MatStm2.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 529
type: SIMPLE_ASSIGN
MatStm2._compMolEntr[1,2] = MatStm2.compMolFrac[1,2] * MatStm2.phasMolEntr[1]
*/
void Flowsheet_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  data->localData[0]->realVars[132] /* MatStm2.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[144] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[168] /* MatStm2.phasMolEntr[1] variable */);
  TRACE_POP
}
void Flowsheet_eqFunction_530(DATA*, threadData_t*);
void Flowsheet_eqFunction_531(DATA*, threadData_t*);
void Flowsheet_eqFunction_532(DATA*, threadData_t*);
void Flowsheet_eqFunction_533(DATA*, threadData_t*);
void Flowsheet_eqFunction_534(DATA*, threadData_t*);
void Flowsheet_eqFunction_535(DATA*, threadData_t*);
void Flowsheet_eqFunction_536(DATA*, threadData_t*);
void Flowsheet_eqFunction_541(DATA*, threadData_t*);
void Flowsheet_eqFunction_540(DATA*, threadData_t*);
void Flowsheet_eqFunction_539(DATA*, threadData_t*);
void Flowsheet_eqFunction_538(DATA*, threadData_t*);
void Flowsheet_eqFunction_537(DATA*, threadData_t*);
/*
equation index: 554
indexNonlinear: 6
type: NONLINEAR

vars: {MatStm3._totMolFlo[2], MatStm3._compMolFrac[2,2], MatStm3._compMolFrac[3,2], MatStm3._compMolFrac[3,1], MatStm3._compMolFrac[2,1]}
eqns: {530, 531, 532, 533, 534, 535, 536, 541, 540, 539, 538, 537}
*/
void Flowsheet_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 554 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[0] = data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[1] = data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[2] = data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[3] = data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[4] = data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 6);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,554};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 554 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[0];
  data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[1];
  data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[2];
  data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[3];
  data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[4];
  TRACE_POP
}
/*
equation index: 555
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[2,1] = MatStm3.compMolFlo[2,1] * MatStm3.comp[1].MW
*/
void Flowsheet_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  data->localData[0]->realVars[205] /* MatStm3.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[229] /* MatStm3.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[479]);
  TRACE_POP
}
/*
equation index: 556
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[3,1] = MatStm3.compMolFlo[3,1] * MatStm3.comp[1].MW
*/
void Flowsheet_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->localData[0]->realVars[207] /* MatStm3.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[231] /* MatStm3.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[479]);
  TRACE_POP
}
/*
equation index: 557
type: ALGORITHM

  (MatStm3.compMolEntr[2,1], MatStm3.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[1].AS, {MatStm3.comp[1].VapCp[1], MatStm3.comp[1].VapCp[2], MatStm3.comp[1].VapCp[3], MatStm3.comp[1].VapCp[4], MatStm3.comp[1].VapCp[5], MatStm3.comp[1].VapCp[6]}, {MatStm3.comp[1].HOV[1], MatStm3.comp[1].HOV[2], MatStm3.comp[1].HOV[3], MatStm3.comp[1].HOV[4], MatStm3.comp[1].HOV[5], MatStm3.comp[1].HOV[6]}, MatStm3.comp[1].Tb, MatStm3.comp[1].Tc, 310.0, 101325.0, MatStm3.compMolFrac[2,1], MatStm3.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[515], (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420]);
  data->localData[0]->realVars[223] /* MatStm3.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[397], tmp0, tmp1, data->simulationInfo->realParameter[493], data->simulationInfo->realParameter[495], 310.0, 101325.0, data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */, data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[225] /* MatStm3.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 558
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[2,2] = MatStm3.compMolFlo[2,2] * MatStm3.comp[2].MW
*/
void Flowsheet_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  data->localData[0]->realVars[206] /* MatStm3.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[230] /* MatStm3.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[480]);
  TRACE_POP
}
/*
equation index: 559
type: SIMPLE_ASSIGN
MatStm3._compMasFlo[3,2] = MatStm3.compMolFlo[3,2] * MatStm3.comp[2].MW
*/
void Flowsheet_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  data->localData[0]->realVars[208] /* MatStm3.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[232] /* MatStm3.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[480]);
  TRACE_POP
}
/*
equation index: 560
type: SIMPLE_ASSIGN
MatStm3._phasMolSpHeat[3] = MatStm3.compMolFrac[3,1] * MatStm3.compMolSpHeat[3,1] + MatStm3.compMolFrac[3,2] * MatStm3.compMolSpHeat[3,2]
*/
void Flowsheet_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  data->localData[0]->realVars[263] /* MatStm3.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[243] /* MatStm3.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[244] /* MatStm3.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 561
type: SIMPLE_ASSIGN
MatStm3._phasMolEnth[3] = MatStm3.compMolFrac[3,1] * MatStm3.compMolEnth[3,1] + MatStm3.compMolFrac[3,2] * MatStm3.compMolEnth[3,2]
*/
void Flowsheet_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  data->localData[0]->realVars[257] /* MatStm3.phasMolEnth[3] variable */ = (data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[219] /* MatStm3.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[220] /* MatStm3.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 562
type: ALGORITHM

  (MatStm3.compMolEntr[2,2], MatStm3.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm3.comp[2].AS, {MatStm3.comp[2].VapCp[1], MatStm3.comp[2].VapCp[2], MatStm3.comp[2].VapCp[3], MatStm3.comp[2].VapCp[4], MatStm3.comp[2].VapCp[5], MatStm3.comp[2].VapCp[6]}, {MatStm3.comp[2].HOV[1], MatStm3.comp[2].HOV[2], MatStm3.comp[2].HOV[3], MatStm3.comp[2].HOV[4], MatStm3.comp[2].HOV[5], MatStm3.comp[2].HOV[6]}, MatStm3.comp[2].Tb, MatStm3.comp[2].Tc, 310.0, 101325.0, MatStm3.compMolFrac[2,2], MatStm3.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[521], (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426]);
  data->localData[0]->realVars[224] /* MatStm3.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[398], tmp2, tmp3, data->simulationInfo->realParameter[494], data->simulationInfo->realParameter[496], 310.0, 101325.0, data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */, data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[226] /* MatStm3.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 563
type: SIMPLE_ASSIGN
MatStm3._phasMolEntr[3] = MatStm3.compMolFrac[3,1] * MatStm3.compMolEntr[3,1] + MatStm3.compMolFrac[3,2] * MatStm3.compMolEntr[3,2]
*/
void Flowsheet_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  data->localData[0]->realVars[260] /* MatStm3.phasMolEntr[3] variable */ = (data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[225] /* MatStm3.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[226] /* MatStm3.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 564
type: SIMPLE_ASSIGN
MatStm3._phasMolSpHeat[2] = MatStm3.compMolFrac[2,1] * MatStm3.compMolSpHeat[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.compMolSpHeat[2,2]
*/
void Flowsheet_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  data->localData[0]->realVars[262] /* MatStm3.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[241] /* MatStm3.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[242] /* MatStm3.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 565
type: SIMPLE_ASSIGN
MatStm3._phasMolEnth[2] = MatStm3.compMolFrac[2,1] * MatStm3.compMolEnth[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.compMolEnth[2,2]
*/
void Flowsheet_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  data->localData[0]->realVars[256] /* MatStm3.phasMolEnth[2] variable */ = (data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[217] /* MatStm3.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[218] /* MatStm3.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 566
type: ALGORITHM

  MatStm3.MW[3] := $START.MatStm3.MW[3];
  MatStm3.MW[2] := $START.MatStm3.MW[2];
  MatStm3.MW[1] := $START.MatStm3.MW[1];
  for i in 1:2 loop
    MatStm3.MW[:] := {MatStm3.MW[1] + MatStm3.compMolFrac[1,i] * MatStm3.comp[i].MW, MatStm3.MW[2] + MatStm3.compMolFrac[2,i] * MatStm3.comp[i].MW, MatStm3.MW[3] + MatStm3.compMolFrac[3,i] * MatStm3.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[196] /* MatStm3.MW[3] variable */ = data->modelData->realVarsData[196].attribute /* MatStm3.MW[3] variable */.start;

  data->localData[0]->realVars[195] /* MatStm3.MW[2] variable */ = data->modelData->realVarsData[195].attribute /* MatStm3.MW[2] variable */.start;

  data->localData[0]->realVars[194] /* MatStm3.MW[1] variable */ = data->modelData->realVarsData[194].attribute /* MatStm3.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[194] /* MatStm3.MW[1] variable */ + ((&data->localData[0]->realVars[233] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[195] /* MatStm3.MW[2] variable */ + ((&data->localData[0]->realVars[233] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[196] /* MatStm3.MW[3] variable */ + ((&data->localData[0]->realVars[233] /* MatStm3.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[479])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[194] /* MatStm3.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
/*
equation index: 567
type: SIMPLE_ASSIGN
MatStm3._totMasFlo[3] = MatStm3.totMolFlo[3] * MatStm3.MW[3]
*/
void Flowsheet_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  data->localData[0]->realVars[275] /* MatStm3.totMasFlo[3] variable */ = (data->localData[0]->realVars[278] /* MatStm3.totMolFlo[3] variable */) * (data->localData[0]->realVars[196] /* MatStm3.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 568
type: SIMPLE_ASSIGN
MatStm3._totMasFlo[1] = 100.0 * MatStm3.MW[1]
*/
void Flowsheet_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  data->localData[0]->realVars[273] /* MatStm3.totMasFlo[1] variable */ = (100.0) * (data->localData[0]->realVars[194] /* MatStm3.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 569
type: SIMPLE_ASSIGN
MatStm3._compMasFrac[1,2] = MatStm3.compMasFlo[1,2] / MatStm3.totMasFlo[1]
*/
void Flowsheet_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  data->localData[0]->realVars[210] /* MatStm3.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[204] /* MatStm3.compMasFlo[1,2] variable */,data->localData[0]->realVars[273] /* MatStm3.totMasFlo[1] variable */,"MatStm3.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 570
type: SIMPLE_ASSIGN
MatStm3._vapPhasMasFrac = MatStm3.totMasFlo[3] / MatStm3.totMasFlo[1]
*/
void Flowsheet_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  data->localData[0]->realVars[279] /* MatStm3.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[275] /* MatStm3.totMasFlo[3] variable */,data->localData[0]->realVars[273] /* MatStm3.totMasFlo[1] variable */,"MatStm3.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 571
type: SIMPLE_ASSIGN
MatStm3._phasMolEntr[2] = MatStm3.compMolFrac[2,1] * MatStm3.compMolEntr[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.compMolEntr[2,2]
*/
void Flowsheet_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  data->localData[0]->realVars[259] /* MatStm3.phasMolEntr[2] variable */ = (data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[223] /* MatStm3.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[224] /* MatStm3.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 572
type: SIMPLE_ASSIGN
MatStm3._totMasFlo[2] = MatStm3.totMolFlo[2] * MatStm3.MW[2]
*/
void Flowsheet_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  data->localData[0]->realVars[274] /* MatStm3.totMasFlo[2] variable */ = (data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */) * (data->localData[0]->realVars[195] /* MatStm3.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 573
type: LINEAR

<var>MatStm3._compMasFrac[1,1]</var>
<var>MatStm3._compMasFrac[3,1]</var>
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
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -1.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="0" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
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
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then 0.0 else if 101325.0 >= MatStm3.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -MatStm3.totMasFlo[1] else if 101325.0 >= MatStm3.Pdew then -0.0 else -MatStm3.totMasFlo[1])</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm3.Pbubl then -0.0 else if 101325.0 >= MatStm3.Pdew then -MatStm3.totMasFlo[3] else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[209] /* MatStm3.compMasFrac[1,1] variable */,data->localData[1]->realVars[213] /* MatStm3.compMasFrac[3,1] variable */,data->localData[1]->realVars[211] /* MatStm3.compMasFrac[2,1] variable */,data->localData[1]->realVars[214] /* MatStm3.compMasFrac[3,2] variable */,data->localData[1]->realVars[212] /* MatStm3.compMasFrac[2,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 573 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 6, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,573};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 573 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[209] /* MatStm3.compMasFrac[1,1] variable */ = aux_x[0];
  data->localData[0]->realVars[213] /* MatStm3.compMasFrac[3,1] variable */ = aux_x[1];
  data->localData[0]->realVars[211] /* MatStm3.compMasFrac[2,1] variable */ = aux_x[2];
  data->localData[0]->realVars[214] /* MatStm3.compMasFrac[3,2] variable */ = aux_x[3];
  data->localData[0]->realVars[212] /* MatStm3.compMasFrac[2,2] variable */ = aux_x[4];
  TRACE_POP
}
/*
equation index: 574
type: SIMPLE_ASSIGN
MatStm3._liqPhasMasFrac = MatStm3.totMasFlo[2] / MatStm3.totMasFlo[1]
*/
void Flowsheet_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  data->localData[0]->realVars[251] /* MatStm3.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[274] /* MatStm3.totMasFlo[2] variable */,data->localData[0]->realVars[273] /* MatStm3.totMasFlo[1] variable */,"MatStm3.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 575
type: SIMPLE_ASSIGN
MatStm3._phasMolSpHeat[1] = MatStm3.liqPhasMolFrac * MatStm3.phasMolSpHeat[2] + Mixer1.inVapPhasMolFrac[1] * MatStm3.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  data->localData[0]->realVars[261] /* MatStm3.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[252] /* MatStm3.liqPhasMolFrac variable */) * (data->localData[0]->realVars[262] /* MatStm3.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */) * (data->localData[0]->realVars[263] /* MatStm3.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 576
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[1,1] = MatStm3.compMolFrac[1,1] * MatStm3.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  data->localData[0]->realVars[239] /* MatStm3.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[233] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[261] /* MatStm3.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 577
type: SIMPLE_ASSIGN
MatStm3._compMolSpHeat[1,2] = MatStm3.compMolFrac[1,2] * MatStm3.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  data->localData[0]->realVars[240] /* MatStm3.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[234] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[261] /* MatStm3.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 578
type: SIMPLE_ASSIGN
MatStm3._phasMolEnth[1] = MatStm3.liqPhasMolFrac * MatStm3.phasMolEnth[2] + Mixer1.inVapPhasMolFrac[1] * MatStm3.phasMolEnth[3]
*/
void Flowsheet_eqFunction_578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,578};
  data->localData[0]->realVars[255] /* MatStm3.phasMolEnth[1] variable */ = (data->localData[0]->realVars[252] /* MatStm3.liqPhasMolFrac variable */) * (data->localData[0]->realVars[256] /* MatStm3.phasMolEnth[2] variable */) + (data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */) * (data->localData[0]->realVars[257] /* MatStm3.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 579
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[1,1] = MatStm3.compMolFrac[1,1] * MatStm3.phasMolEnth[1]
*/
void Flowsheet_eqFunction_579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,579};
  data->localData[0]->realVars[215] /* MatStm3.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[233] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[255] /* MatStm3.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 580
type: SIMPLE_ASSIGN
MatStm3._compMolEnth[1,2] = MatStm3.compMolFrac[1,2] * MatStm3.phasMolEnth[1]
*/
void Flowsheet_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  data->localData[0]->realVars[216] /* MatStm3.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[234] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[255] /* MatStm3.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 581
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[1] = 0.5 * (MatStm3.phasMolEnth[1] + MatStm2.phasMolEnth[1])
*/
void Flowsheet_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  data->localData[0]->realVars[74] /* MatStm1.phasMolEnth[1] variable */ = (0.5) * (data->localData[0]->realVars[255] /* MatStm3.phasMolEnth[1] variable */ + data->localData[0]->realVars[165] /* MatStm2.phasMolEnth[1] variable */);
  TRACE_POP
}
void Flowsheet_eqFunction_582(DATA*, threadData_t*);
void Flowsheet_eqFunction_583(DATA*, threadData_t*);
void Flowsheet_eqFunction_584(DATA*, threadData_t*);
void Flowsheet_eqFunction_585(DATA*, threadData_t*);
void Flowsheet_eqFunction_586(DATA*, threadData_t*);
void Flowsheet_eqFunction_587(DATA*, threadData_t*);
void Flowsheet_eqFunction_588(DATA*, threadData_t*);
void Flowsheet_eqFunction_589(DATA*, threadData_t*);
void Flowsheet_eqFunction_590(DATA*, threadData_t*);
void Flowsheet_eqFunction_591(DATA*, threadData_t*);
void Flowsheet_eqFunction_592(DATA*, threadData_t*);
void Flowsheet_eqFunction_593(DATA*, threadData_t*);
void Flowsheet_eqFunction_594(DATA*, threadData_t*);
void Flowsheet_eqFunction_595(DATA*, threadData_t*);
void Flowsheet_eqFunction_596(DATA*, threadData_t*);
void Flowsheet_eqFunction_597(DATA*, threadData_t*);
void Flowsheet_eqFunction_598(DATA*, threadData_t*);
void Flowsheet_eqFunction_599(DATA*, threadData_t*);
void Flowsheet_eqFunction_600(DATA*, threadData_t*);
void Flowsheet_eqFunction_601(DATA*, threadData_t*);
void Flowsheet_eqFunction_602(DATA*, threadData_t*);
void Flowsheet_eqFunction_603(DATA*, threadData_t*);
void Flowsheet_eqFunction_604(DATA*, threadData_t*);
void Flowsheet_eqFunction_605(DATA*, threadData_t*);
void Flowsheet_eqFunction_611(DATA*, threadData_t*);
void Flowsheet_eqFunction_610(DATA*, threadData_t*);
void Flowsheet_eqFunction_609(DATA*, threadData_t*);
void Flowsheet_eqFunction_608(DATA*, threadData_t*);
void Flowsheet_eqFunction_607(DATA*, threadData_t*);
void Flowsheet_eqFunction_606(DATA*, threadData_t*);
/*
equation index: 612
indexNonlinear: 7
type: NONLINEAR

vars: {MatStm1._totMolFlo[3], Splitter1._outT[2], MatStm1._compMolFrac[2,2], MatStm1._compMolFrac[3,2], MatStm1._compMolFrac[3,1], MatStm1._compMolFrac[2,1]}
eqns: {582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 611, 610, 609, 608, 607, 606}
*/
void Flowsheet_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 612 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[0] = data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[1] = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[2] = data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[3] = data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[4] = data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[5] = data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 7);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,612};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 612 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[0];
  data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[1];
  data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[2];
  data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[3];
  data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[4];
  data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[5];
  TRACE_POP
}
/*
equation index: 613
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,1] = MatStm1.compMolFlo[3,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[50] /* MatStm1.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[163]);
  TRACE_POP
}
/*
equation index: 614
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,1] = MatStm1.compMolFlo[2,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[48] /* MatStm1.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[163]);
  TRACE_POP
}
/*
equation index: 615
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,2] = MatStm1.compMolFlo[3,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[51] /* MatStm1.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[164]);
  TRACE_POP
}
/*
equation index: 616
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,2] = MatStm1.compMolFlo[2,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[49] /* MatStm1.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[164]);
  TRACE_POP
}
/*
equation index: 617
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:2 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  data->localData[0]->realVars[17] /* MatStm1.MW[3] variable */ = data->modelData->realVarsData[17].attribute /* MatStm1.MW[3] variable */.start;

  data->localData[0]->realVars[16] /* MatStm1.MW[2] variable */ = data->modelData->realVarsData[16].attribute /* MatStm1.MW[2] variable */.start;

  data->localData[0]->realVars[15] /* MatStm1.MW[1] variable */ = data->modelData->realVarsData[15].attribute /* MatStm1.MW[1] variable */.start;

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 2);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp3, tmp5); $Pi += tmp4)
    {
      array_alloc_scalar_real_array(&tmp0, 3, (modelica_real)data->localData[0]->realVars[15] /* MatStm1.MW[1] variable */ + ((&data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[16] /* MatStm1.MW[2] variable */ + ((&data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[17] /* MatStm1.MW[3] variable */ + ((&data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
      real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[15] /* MatStm1.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp0, &tmp2, &tmp1);
    }
  }
  TRACE_POP
}
/*
equation index: 618
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[3] = MatStm1.totMolFlo[3] * MatStm1.MW[3]
*/
void Flowsheet_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */ = (data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */) * (data->localData[0]->realVars[17] /* MatStm1.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 619
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[2] = MatStm1.totMolFlo[2] * MatStm1.MW[2]
*/
void Flowsheet_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */ = (data->localData[0]->realVars[96] /* MatStm1.totMolFlo[2] variable */) * (data->localData[0]->realVars[16] /* MatStm1.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 620
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[1] = 200.0 * MatStm1.MW[1]
*/
void Flowsheet_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */ = (200.0) * (data->localData[0]->realVars[15] /* MatStm1.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 621
type: SIMPLE_ASSIGN
MatStm1._compMasFrac[1,2] = MatStm1.compMasFlo[1,2] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[23] /* MatStm1.compMasFlo[1,2] variable */,data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 622
type: SIMPLE_ASSIGN
MatStm1._liqPhasMasFrac = MatStm1.totMasFlo[2] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  data->localData[0]->realVars[70] /* MatStm1.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */,data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 623
type: LINEAR

<var>MatStm1._compMasFrac[3,1]</var>
<var>MatStm1._compMasFrac[1,1]</var>
<var>MatStm1._compMasFrac[2,2]</var>
<var>MatStm1._compMasFrac[3,2]</var>
<var>MatStm1._compMasFrac[2,1]</var>
<row>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then -MatStm1.compMasFrac[1,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,2] else -MatStm1.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,1] else MatStm1.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[32] /* MatStm1.compMasFrac[3,1] variable */,data->localData[1]->realVars[28] /* MatStm1.compMasFrac[1,1] variable */,data->localData[1]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */,data->localData[1]->realVars[33] /* MatStm1.compMasFrac[3,2] variable */,data->localData[1]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 623 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 7, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,623};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 623 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[32] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[0];
  data->localData[0]->realVars[28] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[1];
  data->localData[0]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */ = aux_x[2];
  data->localData[0]->realVars[33] /* MatStm1.compMasFrac[3,2] variable */ = aux_x[3];
  data->localData[0]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[4];
  TRACE_POP
}
/*
equation index: 624
type: SIMPLE_ASSIGN
MatStm1._vapPhasMasFrac = MatStm1.totMasFlo[3] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  data->localData[0]->realVars[98] /* MatStm1.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */,data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 625
type: SIMPLE_ASSIGN
MatStm5._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm5.comp[2].VP[1], MatStm5.comp[2].VP[2], MatStm5.comp[2].VP[3], MatStm5.comp[2].VP[4], MatStm5.comp[2].VP[5], MatStm5.comp[2].VP[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  real_array tmp6;
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[825], (modelica_real)data->simulationInfo->realParameter[826], (modelica_real)data->simulationInfo->realParameter[827], (modelica_real)data->simulationInfo->realParameter[828], (modelica_real)data->simulationInfo->realParameter[829], (modelica_real)data->simulationInfo->realParameter[830]);
  data->localData[0]->realVars[378] /* MatStm5.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp6, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 626
type: SIMPLE_ASSIGN
MatStm5._K[2] = 9.869232667160129e-006 * MatStm5.Psat[2]
*/
void Flowsheet_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  data->localData[0]->realVars[371] /* MatStm5.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[378] /* MatStm5.Psat[2] variable */);
  TRACE_POP
}
/*
equation index: 627
type: SIMPLE_ASSIGN
MatStm5._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm5.comp[1].VP[1], MatStm5.comp[1].VP[2], MatStm5.comp[1].VP[3], MatStm5.comp[1].VP[4], MatStm5.comp[1].VP[5], MatStm5.comp[1].VP[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[819], (modelica_real)data->simulationInfo->realParameter[820], (modelica_real)data->simulationInfo->realParameter[821], (modelica_real)data->simulationInfo->realParameter[822], (modelica_real)data->simulationInfo->realParameter[823], (modelica_real)data->simulationInfo->realParameter[824]);
  data->localData[0]->realVars[377] /* MatStm5.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp7, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 628
type: SIMPLE_ASSIGN
MatStm5._K[1] = 9.869232667160129e-006 * MatStm5.Psat[1]
*/
void Flowsheet_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  data->localData[0]->realVars[370] /* MatStm5.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[377] /* MatStm5.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 629
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm5.comp[2].SH, {MatStm5.comp[2].VapCp[1], MatStm5.comp[2].VapCp[2], MatStm5.comp[2].VapCp[3], MatStm5.comp[2].VapCp[4], MatStm5.comp[2].VapCp[5], MatStm5.comp[2].VapCp[6]}, {MatStm5.comp[2].HOV[1], MatStm5.comp[2].HOV[2], MatStm5.comp[2].HOV[3], MatStm5.comp[2].HOV[4], MatStm5.comp[2].HOV[5], MatStm5.comp[2].HOV[6]}, MatStm5.comp[2].Tc, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[837], (modelica_real)data->simulationInfo->realParameter[838], (modelica_real)data->simulationInfo->realParameter[839], (modelica_real)data->simulationInfo->realParameter[840], (modelica_real)data->simulationInfo->realParameter[841], (modelica_real)data->simulationInfo->realParameter[842]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[737], (modelica_real)data->simulationInfo->realParameter[738], (modelica_real)data->simulationInfo->realParameter[739], (modelica_real)data->simulationInfo->realParameter[740], (modelica_real)data->simulationInfo->realParameter[741], (modelica_real)data->simulationInfo->realParameter[742]);
  data->localData[0]->realVars[396] /* MatStm5.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[802], tmp8, tmp9, data->simulationInfo->realParameter[812], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 630
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm5.comp[2].SH, {MatStm5.comp[2].VapCp[1], MatStm5.comp[2].VapCp[2], MatStm5.comp[2].VapCp[3], MatStm5.comp[2].VapCp[4], MatStm5.comp[2].VapCp[5], MatStm5.comp[2].VapCp[6]}, {MatStm5.comp[2].HOV[1], MatStm5.comp[2].HOV[2], MatStm5.comp[2].HOV[3], MatStm5.comp[2].HOV[4], MatStm5.comp[2].HOV[5], MatStm5.comp[2].HOV[6]}, MatStm5.comp[2].Tc, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[837], (modelica_real)data->simulationInfo->realParameter[838], (modelica_real)data->simulationInfo->realParameter[839], (modelica_real)data->simulationInfo->realParameter[840], (modelica_real)data->simulationInfo->realParameter[841], (modelica_real)data->simulationInfo->realParameter[842]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[737], (modelica_real)data->simulationInfo->realParameter[738], (modelica_real)data->simulationInfo->realParameter[739], (modelica_real)data->simulationInfo->realParameter[740], (modelica_real)data->simulationInfo->realParameter[741], (modelica_real)data->simulationInfo->realParameter[742]);
  data->localData[0]->realVars[394] /* MatStm5.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[802], tmp10, tmp11, data->simulationInfo->realParameter[812], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 631
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm5.comp[2].VapCp[1], MatStm5.comp[2].VapCp[2], MatStm5.comp[2].VapCp[3], MatStm5.comp[2].VapCp[4], MatStm5.comp[2].VapCp[5], MatStm5.comp[2].VapCp[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  real_array tmp12;
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[837], (modelica_real)data->simulationInfo->realParameter[838], (modelica_real)data->simulationInfo->realParameter[839], (modelica_real)data->simulationInfo->realParameter[840], (modelica_real)data->simulationInfo->realParameter[841], (modelica_real)data->simulationInfo->realParameter[842]);
  data->localData[0]->realVars[420] /* MatStm5.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp12, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 632
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm5.comp[2].LiqCp[1], MatStm5.comp[2].LiqCp[2], MatStm5.comp[2].LiqCp[3], MatStm5.comp[2].LiqCp[4], MatStm5.comp[2].LiqCp[5], MatStm5.comp[2].LiqCp[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)data->simulationInfo->realParameter[753], (modelica_real)data->simulationInfo->realParameter[754], (modelica_real)data->simulationInfo->realParameter[755], (modelica_real)data->simulationInfo->realParameter[756], (modelica_real)data->simulationInfo->realParameter[757], (modelica_real)data->simulationInfo->realParameter[758]);
  data->localData[0]->realVars[418] /* MatStm5.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp13, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 633
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm5.comp[1].SH, {MatStm5.comp[1].VapCp[1], MatStm5.comp[1].VapCp[2], MatStm5.comp[1].VapCp[3], MatStm5.comp[1].VapCp[4], MatStm5.comp[1].VapCp[5], MatStm5.comp[1].VapCp[6]}, {MatStm5.comp[1].HOV[1], MatStm5.comp[1].HOV[2], MatStm5.comp[1].HOV[3], MatStm5.comp[1].HOV[4], MatStm5.comp[1].HOV[5], MatStm5.comp[1].HOV[6]}, MatStm5.comp[1].Tc, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  real_array tmp14;
  real_array tmp15;
  array_alloc_scalar_real_array(&tmp14, 6, (modelica_real)data->simulationInfo->realParameter[831], (modelica_real)data->simulationInfo->realParameter[832], (modelica_real)data->simulationInfo->realParameter[833], (modelica_real)data->simulationInfo->realParameter[834], (modelica_real)data->simulationInfo->realParameter[835], (modelica_real)data->simulationInfo->realParameter[836]);
  array_alloc_scalar_real_array(&tmp15, 6, (modelica_real)data->simulationInfo->realParameter[731], (modelica_real)data->simulationInfo->realParameter[732], (modelica_real)data->simulationInfo->realParameter[733], (modelica_real)data->simulationInfo->realParameter[734], (modelica_real)data->simulationInfo->realParameter[735], (modelica_real)data->simulationInfo->realParameter[736]);
  data->localData[0]->realVars[395] /* MatStm5.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[801], tmp14, tmp15, data->simulationInfo->realParameter[811], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 634
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm5.comp[1].SH, {MatStm5.comp[1].VapCp[1], MatStm5.comp[1].VapCp[2], MatStm5.comp[1].VapCp[3], MatStm5.comp[1].VapCp[4], MatStm5.comp[1].VapCp[5], MatStm5.comp[1].VapCp[6]}, {MatStm5.comp[1].HOV[1], MatStm5.comp[1].HOV[2], MatStm5.comp[1].HOV[3], MatStm5.comp[1].HOV[4], MatStm5.comp[1].HOV[5], MatStm5.comp[1].HOV[6]}, MatStm5.comp[1].Tc, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  real_array tmp16;
  real_array tmp17;
  array_alloc_scalar_real_array(&tmp16, 6, (modelica_real)data->simulationInfo->realParameter[831], (modelica_real)data->simulationInfo->realParameter[832], (modelica_real)data->simulationInfo->realParameter[833], (modelica_real)data->simulationInfo->realParameter[834], (modelica_real)data->simulationInfo->realParameter[835], (modelica_real)data->simulationInfo->realParameter[836]);
  array_alloc_scalar_real_array(&tmp17, 6, (modelica_real)data->simulationInfo->realParameter[731], (modelica_real)data->simulationInfo->realParameter[732], (modelica_real)data->simulationInfo->realParameter[733], (modelica_real)data->simulationInfo->realParameter[734], (modelica_real)data->simulationInfo->realParameter[735], (modelica_real)data->simulationInfo->realParameter[736]);
  data->localData[0]->realVars[393] /* MatStm5.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[801], tmp16, tmp17, data->simulationInfo->realParameter[811], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 635
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm5.comp[1].VapCp[1], MatStm5.comp[1].VapCp[2], MatStm5.comp[1].VapCp[3], MatStm5.comp[1].VapCp[4], MatStm5.comp[1].VapCp[5], MatStm5.comp[1].VapCp[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  real_array tmp18;
  array_alloc_scalar_real_array(&tmp18, 6, (modelica_real)data->simulationInfo->realParameter[831], (modelica_real)data->simulationInfo->realParameter[832], (modelica_real)data->simulationInfo->realParameter[833], (modelica_real)data->simulationInfo->realParameter[834], (modelica_real)data->simulationInfo->realParameter[835], (modelica_real)data->simulationInfo->realParameter[836]);
  data->localData[0]->realVars[419] /* MatStm5.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp18, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 636
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm5.comp[1].LiqCp[1], MatStm5.comp[1].LiqCp[2], MatStm5.comp[1].LiqCp[3], MatStm5.comp[1].LiqCp[4], MatStm5.comp[1].LiqCp[5], MatStm5.comp[1].LiqCp[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  real_array tmp19;
  array_alloc_scalar_real_array(&tmp19, 6, (modelica_real)data->simulationInfo->realParameter[747], (modelica_real)data->simulationInfo->realParameter[748], (modelica_real)data->simulationInfo->realParameter[749], (modelica_real)data->simulationInfo->realParameter[750], (modelica_real)data->simulationInfo->realParameter[751], (modelica_real)data->simulationInfo->realParameter[752]);
  data->localData[0]->realVars[417] /* MatStm5.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp19, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 637
type: SIMPLE_ASSIGN
MatStm4._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm4.comp[2].VP[1], MatStm4.comp[2].VP[2], MatStm4.comp[2].VP[3], MatStm4.comp[2].VP[4], MatStm4.comp[2].VP[5], MatStm4.comp[2].VP[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  real_array tmp20;
  array_alloc_scalar_real_array(&tmp20, 6, (modelica_real)data->simulationInfo->realParameter[667], (modelica_real)data->simulationInfo->realParameter[668], (modelica_real)data->simulationInfo->realParameter[669], (modelica_real)data->simulationInfo->realParameter[670], (modelica_real)data->simulationInfo->realParameter[671], (modelica_real)data->simulationInfo->realParameter[672]);
  data->localData[0]->realVars[290] /* MatStm4.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp20, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 638
type: SIMPLE_ASSIGN
MatStm4._K[2] = 9.869232667160129e-006 * MatStm4.Psat[2]
*/
void Flowsheet_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  data->localData[0]->realVars[283] /* MatStm4.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[290] /* MatStm4.Psat[2] variable */);
  TRACE_POP
}
/*
equation index: 639
type: SIMPLE_ASSIGN
MatStm4._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm4.comp[1].VP[1], MatStm4.comp[1].VP[2], MatStm4.comp[1].VP[3], MatStm4.comp[1].VP[4], MatStm4.comp[1].VP[5], MatStm4.comp[1].VP[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  real_array tmp21;
  array_alloc_scalar_real_array(&tmp21, 6, (modelica_real)data->simulationInfo->realParameter[661], (modelica_real)data->simulationInfo->realParameter[662], (modelica_real)data->simulationInfo->realParameter[663], (modelica_real)data->simulationInfo->realParameter[664], (modelica_real)data->simulationInfo->realParameter[665], (modelica_real)data->simulationInfo->realParameter[666]);
  data->localData[0]->realVars[289] /* MatStm4.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp21, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 640
type: SIMPLE_ASSIGN
MatStm4._K[1] = 9.869232667160129e-006 * MatStm4.Psat[1]
*/
void Flowsheet_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  data->localData[0]->realVars[282] /* MatStm4.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[289] /* MatStm4.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 641
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm4.comp[2].SH, {MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, {MatStm4.comp[2].HOV[1], MatStm4.comp[2].HOV[2], MatStm4.comp[2].HOV[3], MatStm4.comp[2].HOV[4], MatStm4.comp[2].HOV[5], MatStm4.comp[2].HOV[6]}, MatStm4.comp[2].Tc, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  real_array tmp22;
  real_array tmp23;
  array_alloc_scalar_real_array(&tmp22, 6, (modelica_real)data->simulationInfo->realParameter[679], (modelica_real)data->simulationInfo->realParameter[680], (modelica_real)data->simulationInfo->realParameter[681], (modelica_real)data->simulationInfo->realParameter[682], (modelica_real)data->simulationInfo->realParameter[683], (modelica_real)data->simulationInfo->realParameter[684]);
  array_alloc_scalar_real_array(&tmp23, 6, (modelica_real)data->simulationInfo->realParameter[579], (modelica_real)data->simulationInfo->realParameter[580], (modelica_real)data->simulationInfo->realParameter[581], (modelica_real)data->simulationInfo->realParameter[582], (modelica_real)data->simulationInfo->realParameter[583], (modelica_real)data->simulationInfo->realParameter[584]);
  data->localData[0]->realVars[308] /* MatStm4.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[644], tmp22, tmp23, data->simulationInfo->realParameter[654], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 642
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm4.comp[2].SH, {MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, {MatStm4.comp[2].HOV[1], MatStm4.comp[2].HOV[2], MatStm4.comp[2].HOV[3], MatStm4.comp[2].HOV[4], MatStm4.comp[2].HOV[5], MatStm4.comp[2].HOV[6]}, MatStm4.comp[2].Tc, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  real_array tmp24;
  real_array tmp25;
  array_alloc_scalar_real_array(&tmp24, 6, (modelica_real)data->simulationInfo->realParameter[679], (modelica_real)data->simulationInfo->realParameter[680], (modelica_real)data->simulationInfo->realParameter[681], (modelica_real)data->simulationInfo->realParameter[682], (modelica_real)data->simulationInfo->realParameter[683], (modelica_real)data->simulationInfo->realParameter[684]);
  array_alloc_scalar_real_array(&tmp25, 6, (modelica_real)data->simulationInfo->realParameter[579], (modelica_real)data->simulationInfo->realParameter[580], (modelica_real)data->simulationInfo->realParameter[581], (modelica_real)data->simulationInfo->realParameter[582], (modelica_real)data->simulationInfo->realParameter[583], (modelica_real)data->simulationInfo->realParameter[584]);
  data->localData[0]->realVars[306] /* MatStm4.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[644], tmp24, tmp25, data->simulationInfo->realParameter[654], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 643
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  real_array tmp26;
  array_alloc_scalar_real_array(&tmp26, 6, (modelica_real)data->simulationInfo->realParameter[679], (modelica_real)data->simulationInfo->realParameter[680], (modelica_real)data->simulationInfo->realParameter[681], (modelica_real)data->simulationInfo->realParameter[682], (modelica_real)data->simulationInfo->realParameter[683], (modelica_real)data->simulationInfo->realParameter[684]);
  data->localData[0]->realVars[332] /* MatStm4.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp26, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 644
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm4.comp[2].LiqCp[1], MatStm4.comp[2].LiqCp[2], MatStm4.comp[2].LiqCp[3], MatStm4.comp[2].LiqCp[4], MatStm4.comp[2].LiqCp[5], MatStm4.comp[2].LiqCp[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  real_array tmp27;
  array_alloc_scalar_real_array(&tmp27, 6, (modelica_real)data->simulationInfo->realParameter[595], (modelica_real)data->simulationInfo->realParameter[596], (modelica_real)data->simulationInfo->realParameter[597], (modelica_real)data->simulationInfo->realParameter[598], (modelica_real)data->simulationInfo->realParameter[599], (modelica_real)data->simulationInfo->realParameter[600]);
  data->localData[0]->realVars[330] /* MatStm4.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp27, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 645
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm4.comp[1].SH, {MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, {MatStm4.comp[1].HOV[1], MatStm4.comp[1].HOV[2], MatStm4.comp[1].HOV[3], MatStm4.comp[1].HOV[4], MatStm4.comp[1].HOV[5], MatStm4.comp[1].HOV[6]}, MatStm4.comp[1].Tc, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  real_array tmp28;
  real_array tmp29;
  array_alloc_scalar_real_array(&tmp28, 6, (modelica_real)data->simulationInfo->realParameter[673], (modelica_real)data->simulationInfo->realParameter[674], (modelica_real)data->simulationInfo->realParameter[675], (modelica_real)data->simulationInfo->realParameter[676], (modelica_real)data->simulationInfo->realParameter[677], (modelica_real)data->simulationInfo->realParameter[678]);
  array_alloc_scalar_real_array(&tmp29, 6, (modelica_real)data->simulationInfo->realParameter[573], (modelica_real)data->simulationInfo->realParameter[574], (modelica_real)data->simulationInfo->realParameter[575], (modelica_real)data->simulationInfo->realParameter[576], (modelica_real)data->simulationInfo->realParameter[577], (modelica_real)data->simulationInfo->realParameter[578]);
  data->localData[0]->realVars[307] /* MatStm4.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[643], tmp28, tmp29, data->simulationInfo->realParameter[653], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 646
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm4.comp[1].SH, {MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, {MatStm4.comp[1].HOV[1], MatStm4.comp[1].HOV[2], MatStm4.comp[1].HOV[3], MatStm4.comp[1].HOV[4], MatStm4.comp[1].HOV[5], MatStm4.comp[1].HOV[6]}, MatStm4.comp[1].Tc, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  real_array tmp30;
  real_array tmp31;
  array_alloc_scalar_real_array(&tmp30, 6, (modelica_real)data->simulationInfo->realParameter[673], (modelica_real)data->simulationInfo->realParameter[674], (modelica_real)data->simulationInfo->realParameter[675], (modelica_real)data->simulationInfo->realParameter[676], (modelica_real)data->simulationInfo->realParameter[677], (modelica_real)data->simulationInfo->realParameter[678]);
  array_alloc_scalar_real_array(&tmp31, 6, (modelica_real)data->simulationInfo->realParameter[573], (modelica_real)data->simulationInfo->realParameter[574], (modelica_real)data->simulationInfo->realParameter[575], (modelica_real)data->simulationInfo->realParameter[576], (modelica_real)data->simulationInfo->realParameter[577], (modelica_real)data->simulationInfo->realParameter[578]);
  data->localData[0]->realVars[305] /* MatStm4.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[643], tmp30, tmp31, data->simulationInfo->realParameter[653], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 647
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  real_array tmp32;
  array_alloc_scalar_real_array(&tmp32, 6, (modelica_real)data->simulationInfo->realParameter[673], (modelica_real)data->simulationInfo->realParameter[674], (modelica_real)data->simulationInfo->realParameter[675], (modelica_real)data->simulationInfo->realParameter[676], (modelica_real)data->simulationInfo->realParameter[677], (modelica_real)data->simulationInfo->realParameter[678]);
  data->localData[0]->realVars[331] /* MatStm4.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp32, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 648
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm4.comp[1].LiqCp[1], MatStm4.comp[1].LiqCp[2], MatStm4.comp[1].LiqCp[3], MatStm4.comp[1].LiqCp[4], MatStm4.comp[1].LiqCp[5], MatStm4.comp[1].LiqCp[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  real_array tmp33;
  array_alloc_scalar_real_array(&tmp33, 6, (modelica_real)data->simulationInfo->realParameter[589], (modelica_real)data->simulationInfo->realParameter[590], (modelica_real)data->simulationInfo->realParameter[591], (modelica_real)data->simulationInfo->realParameter[592], (modelica_real)data->simulationInfo->realParameter[593], (modelica_real)data->simulationInfo->realParameter[594]);
  data->localData[0]->realVars[329] /* MatStm4.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp33, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 649
type: SIMPLE_ASSIGN
$cse13 = exp((-MatStm5.comp[2].VP[2]) - MatStm5.comp[2].VP[3] / Splitter1.outT[2] - MatStm5.comp[2].VP[4] * $cse2 - MatStm5.comp[2].VP[5] * Splitter1.outT[2] ^ MatStm5.comp[2].VP[6])
*/
void Flowsheet_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  tmp34 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  tmp35 = data->simulationInfo->realParameter[830];
  if(tmp34 < 0.0 && tmp35 != 0.0)
  {
    tmp37 = modf(tmp35, &tmp38);
    
    if(tmp37 > 0.5)
    {
      tmp37 -= 1.0;
      tmp38 += 1.0;
    }
    else if(tmp37 < -0.5)
    {
      tmp37 += 1.0;
      tmp38 -= 1.0;
    }
    
    if(fabs(tmp37) < 1e-10)
      tmp36 = pow(tmp34, tmp38);
    else
    {
      tmp40 = modf(1.0/tmp35, &tmp39);
      if(tmp40 > 0.5)
      {
        tmp40 -= 1.0;
        tmp39 += 1.0;
      }
      else if(tmp40 < -0.5)
      {
        tmp40 += 1.0;
        tmp39 -= 1.0;
      }
      if(fabs(tmp40) < 1e-10 && ((unsigned long)tmp39 & 1))
      {
        tmp36 = -pow(-tmp34, tmp37)*pow(tmp34, tmp38);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp34, tmp35);
      }
    }
  }
  else
  {
    tmp36 = pow(tmp34, tmp35);
  }
  if(isnan(tmp36) || isinf(tmp36))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp34, tmp35);
  }
  data->localData[0]->realVars[4] /* $cse13 variable */ = exp((-data->simulationInfo->realParameter[826]) - (DIVISION_SIM(data->simulationInfo->realParameter[827],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes)) - ((data->simulationInfo->realParameter[828]) * (data->localData[0]->realVars[5] /* $cse2 variable */)) - ((data->simulationInfo->realParameter[829]) * (tmp36)));
  TRACE_POP
}
/*
equation index: 650
type: SIMPLE_ASSIGN
$cse12 = exp((-MatStm5.comp[1].VP[2]) - MatStm5.comp[1].VP[3] / Splitter1.outT[2] - MatStm5.comp[1].VP[4] * $cse2 - MatStm5.comp[1].VP[5] * Splitter1.outT[2] ^ MatStm5.comp[1].VP[6])
*/
void Flowsheet_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  tmp41 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  tmp42 = data->simulationInfo->realParameter[824];
  if(tmp41 < 0.0 && tmp42 != 0.0)
  {
    tmp44 = modf(tmp42, &tmp45);
    
    if(tmp44 > 0.5)
    {
      tmp44 -= 1.0;
      tmp45 += 1.0;
    }
    else if(tmp44 < -0.5)
    {
      tmp44 += 1.0;
      tmp45 -= 1.0;
    }
    
    if(fabs(tmp44) < 1e-10)
      tmp43 = pow(tmp41, tmp45);
    else
    {
      tmp47 = modf(1.0/tmp42, &tmp46);
      if(tmp47 > 0.5)
      {
        tmp47 -= 1.0;
        tmp46 += 1.0;
      }
      else if(tmp47 < -0.5)
      {
        tmp47 += 1.0;
        tmp46 -= 1.0;
      }
      if(fabs(tmp47) < 1e-10 && ((unsigned long)tmp46 & 1))
      {
        tmp43 = -pow(-tmp41, tmp44)*pow(tmp41, tmp45);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp41, tmp42);
      }
    }
  }
  else
  {
    tmp43 = pow(tmp41, tmp42);
  }
  if(isnan(tmp43) || isinf(tmp43))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp41, tmp42);
  }
  data->localData[0]->realVars[3] /* $cse12 variable */ = exp((-data->simulationInfo->realParameter[820]) - (DIVISION_SIM(data->simulationInfo->realParameter[821],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes)) - ((data->simulationInfo->realParameter[822]) * (data->localData[0]->realVars[5] /* $cse2 variable */)) - ((data->simulationInfo->realParameter[823]) * (tmp43)));
  TRACE_POP
}
/*
equation index: 651
type: SIMPLE_ASSIGN
$cse11 = exp(MatStm5.comp[2].VP[2] + MatStm5.comp[2].VP[3] / Splitter1.outT[2] + MatStm5.comp[2].VP[4] * $cse2 + MatStm5.comp[2].VP[5] * Splitter1.outT[2] ^ MatStm5.comp[2].VP[6])
*/
void Flowsheet_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  tmp48 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  tmp49 = data->simulationInfo->realParameter[830];
  if(tmp48 < 0.0 && tmp49 != 0.0)
  {
    tmp51 = modf(tmp49, &tmp52);
    
    if(tmp51 > 0.5)
    {
      tmp51 -= 1.0;
      tmp52 += 1.0;
    }
    else if(tmp51 < -0.5)
    {
      tmp51 += 1.0;
      tmp52 -= 1.0;
    }
    
    if(fabs(tmp51) < 1e-10)
      tmp50 = pow(tmp48, tmp52);
    else
    {
      tmp54 = modf(1.0/tmp49, &tmp53);
      if(tmp54 > 0.5)
      {
        tmp54 -= 1.0;
        tmp53 += 1.0;
      }
      else if(tmp54 < -0.5)
      {
        tmp54 += 1.0;
        tmp53 -= 1.0;
      }
      if(fabs(tmp54) < 1e-10 && ((unsigned long)tmp53 & 1))
      {
        tmp50 = -pow(-tmp48, tmp51)*pow(tmp48, tmp52);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp48, tmp49);
      }
    }
  }
  else
  {
    tmp50 = pow(tmp48, tmp49);
  }
  if(isnan(tmp50) || isinf(tmp50))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp48, tmp49);
  }
  data->localData[0]->realVars[2] /* $cse11 variable */ = exp(data->simulationInfo->realParameter[826] + DIVISION_SIM(data->simulationInfo->realParameter[827],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes) + (data->simulationInfo->realParameter[828]) * (data->localData[0]->realVars[5] /* $cse2 variable */) + (data->simulationInfo->realParameter[829]) * (tmp50));
  TRACE_POP
}
/*
equation index: 652
type: SIMPLE_ASSIGN
$cse10 = exp(MatStm5.comp[1].VP[2] + MatStm5.comp[1].VP[3] / Splitter1.outT[2] + MatStm5.comp[1].VP[4] * $cse2 + MatStm5.comp[1].VP[5] * Splitter1.outT[2] ^ MatStm5.comp[1].VP[6])
*/
void Flowsheet_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  tmp55 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  tmp56 = data->simulationInfo->realParameter[824];
  if(tmp55 < 0.0 && tmp56 != 0.0)
  {
    tmp58 = modf(tmp56, &tmp59);
    
    if(tmp58 > 0.5)
    {
      tmp58 -= 1.0;
      tmp59 += 1.0;
    }
    else if(tmp58 < -0.5)
    {
      tmp58 += 1.0;
      tmp59 -= 1.0;
    }
    
    if(fabs(tmp58) < 1e-10)
      tmp57 = pow(tmp55, tmp59);
    else
    {
      tmp61 = modf(1.0/tmp56, &tmp60);
      if(tmp61 > 0.5)
      {
        tmp61 -= 1.0;
        tmp60 += 1.0;
      }
      else if(tmp61 < -0.5)
      {
        tmp61 += 1.0;
        tmp60 -= 1.0;
      }
      if(fabs(tmp61) < 1e-10 && ((unsigned long)tmp60 & 1))
      {
        tmp57 = -pow(-tmp55, tmp58)*pow(tmp55, tmp59);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp55, tmp56);
      }
    }
  }
  else
  {
    tmp57 = pow(tmp55, tmp56);
  }
  if(isnan(tmp57) || isinf(tmp57))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp55, tmp56);
  }
  data->localData[0]->realVars[1] /* $cse10 variable */ = exp(data->simulationInfo->realParameter[820] + DIVISION_SIM(data->simulationInfo->realParameter[821],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes) + (data->simulationInfo->realParameter[822]) * (data->localData[0]->realVars[5] /* $cse2 variable */) + (data->simulationInfo->realParameter[823]) * (tmp57));
  TRACE_POP
}
/*
equation index: 653
type: SIMPLE_ASSIGN
$cse9 = exp((-MatStm4.comp[2].VP[2]) - MatStm4.comp[2].VP[3] / Splitter1.outT[2] - MatStm4.comp[2].VP[4] * $cse2 - MatStm4.comp[2].VP[5] * Splitter1.outT[2] ^ MatStm4.comp[2].VP[6])
*/
void Flowsheet_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  modelica_real tmp62;
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  modelica_real tmp67;
  modelica_real tmp68;
  tmp62 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  tmp63 = data->simulationInfo->realParameter[672];
  if(tmp62 < 0.0 && tmp63 != 0.0)
  {
    tmp65 = modf(tmp63, &tmp66);
    
    if(tmp65 > 0.5)
    {
      tmp65 -= 1.0;
      tmp66 += 1.0;
    }
    else if(tmp65 < -0.5)
    {
      tmp65 += 1.0;
      tmp66 -= 1.0;
    }
    
    if(fabs(tmp65) < 1e-10)
      tmp64 = pow(tmp62, tmp66);
    else
    {
      tmp68 = modf(1.0/tmp63, &tmp67);
      if(tmp68 > 0.5)
      {
        tmp68 -= 1.0;
        tmp67 += 1.0;
      }
      else if(tmp68 < -0.5)
      {
        tmp68 += 1.0;
        tmp67 -= 1.0;
      }
      if(fabs(tmp68) < 1e-10 && ((unsigned long)tmp67 & 1))
      {
        tmp64 = -pow(-tmp62, tmp65)*pow(tmp62, tmp66);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp62, tmp63);
      }
    }
  }
  else
  {
    tmp64 = pow(tmp62, tmp63);
  }
  if(isnan(tmp64) || isinf(tmp64))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp62, tmp63);
  }
  data->localData[0]->realVars[12] /* $cse9 variable */ = exp((-data->simulationInfo->realParameter[668]) - (DIVISION_SIM(data->simulationInfo->realParameter[669],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes)) - ((data->simulationInfo->realParameter[670]) * (data->localData[0]->realVars[5] /* $cse2 variable */)) - ((data->simulationInfo->realParameter[671]) * (tmp64)));
  TRACE_POP
}
/*
equation index: 654
type: SIMPLE_ASSIGN
$cse8 = exp((-MatStm4.comp[1].VP[2]) - MatStm4.comp[1].VP[3] / Splitter1.outT[2] - MatStm4.comp[1].VP[4] * $cse2 - MatStm4.comp[1].VP[5] * Splitter1.outT[2] ^ MatStm4.comp[1].VP[6])
*/
void Flowsheet_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  modelica_real tmp69;
  modelica_real tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_real tmp75;
  tmp69 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  tmp70 = data->simulationInfo->realParameter[666];
  if(tmp69 < 0.0 && tmp70 != 0.0)
  {
    tmp72 = modf(tmp70, &tmp73);
    
    if(tmp72 > 0.5)
    {
      tmp72 -= 1.0;
      tmp73 += 1.0;
    }
    else if(tmp72 < -0.5)
    {
      tmp72 += 1.0;
      tmp73 -= 1.0;
    }
    
    if(fabs(tmp72) < 1e-10)
      tmp71 = pow(tmp69, tmp73);
    else
    {
      tmp75 = modf(1.0/tmp70, &tmp74);
      if(tmp75 > 0.5)
      {
        tmp75 -= 1.0;
        tmp74 += 1.0;
      }
      else if(tmp75 < -0.5)
      {
        tmp75 += 1.0;
        tmp74 -= 1.0;
      }
      if(fabs(tmp75) < 1e-10 && ((unsigned long)tmp74 & 1))
      {
        tmp71 = -pow(-tmp69, tmp72)*pow(tmp69, tmp73);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp69, tmp70);
      }
    }
  }
  else
  {
    tmp71 = pow(tmp69, tmp70);
  }
  if(isnan(tmp71) || isinf(tmp71))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp69, tmp70);
  }
  data->localData[0]->realVars[11] /* $cse8 variable */ = exp((-data->simulationInfo->realParameter[662]) - (DIVISION_SIM(data->simulationInfo->realParameter[663],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes)) - ((data->simulationInfo->realParameter[664]) * (data->localData[0]->realVars[5] /* $cse2 variable */)) - ((data->simulationInfo->realParameter[665]) * (tmp71)));
  TRACE_POP
}
/*
equation index: 655
type: SIMPLE_ASSIGN
$cse7 = exp(MatStm4.comp[2].VP[2] + MatStm4.comp[2].VP[3] / Splitter1.outT[2] + MatStm4.comp[2].VP[4] * $cse2 + MatStm4.comp[2].VP[5] * Splitter1.outT[2] ^ MatStm4.comp[2].VP[6])
*/
void Flowsheet_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_real tmp78;
  modelica_real tmp79;
  modelica_real tmp80;
  modelica_real tmp81;
  modelica_real tmp82;
  tmp76 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  tmp77 = data->simulationInfo->realParameter[672];
  if(tmp76 < 0.0 && tmp77 != 0.0)
  {
    tmp79 = modf(tmp77, &tmp80);
    
    if(tmp79 > 0.5)
    {
      tmp79 -= 1.0;
      tmp80 += 1.0;
    }
    else if(tmp79 < -0.5)
    {
      tmp79 += 1.0;
      tmp80 -= 1.0;
    }
    
    if(fabs(tmp79) < 1e-10)
      tmp78 = pow(tmp76, tmp80);
    else
    {
      tmp82 = modf(1.0/tmp77, &tmp81);
      if(tmp82 > 0.5)
      {
        tmp82 -= 1.0;
        tmp81 += 1.0;
      }
      else if(tmp82 < -0.5)
      {
        tmp82 += 1.0;
        tmp81 -= 1.0;
      }
      if(fabs(tmp82) < 1e-10 && ((unsigned long)tmp81 & 1))
      {
        tmp78 = -pow(-tmp76, tmp79)*pow(tmp76, tmp80);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp76, tmp77);
      }
    }
  }
  else
  {
    tmp78 = pow(tmp76, tmp77);
  }
  if(isnan(tmp78) || isinf(tmp78))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp76, tmp77);
  }
  data->localData[0]->realVars[10] /* $cse7 variable */ = exp(data->simulationInfo->realParameter[668] + DIVISION_SIM(data->simulationInfo->realParameter[669],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes) + (data->simulationInfo->realParameter[670]) * (data->localData[0]->realVars[5] /* $cse2 variable */) + (data->simulationInfo->realParameter[671]) * (tmp78));
  TRACE_POP
}
/*
equation index: 656
type: SIMPLE_ASSIGN
$cse6 = exp(MatStm4.comp[1].VP[2] + MatStm4.comp[1].VP[3] / Splitter1.outT[2] + MatStm4.comp[1].VP[4] * $cse2 + MatStm4.comp[1].VP[5] * Splitter1.outT[2] ^ MatStm4.comp[1].VP[6])
*/
void Flowsheet_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  modelica_real tmp83;
  modelica_real tmp84;
  modelica_real tmp85;
  modelica_real tmp86;
  modelica_real tmp87;
  modelica_real tmp88;
  modelica_real tmp89;
  tmp83 = data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */;
  tmp84 = data->simulationInfo->realParameter[666];
  if(tmp83 < 0.0 && tmp84 != 0.0)
  {
    tmp86 = modf(tmp84, &tmp87);
    
    if(tmp86 > 0.5)
    {
      tmp86 -= 1.0;
      tmp87 += 1.0;
    }
    else if(tmp86 < -0.5)
    {
      tmp86 += 1.0;
      tmp87 -= 1.0;
    }
    
    if(fabs(tmp86) < 1e-10)
      tmp85 = pow(tmp83, tmp87);
    else
    {
      tmp89 = modf(1.0/tmp84, &tmp88);
      if(tmp89 > 0.5)
      {
        tmp89 -= 1.0;
        tmp88 += 1.0;
      }
      else if(tmp89 < -0.5)
      {
        tmp89 += 1.0;
        tmp88 -= 1.0;
      }
      if(fabs(tmp89) < 1e-10 && ((unsigned long)tmp88 & 1))
      {
        tmp85 = -pow(-tmp83, tmp86)*pow(tmp83, tmp87);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp83, tmp84);
      }
    }
  }
  else
  {
    tmp85 = pow(tmp83, tmp84);
  }
  if(isnan(tmp85) || isinf(tmp85))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp83, tmp84);
  }
  data->localData[0]->realVars[9] /* $cse6 variable */ = exp(data->simulationInfo->realParameter[662] + DIVISION_SIM(data->simulationInfo->realParameter[663],data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,"Splitter1.outT[2]",equationIndexes) + (data->simulationInfo->realParameter[664]) * (data->localData[0]->realVars[5] /* $cse2 variable */) + (data->simulationInfo->realParameter[665]) * (tmp85));
  TRACE_POP
}
/*
equation index: 657
type: ALGORITHM

  (MatStm1.compMolEntr[2,2], MatStm1.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[2].AS, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tb, MatStm1.comp[2].Tc, Splitter1.outT[2], 101325.0, MatStm1.compMolFrac[2,2], MatStm1.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  real_array tmp90;
  real_array tmp91;
  array_alloc_scalar_real_array(&tmp90, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp91, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[43] /* MatStm1.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[82], tmp90, tmp91, data->simulationInfo->realParameter[178], data->simulationInfo->realParameter[180], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */, 101325.0, data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */, data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[45] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 658
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  real_array tmp92;
  array_alloc_scalar_real_array(&tmp92, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  data->localData[0]->realVars[63] /* MatStm1.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp92, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 659
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[2].LiqCp[1], MatStm1.comp[2].LiqCp[2], MatStm1.comp[2].LiqCp[3], MatStm1.comp[2].LiqCp[4], MatStm1.comp[2].LiqCp[5], MatStm1.comp[2].LiqCp[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  real_array tmp93;
  array_alloc_scalar_real_array(&tmp93, 6, (modelica_real)data->simulationInfo->realParameter[121], (modelica_real)data->simulationInfo->realParameter[122], (modelica_real)data->simulationInfo->realParameter[123], (modelica_real)data->simulationInfo->realParameter[124], (modelica_real)data->simulationInfo->realParameter[125], (modelica_real)data->simulationInfo->realParameter[126]);
  data->localData[0]->realVars[61] /* MatStm1.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp93, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 660
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, Splitter1.outT[2], 101325.0, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  real_array tmp94;
  real_array tmp95;
  array_alloc_scalar_real_array(&tmp94, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp95, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[42] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[81], tmp94, tmp95, data->simulationInfo->realParameter[177], data->simulationInfo->realParameter[179], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */, 101325.0, data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[44] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 661
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEntr[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEntr[3,2]
*/
void Flowsheet_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->localData[0]->realVars[79] /* MatStm1.phasMolEntr[3] variable */ = (data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[44] /* MatStm1.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[45] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 662
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEntr[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEntr[2,2]
*/
void Flowsheet_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  data->localData[0]->realVars[78] /* MatStm1.phasMolEntr[2] variable */ = (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[42] /* MatStm1.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[43] /* MatStm1.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 663
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolEntr[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolEntr[3]
*/
void Flowsheet_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->localData[0]->realVars[77] /* MatStm1.phasMolEntr[1] variable */ = (data->localData[0]->realVars[71] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[78] /* MatStm1.phasMolEntr[2] variable */) + (data->localData[0]->realVars[99] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[79] /* MatStm1.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 664
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEntr[1]
*/
void Flowsheet_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  data->localData[0]->realVars[40] /* MatStm1.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[77] /* MatStm1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 665
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolEntr[1]
*/
void Flowsheet_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  data->localData[0]->realVars[41] /* MatStm1.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[77] /* MatStm1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 666
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  real_array tmp96;
  array_alloc_scalar_real_array(&tmp96, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  data->localData[0]->realVars[62] /* MatStm1.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp96, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 667
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolSpHeat[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolSpHeat[3,2]
*/
void Flowsheet_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->localData[0]->realVars[82] /* MatStm1.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[62] /* MatStm1.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[63] /* MatStm1.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 668
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[1].LiqCp[1], MatStm1.comp[1].LiqCp[2], MatStm1.comp[1].LiqCp[3], MatStm1.comp[1].LiqCp[4], MatStm1.comp[1].LiqCp[5], MatStm1.comp[1].LiqCp[6]}, Splitter1.outT[2])
*/
void Flowsheet_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  real_array tmp97;
  array_alloc_scalar_real_array(&tmp97, 6, (modelica_real)data->simulationInfo->realParameter[115], (modelica_real)data->simulationInfo->realParameter[116], (modelica_real)data->simulationInfo->realParameter[117], (modelica_real)data->simulationInfo->realParameter[118], (modelica_real)data->simulationInfo->realParameter[119], (modelica_real)data->simulationInfo->realParameter[120]);
  data->localData[0]->realVars[60] /* MatStm1.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp97, data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */);
  TRACE_POP
}
/*
equation index: 669
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolSpHeat[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolSpHeat[2,2]
*/
void Flowsheet_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  data->localData[0]->realVars[81] /* MatStm1.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[60] /* MatStm1.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[61] /* MatStm1.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 670
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolSpHeat[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  data->localData[0]->realVars[80] /* MatStm1.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[71] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[81] /* MatStm1.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[99] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[82] /* MatStm1.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 671
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  data->localData[0]->realVars[58] /* MatStm1.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[80] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 672
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  data->localData[0]->realVars[59] /* MatStm1.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[80] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 673
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEnth[1]
*/
void Flowsheet_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  data->localData[0]->realVars[34] /* MatStm1.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[74] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 674
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolEnth[1]
*/
void Flowsheet_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  data->localData[0]->realVars[35] /* MatStm1.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[74] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 675
type: SIMPLE_ASSIGN
MatStm3._phasMolEntr[1] = MatStm3.liqPhasMolFrac * MatStm3.phasMolEntr[2] + Mixer1.inVapPhasMolFrac[1] * MatStm3.phasMolEntr[3]
*/
void Flowsheet_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  data->localData[0]->realVars[258] /* MatStm3.phasMolEntr[1] variable */ = (data->localData[0]->realVars[252] /* MatStm3.liqPhasMolFrac variable */) * (data->localData[0]->realVars[259] /* MatStm3.phasMolEntr[2] variable */) + (data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */) * (data->localData[0]->realVars[260] /* MatStm3.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 676
type: SIMPLE_ASSIGN
MatStm3._compMolEntr[1,1] = MatStm3.compMolFrac[1,1] * MatStm3.phasMolEntr[1]
*/
void Flowsheet_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  data->localData[0]->realVars[221] /* MatStm3.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[233] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[258] /* MatStm3.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 677
type: SIMPLE_ASSIGN
MatStm3._compMolEntr[1,2] = MatStm3.compMolFrac[1,2] * MatStm3.phasMolEntr[1]
*/
void Flowsheet_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  data->localData[0]->realVars[222] /* MatStm3.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[234] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[258] /* MatStm3.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 678
type: SIMPLE_ASSIGN
Splitter1._inMixMolFrac[2] = MatStm1.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  data->localData[0]->realVars[462] /* Splitter1.inMixMolFrac[2] variable */ = data->localData[0]->realVars[53] /* MatStm1.compMolFrac[1,2] variable */;
  TRACE_POP
}
/*
equation index: 679
type: SIMPLE_ASSIGN
MatStm4._compMolFrac[1,2] = MatStm1.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  data->localData[0]->realVars[322] /* MatStm4.compMolFrac[1,2] variable */ = data->localData[0]->realVars[53] /* MatStm1.compMolFrac[1,2] variable */;
  TRACE_POP
}
/*
equation index: 680
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[1,2] = 50.0 * MatStm4.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  data->localData[0]->realVars[316] /* MatStm4.compMolFlo[1,2] variable */ = (50.0) * (data->localData[0]->realVars[322] /* MatStm4.compMolFrac[1,2] variable */);
  TRACE_POP
}
/*
equation index: 681
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[1,2] = MatStm4.compMolFlo[1,2] * MatStm4.comp[2].MW
*/
void Flowsheet_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  data->localData[0]->realVars[292] /* MatStm4.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[316] /* MatStm4.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[638]);
  TRACE_POP
}
/*
equation index: 682
type: SIMPLE_ASSIGN
MatStm5._compMolFrac[1,2] = MatStm1.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */ = data->localData[0]->realVars[53] /* MatStm1.compMolFrac[1,2] variable */;
  TRACE_POP
}
/*
equation index: 683
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[1,2] = 50.0 * MatStm5.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  data->localData[0]->realVars[404] /* MatStm5.compMolFlo[1,2] variable */ = (50.0) * (data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */);
  TRACE_POP
}
/*
equation index: 684
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[1,2] = MatStm5.compMolFlo[1,2] * MatStm5.comp[2].MW
*/
void Flowsheet_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  data->localData[0]->realVars[380] /* MatStm5.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[404] /* MatStm5.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[796]);
  TRACE_POP
}
/*
equation index: 685
type: SIMPLE_ASSIGN
Splitter1._inMixMolFrac[1] = MatStm1.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  data->localData[0]->realVars[461] /* Splitter1.inMixMolFrac[1] variable */ = data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */;
  TRACE_POP
}
/*
equation index: 686
type: ALGORITHM

  Splitter1.MW := $START.Splitter1.MW;
  Splitter1.MW := 0.0;
  for i in 1:2 loop
    Splitter1.MW := Splitter1.MW + Splitter1.comp[i].MW * Splitter1.inMixMolFrac[i];
  end for;
*/
void Flowsheet_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  modelica_integer tmp98;
  modelica_integer tmp99;
  modelica_integer tmp100;
  data->localData[0]->realVars[460] /* Splitter1.MW variable */ = data->modelData->realVarsData[460].attribute /* Splitter1.MW variable */.start;

  data->localData[0]->realVars[460] /* Splitter1.MW variable */ = 0.0;

  tmp98 = ((modelica_integer) 1); tmp99 = 1; tmp100 = ((modelica_integer) 2);
  if(!(((tmp99 > 0) && (tmp98 > tmp100)) || ((tmp99 < 0) && (tmp98 < tmp100))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp98, tmp100); $Pi += tmp99)
    {
      data->localData[0]->realVars[460] /* Splitter1.MW variable */ = data->localData[0]->realVars[460] /* Splitter1.MW variable */ + ((&data->simulationInfo->realParameter[1111])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[461] /* Splitter1.inMixMolFrac[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]);
    }
  }
  TRACE_POP
}
/*
equation index: 687
type: SIMPLE_ASSIGN
Splitter1._outMixMasFlo[2] = 50.0 * Splitter1.MW
*/
void Flowsheet_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  data->localData[0]->realVars[464] /* Splitter1.outMixMasFlo[2] variable */ = (50.0) * (data->localData[0]->realVars[460] /* Splitter1.MW variable */);
  TRACE_POP
}
/*
equation index: 688
type: SIMPLE_ASSIGN
Splitter1._outMixMasFlo[1] = Splitter1.outMixMasFlo[2]
*/
void Flowsheet_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  data->localData[0]->realVars[463] /* Splitter1.outMixMasFlo[1] variable */ = data->localData[0]->realVars[464] /* Splitter1.outMixMasFlo[2] variable */;
  TRACE_POP
}
/*
equation index: 689
type: SIMPLE_ASSIGN
MatStm4._compMolFrac[1,1] = MatStm1.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,689};
  data->localData[0]->realVars[321] /* MatStm4.compMolFrac[1,1] variable */ = data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */;
  TRACE_POP
}
/*
equation index: 690
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[1,1] = 50.0 * MatStm4.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  data->localData[0]->realVars[315] /* MatStm4.compMolFlo[1,1] variable */ = (50.0) * (data->localData[0]->realVars[321] /* MatStm4.compMolFrac[1,1] variable */);
  TRACE_POP
}
/*
equation index: 691
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[1,1] = MatStm4.compMolFlo[1,1] * MatStm4.comp[1].MW
*/
void Flowsheet_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  data->localData[0]->realVars[291] /* MatStm4.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[315] /* MatStm4.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[637]);
  TRACE_POP
}
/*
equation index: 692
type: SIMPLE_ASSIGN
MatStm4._Pdew = 1.0 / (MatStm4.compMolFrac[1,1] * $cse8 + MatStm4.compMolFrac[1,2] * $cse9)
*/
void Flowsheet_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  data->localData[0]->realVars[288] /* MatStm4.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[321] /* MatStm4.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[11] /* $cse8 variable */) + (data->localData[0]->realVars[322] /* MatStm4.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[12] /* $cse9 variable */),"MatStm4.compMolFrac[1,1] * $cse8 + MatStm4.compMolFrac[1,2] * $cse9",equationIndexes);
  TRACE_POP
}
/*
equation index: 693
type: SIMPLE_ASSIGN
MatStm4._Pbubl = MatStm4.compMolFrac[1,1] * $cse6 + MatStm4.compMolFrac[1,2] * $cse7
*/
void Flowsheet_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */ = (data->localData[0]->realVars[321] /* MatStm4.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[9] /* $cse6 variable */) + (data->localData[0]->realVars[322] /* MatStm4.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[10] /* $cse7 variable */);
  TRACE_POP
}
void Flowsheet_eqFunction_694(DATA*, threadData_t*);
void Flowsheet_eqFunction_695(DATA*, threadData_t*);
void Flowsheet_eqFunction_696(DATA*, threadData_t*);
void Flowsheet_eqFunction_697(DATA*, threadData_t*);
void Flowsheet_eqFunction_698(DATA*, threadData_t*);
void Flowsheet_eqFunction_699(DATA*, threadData_t*);
void Flowsheet_eqFunction_700(DATA*, threadData_t*);
void Flowsheet_eqFunction_705(DATA*, threadData_t*);
void Flowsheet_eqFunction_704(DATA*, threadData_t*);
void Flowsheet_eqFunction_703(DATA*, threadData_t*);
void Flowsheet_eqFunction_702(DATA*, threadData_t*);
void Flowsheet_eqFunction_701(DATA*, threadData_t*);
/*
equation index: 718
indexNonlinear: 8
type: NONLINEAR

vars: {MatStm4._totMolFlo[3], MatStm4._compMolFrac[2,1], MatStm4._compMolFrac[3,2], MatStm4._compMolFrac[2,2], MatStm4._compMolFrac[3,1]}
eqns: {694, 695, 696, 697, 698, 699, 700, 705, 704, 703, 702, 701}
*/
void Flowsheet_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 718 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[0] = data->localData[0]->realVars[365] /* MatStm4.totMolFlo[3] variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[1] = data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[2] = data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[3] = data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[4] = data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 8);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,718};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 718 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[365] /* MatStm4.totMolFlo[3] variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[0];
  data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[1];
  data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[2];
  data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[3];
  data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[4];
  TRACE_POP
}
/*
equation index: 719
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[3,2] = MatStm4.compMolFlo[3,2] * MatStm4.comp[2].MW
*/
void Flowsheet_eqFunction_719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,719};
  data->localData[0]->realVars[296] /* MatStm4.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[320] /* MatStm4.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[638]);
  TRACE_POP
}
/*
equation index: 720
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[2,2] = MatStm4.compMolFlo[2,2] * MatStm4.comp[2].MW
*/
void Flowsheet_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  data->localData[0]->realVars[294] /* MatStm4.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[318] /* MatStm4.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[638]);
  TRACE_POP
}
/*
equation index: 721
type: ALGORITHM

  (MatStm4.compMolEntr[2,2], MatStm4.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm4.comp[2].AS, {MatStm4.comp[2].VapCp[1], MatStm4.comp[2].VapCp[2], MatStm4.comp[2].VapCp[3], MatStm4.comp[2].VapCp[4], MatStm4.comp[2].VapCp[5], MatStm4.comp[2].VapCp[6]}, {MatStm4.comp[2].HOV[1], MatStm4.comp[2].HOV[2], MatStm4.comp[2].HOV[3], MatStm4.comp[2].HOV[4], MatStm4.comp[2].HOV[5], MatStm4.comp[2].HOV[6]}, MatStm4.comp[2].Tb, MatStm4.comp[2].Tc, Splitter1.outT[2], 101325.0, MatStm4.compMolFrac[2,2], MatStm4.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[679], (modelica_real)data->simulationInfo->realParameter[680], (modelica_real)data->simulationInfo->realParameter[681], (modelica_real)data->simulationInfo->realParameter[682], (modelica_real)data->simulationInfo->realParameter[683], (modelica_real)data->simulationInfo->realParameter[684]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[579], (modelica_real)data->simulationInfo->realParameter[580], (modelica_real)data->simulationInfo->realParameter[581], (modelica_real)data->simulationInfo->realParameter[582], (modelica_real)data->simulationInfo->realParameter[583], (modelica_real)data->simulationInfo->realParameter[584]);
  data->localData[0]->realVars[312] /* MatStm4.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[556], tmp0, tmp1, data->simulationInfo->realParameter[652], data->simulationInfo->realParameter[654], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */, 101325.0, data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */, data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[314] /* MatStm4.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 722
type: SIMPLE_ASSIGN
MatStm4._phasMolSpHeat[3] = MatStm4.compMolFrac[3,1] * MatStm4.compMolSpHeat[3,1] + MatStm4.compMolFrac[3,2] * MatStm4.compMolSpHeat[3,2]
*/
void Flowsheet_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  data->localData[0]->realVars[351] /* MatStm4.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[331] /* MatStm4.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[332] /* MatStm4.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 723
type: SIMPLE_ASSIGN
MatStm4._phasMolEnth[3] = MatStm4.compMolFrac[3,1] * MatStm4.compMolEnth[3,1] + MatStm4.compMolFrac[3,2] * MatStm4.compMolEnth[3,2]
*/
void Flowsheet_eqFunction_723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,723};
  data->localData[0]->realVars[345] /* MatStm4.phasMolEnth[3] variable */ = (data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[307] /* MatStm4.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[308] /* MatStm4.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 724
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[3,1] = MatStm4.compMolFlo[3,1] * MatStm4.comp[1].MW
*/
void Flowsheet_eqFunction_724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,724};
  data->localData[0]->realVars[295] /* MatStm4.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[319] /* MatStm4.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[637]);
  TRACE_POP
}
/*
equation index: 725
type: SIMPLE_ASSIGN
MatStm4._compMasFlo[2,1] = MatStm4.compMolFlo[2,1] * MatStm4.comp[1].MW
*/
void Flowsheet_eqFunction_725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,725};
  data->localData[0]->realVars[293] /* MatStm4.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[317] /* MatStm4.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[637]);
  TRACE_POP
}
/*
equation index: 726
type: SIMPLE_ASSIGN
MatStm4._phasMolSpHeat[2] = MatStm4.compMolFrac[2,1] * MatStm4.compMolSpHeat[2,1] + MatStm4.compMolFrac[2,2] * MatStm4.compMolSpHeat[2,2]
*/
void Flowsheet_eqFunction_726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,726};
  data->localData[0]->realVars[350] /* MatStm4.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[329] /* MatStm4.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[330] /* MatStm4.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 727
type: SIMPLE_ASSIGN
MatStm4._phasMolSpHeat[1] = MatStm4.liqPhasMolFrac * MatStm4.phasMolSpHeat[2] + MatStm4.vapPhasMolFrac * MatStm4.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,727};
  data->localData[0]->realVars[349] /* MatStm4.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[340] /* MatStm4.liqPhasMolFrac variable */) * (data->localData[0]->realVars[350] /* MatStm4.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[367] /* MatStm4.vapPhasMolFrac variable */) * (data->localData[0]->realVars[351] /* MatStm4.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 728
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[1,2] = MatStm4.compMolFrac[1,2] * MatStm4.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,728};
  data->localData[0]->realVars[328] /* MatStm4.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[322] /* MatStm4.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[349] /* MatStm4.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 729
type: SIMPLE_ASSIGN
MatStm4._phasMolEnth[2] = MatStm4.compMolFrac[2,1] * MatStm4.compMolEnth[2,1] + MatStm4.compMolFrac[2,2] * MatStm4.compMolEnth[2,2]
*/
void Flowsheet_eqFunction_729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,729};
  data->localData[0]->realVars[344] /* MatStm4.phasMolEnth[2] variable */ = (data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[305] /* MatStm4.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[306] /* MatStm4.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 730
type: SIMPLE_ASSIGN
MatStm4._phasMolEnth[1] = MatStm4.liqPhasMolFrac * MatStm4.phasMolEnth[2] + MatStm4.vapPhasMolFrac * MatStm4.phasMolEnth[3]
*/
void Flowsheet_eqFunction_730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,730};
  data->localData[0]->realVars[343] /* MatStm4.phasMolEnth[1] variable */ = (data->localData[0]->realVars[340] /* MatStm4.liqPhasMolFrac variable */) * (data->localData[0]->realVars[344] /* MatStm4.phasMolEnth[2] variable */) + (data->localData[0]->realVars[367] /* MatStm4.vapPhasMolFrac variable */) * (data->localData[0]->realVars[345] /* MatStm4.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 731
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[1,2] = MatStm4.compMolFrac[1,2] * MatStm4.phasMolEnth[1]
*/
void Flowsheet_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  data->localData[0]->realVars[304] /* MatStm4.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[322] /* MatStm4.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[343] /* MatStm4.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 732
type: ALGORITHM

  (MatStm4.compMolEntr[2,1], MatStm4.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm4.comp[1].AS, {MatStm4.comp[1].VapCp[1], MatStm4.comp[1].VapCp[2], MatStm4.comp[1].VapCp[3], MatStm4.comp[1].VapCp[4], MatStm4.comp[1].VapCp[5], MatStm4.comp[1].VapCp[6]}, {MatStm4.comp[1].HOV[1], MatStm4.comp[1].HOV[2], MatStm4.comp[1].HOV[3], MatStm4.comp[1].HOV[4], MatStm4.comp[1].HOV[5], MatStm4.comp[1].HOV[6]}, MatStm4.comp[1].Tb, MatStm4.comp[1].Tc, Splitter1.outT[2], 101325.0, MatStm4.compMolFrac[2,1], MatStm4.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,732};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[673], (modelica_real)data->simulationInfo->realParameter[674], (modelica_real)data->simulationInfo->realParameter[675], (modelica_real)data->simulationInfo->realParameter[676], (modelica_real)data->simulationInfo->realParameter[677], (modelica_real)data->simulationInfo->realParameter[678]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[573], (modelica_real)data->simulationInfo->realParameter[574], (modelica_real)data->simulationInfo->realParameter[575], (modelica_real)data->simulationInfo->realParameter[576], (modelica_real)data->simulationInfo->realParameter[577], (modelica_real)data->simulationInfo->realParameter[578]);
  data->localData[0]->realVars[311] /* MatStm4.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[555], tmp2, tmp3, data->simulationInfo->realParameter[651], data->simulationInfo->realParameter[653], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */, 101325.0, data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */, data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[313] /* MatStm4.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 733
type: SIMPLE_ASSIGN
MatStm4._phasMolEntr[3] = MatStm4.compMolFrac[3,1] * MatStm4.compMolEntr[3,1] + MatStm4.compMolFrac[3,2] * MatStm4.compMolEntr[3,2]
*/
void Flowsheet_eqFunction_733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,733};
  data->localData[0]->realVars[348] /* MatStm4.phasMolEntr[3] variable */ = (data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[313] /* MatStm4.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[314] /* MatStm4.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 734
type: SIMPLE_ASSIGN
MatStm4._phasMolEntr[2] = MatStm4.compMolFrac[2,1] * MatStm4.compMolEntr[2,1] + MatStm4.compMolFrac[2,2] * MatStm4.compMolEntr[2,2]
*/
void Flowsheet_eqFunction_734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,734};
  data->localData[0]->realVars[347] /* MatStm4.phasMolEntr[2] variable */ = (data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[311] /* MatStm4.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[312] /* MatStm4.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 735
type: SIMPLE_ASSIGN
MatStm4._phasMolEntr[1] = MatStm4.liqPhasMolFrac * MatStm4.phasMolEntr[2] + MatStm4.vapPhasMolFrac * MatStm4.phasMolEntr[3]
*/
void Flowsheet_eqFunction_735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,735};
  data->localData[0]->realVars[346] /* MatStm4.phasMolEntr[1] variable */ = (data->localData[0]->realVars[340] /* MatStm4.liqPhasMolFrac variable */) * (data->localData[0]->realVars[347] /* MatStm4.phasMolEntr[2] variable */) + (data->localData[0]->realVars[367] /* MatStm4.vapPhasMolFrac variable */) * (data->localData[0]->realVars[348] /* MatStm4.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 736
type: SIMPLE_ASSIGN
MatStm4._compMolEntr[1,2] = MatStm4.compMolFrac[1,2] * MatStm4.phasMolEntr[1]
*/
void Flowsheet_eqFunction_736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,736};
  data->localData[0]->realVars[310] /* MatStm4.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[322] /* MatStm4.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[346] /* MatStm4.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 737
type: SIMPLE_ASSIGN
MatStm4._compMolSpHeat[1,1] = MatStm4.compMolFrac[1,1] * MatStm4.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  data->localData[0]->realVars[327] /* MatStm4.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[321] /* MatStm4.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[349] /* MatStm4.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 738
type: SIMPLE_ASSIGN
MatStm4._compMolEnth[1,1] = MatStm4.compMolFrac[1,1] * MatStm4.phasMolEnth[1]
*/
void Flowsheet_eqFunction_738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,738};
  data->localData[0]->realVars[303] /* MatStm4.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[321] /* MatStm4.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[343] /* MatStm4.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 739
type: ALGORITHM

  MatStm4.MW[3] := $START.MatStm4.MW[3];
  MatStm4.MW[2] := $START.MatStm4.MW[2];
  MatStm4.MW[1] := $START.MatStm4.MW[1];
  for i in 1:2 loop
    MatStm4.MW[:] := {MatStm4.MW[1] + MatStm4.compMolFrac[1,i] * MatStm4.comp[i].MW, MatStm4.MW[2] + MatStm4.compMolFrac[2,i] * MatStm4.comp[i].MW, MatStm4.MW[3] + MatStm4.compMolFrac[3,i] * MatStm4.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[286] /* MatStm4.MW[3] variable */ = data->modelData->realVarsData[286].attribute /* MatStm4.MW[3] variable */.start;

  data->localData[0]->realVars[285] /* MatStm4.MW[2] variable */ = data->modelData->realVarsData[285].attribute /* MatStm4.MW[2] variable */.start;

  data->localData[0]->realVars[284] /* MatStm4.MW[1] variable */ = data->modelData->realVarsData[284].attribute /* MatStm4.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[284] /* MatStm4.MW[1] variable */ + ((&data->localData[0]->realVars[321] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[637])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[285] /* MatStm4.MW[2] variable */ + ((&data->localData[0]->realVars[321] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[637])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[286] /* MatStm4.MW[3] variable */ + ((&data->localData[0]->realVars[321] /* MatStm4.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[637])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[284] /* MatStm4.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
/*
equation index: 740
type: SIMPLE_ASSIGN
MatStm4._totMasFlo[3] = MatStm4.totMolFlo[3] * MatStm4.MW[3]
*/
void Flowsheet_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  data->localData[0]->realVars[363] /* MatStm4.totMasFlo[3] variable */ = (data->localData[0]->realVars[365] /* MatStm4.totMolFlo[3] variable */) * (data->localData[0]->realVars[286] /* MatStm4.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 741
type: SIMPLE_ASSIGN
MatStm4._totMasFlo[2] = MatStm4.totMolFlo[2] * MatStm4.MW[2]
*/
void Flowsheet_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  data->localData[0]->realVars[362] /* MatStm4.totMasFlo[2] variable */ = (data->localData[0]->realVars[364] /* MatStm4.totMolFlo[2] variable */) * (data->localData[0]->realVars[285] /* MatStm4.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 742
type: SIMPLE_ASSIGN
MatStm4._totMasFlo[1] = 50.0 * MatStm4.MW[1]
*/
void Flowsheet_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  data->localData[0]->realVars[361] /* MatStm4.totMasFlo[1] variable */ = (50.0) * (data->localData[0]->realVars[284] /* MatStm4.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 743
type: SIMPLE_ASSIGN
MatStm4._compMasFrac[1,2] = MatStm4.compMasFlo[1,2] / MatStm4.totMasFlo[1]
*/
void Flowsheet_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  data->localData[0]->realVars[298] /* MatStm4.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[292] /* MatStm4.compMasFlo[1,2] variable */,data->localData[0]->realVars[361] /* MatStm4.totMasFlo[1] variable */,"MatStm4.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 744
type: SIMPLE_ASSIGN
MatStm4._liqPhasMasFrac = MatStm4.totMasFlo[2] / MatStm4.totMasFlo[1]
*/
void Flowsheet_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  data->localData[0]->realVars[339] /* MatStm4.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[362] /* MatStm4.totMasFlo[2] variable */,data->localData[0]->realVars[361] /* MatStm4.totMasFlo[1] variable */,"MatStm4.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 745
type: LINEAR

<var>MatStm4._compMasFrac[3,1]</var>
<var>MatStm4._compMasFrac[2,1]</var>
<var>MatStm4._compMasFrac[3,2]</var>
<var>MatStm4._compMasFrac[2,2]</var>
<var>MatStm4._compMasFrac[1,1]</var>
<row>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then -MatStm4.compMasFrac[1,2] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[3,2] else -MatStm4.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm4.Pbubl then MatStm4.compMasFlo[1,1] else if 101325.0 >= MatStm4.Pdew then MatStm4.compMasFlo[3,1] else MatStm4.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="1">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="1" col="0">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="1">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -1.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then 0.0 else if 101325.0 >= MatStm4.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -0.0 else if 101325.0 >= MatStm4.Pdew then -MatStm4.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm4.Pbubl then -MatStm4.totMasFlo[1] else if 101325.0 >= MatStm4.Pdew then -0.0 else -MatStm4.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[301] /* MatStm4.compMasFrac[3,1] variable */,data->localData[1]->realVars[299] /* MatStm4.compMasFrac[2,1] variable */,data->localData[1]->realVars[302] /* MatStm4.compMasFrac[3,2] variable */,data->localData[1]->realVars[300] /* MatStm4.compMasFrac[2,2] variable */,data->localData[1]->realVars[297] /* MatStm4.compMasFrac[1,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 745 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 8, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,745};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 745 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[301] /* MatStm4.compMasFrac[3,1] variable */ = aux_x[0];
  data->localData[0]->realVars[299] /* MatStm4.compMasFrac[2,1] variable */ = aux_x[1];
  data->localData[0]->realVars[302] /* MatStm4.compMasFrac[3,2] variable */ = aux_x[2];
  data->localData[0]->realVars[300] /* MatStm4.compMasFrac[2,2] variable */ = aux_x[3];
  data->localData[0]->realVars[297] /* MatStm4.compMasFrac[1,1] variable */ = aux_x[4];
  TRACE_POP
}
/*
equation index: 746
type: SIMPLE_ASSIGN
MatStm4._vapPhasMasFrac = MatStm4.totMasFlo[3] / MatStm4.totMasFlo[1]
*/
void Flowsheet_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  data->localData[0]->realVars[366] /* MatStm4.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[363] /* MatStm4.totMasFlo[3] variable */,data->localData[0]->realVars[361] /* MatStm4.totMasFlo[1] variable */,"MatStm4.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 747
type: SIMPLE_ASSIGN
MatStm4._compMolEntr[1,1] = MatStm4.compMolFrac[1,1] * MatStm4.phasMolEntr[1]
*/
void Flowsheet_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  data->localData[0]->realVars[309] /* MatStm4.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[321] /* MatStm4.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[346] /* MatStm4.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 748
type: SIMPLE_ASSIGN
MatStm5._compMolFrac[1,1] = MatStm1.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */ = data->localData[0]->realVars[52] /* MatStm1.compMolFrac[1,1] variable */;
  TRACE_POP
}
/*
equation index: 749
type: SIMPLE_ASSIGN
MatStm5._compMolFlo[1,1] = 50.0 * MatStm5.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  data->localData[0]->realVars[403] /* MatStm5.compMolFlo[1,1] variable */ = (50.0) * (data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */);
  TRACE_POP
}
/*
equation index: 750
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[1,1] = MatStm5.compMolFlo[1,1] * MatStm5.comp[1].MW
*/
void Flowsheet_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[403] /* MatStm5.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[795]);
  TRACE_POP
}
/*
equation index: 751
type: SIMPLE_ASSIGN
MatStm5._Pdew = 1.0 / (MatStm5.compMolFrac[1,1] * $cse12 + MatStm5.compMolFrac[1,2] * $cse13)
*/
void Flowsheet_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  data->localData[0]->realVars[376] /* MatStm5.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[3] /* $cse12 variable */) + (data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[4] /* $cse13 variable */),"MatStm5.compMolFrac[1,1] * $cse12 + MatStm5.compMolFrac[1,2] * $cse13",equationIndexes);
  TRACE_POP
}
/*
equation index: 752
type: SIMPLE_ASSIGN
MatStm5._Pbubl = MatStm5.compMolFrac[1,1] * $cse10 + MatStm5.compMolFrac[1,2] * $cse11
*/
void Flowsheet_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */ = (data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[1] /* $cse10 variable */) + (data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[2] /* $cse11 variable */);
  TRACE_POP
}
void Flowsheet_eqFunction_753(DATA*, threadData_t*);
void Flowsheet_eqFunction_754(DATA*, threadData_t*);
void Flowsheet_eqFunction_755(DATA*, threadData_t*);
void Flowsheet_eqFunction_756(DATA*, threadData_t*);
void Flowsheet_eqFunction_757(DATA*, threadData_t*);
void Flowsheet_eqFunction_758(DATA*, threadData_t*);
void Flowsheet_eqFunction_759(DATA*, threadData_t*);
void Flowsheet_eqFunction_764(DATA*, threadData_t*);
void Flowsheet_eqFunction_763(DATA*, threadData_t*);
void Flowsheet_eqFunction_762(DATA*, threadData_t*);
void Flowsheet_eqFunction_761(DATA*, threadData_t*);
void Flowsheet_eqFunction_760(DATA*, threadData_t*);
/*
equation index: 777
indexNonlinear: 9
type: NONLINEAR

vars: {MatStm5._totMolFlo[2], MatStm5._compMolFrac[2,1], MatStm5._compMolFrac[3,1], MatStm5._compMolFrac[3,2], MatStm5._compMolFrac[2,2]}
eqns: {753, 754, 755, 756, 757, 758, 759, 764, 763, 762, 761, 760}
*/
void Flowsheet_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 777 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[0] = data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[1] = data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[2] = data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[3] = data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[4] = data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 9);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,777};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 777 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[9].nlsx[0];
  data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[9].nlsx[1];
  data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[9].nlsx[2];
  data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[9].nlsx[3];
  data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[9].nlsx[4];
  TRACE_POP
}
/*
equation index: 778
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[2,2] = MatStm5.compMolFlo[2,2] * MatStm5.comp[2].MW
*/
void Flowsheet_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  data->localData[0]->realVars[382] /* MatStm5.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[406] /* MatStm5.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[796]);
  TRACE_POP
}
/*
equation index: 779
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[3,2] = MatStm5.compMolFlo[3,2] * MatStm5.comp[2].MW
*/
void Flowsheet_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  data->localData[0]->realVars[384] /* MatStm5.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[408] /* MatStm5.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[796]);
  TRACE_POP
}
/*
equation index: 780
type: ALGORITHM

  (MatStm5.compMolEntr[2,2], MatStm5.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm5.comp[2].AS, {MatStm5.comp[2].VapCp[1], MatStm5.comp[2].VapCp[2], MatStm5.comp[2].VapCp[3], MatStm5.comp[2].VapCp[4], MatStm5.comp[2].VapCp[5], MatStm5.comp[2].VapCp[6]}, {MatStm5.comp[2].HOV[1], MatStm5.comp[2].HOV[2], MatStm5.comp[2].HOV[3], MatStm5.comp[2].HOV[4], MatStm5.comp[2].HOV[5], MatStm5.comp[2].HOV[6]}, MatStm5.comp[2].Tb, MatStm5.comp[2].Tc, Splitter1.outT[2], 101325.0, MatStm5.compMolFrac[2,2], MatStm5.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[837], (modelica_real)data->simulationInfo->realParameter[838], (modelica_real)data->simulationInfo->realParameter[839], (modelica_real)data->simulationInfo->realParameter[840], (modelica_real)data->simulationInfo->realParameter[841], (modelica_real)data->simulationInfo->realParameter[842]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[737], (modelica_real)data->simulationInfo->realParameter[738], (modelica_real)data->simulationInfo->realParameter[739], (modelica_real)data->simulationInfo->realParameter[740], (modelica_real)data->simulationInfo->realParameter[741], (modelica_real)data->simulationInfo->realParameter[742]);
  data->localData[0]->realVars[400] /* MatStm5.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[714], tmp0, tmp1, data->simulationInfo->realParameter[810], data->simulationInfo->realParameter[812], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */, 101325.0, data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */, data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[402] /* MatStm5.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 781
type: SIMPLE_ASSIGN
MatStm5._phasMolSpHeat[3] = MatStm5.compMolFrac[3,1] * MatStm5.compMolSpHeat[3,1] + MatStm5.compMolFrac[3,2] * MatStm5.compMolSpHeat[3,2]
*/
void Flowsheet_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  data->localData[0]->realVars[439] /* MatStm5.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[419] /* MatStm5.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[420] /* MatStm5.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 782
type: SIMPLE_ASSIGN
MatStm5._phasMolEnth[3] = MatStm5.compMolFrac[3,1] * MatStm5.compMolEnth[3,1] + MatStm5.compMolFrac[3,2] * MatStm5.compMolEnth[3,2]
*/
void Flowsheet_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  data->localData[0]->realVars[433] /* MatStm5.phasMolEnth[3] variable */ = (data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[395] /* MatStm5.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[396] /* MatStm5.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 783
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[3,1] = MatStm5.compMolFlo[3,1] * MatStm5.comp[1].MW
*/
void Flowsheet_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  data->localData[0]->realVars[383] /* MatStm5.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[407] /* MatStm5.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[795]);
  TRACE_POP
}
/*
equation index: 784
type: SIMPLE_ASSIGN
MatStm5._compMasFlo[2,1] = MatStm5.compMolFlo[2,1] * MatStm5.comp[1].MW
*/
void Flowsheet_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  data->localData[0]->realVars[381] /* MatStm5.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[405] /* MatStm5.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[795]);
  TRACE_POP
}
/*
equation index: 785
type: SIMPLE_ASSIGN
MatStm5._phasMolSpHeat[2] = MatStm5.compMolFrac[2,1] * MatStm5.compMolSpHeat[2,1] + MatStm5.compMolFrac[2,2] * MatStm5.compMolSpHeat[2,2]
*/
void Flowsheet_eqFunction_785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,785};
  data->localData[0]->realVars[438] /* MatStm5.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[417] /* MatStm5.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[418] /* MatStm5.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 786
type: SIMPLE_ASSIGN
MatStm5._phasMolSpHeat[1] = MatStm5.liqPhasMolFrac * MatStm5.phasMolSpHeat[2] + MatStm5.vapPhasMolFrac * MatStm5.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  data->localData[0]->realVars[437] /* MatStm5.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[428] /* MatStm5.liqPhasMolFrac variable */) * (data->localData[0]->realVars[438] /* MatStm5.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[455] /* MatStm5.vapPhasMolFrac variable */) * (data->localData[0]->realVars[439] /* MatStm5.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 787
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[1,2] = MatStm5.compMolFrac[1,2] * MatStm5.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  data->localData[0]->realVars[416] /* MatStm5.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[437] /* MatStm5.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 788
type: SIMPLE_ASSIGN
MatStm5._phasMolEnth[2] = MatStm5.compMolFrac[2,1] * MatStm5.compMolEnth[2,1] + MatStm5.compMolFrac[2,2] * MatStm5.compMolEnth[2,2]
*/
void Flowsheet_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  data->localData[0]->realVars[432] /* MatStm5.phasMolEnth[2] variable */ = (data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[393] /* MatStm5.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[394] /* MatStm5.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 789
type: SIMPLE_ASSIGN
MatStm5._phasMolEnth[1] = MatStm5.liqPhasMolFrac * MatStm5.phasMolEnth[2] + MatStm5.vapPhasMolFrac * MatStm5.phasMolEnth[3]
*/
void Flowsheet_eqFunction_789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,789};
  data->localData[0]->realVars[431] /* MatStm5.phasMolEnth[1] variable */ = (data->localData[0]->realVars[428] /* MatStm5.liqPhasMolFrac variable */) * (data->localData[0]->realVars[432] /* MatStm5.phasMolEnth[2] variable */) + (data->localData[0]->realVars[455] /* MatStm5.vapPhasMolFrac variable */) * (data->localData[0]->realVars[433] /* MatStm5.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 790
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[1,2] = MatStm5.compMolFrac[1,2] * MatStm5.phasMolEnth[1]
*/
void Flowsheet_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  data->localData[0]->realVars[392] /* MatStm5.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[431] /* MatStm5.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 791
type: ALGORITHM

  (MatStm5.compMolEntr[2,1], MatStm5.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm5.comp[1].AS, {MatStm5.comp[1].VapCp[1], MatStm5.comp[1].VapCp[2], MatStm5.comp[1].VapCp[3], MatStm5.comp[1].VapCp[4], MatStm5.comp[1].VapCp[5], MatStm5.comp[1].VapCp[6]}, {MatStm5.comp[1].HOV[1], MatStm5.comp[1].HOV[2], MatStm5.comp[1].HOV[3], MatStm5.comp[1].HOV[4], MatStm5.comp[1].HOV[5], MatStm5.comp[1].HOV[6]}, MatStm5.comp[1].Tb, MatStm5.comp[1].Tc, Splitter1.outT[2], 101325.0, MatStm5.compMolFrac[2,1], MatStm5.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[831], (modelica_real)data->simulationInfo->realParameter[832], (modelica_real)data->simulationInfo->realParameter[833], (modelica_real)data->simulationInfo->realParameter[834], (modelica_real)data->simulationInfo->realParameter[835], (modelica_real)data->simulationInfo->realParameter[836]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[731], (modelica_real)data->simulationInfo->realParameter[732], (modelica_real)data->simulationInfo->realParameter[733], (modelica_real)data->simulationInfo->realParameter[734], (modelica_real)data->simulationInfo->realParameter[735], (modelica_real)data->simulationInfo->realParameter[736]);
  data->localData[0]->realVars[399] /* MatStm5.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[713], tmp2, tmp3, data->simulationInfo->realParameter[809], data->simulationInfo->realParameter[811], data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */, 101325.0, data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */, data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[401] /* MatStm5.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 792
type: SIMPLE_ASSIGN
MatStm5._phasMolEntr[3] = MatStm5.compMolFrac[3,1] * MatStm5.compMolEntr[3,1] + MatStm5.compMolFrac[3,2] * MatStm5.compMolEntr[3,2]
*/
void Flowsheet_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  data->localData[0]->realVars[436] /* MatStm5.phasMolEntr[3] variable */ = (data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[401] /* MatStm5.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[402] /* MatStm5.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 793
type: SIMPLE_ASSIGN
MatStm5._phasMolEntr[2] = MatStm5.compMolFrac[2,1] * MatStm5.compMolEntr[2,1] + MatStm5.compMolFrac[2,2] * MatStm5.compMolEntr[2,2]
*/
void Flowsheet_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  data->localData[0]->realVars[435] /* MatStm5.phasMolEntr[2] variable */ = (data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[399] /* MatStm5.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[400] /* MatStm5.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 794
type: SIMPLE_ASSIGN
MatStm5._phasMolEntr[1] = MatStm5.liqPhasMolFrac * MatStm5.phasMolEntr[2] + MatStm5.vapPhasMolFrac * MatStm5.phasMolEntr[3]
*/
void Flowsheet_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  data->localData[0]->realVars[434] /* MatStm5.phasMolEntr[1] variable */ = (data->localData[0]->realVars[428] /* MatStm5.liqPhasMolFrac variable */) * (data->localData[0]->realVars[435] /* MatStm5.phasMolEntr[2] variable */) + (data->localData[0]->realVars[455] /* MatStm5.vapPhasMolFrac variable */) * (data->localData[0]->realVars[436] /* MatStm5.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 795
type: SIMPLE_ASSIGN
MatStm5._compMolEntr[1,2] = MatStm5.compMolFrac[1,2] * MatStm5.phasMolEntr[1]
*/
void Flowsheet_eqFunction_795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,795};
  data->localData[0]->realVars[398] /* MatStm5.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[434] /* MatStm5.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 796
type: SIMPLE_ASSIGN
MatStm5._compMolSpHeat[1,1] = MatStm5.compMolFrac[1,1] * MatStm5.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,796};
  data->localData[0]->realVars[415] /* MatStm5.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[437] /* MatStm5.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 797
type: SIMPLE_ASSIGN
MatStm5._compMolEnth[1,1] = MatStm5.compMolFrac[1,1] * MatStm5.phasMolEnth[1]
*/
void Flowsheet_eqFunction_797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,797};
  data->localData[0]->realVars[391] /* MatStm5.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[431] /* MatStm5.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 798
type: ALGORITHM

  MatStm5.MW[3] := $START.MatStm5.MW[3];
  MatStm5.MW[2] := $START.MatStm5.MW[2];
  MatStm5.MW[1] := $START.MatStm5.MW[1];
  for i in 1:2 loop
    MatStm5.MW[:] := {MatStm5.MW[1] + MatStm5.compMolFrac[1,i] * MatStm5.comp[i].MW, MatStm5.MW[2] + MatStm5.compMolFrac[2,i] * MatStm5.comp[i].MW, MatStm5.MW[3] + MatStm5.compMolFrac[3,i] * MatStm5.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,798};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[374] /* MatStm5.MW[3] variable */ = data->modelData->realVarsData[374].attribute /* MatStm5.MW[3] variable */.start;

  data->localData[0]->realVars[373] /* MatStm5.MW[2] variable */ = data->modelData->realVarsData[373].attribute /* MatStm5.MW[2] variable */.start;

  data->localData[0]->realVars[372] /* MatStm5.MW[1] variable */ = data->modelData->realVarsData[372].attribute /* MatStm5.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 2);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[372] /* MatStm5.MW[1] variable */ + ((&data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[795])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[373] /* MatStm5.MW[2] variable */ + ((&data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[795])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[374] /* MatStm5.MW[3] variable */ + ((&data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[795])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[372] /* MatStm5.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
/*
equation index: 799
type: SIMPLE_ASSIGN
MatStm5._totMasFlo[1] = 50.0 * MatStm5.MW[1]
*/
void Flowsheet_eqFunction_799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,799};
  data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */ = (50.0) * (data->localData[0]->realVars[372] /* MatStm5.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 800
type: SIMPLE_ASSIGN
MatStm5._compMasFrac[1,2] = MatStm5.compMasFlo[1,2] / MatStm5.totMasFlo[1]
*/
void Flowsheet_eqFunction_800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,800};
  data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[380] /* MatStm5.compMasFlo[1,2] variable */,data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */,"MatStm5.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 801
type: SIMPLE_ASSIGN
MatStm5._totMasFlo[2] = MatStm5.totMolFlo[2] * MatStm5.MW[2]
*/
void Flowsheet_eqFunction_801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,801};
  data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */ = (data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */) * (data->localData[0]->realVars[373] /* MatStm5.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 802
type: SIMPLE_ASSIGN
MatStm5._liqPhasMasFrac = MatStm5.totMasFlo[2] / MatStm5.totMasFlo[1]
*/
void Flowsheet_eqFunction_802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,802};
  data->localData[0]->realVars[427] /* MatStm5.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */,data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */,"MatStm5.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 803
type: SIMPLE_ASSIGN
MatStm5._totMasFlo[3] = MatStm5.totMolFlo[3] * MatStm5.MW[3]
*/
void Flowsheet_eqFunction_803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,803};
  data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */ = (data->localData[0]->realVars[453] /* MatStm5.totMolFlo[3] variable */) * (data->localData[0]->realVars[374] /* MatStm5.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 804
type: SIMPLE_ASSIGN
MatStm5._vapPhasMasFrac = MatStm5.totMasFlo[3] / MatStm5.totMasFlo[1]
*/
void Flowsheet_eqFunction_804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,804};
  data->localData[0]->realVars[454] /* MatStm5.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */,data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */,"MatStm5.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 805
type: LINEAR

<var>MatStm5._compMasFrac[3,1]</var>
<var>MatStm5._compMasFrac[1,1]</var>
<var>MatStm5._compMasFrac[2,2]</var>
<var>MatStm5._compMasFrac[2,1]</var>
<var>MatStm5._compMasFrac[3,2]</var>
<row>
  <cell>if 101325.0 >= MatStm5.Pbubl then -MatStm5.compMasFrac[1,2] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[3,2] else -MatStm5.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm5.Pbubl then MatStm5.compMasFlo[1,1] else if 101325.0 >= MatStm5.Pdew then MatStm5.compMasFlo[3,1] else MatStm5.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then -1.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="0">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then 0.0 else if 101325.0 >= MatStm5.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then -0.0 else if 101325.0 >= MatStm5.Pdew then -MatStm5.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm5.Pbubl then -MatStm5.totMasFlo[1] else if 101325.0 >= MatStm5.Pdew then -0.0 else -MatStm5.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,805};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[389] /* MatStm5.compMasFrac[3,1] variable */,data->localData[1]->realVars[385] /* MatStm5.compMasFrac[1,1] variable */,data->localData[1]->realVars[388] /* MatStm5.compMasFrac[2,2] variable */,data->localData[1]->realVars[387] /* MatStm5.compMasFrac[2,1] variable */,data->localData[1]->realVars[390] /* MatStm5.compMasFrac[3,2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 805 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 9, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,805};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 805 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[389] /* MatStm5.compMasFrac[3,1] variable */ = aux_x[0];
  data->localData[0]->realVars[385] /* MatStm5.compMasFrac[1,1] variable */ = aux_x[1];
  data->localData[0]->realVars[388] /* MatStm5.compMasFrac[2,2] variable */ = aux_x[2];
  data->localData[0]->realVars[387] /* MatStm5.compMasFrac[2,1] variable */ = aux_x[3];
  data->localData[0]->realVars[390] /* MatStm5.compMasFrac[3,2] variable */ = aux_x[4];
  TRACE_POP
}
/*
equation index: 806
type: SIMPLE_ASSIGN
MatStm5._compMolEntr[1,1] = MatStm5.compMolFrac[1,1] * MatStm5.phasMolEntr[1]
*/
void Flowsheet_eqFunction_806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,806};
  data->localData[0]->realVars[397] /* MatStm5.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[434] /* MatStm5.phasMolEntr[1] variable */);
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
  Flowsheet_eqFunction_472(data, threadData);

  Flowsheet_eqFunction_473(data, threadData);

  Flowsheet_eqFunction_474(data, threadData);

  Flowsheet_eqFunction_475(data, threadData);

  Flowsheet_eqFunction_500(data, threadData);

  Flowsheet_eqFunction_501(data, threadData);

  Flowsheet_eqFunction_502(data, threadData);

  Flowsheet_eqFunction_503(data, threadData);

  Flowsheet_eqFunction_504(data, threadData);

  Flowsheet_eqFunction_505(data, threadData);

  Flowsheet_eqFunction_506(data, threadData);

  Flowsheet_eqFunction_507(data, threadData);

  Flowsheet_eqFunction_508(data, threadData);

  Flowsheet_eqFunction_509(data, threadData);

  Flowsheet_eqFunction_510(data, threadData);

  Flowsheet_eqFunction_511(data, threadData);

  Flowsheet_eqFunction_512(data, threadData);

  Flowsheet_eqFunction_513(data, threadData);

  Flowsheet_eqFunction_514(data, threadData);

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

  Flowsheet_eqFunction_573(data, threadData);

  Flowsheet_eqFunction_574(data, threadData);

  Flowsheet_eqFunction_575(data, threadData);

  Flowsheet_eqFunction_576(data, threadData);

  Flowsheet_eqFunction_577(data, threadData);

  Flowsheet_eqFunction_578(data, threadData);

  Flowsheet_eqFunction_579(data, threadData);

  Flowsheet_eqFunction_580(data, threadData);

  Flowsheet_eqFunction_581(data, threadData);

  Flowsheet_eqFunction_612(data, threadData);

  Flowsheet_eqFunction_613(data, threadData);

  Flowsheet_eqFunction_614(data, threadData);

  Flowsheet_eqFunction_615(data, threadData);

  Flowsheet_eqFunction_616(data, threadData);

  Flowsheet_eqFunction_617(data, threadData);

  Flowsheet_eqFunction_618(data, threadData);

  Flowsheet_eqFunction_619(data, threadData);

  Flowsheet_eqFunction_620(data, threadData);

  Flowsheet_eqFunction_621(data, threadData);

  Flowsheet_eqFunction_622(data, threadData);

  Flowsheet_eqFunction_623(data, threadData);

  Flowsheet_eqFunction_624(data, threadData);

  Flowsheet_eqFunction_625(data, threadData);

  Flowsheet_eqFunction_626(data, threadData);

  Flowsheet_eqFunction_627(data, threadData);

  Flowsheet_eqFunction_628(data, threadData);

  Flowsheet_eqFunction_629(data, threadData);

  Flowsheet_eqFunction_630(data, threadData);

  Flowsheet_eqFunction_631(data, threadData);

  Flowsheet_eqFunction_632(data, threadData);

  Flowsheet_eqFunction_633(data, threadData);

  Flowsheet_eqFunction_634(data, threadData);

  Flowsheet_eqFunction_635(data, threadData);

  Flowsheet_eqFunction_636(data, threadData);

  Flowsheet_eqFunction_637(data, threadData);

  Flowsheet_eqFunction_638(data, threadData);

  Flowsheet_eqFunction_639(data, threadData);

  Flowsheet_eqFunction_640(data, threadData);

  Flowsheet_eqFunction_641(data, threadData);

  Flowsheet_eqFunction_642(data, threadData);

  Flowsheet_eqFunction_643(data, threadData);

  Flowsheet_eqFunction_644(data, threadData);

  Flowsheet_eqFunction_645(data, threadData);

  Flowsheet_eqFunction_646(data, threadData);

  Flowsheet_eqFunction_647(data, threadData);

  Flowsheet_eqFunction_648(data, threadData);

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

  Flowsheet_eqFunction_681(data, threadData);

  Flowsheet_eqFunction_682(data, threadData);

  Flowsheet_eqFunction_683(data, threadData);

  Flowsheet_eqFunction_684(data, threadData);

  Flowsheet_eqFunction_685(data, threadData);

  Flowsheet_eqFunction_686(data, threadData);

  Flowsheet_eqFunction_687(data, threadData);

  Flowsheet_eqFunction_688(data, threadData);

  Flowsheet_eqFunction_689(data, threadData);

  Flowsheet_eqFunction_690(data, threadData);

  Flowsheet_eqFunction_691(data, threadData);

  Flowsheet_eqFunction_692(data, threadData);

  Flowsheet_eqFunction_693(data, threadData);

  Flowsheet_eqFunction_718(data, threadData);

  Flowsheet_eqFunction_719(data, threadData);

  Flowsheet_eqFunction_720(data, threadData);

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

  Flowsheet_eqFunction_777(data, threadData);

  Flowsheet_eqFunction_778(data, threadData);

  Flowsheet_eqFunction_779(data, threadData);

  Flowsheet_eqFunction_780(data, threadData);

  Flowsheet_eqFunction_781(data, threadData);

  Flowsheet_eqFunction_782(data, threadData);

  Flowsheet_eqFunction_783(data, threadData);

  Flowsheet_eqFunction_784(data, threadData);

  Flowsheet_eqFunction_785(data, threadData);

  Flowsheet_eqFunction_786(data, threadData);

  Flowsheet_eqFunction_787(data, threadData);

  Flowsheet_eqFunction_788(data, threadData);

  Flowsheet_eqFunction_789(data, threadData);

  Flowsheet_eqFunction_790(data, threadData);

  Flowsheet_eqFunction_791(data, threadData);

  Flowsheet_eqFunction_792(data, threadData);

  Flowsheet_eqFunction_793(data, threadData);

  Flowsheet_eqFunction_794(data, threadData);

  Flowsheet_eqFunction_795(data, threadData);

  Flowsheet_eqFunction_796(data, threadData);

  Flowsheet_eqFunction_797(data, threadData);

  Flowsheet_eqFunction_798(data, threadData);

  Flowsheet_eqFunction_799(data, threadData);

  Flowsheet_eqFunction_800(data, threadData);

  Flowsheet_eqFunction_801(data, threadData);

  Flowsheet_eqFunction_802(data, threadData);

  Flowsheet_eqFunction_803(data, threadData);

  Flowsheet_eqFunction_804(data, threadData);

  Flowsheet_eqFunction_805(data, threadData);

  Flowsheet_eqFunction_806(data, threadData);
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
#define _OMC_LIT_RESOURCE_1_dir_data "C:/OMChemSimGUI/Simulator"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,9,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,25,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Modelica"
#define _OMC_LIT_RESOURCE_2_dir_data "C:/OpenModelica1.13.264bit/lib/omlibrary/Modelica 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,8,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,55,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "C:/OpenModelica1.13.264bit/lib/omlibrary/ModelicaServices 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,63,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "Simulator"
#define _OMC_LIT_RESOURCE_4_dir_data "C:/OMChemSimGUI/Simulator/Simulator"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,9,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,35,_OMC_LIT_RESOURCE_4_dir_data);

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
  data->modelData->modelDir = "C:/OMChemSimGUI/Simulator";
  data->modelData->modelGUID = "{8f1d1ce1-ee82-435a-94b7-ff681335a6b2}";
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
  data->modelData->nVariablesReal = 471;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 1264;
  data->modelData->nParametersInteger = 41;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 34;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 235;
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
  data->modelData->modelDataXml.nEquations = 2321;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 10;
  data->modelData->nNonLinearSystems = 10;
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


