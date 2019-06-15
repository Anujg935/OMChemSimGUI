/* Non Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 681
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270], (modelica_real)data->simulationInfo->realParameter[271], (modelica_real)data->simulationInfo->realParameter[272]);
  data->localData[0]->realVars[41] /* MatStm1.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[372], tmp0, tmp1, data->simulationInfo->realParameter[387], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 682
type: SIMPLE_ASSIGN
MatStm1._Psat[3] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[3].VP[1], MatStm1.comp[3].VP[2], MatStm1.comp[3].VP[3], MatStm1.comp[3].VP[4], MatStm1.comp[3].VP[5], MatStm1.comp[3].VP[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[411], (modelica_real)data->simulationInfo->realParameter[412], (modelica_real)data->simulationInfo->realParameter[413], (modelica_real)data->simulationInfo->realParameter[414], (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416]);
  data->localData[0]->realVars[18] /* MatStm1.Psat[3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 683
type: SIMPLE_ASSIGN
MatStm1._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[2].VP[1], MatStm1.comp[2].VP[2], MatStm1.comp[2].VP[3], MatStm1.comp[2].VP[4], MatStm1.comp[2].VP[5], MatStm1.comp[2].VP[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[405], (modelica_real)data->simulationInfo->realParameter[406], (modelica_real)data->simulationInfo->realParameter[407], (modelica_real)data->simulationInfo->realParameter[408], (modelica_real)data->simulationInfo->realParameter[409], (modelica_real)data->simulationInfo->realParameter[410]);
  data->localData[0]->realVars[17] /* MatStm1.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 684
type: SIMPLE_ASSIGN
MatStm1._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[1].VP[1], MatStm1.comp[1].VP[2], MatStm1.comp[1].VP[3], MatStm1.comp[1].VP[4], MatStm1.comp[1].VP[5], MatStm1.comp[1].VP[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[399], (modelica_real)data->simulationInfo->realParameter[400], (modelica_real)data->simulationInfo->realParameter[401], (modelica_real)data->simulationInfo->realParameter[402], (modelica_real)data->simulationInfo->realParameter[403], (modelica_real)data->simulationInfo->realParameter[404]);
  data->localData[0]->realVars[16] /* MatStm1.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 685
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,3] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[3].SH, {MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, {MatStm1.comp[3].HOV[1], MatStm1.comp[3].HOV[2], MatStm1.comp[3].HOV[3], MatStm1.comp[3].HOV[4], MatStm1.comp[3].HOV[5], MatStm1.comp[3].HOV[6]}, MatStm1.comp[3].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[429], (modelica_real)data->simulationInfo->realParameter[430], (modelica_real)data->simulationInfo->realParameter[431], (modelica_real)data->simulationInfo->realParameter[432], (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[279], (modelica_real)data->simulationInfo->realParameter[280], (modelica_real)data->simulationInfo->realParameter[281], (modelica_real)data->simulationInfo->realParameter[282], (modelica_real)data->simulationInfo->realParameter[283], (modelica_real)data->simulationInfo->realParameter[284]);
  data->localData[0]->realVars[43] /* MatStm1.compMolEnth[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[374], tmp0, tmp1, data->simulationInfo->realParameter[389], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 686
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[273], (modelica_real)data->simulationInfo->realParameter[274], (modelica_real)data->simulationInfo->realParameter[275], (modelica_real)data->simulationInfo->realParameter[276], (modelica_real)data->simulationInfo->realParameter[277], (modelica_real)data->simulationInfo->realParameter[278]);
  data->localData[0]->realVars[45] /* MatStm1.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[373], tmp0, tmp1, data->simulationInfo->realParameter[388], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 687
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[273], (modelica_real)data->simulationInfo->realParameter[274], (modelica_real)data->simulationInfo->realParameter[275], (modelica_real)data->simulationInfo->realParameter[276], (modelica_real)data->simulationInfo->realParameter[277], (modelica_real)data->simulationInfo->realParameter[278]);
  data->localData[0]->realVars[42] /* MatStm1.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[373], tmp0, tmp1, data->simulationInfo->realParameter[388], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 688
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEnth[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEnth[2,2] + MatStm1.compMolFrac[2,3] * MatStm1.compMolEnth[2,3]
*/
void Flowsheet_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  data->localData[0]->realVars[98] /* MatStm1.phasMolEnth[2] variable */ = (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[41] /* MatStm1.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[42] /* MatStm1.compMolEnth[2,2] variable */) + (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[43] /* MatStm1.compMolEnth[2,3] variable */);
  TRACE_POP
}
/*
equation index: 689
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,689};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270], (modelica_real)data->simulationInfo->realParameter[271], (modelica_real)data->simulationInfo->realParameter[272]);
  data->localData[0]->realVars[44] /* MatStm1.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[372], tmp0, tmp1, data->simulationInfo->realParameter[387], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 690
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,3] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[3].SH, {MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, {MatStm1.comp[3].HOV[1], MatStm1.comp[3].HOV[2], MatStm1.comp[3].HOV[3], MatStm1.comp[3].HOV[4], MatStm1.comp[3].HOV[5], MatStm1.comp[3].HOV[6]}, MatStm1.comp[3].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[429], (modelica_real)data->simulationInfo->realParameter[430], (modelica_real)data->simulationInfo->realParameter[431], (modelica_real)data->simulationInfo->realParameter[432], (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[279], (modelica_real)data->simulationInfo->realParameter[280], (modelica_real)data->simulationInfo->realParameter[281], (modelica_real)data->simulationInfo->realParameter[282], (modelica_real)data->simulationInfo->realParameter[283], (modelica_real)data->simulationInfo->realParameter[284]);
  data->localData[0]->realVars[46] /* MatStm1.compMolEnth[3,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[374], tmp0, tmp1, data->simulationInfo->realParameter[389], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 691
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEnth[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEnth[3,2] + MatStm1.compMolFrac[3,3] * MatStm1.compMolEnth[3,3]
*/
void Flowsheet_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  data->localData[0]->realVars[99] /* MatStm1.phasMolEnth[3] variable */ = (data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[44] /* MatStm1.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[45] /* MatStm1.compMolEnth[3,2] variable */) + (data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[46] /* MatStm1.compMolEnth[3,3] variable */);
  TRACE_POP
}
/*
equation index: 692
type: SIMPLE_ASSIGN
MatStm1._K[3] = 9.869232667160129e-006 * MatStm1.Psat[3]
*/
void Flowsheet_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  data->localData[0]->realVars[9] /* MatStm1.K[3] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[18] /* MatStm1.Psat[3] variable */);
  TRACE_POP
}
/*
equation index: 693
type: SIMPLE_ASSIGN
MatStm1._K[2] = 9.869232667160129e-006 * MatStm1.Psat[2]
*/
void Flowsheet_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  data->localData[0]->realVars[8] /* MatStm1.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[17] /* MatStm1.Psat[2] variable */);
  TRACE_POP
}
/*
equation index: 694
type: SIMPLE_ASSIGN
MatStm1._K[1] = 9.869232667160129e-006 * MatStm1.Psat[1]
*/
void Flowsheet_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  data->localData[0]->realVars[7] /* MatStm1.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[16] /* MatStm1.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 695
type: SIMPLE_ASSIGN
$cse2 = log(MatStm1.T)
*/
void Flowsheet_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
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
equation index: 696
type: SIMPLE_ASSIGN
$cse7 = exp((-MatStm1.comp[3].VP[2]) - MatStm1.comp[3].VP[3] / MatStm1.T - MatStm1.comp[3].VP[4] * $cse2 - MatStm1.comp[3].VP[5] * MatStm1.T ^ MatStm1.comp[3].VP[6])
*/
void Flowsheet_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
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
equation index: 697
type: SIMPLE_ASSIGN
$cse6 = exp((-MatStm1.comp[2].VP[2]) - MatStm1.comp[2].VP[3] / MatStm1.T - MatStm1.comp[2].VP[4] * $cse2 - MatStm1.comp[2].VP[5] * MatStm1.T ^ MatStm1.comp[2].VP[6])
*/
void Flowsheet_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
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
equation index: 698
type: SIMPLE_ASSIGN
$cse5 = exp((-MatStm1.comp[1].VP[2]) - MatStm1.comp[1].VP[3] / MatStm1.T - MatStm1.comp[1].VP[4] * $cse2 - MatStm1.comp[1].VP[5] * MatStm1.T ^ MatStm1.comp[1].VP[6])
*/
void Flowsheet_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
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
equation index: 699
type: SIMPLE_ASSIGN
MatStm1._Pdew = 1.0 / (MatStm1.compMolFrac[1,1] * $cse5 + MatStm1.compMolFrac[1,2] * $cse6 + MatStm1.compMolFrac[1,3] * $cse7)
*/
void Flowsheet_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  data->localData[0]->realVars[15] /* MatStm1.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[4] /* $cse5 variable */) + (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[5] /* $cse6 variable */) + (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[6] /* $cse7 variable */),"MatStm1.compMolFrac[1,1] * $cse5 + MatStm1.compMolFrac[1,2] * $cse6 + MatStm1.compMolFrac[1,3] * $cse7",equationIndexes);
  TRACE_POP
}
/*
equation index: 700
type: SIMPLE_ASSIGN
$cse4 = exp(MatStm1.comp[3].VP[2] + MatStm1.comp[3].VP[3] / MatStm1.T + MatStm1.comp[3].VP[4] * $cse2 + MatStm1.comp[3].VP[5] * MatStm1.T ^ MatStm1.comp[3].VP[6])
*/
void Flowsheet_eqFunction_700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,700};
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
equation index: 701
type: SIMPLE_ASSIGN
$cse3 = exp(MatStm1.comp[2].VP[2] + MatStm1.comp[2].VP[3] / MatStm1.T + MatStm1.comp[2].VP[4] * $cse2 + MatStm1.comp[2].VP[5] * MatStm1.T ^ MatStm1.comp[2].VP[6])
*/
void Flowsheet_eqFunction_701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,701};
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
equation index: 702
type: SIMPLE_ASSIGN
$cse1 = exp(MatStm1.comp[1].VP[2] + MatStm1.comp[1].VP[3] / MatStm1.T + MatStm1.comp[1].VP[4] * $cse2 + MatStm1.comp[1].VP[5] * MatStm1.T ^ MatStm1.comp[1].VP[6])
*/
void Flowsheet_eqFunction_702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,702};
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
equation index: 703
type: SIMPLE_ASSIGN
MatStm1._Pbubl = MatStm1.compMolFrac[1,1] * $cse1 + MatStm1.compMolFrac[1,2] * $cse3 + MatStm1.compMolFrac[1,3] * $cse4
*/
void Flowsheet_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */ = (data->localData[0]->realVars[65] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[0] /* $cse1 variable */) + (data->localData[0]->realVars[66] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[2] /* $cse3 variable */) + (data->localData[0]->realVars[67] /* MatStm1.compMolFrac[1,3] variable */) * (data->localData[0]->realVars[3] /* $cse4 variable */);
  TRACE_POP
}
/*
equation index: 704
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,3] = MatStm1.compMolFrac[3,3] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,704};
  data->localData[0]->realVars[64] /* MatStm1.compMolFlo[3,3] variable */ = (data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 705
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,705};
  data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 706
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,706};
  data->localData[0]->realVars[63] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 707
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac = 0.003333333333333334 * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,707};
  data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */ = (0.003333333333333334) * (data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 708
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 1.0 - MatStm1.vapPhasMolFrac
*/
void Flowsheet_eqFunction_708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,708};
  data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 709
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[2] = 300.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,709};
  data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */ = (300.0) * (data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 710
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,3] = MatStm1.compMolFrac[2,3] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,710};
  data->localData[0]->realVars[61] /* MatStm1.compMolFlo[2,3] variable */ = (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 711
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,711};
  data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 712
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,712};
  data->localData[0]->realVars[60] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc721(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,721};
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
  data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */ = xloc[2];
  data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */ = xloc[3];
  data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */ = xloc[4];
  data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */ = xloc[5];
  data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */ = xloc[6];
  data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */ = xloc[7];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_681(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_682(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_683(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_684(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_685(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_686(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_687(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_688(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_689(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_690(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_691(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_692(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_693(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_694(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_695(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_696(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_697(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_698(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_699(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_700(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_701(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_702(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_703(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_704(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_705(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_706(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_707(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_708(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_709(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_710(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_711(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_712(data, threadData);
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
void initializeSparsePatternNLS721(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeStaticDataNLS721(void *inData, threadData_t *threadData, void *inSystemData)
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
  /* static nls data for MatStm1.compMolFrac[3,3] */
  sysData->nominal[i] = data->modelData->realVarsData[73].attribute /* MatStm1.compMolFrac[3,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[73].attribute /* MatStm1.compMolFrac[3,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[73].attribute /* MatStm1.compMolFrac[3,3] */.max;
  /* static nls data for MatStm1.compMolFrac[2,3] */
  sysData->nominal[i] = data->modelData->realVarsData[70].attribute /* MatStm1.compMolFrac[2,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[70].attribute /* MatStm1.compMolFrac[2,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[70].attribute /* MatStm1.compMolFrac[2,3] */.max;
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
  initializeSparsePatternNLS721(sysData);
}

void getIterationVarsNLS721(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  array[2] = data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */;
  array[3] = data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */;
  array[4] = data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */;
  array[5] = data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */;
  array[6] = data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */;
  array[7] = data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */;
}


/* inner equations */

/*
equation index: 617
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[2,2] = MatStm4.compMolFrac[2,2] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  data->localData[0]->realVars[415] /* MatStm4.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 618
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[2,1] = MatStm4.compMolFrac[2,1] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  data->localData[0]->realVars[414] /* MatStm4.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 619
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[2,3] = MatStm4.compMolFrac[2,3] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  data->localData[0]->realVars[416] /* MatStm4.compMolFlo[2,3] variable */ = (data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 620
type: SIMPLE_ASSIGN
MatStm4._liqPhasMolFrac = 0.01 * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  data->localData[0]->realVars[448] /* MatStm4.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 621
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac[1] = 1.0 - MatStm4.liqPhasMolFrac
*/
void Flowsheet_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  data->localData[0]->realVars[480] /* Mixer1.inVapPhasMolFrac[1] variable */ = 1.0 - data->localData[0]->realVars[448] /* MatStm4.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 622
type: SIMPLE_ASSIGN
MatStm4._totMolFlo[3] = 100.0 * Mixer1.inVapPhasMolFrac[1]
*/
void Flowsheet_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  data->localData[0]->realVars[475] /* MatStm4.totMolFlo[3] variable */ = (100.0) * (data->localData[0]->realVars[480] /* Mixer1.inVapPhasMolFrac[1] variable */);
  TRACE_POP
}
/*
equation index: 623
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[3,2] = MatStm4.compMolFrac[3,2] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  data->localData[0]->realVars[418] /* MatStm4.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[475] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 624
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[3,1] = MatStm4.compMolFrac[3,1] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  data->localData[0]->realVars[417] /* MatStm4.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[475] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 625
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[3,3] = MatStm4.compMolFrac[3,3] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  data->localData[0]->realVars[419] /* MatStm4.compMolFlo[3,3] variable */ = (data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[475] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc649(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,649};
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
  data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */ = xloc[2];
  data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */ = xloc[4];
  data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */ = xloc[5];
  data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */ = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_617(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_618(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_619(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_620(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_621(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_622(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_623(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_624(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_625(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[419] /* MatStm4.compMolFlo[3,3] variable */ + data->localData[0]->realVars[416] /* MatStm4.compMolFlo[2,3] variable */ - data->localData[0]->realVars[413] /* MatStm4.compMolFlo[1,3] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */ - ((data->localData[0]->realVars[364] /* MatStm4.K[3] variable */) * (data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */)):data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */);
  }
  res[1] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[363] /* MatStm4.K[2] variable */) * (data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */)):data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */);
  }
  res[2] = tmp7;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  res[3] = (tmp8?data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */ + data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */ + data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */ - 1.0:data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */ + data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */ + data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */ - 1.0);

  tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp10 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp12 = (tmp10?data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[362] /* MatStm4.K[1] variable */) * (data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */)):data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */);
  }
  res[4] = tmp12;

  res[5] = data->localData[0]->realVars[417] /* MatStm4.compMolFlo[3,1] variable */ + data->localData[0]->realVars[414] /* MatStm4.compMolFlo[2,1] variable */ - data->localData[0]->realVars[411] /* MatStm4.compMolFlo[1,1] variable */;

  res[6] = data->localData[0]->realVars[418] /* MatStm4.compMolFlo[3,2] variable */ + data->localData[0]->realVars[415] /* MatStm4.compMolFlo[2,2] variable */ - data->localData[0]->realVars[412] /* MatStm4.compMolFlo[1,2] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS649(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {0,5,6,3,4,5,3,4,5,2,3,6,2,3,6,0,1,3,0,1,3};
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
void initializeStaticDataNLS649(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm4.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[474].attribute /* MatStm4.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[474].attribute /* MatStm4.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[474].attribute /* MatStm4.totMolFlo[2] */.max;
  /* static nls data for MatStm4.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[423].attribute /* MatStm4.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[423].attribute /* MatStm4.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[423].attribute /* MatStm4.compMolFrac[2,1] */.max;
  /* static nls data for MatStm4.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[426].attribute /* MatStm4.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[426].attribute /* MatStm4.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[426].attribute /* MatStm4.compMolFrac[3,1] */.max;
  /* static nls data for MatStm4.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[427].attribute /* MatStm4.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[427].attribute /* MatStm4.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[427].attribute /* MatStm4.compMolFrac[3,2] */.max;
  /* static nls data for MatStm4.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[424].attribute /* MatStm4.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[424].attribute /* MatStm4.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[424].attribute /* MatStm4.compMolFrac[2,2] */.max;
  /* static nls data for MatStm4.compMolFrac[3,3] */
  sysData->nominal[i] = data->modelData->realVarsData[428].attribute /* MatStm4.compMolFrac[3,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[428].attribute /* MatStm4.compMolFrac[3,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[428].attribute /* MatStm4.compMolFrac[3,3] */.max;
  /* static nls data for MatStm4.compMolFrac[2,3] */
  sysData->nominal[i] = data->modelData->realVarsData[425].attribute /* MatStm4.compMolFrac[2,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[425].attribute /* MatStm4.compMolFrac[2,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[425].attribute /* MatStm4.compMolFrac[2,3] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS649(sysData);
}

void getIterationVarsNLS649(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */;
  array[3] = data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */;
  array[5] = data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */;
  array[6] = data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */;
}


/* inner equations */

/*
equation index: 550
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  data->localData[0]->realVars[296] /* MatStm3.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 551
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  data->localData[0]->realVars[297] /* MatStm3.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 552
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,3] = MatStm3.compMolFrac[2,3] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  data->localData[0]->realVars[298] /* MatStm3.compMolFlo[2,3] variable */ = (data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 553
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac = 0.01 * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 554
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac[2] = 1.0 - MatStm3.liqPhasMolFrac
*/
void Flowsheet_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  data->localData[0]->realVars[481] /* Mixer1.inVapPhasMolFrac[2] variable */ = 1.0 - data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 555
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[3] = 100.0 * Mixer1.inVapPhasMolFrac[2]
*/
void Flowsheet_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */ = (100.0) * (data->localData[0]->realVars[481] /* Mixer1.inVapPhasMolFrac[2] variable */);
  TRACE_POP
}
/*
equation index: 556
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->localData[0]->realVars[299] /* MatStm3.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 557
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->localData[0]->realVars[300] /* MatStm3.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 558
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,3] = MatStm3.compMolFrac[3,3] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  data->localData[0]->realVars[301] /* MatStm3.compMolFlo[3,3] variable */ = (data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc582(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,582};
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
  data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */ = xloc[1];
  data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */ = xloc[2];
  data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */ = xloc[3];
  data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */ = xloc[4];
  data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */ = xloc[5];
  data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */ = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_550(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_551(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_552(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_553(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_554(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_555(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_556(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_557(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_558(data, threadData);
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
  res[2] = tmp7;

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
  res[3] = tmp11;

  tmp12 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  res[4] = (tmp12?data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */ + data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */ + data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */ - 1.0:data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */ + data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */ + data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */ - 1.0);

  res[5] = data->localData[0]->realVars[300] /* MatStm3.compMolFlo[3,2] variable */ + data->localData[0]->realVars[297] /* MatStm3.compMolFlo[2,2] variable */ - data->localData[0]->realVars[294] /* MatStm3.compMolFlo[1,2] variable */;

  res[6] = data->localData[0]->realVars[299] /* MatStm3.compMolFlo[3,1] variable */ + data->localData[0]->realVars[296] /* MatStm3.compMolFlo[2,1] variable */ - data->localData[0]->realVars[293] /* MatStm3.compMolFlo[1,1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS582(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {1,5,6,2,4,5,3,4,6,3,4,6,2,4,5,0,1,4,0,1,4};
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
void initializeStaticDataNLS582(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm3.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[356].attribute /* MatStm3.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[356].attribute /* MatStm3.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[356].attribute /* MatStm3.totMolFlo[2] */.max;
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
  /* static nls data for MatStm3.compMolFrac[2,3] */
  sysData->nominal[i] = data->modelData->realVarsData[307].attribute /* MatStm3.compMolFrac[2,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[307].attribute /* MatStm3.compMolFrac[2,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[307].attribute /* MatStm3.compMolFrac[2,3] */.max;
  /* static nls data for MatStm3.compMolFrac[3,3] */
  sysData->nominal[i] = data->modelData->realVarsData[310].attribute /* MatStm3.compMolFrac[3,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[310].attribute /* MatStm3.compMolFrac[3,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[310].attribute /* MatStm3.compMolFrac[3,3] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS582(sysData);
}

void getIterationVarsNLS582(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */;
  array[2] = data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */;
  array[3] = data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */;
  array[4] = data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */;
  array[5] = data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */;
  array[6] = data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */;
}


/* inner equations */

/*
equation index: 483
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  data->localData[0]->realVars[178] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 484
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,3] = MatStm2.compMolFrac[2,3] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  data->localData[0]->realVars[180] /* MatStm2.compMolFlo[2,3] variable */ = (data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 485
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  data->localData[0]->realVars[179] /* MatStm2.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 486
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac = 0.01 * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 487
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac[3] = 1.0 - MatStm2.liqPhasMolFrac
*/
void Flowsheet_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->localData[0]->realVars[482] /* Mixer1.inVapPhasMolFrac[3] variable */ = 1.0 - data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 488
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[3] = 100.0 * Mixer1.inVapPhasMolFrac[3]
*/
void Flowsheet_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */ = (100.0) * (data->localData[0]->realVars[482] /* Mixer1.inVapPhasMolFrac[3] variable */);
  TRACE_POP
}
/*
equation index: 489
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  data->localData[0]->realVars[181] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 490
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,3] = MatStm2.compMolFrac[3,3] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->localData[0]->realVars[183] /* MatStm2.compMolFlo[3,3] variable */ = (data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 491
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  data->localData[0]->realVars[182] /* MatStm2.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc515(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,515};
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
  data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */ = xloc[4];
  data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */ = xloc[5];
  data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */ = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_483(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_484(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_485(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_486(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_487(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_488(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_489(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_490(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_491(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[182] /* MatStm2.compMolFlo[3,2] variable */ + data->localData[0]->realVars[179] /* MatStm2.compMolFlo[2,2] variable */ - data->localData[0]->realVars[176] /* MatStm2.compMolFlo[1,2] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[127] /* MatStm2.K[2] variable */) * (data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */)):data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */);
  }
  res[1] = tmp3;

  res[2] = data->localData[0]->realVars[183] /* MatStm2.compMolFlo[3,3] variable */ + data->localData[0]->realVars[180] /* MatStm2.compMolFlo[2,3] variable */ - data->localData[0]->realVars[177] /* MatStm2.compMolFlo[1,3] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */ - ((data->localData[0]->realVars[128] /* MatStm2.K[3] variable */) * (data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */)):data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */);
  }
  res[3] = tmp7;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  res[4] = (tmp8?data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */ + data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */ + data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */ - 1.0:data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */ + data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */ + data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */ - 1.0);

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
  res[5] = tmp12;

  res[6] = data->localData[0]->realVars[181] /* MatStm2.compMolFlo[3,1] variable */ + data->localData[0]->realVars[178] /* MatStm2.compMolFlo[2,1] variable */ - data->localData[0]->realVars[175] /* MatStm2.compMolFlo[1,1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS515(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {0,2,6,4,5,6,4,5,6,2,3,4,2,3,4,0,1,4,0,1,4};
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
void initializeStaticDataNLS515(void *inData, threadData_t *threadData, void *inSystemData)
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
  /* static nls data for MatStm2.compMolFrac[2,3] */
  sysData->nominal[i] = data->modelData->realVarsData[189].attribute /* MatStm2.compMolFrac[2,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[189].attribute /* MatStm2.compMolFrac[2,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[189].attribute /* MatStm2.compMolFrac[2,3] */.max;
  /* static nls data for MatStm2.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[191].attribute /* MatStm2.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[191].attribute /* MatStm2.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[191].attribute /* MatStm2.compMolFrac[3,2] */.max;
  /* static nls data for MatStm2.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[188].attribute /* MatStm2.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[188].attribute /* MatStm2.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[188].attribute /* MatStm2.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS515(sysData);
}

void getIterationVarsNLS515(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */;
  array[2] = data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */;
  array[3] = data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */;
  array[4] = data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */;
  array[5] = data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */;
  array[6] = data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */;
}


/* inner equations */

/*
equation index: 307
type: SIMPLE_ASSIGN
MatStm1._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[1].VP[1], MatStm1.comp[1].VP[2], MatStm1.comp[1].VP[3], MatStm1.comp[1].VP[4], MatStm1.comp[1].VP[5], MatStm1.comp[1].VP[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[399], (modelica_real)data->simulationInfo->realParameter[400], (modelica_real)data->simulationInfo->realParameter[401], (modelica_real)data->simulationInfo->realParameter[402], (modelica_real)data->simulationInfo->realParameter[403], (modelica_real)data->simulationInfo->realParameter[404]);
  data->localData[0]->realVars[16] /* MatStm1.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 308
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270], (modelica_real)data->simulationInfo->realParameter[271], (modelica_real)data->simulationInfo->realParameter[272]);
  data->localData[0]->realVars[41] /* MatStm1.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[372], tmp0, tmp1, data->simulationInfo->realParameter[387], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 309
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[1].SH, {MatStm1.comp[1].VapCp[1], MatStm1.comp[1].VapCp[2], MatStm1.comp[1].VapCp[3], MatStm1.comp[1].VapCp[4], MatStm1.comp[1].VapCp[5], MatStm1.comp[1].VapCp[6]}, {MatStm1.comp[1].HOV[1], MatStm1.comp[1].HOV[2], MatStm1.comp[1].HOV[3], MatStm1.comp[1].HOV[4], MatStm1.comp[1].HOV[5], MatStm1.comp[1].HOV[6]}, MatStm1.comp[1].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421], (modelica_real)data->simulationInfo->realParameter[422]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[267], (modelica_real)data->simulationInfo->realParameter[268], (modelica_real)data->simulationInfo->realParameter[269], (modelica_real)data->simulationInfo->realParameter[270], (modelica_real)data->simulationInfo->realParameter[271], (modelica_real)data->simulationInfo->realParameter[272]);
  data->localData[0]->realVars[44] /* MatStm1.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[372], tmp0, tmp1, data->simulationInfo->realParameter[387], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 310
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[273], (modelica_real)data->simulationInfo->realParameter[274], (modelica_real)data->simulationInfo->realParameter[275], (modelica_real)data->simulationInfo->realParameter[276], (modelica_real)data->simulationInfo->realParameter[277], (modelica_real)data->simulationInfo->realParameter[278]);
  data->localData[0]->realVars[42] /* MatStm1.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[373], tmp0, tmp1, data->simulationInfo->realParameter[388], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 311
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[2].SH, {MatStm1.comp[2].VapCp[1], MatStm1.comp[2].VapCp[2], MatStm1.comp[2].VapCp[3], MatStm1.comp[2].VapCp[4], MatStm1.comp[2].VapCp[5], MatStm1.comp[2].VapCp[6]}, {MatStm1.comp[2].HOV[1], MatStm1.comp[2].HOV[2], MatStm1.comp[2].HOV[3], MatStm1.comp[2].HOV[4], MatStm1.comp[2].HOV[5], MatStm1.comp[2].HOV[6]}, MatStm1.comp[2].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427], (modelica_real)data->simulationInfo->realParameter[428]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[273], (modelica_real)data->simulationInfo->realParameter[274], (modelica_real)data->simulationInfo->realParameter[275], (modelica_real)data->simulationInfo->realParameter[276], (modelica_real)data->simulationInfo->realParameter[277], (modelica_real)data->simulationInfo->realParameter[278]);
  data->localData[0]->realVars[45] /* MatStm1.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[373], tmp0, tmp1, data->simulationInfo->realParameter[388], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 312
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[2,3] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm1.comp[3].SH, {MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, {MatStm1.comp[3].HOV[1], MatStm1.comp[3].HOV[2], MatStm1.comp[3].HOV[3], MatStm1.comp[3].HOV[4], MatStm1.comp[3].HOV[5], MatStm1.comp[3].HOV[6]}, MatStm1.comp[3].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[429], (modelica_real)data->simulationInfo->realParameter[430], (modelica_real)data->simulationInfo->realParameter[431], (modelica_real)data->simulationInfo->realParameter[432], (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[279], (modelica_real)data->simulationInfo->realParameter[280], (modelica_real)data->simulationInfo->realParameter[281], (modelica_real)data->simulationInfo->realParameter[282], (modelica_real)data->simulationInfo->realParameter[283], (modelica_real)data->simulationInfo->realParameter[284]);
  data->localData[0]->realVars[43] /* MatStm1.compMolEnth[2,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[374], tmp0, tmp1, data->simulationInfo->realParameter[389], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 313
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[2] = MatStm1.compMolFrac[2,1] * MatStm1.compMolEnth[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.compMolEnth[2,2] + MatStm1.compMolFrac[2,3] * MatStm1.compMolEnth[2,3]
*/
void Flowsheet_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  data->localData[0]->realVars[98] /* MatStm1.phasMolEnth[2] variable */ = (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[41] /* MatStm1.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[42] /* MatStm1.compMolEnth[2,2] variable */) + (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[43] /* MatStm1.compMolEnth[2,3] variable */);
  TRACE_POP
}
/*
equation index: 314
type: SIMPLE_ASSIGN
MatStm1._compMolEnth[3,3] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm1.comp[3].SH, {MatStm1.comp[3].VapCp[1], MatStm1.comp[3].VapCp[2], MatStm1.comp[3].VapCp[3], MatStm1.comp[3].VapCp[4], MatStm1.comp[3].VapCp[5], MatStm1.comp[3].VapCp[6]}, {MatStm1.comp[3].HOV[1], MatStm1.comp[3].HOV[2], MatStm1.comp[3].HOV[3], MatStm1.comp[3].HOV[4], MatStm1.comp[3].HOV[5], MatStm1.comp[3].HOV[6]}, MatStm1.comp[3].Tc, MatStm1.T)
*/
void Flowsheet_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[429], (modelica_real)data->simulationInfo->realParameter[430], (modelica_real)data->simulationInfo->realParameter[431], (modelica_real)data->simulationInfo->realParameter[432], (modelica_real)data->simulationInfo->realParameter[433], (modelica_real)data->simulationInfo->realParameter[434]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[279], (modelica_real)data->simulationInfo->realParameter[280], (modelica_real)data->simulationInfo->realParameter[281], (modelica_real)data->simulationInfo->realParameter[282], (modelica_real)data->simulationInfo->realParameter[283], (modelica_real)data->simulationInfo->realParameter[284]);
  data->localData[0]->realVars[46] /* MatStm1.compMolEnth[3,3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[374], tmp0, tmp1, data->simulationInfo->realParameter[389], data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 315
type: SIMPLE_ASSIGN
MatStm1._phasMolEnth[3] = MatStm1.compMolFrac[3,1] * MatStm1.compMolEnth[3,1] + MatStm1.compMolFrac[3,2] * MatStm1.compMolEnth[3,2] + MatStm1.compMolFrac[3,3] * MatStm1.compMolEnth[3,3]
*/
void Flowsheet_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->localData[0]->realVars[99] /* MatStm1.phasMolEnth[3] variable */ = (data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[44] /* MatStm1.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[45] /* MatStm1.compMolEnth[3,2] variable */) + (data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[46] /* MatStm1.compMolEnth[3,3] variable */);
  TRACE_POP
}
/*
equation index: 316
type: SIMPLE_ASSIGN
MatStm1._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[2].VP[1], MatStm1.comp[2].VP[2], MatStm1.comp[2].VP[3], MatStm1.comp[2].VP[4], MatStm1.comp[2].VP[5], MatStm1.comp[2].VP[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[405], (modelica_real)data->simulationInfo->realParameter[406], (modelica_real)data->simulationInfo->realParameter[407], (modelica_real)data->simulationInfo->realParameter[408], (modelica_real)data->simulationInfo->realParameter[409], (modelica_real)data->simulationInfo->realParameter[410]);
  data->localData[0]->realVars[17] /* MatStm1.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 317
type: SIMPLE_ASSIGN
MatStm1._Psat[3] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm1.comp[3].VP[1], MatStm1.comp[3].VP[2], MatStm1.comp[3].VP[3], MatStm1.comp[3].VP[4], MatStm1.comp[3].VP[5], MatStm1.comp[3].VP[6]}, MatStm1.T)
*/
void Flowsheet_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[411], (modelica_real)data->simulationInfo->realParameter[412], (modelica_real)data->simulationInfo->realParameter[413], (modelica_real)data->simulationInfo->realParameter[414], (modelica_real)data->simulationInfo->realParameter[415], (modelica_real)data->simulationInfo->realParameter[416]);
  data->localData[0]->realVars[18] /* MatStm1.Psat[3] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[19] /* MatStm1.T variable */);
  TRACE_POP
}
/*
equation index: 318
type: SIMPLE_ASSIGN
MatStm1._Pbubl = MatStm1.compMolFrac[1,1] * exp(MatStm1.comp[1].VP[2] + MatStm1.comp[1].VP[3] / MatStm1.T + MatStm1.comp[1].VP[4] * log(MatStm1.T) + MatStm1.comp[1].VP[5] * MatStm1.T ^ MatStm1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp(MatStm1.comp[2].VP[2] + MatStm1.comp[2].VP[3] / MatStm1.T + MatStm1.comp[2].VP[4] * log(MatStm1.T) + MatStm1.comp[2].VP[5] * MatStm1.T ^ MatStm1.comp[2].VP[6]) + MatStm1.compMolFrac[1,3] * exp(MatStm1.comp[3].VP[2] + MatStm1.comp[3].VP[3] / MatStm1.T + MatStm1.comp[3].VP[4] * log(MatStm1.T) + MatStm1.comp[3].VP[5] * MatStm1.T ^ MatStm1.comp[3].VP[6])
*/
void Flowsheet_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
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
equation index: 319
type: SIMPLE_ASSIGN
MatStm1._Pdew = 1.0 / (MatStm1.compMolFrac[1,1] * exp((-MatStm1.comp[1].VP[2]) - MatStm1.comp[1].VP[3] / MatStm1.T - MatStm1.comp[1].VP[4] * log(MatStm1.T) - MatStm1.comp[1].VP[5] * MatStm1.T ^ MatStm1.comp[1].VP[6]) + MatStm1.compMolFrac[1,2] * exp((-MatStm1.comp[2].VP[2]) - MatStm1.comp[2].VP[3] / MatStm1.T - MatStm1.comp[2].VP[4] * log(MatStm1.T) - MatStm1.comp[2].VP[5] * MatStm1.T ^ MatStm1.comp[2].VP[6]) + MatStm1.compMolFrac[1,3] * exp((-MatStm1.comp[3].VP[2]) - MatStm1.comp[3].VP[3] / MatStm1.T - MatStm1.comp[3].VP[4] * log(MatStm1.T) - MatStm1.comp[3].VP[5] * MatStm1.T ^ MatStm1.comp[3].VP[6]))
*/
void Flowsheet_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
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
equation index: 320
type: SIMPLE_ASSIGN
MatStm1._K[1] = 9.869232667160129e-006 * MatStm1.Psat[1]
*/
void Flowsheet_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->localData[0]->realVars[7] /* MatStm1.K[1] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[16] /* MatStm1.Psat[1] variable */);
  TRACE_POP
}
/*
equation index: 321
type: SIMPLE_ASSIGN
MatStm1._K[2] = 9.869232667160129e-006 * MatStm1.Psat[2]
*/
void Flowsheet_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->localData[0]->realVars[8] /* MatStm1.K[2] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[17] /* MatStm1.Psat[2] variable */);
  TRACE_POP
}
/*
equation index: 322
type: SIMPLE_ASSIGN
MatStm1._K[3] = 9.869232667160129e-006 * MatStm1.Psat[3]
*/
void Flowsheet_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->localData[0]->realVars[9] /* MatStm1.K[3] variable */ = (9.869232667160129e-006) * (data->localData[0]->realVars[18] /* MatStm1.Psat[3] variable */);
  TRACE_POP
}
/*
equation index: 323
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 324
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,3] = MatStm1.compMolFrac[3,3] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->localData[0]->realVars[64] /* MatStm1.compMolFlo[3,3] variable */ = (data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 325
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  data->localData[0]->realVars[63] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 326
type: SIMPLE_ASSIGN
MatStm1._vapPhasMolFrac = 0.003333333333333334 * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */ = (0.003333333333333334) * (data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 327
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 1.0 - MatStm1.vapPhasMolFrac
*/
void Flowsheet_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 328
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[2] = 300.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */ = (300.0) * (data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 329
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 330
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,3] = MatStm1.compMolFrac[2,3] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->localData[0]->realVars[61] /* MatStm1.compMolFlo[2,3] variable */ = (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 331
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->localData[0]->realVars[60] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc340(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,340};
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
  data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */ = xloc[2];
  data->localData[0]->realVars[19] /* MatStm1.T variable */ = xloc[3];
  data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */ = xloc[4];
  data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */ = xloc[5];
  data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */ = xloc[6];
  data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */ = xloc[7];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_307(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_308(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_309(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_310(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_311(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_312(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_313(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_314(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_315(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_316(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_317(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_318(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_319(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_320(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_321(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_322(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_323(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_324(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_325(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_326(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_327(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_328(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_329(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_330(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_331(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[63] /* MatStm1.compMolFlo[3,2] variable */ + data->localData[0]->realVars[60] /* MatStm1.compMolFlo[2,2] variable */ - data->localData[0]->realVars[57] /* MatStm1.compMolFlo[1,2] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[8] /* MatStm1.K[2] variable */) * (data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */)):data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */);
  }
  res[1] = tmp3;

  res[2] = data->localData[0]->realVars[64] /* MatStm1.compMolFlo[3,3] variable */ + data->localData[0]->realVars[61] /* MatStm1.compMolFlo[2,3] variable */ - data->localData[0]->realVars[58] /* MatStm1.compMolFlo[1,3] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[15] /* MatStm1.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */ - ((data->localData[0]->realVars[9] /* MatStm1.K[3] variable */) * (data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */)):data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */);
  }
  res[3] = tmp7;

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

  tmp12 = GreaterEq(101325.0,data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */);
  res[5] = (tmp12?data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */ + data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */ + data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */ - 1.0:data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */ + data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */ + data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */ - 1.0);

  res[6] = data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[56] /* MatStm1.compMolFlo[1,1] variable */;

  res[7] = (data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */) * (data->localData[0]->realVars[99] /* MatStm1.phasMolEnth[3] variable */) + (data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */) * (data->localData[0]->realVars[98] /* MatStm1.phasMolEnth[2] variable */) - data->localData[0]->realVars[97] /* MatStm1.phasMolEnth[1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS340(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+8] = {0,4,4,4,5,4,4,4,4};
  const int rowIndex[33] = {0,2,6,7,4,5,6,7,4,5,6,7,1,3,4,5,7,2,3,5,7,2,3,5,7,0,1,5,7,0,1,5,7};
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
void initializeStaticDataNLS340(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[120].attribute /* MatStm1.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[120].attribute /* MatStm1.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[120].attribute /* MatStm1.totMolFlo[3] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[68].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[68].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[68].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[71].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[71].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[71].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* static nls data for MatStm1.T */
  sysData->nominal[i] = data->modelData->realVarsData[19].attribute /* MatStm1.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[19].attribute /* MatStm1.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[19].attribute /* MatStm1.T */.max;
  /* static nls data for MatStm1.compMolFrac[3,3] */
  sysData->nominal[i] = data->modelData->realVarsData[73].attribute /* MatStm1.compMolFrac[3,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[73].attribute /* MatStm1.compMolFrac[3,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[73].attribute /* MatStm1.compMolFrac[3,3] */.max;
  /* static nls data for MatStm1.compMolFrac[2,3] */
  sysData->nominal[i] = data->modelData->realVarsData[70].attribute /* MatStm1.compMolFrac[2,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[70].attribute /* MatStm1.compMolFrac[2,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[70].attribute /* MatStm1.compMolFrac[2,3] */.max;
  /* static nls data for MatStm1.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[69].attribute /* MatStm1.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[69].attribute /* MatStm1.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[69].attribute /* MatStm1.compMolFrac[2,2] */.max;
  /* static nls data for MatStm1.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[72].attribute /* MatStm1.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[72].attribute /* MatStm1.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[72].attribute /* MatStm1.compMolFrac[3,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS340(sysData);
}

void getIterationVarsNLS340(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */;
  array[3] = data->localData[0]->realVars[19] /* MatStm1.T variable */;
  array[4] = data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */;
  array[5] = data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */;
  array[6] = data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */;
  array[7] = data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */;
}


/* inner equations */

/*
equation index: 255
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[2,1] = MatStm4.compMolFrac[2,1] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->localData[0]->realVars[414] /* MatStm4.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 256
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[2,3] = MatStm4.compMolFrac[2,3] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->localData[0]->realVars[416] /* MatStm4.compMolFlo[2,3] variable */ = (data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 257
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[2,2] = MatStm4.compMolFrac[2,2] * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->localData[0]->realVars[415] /* MatStm4.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 258
type: SIMPLE_ASSIGN
MatStm4._liqPhasMolFrac = 0.01 * MatStm4.totMolFlo[2]
*/
void Flowsheet_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->localData[0]->realVars[448] /* MatStm4.liqPhasMolFrac variable */ = (0.01) * (data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 259
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac[1] = 1.0 - MatStm4.liqPhasMolFrac
*/
void Flowsheet_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->localData[0]->realVars[480] /* Mixer1.inVapPhasMolFrac[1] variable */ = 1.0 - data->localData[0]->realVars[448] /* MatStm4.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 260
type: SIMPLE_ASSIGN
MatStm4._totMolFlo[3] = 100.0 * Mixer1.inVapPhasMolFrac[1]
*/
void Flowsheet_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->localData[0]->realVars[475] /* MatStm4.totMolFlo[3] variable */ = (100.0) * (data->localData[0]->realVars[480] /* Mixer1.inVapPhasMolFrac[1] variable */);
  TRACE_POP
}
/*
equation index: 261
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[3,1] = MatStm4.compMolFrac[3,1] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->localData[0]->realVars[417] /* MatStm4.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[475] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 262
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[3,3] = MatStm4.compMolFrac[3,3] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->localData[0]->realVars[419] /* MatStm4.compMolFlo[3,3] variable */ = (data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[475] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 263
type: SIMPLE_ASSIGN
MatStm4._compMolFlo[3,2] = MatStm4.compMolFrac[3,2] * MatStm4.totMolFlo[3]
*/
void Flowsheet_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->localData[0]->realVars[418] /* MatStm4.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[475] /* MatStm4.totMolFlo[3] variable */);
  TRACE_POP
}

void residualFunc287(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,287};
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
  data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */ = xloc[0];
  data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */ = xloc[1];
  data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */ = xloc[2];
  data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */ = xloc[3];
  data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */ = xloc[4];
  data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */ = xloc[5];
  data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */ = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_255(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_256(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_257(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_258(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_259(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_260(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_261(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_262(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_263(data, threadData);
  /* body */
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */ - ((data->localData[0]->realVars[364] /* MatStm4.K[3] variable */) * (data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */)):data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */);
  }
  res[0] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[363] /* MatStm4.K[2] variable */) * (data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */)):data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */);
  }
  res[1] = tmp7;

  res[2] = data->localData[0]->realVars[418] /* MatStm4.compMolFlo[3,2] variable */ + data->localData[0]->realVars[415] /* MatStm4.compMolFlo[2,2] variable */ - data->localData[0]->realVars[412] /* MatStm4.compMolFlo[1,2] variable */;

  res[3] = data->localData[0]->realVars[419] /* MatStm4.compMolFlo[3,3] variable */ + data->localData[0]->realVars[416] /* MatStm4.compMolFlo[2,3] variable */ - data->localData[0]->realVars[413] /* MatStm4.compMolFlo[1,3] variable */;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  res[4] = (tmp8?data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */ + data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */ + data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */ - 1.0:data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */ + data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */ + data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */ - 1.0);

  res[5] = data->localData[0]->realVars[417] /* MatStm4.compMolFlo[3,1] variable */ + data->localData[0]->realVars[414] /* MatStm4.compMolFlo[2,1] variable */ - data->localData[0]->realVars[411] /* MatStm4.compMolFlo[1,1] variable */;

  tmp9 = GreaterEq(101325.0,data->localData[0]->realVars[369] /* MatStm4.Pbubl variable */);
  tmp11 = (modelica_boolean)tmp9;
  if(tmp11)
  {
    tmp12 = data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp10 = GreaterEq(101325.0,data->localData[0]->realVars[370] /* MatStm4.Pdew variable */);
    tmp12 = (tmp10?data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[362] /* MatStm4.K[1] variable */) * (data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */)):data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */);
  }
  res[6] = tmp12;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS287(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {2,3,5,4,5,6,4,5,6,0,3,4,1,2,4,1,2,4,0,3,4};
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
void initializeStaticDataNLS287(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm4.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[474].attribute /* MatStm4.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[474].attribute /* MatStm4.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[474].attribute /* MatStm4.totMolFlo[2] */.max;
  /* static nls data for MatStm4.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[426].attribute /* MatStm4.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[426].attribute /* MatStm4.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[426].attribute /* MatStm4.compMolFrac[3,1] */.max;
  /* static nls data for MatStm4.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[423].attribute /* MatStm4.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[423].attribute /* MatStm4.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[423].attribute /* MatStm4.compMolFrac[2,1] */.max;
  /* static nls data for MatStm4.compMolFrac[3,3] */
  sysData->nominal[i] = data->modelData->realVarsData[428].attribute /* MatStm4.compMolFrac[3,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[428].attribute /* MatStm4.compMolFrac[3,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[428].attribute /* MatStm4.compMolFrac[3,3] */.max;
  /* static nls data for MatStm4.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[427].attribute /* MatStm4.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[427].attribute /* MatStm4.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[427].attribute /* MatStm4.compMolFrac[3,2] */.max;
  /* static nls data for MatStm4.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[424].attribute /* MatStm4.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[424].attribute /* MatStm4.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[424].attribute /* MatStm4.compMolFrac[2,2] */.max;
  /* static nls data for MatStm4.compMolFrac[2,3] */
  sysData->nominal[i] = data->modelData->realVarsData[425].attribute /* MatStm4.compMolFrac[2,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[425].attribute /* MatStm4.compMolFrac[2,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[425].attribute /* MatStm4.compMolFrac[2,3] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS287(sysData);
}

void getIterationVarsNLS287(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */;
  array[1] = data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */;
  array[2] = data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */;
  array[3] = data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */;
  array[4] = data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */;
  array[5] = data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */;
  array[6] = data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */;
}


/* inner equations */

/*
equation index: 188
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  data->localData[0]->realVars[299] /* MatStm3.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 189
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->localData[0]->realVars[300] /* MatStm3.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 190
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,3] = MatStm3.compMolFrac[3,3] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  data->localData[0]->realVars[301] /* MatStm3.compMolFlo[3,3] variable */ = (data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 191
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac[2] = 0.01 * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->localData[0]->realVars[481] /* Mixer1.inVapPhasMolFrac[2] variable */ = (0.01) * (data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 192
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac = 1.0 - Mixer1.inVapPhasMolFrac[2]
*/
void Flowsheet_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[481] /* Mixer1.inVapPhasMolFrac[2] variable */;
  TRACE_POP
}
/*
equation index: 193
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[2] = 100.0 * MatStm3.liqPhasMolFrac
*/
void Flowsheet_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */ = (100.0) * (data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 194
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->localData[0]->realVars[297] /* MatStm3.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 195
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->localData[0]->realVars[296] /* MatStm3.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 196
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,3] = MatStm3.compMolFrac[2,3] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->localData[0]->realVars[298] /* MatStm3.compMolFlo[2,3] variable */ = (data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc220(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,220};
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
  data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */ = xloc[1];
  data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */ = xloc[2];
  data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */ = xloc[3];
  data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */ = xloc[4];
  data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */ = xloc[5];
  data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */ = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_188(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_189(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_190(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_191(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_192(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_193(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_194(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_195(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_196(data, threadData);
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
  res[2] = tmp7;

  res[3] = data->localData[0]->realVars[299] /* MatStm3.compMolFlo[3,1] variable */ + data->localData[0]->realVars[296] /* MatStm3.compMolFlo[2,1] variable */ - data->localData[0]->realVars[293] /* MatStm3.compMolFlo[1,1] variable */;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[251] /* MatStm3.Pbubl variable */);
  res[4] = (tmp8?data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */ + data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */ + data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */ - 1.0:data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */ + data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */ + data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */ - 1.0);

  res[5] = data->localData[0]->realVars[300] /* MatStm3.compMolFlo[3,2] variable */ + data->localData[0]->realVars[297] /* MatStm3.compMolFlo[2,2] variable */ - data->localData[0]->realVars[294] /* MatStm3.compMolFlo[1,2] variable */;

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
void initializeSparsePatternNLS220(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {0,3,5,3,4,6,2,4,5,3,4,6,2,4,5,0,1,4,0,1,4};
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
void initializeStaticDataNLS220(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm3.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[357].attribute /* MatStm3.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[357].attribute /* MatStm3.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[357].attribute /* MatStm3.totMolFlo[3] */.max;
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
  /* static nls data for MatStm3.compMolFrac[3,3] */
  sysData->nominal[i] = data->modelData->realVarsData[310].attribute /* MatStm3.compMolFrac[3,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[310].attribute /* MatStm3.compMolFrac[3,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[310].attribute /* MatStm3.compMolFrac[3,3] */.max;
  /* static nls data for MatStm3.compMolFrac[2,3] */
  sysData->nominal[i] = data->modelData->realVarsData[307].attribute /* MatStm3.compMolFrac[2,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[307].attribute /* MatStm3.compMolFrac[2,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[307].attribute /* MatStm3.compMolFrac[2,3] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS220(sysData);
}

void getIterationVarsNLS220(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */;
  array[2] = data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */;
  array[3] = data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */;
  array[4] = data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */;
  array[5] = data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */;
  array[6] = data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */;
}


/* inner equations */

/*
equation index: 121
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->localData[0]->realVars[181] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 122
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  data->localData[0]->realVars[182] /* MatStm2.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 123
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,3] = MatStm2.compMolFrac[3,3] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->localData[0]->realVars[183] /* MatStm2.compMolFlo[3,3] variable */ = (data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 124
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac[3] = 0.01 * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->localData[0]->realVars[482] /* Mixer1.inVapPhasMolFrac[3] variable */ = (0.01) * (data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 125
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac = 1.0 - Mixer1.inVapPhasMolFrac[3]
*/
void Flowsheet_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[482] /* Mixer1.inVapPhasMolFrac[3] variable */;
  TRACE_POP
}
/*
equation index: 126
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[2] = 100.0 * MatStm2.liqPhasMolFrac
*/
void Flowsheet_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */ = (100.0) * (data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 127
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->localData[0]->realVars[178] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 128
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,3] = MatStm2.compMolFrac[2,3] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->localData[0]->realVars[180] /* MatStm2.compMolFlo[2,3] variable */ = (data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 129
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->localData[0]->realVars[179] /* MatStm2.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}

void residualFunc153(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,153};
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
  data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */ = xloc[0];
  data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */ = xloc[1];
  data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */ = xloc[2];
  data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */ = xloc[4];
  data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */ = xloc[5];
  data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */ = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_121(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_122(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_123(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_124(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_125(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_126(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_127(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_128(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_129(data, threadData);
  /* body */
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[127] /* MatStm2.K[2] variable */) * (data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */)):data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[182] /* MatStm2.compMolFlo[3,2] variable */ + data->localData[0]->realVars[179] /* MatStm2.compMolFlo[2,2] variable */ - data->localData[0]->realVars[176] /* MatStm2.compMolFlo[1,2] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[133] /* MatStm2.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[134] /* MatStm2.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */ - ((data->localData[0]->realVars[128] /* MatStm2.K[3] variable */) * (data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */)):data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */);
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
void initializeSparsePatternNLS153(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,3,3,3,3,3,3,3};
  const int rowIndex[21] = {1,3,5,4,5,6,4,5,6,0,1,4,2,3,4,2,3,4,0,1,4};
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
void initializeStaticDataNLS153(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm2.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[239].attribute /* MatStm2.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[239].attribute /* MatStm2.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[239].attribute /* MatStm2.totMolFlo[3] */.max;
  /* static nls data for MatStm2.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[187].attribute /* MatStm2.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[187].attribute /* MatStm2.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[187].attribute /* MatStm2.compMolFrac[2,1] */.max;
  /* static nls data for MatStm2.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[190].attribute /* MatStm2.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[190].attribute /* MatStm2.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[190].attribute /* MatStm2.compMolFrac[3,1] */.max;
  /* static nls data for MatStm2.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[191].attribute /* MatStm2.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[191].attribute /* MatStm2.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[191].attribute /* MatStm2.compMolFrac[3,2] */.max;
  /* static nls data for MatStm2.compMolFrac[2,3] */
  sysData->nominal[i] = data->modelData->realVarsData[189].attribute /* MatStm2.compMolFrac[2,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[189].attribute /* MatStm2.compMolFrac[2,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[189].attribute /* MatStm2.compMolFrac[2,3] */.max;
  /* static nls data for MatStm2.compMolFrac[3,3] */
  sysData->nominal[i] = data->modelData->realVarsData[192].attribute /* MatStm2.compMolFrac[3,3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[192].attribute /* MatStm2.compMolFrac[3,3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[192].attribute /* MatStm2.compMolFrac[3,3] */.max;
  /* static nls data for MatStm2.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[188].attribute /* MatStm2.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[188].attribute /* MatStm2.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[188].attribute /* MatStm2.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS153(sysData);
}

void getIterationVarsNLS153(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */;
  array[1] = data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */;
  array[2] = data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */;
  array[3] = data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */;
  array[5] = data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */;
  array[6] = data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void Flowsheet_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[7].equationIndex = 721;
  nonLinearSystemData[7].size = 8;
  nonLinearSystemData[7].homotopySupport = 0;
  nonLinearSystemData[7].mixedSystem = 1;
  nonLinearSystemData[7].residualFunc = residualFunc721;
  nonLinearSystemData[7].strictTearingFunctionCall = NULL;
  nonLinearSystemData[7].analyticalJacobianColumn = NULL;
  nonLinearSystemData[7].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[7].jacobianIndex = -1;
  nonLinearSystemData[7].initializeStaticNLSData = initializeStaticDataNLS721;
  nonLinearSystemData[7].getIterationVars = getIterationVarsNLS721;
  nonLinearSystemData[7].checkConstraints = NULL;
  
  
  nonLinearSystemData[6].equationIndex = 649;
  nonLinearSystemData[6].size = 7;
  nonLinearSystemData[6].homotopySupport = 0;
  nonLinearSystemData[6].mixedSystem = 0;
  nonLinearSystemData[6].residualFunc = residualFunc649;
  nonLinearSystemData[6].strictTearingFunctionCall = NULL;
  nonLinearSystemData[6].analyticalJacobianColumn = Flowsheet_functionJacNLSJac6_column;
  nonLinearSystemData[6].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac6;
  nonLinearSystemData[6].jacobianIndex = 5 /*jacInx*/;
  nonLinearSystemData[6].initializeStaticNLSData = initializeStaticDataNLS649;
  nonLinearSystemData[6].getIterationVars = getIterationVarsNLS649;
  nonLinearSystemData[6].checkConstraints = NULL;
  
  
  nonLinearSystemData[5].equationIndex = 582;
  nonLinearSystemData[5].size = 7;
  nonLinearSystemData[5].homotopySupport = 0;
  nonLinearSystemData[5].mixedSystem = 0;
  nonLinearSystemData[5].residualFunc = residualFunc582;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = Flowsheet_functionJacNLSJac5_column;
  nonLinearSystemData[5].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac5;
  nonLinearSystemData[5].jacobianIndex = 4 /*jacInx*/;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS582;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS582;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  
  nonLinearSystemData[4].equationIndex = 515;
  nonLinearSystemData[4].size = 7;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 0;
  nonLinearSystemData[4].residualFunc = residualFunc515;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = Flowsheet_functionJacNLSJac4_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac4;
  nonLinearSystemData[4].jacobianIndex = 3 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS515;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS515;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 340;
  nonLinearSystemData[3].size = 8;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc340;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS340;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS340;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 287;
  nonLinearSystemData[2].size = 7;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 0;
  nonLinearSystemData[2].residualFunc = residualFunc287;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = Flowsheet_functionJacNLSJac2_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac2;
  nonLinearSystemData[2].jacobianIndex = 2 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS287;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS287;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 220;
  nonLinearSystemData[1].size = 7;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 0;
  nonLinearSystemData[1].residualFunc = residualFunc220;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = Flowsheet_functionJacNLSJac1_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac1;
  nonLinearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS220;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS220;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 153;
  nonLinearSystemData[0].size = 7;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 0;
  nonLinearSystemData[0].residualFunc = residualFunc153;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = Flowsheet_functionJacNLSJac0_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = Flowsheet_initialAnalyticJacobianNLSJac0;
  nonLinearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS153;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS153;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

