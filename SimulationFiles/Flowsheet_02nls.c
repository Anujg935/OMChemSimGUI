/* Non Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 491
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,3] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[3].SH, {MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, {MatStm1.comp[3].HOV[1], MatStm1.comp[3].HOV[2], MatStm1.comp[3].HOV[3], MatStm1.comp[3].HOV[4], MatStm1.comp[3].HOV[5], MatStm1.comp[3].HOV[6]}, MatStm1.comp[3].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[429], (modelica_real)data->simulationInfo->realParameter[430], (modelica_real)data->simulationInfo->realParameter[431], (modelica_real)data->simulationInfo->realParameter[432], (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[279], (modelica_real)data->simulationInfo->realParameter[280], (modelica_real)data->simulationInfo->realParameter[281], (modelica_real)data->simulationInfo->realParameter[282], (modelica_real)data->simulationInfo->realParameter[283], (modelica_real)data->simulationInfo->realParameter[284]);
  data->localData[0]->realVars[43] /* MatStm1.compMolEnth[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[374], tmp0, tmp1, data->simulationInfo->realParameter[389], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 492
type: SIMPLE_ASSIGN
MatStm1._Psat[3] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[3].VP[1], MatStm1.comp[3].VP[2], MatStm1.comp[3].VP[3], MatStm1.comp[3].VP[4], MatStm1.comp[3].VP[5], MatStm1.comp[3].VP[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[411], (modelica_real)data->simulationInfo->realParameter[412], (modelica_real)data->simulationInfo->realParameter[413], (modelica_real)data->simulationInfo->realParameter[414], (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416]);
  data->localData[0]->realVars[18] /* MatStm1.Psat[3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 493
type: SIMPLE_ASSIGN
MatStm1._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[2].VP[1], MatStm1.comp[2].VP[2], MatStm1.comp[2].VP[3], MatStm1.comp[2].VP[4], MatStm1.comp[2].VP[5], MatStm1.comp[2].VP[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[405], (modelica_real)data->simulationInfo->realParameter[406], (modelica_real)data->simulationInfo->realParameter[407], (modelica_real)data->simulationInfo->realParameter[408], (modelica_real)data->simulationInfo->realParameter[409], (modelica_real)data->simulationInfo->realParameter[410]);
  data->localData[0]->realVars[17] /* MatStm1.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 494
type: SIMPLE_ASSIGN
MatStm1._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[1].VP[1], MatStm1.comp[1].VP[2], MatStm1.comp[1].VP[3], MatStm1.comp[1].VP[4], MatStm1.comp[1].VP[5], MatStm1.comp[1].VP[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[399], (modelica_real)data->simulationInfo->realParameter[400], (modelica_real)data->simulationInfo->realParameter[401], (modelica_real)data->simulationInfo->realParameter[402], (modelica_real)data->simulationInfo->realParameter[403], (modelica_real)data->simulationInfo->realParameter[404]);
  data->localData[0]->realVars[16] /* MatStm1.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 495
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[273], (modelica_real)data->simulationInfo->realParameter[274], (modelica_real)data->simulationInfo->realParameter[275], (modelica_real)data->simulationInfo->realParameter[276], (modelica_real)data->simulationInfo->realParameter[277], (modelica_real)data->simulationInfo->realParameter[278]);
  data->localData[0]->realVars[45] /* MatStm1.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[373], tmp0, tmp1, data->simulationInfo->realParameter[388], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 496
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[273], (modelica_real)data->simulationInfo->realParameter[274], (modelica_real)data->simulationInfo->realParameter[275], (modelica_real)data->simulationInfo->realParameter[276], (modelica_real)data->simulationInfo->realParameter[277], (modelica_real)data->simulationInfo->realParameter[278]);
  data->localData[0]->realVars[42] /* MatStm1.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[373], tmp0, tmp1, data->simulationInfo->realParameter[388], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 497
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270], (modelica_real)data->simulationInfo->realParameter[271], (modelica_real)data->simulationInfo->realParameter[272]);
  data->localData[0]->realVars[44] /* MatStm1.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[372], tmp0, tmp1, data->simulationInfo->realParameter[387], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 498
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270], (modelica_real)data->simulationInfo->realParameter[271], (modelica_real)data->simulationInfo->realParameter[272]);
  data->localData[0]->realVars[41] /* MatStm1.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[372], tmp0, tmp1, data->simulationInfo->realParameter[387], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 499
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEnth[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEnth[2,2] + MatStm1.compMolFrac[2,3] * MatStm1.compMolEnth[2,3]
*/
void Flowsheet_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  data->localData[0]->realVars[98] /* MatStm1.phasMolEnth[2] variable */ = (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[41] /* MatStm1.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[42] /* MatStm1.compMolEnth[2,2] variable */) + (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[43] /* MatStm1.compMolEnth[2,3] variable */);
  TRACE_POP
}
/*
equation index: 500
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,3] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[3].SH, {MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, {MatStm1.comp[3].HOV[1], MatStm1.comp[3].HOV[2], MatStm1.comp[3].HOV[3], MatStm1.comp[3].HOV[4], MatStm1.comp[3].HOV[5], MatStm1.comp[3].HOV[6]}, MatStm1.comp[3].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[429], (modelica_real)data->simulationInfo->realParameter[430], (modelica_real)data->simulationInfo->realParameter[431], (modelica_real)data->simulationInfo->realParameter[432], (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[279], (modelica_real)data->simulationInfo->realParameter[280], (modelica_real)data->simulationInfo->realParameter[281], (modelica_real)data->simulationInfo->realParameter[282], (modelica_real)data->simulationInfo->realParameter[283], (modelica_real)data->simulationInfo->realParameter[284]);
  data->localData[0]->realVars[46] /* MatStm1.compMolEnth[3,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[374], tmp0, tmp1, data->simulationInfo->realParameter[389], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 501
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEnth[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEnth[3,2] + MatStm1.compMolFrac[3,3] * MatStm1.compMolEnth[3,3]
*/
void Flowsheet_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  data->localData[0]->realVars[99] /* MatStm1.phasMolEnth[3] variable */ = (data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[44] /* MatStm1.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[45] /* MatStm1.compMolEnth[3,2] variable */) + (data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[46] /* MatStm1.compMolEnth[3,3] variable */);
  TRACE_POP
}
/*
equation index: 502
type: SIMPLE_ASSIGN
MatStm1._K[3] = 9.869232667160129e-006 * MatStm1.Psat[3]
*/
void Flowsheet_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  data->localData[0]->realVars[9] /* MatStm1.K[3] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[18] /* MatStm1.Psat[3] variable */);
  TRACE_POP
}
/*
equation index: 503
type: SIMPLE_ASSIGN
MatStm1._K[2] = 9.869232667160129e-006 * MatStm1.Psat[2]
*/
void Flowsheet_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  data->localData[0]->realVars[8] /* MatStm1.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[17] /* MatStm1.Psat[2] variable */);
  TRACE_POP
}
/*
equation index: 504
type: SIMPLE_ASSIGN
MatStm1._K[1] = 9.869232667160129e-006 * MatStm1.Psat[1]
*/
void Flowsheet_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->localData[0]->realVars[7] /* MatStm1.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[16] /* MatStm1.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 505
type: SIMPLE_ASSIGN
$cse2 = log(MatStm1.T)
*/
void Flowsheet_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.T) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[1] /* $cse2 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 506
type: SIMPLE_ASSIGN
$cse7 = exp((-MatStm1.comp[3].VP[2]) - MatStm1.comp[3].VP[3] / MatStm1.T - MatStm1.comp[3].VP[4] * $cse2 - MatStm1.comp[3].VP[5] * MatStm1.T ^ MatStm1.comp[3].VP[6])
*/
void Flowsheet_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  tmp1 = data->simulationInfo->realParameter[416];
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
  data->localData[0]->realVars[6] /* $cse7 variable */ = exp((-data->simulationInfo->realParameter[412]) - (DIVISION_SIM(data->simulationInfo->realParameter[413],data->localData[0]->realVars[19] /* MatStm1.T variable */,"MatStm1.T",equationIndexes)) - ((data->simulationInfo->realParameter[414]) * (data->localData[0]->realVars[1] /* $cse2 variable */)) - ((data->simulationInfo->realParameter[415]) * (tmp2)));
  TRACE_POP
}
/*
equation index: 507
type: SIMPLE_ASSIGN
$cse6 = exp((-MatStm1.comp[2].VP[2]) - MatStm1.comp[2].VP[3] / MatStm1.T - MatStm1.comp[2].VP[4] * $cse2 - MatStm1.comp[2].VP[5] * MatStm1.T ^ MatStm1.comp[2].VP[6])
*/
void Flowsheet_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  tmp1 = data->simulationInfo->realParameter[410];
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
  data->localData[0]->realVars[5] /* $cse6 variable */ = exp((-data->simulationInfo->realParameter[406]) - (DIVISION_SIM(data->simulationInfo->realParameter[407],data->localData[0]->realVars[19] /* MatStm1.T variable */,"MatStm1.T",equationIndexes)) - ((data->simulationInfo->realParameter[408]) * (data->localData[0]->realVars[1] /* $cse2 variable */)) - ((data->simulationInfo->realParameter[409]) * (tmp2)));
  TRACE_POP
}
/*
equation index: 508
type: SIMPLE_ASSIGN
$cse5 = exp((-MatStm1.comp[1].VP[2]) - MatStm1.comp[1].VP[3] / MatStm1.T - MatStm1.comp[1].VP[4] * $cse2 - MatStm1.comp[1].VP[5] * MatStm1.T ^ MatStm1.comp[1].VP[6])
*/
void Flowsheet_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  tmp1 = data->simulationInfo->realParameter[404];
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
  data->localData[0]->realVars[4] /* $cse5 variable */ = exp((-data->simulationInfo->realParameter[400]) - (DIVISION_SIM(data->simulationInfo->realParameter[401],data->localData[0]->realVars[19] /* MatStm1.T variable */,"MatStm1.T",equationIndexes)) - ((data->simulationInfo->realParameter[402]) * (data->localData[0]->realVars[1] /* $cse2 variable */)) - ((data->simulationInfo->realParameter[403]) * (tmp2)));
  TRACE_POP
}
/*
equation index: 509
type: SIMPLE_ASSIGN
MatStm1._Pdew = 1.0 / (MatStm1.compMolFrac[1,1] * $cse5 + MatStm1.compMolFrac[1,2] * $cse6 + MatStm1.compMolFrac[1,3] * $cse7)
*/
void Flowsheet_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->localData[0]->realVars[15] /* MatStm1.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[4] /* $cse5 variable */) + (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[5] /* $cse6 variable */) + (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[6] /* $cse7 variable */),"MatStm1.compMolFrac[1,1] * $cse5 + MatStm1.compMolFrac[1,2] * $cse6 + MatStm1.compMolFrac[1,3] * $cse7",equationIndexes);
  TRACE_POP
}
/*
equation index: 510
type: SIMPLE_ASSIGN
$cse4 = exp(MatStm1.comp[3].VP[2] + MatStm1.comp[3].VP[3] / MatStm1.T + MatStm1.comp[3].VP[4] * $cse2 + MatStm1.comp[3].VP[5] * MatStm1.T ^ MatStm1.comp[3].VP[6])
*/
void Flowsheet_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  tmp1 = data->simulationInfo->realParameter[416];
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
  data->localData[0]->realVars[3] /* $cse4 variable */ = exp(data->simulationInfo->realParameter[412] + DIVISION_SIM(data->simulationInfo->realParameter[413],data->localData[0]->realVars[19] /* MatStm1.T variable */,"MatStm1.T",equationIndexes) + (data->simulationInfo->realParameter[414]) * (data->localData[0]->realVars[1] /* $cse2 variable */) + (data->simulationInfo->realParameter[415]) * (tmp2));
  TRACE_POP
}
/*
equation index: 511
type: SIMPLE_ASSIGN
$cse3 = exp(MatStm1.comp[2].VP[2] + MatStm1.comp[2].VP[3] / MatStm1.T + MatStm1.comp[2].VP[4] * $cse2 + MatStm1.comp[2].VP[5] * MatStm1.T ^ MatStm1.comp[2].VP[6])
*/
void Flowsheet_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  tmp1 = data->simulationInfo->realParameter[410];
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
  data->localData[0]->realVars[2] /* $cse3 variable */ = exp(data->simulationInfo->realParameter[406] + DIVISION_SIM(data->simulationInfo->realParameter[407],data->localData[0]->realVars[19] /* MatStm1.T variable */,"MatStm1.T",equationIndexes) + (data->simulationInfo->realParameter[408]) * (data->localData[0]->realVars[1] /* $cse2 variable */) + (data->simulationInfo->realParameter[409]) * (tmp2));
  TRACE_POP
}
/*
equation index: 512
type: SIMPLE_ASSIGN
$cse1 = exp(MatStm1.comp[1].VP[2] + MatStm1.comp[1].VP[3] / MatStm1.T + MatStm1.comp[1].VP[4] * $cse2 + MatStm1.comp[1].VP[5] * MatStm1.T ^ MatStm1.comp[1].VP[6])
*/
void Flowsheet_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  tmp1 = data->simulationInfo->realParameter[404];
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
  data->localData[0]->realVars[0] /* $cse1 variable */ = exp(data->simulationInfo->realParameter[400] + DIVISION_SIM(data->simulationInfo->realParameter[401],data->localData[0]->realVars[19] /* MatStm1.T variable */,"MatStm1.T",equationIndexes) + (data->simulationInfo->realParameter[402]) * (data->localData[0]->realVars[1] /* $cse2 variable */) + (data->simulationInfo->realParameter[403]) * (tmp2));
  TRACE_POP
}
/*
equation index: 513
type: SIMPLE_ASSIGN
MatStm1._Pbubl = MatStm1.compMolFrac[1,1] * $cse1 + MatStm1.compMolFrac[1,2] * $cse3 + MatStm1.compMolFrac[1,3] * $cse4
*/
void Flowsheet_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */ = (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[0] /* $cse1 variable */) + (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[2] /* $cse3 variable */) + (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[3] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 514
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,3] = MatStm1.compMolFrac[3,3] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  data->localData[0]->realVars[64] /* MatStm1.compMolFlo[3,3] variable */ = (data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 515
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 516
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->localData[0]->realVars[63] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 517
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac = 0.005 * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */ = (0.005) * (data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 518
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 1.0 - MatStm1.vapPhasMolFrac
*/
void Flowsheet_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 519
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[2] = 200.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */ = (200.0) * (data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 520
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,3] = MatStm1.compMolFrac[2,3] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  data->localData[0]->realVars[61] /* MatStm1.compMolFlo[2,3] variable */ = (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 521
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 522
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->localData[0]->realVars[60] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc531(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,531};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  /* iteration variables */
  for (i=0; i<8; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<8; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[19] /* MatStm1.T variable */ = xloc[1];
  data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */ = xloc[2];
  data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */ = xloc[3];
  data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */ = xloc[4];
  data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */ = xloc[5];
  data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */ = xloc[6];
  data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */ = xloc[7];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_491(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_492(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_493(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_494(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_495(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_496(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_497(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_498(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_499(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_500(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_501(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_502(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_503(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_504(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_505(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_506(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_507(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_508(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_509(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_510(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_511(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_512(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_513(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_514(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_515(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_516(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_517(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_518(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_519(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_520(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_521(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_522(data, threadData);
  /* body */
  RELATIONHYSTERESIS(tmp0, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp3 = (tmp1?data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[7] /* MatStm1.K[1] variable */) * (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */)):data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */);
  }
  res[0] = tmp3;

  RELATIONHYSTERESIS(tmp4, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp5, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp7 = (tmp5?data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[8] /* MatStm1.K[2] variable */) * (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */)):data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */);
  }
  res[1] = tmp7;

  res[2] = data->localData[0]->realVars[63] /* MatStm1.compMolFlo[3,2] variable */ + data->localData[0]->realVars[60] /* MatStm1.compMolFlo[2,2] variable */ - data->localData[0]->realVars[57] /* MatStm1.compMolFlo[1,2] variable */;

  res[3] = data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[56] /* MatStm1.compMolFlo[1,1] variable */;

  RELATIONHYSTERESIS(tmp8, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  res[4] = (tmp8?data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */ + data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */ + data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */ - 1.0:data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */ + data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */ + data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */ - 1.0);

  res[5] = data->localData[0]->realVars[64] /* MatStm1.compMolFlo[3,3] variable */ + data->localData[0]->realVars[61] /* MatStm1.compMolFlo[2,3] variable */ - data->localData[0]->realVars[58] /* MatStm1.compMolFlo[1,3] variable */;

  RELATIONHYSTERESIS(tmp9, 101325.0, data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, 0, GreaterEq);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp10, 101325.0, data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, 1, GreaterEq);
    tmp12 = (tmp10?data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */ - ((data->localData[0]->realVars[9] /* MatStm1.K[3] variable */) * (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */)):data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */);
  }
  res[6] = tmp12;

  res[7] = (data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[99] /* MatStm1.phasMolEnth[3] variable */) + (data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[98] /* MatStm1.phasMolEnth[2] variable */) - data->localData[0]->realVars[97] /* MatStm1.phasMolEnth[1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS531(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+8] = {0,4,5,4,4,4,4,4,4};
  const int rowIndex[33] = {2,3,5,7,0,1,4,6,7,4,5,6,7,4,5,6,7,0,3,4,7,1,2,4,7,1,2,4,7,0,3,4,7};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((8+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(33*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 33;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(8*sizeof(int));
  inSysData->sparsePattern.maxColors = 8;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (8+1)*sizeof(int));
  
  for(i=2;i<8+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 33*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[7] = 1;
  inSysData->sparsePattern.colorCols[6] = 2;
  inSysData->sparsePattern.colorCols[5] = 3;
  inSysData->sparsePattern.colorCols[4] = 4;
  inSysData->sparsePattern.colorCols[3] = 5;
  inSysData->sparsePattern.colorCols[2] = 6;
  inSysData->sparsePattern.colorCols[1] = 7;
  inSysData->sparsePattern.colorCols[0] = 8;
}
void initializeStaticDataNLS531(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm1.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm1.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm1.totMolFlo[3] */.max;
  /* static nls data for MatStm1.T */
  sysData->nominal[i] = data->modelData->realVarsData[19].attribute /* MatStm1.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[19].attribute /* MatStm1.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[19].attribute /* MatStm1.T */.max;
  /* static nls data for MatStm1.compMolFrac[2,3] */
  sysData->nominal[i] = data->modelData->realVarsData[70].attribute /* MatStm1.compMolFrac[2,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[70].attribute /* MatStm1.compMolFrac[2,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[70].attribute /* MatStm1.compMolFrac[2,3] */.max;
  /* static nls data for MatStm1.compMolFrac[3,3] */
  sysData->nominal[i] = data->modelData->realVarsData[73].attribute /* MatStm1.compMolFrac[3,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[73].attribute /* MatStm1.compMolFrac[3,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[73].attribute /* MatStm1.compMolFrac[3,3] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[68].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[68].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[68].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* static nls data for MatStm1.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[69].attribute /* MatStm1.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[69].attribute /* MatStm1.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[69].attribute /* MatStm1.compMolFrac[2,2] */.max;
  /* static nls data for MatStm1.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[72].attribute /* MatStm1.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[72].attribute /* MatStm1.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[72].attribute /* MatStm1.compMolFrac[3,2] */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[71].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[71].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[71].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS531(sysData);
}

void getIterationVarsNLS531(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  array[2] = data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */;
  array[3] = data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */;
  array[4] = data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */;
  array[5] = data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */;
  array[6] = data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */;
  array[7] = data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */;
}


/* inner equations */

/*
equation index: 427
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->localData[0]->realVars[299] /* MatStm3.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 428
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->localData[0]->realVars[300] /* MatStm3.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 429
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,3] = MatStm3.compMolFrac[3,3] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->localData[0]->realVars[301] /* MatStm3.compMolFlo[3,3] variable */ = (data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 430
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac[1] = 0.01 * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  data->localData[0]->realVars[362] /* Mixer1.inVapPhasMolFrac[1] variable */ = (0.01) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 431
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac = 1.0 - Mixer1.inVapPhasMolFrac[1]
*/
void Flowsheet_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[362] /* Mixer1.inVapPhasMolFrac[1] variable */;
  TRACE_POP
}
/*
equation index: 432
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[2] = 100.0 * MatStm3.liqPhasMolFrac
*/
void Flowsheet_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */ = (100.0) * (data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 433
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  data->localData[0]->realVars[296] /* MatStm3.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 434
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  data->localData[0]->realVars[297] /* MatStm3.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 435
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,3] = MatStm3.compMolFrac[2,3] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  data->localData[0]->realVars[298] /* MatStm3.compMolFlo[2,3] variable */ = (data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc459(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,459};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  /* iteration variables */
  for (i=0; i<7; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<7; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */ = xloc[1];
  data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */ = xloc[2];
  data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */ = xloc[3];
  data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */ = xloc[4];
  data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */ = xloc[5];
  data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */ = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_427(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_428(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_429(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_430(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_431(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_432(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_433(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_434(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_435(data, threadData);
  /* body */
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */ - ((data->localData[0]->realVars[246] /* MatStm3.K[3] variable */) * (data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */)):data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[301] /* MatStm3.compMolFlo[3,3] variable */ + data->localData[0]->realVars[298] /* MatStm3.compMolFlo[2,3] variable */ - data->localData[0]->realVars[295] /* MatStm3.compMolFlo[1,3] variable */;

  res[2] = data->localData[0]->realVars[300] /* MatStm3.compMolFlo[3,2] variable */ + data->localData[0]->realVars[297] /* MatStm3.compMolFlo[2,2] variable */ - data->localData[0]->realVars[294] /* MatStm3.compMolFlo[1,2] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[245] /* MatStm3.K[2] variable */) * (data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */)):data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */);
  }
  res[3] = tmp7;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[244] /* MatStm3.K[1] variable */) * (data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */)):data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */);
  }
  res[4] = tmp11;

  tmp12 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  res[5] = (tmp12?data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */ + data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */ + data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */ - 1.0:data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */ + data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */ + data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */ - 1.0);

  res[6] = data->localData[0]->realVars[299] /* MatStm3.compMolFlo[3,1] variable */ + data->localData[0]->realVars[296] /* MatStm3.compMolFlo[2,1] variable */ - data->localData[0]->realVars[293] /* MatStm3.compMolFlo[1,1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS459(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {1,2,6,2,3,5,4,5,6,4,5,6,2,3,5,0,1,5,0,1,5};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((7+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(21*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 21;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(7*sizeof(int));
  inSysData->sparsePattern.maxColors = 7;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (7+1)*sizeof(int));
  
  for(i=2;i<7+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 21*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[6] = 1;
  inSysData->sparsePattern.colorCols[5] = 2;
  inSysData->sparsePattern.colorCols[4] = 3;
  inSysData->sparsePattern.colorCols[3] = 4;
  inSysData->sparsePattern.colorCols[2] = 5;
  inSysData->sparsePattern.colorCols[1] = 6;
  inSysData->sparsePattern.colorCols[0] = 7;
}
void initializeStaticDataNLS459(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm3.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[357].attribute /* MatStm3.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[357].attribute /* MatStm3.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[357].attribute /* MatStm3.totMolFlo[3] */.max;
  /* static nls data for MatStm3.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[306].attribute /* MatStm3.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[306].attribute /* MatStm3.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[306].attribute /* MatStm3.compMolFrac[2,2] */.max;
  /* static nls data for MatStm3.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[305].attribute /* MatStm3.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[305].attribute /* MatStm3.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[305].attribute /* MatStm3.compMolFrac[2,1] */.max;
  /* static nls data for MatStm3.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[308].attribute /* MatStm3.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[308].attribute /* MatStm3.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[308].attribute /* MatStm3.compMolFrac[3,1] */.max;
  /* static nls data for MatStm3.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[309].attribute /* MatStm3.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[309].attribute /* MatStm3.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[309].attribute /* MatStm3.compMolFrac[3,2] */.max;
  /* static nls data for MatStm3.compMolFrac[3,3] */
  sysData->nominal[i] = data->modelData->realVarsData[310].attribute /* MatStm3.compMolFrac[3,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[310].attribute /* MatStm3.compMolFrac[3,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[310].attribute /* MatStm3.compMolFrac[3,3] */.max;
  /* static nls data for MatStm3.compMolFrac[2,3] */
  sysData->nominal[i] = data->modelData->realVarsData[307].attribute /* MatStm3.compMolFrac[2,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[307].attribute /* MatStm3.compMolFrac[2,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[307].attribute /* MatStm3.compMolFrac[2,3] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS459(sysData);
}

void getIterationVarsNLS459(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */;
  array[2] = data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */;
  array[3] = data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */;
  array[4] = data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */;
  array[5] = data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */;
  array[6] = data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */;
}


/* inner equations */

/*
equation index: 360
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->localData[0]->realVars[178] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 361
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  data->localData[0]->realVars[179] /* MatStm2.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 362
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,3] = MatStm2.compMolFrac[2,3] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  data->localData[0]->realVars[180] /* MatStm2.compMolFlo[2,3] variable */ = (data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 363
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac = 0.01 * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 364
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac[2] = 1.0 - MatStm2.liqPhasMolFrac
*/
void Flowsheet_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  data->localData[0]->realVars[363] /* Mixer1.inVapPhasMolFrac[2] variable */ = 1.0 - data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 365
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[3] = 100.0 * Mixer1.inVapPhasMolFrac[2]
*/
void Flowsheet_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */ = (100.0) * (data->localData[0]->realVars[363] /* Mixer1.inVapPhasMolFrac[2] variable */);
  TRACE_POP
}
/*
equation index: 366
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->localData[0]->realVars[181] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 367
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->localData[0]->realVars[182] /* MatStm2.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 368
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,3] = MatStm2.compMolFrac[3,3] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->localData[0]->realVars[183] /* MatStm2.compMolFlo[3,3] variable */ = (data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc392(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,392};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  /* iteration variables */
  for (i=0; i<7; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<7; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */ = xloc[1];
  data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */ = xloc[2];
  data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */ = xloc[3];
  data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */ = xloc[4];
  data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */ = xloc[5];
  data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */ = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_360(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_361(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_362(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_363(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_364(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_365(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_366(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_367(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_368(data, threadData);
  /* body */
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */ - ((data->localData[0]->realVars[128] /* MatStm2.K[3] variable */) * (data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */)):data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[183] /* MatStm2.compMolFlo[3,3] variable */ + data->localData[0]->realVars[180] /* MatStm2.compMolFlo[2,3] variable */ - data->localData[0]->realVars[177] /* MatStm2.compMolFlo[1,3] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[126] /* MatStm2.K[1] variable */) * (data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */)):data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */);
  }
  res[2] = tmp7;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  res[3] = (tmp8?data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */ + data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */ + data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */ - 1.0:data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */ + data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */ + data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */ - 1.0);

  tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp10 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp12 = (tmp10?data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[127] /* MatStm2.K[2] variable */) * (data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */)):data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */);
  }
  res[4] = tmp12;

  res[5] = data->localData[0]->realVars[182] /* MatStm2.compMolFlo[3,2] variable */ + data->localData[0]->realVars[179] /* MatStm2.compMolFlo[2,2] variable */ - data->localData[0]->realVars[176] /* MatStm2.compMolFlo[1,2] variable */;

  res[6] = data->localData[0]->realVars[181] /* MatStm2.compMolFlo[3,1] variable */ + data->localData[0]->realVars[178] /* MatStm2.compMolFlo[2,1] variable */ - data->localData[0]->realVars[175] /* MatStm2.compMolFlo[1,1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS392(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {1,5,6,3,4,5,3,4,5,2,3,6,2,3,6,0,1,3,0,1,3};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((7+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(21*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 21;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(7*sizeof(int));
  inSysData->sparsePattern.maxColors = 7;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (7+1)*sizeof(int));
  
  for(i=2;i<7+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 21*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[6] = 1;
  inSysData->sparsePattern.colorCols[5] = 2;
  inSysData->sparsePattern.colorCols[4] = 3;
  inSysData->sparsePattern.colorCols[3] = 4;
  inSysData->sparsePattern.colorCols[2] = 5;
  inSysData->sparsePattern.colorCols[1] = 6;
  inSysData->sparsePattern.colorCols[0] = 7;
}
void initializeStaticDataNLS392(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm2.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[238].attribute /* MatStm2.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[238].attribute /* MatStm2.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[238].attribute /* MatStm2.totMolFlo[2] */.max;
  /* static nls data for MatStm2.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[188].attribute /* MatStm2.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[188].attribute /* MatStm2.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[188].attribute /* MatStm2.compMolFrac[2,2] */.max;
  /* static nls data for MatStm2.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[191].attribute /* MatStm2.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[191].attribute /* MatStm2.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[191].attribute /* MatStm2.compMolFrac[3,2] */.max;
  /* static nls data for MatStm2.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[187].attribute /* MatStm2.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[187].attribute /* MatStm2.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[187].attribute /* MatStm2.compMolFrac[2,1] */.max;
  /* static nls data for MatStm2.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[190].attribute /* MatStm2.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[190].attribute /* MatStm2.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[190].attribute /* MatStm2.compMolFrac[3,1] */.max;
  /* static nls data for MatStm2.compMolFrac[2,3] */
  sysData->nominal[i] = data->modelData->realVarsData[189].attribute /* MatStm2.compMolFrac[2,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[189].attribute /* MatStm2.compMolFrac[2,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[189].attribute /* MatStm2.compMolFrac[2,3] */.max;
  /* static nls data for MatStm2.compMolFrac[3,3] */
  sysData->nominal[i] = data->modelData->realVarsData[192].attribute /* MatStm2.compMolFrac[3,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[192].attribute /* MatStm2.compMolFrac[3,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[192].attribute /* MatStm2.compMolFrac[3,3] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS392(sysData);
}

void getIterationVarsNLS392(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */;
  array[2] = data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */;
  array[3] = data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */;
  array[4] = data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */;
  array[5] = data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */;
  array[6] = data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */;
}


/* inner equations */

/*
equation index: 205
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,3] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[3].SH, {MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, {MatStm1.comp[3].HOV[1], MatStm1.comp[3].HOV[2], MatStm1.comp[3].HOV[3], MatStm1.comp[3].HOV[4], MatStm1.comp[3].HOV[5], MatStm1.comp[3].HOV[6]}, MatStm1.comp[3].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[429], (modelica_real)data->simulationInfo->realParameter[430], (modelica_real)data->simulationInfo->realParameter[431], (modelica_real)data->simulationInfo->realParameter[432], (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[279], (modelica_real)data->simulationInfo->realParameter[280], (modelica_real)data->simulationInfo->realParameter[281], (modelica_real)data->simulationInfo->realParameter[282], (modelica_real)data->simulationInfo->realParameter[283], (modelica_real)data->simulationInfo->realParameter[284]);
  data->localData[0]->realVars[46] /* MatStm1.compMolEnth[3,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[374], tmp0, tmp1, data->simulationInfo->realParameter[389], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 206
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270], (modelica_real)data->simulationInfo->realParameter[271], (modelica_real)data->simulationInfo->realParameter[272]);
  data->localData[0]->realVars[41] /* MatStm1.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[372], tmp0, tmp1, data->simulationInfo->realParameter[387], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 207
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270], (modelica_real)data->simulationInfo->realParameter[271], (modelica_real)data->simulationInfo->realParameter[272]);
  data->localData[0]->realVars[44] /* MatStm1.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[372], tmp0, tmp1, data->simulationInfo->realParameter[387], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 208
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[273], (modelica_real)data->simulationInfo->realParameter[274], (modelica_real)data->simulationInfo->realParameter[275], (modelica_real)data->simulationInfo->realParameter[276], (modelica_real)data->simulationInfo->realParameter[277], (modelica_real)data->simulationInfo->realParameter[278]);
  data->localData[0]->realVars[42] /* MatStm1.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[373], tmp0, tmp1, data->simulationInfo->realParameter[388], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 209
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[273], (modelica_real)data->simulationInfo->realParameter[274], (modelica_real)data->simulationInfo->realParameter[275], (modelica_real)data->simulationInfo->realParameter[276], (modelica_real)data->simulationInfo->realParameter[277], (modelica_real)data->simulationInfo->realParameter[278]);
  data->localData[0]->realVars[45] /* MatStm1.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[373], tmp0, tmp1, data->simulationInfo->realParameter[388], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 210
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEnth[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEnth[3,2] + MatStm1.compMolFrac[3,3] * MatStm1.compMolEnth[3,3]
*/
void Flowsheet_eqFunction_210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,210};
  data->localData[0]->realVars[99] /* MatStm1.phasMolEnth[3] variable */ = (data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[44] /* MatStm1.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[45] /* MatStm1.compMolEnth[3,2] variable */) + (data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[46] /* MatStm1.compMolEnth[3,3] variable */);
  TRACE_POP
}
/*
equation index: 211
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,3] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[3].SH, {MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, {MatStm1.comp[3].HOV[1], MatStm1.comp[3].HOV[2], MatStm1.comp[3].HOV[3], MatStm1.comp[3].HOV[4], MatStm1.comp[3].HOV[5], MatStm1.comp[3].HOV[6]}, MatStm1.comp[3].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[429], (modelica_real)data->simulationInfo->realParameter[430], (modelica_real)data->simulationInfo->realParameter[431], (modelica_real)data->simulationInfo->realParameter[432], (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[279], (modelica_real)data->simulationInfo->realParameter[280], (modelica_real)data->simulationInfo->realParameter[281], (modelica_real)data->simulationInfo->realParameter[282], (modelica_real)data->simulationInfo->realParameter[283], (modelica_real)data->simulationInfo->realParameter[284]);
  data->localData[0]->realVars[43] /* MatStm1.compMolEnth[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[374], tmp0, tmp1, data->simulationInfo->realParameter[389], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 212
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEnth[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEnth[2,2] + MatStm1.compMolFrac[2,3] * MatStm1.compMolEnth[2,3]
*/
void Flowsheet_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  data->localData[0]->realVars[98] /* MatStm1.phasMolEnth[2] variable */ = (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[41] /* MatStm1.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[42] /* MatStm1.compMolEnth[2,2] variable */) + (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[43] /* MatStm1.compMolEnth[2,3] variable */);
  TRACE_POP
}
/*
equation index: 213
type: SIMPLE_ASSIGN
MatStm1._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[1].VP[1], MatStm1.comp[1].VP[2], MatStm1.comp[1].VP[3], MatStm1.comp[1].VP[4], MatStm1.comp[1].VP[5], MatStm1.comp[1].VP[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[399], (modelica_real)data->simulationInfo->realParameter[400], (modelica_real)data->simulationInfo->realParameter[401], (modelica_real)data->simulationInfo->realParameter[402], (modelica_real)data->simulationInfo->realParameter[403], (modelica_real)data->simulationInfo->realParameter[404]);
  data->localData[0]->realVars[16] /* MatStm1.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 214
type: SIMPLE_ASSIGN
MatStm1._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[2].VP[1], MatStm1.comp[2].VP[2], MatStm1.comp[2].VP[3], MatStm1.comp[2].VP[4], MatStm1.comp[2].VP[5], MatStm1.comp[2].VP[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[405], (modelica_real)data->simulationInfo->realParameter[406], (modelica_real)data->simulationInfo->realParameter[407], (modelica_real)data->simulationInfo->realParameter[408], (modelica_real)data->simulationInfo->realParameter[409], (modelica_real)data->simulationInfo->realParameter[410]);
  data->localData[0]->realVars[17] /* MatStm1.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 215
type: SIMPLE_ASSIGN
MatStm1._Psat[3] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[3].VP[1], MatStm1.comp[3].VP[2], MatStm1.comp[3].VP[3], MatStm1.comp[3].VP[4], MatStm1.comp[3].VP[5], MatStm1.comp[3].VP[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[411], (modelica_real)data->simulationInfo->realParameter[412], (modelica_real)data->simulationInfo->realParameter[413], (modelica_real)data->simulationInfo->realParameter[414], (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416]);
  data->localData[0]->realVars[18] /* MatStm1.Psat[3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 216
type: SIMPLE_ASSIGN
MatStm1._Pbubl = MatStm1.compMolFrac[1,1] * exp(MatStm1.comp[1].VP[2] + MatStm1.comp[1].VP[3] / MatStm1.T + MatStm1.comp[1].VP[4] * log(MatStm1.T) + MatStm1.comp[1].VP[5] * MatStm1.T ^ MatStm1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp(MatStm1.comp[2].VP[2] + MatStm1.comp[2].VP[3] / MatStm1.T + MatStm1.comp[2].VP[4] * log(MatStm1.T) + MatStm1.comp[2].VP[5] * MatStm1.T ^ MatStm1.comp[2].VP[6]) + MatStm1.compMolFrac[1,3] * exp(MatStm1.comp[3].VP[2] + MatStm1.comp[3].VP[3] / MatStm1.T + MatStm1.comp[3].VP[4] * log(MatStm1.T) + MatStm1.comp[3].VP[5] * MatStm1.T ^ MatStm1.comp[3].VP[6])
*/
void Flowsheet_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  tmp0 = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.T) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  tmp2 = data->simulationInfo->realParameter[404];
  if(tmp1 < 0.0 && tmp2 != 0.0)
  {
    tmp4 = modf(tmp2, &tmp5);
    
    if(tmp4 > 0.5)
    {
      tmp4 -= 1.0;
      tmp5 += 1.0;
    }
    else if(tmp4 < -0.5)
    {
      tmp4 += 1.0;
      tmp5 -= 1.0;
    }
    
    if(fabs(tmp4) < 1e-10)
      tmp3 = pow(tmp1, tmp5);
    else
    {
      tmp7 = modf(1.0/tmp2, &tmp6);
      if(tmp7 > 0.5)
      {
        tmp7 -= 1.0;
        tmp6 += 1.0;
      }
      else if(tmp7 < -0.5)
      {
        tmp7 += 1.0;
        tmp6 -= 1.0;
      }
      if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
      {
        tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
      }
    }
  }
  else
  {
    tmp3 = pow(tmp1, tmp2);
  }
  if(isnan(tmp3) || isinf(tmp3))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
  }tmp8 = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  if(!(tmp8 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.T) was %g should be > 0", tmp8);
  }tmp9 = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  tmp10 = data->simulationInfo->realParameter[410];
  if(tmp9 < 0.0 && tmp10 != 0.0)
  {
    tmp12 = modf(tmp10, &tmp13);
    
    if(tmp12 > 0.5)
    {
      tmp12 -= 1.0;
      tmp13 += 1.0;
    }
    else if(tmp12 < -0.5)
    {
      tmp12 += 1.0;
      tmp13 -= 1.0;
    }
    
    if(fabs(tmp12) < 1e-10)
      tmp11 = pow(tmp9, tmp13);
    else
    {
      tmp15 = modf(1.0/tmp10, &tmp14);
      if(tmp15 > 0.5)
      {
        tmp15 -= 1.0;
        tmp14 += 1.0;
      }
      else if(tmp15 < -0.5)
      {
        tmp15 += 1.0;
        tmp14 -= 1.0;
      }
      if(fabs(tmp15) < 1e-10 && ((unsigned long)tmp14 & 1))
      {
        tmp11 = -pow(-tmp9, tmp12)*pow(tmp9, tmp13);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp9, tmp10);
      }
    }
  }
  else
  {
    tmp11 = pow(tmp9, tmp10);
  }
  if(isnan(tmp11) || isinf(tmp11))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp9, tmp10);
  }tmp16 = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  if(!(tmp16 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.T) was %g should be > 0", tmp16);
  }tmp17 = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  tmp18 = data->simulationInfo->realParameter[416];
  if(tmp17 < 0.0 && tmp18 != 0.0)
  {
    tmp20 = modf(tmp18, &tmp21);
    
    if(tmp20 > 0.5)
    {
      tmp20 -= 1.0;
      tmp21 += 1.0;
    }
    else if(tmp20 < -0.5)
    {
      tmp20 += 1.0;
      tmp21 -= 1.0;
    }
    
    if(fabs(tmp20) < 1e-10)
      tmp19 = pow(tmp17, tmp21);
    else
    {
      tmp23 = modf(1.0/tmp18, &tmp22);
      if(tmp23 > 0.5)
      {
        tmp23 -= 1.0;
        tmp22 += 1.0;
      }
      else if(tmp23 < -0.5)
      {
        tmp23 += 1.0;
        tmp22 -= 1.0;
      }
      if(fabs(tmp23) < 1e-10 && ((unsigned long)tmp22 & 1))
      {
        tmp19 = -pow(-tmp17, tmp20)*pow(tmp17, tmp21);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
      }
    }
  }
  else
  {
    tmp19 = pow(tmp17, tmp18);
  }
  if(isnan(tmp19) || isinf(tmp19))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
  }
  data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */ = (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[400] + DIVISION_SIM(data->simulationInfo->realParameter[401],data->localData[0]->realVars[19] /* MatStm1.T variable */,"MatStm1.T",equationIndexes) + (data->simulationInfo->realParameter[402]) * (log(tmp0)) + (data->simulationInfo->realParameter[403]) * (tmp3))) + (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[406] + DIVISION_SIM(data->simulationInfo->realParameter[407],data->localData[0]->realVars[19] /* MatStm1.T variable */,"MatStm1.T",equationIndexes) + (data->simulationInfo->realParameter[408]) * (log(tmp8)) + (data->simulationInfo->realParameter[409]) * (tmp11))) + (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[1,3] variable */) * (exp(data->simulationInfo->realParameter[412] + DIVISION_SIM(data->simulationInfo->realParameter[413],data->localData[0]->realVars[19] /* MatStm1.T variable */,"MatStm1.T",equationIndexes) + (data->simulationInfo->realParameter[414]) * (log(tmp16)) + (data->simulationInfo->realParameter[415]) * (tmp19)));
  TRACE_POP
}
/*
equation index: 217
type: SIMPLE_ASSIGN
MatStm1._Pdew = 1.0 / (MatStm1.compMolFrac[1,1] * exp((-MatStm1.comp[1].VP[2]) - MatStm1.comp[1].VP[3] / MatStm1.T - MatStm1.comp[1].VP[4] * log(MatStm1.T) - MatStm1.comp[1].VP[5] * MatStm1.T ^ MatStm1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp((-MatStm1.comp[2].VP[2]) - MatStm1.comp[2].VP[3] / MatStm1.T - MatStm1.comp[2].VP[4] * log(MatStm1.T) - MatStm1.comp[2].VP[5] * MatStm1.T ^ MatStm1.comp[2].VP[6]) + MatStm1.compMolFrac[1,3] * exp((-MatStm1.comp[3].VP[2]) - MatStm1.comp[3].VP[3] / MatStm1.T - MatStm1.comp[3].VP[4] * log(MatStm1.T) - MatStm1.comp[3].VP[5] * MatStm1.T ^ MatStm1.comp[3].VP[6]))
*/
void Flowsheet_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  tmp0 = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.T) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  tmp2 = data->simulationInfo->realParameter[404];
  if(tmp1 < 0.0 && tmp2 != 0.0)
  {
    tmp4 = modf(tmp2, &tmp5);
    
    if(tmp4 > 0.5)
    {
      tmp4 -= 1.0;
      tmp5 += 1.0;
    }
    else if(tmp4 < -0.5)
    {
      tmp4 += 1.0;
      tmp5 -= 1.0;
    }
    
    if(fabs(tmp4) < 1e-10)
      tmp3 = pow(tmp1, tmp5);
    else
    {
      tmp7 = modf(1.0/tmp2, &tmp6);
      if(tmp7 > 0.5)
      {
        tmp7 -= 1.0;
        tmp6 += 1.0;
      }
      else if(tmp7 < -0.5)
      {
        tmp7 += 1.0;
        tmp6 -= 1.0;
      }
      if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
      {
        tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
      }
    }
  }
  else
  {
    tmp3 = pow(tmp1, tmp2);
  }
  if(isnan(tmp3) || isinf(tmp3))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
  }tmp8 = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  if(!(tmp8 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.T) was %g should be > 0", tmp8);
  }tmp9 = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  tmp10 = data->simulationInfo->realParameter[410];
  if(tmp9 < 0.0 && tmp10 != 0.0)
  {
    tmp12 = modf(tmp10, &tmp13);
    
    if(tmp12 > 0.5)
    {
      tmp12 -= 1.0;
      tmp13 += 1.0;
    }
    else if(tmp12 < -0.5)
    {
      tmp12 += 1.0;
      tmp13 -= 1.0;
    }
    
    if(fabs(tmp12) < 1e-10)
      tmp11 = pow(tmp9, tmp13);
    else
    {
      tmp15 = modf(1.0/tmp10, &tmp14);
      if(tmp15 > 0.5)
      {
        tmp15 -= 1.0;
        tmp14 += 1.0;
      }
      else if(tmp15 < -0.5)
      {
        tmp15 += 1.0;
        tmp14 -= 1.0;
      }
      if(fabs(tmp15) < 1e-10 && ((unsigned long)tmp14 & 1))
      {
        tmp11 = -pow(-tmp9, tmp12)*pow(tmp9, tmp13);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp9, tmp10);
      }
    }
  }
  else
  {
    tmp11 = pow(tmp9, tmp10);
  }
  if(isnan(tmp11) || isinf(tmp11))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp9, tmp10);
  }tmp16 = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  if(!(tmp16 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.T) was %g should be > 0", tmp16);
  }tmp17 = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  tmp18 = data->simulationInfo->realParameter[416];
  if(tmp17 < 0.0 && tmp18 != 0.0)
  {
    tmp20 = modf(tmp18, &tmp21);
    
    if(tmp20 > 0.5)
    {
      tmp20 -= 1.0;
      tmp21 += 1.0;
    }
    else if(tmp20 < -0.5)
    {
      tmp20 += 1.0;
      tmp21 -= 1.0;
    }
    
    if(fabs(tmp20) < 1e-10)
      tmp19 = pow(tmp17, tmp21);
    else
    {
      tmp23 = modf(1.0/tmp18, &tmp22);
      if(tmp23 > 0.5)
      {
        tmp23 -= 1.0;
        tmp22 += 1.0;
      }
      else if(tmp23 < -0.5)
      {
        tmp23 += 1.0;
        tmp22 -= 1.0;
      }
      if(fabs(tmp23) < 1e-10 && ((unsigned long)tmp22 & 1))
      {
        tmp19 = -pow(-tmp17, tmp20)*pow(tmp17, tmp21);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
      }
    }
  }
  else
  {
    tmp19 = pow(tmp17, tmp18);
  }
  if(isnan(tmp19) || isinf(tmp19))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
  }
  data->localData[0]->realVars[15] /* MatStm1.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */) * (exp((-data->simulationInfo->realParameter[400]) - (DIVISION_SIM(data->simulationInfo->realParameter[401],data->localData[0]->realVars[19] /* MatStm1.T variable */,"MatStm1.T",equationIndexes)) - ((data->simulationInfo->realParameter[402]) * (log(tmp0))) - ((data->simulationInfo->realParameter[403]) * (tmp3)))) + (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[1,2] variable */) * (exp((-data->simulationInfo->realParameter[406]) - (DIVISION_SIM(data->simulationInfo->realParameter[407],data->localData[0]->realVars[19] /* MatStm1.T variable */,"MatStm1.T",equationIndexes)) - ((data->simulationInfo->realParameter[408]) * (log(tmp8))) - ((data->simulationInfo->realParameter[409]) * (tmp11)))) + (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[1,3] variable */) * (exp((-data->simulationInfo->realParameter[412]) - (DIVISION_SIM(data->simulationInfo->realParameter[413],data->localData[0]->realVars[19] /* MatStm1.T variable */,"MatStm1.T",equationIndexes)) - ((data->simulationInfo->realParameter[414]) * (log(tmp16))) - ((data->simulationInfo->realParameter[415]) * (tmp19)))),"MatStm1.compMolFrac[1,1] * exp((-MatStm1.comp[1].VP[2]) - MatStm1.comp[1].VP[3] / MatStm1.T - MatStm1.comp[1].VP[4] * log(MatStm1.T) - MatStm1.comp[1].VP[5] * MatStm1.T ^ MatStm1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp((-MatStm1.comp[2].VP[2]) - MatStm1.comp[2].VP[3] / MatStm1.T - MatStm1.comp[2].VP[4] * log(MatStm1.T) - MatStm1.comp[2].VP[5] * MatStm1.T ^ MatStm1.comp[2].VP[6]) + MatStm1.compMolFrac[1,3] * exp((-MatStm1.comp[3].VP[2]) - MatStm1.comp[3].VP[3] / MatStm1.T - MatStm1.comp[3].VP[4] * log(MatStm1.T) - MatStm1.comp[3].VP[5] * MatStm1.T ^ MatStm1.comp[3].VP[6])",equationIndexes);
  TRACE_POP
}
/*
equation index: 218
type: SIMPLE_ASSIGN
MatStm1._K[1] = 9.869232667160129e-006 * MatStm1.Psat[1]
*/
void Flowsheet_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  data->localData[0]->realVars[7] /* MatStm1.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[16] /* MatStm1.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 219
type: SIMPLE_ASSIGN
MatStm1._K[2] = 9.869232667160129e-006 * MatStm1.Psat[2]
*/
void Flowsheet_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  data->localData[0]->realVars[8] /* MatStm1.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[17] /* MatStm1.Psat[2] variable */);
  TRACE_POP
}
/*
equation index: 220
type: SIMPLE_ASSIGN
MatStm1._K[3] = 9.869232667160129e-006 * MatStm1.Psat[3]
*/
void Flowsheet_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  data->localData[0]->realVars[9] /* MatStm1.K[3] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[18] /* MatStm1.Psat[3] variable */);
  TRACE_POP
}
/*
equation index: 221
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,3] = MatStm1.compMolFrac[2,3] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  data->localData[0]->realVars[61] /* MatStm1.compMolFlo[2,3] variable */ = (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 222
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 223
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  data->localData[0]->realVars[60] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 224
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 0.005 * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */ = (0.005) * (data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 225
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac = 1.0 - MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 226
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[3] = 200.0 * MatStm1.vapPhasMolFrac
*/
void Flowsheet_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */ = (200.0) * (data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 227
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,3] = MatStm1.compMolFrac[3,3] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  data->localData[0]->realVars[64] /* MatStm1.compMolFlo[3,3] variable */ = (data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 228
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 229
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  data->localData[0]->realVars[63] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc238(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,238};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  /* iteration variables */
  for (i=0; i<8; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<8; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[19] /* MatStm1.T variable */ = xloc[1];
  data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */ = xloc[2];
  data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */ = xloc[3];
  data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */ = xloc[4];
  data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */ = xloc[5];
  data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */ = xloc[6];
  data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */ = xloc[7];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_205(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_206(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_207(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_208(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_209(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_210(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_211(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_212(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_213(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_214(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_215(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_216(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_217(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_218(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_219(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_220(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_221(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_222(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_223(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_224(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_225(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_226(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_227(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_228(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_229(data, threadData);
  /* body */
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */ - ((data->localData[0]->realVars[9] /* MatStm1.K[3] variable */) * (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */)):data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */);
  }
  res[0] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[8] /* MatStm1.K[2] variable */) * (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */)):data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */);
  }
  res[1] = tmp7;

  res[2] = data->localData[0]->realVars[63] /* MatStm1.compMolFlo[3,2] variable */ + data->localData[0]->realVars[60] /* MatStm1.compMolFlo[2,2] variable */ - data->localData[0]->realVars[57] /* MatStm1.compMolFlo[1,2] variable */;

  res[3] = data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[56] /* MatStm1.compMolFlo[1,1] variable */;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp11 = (tmp9?data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[7] /* MatStm1.K[1] variable */) * (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */)):data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */);
  }
  res[4] = tmp11;

  res[5] = data->localData[0]->realVars[64] /* MatStm1.compMolFlo[3,3] variable */ + data->localData[0]->realVars[61] /* MatStm1.compMolFlo[2,3] variable */ - data->localData[0]->realVars[58] /* MatStm1.compMolFlo[1,3] variable */;

  tmp12 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  res[6] = (tmp12?data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */ + data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */ + data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */ - 1.0:data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */ + data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */ + data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */ - 1.0);

  res[7] = (data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[99] /* MatStm1.phasMolEnth[3] variable */) + (data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[98] /* MatStm1.phasMolEnth[2] variable */) - data->localData[0]->realVars[97] /* MatStm1.phasMolEnth[1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS238(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+8] = {0,4,5,4,4,4,4,4,4};
  const int rowIndex[33] = {2,3,5,7,0,1,4,6,7,0,5,6,7,3,4,6,7,3,4,6,7,1,2,6,7,1,2,6,7,0,5,6,7};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((8+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(33*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 33;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(8*sizeof(int));
  inSysData->sparsePattern.maxColors = 8;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (8+1)*sizeof(int));
  
  for(i=2;i<8+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 33*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[7] = 1;
  inSysData->sparsePattern.colorCols[6] = 2;
  inSysData->sparsePattern.colorCols[5] = 3;
  inSysData->sparsePattern.colorCols[4] = 4;
  inSysData->sparsePattern.colorCols[3] = 5;
  inSysData->sparsePattern.colorCols[2] = 6;
  inSysData->sparsePattern.colorCols[1] = 7;
  inSysData->sparsePattern.colorCols[0] = 8;
}
void initializeStaticDataNLS238(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[119].attribute /* MatStm1.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[119].attribute /* MatStm1.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[119].attribute /* MatStm1.totMolFlo[2] */.max;
  /* static nls data for MatStm1.T */
  sysData->nominal[i] = data->modelData->realVarsData[19].attribute /* MatStm1.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[19].attribute /* MatStm1.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[19].attribute /* MatStm1.T */.max;
  /* static nls data for MatStm1.compMolFrac[3,3] */
  sysData->nominal[i] = data->modelData->realVarsData[73].attribute /* MatStm1.compMolFrac[3,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[73].attribute /* MatStm1.compMolFrac[3,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[73].attribute /* MatStm1.compMolFrac[3,3] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[68].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[68].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[68].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[71].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[71].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[71].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* static nls data for MatStm1.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[72].attribute /* MatStm1.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[72].attribute /* MatStm1.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[72].attribute /* MatStm1.compMolFrac[3,2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[69].attribute /* MatStm1.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[69].attribute /* MatStm1.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[69].attribute /* MatStm1.compMolFrac[2,2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,3] */
  sysData->nominal[i] = data->modelData->realVarsData[70].attribute /* MatStm1.compMolFrac[2,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[70].attribute /* MatStm1.compMolFrac[2,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[70].attribute /* MatStm1.compMolFrac[2,3] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS238(sysData);
}

void getIterationVarsNLS238(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  array[2] = data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */;
  array[3] = data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */;
  array[4] = data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */;
  array[5] = data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */;
  array[6] = data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */;
  array[7] = data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */;
}


/* inner equations */

/*
equation index: 153
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->localData[0]->realVars[296] /* MatStm3.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 154
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->localData[0]->realVars[297] /* MatStm3.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 155
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,3] = MatStm3.compMolFrac[2,3] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  data->localData[0]->realVars[298] /* MatStm3.compMolFlo[2,3] variable */ = (data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 156
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac = 0.01 * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 157
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac[1] = 1.0 - MatStm3.liqPhasMolFrac
*/
void Flowsheet_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  data->localData[0]->realVars[362] /* Mixer1.inVapPhasMolFrac[1] variable */ = 1.0 - data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 158
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[3] = 100.0 * Mixer1.inVapPhasMolFrac[1]
*/
void Flowsheet_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */ = (100.0) * (data->localData[0]->realVars[362] /* Mixer1.inVapPhasMolFrac[1] variable */);
  TRACE_POP
}
/*
equation index: 159
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  data->localData[0]->realVars[299] /* MatStm3.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 160
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  data->localData[0]->realVars[300] /* MatStm3.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 161
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,3] = MatStm3.compMolFrac[3,3] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->localData[0]->realVars[301] /* MatStm3.compMolFlo[3,3] variable */ = (data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc185(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,185};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  /* iteration variables */
  for (i=0; i<7; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<7; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */ = xloc[1];
  data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */ = xloc[2];
  data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */ = xloc[3];
  data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */ = xloc[4];
  data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */ = xloc[5];
  data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */ = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_153(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_154(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_155(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_156(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_157(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_158(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_159(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_160(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_161(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[301] /* MatStm3.compMolFlo[3,3] variable */ + data->localData[0]->realVars[298] /* MatStm3.compMolFlo[2,3] variable */ - data->localData[0]->realVars[295] /* MatStm3.compMolFlo[1,3] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */ - ((data->localData[0]->realVars[246] /* MatStm3.K[3] variable */) * (data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */)):data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */);
  }
  res[1] = tmp3;

  res[2] = data->localData[0]->realVars[300] /* MatStm3.compMolFlo[3,2] variable */ + data->localData[0]->realVars[297] /* MatStm3.compMolFlo[2,2] variable */ - data->localData[0]->realVars[294] /* MatStm3.compMolFlo[1,2] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[245] /* MatStm3.K[2] variable */) * (data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */)):data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */);
  }
  res[3] = tmp7;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  res[4] = (tmp8?data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */ + data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */ + data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */ - 1.0:data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */ + data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */ + data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */ - 1.0);

  res[5] = data->localData[0]->realVars[299] /* MatStm3.compMolFlo[3,1] variable */ + data->localData[0]->realVars[296] /* MatStm3.compMolFlo[2,1] variable */ - data->localData[0]->realVars[293] /* MatStm3.compMolFlo[1,1] variable */;

  tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp10 = GreaterEq(101325.0,data->localData[0]->realVars[252] /* MatStm3.Pdew variable */);
    tmp12 = (tmp10?data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[244] /* MatStm3.K[1] variable */) * (data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */)):data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */);
  }
  res[6] = tmp12;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS185(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {0,2,5,4,5,6,2,3,4,4,5,6,2,3,4,0,1,4,0,1,4};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((7+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(21*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 21;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(7*sizeof(int));
  inSysData->sparsePattern.maxColors = 7;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (7+1)*sizeof(int));
  
  for(i=2;i<7+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 21*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[6] = 1;
  inSysData->sparsePattern.colorCols[5] = 2;
  inSysData->sparsePattern.colorCols[4] = 3;
  inSysData->sparsePattern.colorCols[3] = 4;
  inSysData->sparsePattern.colorCols[2] = 5;
  inSysData->sparsePattern.colorCols[1] = 6;
  inSysData->sparsePattern.colorCols[0] = 7;
}
void initializeStaticDataNLS185(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm3.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[356].attribute /* MatStm3.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[356].attribute /* MatStm3.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[356].attribute /* MatStm3.totMolFlo[2] */.max;
  /* static nls data for MatStm3.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[308].attribute /* MatStm3.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[308].attribute /* MatStm3.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[308].attribute /* MatStm3.compMolFrac[3,1] */.max;
  /* static nls data for MatStm3.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[306].attribute /* MatStm3.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[306].attribute /* MatStm3.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[306].attribute /* MatStm3.compMolFrac[2,2] */.max;
  /* static nls data for MatStm3.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[305].attribute /* MatStm3.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[305].attribute /* MatStm3.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[305].attribute /* MatStm3.compMolFrac[2,1] */.max;
  /* static nls data for MatStm3.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[309].attribute /* MatStm3.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[309].attribute /* MatStm3.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[309].attribute /* MatStm3.compMolFrac[3,2] */.max;
  /* static nls data for MatStm3.compMolFrac[2,3] */
  sysData->nominal[i] = data->modelData->realVarsData[307].attribute /* MatStm3.compMolFrac[2,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[307].attribute /* MatStm3.compMolFrac[2,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[307].attribute /* MatStm3.compMolFrac[2,3] */.max;
  /* static nls data for MatStm3.compMolFrac[3,3] */
  sysData->nominal[i] = data->modelData->realVarsData[310].attribute /* MatStm3.compMolFrac[3,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[310].attribute /* MatStm3.compMolFrac[3,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[310].attribute /* MatStm3.compMolFrac[3,3] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS185(sysData);
}

void getIterationVarsNLS185(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */;
  array[2] = data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */;
  array[3] = data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */;
  array[4] = data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */;
  array[5] = data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */;
  array[6] = data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */;
}


/* inner equations */

/*
equation index: 86
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  data->localData[0]->realVars[178] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 87
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,3] = MatStm2.compMolFrac[2,3] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  data->localData[0]->realVars[180] /* MatStm2.compMolFlo[2,3] variable */ = (data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 88
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  data->localData[0]->realVars[179] /* MatStm2.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 89
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac = 0.01 * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 90
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac[2] = 1.0 - MatStm2.liqPhasMolFrac
*/
void Flowsheet_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  data->localData[0]->realVars[363] /* Mixer1.inVapPhasMolFrac[2] variable */ = 1.0 - data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 91
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[3] = 100.0 * Mixer1.inVapPhasMolFrac[2]
*/
void Flowsheet_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */ = (100.0) * (data->localData[0]->realVars[363] /* Mixer1.inVapPhasMolFrac[2] variable */);
  TRACE_POP
}
/*
equation index: 92
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  data->localData[0]->realVars[181] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 93
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,3] = MatStm2.compMolFrac[3,3] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  data->localData[0]->realVars[183] /* MatStm2.compMolFlo[3,3] variable */ = (data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 94
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  data->localData[0]->realVars[182] /* MatStm2.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc118(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,118};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  /* iteration variables */
  for (i=0; i<7; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<7; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */ = xloc[1];
  data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */ = xloc[2];
  data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */ = xloc[3];
  data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */ = xloc[4];
  data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */ = xloc[5];
  data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */ = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_86(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_87(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_88(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_89(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_90(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_91(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_92(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_93(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_94(data, threadData);
  /* body */
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */ - ((data->localData[0]->realVars[128] /* MatStm2.K[3] variable */) * (data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */)):data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[182] /* MatStm2.compMolFlo[3,2] variable */ + data->localData[0]->realVars[179] /* MatStm2.compMolFlo[2,2] variable */ - data->localData[0]->realVars[176] /* MatStm2.compMolFlo[1,2] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[127] /* MatStm2.K[2] variable */) * (data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */)):data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */);
  }
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[183] /* MatStm2.compMolFlo[3,3] variable */ + data->localData[0]->realVars[180] /* MatStm2.compMolFlo[2,3] variable */ - data->localData[0]->realVars[177] /* MatStm2.compMolFlo[1,3] variable */;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  res[4] = (tmp8?data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */ + data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */ + data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */ - 1.0:data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */ + data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */ + data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */ - 1.0);

  res[5] = data->localData[0]->realVars[181] /* MatStm2.compMolFlo[3,1] variable */ + data->localData[0]->realVars[178] /* MatStm2.compMolFlo[2,1] variable */ - data->localData[0]->realVars[175] /* MatStm2.compMolFlo[1,1] variable */;

  tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp10 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp12 = (tmp10?data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[126] /* MatStm2.K[1] variable */) * (data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */)):data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */);
  }
  res[6] = tmp12;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS118(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {1,3,5,4,5,6,4,5,6,0,3,4,1,2,4,1,2,4,0,3,4};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((7+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(21*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 21;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(7*sizeof(int));
  inSysData->sparsePattern.maxColors = 7;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (7+1)*sizeof(int));
  
  for(i=2;i<7+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 21*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[6] = 1;
  inSysData->sparsePattern.colorCols[5] = 2;
  inSysData->sparsePattern.colorCols[4] = 3;
  inSysData->sparsePattern.colorCols[3] = 4;
  inSysData->sparsePattern.colorCols[2] = 5;
  inSysData->sparsePattern.colorCols[1] = 6;
  inSysData->sparsePattern.colorCols[0] = 7;
}
void initializeStaticDataNLS118(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm2.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[238].attribute /* MatStm2.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[238].attribute /* MatStm2.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[238].attribute /* MatStm2.totMolFlo[2] */.max;
  /* static nls data for MatStm2.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[190].attribute /* MatStm2.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[190].attribute /* MatStm2.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[190].attribute /* MatStm2.compMolFrac[3,1] */.max;
  /* static nls data for MatStm2.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[187].attribute /* MatStm2.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[187].attribute /* MatStm2.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[187].attribute /* MatStm2.compMolFrac[2,1] */.max;
  /* static nls data for MatStm2.compMolFrac[3,3] */
  sysData->nominal[i] = data->modelData->realVarsData[192].attribute /* MatStm2.compMolFrac[3,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[192].attribute /* MatStm2.compMolFrac[3,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[192].attribute /* MatStm2.compMolFrac[3,3] */.max;
  /* static nls data for MatStm2.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[188].attribute /* MatStm2.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[188].attribute /* MatStm2.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[188].attribute /* MatStm2.compMolFrac[2,2] */.max;
  /* static nls data for MatStm2.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[191].attribute /* MatStm2.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[191].attribute /* MatStm2.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[191].attribute /* MatStm2.compMolFrac[3,2] */.max;
  /* static nls data for MatStm2.compMolFrac[2,3] */
  sysData->nominal[i] = data->modelData->realVarsData[189].attribute /* MatStm2.compMolFrac[2,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[189].attribute /* MatStm2.compMolFrac[2,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[189].attribute /* MatStm2.compMolFrac[2,3] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS118(sysData);
}

void getIterationVarsNLS118(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */;
  array[2] = data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */;
  array[3] = data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */;
  array[4] = data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */;
  array[5] = data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */;
  array[6] = data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void Flowsheet_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[5].equationIndex = 531;
  nonLinearSystemData[5].size = 8;
  nonLinearSystemData[5].homotopySupport = 0;
  nonLinearSystemData[5].mixedSystem = 1;
  nonLinearSystemData[5].residualFunc = residualFunc531;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = NULL;
  nonLinearSystemData[5].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[5].jacobianIndex = -1;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS531;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS531;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  
  nonLinearSystemData[4].equationIndex = 459;
  nonLinearSystemData[4].size = 7;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 0;
  nonLinearSystemData[4].residualFunc = residualFunc459;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = Flowsheet_functionJacNLSJac4_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac4;
  nonLinearSystemData[4].jacobianIndex = 3 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS459;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS459;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 392;
  nonLinearSystemData[3].size = 7;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 0;
  nonLinearSystemData[3].residualFunc = residualFunc392;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = Flowsheet_functionJacNLSJac3_column;
  nonLinearSystemData[3].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac3;
  nonLinearSystemData[3].jacobianIndex = 2 /*jacInx*/;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS392;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS392;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 238;
  nonLinearSystemData[2].size = 8;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc238;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS238;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS238;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 185;
  nonLinearSystemData[1].size = 7;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 0;
  nonLinearSystemData[1].residualFunc = residualFunc185;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = Flowsheet_functionJacNLSJac1_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac1;
  nonLinearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS185;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS185;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 118;
  nonLinearSystemData[0].size = 7;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 0;
  nonLinearSystemData[0].residualFunc = residualFunc118;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = Flowsheet_functionJacNLSJac0_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac0;
  nonLinearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS118;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS118;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

