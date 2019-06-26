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
equation index: 125
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[1,1] = MatStm2.compMolFlo[1,1] * MatStm2.comp[1].MW
*/
void Flowsheet_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->localData[0]->realVars[76] /* MatStm2.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[88] /* MatStm2.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[281]);
  TRACE_POP
}
/*
equation index: 126
type: SIMPLE_ASSIGN
MatStm2._compMolFrac[2,1] = if 101324.0 >= MatStm2.Pbubl then 1.0 else 0.0
*/
void Flowsheet_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  modelica_boolean tmp0;
  tmp0 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  data->localData[0]->realVars[92] /* MatStm2.compMolFrac[2,1] variable */ = (tmp0?1.0:0.0);
  TRACE_POP
}
/*
equation index: 127
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolEnth[2,1]
*/
void Flowsheet_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->localData[0]->realVars[104] /* MatStm2.phasMolEnth[2] variable */ = (data->localData[0]->realVars[92] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[83] /* MatStm2.compMolEnth[2,1] variable */);
  TRACE_POP
}
/*
equation index: 128
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolSpHeat[2,1]
*/
void Flowsheet_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->localData[0]->realVars[110] /* MatStm2.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[92] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[95] /* MatStm2.compMolSpHeat[2,1] variable */);
  TRACE_POP
}
/*
equation index: 129
type: SIMPLE_ASSIGN
MatStm2._K[1] = 9.869330069874857e-006 * MatStm2.Psat[1]
*/
void Flowsheet_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->localData[0]->realVars[67] /* MatStm2.K[1] variable */ = (9.869330069874857e-006) * (data->localData[0]->realVars[74] /* MatStm2.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 130
type: SIMPLE_ASSIGN
MatStm2._compMolFrac[3,1] = if 101324.0 >= MatStm2.Pbubl then 0.0 else if 101324.0 >= MatStm2.Pdew then MatStm2.K[1] * MatStm2.compMolFrac[2,1] else 1.0
*/
void Flowsheet_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  tmp1 = GreaterEq(101324.0,data->localData[0]->realVars[72] /* MatStm2.Pbubl variable */);
  tmp3 = (modelica_boolean)tmp1;
  if(tmp3)
  {
    tmp4 = 0.0;
  }
  else
  {
    tmp2 = GreaterEq(101324.0,data->localData[0]->realVars[73] /* MatStm2.Pdew variable */);
    tmp4 = (tmp2?(data->localData[0]->realVars[67] /* MatStm2.K[1] variable */) * (data->localData[0]->realVars[92] /* MatStm2.compMolFrac[2,1] variable */):1.0);
  }
  data->localData[0]->realVars[93] /* MatStm2.compMolFrac[3,1] variable */ = tmp4;
  TRACE_POP
}
/*
equation index: 131
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolEnth[3,1]
*/
void Flowsheet_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->localData[0]->realVars[105] /* MatStm2.phasMolEnth[3] variable */ = (data->localData[0]->realVars[93] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[84] /* MatStm2.compMolEnth[3,1] variable */);
  TRACE_POP
}
/*
equation index: 132
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolSpHeat[3,1]
*/
void Flowsheet_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  data->localData[0]->realVars[111] /* MatStm2.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[93] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[96] /* MatStm2.compMolSpHeat[3,1] variable */);
  TRACE_POP
}
/*
equation index: 133
type: ALGORITHM

  MatStm2.MW[3] := $START.MatStm2.MW[3];
  MatStm2.MW[2] := $START.MatStm2.MW[2];
  MatStm2.MW[1] := $START.MatStm2.MW[1];
  for i in 1:1 loop
    MatStm2.MW[:] := {MatStm2.MW[1] + MatStm2.compMolFrac[1,i] * MatStm2.comp[i].MW, MatStm2.MW[2] + MatStm2.compMolFrac[2,i] * MatStm2.comp[i].MW, MatStm2.MW[3] + MatStm2.compMolFrac[3,i] * MatStm2.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  real_array tmp5;
  index_spec_t tmp6;
  real_array tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  data->localData[0]->realVars[70] /* MatStm2.MW[3] variable */ = data->modelData->realVarsData[70].attribute /* MatStm2.MW[3] variable */.start;

  data->localData[0]->realVars[69] /* MatStm2.MW[2] variable */ = data->modelData->realVarsData[69].attribute /* MatStm2.MW[2] variable */.start;

  data->localData[0]->realVars[68] /* MatStm2.MW[1] variable */ = data->modelData->realVarsData[68].attribute /* MatStm2.MW[1] variable */.start;

  tmp8 = ((modelica_integer) 1); tmp9 = 1; tmp10 = ((modelica_integer) 1);
  if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp8, tmp10); $Pi += tmp9)
    {
      array_alloc_scalar_real_array(&tmp5, 3, (modelica_real)data->localData[0]->realVars[68] /* MatStm2.MW[1] variable */ + ((&data->localData[0]->realVars[91] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 1, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[281])[calc_base_index_dims_subs(1, 1, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[69] /* MatStm2.MW[2] variable */ + ((&data->localData[0]->realVars[91] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 1, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[281])[calc_base_index_dims_subs(1, 1, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[70] /* MatStm2.MW[3] variable */ + ((&data->localData[0]->realVars[91] /* MatStm2.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 1, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[281])[calc_base_index_dims_subs(1, 1, (modelica_integer)$Pi)]));
      create_index_spec(&tmp6, 1, (1), (int*)0, 'W');
      real_array_create(&tmp7, (modelica_real*)&data->localData[0]->realVars[68] /* MatStm2.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp5, &tmp7, &tmp6);
    }
  }
  TRACE_POP
}
/*
equation index: 134
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[1] = 100.0 * MatStm2.MW[1]
*/
void Flowsheet_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->localData[0]->realVars[121] /* MatStm2.totMasFlo[1] variable */ = (100.0) * (data->localData[0]->realVars[68] /* MatStm2.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 135
type: ALGORITHM

  (MatStm2.compMolEntr[2,1], MatStm2.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm2.comp[1].AS, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tb, MatStm2.comp[1].Tc, 300.0, 101324.0, MatStm2.compMolFrac[2,1], MatStm2.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  real_array tmp11;
  real_array tmp12;
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[299], (modelica_real)data->simulationInfo->realParameter[300], (modelica_real)data->simulationInfo->realParameter[301], (modelica_real)data->simulationInfo->realParameter[302], (modelica_real)data->simulationInfo->realParameter[303], (modelica_real)data->simulationInfo->realParameter[304]);
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[249], (modelica_real)data->simulationInfo->realParameter[250], (modelica_real)data->simulationInfo->realParameter[251], (modelica_real)data->simulationInfo->realParameter[252], (modelica_real)data->simulationInfo->realParameter[253], (modelica_real)data->simulationInfo->realParameter[254]);
  data->localData[0]->realVars[86] /* MatStm2.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[240], tmp11, tmp12, data->simulationInfo->realParameter[288], data->simulationInfo->realParameter[289], 300.0, 101324.0, data->localData[0]->realVars[92] /* MatStm2.compMolFrac[2,1] variable */, data->localData[0]->realVars[93] /* MatStm2.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[87] /* MatStm2.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 136
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolEntr[3,1]
*/
void Flowsheet_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->localData[0]->realVars[108] /* MatStm2.phasMolEntr[3] variable */ = (data->localData[0]->realVars[93] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[87] /* MatStm2.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 137
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolEntr[2,1]
*/
void Flowsheet_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->localData[0]->realVars[107] /* MatStm2.phasMolEntr[2] variable */ = (data->localData[0]->realVars[92] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[86] /* MatStm2.compMolEntr[2,1] variable */);
  TRACE_POP
}
/*
equation index: 148
type: LINEAR

<var>MatStm2._totMolFlo[3]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[126] /* MatStm2.totMolFlo[3] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 148 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 3, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,148};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 148 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[126] /* MatStm2.totMolFlo[3] variable */ = aux_x[0];
  TRACE_POP
}
/*
equation index: 149
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[3,1] = MatStm2.compMolFlo[3,1] * MatStm2.comp[1].MW
*/
void Flowsheet_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->localData[0]->realVars[78] /* MatStm2.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[90] /* MatStm2.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[281]);
  TRACE_POP
}
/*
equation index: 150
type: SIMPLE_ASSIGN
MatStm2._compMasFlo[2,1] = MatStm2.compMolFlo[2,1] * MatStm2.comp[1].MW
*/
void Flowsheet_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->localData[0]->realVars[77] /* MatStm2.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[89] /* MatStm2.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[281]);
  TRACE_POP
}
/*
equation index: 151
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[2] = MatStm2.totMolFlo[2] * MatStm2.MW[2]
*/
void Flowsheet_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->localData[0]->realVars[122] /* MatStm2.totMasFlo[2] variable */ = (data->localData[0]->realVars[125] /* MatStm2.totMolFlo[2] variable */) * (data->localData[0]->realVars[69] /* MatStm2.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 152
type: SIMPLE_ASSIGN
MatStm2._liqPhasMasFrac = MatStm2.totMasFlo[2] / MatStm2.totMasFlo[1]
*/
void Flowsheet_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->localData[0]->realVars[100] /* MatStm2.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[122] /* MatStm2.totMasFlo[2] variable */,data->localData[0]->realVars[121] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 153
type: SIMPLE_ASSIGN
Heater1._inVapPhasMolFrac = (-MatStm2.liqPhasMolFrac) - -1.0
*/
void Flowsheet_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->localData[0]->realVars[3] /* Heater1.inVapPhasMolFrac variable */ = (-data->localData[0]->realVars[101] /* MatStm2.liqPhasMolFrac variable */) - (-1.0);
  TRACE_POP
}
/*
equation index: 154
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolEnth[2] + Heater1.inVapPhasMolFrac * MatStm2.phasMolEnth[3]
*/
void Flowsheet_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->localData[0]->realVars[103] /* MatStm2.phasMolEnth[1] variable */ = (data->localData[0]->realVars[101] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[104] /* MatStm2.phasMolEnth[2] variable */) + (data->localData[0]->realVars[3] /* Heater1.inVapPhasMolFrac variable */) * (data->localData[0]->realVars[105] /* MatStm2.phasMolEnth[3] variable */);
  TRACE_POP
}
/*
equation index: 155
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolEnth[1]
*/
void Flowsheet_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  data->localData[0]->realVars[82] /* MatStm2.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[91] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[103] /* MatStm2.phasMolEnth[1] variable */);
  TRACE_POP
}
/*
equation index: 156
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[1] = MatStm2.phasMolEnth[1] + 2000000.0 * Heater1.eff
*/
void Flowsheet_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->localData[0]->realVars[42] /* MatStm1.phasMolEnth[1] variable */ = data->localData[0]->realVars[103] /* MatStm2.phasMolEnth[1] variable */ + (2000000.0) * (data->simulationInfo->realParameter[158]);
  TRACE_POP
}
/*
equation index: 157
type: SIMPLE_ASSIGN
MatStm2._phasMolSpHeat[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolSpHeat[2] + Heater1.inVapPhasMolFrac * MatStm2.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  data->localData[0]->realVars[109] /* MatStm2.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[101] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[110] /* MatStm2.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[3] /* Heater1.inVapPhasMolFrac variable */) * (data->localData[0]->realVars[111] /* MatStm2.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 158
type: SIMPLE_ASSIGN
MatStm2._compMolSpHeat[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  data->localData[0]->realVars[94] /* MatStm2.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[91] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[109] /* MatStm2.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 159
type: SIMPLE_ASSIGN
MatStm2._phasMolEntr[1] = MatStm2.liqPhasMolFrac * MatStm2.phasMolEntr[2] + Heater1.inVapPhasMolFrac * MatStm2.phasMolEntr[3]
*/
void Flowsheet_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  data->localData[0]->realVars[106] /* MatStm2.phasMolEntr[1] variable */ = (data->localData[0]->realVars[101] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[107] /* MatStm2.phasMolEntr[2] variable */) + (data->localData[0]->realVars[3] /* Heater1.inVapPhasMolFrac variable */) * (data->localData[0]->realVars[108] /* MatStm2.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 160
type: SIMPLE_ASSIGN
MatStm2._compMolEntr[1,1] = MatStm2.compMolFrac[1,1] * MatStm2.phasMolEntr[1]
*/
void Flowsheet_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  data->localData[0]->realVars[85] /* MatStm2.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[91] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[106] /* MatStm2.phasMolEntr[1] variable */);
  TRACE_POP
}
/*
equation index: 161
type: SIMPLE_ASSIGN
MatStm2._totMasFlo[3] = MatStm2.totMolFlo[3] * MatStm2.MW[3]
*/
void Flowsheet_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->localData[0]->realVars[123] /* MatStm2.totMasFlo[3] variable */ = (data->localData[0]->realVars[126] /* MatStm2.totMolFlo[3] variable */) * (data->localData[0]->realVars[70] /* MatStm2.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 162
type: SIMPLE_ASSIGN
MatStm2._vapPhasMasFrac = MatStm2.totMasFlo[3] / MatStm2.totMasFlo[1]
*/
void Flowsheet_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  data->localData[0]->realVars[127] /* MatStm2.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[123] /* MatStm2.totMasFlo[3] variable */,data->localData[0]->realVars[121] /* MatStm2.totMasFlo[1] variable */,"MatStm2.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 163
type: LINEAR

<var>MatStm2._compMasFrac[2,1]</var>
<var>MatStm2._compMasFrac[3,1]</var>
<var>MatStm2._compMasFrac[1,1]</var>
<row>
  <cell>if 101324.0 >= MatStm2.Pbubl then 0.0 else if 101324.0 >= MatStm2.Pdew then MatStm2.compMasFlo[3,1] else 0.0</cell>
  <cell>if 101324.0 >= MatStm2.Pbubl then 0.0 else if 101324.0 >= MatStm2.Pdew then MatStm2.compMasFlo[1,1] else 0.0</cell>
  <cell>if 101324.0 >= MatStm2.Pbubl then MatStm2.compMasFlo[1,1] else if 101324.0 >= MatStm2.Pdew then MatStm2.compMasFlo[2,1] else MatStm2.compMasFlo[1,1]</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if 101324.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="1">
    <residual>-(if 101324.0 >= MatStm2.Pbubl then 0.0 else if 101324.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="0" col="2">
    <residual>-(if 101324.0 >= MatStm2.Pbubl then -1.0 else if 101324.0 >= MatStm2.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="1" col="0">
    <residual>-(if 101324.0 >= MatStm2.Pbubl then 0.0 else if 101324.0 >= MatStm2.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="1" col="1">
    <residual>-(if 101324.0 >= MatStm2.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if 101324.0 >= MatStm2.Pbubl then 0.0 else if 101324.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 101324.0 >= MatStm2.Pbubl then -0.0 else if 101324.0 >= MatStm2.Pdew then -MatStm2.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if 101324.0 >= MatStm2.Pbubl then -MatStm2.totMasFlo[1] else if 101324.0 >= MatStm2.Pdew then -0.0 else -MatStm2.totMasFlo[1])</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  /* Linear equation system */
  int retValue;
  double aux_x[3] = { data->localData[1]->realVars[80] /* MatStm2.compMasFrac[2,1] variable */,data->localData[1]->realVars[81] /* MatStm2.compMasFrac[3,1] variable */,data->localData[1]->realVars[79] /* MatStm2.compMasFrac[1,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 163 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 4, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,163};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 163 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[80] /* MatStm2.compMasFrac[2,1] variable */ = aux_x[0];
  data->localData[0]->realVars[81] /* MatStm2.compMasFrac[3,1] variable */ = aux_x[1];
  data->localData[0]->realVars[79] /* MatStm2.compMasFrac[1,1] variable */ = aux_x[2];
  TRACE_POP
}
/*
equation index: 164
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,1] = MatStm2.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  data->localData[0]->realVars[30] /* MatStm1.compMolFrac[1,1] variable */ = data->localData[0]->realVars[91] /* MatStm2.compMolFrac[1,1] variable */;
  TRACE_POP
}
/*
equation index: 165
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,1] = 100.0 * MatStm1.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  data->localData[0]->realVars[27] /* MatStm1.compMolFlo[1,1] variable */ = (100.0) * (data->localData[0]->realVars[30] /* MatStm1.compMolFrac[1,1] variable */);
  TRACE_POP
}
/*
equation index: 166
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[1,1] = MatStm1.compMolFlo[1,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  data->localData[0]->realVars[15] /* MatStm1.compMasFlo[1,1] variable */ = (data->localData[0]->realVars[27] /* MatStm1.compMolFlo[1,1] variable */) * (data->simulationInfo->realParameter[202]);
  TRACE_POP
}
/*
equation index: 167
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEnth[1]
*/
void Flowsheet_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->localData[0]->realVars[21] /* MatStm1.compMolEnth[1,1] variable */ = (data->localData[0]->realVars[30] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[42] /* MatStm1.phasMolEnth[1] variable */);
  TRACE_POP
}
void Flowsheet_eqFunction_168(DATA*, threadData_t*);
void Flowsheet_eqFunction_169(DATA*, threadData_t*);
void Flowsheet_eqFunction_170(DATA*, threadData_t*);
void Flowsheet_eqFunction_171(DATA*, threadData_t*);
void Flowsheet_eqFunction_172(DATA*, threadData_t*);
void Flowsheet_eqFunction_173(DATA*, threadData_t*);
void Flowsheet_eqFunction_174(DATA*, threadData_t*);
void Flowsheet_eqFunction_175(DATA*, threadData_t*);
void Flowsheet_eqFunction_176(DATA*, threadData_t*);
void Flowsheet_eqFunction_177(DATA*, threadData_t*);
void Flowsheet_eqFunction_178(DATA*, threadData_t*);
void Flowsheet_eqFunction_179(DATA*, threadData_t*);
void Flowsheet_eqFunction_180(DATA*, threadData_t*);
void Flowsheet_eqFunction_181(DATA*, threadData_t*);
void Flowsheet_eqFunction_182(DATA*, threadData_t*);
void Flowsheet_eqFunction_183(DATA*, threadData_t*);
void Flowsheet_eqFunction_184(DATA*, threadData_t*);
void Flowsheet_eqFunction_186(DATA*, threadData_t*);
void Flowsheet_eqFunction_185(DATA*, threadData_t*);
/*
equation index: 187
indexNonlinear: 1
type: NONLINEAR

vars: {MatStm1._liqPhasMolFrac, Heater1._outT}
eqns: {168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 186, 185}
*/
void Flowsheet_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 187 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[40] /* MatStm1.liqPhasMolFrac variable */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[5] /* Heater1.outT variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,187};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 187 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[40] /* MatStm1.liqPhasMolFrac variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[5] /* Heater1.outT variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  TRACE_POP
}
/*
equation index: 188
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[3,1] = MatStm1.compMolFlo[3,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  data->localData[0]->realVars[17] /* MatStm1.compMasFlo[3,1] variable */ = (data->localData[0]->realVars[29] /* MatStm1.compMolFlo[3,1] variable */) * (data->simulationInfo->realParameter[202]);
  TRACE_POP
}
/*
equation index: 189
type: SIMPLE_ASSIGN
MatStm1._compMasFlo[2,1] = MatStm1.compMolFlo[2,1] * MatStm1.comp[1].MW
*/
void Flowsheet_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->localData[0]->realVars[16] /* MatStm1.compMasFlo[2,1] variable */ = (data->localData[0]->realVars[28] /* MatStm1.compMolFlo[2,1] variable */) * (data->simulationInfo->realParameter[202]);
  TRACE_POP
}
/*
equation index: 190
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[1].LiqCp[1], MatStm1.comp[1].LiqCp[2], MatStm1.comp[1].LiqCp[3], MatStm1.comp[1].LiqCp[4], MatStm1.comp[1].LiqCp[5], MatStm1.comp[1].LiqCp[6]}, Heater1.outT)
*/
void Flowsheet_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[178], (modelica_real)data->simulationInfo->realParameter[179], (modelica_real)data->simulationInfo->realParameter[180], (modelica_real)data->simulationInfo->realParameter[181], (modelica_real)data->simulationInfo->realParameter[182], (modelica_real)data->simulationInfo->realParameter[183]);
  data->localData[0]->realVars[34] /* MatStm1.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp0, data->localData[0]->realVars[5] /* Heater1.outT variable */);
  TRACE_POP
}
/*
equation index: 191
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolSpHeat[2,1]
*/
void Flowsheet_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->localData[0]->realVars[49] /* MatStm1.phasMolSpHeat[2] variable */ = (data->localData[0]->realVars[31] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[34] /* MatStm1.compMolSpHeat[2,1] variable */);
  TRACE_POP
}
/*
equation index: 192
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, Heater1.outT)
*/
void Flowsheet_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[220], (modelica_real)data->simulationInfo->realParameter[221], (modelica_real)data->simulationInfo->realParameter[222], (modelica_real)data->simulationInfo->realParameter[223], (modelica_real)data->simulationInfo->realParameter[224], (modelica_real)data->simulationInfo->realParameter[225]);
  data->localData[0]->realVars[35] /* MatStm1.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp1, data->localData[0]->realVars[5] /* Heater1.outT variable */);
  TRACE_POP
}
/*
equation index: 193
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolSpHeat[3,1]
*/
void Flowsheet_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->localData[0]->realVars[50] /* MatStm1.phasMolSpHeat[3] variable */ = (data->localData[0]->realVars[32] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[35] /* MatStm1.compMolSpHeat[3,1] variable */);
  TRACE_POP
}
/*
equation index: 194
type: SIMPLE_ASSIGN
MatStm1._phasMolSpHeat[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolSpHeat[2] + Heater1.outVapPhasMolFrac * MatStm1.phasMolSpHeat[3]
*/
void Flowsheet_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->localData[0]->realVars[48] /* MatStm1.phasMolSpHeat[1] variable */ = (data->localData[0]->realVars[40] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[49] /* MatStm1.phasMolSpHeat[2] variable */) + (data->localData[0]->realVars[6] /* Heater1.outVapPhasMolFrac variable */) * (data->localData[0]->realVars[50] /* MatStm1.phasMolSpHeat[3] variable */);
  TRACE_POP
}
/*
equation index: 195
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, Heater1.outT, Heater1.outP, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[220], (modelica_real)data->simulationInfo->realParameter[221], (modelica_real)data->simulationInfo->realParameter[222], (modelica_real)data->simulationInfo->realParameter[223], (modelica_real)data->simulationInfo->realParameter[224], (modelica_real)data->simulationInfo->realParameter[225]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[170], (modelica_real)data->simulationInfo->realParameter[171], (modelica_real)data->simulationInfo->realParameter[172], (modelica_real)data->simulationInfo->realParameter[173], (modelica_real)data->simulationInfo->realParameter[174], (modelica_real)data->simulationInfo->realParameter[175]);
  data->localData[0]->realVars[25] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[161], tmp2, tmp3, data->simulationInfo->realParameter[209], data->simulationInfo->realParameter[210], data->localData[0]->realVars[5] /* Heater1.outT variable */, data->localData[0]->realVars[4] /* Heater1.outP variable */, data->localData[0]->realVars[31] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[32] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[26] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 196
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEntr[2,1]
*/
void Flowsheet_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->localData[0]->realVars[46] /* MatStm1.phasMolEntr[2] variable */ = (data->localData[0]->realVars[31] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[25] /* MatStm1.compMolEntr[2,1] variable */);
  TRACE_POP
}
/*
equation index: 197
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEntr[3,1]
*/
void Flowsheet_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  data->localData[0]->realVars[47] /* MatStm1.phasMolEntr[3] variable */ = (data->localData[0]->realVars[32] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[26] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
/*
equation index: 198
type: SIMPLE_ASSIGN
MatStm1._phasMolEntr[1] = MatStm1.liqPhasMolFrac * MatStm1.phasMolEntr[2] + Heater1.outVapPhasMolFrac * MatStm1.phasMolEntr[3]
*/
void Flowsheet_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->localData[0]->realVars[45] /* MatStm1.phasMolEntr[1] variable */ = (data->localData[0]->realVars[40] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[46] /* MatStm1.phasMolEntr[2] variable */) + (data->localData[0]->realVars[6] /* Heater1.outVapPhasMolFrac variable */) * (data->localData[0]->realVars[47] /* MatStm1.phasMolEntr[3] variable */);
  TRACE_POP
}
/*
equation index: 199
type: SIMPLE_ASSIGN
Heater1._tempInc = Heater1.outT - 300.0
*/
void Flowsheet_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  data->localData[0]->realVars[7] /* Heater1.tempInc variable */ = data->localData[0]->realVars[5] /* Heater1.outT variable */ - 300.0;
  TRACE_POP
}
/*
equation index: 200
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:1 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[11] /* MatStm1.MW[3] variable */ = data->modelData->realVarsData[11].attribute /* MatStm1.MW[3] variable */.start;

  data->localData[0]->realVars[10] /* MatStm1.MW[2] variable */ = data->modelData->realVarsData[10].attribute /* MatStm1.MW[2] variable */.start;

  data->localData[0]->realVars[9] /* MatStm1.MW[1] variable */ = data->modelData->realVarsData[9].attribute /* MatStm1.MW[1] variable */.start;

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 1);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp7, tmp9); $Pi += tmp8)
    {
      array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)data->localData[0]->realVars[9] /* MatStm1.MW[1] variable */ + ((&data->localData[0]->realVars[30] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 1, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[202])[calc_base_index_dims_subs(1, 1, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[10] /* MatStm1.MW[2] variable */ + ((&data->localData[0]->realVars[30] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 1, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[202])[calc_base_index_dims_subs(1, 1, (modelica_integer)$Pi)]), (modelica_real)data->localData[0]->realVars[11] /* MatStm1.MW[3] variable */ + ((&data->localData[0]->realVars[30] /* MatStm1.compMolFrac[1,1] variable */)[calc_base_index_dims_subs(2, 3, 1, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->simulationInfo->realParameter[202])[calc_base_index_dims_subs(1, 1, (modelica_integer)$Pi)]));
      create_index_spec(&tmp5, 1, (1), (int*)0, 'W');
      real_array_create(&tmp6, (modelica_real*)&data->localData[0]->realVars[9] /* MatStm1.MW[1] variable */, 1, 3);
      indexed_assign_real_array(tmp4, &tmp6, &tmp5);
    }
  }
  TRACE_POP
}
/*
equation index: 201
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[3] = MatStm1.totMolFlo[3] * MatStm1.MW[3]
*/
void Flowsheet_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  data->localData[0]->realVars[62] /* MatStm1.totMasFlo[3] variable */ = (data->localData[0]->realVars[64] /* MatStm1.totMolFlo[3] variable */) * (data->localData[0]->realVars[11] /* MatStm1.MW[3] variable */);
  TRACE_POP
}
/*
equation index: 202
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[1] = 100.0 * MatStm1.MW[1]
*/
void Flowsheet_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->localData[0]->realVars[60] /* MatStm1.totMasFlo[1] variable */ = (100.0) * (data->localData[0]->realVars[9] /* MatStm1.MW[1] variable */);
  TRACE_POP
}
/*
equation index: 203
type: SIMPLE_ASSIGN
MatStm1._vapPhasMasFrac = MatStm1.totMasFlo[3] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  data->localData[0]->realVars[65] /* MatStm1.vapPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[62] /* MatStm1.totMasFlo[3] variable */,data->localData[0]->realVars[60] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 204
type: SIMPLE_ASSIGN
MatStm1._totMasFlo[2] = MatStm1.totMolFlo[2] * MatStm1.MW[2]
*/
void Flowsheet_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  data->localData[0]->realVars[61] /* MatStm1.totMasFlo[2] variable */ = (data->localData[0]->realVars[63] /* MatStm1.totMolFlo[2] variable */) * (data->localData[0]->realVars[10] /* MatStm1.MW[2] variable */);
  TRACE_POP
}
/*
equation index: 205
type: SIMPLE_ASSIGN
MatStm1._liqPhasMasFrac = MatStm1.totMasFlo[2] / MatStm1.totMasFlo[1]
*/
void Flowsheet_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  data->localData[0]->realVars[39] /* MatStm1.liqPhasMasFrac variable */ = DIVISION_SIM(data->localData[0]->realVars[61] /* MatStm1.totMasFlo[2] variable */,data->localData[0]->realVars[60] /* MatStm1.totMasFlo[1] variable */,"MatStm1.totMasFlo[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 206
type: LINEAR

<var>MatStm1._compMasFrac[1,1]</var>
<var>MatStm1._compMasFrac[3,1]</var>
<var>MatStm1._compMasFrac[2,1]</var>
<row>
  <cell>if Heater1.outP >= MatStm1.Pbubl then MatStm1.compMasFlo[1,1] else if Heater1.outP >= MatStm1.Pdew then MatStm1.compMasFlo[2,1] else MatStm1.compMasFlo[1,1]</cell>
  <cell>if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then MatStm1.compMasFlo[1,1] else 0.0</cell>
  <cell>if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then MatStm1.compMasFlo[3,1] else 0.0</cell>
</row>
<matrix>
  <cell row="0" col="0">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then -MatStm1.totMasFlo[1] else if Heater1.outP >= MatStm1.Pdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="0" col="2">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then -0.0 else if Heater1.outP >= MatStm1.Pdew then -MatStm1.totMasFlo[2] else -0.0)</residual>
  </cell><cell row="1" col="0">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then -MatStm1.totMasFlo[1] else 0.0)</residual>
  </cell><cell row="1" col="1">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell><cell row="1" col="2">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then -0.0 else 1.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then -1.0 else if Heater1.outP >= MatStm1.Pdew then -0.0 else -1.0)</residual>
  </cell><cell row="2" col="1">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 0.0 else if Heater1.outP >= MatStm1.Pdew then -MatStm1.totMasFlo[3] else 1.0)</residual>
  </cell><cell row="2" col="2">
    <residual>-(if Heater1.outP >= MatStm1.Pbubl then 1.0 else -0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  /* Linear equation system */
  int retValue;
  double aux_x[3] = { data->localData[1]->realVars[18] /* MatStm1.compMasFrac[1,1] variable */,data->localData[1]->realVars[20] /* MatStm1.compMasFrac[3,1] variable */,data->localData[1]->realVars[19] /* MatStm1.compMasFrac[2,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 206 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 5, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,206};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 206 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[0];
  data->localData[0]->realVars[20] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[1];
  data->localData[0]->realVars[19] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[2];
  TRACE_POP
}
/*
equation index: 207
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolSpHeat[1]
*/
void Flowsheet_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  data->localData[0]->realVars[33] /* MatStm1.compMolSpHeat[1,1] variable */ = (data->localData[0]->realVars[30] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[48] /* MatStm1.phasMolSpHeat[1] variable */);
  TRACE_POP
}
/*
equation index: 208
type: SIMPLE_ASSIGN
MatStm1._compMolEntr[1,1] = MatStm1.compMolFrac[1,1] * MatStm1.phasMolEntr[1]
*/
void Flowsheet_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  data->localData[0]->realVars[24] /* MatStm1.compMolEntr[1,1] variable */ = (data->localData[0]->realVars[30] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[45] /* MatStm1.phasMolEntr[1] variable */);
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

  Flowsheet_eqFunction_148(data, threadData);

  Flowsheet_eqFunction_149(data, threadData);

  Flowsheet_eqFunction_150(data, threadData);

  Flowsheet_eqFunction_151(data, threadData);

  Flowsheet_eqFunction_152(data, threadData);

  Flowsheet_eqFunction_153(data, threadData);

  Flowsheet_eqFunction_154(data, threadData);

  Flowsheet_eqFunction_155(data, threadData);

  Flowsheet_eqFunction_156(data, threadData);

  Flowsheet_eqFunction_157(data, threadData);

  Flowsheet_eqFunction_158(data, threadData);

  Flowsheet_eqFunction_159(data, threadData);

  Flowsheet_eqFunction_160(data, threadData);

  Flowsheet_eqFunction_161(data, threadData);

  Flowsheet_eqFunction_162(data, threadData);

  Flowsheet_eqFunction_163(data, threadData);

  Flowsheet_eqFunction_164(data, threadData);

  Flowsheet_eqFunction_165(data, threadData);

  Flowsheet_eqFunction_166(data, threadData);

  Flowsheet_eqFunction_167(data, threadData);

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

  Flowsheet_eqFunction_204(data, threadData);

  Flowsheet_eqFunction_205(data, threadData);

  Flowsheet_eqFunction_206(data, threadData);

  Flowsheet_eqFunction_207(data, threadData);

  Flowsheet_eqFunction_208(data, threadData);
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
#define _OMC_LIT_RESOURCE_1_dir_data "C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,9,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,84,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Modelica"
#define _OMC_LIT_RESOURCE_2_dir_data "C:/OpenModelica1.13.264bit/lib/omlibrary/Modelica 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,8,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,55,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "C:/OpenModelica1.13.264bit/lib/omlibrary/ModelicaServices 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,63,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "Simulator"
#define _OMC_LIT_RESOURCE_4_dir_data "C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,9,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,84,_OMC_LIT_RESOURCE_4_dir_data);

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
  data->modelData->modelDir = "C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles";
  data->modelData->modelGUID = "{c06bf2f0-b6b1-4a52-bfb7-321b82133020}";
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
  data->modelData->nVariablesReal = 129;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 318;
  data->modelData->nParametersInteger = 13;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 8;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 70;
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
  data->modelData->modelDataXml.nEquations = 559;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 6;
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


