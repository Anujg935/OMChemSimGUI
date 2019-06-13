/* Initialization */
#include "Flowsheet_model.h"
#include "Flowsheet_11mix.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void Flowsheet_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[1] = 0.0
*/
void Flowsheet_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[98] /* MatStm1.resMolSpHeat[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[1] = 0.0
*/
void Flowsheet_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[92] /* MatStm1.resMolEnth[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[1] = 0.0
*/
void Flowsheet_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[95] /* MatStm1.resMolEntr[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
MatStm1._K[3] = 9.869232667160129e-006 * Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[3].VP[1], MatStm1.comp[3].VP[2], MatStm1.comp[3].VP[3], MatStm1.comp[3].VP[4], MatStm1.comp[3].VP[5], MatStm1.comp[3].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[165], (modelica_real)data->simulationInfo->realParameter[166], (modelica_real)data->simulationInfo->realParameter[167], (modelica_real)data->simulationInfo->realParameter[168], (modelica_real)data->simulationInfo->realParameter[169], (modelica_real)data->simulationInfo->realParameter[170]);
  data->localData[0]->realVars[10] /* MatStm1.K[3] variable */ = (9.869232667160129e-006) * (omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, 300.0));
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
MatStm1._K[2] = 9.869232667160129e-006 * Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[2].VP[1], MatStm1.comp[2].VP[2], MatStm1.comp[2].VP[3], MatStm1.comp[2].VP[4], MatStm1.comp[2].VP[5], MatStm1.comp[2].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[159], (modelica_real)data->simulationInfo->realParameter[160], (modelica_real)data->simulationInfo->realParameter[161], (modelica_real)data->simulationInfo->realParameter[162], (modelica_real)data->simulationInfo->realParameter[163], (modelica_real)data->simulationInfo->realParameter[164]);
  data->localData[0]->realVars[9] /* MatStm1.K[2] variable */ = (9.869232667160129e-006) * (omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp1, 300.0));
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
MatStm1._K[1] = 9.869232667160129e-006 * Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[1].VP[1], MatStm1.comp[1].VP[2], MatStm1.comp[1].VP[3], MatStm1.comp[1].VP[4], MatStm1.comp[1].VP[5], MatStm1.comp[1].VP[6]}, 300.0)
*/
void Flowsheet_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  real_array tmp2;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[153], (modelica_real)data->simulationInfo->realParameter[154], (modelica_real)data->simulationInfo->realParameter[155], (modelica_real)data->simulationInfo->realParameter[156], (modelica_real)data->simulationInfo->realParameter[157], (modelica_real)data->simulationInfo->realParameter[158]);
  data->localData[0]->realVars[8] /* MatStm1.K[1] variable */ = (9.869232667160129e-006) * (omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp2, 300.0));
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,3] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[3].SH, {MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, {MatStm1.comp[3].HOV[1], MatStm1.comp[3].HOV[2], MatStm1.comp[3].HOV[3], MatStm1.comp[3].HOV[4], MatStm1.comp[3].HOV[5], MatStm1.comp[3].HOV[6]}, MatStm1.comp[3].Tc, 300.0)
*/
void Flowsheet_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  real_array tmp3;
  real_array tmp4;
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[183], (modelica_real)data->simulationInfo->realParameter[184], (modelica_real)data->simulationInfo->realParameter[185], (modelica_real)data->simulationInfo->realParameter[186], (modelica_real)data->simulationInfo->realParameter[187], (modelica_real)data->simulationInfo->realParameter[188]);
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[33], (modelica_real)data->simulationInfo->realParameter[34], (modelica_real)data->simulationInfo->realParameter[35], (modelica_real)data->simulationInfo->realParameter[36], (modelica_real)data->simulationInfo->realParameter[37], (modelica_real)data->simulationInfo->realParameter[38]);
  data->localData[0]->realVars[44] /* MatStm1.compMolEnth[3,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[128], tmp3, tmp4, data->simulationInfo->realParameter[143], 300.0);
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,3] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[3].SH, {MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, {MatStm1.comp[3].HOV[1], MatStm1.comp[3].HOV[2], MatStm1.comp[3].HOV[3], MatStm1.comp[3].HOV[4], MatStm1.comp[3].HOV[5], MatStm1.comp[3].HOV[6]}, MatStm1.comp[3].Tc, 300.0)
*/
void Flowsheet_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  real_array tmp5;
  real_array tmp6;
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[183], (modelica_real)data->simulationInfo->realParameter[184], (modelica_real)data->simulationInfo->realParameter[185], (modelica_real)data->simulationInfo->realParameter[186], (modelica_real)data->simulationInfo->realParameter[187], (modelica_real)data->simulationInfo->realParameter[188]);
  array_alloc_scalar_real_array(&tmp6, 6, (modelica_real)data->simulationInfo->realParameter[33], (modelica_real)data->simulationInfo->realParameter[34], (modelica_real)data->simulationInfo->realParameter[35], (modelica_real)data->simulationInfo->realParameter[36], (modelica_real)data->simulationInfo->realParameter[37], (modelica_real)data->simulationInfo->realParameter[38]);
  data->localData[0]->realVars[41] /* MatStm1.compMolEnth[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[128], tmp5, tmp6, data->simulationInfo->realParameter[143], 300.0);
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,3] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, 300.0, MatStm1.comp[3].Tc)
*/
void Flowsheet_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp7, 6, (modelica_real)data->simulationInfo->realParameter[183], (modelica_real)data->simulationInfo->realParameter[184], (modelica_real)data->simulationInfo->realParameter[185], (modelica_real)data->simulationInfo->realParameter[186], (modelica_real)data->simulationInfo->realParameter[187], (modelica_real)data->simulationInfo->realParameter[188]);
  data->localData[0]->realVars[80] /* MatStm1.compMolSpHeat[3,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp7, 300.0, data->simulationInfo->realParameter[143]);
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,3] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[3].LiqCp[1], MatStm1.comp[3].LiqCp[2], MatStm1.comp[3].LiqCp[3], MatStm1.comp[3].LiqCp[4], MatStm1.comp[3].LiqCp[5], MatStm1.comp[3].LiqCp[6]}, {MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, 300.0, MatStm1.comp[3].Tc)
*/
void Flowsheet_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp8, 6, (modelica_real)data->simulationInfo->realParameter[57], (modelica_real)data->simulationInfo->realParameter[58], (modelica_real)data->simulationInfo->realParameter[59], (modelica_real)data->simulationInfo->realParameter[60], (modelica_real)data->simulationInfo->realParameter[61], (modelica_real)data->simulationInfo->realParameter[62]);
  array_alloc_scalar_real_array(&tmp9, 6, (modelica_real)data->simulationInfo->realParameter[183], (modelica_real)data->simulationInfo->realParameter[184], (modelica_real)data->simulationInfo->realParameter[185], (modelica_real)data->simulationInfo->realParameter[186], (modelica_real)data->simulationInfo->realParameter[187], (modelica_real)data->simulationInfo->realParameter[188]);
  data->localData[0]->realVars[77] /* MatStm1.compMolSpHeat[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp8, tmp9, 300.0, data->simulationInfo->realParameter[143]);
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, 300.0)
*/
void Flowsheet_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  real_array tmp10;
  real_array tmp11;
  array_alloc_scalar_real_array(&tmp10, 6, (modelica_real)data->simulationInfo->realParameter[177], (modelica_real)data->simulationInfo->realParameter[178], (modelica_real)data->simulationInfo->realParameter[179], (modelica_real)data->simulationInfo->realParameter[180], (modelica_real)data->simulationInfo->realParameter[181], (modelica_real)data->simulationInfo->realParameter[182]);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)data->simulationInfo->realParameter[27], (modelica_real)data->simulationInfo->realParameter[28], (modelica_real)data->simulationInfo->realParameter[29], (modelica_real)data->simulationInfo->realParameter[30], (modelica_real)data->simulationInfo->realParameter[31], (modelica_real)data->simulationInfo->realParameter[32]);
  data->localData[0]->realVars[43] /* MatStm1.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[127], tmp10, tmp11, data->simulationInfo->realParameter[142], 300.0);
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, 300.0)
*/
void Flowsheet_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  real_array tmp12;
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)data->simulationInfo->realParameter[177], (modelica_real)data->simulationInfo->realParameter[178], (modelica_real)data->simulationInfo->realParameter[179], (modelica_real)data->simulationInfo->realParameter[180], (modelica_real)data->simulationInfo->realParameter[181], (modelica_real)data->simulationInfo->realParameter[182]);
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)data->simulationInfo->realParameter[27], (modelica_real)data->simulationInfo->realParameter[28], (modelica_real)data->simulationInfo->realParameter[29], (modelica_real)data->simulationInfo->realParameter[30], (modelica_real)data->simulationInfo->realParameter[31], (modelica_real)data->simulationInfo->realParameter[32]);
  data->localData[0]->realVars[40] /* MatStm1.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[127], tmp12, tmp13, data->simulationInfo->realParameter[142], 300.0);
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,2] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, 300.0, MatStm1.comp[2].Tc)
*/
void Flowsheet_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  real_array tmp14;
  array_alloc_scalar_real_array(&tmp14, 6, (modelica_real)data->simulationInfo->realParameter[177], (modelica_real)data->simulationInfo->realParameter[178], (modelica_real)data->simulationInfo->realParameter[179], (modelica_real)data->simulationInfo->realParameter[180], (modelica_real)data->simulationInfo->realParameter[181], (modelica_real)data->simulationInfo->realParameter[182]);
  data->localData[0]->realVars[79] /* MatStm1.compMolSpHeat[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp14, 300.0, data->simulationInfo->realParameter[142]);
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,2] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[2].LiqCp[1], MatStm1.comp[2].LiqCp[2], MatStm1.comp[2].LiqCp[3], MatStm1.comp[2].LiqCp[4], MatStm1.comp[2].LiqCp[5], MatStm1.comp[2].LiqCp[6]}, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, 300.0, MatStm1.comp[2].Tc)
*/
void Flowsheet_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  real_array tmp15;
  real_array tmp16;
  array_alloc_scalar_real_array(&tmp15, 6, (modelica_real)data->simulationInfo->realParameter[51], (modelica_real)data->simulationInfo->realParameter[52], (modelica_real)data->simulationInfo->realParameter[53], (modelica_real)data->simulationInfo->realParameter[54], (modelica_real)data->simulationInfo->realParameter[55], (modelica_real)data->simulationInfo->realParameter[56]);
  array_alloc_scalar_real_array(&tmp16, 6, (modelica_real)data->simulationInfo->realParameter[177], (modelica_real)data->simulationInfo->realParameter[178], (modelica_real)data->simulationInfo->realParameter[179], (modelica_real)data->simulationInfo->realParameter[180], (modelica_real)data->simulationInfo->realParameter[181], (modelica_real)data->simulationInfo->realParameter[182]);
  data->localData[0]->realVars[76] /* MatStm1.compMolSpHeat[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp15, tmp16, 300.0, data->simulationInfo->realParameter[142]);
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  real_array tmp17;
  real_array tmp18;
  array_alloc_scalar_real_array(&tmp17, 6, (modelica_real)data->simulationInfo->realParameter[171], (modelica_real)data->simulationInfo->realParameter[172], (modelica_real)data->simulationInfo->realParameter[173], (modelica_real)data->simulationInfo->realParameter[174], (modelica_real)data->simulationInfo->realParameter[175], (modelica_real)data->simulationInfo->realParameter[176]);
  array_alloc_scalar_real_array(&tmp18, 6, (modelica_real)data->simulationInfo->realParameter[21], (modelica_real)data->simulationInfo->realParameter[22], (modelica_real)data->simulationInfo->realParameter[23], (modelica_real)data->simulationInfo->realParameter[24], (modelica_real)data->simulationInfo->realParameter[25], (modelica_real)data->simulationInfo->realParameter[26]);
  data->localData[0]->realVars[42] /* MatStm1.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[126], tmp17, tmp18, data->simulationInfo->realParameter[141], 300.0);
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, 300.0)
*/
void Flowsheet_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  real_array tmp19;
  real_array tmp20;
  array_alloc_scalar_real_array(&tmp19, 6, (modelica_real)data->simulationInfo->realParameter[171], (modelica_real)data->simulationInfo->realParameter[172], (modelica_real)data->simulationInfo->realParameter[173], (modelica_real)data->simulationInfo->realParameter[174], (modelica_real)data->simulationInfo->realParameter[175], (modelica_real)data->simulationInfo->realParameter[176]);
  array_alloc_scalar_real_array(&tmp20, 6, (modelica_real)data->simulationInfo->realParameter[21], (modelica_real)data->simulationInfo->realParameter[22], (modelica_real)data->simulationInfo->realParameter[23], (modelica_real)data->simulationInfo->realParameter[24], (modelica_real)data->simulationInfo->realParameter[25], (modelica_real)data->simulationInfo->realParameter[26]);
  data->localData[0]->realVars[39] /* MatStm1.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[126], tmp19, tmp20, data->simulationInfo->realParameter[141], 300.0);
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[3,1] = Simulator.Files.Thermodynamic_Functions.VapCpId({MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, 300.0, MatStm1.comp[1].Tc)
*/
void Flowsheet_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  real_array tmp21;
  array_alloc_scalar_real_array(&tmp21, 6, (modelica_real)data->simulationInfo->realParameter[171], (modelica_real)data->simulationInfo->realParameter[172], (modelica_real)data->simulationInfo->realParameter[173], (modelica_real)data->simulationInfo->realParameter[174], (modelica_real)data->simulationInfo->realParameter[175], (modelica_real)data->simulationInfo->realParameter[176]);
  data->localData[0]->realVars[78] /* MatStm1.compMolSpHeat[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_VapCpId(threadData, tmp21, 300.0, data->simulationInfo->realParameter[141]);
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
MatStm1._compMolSpHeat[2,1] = Simulator.Files.Thermodynamic_Functions.LiqCpId({MatStm1.comp[1].LiqCp[1], MatStm1.comp[1].LiqCp[2], MatStm1.comp[1].LiqCp[3], MatStm1.comp[1].LiqCp[4], MatStm1.comp[1].LiqCp[5], MatStm1.comp[1].LiqCp[6]}, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, 300.0, MatStm1.comp[1].Tc)
*/
void Flowsheet_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  real_array tmp22;
  real_array tmp23;
  array_alloc_scalar_real_array(&tmp22, 6, (modelica_real)data->simulationInfo->realParameter[45], (modelica_real)data->simulationInfo->realParameter[46], (modelica_real)data->simulationInfo->realParameter[47], (modelica_real)data->simulationInfo->realParameter[48], (modelica_real)data->simulationInfo->realParameter[49], (modelica_real)data->simulationInfo->realParameter[50]);
  array_alloc_scalar_real_array(&tmp23, 6, (modelica_real)data->simulationInfo->realParameter[171], (modelica_real)data->simulationInfo->realParameter[172], (modelica_real)data->simulationInfo->realParameter[173], (modelica_real)data->simulationInfo->realParameter[174], (modelica_real)data->simulationInfo->realParameter[175], (modelica_real)data->simulationInfo->realParameter[176]);
  data->localData[0]->realVars[75] /* MatStm1.compMolSpHeat[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_LiqCpId(threadData, tmp22, tmp23, 300.0, data->simulationInfo->realParameter[141]);
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,1] = 0.5
*/
void Flowsheet_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[63] /* MatStm1.compMolFrac[1,1] variable */ = 0.5;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,1] = 100.0 * MatStm1.compMolFrac[1,1]
*/
void Flowsheet_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[54] /* MatStm1.compMolFlo[1,1] variable */ = (100.0) * (data->localData[0]->realVars[63] /* MatStm1.compMolFrac[1,1] variable */);
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,2] = 0.4
*/
void Flowsheet_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[64] /* MatStm1.compMolFrac[1,2] variable */ = 0.4;
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,2] = 100.0 * MatStm1.compMolFrac[1,2]
*/
void Flowsheet_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[55] /* MatStm1.compMolFlo[1,2] variable */ = (100.0) * (data->localData[0]->realVars[64] /* MatStm1.compMolFrac[1,2] variable */);
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
MatStm1._compMolFrac[1,3] = 0.1
*/
void Flowsheet_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,3] variable */ = 0.1;
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[1,3] = 100.0 * MatStm1.compMolFrac[1,3]
*/
void Flowsheet_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[56] /* MatStm1.compMolFlo[1,3] variable */ = (100.0) * (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,3] variable */);
  TRACE_POP
}

