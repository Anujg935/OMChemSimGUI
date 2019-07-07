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
equation index: 68
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,1] = MatStm1.compMolFlo[1,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[21] /* MatStm1.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[42]);
  TRACE_POP
}
/*
equation index: 69
type: SIMPLE_ASSIGN
MatStm1._K[1] = 9.869232667160129e-006 * MatStm1.Psat[1]
*/
void Flowsheet_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->localData[0]->realVars[0] /* MatStm1.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[7] /* MatStm1.Psat[1] variable */);
  TRACE_POP
}
void Flowsheet_eqFunction_70(DATA*, threadData_t*);
void Flowsheet_eqFunction_71(DATA*, threadData_t*);
void Flowsheet_eqFunction_72(DATA*, threadData_t*);
void Flowsheet_eqFunction_73(DATA*, threadData_t*);
void Flowsheet_eqFunction_74(DATA*, threadData_t*);
void Flowsheet_eqFunction_77(DATA*, threadData_t*);
void Flowsheet_eqFunction_76(DATA*, threadData_t*);
void Flowsheet_eqFunction_75(DATA*, threadData_t*);
/*
equation index: 86
indexNonlinear: 1
type: NONLINEAR

vars: {MatStm1._totMolFlo[2], MatStm1._compMolFrac[2,1], MatStm1._compMolFrac[3,1]}
eqns: {70, 71, 72, 73, 74, 77, 76, 75}
*/
void Flowsheet_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 86 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,86};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 86 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  TRACE_POP
}
/*
equation index: 87
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,1] = MatStm1.compMolFlo[2,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  data->localData[0]->realVars[10] /* MatStm1.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[22] /* MatStm1.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[42]);
  TRACE_POP
}
/*
equation index: 88
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,1] = MatStm1.compMolFlo[3,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  data->localData[0]->realVars[11] /* MatStm1.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[23] /* MatStm1.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[42]);
  TRACE_POP
}
/*
equation index: 89
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEnth[3,1]
*/
void Flowsheet_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  data->localData[0]->realVars[38] /* MatStm1.phasMolEnth[3] variable */ = (data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[17] /* MatStm1.compMolEnth[3,1] variable */);
  TRACE_POP
}
/*
equation index: 90
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolSpHeat[3,1]
*/
void Flowsheet_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  data->localData[0]->realVars[44] /* MatStm1.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[29] /* MatStm1.compMolSpHeat[3,1] variable */);
  TRACE_POP
}
/*
equation index: 91
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEnth[2,1]
*/
void Flowsheet_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  data->localData[0]->realVars[37] /* MatStm1.phasMolEnth[2] variable */ = (data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[16] /* MatStm1.compMolEnth[2,1] variable */);
  TRACE_POP
}
/*
equation index: 92
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolEnth[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolEnth[3]
*/
void Flowsheet_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  data->localData[0]->realVars[36] /* MatStm1.phasMolEnth[1] variable */ = (data->localData[0]->realVars[34] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[37] /* MatStm1.phasMolEnth[2] variable */) + (data->localData[0]->realVars[61] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[38] /* MatStm1.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 93
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEnth[1]
*/
void Flowsheet_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  data->localData[0]->realVars[15] /* MatStm1.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[24] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[36] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 94
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolSpHeat[2,1]
*/
void Flowsheet_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  data->localData[0]->realVars[43] /* MatStm1.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[28] /* MatStm1.compMolSpHeat[2,1] variable */);
  TRACE_POP
}
/*
equation index: 95
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolSpHeat[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  data->localData[0]->realVars[42] /* MatStm1.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[34] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[43] /* MatStm1.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[61] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[44] /* MatStm1.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 96
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  data->localData[0]->realVars[27] /* MatStm1.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[24] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[42] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 97
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, 320.0, 101325.0, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[60], (modelica_real)data->simulationInfo->realParameter[61], (modelica_real)data->simulationInfo->realParameter[62], (modelica_real)data->simulationInfo->realParameter[63], (modelica_real)data->simulationInfo->realParameter[64], (modelica_real)data->simulationInfo->realParameter[65]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[10], (modelica_real)data->simulationInfo->realParameter[11], (modelica_real)data->simulationInfo->realParameter[12], (modelica_real)data->simulationInfo->realParameter[13], (modelica_real)data->simulationInfo->realParameter[14], (modelica_real)data->simulationInfo->realParameter[15]);
  data->localData[0]->realVars[19] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[1], tmp0, tmp1, data->simulationInfo->realParameter[49], data->simulationInfo->realParameter[50], 320.0, 101325.0, data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[20] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 98
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEntr[3,1]
*/
void Flowsheet_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  data->localData[0]->realVars[41] /* MatStm1.phasMolEntr[3] variable */ = (data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[20] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 99
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEntr[2,1]
*/
void Flowsheet_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  data->localData[0]->realVars[40] /* MatStm1.phasMolEntr[2] variable */ = (data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[19] /* MatStm1.compMolEntr[2,1] variable */);
  TRACE_POP
}
/*
equation index: 100
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolEntr[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolEntr[3]
*/
void Flowsheet_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  data->localData[0]->realVars[39] /* MatStm1.phasMolEntr[1] variable */ = (data->localData[0]->realVars[34] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[40] /* MatStm1.phasMolEntr[2] variable */) + (data->localData[0]->realVars[61] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[41] /* MatStm1.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 101
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEntr[1]
*/
void Flowsheet_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  data->localData[0]->realVars[18] /* MatStm1.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[24] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[39] /* MatStm1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 102
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:1 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  real_array tmp2;
  index_spec_t tmp3;
  real_array tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  data->localData[0]->realVars[3] /* MatStm1.MW[3] variable */ = data->modelData->realVarsData[3].attribute /* MatStm1.MW[3] variable */.start;

  data->localData[0]->realVars[2] /* MatStm1.MW[2] variable */ = data->modelData->realVarsData[2].attribute /* MatStm1.MW[2] variable */.start;

  data->localData[0]->realVars[1] /* MatStm1.MW[1] variable */ = data->modelData->realVarsData[1].attribute /* MatStm1.MW[1] variable */.start;

  tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = ((modelica_integer) 1);
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp5, tmp7); $Pi += tmp6)
    {
      array_alloc_scalar_real_array(&tmp2, 3, (modelica_real)data->localData[0]->realVars[1] /* MatStm1.MW[1] variable */ + ((&data->localData[0]->realVars[24] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 1, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[42])[calc_base_index_dims_subs(1, 1, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[2] /* MatStm1.MW[2] variable */ + ((&data->localData[0]->realVars[24] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 1, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[42])[calc_base_index_dims_subs(1, 1, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[3] /* MatStm1.MW[3] variable */ + ((&data->localData[0]->realVars[24] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 1, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[42])[calc_base_index_dims_subs(1, 1, (modelica_integer)$Pi)]));
      create_index_spec(&tmp3, 1, (1), (int*)0, 'W');
      real_array_create(&tmp4, (modelica_real*)&data->localData[0]->realVars[1] /* MatStm1.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp2, &tmp4, &tmp3);
    }
  }
  TRACE_POP
}
/*
equation index: 103
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[2] = MatStm1.totMolFlo[2] * MatStm1.MW[2]
*/
void Flowsheet_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  data->localData[0]->realVars[55] /* MatStm1.totMasFlo[2] variable */ = (data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */) * (data->localData[0]->realVars[2] /* MatStm1.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 104
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[3] = MatStm1.totMolFlo[3] * MatStm1.MW[3]
*/
void Flowsheet_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  data->localData[0]->realVars[56] /* MatStm1.totMasFlo[3] variable */ = (data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */) * (data->localData[0]->realVars[3] /* MatStm1.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 105
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[1] = 100.0 * MatStm1.MW[1]
*/
void Flowsheet_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */ = (100.0) * (data->localData[0]->realVars[1] /* MatStm1.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 106
type: SIMPLE_ASSIGN
MatStm1._liqPhasMasFrac = MatStm1.totMasFlo[2] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  data->localData[0]->realVars[33] /* MatStm1.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[55] /* MatStm1.totMasFlo[2] variable */,data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 107
type: SIMPLE_ASSIGN
MatStm1._vapPhasMasFrac = MatStm1.totMasFlo[3] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->localData[0]->realVars[60] /* MatStm1.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[56] /* MatStm1.totMasFlo[3] variable */,data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 108
type: LINEAR

<var>MatStm1._compMasFrac[2,1]</var>
<var>MatStm1._compMasFrac[3,1]</var>
<var>MatStm1._compMasFrac[1,1]</var>
<row>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,1] else MatStm1.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,1] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="1" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  /* Linear equation system */
  int retValue;
  double aux_x[3] = { data->localData[1]->realVars[13] /* MatStm1.compMasFrac[2,1] variable */,data->localData[1]->realVars[14] /* MatStm1.compMasFrac[3,1] variable */,data->localData[1]->realVars[12] /* MatStm1.compMasFrac[1,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 108 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,108};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 108 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[13] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[0];
  data->localData[0]->realVars[14] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[1];
  data->localData[0]->realVars[12] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[2];
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
  Flowsheet_eqFunction_68(data, threadData);

  Flowsheet_eqFunction_69(data, threadData);

  Flowsheet_eqFunction_86(data, threadData);

  Flowsheet_eqFunction_87(data, threadData);

  Flowsheet_eqFunction_88(data, threadData);

  Flowsheet_eqFunction_89(data, threadData);

  Flowsheet_eqFunction_90(data, threadData);

  Flowsheet_eqFunction_91(data, threadData);

  Flowsheet_eqFunction_92(data, threadData);

  Flowsheet_eqFunction_93(data, threadData);

  Flowsheet_eqFunction_94(data, threadData);

  Flowsheet_eqFunction_95(data, threadData);

  Flowsheet_eqFunction_96(data, threadData);

  Flowsheet_eqFunction_97(data, threadData);

  Flowsheet_eqFunction_98(data, threadData);

  Flowsheet_eqFunction_99(data, threadData);

  Flowsheet_eqFunction_100(data, threadData);

  Flowsheet_eqFunction_101(data, threadData);

  Flowsheet_eqFunction_102(data, threadData);

  Flowsheet_eqFunction_103(data, threadData);

  Flowsheet_eqFunction_104(data, threadData);

  Flowsheet_eqFunction_105(data, threadData);

  Flowsheet_eqFunction_106(data, threadData);

  Flowsheet_eqFunction_107(data, threadData);

  Flowsheet_eqFunction_108(data, threadData);
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
  data->modelData->modelGUID = "{371cca8c-224e-423b-afb2-b8c7e1b53c04}";
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
  data->modelData->nVariablesReal = 63;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 158;
  data->modelData->nParametersInteger = 5;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 4;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 18;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.fileName = "Flowsheet_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 7;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 243;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 2;
  data->modelData->nNonLinearSystems = 2;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 6;
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


