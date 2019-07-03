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


<<<<<<< HEAD
/*
equation index: 96
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,1] = MatStm1.compMolFlo[1,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[35] /* MatStm1.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[163]);
  TRACE_POP
}
/*
equation index: 97
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,2] = MatStm1.compMolFlo[1,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  data->localData[0]->realVars[12] /* MatStm1.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[36] /* MatStm1.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[164]);
  TRACE_POP
}
/*
equation index: 98
type: SIMPLE_ASSIGN
MatStm1._K[1] = 9.869232667160129e-006 * MatStm1.Psat[1]
*/
void Flowsheet_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  data->localData[0]->realVars[0] /* MatStm1.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[8] /* MatStm1.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 99
type: SIMPLE_ASSIGN
MatStm1._K[2] = 9.869232667160129e-006 * MatStm1.Psat[2]
*/
void Flowsheet_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  data->localData[0]->realVars[1] /* MatStm1.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[9] /* MatStm1.Psat[2] variable */);
  TRACE_POP
}
void Flowsheet_eqFunction_100(DATA*, threadData_t*);
void Flowsheet_eqFunction_101(DATA*, threadData_t*);
void Flowsheet_eqFunction_102(DATA*, threadData_t*);
void Flowsheet_eqFunction_103(DATA*, threadData_t*);
void Flowsheet_eqFunction_104(DATA*, threadData_t*);
void Flowsheet_eqFunction_105(DATA*, threadData_t*);
void Flowsheet_eqFunction_110(DATA*, threadData_t*);
void Flowsheet_eqFunction_109(DATA*, threadData_t*);
void Flowsheet_eqFunction_108(DATA*, threadData_t*);
void Flowsheet_eqFunction_107(DATA*, threadData_t*);
void Flowsheet_eqFunction_106(DATA*, threadData_t*);
/*
equation index: 122
indexNonlinear: 1
type: NONLINEAR

vars: {MatStm1._totMolFlo[2], MatStm1._compMolFrac[3,2], MatStm1._compMolFrac[2,1], MatStm1._compMolFrac[3,1], MatStm1._compMolFrac[2,2]}
eqns: {100, 101, 102, 103, 104, 105, 110, 109, 108, 107, 106}
*/
void Flowsheet_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 122 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,122};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 122 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  TRACE_POP
}
/*
equation index: 123
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,2] = MatStm1.compMolFlo[2,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->localData[0]->realVars[14] /* MatStm1.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[38] /* MatStm1.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[164]);
  TRACE_POP
}
/*
equation index: 124
=======
void Flowsheet_eqFunction_188(DATA*, threadData_t*);
void Flowsheet_eqFunction_189(DATA*, threadData_t*);
void Flowsheet_eqFunction_190(DATA*, threadData_t*);
void Flowsheet_eqFunction_191(DATA*, threadData_t*);
void Flowsheet_eqFunction_192(DATA*, threadData_t*);
void Flowsheet_eqFunction_193(DATA*, threadData_t*);
void Flowsheet_eqFunction_194(DATA*, threadData_t*);
void Flowsheet_eqFunction_199(DATA*, threadData_t*);
void Flowsheet_eqFunction_198(DATA*, threadData_t*);
void Flowsheet_eqFunction_197(DATA*, threadData_t*);
void Flowsheet_eqFunction_196(DATA*, threadData_t*);
void Flowsheet_eqFunction_195(DATA*, threadData_t*);
/*
equation index: 212
indexNonlinear: 2
type: NONLINEAR

vars: {MatStm2._totMolFlo[2], MatStm2._compMolFrac[3,1], MatStm2._compMolFrac[2,2], MatStm2._compMolFrac[3,2], MatStm2._compMolFrac[2,1]}
eqns: {188, 189, 190, 191, 192, 193, 194, 199, 198, 197, 196, 195}
*/
void Flowsheet_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 212 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,212};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 212 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  TRACE_POP
}
/*
equation index: 213
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[3,2] = MatStm2.compMolFlo[3,2] * MatStm2.comp[2].MW
*/
void Flowsheet_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  data->localData[0]->realVars[114] /* MatStm2.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[138] /* MatStm2.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[322]);
  TRACE_POP
}
/*
equation index: 214
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[2,2] = MatStm2.compMolFlo[2,2] * MatStm2.comp[2].MW
*/
void Flowsheet_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  data->localData[0]->realVars[112] /* MatStm2.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[136] /* MatStm2.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[322]);
  TRACE_POP
}
/*
equation index: 215
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolSpHeat[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolSpHeat[2,2]
*/
void Flowsheet_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  data->localData[0]->realVars[168] /* MatStm2.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[147] /* MatStm2.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[148] /* MatStm2.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 216
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolEnth[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolEnth[2,2]
*/
void Flowsheet_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  data->localData[0]->realVars[162] /* MatStm2.phasMolEnth[2] variable */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[123] /* MatStm2.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[124] /* MatStm2.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 217
type: ALGORITHM

  (MatStm2.compMolEntr[2,2], MatStm2.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[2].AS, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tb, MatStm2.comp[2].Tc, 302.0, 101325.0, MatStm2.compMolFrac[2,2], MatStm2.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[363], (modelica_real)data->simulationInfo->realParameter[364], (modelica_real)data->simulationInfo->realParameter[365], (modelica_real)data->simulationInfo->realParameter[366], (modelica_real)data->simulationInfo->realParameter[367], (modelica_real)data->simulationInfo->realParameter[368]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[263], (modelica_real)data->simulationInfo->realParameter[264], (modelica_real)data->simulationInfo->realParameter[265], (modelica_real)data->simulationInfo->realParameter[266], (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268]);
  data->localData[0]->realVars[130] /* MatStm2.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[240], tmp0, tmp1, data->simulationInfo->realParameter[336], data->simulationInfo->realParameter[338], 302.0, 101325.0, data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */, data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[132] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 218
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,2] = MatStm1.compMolFlo[3,2] * MatStm1.comp[2].MW
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->localData[0]->realVars[16] /* MatStm1.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[40] /* MatStm1.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[164]);
  TRACE_POP
}
/*
equation index: 125
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac = (-MatStm1.liqPhasMolFrac) - -1.0
*/
void Flowsheet_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->localData[0]->realVars[88] /* MatStm1.vapPhasMolFrac variable */ = (-data->localData[0]->realVars[60] /* MatStm1.liqPhasMolFrac variable */) - (-1.0);
  TRACE_POP
}
/*
equation index: 126
=======
void Flowsheet_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  data->localData[0]->realVars[169] /* MatStm2.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[149] /* MatStm2.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[150] /* MatStm2.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 219
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolEnth[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolEnth[3,2]
*/
void Flowsheet_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  data->localData[0]->realVars[163] /* MatStm2.phasMolEnth[3] variable */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[125] /* MatStm2.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[126] /* MatStm2.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 220
type: ALGORITHM

  MatStm2.MW[3] := $START.MatStm2.MW[3];
  MatStm2.MW[2] := $START.MatStm2.MW[2];
  MatStm2.MW[1] := $START.MatStm2.MW[1];
  for i in 1:2 loop
    MatStm2.MW[:] := {MatStm2.MW[1] + MatStm2.compMolFrac[1,i] * MatStm2.comp[i].MW, MatStm2.MW[2] + MatStm2.compMolFrac[2,i] * MatStm2.comp[i].MW, MatStm2.MW[3] + MatStm2.compMolFrac[3,i] * MatStm2.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  real_array tmp2;
  index_spec_t tmp3;
  real_array tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  data->localData[0]->realVars[102] /* MatStm2.MW[3] variable */ = data->modelData->realVarsData[102].attribute /* MatStm2.MW[3] variable */.start;

  data->localData[0]->realVars[101] /* MatStm2.MW[2] variable */ = data->modelData->realVarsData[101].attribute /* MatStm2.MW[2] variable */.start;

  data->localData[0]->realVars[100] /* MatStm2.MW[1] variable */ = data->modelData->realVarsData[100].attribute /* MatStm2.MW[1] variable */.start;

  tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = ((modelica_integer) 2);
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp5, tmp7); $Pi += tmp6)
    {
      array_alloc_scalar_real_array(&tmp2, 3, (modelica_real)data->localData[0]->realVars[100] /* MatStm2.MW[1] variable */ + ((&data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[101] /* MatStm2.MW[2] variable */ + ((&data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[102] /* MatStm2.MW[3] variable */ + ((&data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[321])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp3, 1, (1), (int*)0, 'W');
      real_array_create(&tmp4, (modelica_real*)&data->localData[0]->realVars[100] /* MatStm2.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp2, &tmp4, &tmp3);
    }
  }
  TRACE_POP
}
/*
equation index: 221
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,1] = MatStm1.compMolFlo[2,1] * MatStm1.comp[1].MW
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  data->localData[0]->realVars[13] /* MatStm1.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[37] /* MatStm1.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[163]);
  TRACE_POP
}
/*
equation index: 127
=======
void Flowsheet_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  data->localData[0]->realVars[181] /* MatStm2.totMasFlo[3] variable */ = (data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */) * (data->localData[0]->realVars[102] /* MatStm2.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 222
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,1] = MatStm1.compMolFlo[3,1] * MatStm1.comp[1].MW
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->localData[0]->realVars[15] /* MatStm1.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[39] /* MatStm1.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[163]);
  TRACE_POP
}
/*
equation index: 128
=======
void Flowsheet_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */ = (100.0) * (data->localData[0]->realVars[100] /* MatStm2.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 223
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEnth[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEnth[2,2]
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->localData[0]->realVars[64] /* MatStm1.phasMolEnth[2] variable */ = (data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[25] /* MatStm1.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[26] /* MatStm1.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 129
=======
void Flowsheet_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  data->localData[0]->realVars[116] /* MatStm2.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[110] /* MatStm2.compMasFlo[1,2] variable */,data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 224
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolSpHeat[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolSpHeat[2,2]
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->localData[0]->realVars[70] /* MatStm1.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[49] /* MatStm1.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[50] /* MatStm1.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 130
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, 321.0, 101325.0, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[31] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[81], tmp0, tmp1, data->simulationInfo->realParameter[177], data->simulationInfo->realParameter[179], 321.0, 101325.0, data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[33] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 131
=======
void Flowsheet_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  data->localData[0]->realVars[185] /* MatStm2.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[181] /* MatStm2.totMasFlo[3] variable */,data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 225
type: ALGORITHM

  (MatStm2.compMolEntr[2,1], MatStm2.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[1].AS, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tb, MatStm2.comp[1].Tc, 302.0, 101325.0, MatStm2.compMolFrac[2,1], MatStm2.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[357], (modelica_real)data->simulationInfo->realParameter[358], (modelica_real)data->simulationInfo->realParameter[359], (modelica_real)data->simulationInfo->realParameter[360], (modelica_real)data->simulationInfo->realParameter[361], (modelica_real)data->simulationInfo->realParameter[362]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[257], (modelica_real)data->simulationInfo->realParameter[258], (modelica_real)data->simulationInfo->realParameter[259], (modelica_real)data->simulationInfo->realParameter[260], (modelica_real)data->simulationInfo->realParameter[261], (modelica_real)data->simulationInfo->realParameter[262]);
  data->localData[0]->realVars[129] /* MatStm2.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[239], tmp8, tmp9, data->simulationInfo->realParameter[335], data->simulationInfo->realParameter[337], 302.0, 101325.0, data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */, data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[131] /* MatStm2.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 226
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolEntr[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolEntr[2,2]
*/
void Flowsheet_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  data->localData[0]->realVars[165] /* MatStm2.phasMolEntr[2] variable */ = (data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[129] /* MatStm2.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[130] /* MatStm2.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 227
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolEntr[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolEntr[3,2]
*/
void Flowsheet_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  data->localData[0]->realVars[166] /* MatStm2.phasMolEntr[3] variable */ = (data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[131] /* MatStm2.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[132] /* MatStm2.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 228
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[3,1] = MatStm2.compMolFlo[3,1] * MatStm2.comp[1].MW
*/
void Flowsheet_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  data->localData[0]->realVars[113] /* MatStm2.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[137] /* MatStm2.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[321]);
  TRACE_POP
}
/*
equation index: 229
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[2,1] = MatStm2.compMolFlo[2,1] * MatStm2.comp[1].MW
*/
void Flowsheet_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  data->localData[0]->realVars[111] /* MatStm2.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[135] /* MatStm2.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[321]);
  TRACE_POP
}
/*
equation index: 230
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[2] = MatStm2.totMolFlo[2] * MatStm2.MW[2]
*/
void Flowsheet_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->localData[0]->realVars[180] /* MatStm2.totMasFlo[2] variable */ = (data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */) * (data->localData[0]->realVars[101] /* MatStm2.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 231
type: SIMPLE_ASSIGN
MatStm2._liqPhasMasFrac = MatStm2.totMasFlo[2] / MatStm2.totMasFlo[1]
*/
void Flowsheet_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  data->localData[0]->realVars[157] /* MatStm2.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[180] /* MatStm2.totMasFlo[2] variable */,data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 232
type: LINEAR

<var>MatStm2._compMasFrac[3,1]</var>
<var>MatStm2._compMasFrac[3,2]</var>
<var>MatStm2._compMasFrac[2,2]</var>
<var>MatStm2._compMasFrac[2,1]</var>
<var>MatStm2._compMasFrac[1,1]</var>
<row>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then -MatStm2.compMasFrac[1,2] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,2] else -MatStm2.compMasFrac[1,2]</cell>
  <cell>if 101325.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,1] else if 101325.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,1] else MatStm2.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="0" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="0" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -1.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="1" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -0.0 else if 101325.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 101325.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101325.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[119] /* MatStm2.compMasFrac[3,1] variable */,data->localData[1]->realVars[120] /* MatStm2.compMasFrac[3,2] variable */,data->localData[1]->realVars[118] /* MatStm2.compMasFrac[2,2] variable */,data->localData[1]->realVars[117] /* MatStm2.compMasFrac[2,1] variable */,data->localData[1]->realVars[115] /* MatStm2.compMasFrac[1,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 232 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,232};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 232 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[119] /* MatStm2.compMasFrac[3,1] variable */ = aux_x[0];
  data->localData[0]->realVars[120] /* MatStm2.compMasFrac[3,2] variable */ = aux_x[1];
  data->localData[0]->realVars[118] /* MatStm2.compMasFrac[2,2] variable */ = aux_x[2];
  data->localData[0]->realVars[117] /* MatStm2.compMasFrac[2,1] variable */ = aux_x[3];
  data->localData[0]->realVars[115] /* MatStm2.compMasFrac[1,1] variable */ = aux_x[4];
  TRACE_POP
}
/*
equation index: 233
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolSpHeat[2] + MatStm2.vapPhasMolFrac * MatStm2.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  data->localData[0]->realVars[167] /* MatStm2.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[158] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[168] /* MatStm2.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[186] /* MatStm2.vapPhasMolFrac variable */) * (data->localData[0]->realVars[169] /* MatStm2.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 234
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEnth[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEnth[3,2]
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->localData[0]->realVars[65] /* MatStm1.phasMolEnth[3] variable */ = (data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[27] /* MatStm1.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[28] /* MatStm1.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 132
=======
void Flowsheet_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  data->localData[0]->realVars[145] /* MatStm2.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[167] /* MatStm2.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 235
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolEnth[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolEnth[3]
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  data->localData[0]->realVars[63] /* MatStm1.phasMolEnth[1] variable */ = (data->localData[0]->realVars[60] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[64] /* MatStm1.phasMolEnth[2] variable */) + (data->localData[0]->realVars[88] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[65] /* MatStm1.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 133
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolEnth[1]
*/
void Flowsheet_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->localData[0]->realVars[24] /* MatStm1.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[42] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[63] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 134
=======
void Flowsheet_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  data->localData[0]->realVars[146] /* MatStm2.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[167] /* MatStm2.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 236
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolEnth[2] + MatStm2.vapPhasMolFrac * MatStm2.phasMolEnth[3]
*/
void Flowsheet_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->localData[0]->realVars[161] /* MatStm2.phasMolEnth[1] variable */ = (data->localData[0]->realVars[158] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[162] /* MatStm2.phasMolEnth[2] variable */) + (data->localData[0]->realVars[186] /* MatStm2.vapPhasMolFrac variable */) * (data->localData[0]->realVars[163] /* MatStm2.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 237
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEnth[1]
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->localData[0]->realVars[23] /* MatStm1.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[41] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[63] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 135
=======
void Flowsheet_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  data->localData[0]->realVars[121] /* MatStm2.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[161] /* MatStm2.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 238
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolSpHeat[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolSpHeat[3,2]
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->localData[0]->realVars[71] /* MatStm1.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[51] /* MatStm1.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[52] /* MatStm1.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 136
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolSpHeat[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->localData[0]->realVars[69] /* MatStm1.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[60] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[70] /* MatStm1.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[88] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[71] /* MatStm1.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 137
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->localData[0]->realVars[48] /* MatStm1.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[42] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[69] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 138
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->localData[0]->realVars[47] /* MatStm1.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[41] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[69] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 139
type: ALGORITHM

  (MatStm1.compMolEntr[2,2], MatStm1.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[2].AS, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tb, MatStm1.comp[2].Tc, 321.0, 101325.0, MatStm1.compMolFrac[2,2], MatStm1.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[32] /* MatStm1.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[82], tmp2, tmp3, data->simulationInfo->realParameter[178], data->simulationInfo->realParameter[180], 321.0, 101325.0, data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */, data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[34] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 140
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEntr[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEntr[2,2]
*/
void Flowsheet_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->localData[0]->realVars[67] /* MatStm1.phasMolEntr[2] variable */ = (data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[31] /* MatStm1.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[32] /* MatStm1.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 141
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEntr[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEntr[3,2]
*/
void Flowsheet_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->localData[0]->realVars[68] /* MatStm1.phasMolEntr[3] variable */ = (data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[33] /* MatStm1.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[34] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 142
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolEntr[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolEntr[3]
*/
void Flowsheet_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  data->localData[0]->realVars[66] /* MatStm1.phasMolEntr[1] variable */ = (data->localData[0]->realVars[60] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[67] /* MatStm1.phasMolEntr[2] variable */) + (data->localData[0]->realVars[88] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[68] /* MatStm1.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 143
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolEntr[1]
*/
void Flowsheet_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  data->localData[0]->realVars[30] /* MatStm1.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[42] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[66] /* MatStm1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 144
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEntr[1]
*/
void Flowsheet_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->localData[0]->realVars[29] /* MatStm1.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[41] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[66] /* MatStm1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 145
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:2 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[4] /* MatStm1.MW[3] variable */ = data->modelData->realVarsData[4].attribute /* MatStm1.MW[3] variable */.start;

  data->localData[0]->realVars[3] /* MatStm1.MW[2] variable */ = data->modelData->realVarsData[3].attribute /* MatStm1.MW[2] variable */.start;

  data->localData[0]->realVars[2] /* MatStm1.MW[1] variable */ = data->modelData->realVarsData[2].attribute /* MatStm1.MW[1] variable */.start;
=======
void Flowsheet_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->localData[0]->realVars[122] /* MatStm2.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[161] /* MatStm2.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 239
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[1] = MatStm2.phasMolEnth[1] + 10132.0 / Pump1.dens
*/
void Flowsheet_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  data->localData[0]->realVars[71] /* MatStm1.phasMolEnth[1] variable */ = data->localData[0]->realVars[161] /* MatStm2.phasMolEnth[1] variable */ + DIVISION_SIM(10132.0,data->localData[0]->realVars[192] /* Pump1.dens variable */,"Pump1.dens",equationIndexes);
  TRACE_POP
}
/*
equation index: 240
type: SIMPLE_ASSIGN
EngStmPump1._enFlo = 100.0 * (MatStm1.phasMolEnth[1] - MatStm2.phasMolEnth[1]) / Pump1.eff
*/
void Flowsheet_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->localData[0]->realVars[7] /* EngStmPump1.enFlo variable */ = (100.0) * (DIVISION_SIM(data->localData[0]->realVars[71] /* MatStm1.phasMolEnth[1] variable */ - data->localData[0]->realVars[161] /* MatStm2.phasMolEnth[1] variable */,data->simulationInfo->realParameter[553],"Pump1.eff",equationIndexes));
  TRACE_POP
}
/*
equation index: 241
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolEntr[2] + MatStm2.vapPhasMolFrac * MatStm2.phasMolEntr[3]
*/
void Flowsheet_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->localData[0]->realVars[164] /* MatStm2.phasMolEntr[1] variable */ = (data->localData[0]->realVars[158] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[165] /* MatStm2.phasMolEntr[2] variable */) + (data->localData[0]->realVars[186] /* MatStm2.vapPhasMolFrac variable */) * (data->localData[0]->realVars[166] /* MatStm2.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 242
type: SIMPLE_ASSIGN
MatStm2._compMolEntr[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolEntr[1]
*/
void Flowsheet_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->localData[0]->realVars[127] /* MatStm2.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[164] /* MatStm2.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 243
type: SIMPLE_ASSIGN
MatStm2._compMolEntr[1,2] = MatStm2.compMolFrac[1,2] * MatStm2.phasMolEntr[1]
*/
void Flowsheet_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->localData[0]->realVars[128] /* MatStm2.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[164] /* MatStm2.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 244
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,2] = MatStm2.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,2] variable */ = data->localData[0]->realVars[140] /* MatStm2.compMolFrac[1,2] variable */;
  TRACE_POP
}
/*
equation index: 245
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolEnth[1]
*/
void Flowsheet_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->localData[0]->realVars[32] /* MatStm1.compMolEnth[1,2] variable */ = (data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[71] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 246
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,2] = 100.0 * MatStm1.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->localData[0]->realVars[44] /* MatStm1.compMolFlo[1,2] variable */ = (100.0) * (data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,2] variable */);
  TRACE_POP
}
/*
equation index: 247
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,2] = MatStm1.compMolFlo[1,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,2] variable */ = (data->localData[0]->realVars[44] /* MatStm1.compMolFlo[1,2] variable */) * (data->simulationInfo->realParameter[164]);
  TRACE_POP
}
/*
equation index: 248
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,1] = MatStm2.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */ = data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,1] variable */;
  TRACE_POP
}
/*
equation index: 249
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEnth[1]
*/
void Flowsheet_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->localData[0]->realVars[31] /* MatStm1.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[71] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 250
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,1] = 100.0 * MatStm1.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->localData[0]->realVars[43] /* MatStm1.compMolFlo[1,1] variable */ = (100.0) * (data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */);
  TRACE_POP
}
/*
equation index: 251
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,1] = MatStm1.compMolFlo[1,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[43] /* MatStm1.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[163]);
  TRACE_POP
}
void Flowsheet_eqFunction_252(DATA*, threadData_t*);
void Flowsheet_eqFunction_253(DATA*, threadData_t*);
void Flowsheet_eqFunction_254(DATA*, threadData_t*);
void Flowsheet_eqFunction_255(DATA*, threadData_t*);
void Flowsheet_eqFunction_256(DATA*, threadData_t*);
void Flowsheet_eqFunction_257(DATA*, threadData_t*);
void Flowsheet_eqFunction_258(DATA*, threadData_t*);
void Flowsheet_eqFunction_259(DATA*, threadData_t*);
void Flowsheet_eqFunction_260(DATA*, threadData_t*);
void Flowsheet_eqFunction_261(DATA*, threadData_t*);
void Flowsheet_eqFunction_262(DATA*, threadData_t*);
void Flowsheet_eqFunction_263(DATA*, threadData_t*);
void Flowsheet_eqFunction_264(DATA*, threadData_t*);
void Flowsheet_eqFunction_265(DATA*, threadData_t*);
void Flowsheet_eqFunction_266(DATA*, threadData_t*);
void Flowsheet_eqFunction_267(DATA*, threadData_t*);
void Flowsheet_eqFunction_268(DATA*, threadData_t*);
void Flowsheet_eqFunction_269(DATA*, threadData_t*);
void Flowsheet_eqFunction_270(DATA*, threadData_t*);
void Flowsheet_eqFunction_271(DATA*, threadData_t*);
void Flowsheet_eqFunction_272(DATA*, threadData_t*);
void Flowsheet_eqFunction_273(DATA*, threadData_t*);
void Flowsheet_eqFunction_274(DATA*, threadData_t*);
void Flowsheet_eqFunction_275(DATA*, threadData_t*);
void Flowsheet_eqFunction_281(DATA*, threadData_t*);
void Flowsheet_eqFunction_280(DATA*, threadData_t*);
void Flowsheet_eqFunction_279(DATA*, threadData_t*);
void Flowsheet_eqFunction_278(DATA*, threadData_t*);
void Flowsheet_eqFunction_277(DATA*, threadData_t*);
void Flowsheet_eqFunction_276(DATA*, threadData_t*);
/*
equation index: 282
indexNonlinear: 3
type: NONLINEAR
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c

vars: {MatStm1._totMolFlo[2], MatStm1._T, MatStm1._compMolFrac[2,2], MatStm1._compMolFrac[3,2], MatStm1._compMolFrac[2,1], MatStm1._compMolFrac[3,1]}
eqns: {252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 281, 280, 279, 278, 277, 276}
*/
void Flowsheet_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
<<<<<<< HEAD
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[2] /* MatStm1.MW[1] variable */ + ((&data->localData[0]->realVars[41] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[3] /* MatStm1.MW[2] variable */ + ((&data->localData[0]->realVars[41] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[4] /* MatStm1.MW[3] variable */ + ((&data->localData[0]->realVars[41] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[2] /* MatStm1.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
=======
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 282 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[92] /* MatStm1.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[1] = data->localData[0]->realVars[18] /* MatStm1.T variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[2] = data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[3] = data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[4] = data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[5] = data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,282};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 282 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  }
  /* write solution */
  data->localData[0]->realVars[92] /* MatStm1.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  data->localData[0]->realVars[18] /* MatStm1.T variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[1];
  data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[2];
  data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[3];
  data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[4];
  data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[5];
  TRACE_POP
}
/*
<<<<<<< HEAD
equation index: 146
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[3] = MatStm1.totMolFlo[3] * MatStm1.MW[3]
*/
void Flowsheet_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */ = (data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */) * (data->localData[0]->realVars[4] /* MatStm1.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 147
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[1] = 100.0 * MatStm1.MW[1]
*/
void Flowsheet_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */ = (100.0) * (data->localData[0]->realVars[2] /* MatStm1.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 148
type: SIMPLE_ASSIGN
MatStm1._vapPhasMasFrac = MatStm1.totMasFlo[3] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  data->localData[0]->realVars[87] /* MatStm1.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */,data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 149
type: SIMPLE_ASSIGN
MatStm1._compMasFrac[1,2] = MatStm1.compMasFlo[1,2] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[12] /* MatStm1.compMasFlo[1,2] variable */,data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 150
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[2] = MatStm1.totMolFlo[2] * MatStm1.MW[2]
*/
void Flowsheet_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */ = (data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */) * (data->localData[0]->realVars[3] /* MatStm1.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 151
type: SIMPLE_ASSIGN
MatStm1._liqPhasMasFrac = MatStm1.totMasFlo[2] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->localData[0]->realVars[59] /* MatStm1.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */,data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 152
type: LINEAR

<var>MatStm1._compMasFrac[3,2]</var>
<var>MatStm1._compMasFrac[2,2]</var>
<var>MatStm1._compMasFrac[1,1]</var>
<var>MatStm1._compMasFrac[3,1]</var>
<var>MatStm1._compMasFrac[2,1]</var>
<row>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,1] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,1] else MatStm1.compMasFlo[1,1]</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,2] else 0.0</cell>
  <cell>if 101325.0 >= MatStm1.Pbubl then -MatStm1.compMasFrac[1,2] else if 101325.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,2] else -MatStm1.compMasFrac[1,2]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 101325.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then -1.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="3" col="3">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="3" col="4">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 0.0 else if 101325.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="4" col="1">
    <residual>-(if 101325.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[22] /* MatStm1.compMasFrac[3,2] variable */,data->localData[1]->realVars[20] /* MatStm1.compMasFrac[2,2] variable */,data->localData[1]->realVars[17] /* MatStm1.compMasFrac[1,1] variable */,data->localData[1]->realVars[21] /* MatStm1.compMasFrac[3,1] variable */,data->localData[1]->realVars[19] /* MatStm1.compMasFrac[2,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 152 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,152};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 152 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[22] /* MatStm1.compMasFrac[3,2] variable */ = aux_x[0];
  data->localData[0]->realVars[20] /* MatStm1.compMasFrac[2,2] variable */ = aux_x[1];
  data->localData[0]->realVars[17] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[2];
  data->localData[0]->realVars[21] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[3];
  data->localData[0]->realVars[19] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[4];
=======
equation index: 283
type: SIMPLE_ASSIGN
Pump1._tempInc = MatStm1.T - 302.0
*/
void Flowsheet_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->localData[0]->realVars[194] /* Pump1.tempInc variable */ = data->localData[0]->realVars[18] /* MatStm1.T variable */ - 302.0;
  TRACE_POP
}
/*
equation index: 284
type: SIMPLE_ASSIGN
$cse7 = exp(Pump1.comp[2].VP[2] + Pump1.comp[2].VP[3] / MatStm1.T + Pump1.comp[2].VP[4] * $cse2 + Pump1.comp[2].VP[5] * MatStm1.T ^ Pump1.comp[2].VP[6])
*/
void Flowsheet_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[18] /* MatStm1.T variable */;
  tmp1 = data->simulationInfo->realParameter[514];
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[6] /* $cse7 variable */ = exp(data->simulationInfo->realParameter[510] + DIVISION_SIM(data->simulationInfo->realParameter[511],data->localData[0]->realVars[18] /* MatStm1.T variable */,"MatStm1.T",equationIndexes) + (data->simulationInfo->realParameter[512]) * (data->localData[0]->realVars[1] /* $cse2 variable */) + (data->simulationInfo->realParameter[513]) * (tmp2));
  TRACE_POP
}
/*
equation index: 285
type: SIMPLE_ASSIGN
$cse6 = exp(Pump1.comp[1].VP[2] + Pump1.comp[1].VP[3] / MatStm1.T + Pump1.comp[1].VP[4] * $cse2 + Pump1.comp[1].VP[5] * MatStm1.T ^ Pump1.comp[1].VP[6])
*/
void Flowsheet_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  tmp7 = data->localData[0]->realVars[18] /* MatStm1.T variable */;
  tmp8 = data->simulationInfo->realParameter[508];
  if(tmp7 < 0.0 && tmp8 != 0.0)
  {
    tmp10 = modf(tmp8, &tmp11);
    
    if(tmp10 > 0.5)
    {
      tmp10 -= 1.0;
      tmp11 += 1.0;
    }
    else if(tmp10 < -0.5)
    {
      tmp10 += 1.0;
      tmp11 -= 1.0;
    }
    
    if(fabs(tmp10) < 1e-10)
      tmp9 = pow(tmp7, tmp11);
    else
    {
      tmp13 = modf(1.0/tmp8, &tmp12);
      if(tmp13 > 0.5)
      {
        tmp13 -= 1.0;
        tmp12 += 1.0;
      }
      else if(tmp13 < -0.5)
      {
        tmp13 += 1.0;
        tmp12 -= 1.0;
      }
      if(fabs(tmp13) < 1e-10 && ((unsigned long)tmp12 & 1))
      {
        tmp9 = -pow(-tmp7, tmp10)*pow(tmp7, tmp11);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp7, tmp8);
      }
    }
  }
  else
  {
    tmp9 = pow(tmp7, tmp8);
  }
  if(isnan(tmp9) || isinf(tmp9))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp7, tmp8);
  }
  data->localData[0]->realVars[5] /* $cse6 variable */ = exp(data->simulationInfo->realParameter[504] + DIVISION_SIM(data->simulationInfo->realParameter[505],data->localData[0]->realVars[18] /* MatStm1.T variable */,"MatStm1.T",equationIndexes) + (data->simulationInfo->realParameter[506]) * (data->localData[0]->realVars[1] /* $cse2 variable */) + (data->simulationInfo->realParameter[507]) * (tmp9));
  TRACE_POP
}
/*
equation index: 286
type: SIMPLE_ASSIGN
Pump1._vapPress = MatStm2.compMolFrac[1,1] * $cse6 + MatStm2.compMolFrac[1,2] * $cse7
*/
void Flowsheet_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->localData[0]->realVars[195] /* Pump1.vapPress variable */ = (data->localData[0]->realVars[139] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[5] /* $cse6 variable */) + (data->localData[0]->realVars[140] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[6] /* $cse7 variable */);
  TRACE_POP
}
/*
equation index: 287
type: SIMPLE_ASSIGN
Pump1._NPSH = (101325.0 - Pump1.vapPress) / Pump1.dens
*/
void Flowsheet_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->localData[0]->realVars[189] /* Pump1.NPSH variable */ = DIVISION_SIM(101325.0 - data->localData[0]->realVars[195] /* Pump1.vapPress variable */,data->localData[0]->realVars[192] /* Pump1.dens variable */,"Pump1.dens",equationIndexes);
  TRACE_POP
}
/*
equation index: 288
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  real_array tmp14;
  array_alloc_scalar_real_array(&tmp14, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  data->localData[0]->realVars[60] /* MatStm1.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp14, data->localData[0]->realVars[18] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 289
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[2].LiqCp[1], MatStm1.comp[2].LiqCp[2], MatStm1.comp[2].LiqCp[3], MatStm1.comp[2].LiqCp[4], MatStm1.comp[2].LiqCp[5], MatStm1.comp[2].LiqCp[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  real_array tmp15;
  array_alloc_scalar_real_array(&tmp15, 6, (modelica_real)data->simulationInfo->realParameter[121], (modelica_real)data->simulationInfo->realParameter[122], (modelica_real)data->simulationInfo->realParameter[123], (modelica_real)data->simulationInfo->realParameter[124], (modelica_real)data->simulationInfo->realParameter[125], (modelica_real)data->simulationInfo->realParameter[126]);
  data->localData[0]->realVars[58] /* MatStm1.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp15, data->localData[0]->realVars[18] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 290
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  real_array tmp16;
  array_alloc_scalar_real_array(&tmp16, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  data->localData[0]->realVars[59] /* MatStm1.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp16, data->localData[0]->realVars[18] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 291
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[1].LiqCp[1], MatStm1.comp[1].LiqCp[2], MatStm1.comp[1].LiqCp[3], MatStm1.comp[1].LiqCp[4], MatStm1.comp[1].LiqCp[5], MatStm1.comp[1].LiqCp[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  real_array tmp17;
  array_alloc_scalar_real_array(&tmp17, 6, (modelica_real)data->simulationInfo->realParameter[115], (modelica_real)data->simulationInfo->realParameter[116], (modelica_real)data->simulationInfo->realParameter[117], (modelica_real)data->simulationInfo->realParameter[118], (modelica_real)data->simulationInfo->realParameter[119], (modelica_real)data->simulationInfo->realParameter[120]);
  data->localData[0]->realVars[57] /* MatStm1.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp17, data->localData[0]->realVars[18] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 292
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,1] = MatStm1.compMolFlo[3,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  data->localData[0]->realVars[23] /* MatStm1.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[47] /* MatStm1.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[163]);
  TRACE_POP
}
/*
equation index: 293
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,1] = MatStm1.compMolFlo[2,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  data->localData[0]->realVars[21] /* MatStm1.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[45] /* MatStm1.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[163]);
  TRACE_POP
}
/*
equation index: 294
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, MatStm1.T, 111457.0, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  real_array tmp18;
  real_array tmp19;
  array_alloc_scalar_real_array(&tmp18, 6, (modelica_real)data->simulationInfo->realParameter[199], (modelica_real)data->simulationInfo->realParameter[200], (modelica_real)data->simulationInfo->realParameter[201], (modelica_real)data->simulationInfo->realParameter[202], (modelica_real)data->simulationInfo->realParameter[203], (modelica_real)data->simulationInfo->realParameter[204]);
  array_alloc_scalar_real_array(&tmp19, 6, (modelica_real)data->simulationInfo->realParameter[99], (modelica_real)data->simulationInfo->realParameter[100], (modelica_real)data->simulationInfo->realParameter[101], (modelica_real)data->simulationInfo->realParameter[102], (modelica_real)data->simulationInfo->realParameter[103], (modelica_real)data->simulationInfo->realParameter[104]);
  data->localData[0]->realVars[39] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[81], tmp18, tmp19, data->simulationInfo->realParameter[177], data->simulationInfo->realParameter[179], data->localData[0]->realVars[18] /* MatStm1.T variable */, 111457.0, data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[41] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 295
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolSpHeat[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolSpHeat[3,2]
*/
void Flowsheet_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  data->localData[0]->realVars[79] /* MatStm1.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[59] /* MatStm1.compMolSpHeat[3,1] variable */) + (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[60] /* MatStm1.compMolSpHeat[3,2] variable */);
  TRACE_POP
}
/*
equation index: 296
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,2] = MatStm1.compMolFlo[3,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,2] variable */ = (data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,2] variable */) * (data->simulationInfo->realParameter[164]);
  TRACE_POP
}
/*
equation index: 297
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,2] = MatStm1.compMolFlo[2,2] * MatStm1.comp[2].MW
*/
void Flowsheet_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,2] variable */ = (data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,2] variable */) * (data->simulationInfo->realParameter[164]);
  TRACE_POP
}
/*
equation index: 298
type: ALGORITHM

  (MatStm1.compMolEntr[2,2], MatStm1.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[2].AS, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tb, MatStm1.comp[2].Tc, MatStm1.T, 111457.0, MatStm1.compMolFrac[2,2], MatStm1.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  real_array tmp20;
  real_array tmp21;
  array_alloc_scalar_real_array(&tmp20, 6, (modelica_real)data->simulationInfo->realParameter[205], (modelica_real)data->simulationInfo->realParameter[206], (modelica_real)data->simulationInfo->realParameter[207], (modelica_real)data->simulationInfo->realParameter[208], (modelica_real)data->simulationInfo->realParameter[209], (modelica_real)data->simulationInfo->realParameter[210]);
  array_alloc_scalar_real_array(&tmp21, 6, (modelica_real)data->simulationInfo->realParameter[105], (modelica_real)data->simulationInfo->realParameter[106], (modelica_real)data->simulationInfo->realParameter[107], (modelica_real)data->simulationInfo->realParameter[108], (modelica_real)data->simulationInfo->realParameter[109], (modelica_real)data->simulationInfo->realParameter[110]);
  data->localData[0]->realVars[40] /* MatStm1.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[82], tmp20, tmp21, data->simulationInfo->realParameter[178], data->simulationInfo->realParameter[180], data->localData[0]->realVars[18] /* MatStm1.T variable */, 111457.0, data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */, data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[42] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 299
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEntr[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEntr[3,2]
*/
void Flowsheet_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->localData[0]->realVars[76] /* MatStm1.phasMolEntr[3] variable */ = (data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[41] /* MatStm1.compMolEntr[3,1] variable */) + (data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[42] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
/*
equation index: 300
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEntr[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEntr[2,2]
*/
void Flowsheet_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  data->localData[0]->realVars[75] /* MatStm1.phasMolEntr[2] variable */ = (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[39] /* MatStm1.compMolEntr[2,1] variable */) + (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[40] /* MatStm1.compMolEntr[2,2] variable */);
  TRACE_POP
}
/*
equation index: 301
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolEntr[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolEntr[3]
*/
void Flowsheet_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  data->localData[0]->realVars[74] /* MatStm1.phasMolEntr[1] variable */ = (data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[75] /* MatStm1.phasMolEntr[2] variable */) + (data->localData[0]->realVars[95] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[76] /* MatStm1.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 302
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolEntr[1]
*/
void Flowsheet_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  data->localData[0]->realVars[38] /* MatStm1.compMolEntr[1,2] variable */ = (data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[74] /* MatStm1.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 303
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolSpHeat[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolSpHeat[2,2]
*/
void Flowsheet_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  data->localData[0]->realVars[78] /* MatStm1.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[57] /* MatStm1.compMolSpHeat[2,1] variable */) + (data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[58] /* MatStm1.compMolSpHeat[2,2] variable */);
  TRACE_POP
}
/*
equation index: 304
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolSpHeat[2] + MatStm1.vapPhasMolFrac * MatStm1.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  data->localData[0]->realVars[77] /* MatStm1.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[78] /* MatStm1.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[95] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[79] /* MatStm1.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 305
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,2] = MatStm1.compMolFrac[1,2] * MatStm1.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->localData[0]->realVars[56] /* MatStm1.compMolSpHeat[1,2] variable */ = (data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[77] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 306
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:2 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  real_array tmp22;
  index_spec_t tmp23;
  real_array tmp24;
  modelica_integer tmp25;
  modelica_integer tmp26;
  modelica_integer tmp27;
  data->localData[0]->realVars[12] /* MatStm1.MW[3] variable */ = data->modelData->realVarsData[12].attribute /* MatStm1.MW[3] variable */.start;

  data->localData[0]->realVars[11] /* MatStm1.MW[2] variable */ = data->modelData->realVarsData[11].attribute /* MatStm1.MW[2] variable */.start;

  data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */ = data->modelData->realVarsData[10].attribute /* MatStm1.MW[1] variable */.start;

  tmp25 = ((modelica_integer) 1); tmp26 = 1; tmp27 = ((modelica_integer) 2);
  if(!(((tmp26 > 0) && (tmp25 > tmp27)) || ((tmp26 < 0) && (tmp25 < tmp27))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp25, tmp27); $Pi += tmp26)
    {
      array_alloc_scalar_real_array(&tmp22, 3, (modelica_real)data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */ + ((&data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[11] /* MatStm1.MW[2] variable */ + ((&data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[12] /* MatStm1.MW[3] variable */ + ((&data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[163])[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
      create_index_spec(&tmp23, 1, (1), (int*)0, 'W');
      real_array_create(&tmp24, (modelica_real*)&data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp22, &tmp24, &tmp23);
    }
  }
  TRACE_POP
}
/*
equation index: 307
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[3] = MatStm1.totMolFlo[3] * MatStm1.MW[3]
*/
void Flowsheet_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */ = (data->localData[0]->realVars[93] /* MatStm1.totMolFlo[3] variable */) * (data->localData[0]->realVars[12] /* MatStm1.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 308
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[1] = 100.0 * MatStm1.MW[1]
*/
void Flowsheet_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */ = (100.0) * (data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 309
type: SIMPLE_ASSIGN
MatStm1._compMasFrac[1,2] = MatStm1.compMasFlo[1,2] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */ = DIVISION_SIM(data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,2] variable */,data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 310
type: SIMPLE_ASSIGN
MatStm1._vapPhasMasFrac = MatStm1.totMasFlo[3] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->localData[0]->realVars[94] /* MatStm1.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */,data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 311
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[2] = MatStm1.totMolFlo[2] * MatStm1.MW[2]
*/
void Flowsheet_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */ = (data->localData[0]->realVars[92] /* MatStm1.totMolFlo[2] variable */) * (data->localData[0]->realVars[11] /* MatStm1.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 312
type: SIMPLE_ASSIGN
MatStm1._liqPhasMasFrac = MatStm1.totMasFlo[2] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->localData[0]->realVars[67] /* MatStm1.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */,data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 313
type: LINEAR

<var>MatStm1._compMasFrac[3,1]</var>
<var>MatStm1._compMasFrac[2,2]</var>
<var>MatStm1._compMasFrac[3,2]</var>
<var>MatStm1._compMasFrac[2,1]</var>
<var>MatStm1._compMasFrac[1,1]</var>
<row>
  <cell>if 111457.0 >= MatStm1.Pbubl then 0.0 else if 111457.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,2] else 0.0</cell>
  <cell>if 111457.0 >= MatStm1.Pbubl then 0.0 else if 111457.0 >= MatStm1.Pdew then MatStm1.compMasFlo[1,1] else 0.0</cell>
  <cell>if 111457.0 >= MatStm1.Pbubl then 0.0 else if 111457.0 >= MatStm1.Pdew then MatStm1.compMasFlo[2,1] else 0.0</cell>
  <cell>if 111457.0 >= MatStm1.Pbubl then -MatStm1.compMasFrac[1,2] else if 111457.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,2] else -MatStm1.compMasFrac[1,2]</cell>
  <cell>if 111457.0 >= MatStm1.Pbubl then MatStm1.compMasFlo[1,1] else if 111457.0 >= MatStm1.Pdew then MatStm1.compMasFlo[3,1] else MatStm1.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 111457.0 >= MatStm1.Pbubl then 0.0 else if 111457.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="0" col="1">
    <residual>-(if 111457.0 >= MatStm1.Pbubl then 0.0 else if 111457.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="0" col="3">
    <residual>-(if 111457.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="4">
    <residual>-(if 111457.0 >= MatStm1.Pbubl then -1.0 else if 111457.0 >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="1" col="0">
    <residual>-(if 111457.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 111457.0 >= MatStm1.Pbubl then 0.0 else if 111457.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="4">
    <residual>-(if 111457.0 >= MatStm1.Pbubl then 0.0 else if 111457.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if 111457.0 >= MatStm1.Pbubl then 0.0 else if 111457.0 >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 111457.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="3">
    <residual>-(if 111457.0 >= MatStm1.Pbubl then 0.0 else if 111457.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else 0.0)</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 111457.0 >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="2">
    <residual>-(if 111457.0 >= MatStm1.Pbubl then 0.0 else if 111457.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="4" col="0">
    <residual>-(if 111457.0 >= MatStm1.Pbubl then -0.0 else if 111457.0 >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else -0.0)</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 111457.0 >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if 111457.0 >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  /* Linear equation system */
  int retValue;
  double aux_x[5] = { data->localData[1]->realVars[29] /* MatStm1.compMasFrac[3,1] variable */,data->localData[1]->realVars[28] /* MatStm1.compMasFrac[2,2] variable */,data->localData[1]->realVars[30] /* MatStm1.compMasFrac[3,2] variable */,data->localData[1]->realVars[27] /* MatStm1.compMasFrac[2,1] variable */,data->localData[1]->realVars[25] /* MatStm1.compMasFrac[1,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 313 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 3, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,313};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 313 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[29] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[0];
  data->localData[0]->realVars[28] /* MatStm1.compMasFrac[2,2] variable */ = aux_x[1];
  data->localData[0]->realVars[30] /* MatStm1.compMasFrac[3,2] variable */ = aux_x[2];
  data->localData[0]->realVars[27] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[3];
  data->localData[0]->realVars[25] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[4];
  TRACE_POP
}
/*
equation index: 314
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->localData[0]->realVars[55] /* MatStm1.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[77] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 315
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEntr[1]
*/
void Flowsheet_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->localData[0]->realVars[37] /* MatStm1.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[74] /* MatStm1.phasMolEntr[1] variable */);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
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
<<<<<<< HEAD
  Flowsheet_eqFunction_96(data, threadData);

  Flowsheet_eqFunction_97(data, threadData);

  Flowsheet_eqFunction_98(data, threadData);

  Flowsheet_eqFunction_99(data, threadData);

  Flowsheet_eqFunction_122(data, threadData);

  Flowsheet_eqFunction_123(data, threadData);

  Flowsheet_eqFunction_124(data, threadData);

  Flowsheet_eqFunction_125(data, threadData);

  Flowsheet_eqFunction_126(data, threadData);

  Flowsheet_eqFunction_127(data, threadData);

  Flowsheet_eqFunction_128(data, threadData);

  Flowsheet_eqFunction_129(data, threadData);

  Flowsheet_eqFunction_130(data, threadData);

  Flowsheet_eqFunction_131(data, threadData);

  Flowsheet_eqFunction_132(data, threadData);

  Flowsheet_eqFunction_133(data, threadData);

  Flowsheet_eqFunction_134(data, threadData);

  Flowsheet_eqFunction_135(data, threadData);

  Flowsheet_eqFunction_136(data, threadData);

  Flowsheet_eqFunction_137(data, threadData);

  Flowsheet_eqFunction_138(data, threadData);

  Flowsheet_eqFunction_139(data, threadData);

  Flowsheet_eqFunction_140(data, threadData);

  Flowsheet_eqFunction_141(data, threadData);

  Flowsheet_eqFunction_142(data, threadData);

  Flowsheet_eqFunction_143(data, threadData);

  Flowsheet_eqFunction_144(data, threadData);

  Flowsheet_eqFunction_145(data, threadData);

  Flowsheet_eqFunction_146(data, threadData);

  Flowsheet_eqFunction_147(data, threadData);

  Flowsheet_eqFunction_148(data, threadData);

  Flowsheet_eqFunction_149(data, threadData);

  Flowsheet_eqFunction_150(data, threadData);

  Flowsheet_eqFunction_151(data, threadData);

  Flowsheet_eqFunction_152(data, threadData);
=======
  Flowsheet_eqFunction_212(data, threadData);

  Flowsheet_eqFunction_213(data, threadData);

  Flowsheet_eqFunction_214(data, threadData);

  Flowsheet_eqFunction_215(data, threadData);

  Flowsheet_eqFunction_216(data, threadData);

  Flowsheet_eqFunction_217(data, threadData);

  Flowsheet_eqFunction_218(data, threadData);

  Flowsheet_eqFunction_219(data, threadData);

  Flowsheet_eqFunction_220(data, threadData);

  Flowsheet_eqFunction_221(data, threadData);

  Flowsheet_eqFunction_222(data, threadData);

  Flowsheet_eqFunction_223(data, threadData);

  Flowsheet_eqFunction_224(data, threadData);

  Flowsheet_eqFunction_225(data, threadData);

  Flowsheet_eqFunction_226(data, threadData);

  Flowsheet_eqFunction_227(data, threadData);

  Flowsheet_eqFunction_228(data, threadData);

  Flowsheet_eqFunction_229(data, threadData);

  Flowsheet_eqFunction_230(data, threadData);

  Flowsheet_eqFunction_231(data, threadData);

  Flowsheet_eqFunction_232(data, threadData);

  Flowsheet_eqFunction_233(data, threadData);

  Flowsheet_eqFunction_234(data, threadData);

  Flowsheet_eqFunction_235(data, threadData);

  Flowsheet_eqFunction_236(data, threadData);

  Flowsheet_eqFunction_237(data, threadData);

  Flowsheet_eqFunction_238(data, threadData);

  Flowsheet_eqFunction_239(data, threadData);

  Flowsheet_eqFunction_240(data, threadData);

  Flowsheet_eqFunction_241(data, threadData);

  Flowsheet_eqFunction_242(data, threadData);

  Flowsheet_eqFunction_243(data, threadData);

  Flowsheet_eqFunction_244(data, threadData);

  Flowsheet_eqFunction_245(data, threadData);

  Flowsheet_eqFunction_246(data, threadData);

  Flowsheet_eqFunction_247(data, threadData);

  Flowsheet_eqFunction_248(data, threadData);

  Flowsheet_eqFunction_249(data, threadData);

  Flowsheet_eqFunction_250(data, threadData);

  Flowsheet_eqFunction_251(data, threadData);

  Flowsheet_eqFunction_282(data, threadData);

  Flowsheet_eqFunction_283(data, threadData);

  Flowsheet_eqFunction_284(data, threadData);

  Flowsheet_eqFunction_285(data, threadData);

  Flowsheet_eqFunction_286(data, threadData);

  Flowsheet_eqFunction_287(data, threadData);

  Flowsheet_eqFunction_288(data, threadData);

  Flowsheet_eqFunction_289(data, threadData);

  Flowsheet_eqFunction_290(data, threadData);

  Flowsheet_eqFunction_291(data, threadData);

  Flowsheet_eqFunction_292(data, threadData);

  Flowsheet_eqFunction_293(data, threadData);

  Flowsheet_eqFunction_294(data, threadData);

  Flowsheet_eqFunction_295(data, threadData);

  Flowsheet_eqFunction_296(data, threadData);

  Flowsheet_eqFunction_297(data, threadData);

  Flowsheet_eqFunction_298(data, threadData);

  Flowsheet_eqFunction_299(data, threadData);

  Flowsheet_eqFunction_300(data, threadData);

  Flowsheet_eqFunction_301(data, threadData);

  Flowsheet_eqFunction_302(data, threadData);

  Flowsheet_eqFunction_303(data, threadData);

  Flowsheet_eqFunction_304(data, threadData);

  Flowsheet_eqFunction_305(data, threadData);

  Flowsheet_eqFunction_306(data, threadData);

  Flowsheet_eqFunction_307(data, threadData);

  Flowsheet_eqFunction_308(data, threadData);

  Flowsheet_eqFunction_309(data, threadData);

  Flowsheet_eqFunction_310(data, threadData);

  Flowsheet_eqFunction_311(data, threadData);

  Flowsheet_eqFunction_312(data, threadData);

  Flowsheet_eqFunction_313(data, threadData);

  Flowsheet_eqFunction_314(data, threadData);

  Flowsheet_eqFunction_315(data, threadData);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
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
#define _OMC_LIT_RESOURCE_1_dir_data "C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,9,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,93,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Modelica"
#define _OMC_LIT_RESOURCE_2_dir_data "C:/OpenModelica1.13.264bit/lib/omlibrary/Modelica 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,8,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,55,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "C:/OpenModelica1.13.264bit/lib/omlibrary/ModelicaServices 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,63,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "Simulator"
#define _OMC_LIT_RESOURCE_4_dir_data "C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,9,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,83,_OMC_LIT_RESOURCE_4_dir_data);

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
<<<<<<< HEAD
  data->modelData->modelDir = "C:/OMChemSimGUI/SimulationFiles/Simulator";
  data->modelData->modelGUID = "{8aa195ce-4a2a-47ea-8684-a2becb203753}";
=======
  data->modelData->modelDir = "C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator";
  data->modelData->modelGUID = "{331a9261-4293-4b7f-82ab-d755182f447b}";
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
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
<<<<<<< HEAD
  data->modelData->nVariablesReal = 91;
=======
  data->modelData->nVariablesReal = 196;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
<<<<<<< HEAD
  data->modelData->nParametersReal = 316;
  data->modelData->nParametersInteger = 7;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 8;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 24;
=======
  data->modelData->nParametersReal = 633;
  data->modelData->nParametersInteger = 17;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 16;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 89;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
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
  data->modelData->modelDataXml.nFunctions = 8;
  data->modelData->modelDataXml.nProfileBlocks = 0;
<<<<<<< HEAD
  data->modelData->modelDataXml.nEquations = 392;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 2;
  data->modelData->nNonLinearSystems = 2;
=======
  data->modelData->modelDataXml.nEquations = 957;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 4;
  data->modelData->nNonLinearSystems = 4;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
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