void Flowsheet_eqFunction_25(DATA*, threadData_t*);
/*
equation index: 26
indexNonlinear: 0
type: NONLINEAR

vars: {MatStm1._Tdew}
eqns: {25}
*/
void Flowsheet_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 26 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[17] /* MatStm1.Tdew variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,26};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 26 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[17] /* MatStm1.Tdew variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  TRACE_POP
}

void Flowsheet_eqFunction_27(DATA*, threadData_t*);
/*
equation index: 28
indexNonlinear: 1
type: NONLINEAR

vars: {MatStm1._Tbubl}
eqns: {27}
*/
void Flowsheet_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 28 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,28};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 28 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[16] /* MatStm1.Tbubl variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  TRACE_POP
}
extern void Flowsheet_eqFunction_109(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_108(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_107(DATA *data, threadData_t *threadData);


void Flowsheet_eqFunction_32(DATA*, threadData_t*);
void Flowsheet_eqFunction_33(DATA*, threadData_t*);
void Flowsheet_eqFunction_34(DATA*, threadData_t*);
void Flowsheet_eqFunction_35(DATA*, threadData_t*);
void Flowsheet_eqFunction_36(DATA*, threadData_t*);
void Flowsheet_eqFunction_37(DATA*, threadData_t*);
void Flowsheet_eqFunction_38(DATA*, threadData_t*);
void Flowsheet_eqFunction_39(DATA*, threadData_t*);
void Flowsheet_eqFunction_46(DATA*, threadData_t*);
void Flowsheet_eqFunction_45(DATA*, threadData_t*);
void Flowsheet_eqFunction_44(DATA*, threadData_t*);
void Flowsheet_eqFunction_43(DATA*, threadData_t*);
void Flowsheet_eqFunction_42(DATA*, threadData_t*);
void Flowsheet_eqFunction_41(DATA*, threadData_t*);
void Flowsheet_eqFunction_40(DATA*, threadData_t*);
/*
equation index: 62
indexNonlinear: 2
type: NONLINEAR

vars: {MatStm1._totMolFlo[2], MatStm1._compMolFrac[2,3], MatStm1._compMolFrac[3,3], MatStm1._compMolFrac[2,2], MatStm1._compMolFrac[3,2], MatStm1._compMolFrac[2,1], MatStm1._compMolFrac[3,1]}
eqns: {32, 33, 34, 35, 36, 37, 38, 39, 46, 45, 44, 43, 42, 41, 40}
*/
void Flowsheet_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 62 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[6] = data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,62};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 62 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[105] /* MatStm1.totMolFlo[2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[6];
  TRACE_POP
}

/*
equation index: 63
type: ALGORITHM

  (MatStm1.compMolEntr[2,3], MatStm1.compMolEntr[3,3]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[3].AS, {MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, {MatStm1.comp[3].HOV[1], MatStm1.comp[3].HOV[2], MatStm1.comp[3].HOV[3], MatStm1.comp[3].HOV[4], MatStm1.comp[3].HOV[5], MatStm1.comp[3].HOV[6]}, MatStm1.comp[3].Tb, MatStm1.comp[3].Tc, 300.0, 101325.0, MatStm1.compMolFrac[2,3], MatStm1.compMolFrac[3,3]);
*/
void Flowsheet_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[183], (modelica_real)data->simulationInfo->realParameter[184], (modelica_real)data->simulationInfo->realParameter[185], (modelica_real)data->simulationInfo->realParameter[186], (modelica_real)data->simulationInfo->realParameter[187], (modelica_real)data->simulationInfo->realParameter[188]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[33], (modelica_real)data->simulationInfo->realParameter[34], (modelica_real)data->simulationInfo->realParameter[35], (modelica_real)data->simulationInfo->realParameter[36], (modelica_real)data->simulationInfo->realParameter[37], (modelica_real)data->simulationInfo->realParameter[38]);
  data->localData[0]->realVars[50] /* MatStm1.compMolEntr[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[5], tmp0, tmp1, data->simulationInfo->realParameter[140], data->simulationInfo->realParameter[143], 300.0, 101325.0, data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,3] variable */, data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,3] variable */ ,&data->localData[0]->realVars[53] /* MatStm1.compMolEntr[3,3] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_173(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_172(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_185(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_180(DATA *data, threadData_t *threadData);


/*
equation index: 68
type: ALGORITHM

  (MatStm1.compMolEntr[2,1], MatStm1.compMolEntr[3,1]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[1].AS, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tb, MatStm1.comp[1].Tc, 300.0, 101325.0, MatStm1.compMolFrac[2,1], MatStm1.compMolFrac[3,1]);
*/
void Flowsheet_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  real_array tmp2;
  real_array tmp3;
  array_alloc_scalar_real_array(&tmp2, 6, (modelica_real)data->simulationInfo->realParameter[171], (modelica_real)data->simulationInfo->realParameter[172], (modelica_real)data->simulationInfo->realParameter[173], (modelica_real)data->simulationInfo->realParameter[174], (modelica_real)data->simulationInfo->realParameter[175], (modelica_real)data->simulationInfo->realParameter[176]);
  array_alloc_scalar_real_array(&tmp3, 6, (modelica_real)data->simulationInfo->realParameter[21], (modelica_real)data->simulationInfo->realParameter[22], (modelica_real)data->simulationInfo->realParameter[23], (modelica_real)data->simulationInfo->realParameter[24], (modelica_real)data->simulationInfo->realParameter[25], (modelica_real)data->simulationInfo->realParameter[26]);
  data->localData[0]->realVars[48] /* MatStm1.compMolEntr[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[3], tmp2, tmp3, data->simulationInfo->realParameter[138], data->simulationInfo->realParameter[141], 300.0, 101325.0, data->localData[0]->realVars[66] /* MatStm1.compMolFrac[2,1] variable */, data->localData[0]->realVars[69] /* MatStm1.compMolFrac[3,1] variable */ ,&data->localData[0]->realVars[51] /* MatStm1.compMolEntr[3,1] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_169(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_170(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_179(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_178(DATA *data, threadData_t *threadData);


/*
equation index: 73
type: ALGORITHM

  (MatStm1.compMolEntr[2,2], MatStm1.compMolEntr[3,2]) := Simulator.Files.Thermodynamic_Functions.SId(MatStm1.comp[2].AS, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tb, MatStm1.comp[2].Tc, 300.0, 101325.0, MatStm1.compMolFrac[2,2], MatStm1.compMolFrac[3,2]);
*/
void Flowsheet_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  real_array tmp4;
  real_array tmp5;
  array_alloc_scalar_real_array(&tmp4, 6, (modelica_real)data->simulationInfo->realParameter[177], (modelica_real)data->simulationInfo->realParameter[178], (modelica_real)data->simulationInfo->realParameter[179], (modelica_real)data->simulationInfo->realParameter[180], (modelica_real)data->simulationInfo->realParameter[181], (modelica_real)data->simulationInfo->realParameter[182]);
  array_alloc_scalar_real_array(&tmp5, 6, (modelica_real)data->simulationInfo->realParameter[27], (modelica_real)data->simulationInfo->realParameter[28], (modelica_real)data->simulationInfo->realParameter[29], (modelica_real)data->simulationInfo->realParameter[30], (modelica_real)data->simulationInfo->realParameter[31], (modelica_real)data->simulationInfo->realParameter[32]);
  data->localData[0]->realVars[49] /* MatStm1.compMolEntr[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_SId(threadData, data->simulationInfo->realParameter[4], tmp4, tmp5, data->simulationInfo->realParameter[139], data->simulationInfo->realParameter[142], 300.0, 101325.0, data->localData[0]->realVars[67] /* MatStm1.compMolFrac[2,2] variable */, data->localData[0]->realVars[70] /* MatStm1.compMolFrac[3,2] variable */ ,&data->localData[0]->realVars[52] /* MatStm1.compMolEntr[3,2] variable */);
  TRACE_POP
}
extern void Flowsheet_eqFunction_192(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_177(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_176(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_191(DATA *data, threadData_t *threadData);


/*
equation index: 78
type: ALGORITHM

  MatStm1.MW[3] := $START.MatStm1.MW[3];
  MatStm1.MW[2] := $START.MatStm1.MW[2];
  MatStm1.MW[1] := $START.MatStm1.MW[1];
  for i in 1:3 loop
    MatStm1.MW[:] := {MatStm1.MW[1] + MatStm1.compMolFrac[1,i] * MatStm1.comp[i].MW, MatStm1.MW[2] + MatStm1.compMolFrac[2,i] * MatStm1.comp[i].MW, MatStm1.MW[3] + MatStm1.compMolFrac[3,i] * MatStm1.comp[i].MW};
  end for;
*/
void Flowsheet_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
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
extern void Flowsheet_eqFunction_198(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_199(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_200(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_201(DATA *data, threadData_t *threadData);


/*
equation index: 83
type: LINEAR

<var>MatStm1._compMasFrac[3,3]</var>
<var>MatStm1._compMasFrac[3,2]</var>
<var>MatStm1._compMasFrac[1,3]</var>
<var>MatStm1._compMasFrac[1,1]</var>
<var>MatStm1._compMasFrac[1,2]</var>
<var>MatStm1._compMasFrac[2,2]</var>
<var>MatStm1._compMasFrac[2,3]</var>
<var>MatStm1._compMasFrac[3,1]</var>
<var>MatStm1._compMasFrac[2,1]</var>
<row>
  <cell>if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else MatStm1.compMasFlo[2,1]</cell>
  <cell>if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else MatStm1.compMasFlo[1,1]</cell>
  <cell>if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else MatStm1.compMasFlo[3,1]</cell>
  <cell>if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else MatStm1.compMasFlo[2,3]</cell>
  <cell>if 300.0 <= MatStm1.Tbubl then MatStm1.compMasFlo[1,2] else if 300.0 >= MatStm1.Tdew then MatStm1.compMasFlo[1,2] else MatStm1.compMasFlo[2,2]</cell>
  <cell>if 300.0 <= MatStm1.Tbubl then MatStm1.compMasFlo[1,1] else if 300.0 >= MatStm1.Tdew then MatStm1.compMasFlo[1,1] else MatStm1.compMasFlo[1,2]</cell>
  <cell>if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else MatStm1.compMasFlo[1,3]</cell>
  <cell>if 300.0 <= MatStm1.Tbubl then MatStm1.compMasFlo[1,3] else if 300.0 >= MatStm1.Tdew then MatStm1.compMasFlo[1,3] else MatStm1.compMasFlo[3,2]</cell>
  <cell>if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else MatStm1.compMasFlo[3,3]</cell>
</row>
<matrix>
  <cell row="0" col="1">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 1.0 else 0.0)</residual>
  </cell><cell row="0" col="5">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 1.0 else -0.0)</residual>
  </cell><cell row="0" col="8">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else -MatStm1.totMasFlo[2])</residual>
  </cell><cell row="1" col="3">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="1" col="7">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 1.0 else 0.0)</residual>
  </cell><cell row="1" col="8">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="0">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 1.0 else 0.0)</residual>
  </cell><cell row="2" col="6">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 1.0 else -0.0)</residual>
  </cell><cell row="2" col="7">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else -MatStm1.totMasFlo[3])</residual>
  </cell><cell row="3" col="1">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 1.0 else -0.0)</residual>
  </cell><cell row="3" col="4">
    <residual>-(if 300.0 <= MatStm1.Tbubl then -1.0 else if 300.0 >= MatStm1.Tdew then -1.0 else -0.0)</residual>
  </cell><cell row="3" col="5">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 1.0 else 0.0)</residual>
  </cell><cell row="3" col="6">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else -MatStm1.totMasFlo[2])</residual>
  </cell><cell row="4" col="4">
    <residual>-(if 300.0 <= MatStm1.Tbubl then -MatStm1.totMasFlo[1] else if 300.0 >= MatStm1.Tdew then -MatStm1.totMasFlo[1] else -0.0)</residual>
  </cell><cell row="4" col="5">
    <residual>-(if 300.0 <= MatStm1.Tbubl then -0.0 else if 300.0 >= MatStm1.Tdew then -0.0 else -MatStm1.totMasFlo[2])</residual>
  </cell><cell row="5" col="3">
    <residual>-(if 300.0 <= MatStm1.Tbubl then -MatStm1.totMasFlo[1] else if 300.0 >= MatStm1.Tdew then -MatStm1.totMasFlo[1] else -0.0)</residual>
  </cell><cell row="5" col="4">
    <residual>-(if 300.0 <= MatStm1.Tbubl then -0.0 else if 300.0 >= MatStm1.Tdew then -0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="6" col="2">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 0.0 else -MatStm1.totMasFlo[1])</residual>
  </cell><cell row="6" col="3">
    <residual>-(if 300.0 <= MatStm1.Tbubl then -1.0 else if 300.0 >= MatStm1.Tdew then -1.0 else -0.0)</residual>
  </cell><cell row="6" col="7">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 1.0 else -0.0)</residual>
  </cell><cell row="6" col="8">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 1.0 else 0.0)</residual>
  </cell><cell row="7" col="1">
    <residual>-(if 300.0 <= MatStm1.Tbubl then -0.0 else if 300.0 >= MatStm1.Tdew then -0.0 else -MatStm1.totMasFlo[3])</residual>
  </cell><cell row="7" col="2">
    <residual>-(if 300.0 <= MatStm1.Tbubl then -MatStm1.totMasFlo[1] else if 300.0 >= MatStm1.Tdew then -MatStm1.totMasFlo[1] else -0.0)</residual>
  </cell><cell row="8" col="0">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 0.0 else if 300.0 >= MatStm1.Tdew then 1.0 else -MatStm1.totMasFlo[3])</residual>
  </cell><cell row="8" col="2">
    <residual>-(if 300.0 <= MatStm1.Tbubl then -1.0 else if 300.0 >= MatStm1.Tdew then -1.0 else -0.0)</residual>
  </cell><cell row="8" col="6">
    <residual>-(if 300.0 <= MatStm1.Tbubl then 1.0 else 0.0)</residual>
  </cell>
</matrix>
*/
OMC_DISABLE_OPT
void Flowsheet_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  /* Linear equation system */
  int retValue;
  double aux_x[9] = { data->localData[1]->realVars[35] /* MatStm1.compMasFrac[3,3] variable */,data->localData[1]->realVars[34] /* MatStm1.compMasFrac[3,2] variable */,data->localData[1]->realVars[29] /* MatStm1.compMasFrac[1,3] variable */,data->localData[1]->realVars[27] /* MatStm1.compMasFrac[1,1] variable */,data->localData[1]->realVars[28] /* MatStm1.compMasFrac[1,2] variable */,data->localData[1]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */,data->localData[1]->realVars[32] /* MatStm1.compMasFrac[2,3] variable */,data->localData[1]->realVars[33] /* MatStm1.compMasFrac[3,1] variable */,data->localData[1]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 83 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,83};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 83 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[35] /* MatStm1.compMasFrac[3,3] variable */ = aux_x[0];
  data->localData[0]->realVars[34] /* MatStm1.compMasFrac[3,2] variable */ = aux_x[1];
  data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,3] variable */ = aux_x[2];
  data->localData[0]->realVars[27] /* MatStm1.compMasFrac[1,1] variable */ = aux_x[3];
  data->localData[0]->realVars[28] /* MatStm1.compMasFrac[1,2] variable */ = aux_x[4];
  data->localData[0]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */ = aux_x[5];
  data->localData[0]->realVars[32] /* MatStm1.compMasFrac[2,3] variable */ = aux_x[6];
  data->localData[0]->realVars[33] /* MatStm1.compMasFrac[3,1] variable */ = aux_x[7];
  data->localData[0]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */ = aux_x[8];
  TRACE_POP
}
extern void Flowsheet_eqFunction_202(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_174(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_186(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_189(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_188(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_187(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_181(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_184(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_183(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_182(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_193(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_196(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_195(DATA *data, threadData_t *threadData);

extern void Flowsheet_eqFunction_194(DATA *data, threadData_t *threadData);


/*
equation index: 98
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[2] = 0.0
*/
void Flowsheet_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  data->localData[0]->realVars[99] /* MatStm1.resMolSpHeat[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 99
type: SIMPLE_ASSIGN
MatStm1._resMolSpHeat[3] = 0.0
*/
void Flowsheet_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  data->localData[0]->realVars[100] /* MatStm1.resMolSpHeat[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 100
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[2] = 0.0
*/
void Flowsheet_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  data->localData[0]->realVars[93] /* MatStm1.resMolEnth[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 101
type: SIMPLE_ASSIGN
MatStm1._resMolEnth[3] = 0.0
*/
void Flowsheet_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  data->localData[0]->realVars[94] /* MatStm1.resMolEnth[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 102
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[2] = 0.0
*/
void Flowsheet_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  data->localData[0]->realVars[96] /* MatStm1.resMolEntr[2] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 103
type: SIMPLE_ASSIGN
MatStm1._resMolEntr[3] = 0.0
*/
void Flowsheet_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  data->localData[0]->realVars[97] /* MatStm1.resMolEntr[3] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 104
type: SIMPLE_ASSIGN
MatStm1._P = 101325.0
*/
void Flowsheet_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  data->localData[0]->realVars[14] /* MatStm1.P variable */ = 101325.0;
  TRACE_POP
}

/*
equation index: 105
type: SIMPLE_ASSIGN
MatStm1._T = 300.0
*/
void Flowsheet_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->localData[0]->realVars[15] /* MatStm1.T variable */ = 300.0;
  TRACE_POP
}

/*
equation index: 106
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[1] = 100.0
*/
void Flowsheet_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  data->localData[0]->realVars[104] /* MatStm1.totMolFlo[1] variable */ = 100.0;
  TRACE_POP
}
OMC_DISABLE_OPT
void Flowsheet_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  Flowsheet_eqFunction_1(data, threadData);
  Flowsheet_eqFunction_2(data, threadData);
  Flowsheet_eqFunction_3(data, threadData);
  Flowsheet_eqFunction_4(data, threadData);
  Flowsheet_eqFunction_5(data, threadData);
  Flowsheet_eqFunction_6(data, threadData);
  Flowsheet_eqFunction_7(data, threadData);
  Flowsheet_eqFunction_8(data, threadData);
  Flowsheet_eqFunction_9(data, threadData);
  Flowsheet_eqFunction_10(data, threadData);
  Flowsheet_eqFunction_11(data, threadData);
  Flowsheet_eqFunction_12(data, threadData);
  Flowsheet_eqFunction_13(data, threadData);
  Flowsheet_eqFunction_14(data, threadData);
  Flowsheet_eqFunction_15(data, threadData);
  Flowsheet_eqFunction_16(data, threadData);
  Flowsheet_eqFunction_17(data, threadData);
  Flowsheet_eqFunction_18(data, threadData);
  Flowsheet_eqFunction_19(data, threadData);
  Flowsheet_eqFunction_20(data, threadData);
  Flowsheet_eqFunction_21(data, threadData);
  Flowsheet_eqFunction_22(data, threadData);
  Flowsheet_eqFunction_23(data, threadData);
  Flowsheet_eqFunction_24(data, threadData);
  Flowsheet_eqFunction_26(data, threadData);
  Flowsheet_eqFunction_28(data, threadData);
  Flowsheet_eqFunction_109(data, threadData);
  Flowsheet_eqFunction_108(data, threadData);
  Flowsheet_eqFunction_107(data, threadData);
  Flowsheet_eqFunction_62(data, threadData);
  Flowsheet_eqFunction_63(data, threadData);
  Flowsheet_eqFunction_173(data, threadData);
  Flowsheet_eqFunction_172(data, threadData);
  Flowsheet_eqFunction_185(data, threadData);
  Flowsheet_eqFunction_180(data, threadData);
  Flowsheet_eqFunction_68(data, threadData);
  Flowsheet_eqFunction_169(data, threadData);
  Flowsheet_eqFunction_170(data, threadData);
  Flowsheet_eqFunction_179(data, threadData);
  Flowsheet_eqFunction_178(data, threadData);
  Flowsheet_eqFunction_73(data, threadData);
  Flowsheet_eqFunction_192(data, threadData);
  Flowsheet_eqFunction_177(data, threadData);
  Flowsheet_eqFunction_176(data, threadData);
  Flowsheet_eqFunction_191(data, threadData);
  Flowsheet_eqFunction_78(data, threadData);
  Flowsheet_eqFunction_198(data, threadData);
  Flowsheet_eqFunction_199(data, threadData);
  Flowsheet_eqFunction_200(data, threadData);
  Flowsheet_eqFunction_201(data, threadData);
  Flowsheet_eqFunction_83(data, threadData);
  Flowsheet_eqFunction_202(data, threadData);
  Flowsheet_eqFunction_174(data, threadData);
  Flowsheet_eqFunction_186(data, threadData);
  Flowsheet_eqFunction_189(data, threadData);
  Flowsheet_eqFunction_188(data, threadData);
  Flowsheet_eqFunction_187(data, threadData);
  Flowsheet_eqFunction_181(data, threadData);
  Flowsheet_eqFunction_184(data, threadData);
  Flowsheet_eqFunction_183(data, threadData);
  Flowsheet_eqFunction_182(data, threadData);
  Flowsheet_eqFunction_193(data, threadData);
  Flowsheet_eqFunction_196(data, threadData);
  Flowsheet_eqFunction_195(data, threadData);
  Flowsheet_eqFunction_194(data, threadData);
  Flowsheet_eqFunction_98(data, threadData);
  Flowsheet_eqFunction_99(data, threadData);
  Flowsheet_eqFunction_100(data, threadData);
  Flowsheet_eqFunction_101(data, threadData);
  Flowsheet_eqFunction_102(data, threadData);
  Flowsheet_eqFunction_103(data, threadData);
  Flowsheet_eqFunction_104(data, threadData);
  Flowsheet_eqFunction_105(data, threadData);
  Flowsheet_eqFunction_106(data, threadData);
  TRACE_POP
}


int Flowsheet_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  Flowsheet_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int Flowsheet_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int Flowsheet_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

