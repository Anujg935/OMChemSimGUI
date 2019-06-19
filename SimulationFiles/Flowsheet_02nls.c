/* Non Linear Systems */
#include "Flowsheet_model.h"
#include "Flowsheet_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 718
type: SIMPLE_ASSIGN
MatStm2._theta[1] = (MatStm2.compMolFrac[2,1] * MatStm2.q[1] * MatStm2.e[1,1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2] * MatStm2.e[1,2]) / (MatStm2.compMolFrac[2,1] * MatStm2.q[1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2])
*/
void Flowsheet_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  data->localData[0]->realVars[432] /* MatStm2.theta[1] variable */ = DIVISION_SIM((data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */)) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[359] /* MatStm2.e[1,2] variable */)),(data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */),"MatStm2.compMolFrac[2,1] * MatStm2.q[1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 719
type: SIMPLE_ASSIGN
MatStm2._J[1] = MatStm2.r[1] / (MatStm2.r[1] * MatStm2.compMolFrac[2,1] + MatStm2.r[2] * MatStm2.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,719};
  data->localData[0]->realVars[279] /* MatStm2.J[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[399] /* MatStm2.r[1] variable */,(data->localData[0]->realVars[399] /* MatStm2.r[1] variable */) * (data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[400] /* MatStm2.r[2] variable */) * (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */),"MatStm2.r[1] * MatStm2.compMolFrac[2,1] + MatStm2.r[2] * MatStm2.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 720
type: SIMPLE_ASSIGN
MatStm2._L[1] = MatStm2.q[1] / (MatStm2.q[1] * MatStm2.compMolFrac[2,1] + MatStm2.q[2] * MatStm2.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  data->localData[0]->realVars[287] /* MatStm2.L[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[397] /* MatStm2.q[1] variable */,(data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */),"MatStm2.q[1] * MatStm2.compMolFrac[2,1] + MatStm2.q[2] * MatStm2.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 721
type: SIMPLE_ASSIGN
MatStm2._J[2] = MatStm2.r[2] / (MatStm2.r[1] * MatStm2.compMolFrac[2,1] + MatStm2.r[2] * MatStm2.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  data->localData[0]->realVars[280] /* MatStm2.J[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[400] /* MatStm2.r[2] variable */,(data->localData[0]->realVars[399] /* MatStm2.r[1] variable */) * (data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[400] /* MatStm2.r[2] variable */) * (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */),"MatStm2.r[1] * MatStm2.compMolFrac[2,1] + MatStm2.r[2] * MatStm2.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 722
type: SIMPLE_ASSIGN
MatStm2._L[2] = MatStm2.q[2] / (MatStm2.q[1] * MatStm2.compMolFrac[2,1] + MatStm2.q[2] * MatStm2.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  data->localData[0]->realVars[288] /* MatStm2.L[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[398] /* MatStm2.q[2] variable */,(data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */),"MatStm2.q[1] * MatStm2.compMolFrac[2,1] + MatStm2.q[2] * MatStm2.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 723
type: SIMPLE_ASSIGN
MatStm2._theta[3] = (MatStm2.compMolFrac[2,1] * MatStm2.q[1] * MatStm2.e[3,1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2] * MatStm2.e[3,2]) / (MatStm2.compMolFrac[2,1] * MatStm2.q[1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2])
*/
void Flowsheet_eqFunction_723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,723};
  data->localData[0]->realVars[434] /* MatStm2.theta[3] variable */ = DIVISION_SIM((data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[362] /* MatStm2.e[3,1] variable */)) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[363] /* MatStm2.e[3,2] variable */)),(data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */),"MatStm2.compMolFrac[2,1] * MatStm2.q[1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 724
type: SIMPLE_ASSIGN
MatStm2._theta[2] = (MatStm2.compMolFrac[2,1] * MatStm2.q[1] * MatStm2.e[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2] * MatStm2.e[2,2]) / (MatStm2.compMolFrac[2,1] * MatStm2.q[1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2])
*/
void Flowsheet_eqFunction_724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,724};
  data->localData[0]->realVars[433] /* MatStm2.theta[2] variable */ = DIVISION_SIM((data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[360] /* MatStm2.e[2,1] variable */)) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[361] /* MatStm2.e[2,2] variable */)),(data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */),"MatStm2.compMolFrac[2,1] * MatStm2.q[1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 725
type: SIMPLE_ASSIGN
MatStm2._theta[4] = (MatStm2.compMolFrac[2,1] * MatStm2.q[1] * MatStm2.e[4,1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2] * MatStm2.e[4,2]) / (MatStm2.compMolFrac[2,1] * MatStm2.q[1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2])
*/
void Flowsheet_eqFunction_725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,725};
  data->localData[0]->realVars[435] /* MatStm2.theta[4] variable */ = DIVISION_SIM((data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[364] /* MatStm2.e[4,1] variable */)) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[365] /* MatStm2.e[4,2] variable */)),(data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */),"MatStm2.compMolFrac[2,1] * MatStm2.q[1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 726
type: SIMPLE_ASSIGN
$cse51 = log(MatStm2.J[1] / MatStm2.L[1])
*/
void Flowsheet_eqFunction_726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,726};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->localData[0]->realVars[279] /* MatStm2.J[1] variable */,data->localData[0]->realVars[287] /* MatStm2.L[1] variable */,"MatStm2.L[1]",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J[1] / MatStm2.L[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[58] /* $cse51 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 727
type: SIMPLE_ASSIGN
$cse53 = log(MatStm2.J[2] / MatStm2.L[2])
*/
void Flowsheet_eqFunction_727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,727};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->localData[0]->realVars[280] /* MatStm2.J[2] variable */,data->localData[0]->realVars[288] /* MatStm2.L[2] variable */,"MatStm2.L[2]",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J[2] / MatStm2.L[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[60] /* $cse53 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 728
type: SIMPLE_ASSIGN
$cse50 = log(MatStm2.J[1])
*/
void Flowsheet_eqFunction_728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,728};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[279] /* MatStm2.J[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[57] /* $cse50 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 729
type: SIMPLE_ASSIGN
MatStm2._gammac[1] = exp(1.0 + $cse50 + (-5.0) * MatStm2.q[1] * (1.0 + $cse51 - MatStm2.J[1] / MatStm2.L[1]) - MatStm2.J[1])
*/
void Flowsheet_eqFunction_729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,729};
  data->localData[0]->realVars[372] /* MatStm2.gammac[1] variable */ = exp(1.0 + data->localData[0]->realVars[57] /* $cse50 variable */ + (-5.0) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (1.0 + data->localData[0]->realVars[58] /* $cse51 variable */ - (DIVISION_SIM(data->localData[0]->realVars[279] /* MatStm2.J[1] variable */,data->localData[0]->realVars[287] /* MatStm2.L[1] variable */,"MatStm2.L[1]",equationIndexes)))) - data->localData[0]->realVars[279] /* MatStm2.J[1] variable */);
  TRACE_POP
}
/*
equation index: 730
type: SIMPLE_ASSIGN
$cse43 = log(MatStm2.gammac[1])
*/
void Flowsheet_eqFunction_730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,730};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[372] /* MatStm2.gammac[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammac[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[49] /* $cse43 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 731
type: SIMPLE_ASSIGN
$cse52 = log(MatStm2.J[2])
*/
void Flowsheet_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[280] /* MatStm2.J[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[59] /* $cse52 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 732
type: SIMPLE_ASSIGN
MatStm2._gammac[2] = exp(1.0 + $cse52 + (-5.0) * MatStm2.q[2] * (1.0 + $cse53 - MatStm2.J[2] / MatStm2.L[2]) - MatStm2.J[2])
*/
void Flowsheet_eqFunction_732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,732};
  data->localData[0]->realVars[373] /* MatStm2.gammac[2] variable */ = exp(1.0 + data->localData[0]->realVars[59] /* $cse52 variable */ + (-5.0) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (1.0 + data->localData[0]->realVars[60] /* $cse53 variable */ - (DIVISION_SIM(data->localData[0]->realVars[280] /* MatStm2.J[2] variable */,data->localData[0]->realVars[288] /* MatStm2.L[2] variable */,"MatStm2.L[2]",equationIndexes)))) - data->localData[0]->realVars[280] /* MatStm2.J[2] variable */);
  TRACE_POP
}
/*
equation index: 733
type: SIMPLE_ASSIGN
$cse45 = log(MatStm2.gammac[2])
*/
void Flowsheet_eqFunction_733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,733};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[373] /* MatStm2.gammac[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammac[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[51] /* $cse45 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 734
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[2].SH, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tc, MatStm2.T)
*/
void Flowsheet_eqFunction_734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,734};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526], (modelica_real)data->simulationInfo->realParameter[527]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427]);
  data->localData[0]->realVars[331] /* MatStm2.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[487], tmp0, tmp1, data->simulationInfo->realParameter[497], data->localData[0]->realVars[313] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 735
type: SIMPLE_ASSIGN
MatStm2._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[2].VP[1], MatStm2.comp[2].VP[2], MatStm2.comp[2].VP[3], MatStm2.comp[2].VP[4], MatStm2.comp[2].VP[5], MatStm2.comp[2].VP[6]}, MatStm2.T)
*/
void Flowsheet_eqFunction_735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,735};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[510], (modelica_real)data->simulationInfo->realParameter[511], (modelica_real)data->simulationInfo->realParameter[512], (modelica_real)data->simulationInfo->realParameter[513], (modelica_real)data->simulationInfo->realParameter[514], (modelica_real)data->simulationInfo->realParameter[515]);
  data->localData[0]->realVars[300] /* MatStm2.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[313] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 736
type: SIMPLE_ASSIGN
MatStm2._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[1].VP[1], MatStm2.comp[1].VP[2], MatStm2.comp[1].VP[3], MatStm2.comp[1].VP[4], MatStm2.comp[1].VP[5], MatStm2.comp[1].VP[6]}, MatStm2.T)
*/
void Flowsheet_eqFunction_736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,736};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[504], (modelica_real)data->simulationInfo->realParameter[505], (modelica_real)data->simulationInfo->realParameter[506], (modelica_real)data->simulationInfo->realParameter[507], (modelica_real)data->simulationInfo->realParameter[508], (modelica_real)data->simulationInfo->realParameter[509]);
  data->localData[0]->realVars[299] /* MatStm2.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[313] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 737
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[2].SH, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tc, MatStm2.T)
*/
void Flowsheet_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526], (modelica_real)data->simulationInfo->realParameter[527]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427]);
  data->localData[0]->realVars[329] /* MatStm2.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[487], tmp0, tmp1, data->simulationInfo->realParameter[497], data->localData[0]->realVars[313] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 738
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, MatStm2.T)
*/
void Flowsheet_eqFunction_738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,738};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421]);
  data->localData[0]->realVars[330] /* MatStm2.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[486], tmp0, tmp1, data->simulationInfo->realParameter[496], data->localData[0]->realVars[313] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 739
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, MatStm2.T)
*/
void Flowsheet_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421]);
  data->localData[0]->realVars[328] /* MatStm2.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[486], tmp0, tmp1, data->simulationInfo->realParameter[496], data->localData[0]->realVars[313] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 740
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolEnth[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolEnth[3,2]
*/
void Flowsheet_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  data->localData[0]->realVars[390] /* MatStm2.phasMolEnth[3] variable */ = (data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[330] /* MatStm2.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[331] /* MatStm2.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 741
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolEnth[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolEnth[2,2]
*/
void Flowsheet_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  data->localData[0]->realVars[389] /* MatStm2.phasMolEnth[2] variable */ = (data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[328] /* MatStm2.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[329] /* MatStm2.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 742
type: SIMPLE_ASSIGN
MatStm2._tau[4,4] = exp((-MatStm2.a[4,4]) / MatStm2.T)
*/
void Flowsheet_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  data->localData[0]->realVars[431] /* MatStm2.tau[4,4] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[395]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 743
type: SIMPLE_ASSIGN
MatStm2._tau[4,3] = exp((-MatStm2.a[4,3]) / MatStm2.T)
*/
void Flowsheet_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  data->localData[0]->realVars[430] /* MatStm2.tau[4,3] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[394]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 744
type: SIMPLE_ASSIGN
MatStm2._tau[4,2] = exp((-MatStm2.a[4,2]) / MatStm2.T)
*/
void Flowsheet_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  data->localData[0]->realVars[429] /* MatStm2.tau[4,2] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[393]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 745
type: SIMPLE_ASSIGN
MatStm2._tau[4,1] = exp((-MatStm2.a[4,1]) / MatStm2.T)
*/
void Flowsheet_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  data->localData[0]->realVars[428] /* MatStm2.tau[4,1] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[392]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 746
type: SIMPLE_ASSIGN
MatStm2._tau[3,4] = exp((-MatStm2.a[3,4]) / MatStm2.T)
*/
void Flowsheet_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  data->localData[0]->realVars[427] /* MatStm2.tau[3,4] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[391]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 747
type: SIMPLE_ASSIGN
MatStm2._tau[3,3] = exp((-MatStm2.a[3,3]) / MatStm2.T)
*/
void Flowsheet_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  data->localData[0]->realVars[426] /* MatStm2.tau[3,3] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[390]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 748
type: SIMPLE_ASSIGN
MatStm2._tau[3,2] = exp((-MatStm2.a[3,2]) / MatStm2.T)
*/
void Flowsheet_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  data->localData[0]->realVars[425] /* MatStm2.tau[3,2] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[389]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 749
type: SIMPLE_ASSIGN
MatStm2._tau[3,1] = exp((-MatStm2.a[3,1]) / MatStm2.T)
*/
void Flowsheet_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  data->localData[0]->realVars[424] /* MatStm2.tau[3,1] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[388]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 750
type: SIMPLE_ASSIGN
MatStm2._tau[2,4] = exp((-MatStm2.a[2,4]) / MatStm2.T)
*/
void Flowsheet_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  data->localData[0]->realVars[423] /* MatStm2.tau[2,4] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[387]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 751
type: SIMPLE_ASSIGN
MatStm2._tau[2,3] = exp((-MatStm2.a[2,3]) / MatStm2.T)
*/
void Flowsheet_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  data->localData[0]->realVars[422] /* MatStm2.tau[2,3] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[386]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 752
type: SIMPLE_ASSIGN
MatStm2._tau[2,2] = exp((-MatStm2.a[2,2]) / MatStm2.T)
*/
void Flowsheet_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  data->localData[0]->realVars[421] /* MatStm2.tau[2,2] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[385]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 753
type: SIMPLE_ASSIGN
MatStm2._tau[2,1] = exp((-MatStm2.a[2,1]) / MatStm2.T)
*/
void Flowsheet_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  data->localData[0]->realVars[420] /* MatStm2.tau[2,1] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[384]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 754
type: SIMPLE_ASSIGN
MatStm2._tau[1,4] = exp((-MatStm2.a[1,4]) / MatStm2.T)
*/
void Flowsheet_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  data->localData[0]->realVars[419] /* MatStm2.tau[1,4] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[383]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 755
type: SIMPLE_ASSIGN
MatStm2._S[4] = MatStm2.theta[1] * MatStm2.tau[1,4] + MatStm2.theta[2] * MatStm2.tau[2,4] + MatStm2.theta[3] * MatStm2.tau[3,4] + MatStm2.theta[4] * MatStm2.tau[4,4]
*/
void Flowsheet_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  data->localData[0]->realVars[304] /* MatStm2.S[4] variable */ = (data->localData[0]->realVars[432] /* MatStm2.theta[1] variable */) * (data->localData[0]->realVars[419] /* MatStm2.tau[1,4] variable */) + (data->localData[0]->realVars[433] /* MatStm2.theta[2] variable */) * (data->localData[0]->realVars[423] /* MatStm2.tau[2,4] variable */) + (data->localData[0]->realVars[434] /* MatStm2.theta[3] variable */) * (data->localData[0]->realVars[427] /* MatStm2.tau[3,4] variable */) + (data->localData[0]->realVars[435] /* MatStm2.theta[4] variable */) * (data->localData[0]->realVars[431] /* MatStm2.tau[4,4] variable */);
  TRACE_POP
}
/*
equation index: 756
type: SIMPLE_ASSIGN
MatStm2._S_bubl[4] = MatStm2.theta_bubl[1] * MatStm2.tau[1,4] + MatStm2.theta_bubl[2] * MatStm2.tau[2,4] + MatStm2.theta_bubl[3] * MatStm2.tau[3,4] + MatStm2.theta_bubl[4] * MatStm2.tau[4,4]
*/
void Flowsheet_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  data->localData[0]->realVars[308] /* MatStm2.S_bubl[4] variable */ = (data->localData[0]->realVars[436] /* MatStm2.theta_bubl[1] variable */) * (data->localData[0]->realVars[419] /* MatStm2.tau[1,4] variable */) + (data->localData[0]->realVars[437] /* MatStm2.theta_bubl[2] variable */) * (data->localData[0]->realVars[423] /* MatStm2.tau[2,4] variable */) + (data->localData[0]->realVars[438] /* MatStm2.theta_bubl[3] variable */) * (data->localData[0]->realVars[427] /* MatStm2.tau[3,4] variable */) + (data->localData[0]->realVars[439] /* MatStm2.theta_bubl[4] variable */) * (data->localData[0]->realVars[431] /* MatStm2.tau[4,4] variable */);
  TRACE_POP
}
/*
equation index: 757
type: SIMPLE_ASSIGN
MatStm2._tau[1,3] = exp((-MatStm2.a[1,3]) / MatStm2.T)
*/
void Flowsheet_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  data->localData[0]->realVars[418] /* MatStm2.tau[1,3] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[382]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 758
type: SIMPLE_ASSIGN
MatStm2._S[3] = MatStm2.theta[1] * MatStm2.tau[1,3] + MatStm2.theta[2] * MatStm2.tau[2,3] + MatStm2.theta[3] * MatStm2.tau[3,3] + MatStm2.theta[4] * MatStm2.tau[4,3]
*/
void Flowsheet_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  data->localData[0]->realVars[303] /* MatStm2.S[3] variable */ = (data->localData[0]->realVars[432] /* MatStm2.theta[1] variable */) * (data->localData[0]->realVars[418] /* MatStm2.tau[1,3] variable */) + (data->localData[0]->realVars[433] /* MatStm2.theta[2] variable */) * (data->localData[0]->realVars[422] /* MatStm2.tau[2,3] variable */) + (data->localData[0]->realVars[434] /* MatStm2.theta[3] variable */) * (data->localData[0]->realVars[426] /* MatStm2.tau[3,3] variable */) + (data->localData[0]->realVars[435] /* MatStm2.theta[4] variable */) * (data->localData[0]->realVars[430] /* MatStm2.tau[4,3] variable */);
  TRACE_POP
}
/*
equation index: 759
type: SIMPLE_ASSIGN
MatStm2._S_bubl[3] = MatStm2.theta_bubl[1] * MatStm2.tau[1,3] + MatStm2.theta_bubl[2] * MatStm2.tau[2,3] + MatStm2.theta_bubl[3] * MatStm2.tau[3,3] + MatStm2.theta_bubl[4] * MatStm2.tau[4,3]
*/
void Flowsheet_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  data->localData[0]->realVars[307] /* MatStm2.S_bubl[3] variable */ = (data->localData[0]->realVars[436] /* MatStm2.theta_bubl[1] variable */) * (data->localData[0]->realVars[418] /* MatStm2.tau[1,3] variable */) + (data->localData[0]->realVars[437] /* MatStm2.theta_bubl[2] variable */) * (data->localData[0]->realVars[422] /* MatStm2.tau[2,3] variable */) + (data->localData[0]->realVars[438] /* MatStm2.theta_bubl[3] variable */) * (data->localData[0]->realVars[426] /* MatStm2.tau[3,3] variable */) + (data->localData[0]->realVars[439] /* MatStm2.theta_bubl[4] variable */) * (data->localData[0]->realVars[430] /* MatStm2.tau[4,3] variable */);
  TRACE_POP
}
/*
equation index: 760
type: SIMPLE_ASSIGN
MatStm2._tau[1,2] = exp((-MatStm2.a[1,2]) / MatStm2.T)
*/
void Flowsheet_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  data->localData[0]->realVars[417] /* MatStm2.tau[1,2] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[381]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 761
type: SIMPLE_ASSIGN
MatStm2._S[2] = MatStm2.theta[1] * MatStm2.tau[1,2] + MatStm2.theta[2] * MatStm2.tau[2,2] + MatStm2.theta[3] * MatStm2.tau[3,2] + MatStm2.theta[4] * MatStm2.tau[4,2]
*/
void Flowsheet_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  data->localData[0]->realVars[302] /* MatStm2.S[2] variable */ = (data->localData[0]->realVars[432] /* MatStm2.theta[1] variable */) * (data->localData[0]->realVars[417] /* MatStm2.tau[1,2] variable */) + (data->localData[0]->realVars[433] /* MatStm2.theta[2] variable */) * (data->localData[0]->realVars[421] /* MatStm2.tau[2,2] variable */) + (data->localData[0]->realVars[434] /* MatStm2.theta[3] variable */) * (data->localData[0]->realVars[425] /* MatStm2.tau[3,2] variable */) + (data->localData[0]->realVars[435] /* MatStm2.theta[4] variable */) * (data->localData[0]->realVars[429] /* MatStm2.tau[4,2] variable */);
  TRACE_POP
}
/*
equation index: 762
type: SIMPLE_ASSIGN
MatStm2._S_bubl[2] = MatStm2.theta_bubl[1] * MatStm2.tau[1,2] + MatStm2.theta_bubl[2] * MatStm2.tau[2,2] + MatStm2.theta_bubl[3] * MatStm2.tau[3,2] + MatStm2.theta_bubl[4] * MatStm2.tau[4,2]
*/
void Flowsheet_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  data->localData[0]->realVars[306] /* MatStm2.S_bubl[2] variable */ = (data->localData[0]->realVars[436] /* MatStm2.theta_bubl[1] variable */) * (data->localData[0]->realVars[417] /* MatStm2.tau[1,2] variable */) + (data->localData[0]->realVars[437] /* MatStm2.theta_bubl[2] variable */) * (data->localData[0]->realVars[421] /* MatStm2.tau[2,2] variable */) + (data->localData[0]->realVars[438] /* MatStm2.theta_bubl[3] variable */) * (data->localData[0]->realVars[425] /* MatStm2.tau[3,2] variable */) + (data->localData[0]->realVars[439] /* MatStm2.theta_bubl[4] variable */) * (data->localData[0]->realVars[429] /* MatStm2.tau[4,2] variable */);
  TRACE_POP
}
/*
equation index: 763
type: SIMPLE_ASSIGN
MatStm2._tau[1,1] = exp((-MatStm2.a[1,1]) / MatStm2.T)
*/
void Flowsheet_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  data->localData[0]->realVars[416] /* MatStm2.tau[1,1] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[380]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 764
type: SIMPLE_ASSIGN
MatStm2._S[1] = MatStm2.theta[1] * MatStm2.tau[1,1] + MatStm2.theta[2] * MatStm2.tau[2,1] + MatStm2.theta[3] * MatStm2.tau[3,1] + MatStm2.theta[4] * MatStm2.tau[4,1]
*/
void Flowsheet_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  data->localData[0]->realVars[301] /* MatStm2.S[1] variable */ = (data->localData[0]->realVars[432] /* MatStm2.theta[1] variable */) * (data->localData[0]->realVars[416] /* MatStm2.tau[1,1] variable */) + (data->localData[0]->realVars[433] /* MatStm2.theta[2] variable */) * (data->localData[0]->realVars[420] /* MatStm2.tau[2,1] variable */) + (data->localData[0]->realVars[434] /* MatStm2.theta[3] variable */) * (data->localData[0]->realVars[424] /* MatStm2.tau[3,1] variable */) + (data->localData[0]->realVars[435] /* MatStm2.theta[4] variable */) * (data->localData[0]->realVars[428] /* MatStm2.tau[4,1] variable */);
  TRACE_POP
}
/*
equation index: 765
type: ALGORITHM

  MatStm2.gammar[2] := $START.MatStm2.gammar[2];
  MatStm2.gammar[1] := $START.MatStm2.gammar[1];
  MatStm2.sum[2] := $START.MatStm2.sum[2];
  MatStm2.sum[1] := $START.MatStm2.sum[1];
  MatStm2.B[2,4] := $START.MatStm2.B[2,4];
  MatStm2.B[2,3] := $START.MatStm2.B[2,3];
  MatStm2.B[2,2] := $START.MatStm2.B[2,2];
  MatStm2.B[2,1] := $START.MatStm2.B[2,1];
  MatStm2.B[1,4] := $START.MatStm2.B[1,4];
  MatStm2.B[1,3] := $START.MatStm2.B[1,3];
  MatStm2.B[1,2] := $START.MatStm2.B[1,2];
  MatStm2.B[1,1] := $START.MatStm2.B[1,1];
  for i in 1:2 loop
    for j in 1:4 loop
      for l in 1:4 loop
        MatStm2.B[i,j] := MatStm2.e[1,i] * MatStm2.tau[1,j] + MatStm2.e[2,i] * MatStm2.tau[2,j] + MatStm2.e[3,i] * MatStm2.tau[3,j] + MatStm2.e[4,i] * MatStm2.tau[4,j];
      end for;
    end for;
  end for;
  MatStm2.sum[:] := {0.0, 0.0};
  for j in 1:4 loop
    for i in 1:2 loop
      MatStm2.sum[i] := MatStm2.sum[i] + MatStm2.theta[j] * MatStm2.B[i,j] / MatStm2.S[j] - MatStm2.e[j,i] * log(MatStm2.B[i,j] / MatStm2.S[j]);
      MatStm2.gammar[i] := exp(MatStm2.q[i] * (1.0 - MatStm2.sum[i]));
    end for;
  end for;
*/
void Flowsheet_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  modelica_integer tmp0;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  real_array tmp9;
  index_spec_t tmp10;
  real_array tmp11;
  modelica_real tmp12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  data->localData[0]->realVars[379] /* MatStm2.gammar[2] variable */ = data->modelData->realVarsData[379].attribute /* MatStm2.gammar[2] variable */.start;

  data->localData[0]->realVars[378] /* MatStm2.gammar[1] variable */ = data->modelData->realVarsData[378].attribute /* MatStm2.gammar[1] variable */.start;

  data->localData[0]->realVars[411] /* MatStm2.sum[2] variable */ = data->modelData->realVarsData[411].attribute /* MatStm2.sum[2] variable */.start;

  data->localData[0]->realVars[410] /* MatStm2.sum[1] variable */ = data->modelData->realVarsData[410].attribute /* MatStm2.sum[1] variable */.start;

  data->localData[0]->realVars[278] /* MatStm2.B[2,4] variable */ = data->modelData->realVarsData[278].attribute /* MatStm2.B[2,4] variable */.start;

  data->localData[0]->realVars[277] /* MatStm2.B[2,3] variable */ = data->modelData->realVarsData[277].attribute /* MatStm2.B[2,3] variable */.start;

  data->localData[0]->realVars[276] /* MatStm2.B[2,2] variable */ = data->modelData->realVarsData[276].attribute /* MatStm2.B[2,2] variable */.start;

  data->localData[0]->realVars[275] /* MatStm2.B[2,1] variable */ = data->modelData->realVarsData[275].attribute /* MatStm2.B[2,1] variable */.start;

  data->localData[0]->realVars[274] /* MatStm2.B[1,4] variable */ = data->modelData->realVarsData[274].attribute /* MatStm2.B[1,4] variable */.start;

  data->localData[0]->realVars[273] /* MatStm2.B[1,3] variable */ = data->modelData->realVarsData[273].attribute /* MatStm2.B[1,3] variable */.start;

  data->localData[0]->realVars[272] /* MatStm2.B[1,2] variable */ = data->modelData->realVarsData[272].attribute /* MatStm2.B[1,2] variable */.start;

  data->localData[0]->realVars[271] /* MatStm2.B[1,1] variable */ = data->modelData->realVarsData[271].attribute /* MatStm2.B[1,1] variable */.start;

  tmp6 = ((modelica_integer) 1); tmp7 = 1; tmp8 = ((modelica_integer) 2);
  if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp6, tmp8); $Pi += tmp7)
    {
      tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 4);
      if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
      {
        modelica_integer $Pj;
        for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp3, tmp5); $Pj += tmp4)
        {
          tmp0 = ((modelica_integer) 1); tmp1 = 1; tmp2 = ((modelica_integer) 4);
          if(!(((tmp1 > 0) && (tmp0 > tmp2)) || ((tmp1 < 0) && (tmp0 < tmp2))))
          {
            modelica_integer $Pl;
            for($Pl = ((modelica_integer) 1); in_range_integer($Pl, tmp0, tmp2); $Pl += tmp1)
            {
              (&data->localData[0]->realVars[271] /* MatStm2.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)] = ((&data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[416] /* MatStm2.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 1), (modelica_integer)$Pj)]) + ((&data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[416] /* MatStm2.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 2), (modelica_integer)$Pj)]) + ((&data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[416] /* MatStm2.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 3), (modelica_integer)$Pj)]) + ((&data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 4), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[416] /* MatStm2.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 4), (modelica_integer)$Pj)]);
            }
          }
        }
      }
    }
  }

  array_alloc_scalar_real_array(&tmp9, 2, (modelica_real)0.0, (modelica_real)0.0);
  create_index_spec(&tmp10, 1, (1), (int*)0, 'W');
  real_array_create(&tmp11, (modelica_real*)&data->localData[0]->realVars[410] /* MatStm2.sum[1] variable */, 1, 2);
  indexed_assign_real_array(tmp9, &tmp11, &tmp10);

  tmp16 = ((modelica_integer) 1); tmp17 = 1; tmp18 = ((modelica_integer) 4);
  if(!(((tmp17 > 0) && (tmp16 > tmp18)) || ((tmp17 < 0) && (tmp16 < tmp18))))
  {
    modelica_integer $Pj;
    for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp16, tmp18); $Pj += tmp17)
    {
      tmp13 = ((modelica_integer) 1); tmp14 = 1; tmp15 = ((modelica_integer) 2);
      if(!(((tmp14 > 0) && (tmp13 > tmp15)) || ((tmp14 < 0) && (tmp13 < tmp15))))
      {
        modelica_integer $Pi;
        for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp13, tmp15); $Pi += tmp14)
        {
          tmp12 = DIVISION_SIM((&data->localData[0]->realVars[271] /* MatStm2.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[301] /* MatStm2.S[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm2.S[j]",equationIndexes);
          if(!(tmp12 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
            throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.B[i,j] / MatStm2.S[j]) was %g should be > 0", tmp12);
          }
          (&data->localData[0]->realVars[410] /* MatStm2.sum[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = (&data->localData[0]->realVars[410] /* MatStm2.sum[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] + ((&data->localData[0]->realVars[432] /* MatStm2.theta[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)]) * (DIVISION_SIM((&data->localData[0]->realVars[271] /* MatStm2.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[301] /* MatStm2.S[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm2.S[j]",equationIndexes)) - (((&data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, (modelica_integer)$Pj, (modelica_integer)$Pi)]) * (log(tmp12)));

          (&data->localData[0]->realVars[378] /* MatStm2.gammar[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = exp(((&data->localData[0]->realVars[397] /* MatStm2.q[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * (1.0 - (&data->localData[0]->realVars[410] /* MatStm2.sum[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 766
type: SIMPLE_ASSIGN
MatStm2._S_bubl[1] = MatStm2.theta_bubl[1] * MatStm2.tau[1,1] + MatStm2.theta_bubl[2] * MatStm2.tau[2,1] + MatStm2.theta_bubl[3] * MatStm2.tau[3,1] + MatStm2.theta_bubl[4] * MatStm2.tau[4,1]
*/
void Flowsheet_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  data->localData[0]->realVars[305] /* MatStm2.S_bubl[1] variable */ = (data->localData[0]->realVars[436] /* MatStm2.theta_bubl[1] variable */) * (data->localData[0]->realVars[416] /* MatStm2.tau[1,1] variable */) + (data->localData[0]->realVars[437] /* MatStm2.theta_bubl[2] variable */) * (data->localData[0]->realVars[420] /* MatStm2.tau[2,1] variable */) + (data->localData[0]->realVars[438] /* MatStm2.theta_bubl[3] variable */) * (data->localData[0]->realVars[424] /* MatStm2.tau[3,1] variable */) + (data->localData[0]->realVars[439] /* MatStm2.theta_bubl[4] variable */) * (data->localData[0]->realVars[428] /* MatStm2.tau[4,1] variable */);
  TRACE_POP
}
/*
equation index: 767
type: ALGORITHM

  MatStm2.gammar_bubl[2] := $START.MatStm2.gammar_bubl[2];
  MatStm2.gammar_bubl[1] := $START.MatStm2.gammar_bubl[1];
  MatStm2.sum_bubl[2] := $START.MatStm2.sum_bubl[2];
  MatStm2.sum_bubl[1] := $START.MatStm2.sum_bubl[1];
  MatStm2.sum_bubl[:] := {0.0, 0.0};
  for j in 1:4 loop
    for i in 1:2 loop
      MatStm2.sum_bubl[i] := MatStm2.sum_bubl[i] + MatStm2.theta_bubl[j] * MatStm2.B[i,j] / MatStm2.S_bubl[j] - MatStm2.e[j,i] * log(MatStm2.B[i,j] / MatStm2.S_bubl[j]);
      MatStm2.gammar_bubl[i] := exp(MatStm2.q[i] * (1.0 - MatStm2.sum_bubl[i]));
    end for;
  end for;
*/
void Flowsheet_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_real tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[381] /* MatStm2.gammar_bubl[2] variable */ = data->modelData->realVarsData[381].attribute /* MatStm2.gammar_bubl[2] variable */.start;

  data->localData[0]->realVars[380] /* MatStm2.gammar_bubl[1] variable */ = data->modelData->realVarsData[380].attribute /* MatStm2.gammar_bubl[1] variable */.start;

  data->localData[0]->realVars[413] /* MatStm2.sum_bubl[2] variable */ = data->modelData->realVarsData[413].attribute /* MatStm2.sum_bubl[2] variable */.start;

  data->localData[0]->realVars[412] /* MatStm2.sum_bubl[1] variable */ = data->modelData->realVarsData[412].attribute /* MatStm2.sum_bubl[1] variable */.start;

  array_alloc_scalar_real_array(&tmp0, 2, (modelica_real)0.0, (modelica_real)0.0);
  create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
  real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[412] /* MatStm2.sum_bubl[1] variable */, 1, 2);
  indexed_assign_real_array(tmp0, &tmp2, &tmp1);

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 4);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pj;
    for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp7, tmp9); $Pj += tmp8)
    {
      tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = ((modelica_integer) 2);
      if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
      {
        modelica_integer $Pi;
        for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp4, tmp6); $Pi += tmp5)
        {
          tmp3 = DIVISION_SIM((&data->localData[0]->realVars[271] /* MatStm2.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[305] /* MatStm2.S_bubl[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm2.S_bubl[j]",equationIndexes);
          if(!(tmp3 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
            throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.B[i,j] / MatStm2.S_bubl[j]) was %g should be > 0", tmp3);
          }
          (&data->localData[0]->realVars[412] /* MatStm2.sum_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = (&data->localData[0]->realVars[412] /* MatStm2.sum_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] + ((&data->localData[0]->realVars[436] /* MatStm2.theta_bubl[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)]) * (DIVISION_SIM((&data->localData[0]->realVars[271] /* MatStm2.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[305] /* MatStm2.S_bubl[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm2.S_bubl[j]",equationIndexes)) - (((&data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, (modelica_integer)$Pj, (modelica_integer)$Pi)]) * (log(tmp3)));

          (&data->localData[0]->realVars[380] /* MatStm2.gammar_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = exp(((&data->localData[0]->realVars[397] /* MatStm2.q[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * (1.0 - (&data->localData[0]->realVars[412] /* MatStm2.sum_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 768
type: SIMPLE_ASSIGN
$cse36 = log(MatStm2.gammar_bubl[2])
*/
void Flowsheet_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[381] /* MatStm2.gammar_bubl[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammar_bubl[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[41] /* $cse36 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 769
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[2] = exp($cse36 + $cse37)
*/
void Flowsheet_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  data->localData[0]->realVars[369] /* MatStm2.gammaBubl[2] variable */ = exp(data->localData[0]->realVars[41] /* $cse36 variable */ + data->localData[0]->realVars[42] /* $cse37 variable */);
  TRACE_POP
}
/*
equation index: 770
type: SIMPLE_ASSIGN
$cse44 = log(MatStm2.gammar[2])
*/
void Flowsheet_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[379] /* MatStm2.gammar[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammar[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[50] /* $cse44 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 771
type: SIMPLE_ASSIGN
MatStm2._gamma[2] = exp($cse44 + $cse45)
*/
void Flowsheet_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  data->localData[0]->realVars[367] /* MatStm2.gamma[2] variable */ = exp(data->localData[0]->realVars[50] /* $cse44 variable */ + data->localData[0]->realVars[51] /* $cse45 variable */);
  TRACE_POP
}
/*
equation index: 772
type: SIMPLE_ASSIGN
MatStm2._K[2] = 9.869232667160129e-006 * MatStm2.gamma[2] * MatStm2.Psat[2]
*/
void Flowsheet_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  data->localData[0]->realVars[286] /* MatStm2.K[2] variable */ = (9.869232667160129e-006) * ((data->localData[0]->realVars[367] /* MatStm2.gamma[2] variable */) * (data->localData[0]->realVars[300] /* MatStm2.Psat[2] variable */));
  TRACE_POP
}
/*
equation index: 773
type: SIMPLE_ASSIGN
$cse42 = log(MatStm2.gammar[1])
*/
void Flowsheet_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[378] /* MatStm2.gammar[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammar[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[48] /* $cse42 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 774
type: SIMPLE_ASSIGN
MatStm2._gamma[1] = exp($cse42 + $cse43)
*/
void Flowsheet_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  data->localData[0]->realVars[366] /* MatStm2.gamma[1] variable */ = exp(data->localData[0]->realVars[48] /* $cse42 variable */ + data->localData[0]->realVars[49] /* $cse43 variable */);
  TRACE_POP
}
/*
equation index: 775
type: SIMPLE_ASSIGN
MatStm2._K[1] = 9.869232667160129e-006 * MatStm2.gamma[1] * MatStm2.Psat[1]
*/
void Flowsheet_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
  data->localData[0]->realVars[285] /* MatStm2.K[1] variable */ = (9.869232667160129e-006) * ((data->localData[0]->realVars[366] /* MatStm2.gamma[1] variable */) * (data->localData[0]->realVars[299] /* MatStm2.Psat[1] variable */));
  TRACE_POP
}
/*
equation index: 776
type: SIMPLE_ASSIGN
$cse34 = log(MatStm2.gammar_bubl[1])
*/
void Flowsheet_eqFunction_776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,776};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[380] /* MatStm2.gammar_bubl[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammar_bubl[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[39] /* $cse34 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 777
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[1] = exp($cse34 + $cse35)
*/
void Flowsheet_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  data->localData[0]->realVars[368] /* MatStm2.gammaBubl[1] variable */ = exp(data->localData[0]->realVars[39] /* $cse34 variable */ + data->localData[0]->realVars[40] /* $cse35 variable */);
  TRACE_POP
}
/*
equation index: 778
type: SIMPLE_ASSIGN
$cse26 = log(MatStm2.T)
*/
void Flowsheet_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[313] /* MatStm2.T variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.T) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[30] /* $cse26 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 779
type: SIMPLE_ASSIGN
$cse29 = exp((-MatStm2.comp[2].VP[2]) - MatStm2.comp[2].VP[3] / MatStm2.T - MatStm2.comp[2].VP[4] * $cse26 - MatStm2.comp[2].VP[5] * MatStm2.T ^ MatStm2.comp[2].VP[6])
*/
void Flowsheet_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[313] /* MatStm2.T variable */;
  tmp1 = data->simulationInfo->realParameter[515];
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
  data->localData[0]->realVars[33] /* $cse29 variable */ = exp((-data->simulationInfo->realParameter[511]) - (DIVISION_SIM(data->simulationInfo->realParameter[512],data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes)) - ((data->simulationInfo->realParameter[513]) * (data->localData[0]->realVars[30] /* $cse26 variable */)) - ((data->simulationInfo->realParameter[514]) * (tmp2)));
  TRACE_POP
}
/*
equation index: 780
type: SIMPLE_ASSIGN
$cse28 = exp((-MatStm2.comp[1].VP[2]) - MatStm2.comp[1].VP[3] / MatStm2.T - MatStm2.comp[1].VP[4] * $cse26 - MatStm2.comp[1].VP[5] * MatStm2.T ^ MatStm2.comp[1].VP[6])
*/
void Flowsheet_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[313] /* MatStm2.T variable */;
  tmp1 = data->simulationInfo->realParameter[509];
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
  data->localData[0]->realVars[32] /* $cse28 variable */ = exp((-data->simulationInfo->realParameter[505]) - (DIVISION_SIM(data->simulationInfo->realParameter[506],data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes)) - ((data->simulationInfo->realParameter[507]) * (data->localData[0]->realVars[30] /* $cse26 variable */)) - ((data->simulationInfo->realParameter[508]) * (tmp2)));
  TRACE_POP
}
/*
equation index: 781
type: SIMPLE_ASSIGN
$cse27 = exp(MatStm2.comp[2].VP[2] + MatStm2.comp[2].VP[3] / MatStm2.T + MatStm2.comp[2].VP[4] * $cse26 + MatStm2.comp[2].VP[5] * MatStm2.T ^ MatStm2.comp[2].VP[6])
*/
void Flowsheet_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[313] /* MatStm2.T variable */;
  tmp1 = data->simulationInfo->realParameter[515];
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
  data->localData[0]->realVars[31] /* $cse27 variable */ = exp(data->simulationInfo->realParameter[511] + DIVISION_SIM(data->simulationInfo->realParameter[512],data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes) + (data->simulationInfo->realParameter[513]) * (data->localData[0]->realVars[30] /* $cse26 variable */) + (data->simulationInfo->realParameter[514]) * (tmp2));
  TRACE_POP
}
/*
equation index: 782
type: SIMPLE_ASSIGN
$cse25 = exp(MatStm2.comp[1].VP[2] + MatStm2.comp[1].VP[3] / MatStm2.T + MatStm2.comp[1].VP[4] * $cse26 + MatStm2.comp[1].VP[5] * MatStm2.T ^ MatStm2.comp[1].VP[6])
*/
void Flowsheet_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[313] /* MatStm2.T variable */;
  tmp1 = data->simulationInfo->realParameter[509];
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
  data->localData[0]->realVars[29] /* $cse25 variable */ = exp(data->simulationInfo->realParameter[505] + DIVISION_SIM(data->simulationInfo->realParameter[506],data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes) + (data->simulationInfo->realParameter[507]) * (data->localData[0]->realVars[30] /* $cse26 variable */) + (data->simulationInfo->realParameter[508]) * (tmp2));
  TRACE_POP
}
/*
equation index: 783
type: SIMPLE_ASSIGN
MatStm2._Pbubl = MatStm2.gammaBubl[1] * MatStm2.compMolFrac[1,1] * $cse25 + MatStm2.gammaBubl[2] * MatStm2.compMolFrac[1,2] * $cse27
*/
void Flowsheet_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */ = (data->localData[0]->realVars[368] /* MatStm2.gammaBubl[1] variable */) * ((data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[29] /* $cse25 variable */)) + (data->localData[0]->realVars[369] /* MatStm2.gammaBubl[2] variable */) * ((data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[31] /* $cse27 variable */));
  TRACE_POP
}
/*
equation index: 784
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  data->localData[0]->realVars[340] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[448] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 785
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,785};
  data->localData[0]->realVars[341] /* MatStm2.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[448] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 786
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac = 0.006666666666666667 * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  data->localData[0]->realVars[385] /* MatStm2.liqPhasMolFrac variable */ = (0.006666666666666667) * (data->localData[0]->realVars[448] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 787
type: SIMPLE_ASSIGN
MatStm2._vapPhasMolFrac = 1.0 - MatStm2.liqPhasMolFrac
*/
void Flowsheet_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  data->localData[0]->realVars[451] /* MatStm2.vapPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[385] /* MatStm2.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 788
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[3] = 150.0 * MatStm2.vapPhasMolFrac
*/
void Flowsheet_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  data->localData[0]->realVars[449] /* MatStm2.totMolFlo[3] variable */ = (150.0) * (data->localData[0]->realVars[451] /* MatStm2.vapPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 789
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,789};
  data->localData[0]->realVars[342] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[449] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 790
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  data->localData[0]->realVars[343] /* MatStm2.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[449] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 791
type: SIMPLE_ASSIGN
$cse38 = log(MatStm2.J_dew[1])
*/
void Flowsheet_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[283] /* MatStm2.J_dew[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J_dew[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[43] /* $cse38 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 792
type: SIMPLE_ASSIGN
$cse40 = log(MatStm2.J_dew[2])
*/
void Flowsheet_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[284] /* MatStm2.J_dew[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J_dew[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[46] /* $cse40 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 793
type: SIMPLE_ASSIGN
$cse39 = log(MatStm2.J_dew[1] / MatStm2.L_dew[1])
*/
void Flowsheet_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->localData[0]->realVars[283] /* MatStm2.J_dew[1] variable */,data->localData[0]->realVars[291] /* MatStm2.L_dew[1] variable */,"MatStm2.L_dew[1]",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J_dew[1] / MatStm2.L_dew[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[44] /* $cse39 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 794
type: SIMPLE_ASSIGN
MatStm2._gammac_dew[1] = exp(1.0 + $cse38 + (-5.0) * MatStm2.q[1] * (1.0 + $cse39 - MatStm2.J_dew[1] / MatStm2.L_dew[1]) - MatStm2.J_dew[1])
*/
void Flowsheet_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  data->localData[0]->realVars[376] /* MatStm2.gammac_dew[1] variable */ = exp(1.0 + data->localData[0]->realVars[43] /* $cse38 variable */ + (-5.0) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (1.0 + data->localData[0]->realVars[44] /* $cse39 variable */ - (DIVISION_SIM(data->localData[0]->realVars[283] /* MatStm2.J_dew[1] variable */,data->localData[0]->realVars[291] /* MatStm2.L_dew[1] variable */,"MatStm2.L_dew[1]",equationIndexes)))) - data->localData[0]->realVars[283] /* MatStm2.J_dew[1] variable */);
  TRACE_POP
}
/*
equation index: 795
type: SIMPLE_ASSIGN
$cse31 = log(MatStm2.gammac_dew[1])
*/
void Flowsheet_eqFunction_795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,795};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[376] /* MatStm2.gammac_dew[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammac_dew[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[36] /* $cse31 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 796
type: SIMPLE_ASSIGN
MatStm2._gammaDew[1] = exp($cse30 + $cse31)
*/
void Flowsheet_eqFunction_796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,796};
  data->localData[0]->realVars[370] /* MatStm2.gammaDew[1] variable */ = exp(data->localData[0]->realVars[35] /* $cse30 variable */ + data->localData[0]->realVars[36] /* $cse31 variable */);
  TRACE_POP
}
/*
equation index: 797
type: SIMPLE_ASSIGN
MatStm2._gammar_dew[1] = exp($cse30)
*/
void Flowsheet_eqFunction_797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,797};
  data->localData[0]->realVars[382] /* MatStm2.gammar_dew[1] variable */ = exp(data->localData[0]->realVars[35] /* $cse30 variable */);
  TRACE_POP
}
/*
equation index: 798
type: SIMPLE_ASSIGN
MatStm2._dewLiqMolFrac[1] = MatStm2.compMolFrac[1,1] * MatStm2.Pdew / (MatStm2.Psat[1] * MatStm2.gammaDew[1])
*/
void Flowsheet_eqFunction_798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,798};
  data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */ = (data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) * (DIVISION_SIM(data->localData[0]->realVars[298] /* MatStm2.Pdew variable */,(data->localData[0]->realVars[299] /* MatStm2.Psat[1] variable */) * (data->localData[0]->realVars[370] /* MatStm2.gammaDew[1] variable */),"MatStm2.Psat[1] * MatStm2.gammaDew[1]",equationIndexes));
  TRACE_POP
}
/*
equation index: 799
type: SIMPLE_ASSIGN
MatStm2._theta_dew[3] = (MatStm2.dewLiqMolFrac[1] * MatStm2.q[1] * MatStm2.e[3,1] + MatStm2.dewLiqMolFrac[2] * MatStm2.q[2] * MatStm2.e[3,2]) / (MatStm2.dewLiqMolFrac[1] * MatStm2.q[1] + MatStm2.dewLiqMolFrac[2] * MatStm2.q[2])
*/
void Flowsheet_eqFunction_799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,799};
  data->localData[0]->realVars[442] /* MatStm2.theta_dew[3] variable */ = DIVISION_SIM((data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[362] /* MatStm2.e[3,1] variable */)) + (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[363] /* MatStm2.e[3,2] variable */)),(data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */),"MatStm2.dewLiqMolFrac[1] * MatStm2.q[1] + MatStm2.dewLiqMolFrac[2] * MatStm2.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 800
type: SIMPLE_ASSIGN
MatStm2._L_dew[2] = MatStm2.q[2] / (MatStm2.q[1] * MatStm2.dewLiqMolFrac[1] + MatStm2.q[2] * MatStm2.dewLiqMolFrac[2])
*/
void Flowsheet_eqFunction_800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,800};
  data->localData[0]->realVars[292] /* MatStm2.L_dew[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[398] /* MatStm2.q[2] variable */,(data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */),"MatStm2.q[1] * MatStm2.dewLiqMolFrac[1] + MatStm2.q[2] * MatStm2.dewLiqMolFrac[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 801
type: SIMPLE_ASSIGN
MatStm2._theta_dew[1] = (MatStm2.dewLiqMolFrac[1] * MatStm2.q[1] * MatStm2.e[1,1] + MatStm2.dewLiqMolFrac[2] * MatStm2.q[2] * MatStm2.e[1,2]) / (MatStm2.dewLiqMolFrac[1] * MatStm2.q[1] + MatStm2.dewLiqMolFrac[2] * MatStm2.q[2])
*/
void Flowsheet_eqFunction_801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,801};
  data->localData[0]->realVars[440] /* MatStm2.theta_dew[1] variable */ = DIVISION_SIM((data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */)) + (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[359] /* MatStm2.e[1,2] variable */)),(data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */),"MatStm2.dewLiqMolFrac[1] * MatStm2.q[1] + MatStm2.dewLiqMolFrac[2] * MatStm2.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 802
type: SIMPLE_ASSIGN
MatStm2._theta_dew[2] = (MatStm2.dewLiqMolFrac[1] * MatStm2.q[1] * MatStm2.e[2,1] + MatStm2.dewLiqMolFrac[2] * MatStm2.q[2] * MatStm2.e[2,2]) / (MatStm2.dewLiqMolFrac[1] * MatStm2.q[1] + MatStm2.dewLiqMolFrac[2] * MatStm2.q[2])
*/
void Flowsheet_eqFunction_802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,802};
  data->localData[0]->realVars[441] /* MatStm2.theta_dew[2] variable */ = DIVISION_SIM((data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[360] /* MatStm2.e[2,1] variable */)) + (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[361] /* MatStm2.e[2,2] variable */)),(data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */),"MatStm2.dewLiqMolFrac[1] * MatStm2.q[1] + MatStm2.dewLiqMolFrac[2] * MatStm2.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 803
type: SIMPLE_ASSIGN
MatStm2._theta_dew[4] = (MatStm2.dewLiqMolFrac[1] * MatStm2.q[1] * MatStm2.e[4,1] + MatStm2.dewLiqMolFrac[2] * MatStm2.q[2] * MatStm2.e[4,2]) / (MatStm2.dewLiqMolFrac[1] * MatStm2.q[1] + MatStm2.dewLiqMolFrac[2] * MatStm2.q[2])
*/
void Flowsheet_eqFunction_803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,803};
  data->localData[0]->realVars[443] /* MatStm2.theta_dew[4] variable */ = DIVISION_SIM((data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[364] /* MatStm2.e[4,1] variable */)) + (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[365] /* MatStm2.e[4,2] variable */)),(data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */),"MatStm2.dewLiqMolFrac[1] * MatStm2.q[1] + MatStm2.dewLiqMolFrac[2] * MatStm2.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 804
type: SIMPLE_ASSIGN
MatStm2._S_dew[2] = MatStm2.theta_dew[1] * MatStm2.tau[1,2] + MatStm2.theta_dew[2] * MatStm2.tau[2,2] + MatStm2.theta_dew[3] * MatStm2.tau[3,2] + MatStm2.theta_dew[4] * MatStm2.tau[4,2]
*/
void Flowsheet_eqFunction_804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,804};
  data->localData[0]->realVars[310] /* MatStm2.S_dew[2] variable */ = (data->localData[0]->realVars[440] /* MatStm2.theta_dew[1] variable */) * (data->localData[0]->realVars[417] /* MatStm2.tau[1,2] variable */) + (data->localData[0]->realVars[441] /* MatStm2.theta_dew[2] variable */) * (data->localData[0]->realVars[421] /* MatStm2.tau[2,2] variable */) + (data->localData[0]->realVars[442] /* MatStm2.theta_dew[3] variable */) * (data->localData[0]->realVars[425] /* MatStm2.tau[3,2] variable */) + (data->localData[0]->realVars[443] /* MatStm2.theta_dew[4] variable */) * (data->localData[0]->realVars[429] /* MatStm2.tau[4,2] variable */);
  TRACE_POP
}
/*
equation index: 805
type: SIMPLE_ASSIGN
MatStm2._S_dew[1] = MatStm2.theta_dew[1] * MatStm2.tau[1,1] + MatStm2.theta_dew[2] * MatStm2.tau[2,1] + MatStm2.theta_dew[3] * MatStm2.tau[3,1] + MatStm2.theta_dew[4] * MatStm2.tau[4,1]
*/
void Flowsheet_eqFunction_805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,805};
  data->localData[0]->realVars[309] /* MatStm2.S_dew[1] variable */ = (data->localData[0]->realVars[440] /* MatStm2.theta_dew[1] variable */) * (data->localData[0]->realVars[416] /* MatStm2.tau[1,1] variable */) + (data->localData[0]->realVars[441] /* MatStm2.theta_dew[2] variable */) * (data->localData[0]->realVars[420] /* MatStm2.tau[2,1] variable */) + (data->localData[0]->realVars[442] /* MatStm2.theta_dew[3] variable */) * (data->localData[0]->realVars[424] /* MatStm2.tau[3,1] variable */) + (data->localData[0]->realVars[443] /* MatStm2.theta_dew[4] variable */) * (data->localData[0]->realVars[428] /* MatStm2.tau[4,1] variable */);
  TRACE_POP
}
/*
equation index: 806
type: SIMPLE_ASSIGN
MatStm2._S_dew[3] = MatStm2.theta_dew[1] * MatStm2.tau[1,3] + MatStm2.theta_dew[2] * MatStm2.tau[2,3] + MatStm2.theta_dew[3] * MatStm2.tau[3,3] + MatStm2.theta_dew[4] * MatStm2.tau[4,3]
*/
void Flowsheet_eqFunction_806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,806};
  data->localData[0]->realVars[311] /* MatStm2.S_dew[3] variable */ = (data->localData[0]->realVars[440] /* MatStm2.theta_dew[1] variable */) * (data->localData[0]->realVars[418] /* MatStm2.tau[1,3] variable */) + (data->localData[0]->realVars[441] /* MatStm2.theta_dew[2] variable */) * (data->localData[0]->realVars[422] /* MatStm2.tau[2,3] variable */) + (data->localData[0]->realVars[442] /* MatStm2.theta_dew[3] variable */) * (data->localData[0]->realVars[426] /* MatStm2.tau[3,3] variable */) + (data->localData[0]->realVars[443] /* MatStm2.theta_dew[4] variable */) * (data->localData[0]->realVars[430] /* MatStm2.tau[4,3] variable */);
  TRACE_POP
}
/*
equation index: 807
type: SIMPLE_ASSIGN
MatStm2._S_dew[4] = MatStm2.theta_dew[1] * MatStm2.tau[1,4] + MatStm2.theta_dew[2] * MatStm2.tau[2,4] + MatStm2.theta_dew[3] * MatStm2.tau[3,4] + MatStm2.theta_dew[4] * MatStm2.tau[4,4]
*/
void Flowsheet_eqFunction_807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,807};
  data->localData[0]->realVars[312] /* MatStm2.S_dew[4] variable */ = (data->localData[0]->realVars[440] /* MatStm2.theta_dew[1] variable */) * (data->localData[0]->realVars[419] /* MatStm2.tau[1,4] variable */) + (data->localData[0]->realVars[441] /* MatStm2.theta_dew[2] variable */) * (data->localData[0]->realVars[423] /* MatStm2.tau[2,4] variable */) + (data->localData[0]->realVars[442] /* MatStm2.theta_dew[3] variable */) * (data->localData[0]->realVars[427] /* MatStm2.tau[3,4] variable */) + (data->localData[0]->realVars[443] /* MatStm2.theta_dew[4] variable */) * (data->localData[0]->realVars[431] /* MatStm2.tau[4,4] variable */);
  TRACE_POP
}
/*
equation index: 808
type: SIMPLE_ASSIGN
$cse41 = log(MatStm2.J_dew[2] / MatStm2.L_dew[2])
*/
void Flowsheet_eqFunction_808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,808};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->localData[0]->realVars[284] /* MatStm2.J_dew[2] variable */,data->localData[0]->realVars[292] /* MatStm2.L_dew[2] variable */,"MatStm2.L_dew[2]",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J_dew[2] / MatStm2.L_dew[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[47] /* $cse41 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 809
type: SIMPLE_ASSIGN
MatStm2._gammac_dew[2] = exp(1.0 + $cse40 + (-5.0) * MatStm2.q[2] * (1.0 + $cse41 - MatStm2.J_dew[2] / MatStm2.L_dew[2]) - MatStm2.J_dew[2])
*/
void Flowsheet_eqFunction_809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,809};
  data->localData[0]->realVars[377] /* MatStm2.gammac_dew[2] variable */ = exp(1.0 + data->localData[0]->realVars[46] /* $cse40 variable */ + (-5.0) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (1.0 + data->localData[0]->realVars[47] /* $cse41 variable */ - (DIVISION_SIM(data->localData[0]->realVars[284] /* MatStm2.J_dew[2] variable */,data->localData[0]->realVars[292] /* MatStm2.L_dew[2] variable */,"MatStm2.L_dew[2]",equationIndexes)))) - data->localData[0]->realVars[284] /* MatStm2.J_dew[2] variable */);
  TRACE_POP
}
/*
equation index: 810
type: SIMPLE_ASSIGN
$cse33 = log(MatStm2.gammac_dew[2])
*/
void Flowsheet_eqFunction_810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,810};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[377] /* MatStm2.gammac_dew[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammac_dew[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[38] /* $cse33 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 811
type: SIMPLE_ASSIGN
MatStm2._gammaDew[2] = exp($cse32 + $cse33)
*/
void Flowsheet_eqFunction_811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,811};
  data->localData[0]->realVars[371] /* MatStm2.gammaDew[2] variable */ = exp(data->localData[0]->realVars[37] /* $cse32 variable */ + data->localData[0]->realVars[38] /* $cse33 variable */);
  TRACE_POP
}
/*
equation index: 812
type: SIMPLE_ASSIGN
MatStm2._gammar_dew[2] = exp($cse32)
*/
void Flowsheet_eqFunction_812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,812};
  data->localData[0]->realVars[383] /* MatStm2.gammar_dew[2] variable */ = exp(data->localData[0]->realVars[37] /* $cse32 variable */);
  TRACE_POP
}
/*
equation index: 826
type: ALGORITHM

  $TMP_MatStm2$Pgammar_dew$rB2$lB_822 := $START.MatStm2.gammar_dew[2];
  $TMP_MatStm2$Pgammar_dew$rB1$lB_822 := $START.MatStm2.gammar_dew[1];
  $TMP_MatStm2$Psum_dew$rB2$lB_822 := $START.MatStm2.sum_dew[2];
  $TMP_MatStm2$Psum_dew$rB1$lB_822 := $START.MatStm2.sum_dew[1];
  {$TMP_MatStm2$Psum_dew$rB1$lB_822, $TMP_MatStm2$Psum_dew$rB2$lB_822} := {0.0, 0.0};
  for j in 1:4 loop
    for i in 1:2 loop
      MatStm2.sum_dew[i] := MatStm2.sum_dew[i] + MatStm2.theta_dew[j] * MatStm2.B[i,j] / MatStm2.S_dew[j] - MatStm2.e[j,i] * log(MatStm2.B[i,j] / MatStm2.S_dew[j]);
      MatStm2.gammar_dew[i] := exp(MatStm2.q[i] * (1.0 - MatStm2.sum_dew[i]));
    end for;
  end for;
*/
void Flowsheet_eqFunction_826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,826};
  modelica_real tmp0;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  data->localData[0]->realVars[5] /* $TMP_MatStm2$Pgammar_dew$rB2$lB_822 variable */ = data->modelData->realVarsData[383].attribute /* MatStm2.gammar_dew[2] variable */.start;

  data->localData[0]->realVars[4] /* $TMP_MatStm2$Pgammar_dew$rB1$lB_822 variable */ = data->modelData->realVarsData[382].attribute /* MatStm2.gammar_dew[1] variable */.start;

  data->localData[0]->realVars[7] /* $TMP_MatStm2$Psum_dew$rB2$lB_822 variable */ = data->modelData->realVarsData[415].attribute /* MatStm2.sum_dew[2] variable */.start;

  data->localData[0]->realVars[6] /* $TMP_MatStm2$Psum_dew$rB1$lB_822 variable */ = data->modelData->realVarsData[414].attribute /* MatStm2.sum_dew[1] variable */.start;

  tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = ((modelica_integer) 4);
  if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
  {
    modelica_integer $Pj;
    for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp4, tmp6); $Pj += tmp5)
    {
      tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = ((modelica_integer) 2);
      if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
      {
        modelica_integer $Pi;
        for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp1, tmp3); $Pi += tmp2)
        {
          tmp0 = DIVISION_SIM((&data->localData[0]->realVars[271] /* MatStm2.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[309] /* MatStm2.S_dew[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm2.S_dew[j]",equationIndexes);
          if(!(tmp0 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
            throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.B[i,j] / MatStm2.S_dew[j]) was %g should be > 0", tmp0);
          }
          (&data->localData[0]->realVars[414] /* MatStm2.sum_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = (&data->localData[0]->realVars[414] /* MatStm2.sum_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] + ((&data->localData[0]->realVars[440] /* MatStm2.theta_dew[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)]) * (DIVISION_SIM((&data->localData[0]->realVars[271] /* MatStm2.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[309] /* MatStm2.S_dew[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm2.S_dew[j]",equationIndexes)) - (((&data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, (modelica_integer)$Pj, (modelica_integer)$Pi)]) * (log(tmp0)));

          (&data->localData[0]->realVars[382] /* MatStm2.gammar_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = exp(((&data->localData[0]->realVars[397] /* MatStm2.q[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * (1.0 - (&data->localData[0]->realVars[414] /* MatStm2.sum_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
        }
      }
    }
  }
  TRACE_POP
}

void residualFunc829(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,829};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  /* iteration variables */
  for (i=0; i<15; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<15; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[414] /* MatStm2.sum_dew[1] variable */ = xloc[0];
  data->localData[0]->realVars[415] /* MatStm2.sum_dew[2] variable */ = xloc[1];
  data->localData[0]->realVars[37] /* $cse32 variable */ = xloc[2];
  data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */ = xloc[3];
  data->localData[0]->realVars[298] /* MatStm2.Pdew variable */ = xloc[4];
  data->localData[0]->realVars[35] /* $cse30 variable */ = xloc[5];
  data->localData[0]->realVars[291] /* MatStm2.L_dew[1] variable */ = xloc[6];
  data->localData[0]->realVars[284] /* MatStm2.J_dew[2] variable */ = xloc[7];
  data->localData[0]->realVars[283] /* MatStm2.J_dew[1] variable */ = xloc[8];
  data->localData[0]->realVars[448] /* MatStm2.totMolFlo[2] variable */ = xloc[9];
  data->localData[0]->realVars[313] /* MatStm2.T variable */ = xloc[10];
  data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */ = xloc[11];
  data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */ = xloc[12];
  data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */ = xloc[13];
  data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */ = xloc[14];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_718(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_719(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_720(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_721(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_722(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_723(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_724(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_725(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_726(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_727(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_728(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_729(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_730(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_731(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_732(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_733(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_734(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_735(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_736(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_737(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_738(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_739(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_740(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_741(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_742(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_743(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_744(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_745(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_746(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_747(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_748(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_749(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_750(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_751(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_752(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_753(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_754(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_755(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_756(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_757(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_758(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_759(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_760(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_761(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_762(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_763(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_764(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_765(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_766(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_767(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_768(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_769(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_770(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_771(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_772(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_773(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_774(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_775(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_776(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_777(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_778(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_779(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_780(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_781(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_782(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_783(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_784(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_785(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_786(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_787(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_788(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_789(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_790(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_791(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_792(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_793(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_794(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_795(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_796(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_797(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_798(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_799(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_800(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_801(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_802(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_803(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_804(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_805(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_806(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_807(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_808(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_809(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_810(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_811(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_812(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_826(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[400] /* MatStm2.r[2] variable */ - ((data->localData[0]->realVars[284] /* MatStm2.J_dew[2] variable */) * ((data->localData[0]->realVars[399] /* MatStm2.r[1] variable */) * (data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[400] /* MatStm2.r[2] variable */) * (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */)));

  res[1] = data->localData[0]->realVars[397] /* MatStm2.q[1] variable */ - ((data->localData[0]->realVars[291] /* MatStm2.L_dew[1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */)));

  res[2] = data->localData[0]->realVars[4] /* $TMP_MatStm2$Pgammar_dew$rB1$lB_822 variable */ - data->localData[0]->realVars[382] /* MatStm2.gammar_dew[1] variable */;

  res[3] = data->localData[0]->realVars[5] /* $TMP_MatStm2$Pgammar_dew$rB2$lB_822 variable */ - data->localData[0]->realVars[383] /* MatStm2.gammar_dew[2] variable */;

  res[4] = data->localData[0]->realVars[6] /* $TMP_MatStm2$Psum_dew$rB1$lB_822 variable */ - data->localData[0]->realVars[414] /* MatStm2.sum_dew[1] variable */;

  res[5] = data->localData[0]->realVars[7] /* $TMP_MatStm2$Psum_dew$rB2$lB_822 variable */ - data->localData[0]->realVars[415] /* MatStm2.sum_dew[2] variable */;

  res[6] = data->localData[0]->realVars[399] /* MatStm2.r[1] variable */ - ((data->localData[0]->realVars[283] /* MatStm2.J_dew[1] variable */) * ((data->localData[0]->realVars[399] /* MatStm2.r[1] variable */) * (data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[400] /* MatStm2.r[2] variable */) * (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */)));

  res[7] = (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */) * (DIVISION_SIM(data->localData[0]->realVars[298] /* MatStm2.Pdew variable */,(data->localData[0]->realVars[300] /* MatStm2.Psat[2] variable */) * (data->localData[0]->realVars[371] /* MatStm2.gammaDew[2] variable */),"MatStm2.Psat[2] * MatStm2.gammaDew[2]",equationIndexes)) - data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */;

  res[8] = 1.0 - ((data->localData[0]->realVars[298] /* MatStm2.Pdew variable */) * ((data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) * (DIVISION_SIM(data->localData[0]->realVars[32] /* $cse28 variable */,data->localData[0]->realVars[370] /* MatStm2.gammaDew[1] variable */,"MatStm2.gammaDew[1]",equationIndexes)) + (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */) * (DIVISION_SIM(data->localData[0]->realVars[33] /* $cse29 variable */,data->localData[0]->realVars[371] /* MatStm2.gammaDew[2] variable */,"MatStm2.gammaDew[2]",equationIndexes))));

  res[9] = data->localData[0]->realVars[343] /* MatStm2.compMolFlo[3,2] variable */ + data->localData[0]->realVars[341] /* MatStm2.compMolFlo[2,2] variable */ - data->localData[0]->realVars[339] /* MatStm2.compMolFlo[1,2] variable */;

  RELATIONHYSTERESIS(tmp0, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, 101325.0, data->localData[0]->realVars[298] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp3 = (tmp1?data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[285] /* MatStm2.K[1] variable */) * (data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */)):data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */);
  }
  res[10] = tmp3;

  RELATIONHYSTERESIS(tmp4, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  res[11] = (tmp4?data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */ + data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */ + data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */ - 1.0);

  res[12] = data->localData[0]->realVars[342] /* MatStm2.compMolFlo[3,1] variable */ + data->localData[0]->realVars[340] /* MatStm2.compMolFlo[2,1] variable */ - data->localData[0]->realVars[338] /* MatStm2.compMolFlo[1,1] variable */;

  RELATIONHYSTERESIS(tmp5, 101325.0, data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */, 4, GreaterEq);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp6, 101325.0, data->localData[0]->realVars[298] /* MatStm2.Pdew variable */, 5, GreaterEq);
    tmp8 = (tmp6?data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[286] /* MatStm2.K[2] variable */) * (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */)):data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */);
  }
  res[13] = tmp8;

  res[14] = (data->localData[0]->realVars[451] /* MatStm2.vapPhasMolFrac variable */) * (data->localData[0]->realVars[390] /* MatStm2.phasMolEnth[3] variable */) + (data->localData[0]->realVars[385] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[389] /* MatStm2.phasMolEnth[2] variable */) - data->localData[0]->realVars[388] /* MatStm2.phasMolEnth[1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS829(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS829(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm2.sum_dew[1] */
  sysData->nominal[i] = data->modelData->realVarsData[414].attribute /* MatStm2.sum_dew[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[414].attribute /* MatStm2.sum_dew[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[414].attribute /* MatStm2.sum_dew[1] */.max;
  /* static nls data for MatStm2.sum_dew[2] */
  sysData->nominal[i] = data->modelData->realVarsData[415].attribute /* MatStm2.sum_dew[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[415].attribute /* MatStm2.sum_dew[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[415].attribute /* MatStm2.sum_dew[2] */.max;
  /* static nls data for $cse32 */
  sysData->nominal[i] = data->modelData->realVarsData[37].attribute /* $cse32 */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[37].attribute /* $cse32 */.min;
  sysData->max[i++]   = data->modelData->realVarsData[37].attribute /* $cse32 */.max;
  /* static nls data for MatStm2.dewLiqMolFrac[2] */
  sysData->nominal[i] = data->modelData->realVarsData[357].attribute /* MatStm2.dewLiqMolFrac[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[357].attribute /* MatStm2.dewLiqMolFrac[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[357].attribute /* MatStm2.dewLiqMolFrac[2] */.max;
  /* static nls data for MatStm2.Pdew */
  sysData->nominal[i] = data->modelData->realVarsData[298].attribute /* MatStm2.Pdew */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[298].attribute /* MatStm2.Pdew */.min;
  sysData->max[i++]   = data->modelData->realVarsData[298].attribute /* MatStm2.Pdew */.max;
  /* static nls data for $cse30 */
  sysData->nominal[i] = data->modelData->realVarsData[35].attribute /* $cse30 */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[35].attribute /* $cse30 */.min;
  sysData->max[i++]   = data->modelData->realVarsData[35].attribute /* $cse30 */.max;
  /* static nls data for MatStm2.L_dew[1] */
  sysData->nominal[i] = data->modelData->realVarsData[291].attribute /* MatStm2.L_dew[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[291].attribute /* MatStm2.L_dew[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[291].attribute /* MatStm2.L_dew[1] */.max;
  /* static nls data for MatStm2.J_dew[2] */
  sysData->nominal[i] = data->modelData->realVarsData[284].attribute /* MatStm2.J_dew[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[284].attribute /* MatStm2.J_dew[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[284].attribute /* MatStm2.J_dew[2] */.max;
  /* static nls data for MatStm2.J_dew[1] */
  sysData->nominal[i] = data->modelData->realVarsData[283].attribute /* MatStm2.J_dew[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[283].attribute /* MatStm2.J_dew[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[283].attribute /* MatStm2.J_dew[1] */.max;
  /* static nls data for MatStm2.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[448].attribute /* MatStm2.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[448].attribute /* MatStm2.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[448].attribute /* MatStm2.totMolFlo[2] */.max;
  /* static nls data for MatStm2.T */
  sysData->nominal[i] = data->modelData->realVarsData[313].attribute /* MatStm2.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[313].attribute /* MatStm2.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[313].attribute /* MatStm2.T */.max;
  /* static nls data for MatStm2.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[346].attribute /* MatStm2.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[346].attribute /* MatStm2.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[346].attribute /* MatStm2.compMolFrac[2,1] */.max;
  /* static nls data for MatStm2.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[349].attribute /* MatStm2.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[349].attribute /* MatStm2.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[349].attribute /* MatStm2.compMolFrac[3,2] */.max;
  /* static nls data for MatStm2.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[348].attribute /* MatStm2.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[348].attribute /* MatStm2.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[348].attribute /* MatStm2.compMolFrac[3,1] */.max;
  /* static nls data for MatStm2.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[347].attribute /* MatStm2.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[347].attribute /* MatStm2.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[347].attribute /* MatStm2.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS829(sysData);
}

void getIterationVarsNLS829(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[414] /* MatStm2.sum_dew[1] variable */;
  array[1] = data->localData[0]->realVars[415] /* MatStm2.sum_dew[2] variable */;
  array[2] = data->localData[0]->realVars[37] /* $cse32 variable */;
  array[3] = data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */;
  array[4] = data->localData[0]->realVars[298] /* MatStm2.Pdew variable */;
  array[5] = data->localData[0]->realVars[35] /* $cse30 variable */;
  array[6] = data->localData[0]->realVars[291] /* MatStm2.L_dew[1] variable */;
  array[7] = data->localData[0]->realVars[284] /* MatStm2.J_dew[2] variable */;
  array[8] = data->localData[0]->realVars[283] /* MatStm2.J_dew[1] variable */;
  array[9] = data->localData[0]->realVars[448] /* MatStm2.totMolFlo[2] variable */;
  array[10] = data->localData[0]->realVars[313] /* MatStm2.T variable */;
  array[11] = data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */;
  array[12] = data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */;
  array[13] = data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */;
  array[14] = data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */;
}


/* inner equations */

/*
equation index: 613
type: SIMPLE_ASSIGN
MatStm3._J[1] = MatStm3.r[1] / (MatStm3.r[1] * MatStm3.compMolFrac[2,1] + MatStm3.r[2] * MatStm3.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  data->localData[0]->realVars[462] /* MatStm3.J[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[582] /* MatStm3.r[1] variable */,(data->localData[0]->realVars[582] /* MatStm3.r[1] variable */) * (data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[583] /* MatStm3.r[2] variable */) * (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */),"MatStm3.r[1] * MatStm3.compMolFrac[2,1] + MatStm3.r[2] * MatStm3.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 614
type: SIMPLE_ASSIGN
MatStm3._L[1] = MatStm3.q[1] / (MatStm3.q[1] * MatStm3.compMolFrac[2,1] + MatStm3.q[2] * MatStm3.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  data->localData[0]->realVars[470] /* MatStm3.L[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[580] /* MatStm3.q[1] variable */,(data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */),"MatStm3.q[1] * MatStm3.compMolFrac[2,1] + MatStm3.q[2] * MatStm3.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 615
type: SIMPLE_ASSIGN
MatStm3._J[2] = MatStm3.r[2] / (MatStm3.r[1] * MatStm3.compMolFrac[2,1] + MatStm3.r[2] * MatStm3.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  data->localData[0]->realVars[463] /* MatStm3.J[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[583] /* MatStm3.r[2] variable */,(data->localData[0]->realVars[582] /* MatStm3.r[1] variable */) * (data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[583] /* MatStm3.r[2] variable */) * (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */),"MatStm3.r[1] * MatStm3.compMolFrac[2,1] + MatStm3.r[2] * MatStm3.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 616
type: SIMPLE_ASSIGN
MatStm3._theta[1] = (MatStm3.compMolFrac[2,1] * MatStm3.q[1] * MatStm3.e[1,1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2] * MatStm3.e[1,2]) / (MatStm3.compMolFrac[2,1] * MatStm3.q[1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  data->localData[0]->realVars[615] /* MatStm3.theta[1] variable */ = DIVISION_SIM((data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */)) + (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[542] /* MatStm3.e[1,2] variable */)),(data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.compMolFrac[2,1] * MatStm3.q[1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 617
type: SIMPLE_ASSIGN
MatStm3._theta[2] = (MatStm3.compMolFrac[2,1] * MatStm3.q[1] * MatStm3.e[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2] * MatStm3.e[2,2]) / (MatStm3.compMolFrac[2,1] * MatStm3.q[1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  data->localData[0]->realVars[616] /* MatStm3.theta[2] variable */ = DIVISION_SIM((data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[543] /* MatStm3.e[2,1] variable */)) + (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[544] /* MatStm3.e[2,2] variable */)),(data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.compMolFrac[2,1] * MatStm3.q[1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 618
type: SIMPLE_ASSIGN
MatStm3._theta[3] = (MatStm3.compMolFrac[2,1] * MatStm3.q[1] * MatStm3.e[3,1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2] * MatStm3.e[3,2]) / (MatStm3.compMolFrac[2,1] * MatStm3.q[1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  data->localData[0]->realVars[617] /* MatStm3.theta[3] variable */ = DIVISION_SIM((data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[545] /* MatStm3.e[3,1] variable */)) + (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[546] /* MatStm3.e[3,2] variable */)),(data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.compMolFrac[2,1] * MatStm3.q[1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 619
type: SIMPLE_ASSIGN
MatStm3._L[2] = MatStm3.q[2] / (MatStm3.q[1] * MatStm3.compMolFrac[2,1] + MatStm3.q[2] * MatStm3.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  data->localData[0]->realVars[471] /* MatStm3.L[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[581] /* MatStm3.q[2] variable */,(data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */),"MatStm3.q[1] * MatStm3.compMolFrac[2,1] + MatStm3.q[2] * MatStm3.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 620
type: SIMPLE_ASSIGN
MatStm3._theta[4] = (MatStm3.compMolFrac[2,1] * MatStm3.q[1] * MatStm3.e[4,1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2] * MatStm3.e[4,2]) / (MatStm3.compMolFrac[2,1] * MatStm3.q[1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  data->localData[0]->realVars[618] /* MatStm3.theta[4] variable */ = DIVISION_SIM((data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[547] /* MatStm3.e[4,1] variable */)) + (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[548] /* MatStm3.e[4,2] variable */)),(data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.compMolFrac[2,1] * MatStm3.q[1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 621
type: SIMPLE_ASSIGN
MatStm3._S[1] = MatStm3.theta[1] * MatStm3.tau[1,1] + MatStm3.theta[2] * MatStm3.tau[2,1] + MatStm3.theta[3] * MatStm3.tau[3,1] + MatStm3.theta[4] * MatStm3.tau[4,1]
*/
void Flowsheet_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  data->localData[0]->realVars[484] /* MatStm3.S[1] variable */ = (data->localData[0]->realVars[615] /* MatStm3.theta[1] variable */) * (data->localData[0]->realVars[599] /* MatStm3.tau[1,1] variable */) + (data->localData[0]->realVars[616] /* MatStm3.theta[2] variable */) * (data->localData[0]->realVars[603] /* MatStm3.tau[2,1] variable */) + (data->localData[0]->realVars[617] /* MatStm3.theta[3] variable */) * (data->localData[0]->realVars[607] /* MatStm3.tau[3,1] variable */) + (data->localData[0]->realVars[618] /* MatStm3.theta[4] variable */) * (data->localData[0]->realVars[611] /* MatStm3.tau[4,1] variable */);
  TRACE_POP
}
/*
equation index: 622
type: SIMPLE_ASSIGN
MatStm3._S[2] = MatStm3.theta[1] * MatStm3.tau[1,2] + MatStm3.theta[2] * MatStm3.tau[2,2] + MatStm3.theta[3] * MatStm3.tau[3,2] + MatStm3.theta[4] * MatStm3.tau[4,2]
*/
void Flowsheet_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  data->localData[0]->realVars[485] /* MatStm3.S[2] variable */ = (data->localData[0]->realVars[615] /* MatStm3.theta[1] variable */) * (data->localData[0]->realVars[600] /* MatStm3.tau[1,2] variable */) + (data->localData[0]->realVars[616] /* MatStm3.theta[2] variable */) * (data->localData[0]->realVars[604] /* MatStm3.tau[2,2] variable */) + (data->localData[0]->realVars[617] /* MatStm3.theta[3] variable */) * (data->localData[0]->realVars[608] /* MatStm3.tau[3,2] variable */) + (data->localData[0]->realVars[618] /* MatStm3.theta[4] variable */) * (data->localData[0]->realVars[612] /* MatStm3.tau[4,2] variable */);
  TRACE_POP
}
/*
equation index: 623
type: SIMPLE_ASSIGN
MatStm3._S[3] = MatStm3.theta[1] * MatStm3.tau[1,3] + MatStm3.theta[2] * MatStm3.tau[2,3] + MatStm3.theta[3] * MatStm3.tau[3,3] + MatStm3.theta[4] * MatStm3.tau[4,3]
*/
void Flowsheet_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  data->localData[0]->realVars[486] /* MatStm3.S[3] variable */ = (data->localData[0]->realVars[615] /* MatStm3.theta[1] variable */) * (data->localData[0]->realVars[601] /* MatStm3.tau[1,3] variable */) + (data->localData[0]->realVars[616] /* MatStm3.theta[2] variable */) * (data->localData[0]->realVars[605] /* MatStm3.tau[2,3] variable */) + (data->localData[0]->realVars[617] /* MatStm3.theta[3] variable */) * (data->localData[0]->realVars[609] /* MatStm3.tau[3,3] variable */) + (data->localData[0]->realVars[618] /* MatStm3.theta[4] variable */) * (data->localData[0]->realVars[613] /* MatStm3.tau[4,3] variable */);
  TRACE_POP
}
/*
equation index: 624
type: SIMPLE_ASSIGN
MatStm3._S[4] = MatStm3.theta[1] * MatStm3.tau[1,4] + MatStm3.theta[2] * MatStm3.tau[2,4] + MatStm3.theta[3] * MatStm3.tau[3,4] + MatStm3.theta[4] * MatStm3.tau[4,4]
*/
void Flowsheet_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  data->localData[0]->realVars[487] /* MatStm3.S[4] variable */ = (data->localData[0]->realVars[615] /* MatStm3.theta[1] variable */) * (data->localData[0]->realVars[602] /* MatStm3.tau[1,4] variable */) + (data->localData[0]->realVars[616] /* MatStm3.theta[2] variable */) * (data->localData[0]->realVars[606] /* MatStm3.tau[2,4] variable */) + (data->localData[0]->realVars[617] /* MatStm3.theta[3] variable */) * (data->localData[0]->realVars[610] /* MatStm3.tau[3,4] variable */) + (data->localData[0]->realVars[618] /* MatStm3.theta[4] variable */) * (data->localData[0]->realVars[614] /* MatStm3.tau[4,4] variable */);
  TRACE_POP
}
/*
equation index: 625
type: ALGORITHM

  MatStm3.gammar[2] := $START.MatStm3.gammar[2];
  MatStm3.gammar[1] := $START.MatStm3.gammar[1];
  MatStm3.sum[2] := $START.MatStm3.sum[2];
  MatStm3.sum[1] := $START.MatStm3.sum[1];
  MatStm3.B[2,4] := $START.MatStm3.B[2,4];
  MatStm3.B[2,3] := $START.MatStm3.B[2,3];
  MatStm3.B[2,2] := $START.MatStm3.B[2,2];
  MatStm3.B[2,1] := $START.MatStm3.B[2,1];
  MatStm3.B[1,4] := $START.MatStm3.B[1,4];
  MatStm3.B[1,3] := $START.MatStm3.B[1,3];
  MatStm3.B[1,2] := $START.MatStm3.B[1,2];
  MatStm3.B[1,1] := $START.MatStm3.B[1,1];
  for i in 1:2 loop
    for j in 1:4 loop
      for l in 1:4 loop
        MatStm3.B[i,j] := MatStm3.e[1,i] * MatStm3.tau[1,j] + MatStm3.e[2,i] * MatStm3.tau[2,j] + MatStm3.e[3,i] * MatStm3.tau[3,j] + MatStm3.e[4,i] * MatStm3.tau[4,j];
      end for;
    end for;
  end for;
  MatStm3.sum[:] := {0.0, 0.0};
  for j in 1:4 loop
    for i in 1:2 loop
      MatStm3.sum[i] := MatStm3.sum[i] + MatStm3.theta[j] * MatStm3.B[i,j] / MatStm3.S[j] - MatStm3.e[j,i] * log(MatStm3.B[i,j] / MatStm3.S[j]);
      MatStm3.gammar[i] := exp(MatStm3.q[i] * (1.0 - MatStm3.sum[i]));
    end for;
  end for;
*/
void Flowsheet_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  modelica_integer tmp0;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  real_array tmp9;
  index_spec_t tmp10;
  real_array tmp11;
  modelica_real tmp12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  data->localData[0]->realVars[562] /* MatStm3.gammar[2] variable */ = data->modelData->realVarsData[562].attribute /* MatStm3.gammar[2] variable */.start;

  data->localData[0]->realVars[561] /* MatStm3.gammar[1] variable */ = data->modelData->realVarsData[561].attribute /* MatStm3.gammar[1] variable */.start;

  data->localData[0]->realVars[594] /* MatStm3.sum[2] variable */ = data->modelData->realVarsData[594].attribute /* MatStm3.sum[2] variable */.start;

  data->localData[0]->realVars[593] /* MatStm3.sum[1] variable */ = data->modelData->realVarsData[593].attribute /* MatStm3.sum[1] variable */.start;

  data->localData[0]->realVars[461] /* MatStm3.B[2,4] variable */ = data->modelData->realVarsData[461].attribute /* MatStm3.B[2,4] variable */.start;

  data->localData[0]->realVars[460] /* MatStm3.B[2,3] variable */ = data->modelData->realVarsData[460].attribute /* MatStm3.B[2,3] variable */.start;

  data->localData[0]->realVars[459] /* MatStm3.B[2,2] variable */ = data->modelData->realVarsData[459].attribute /* MatStm3.B[2,2] variable */.start;

  data->localData[0]->realVars[458] /* MatStm3.B[2,1] variable */ = data->modelData->realVarsData[458].attribute /* MatStm3.B[2,1] variable */.start;

  data->localData[0]->realVars[457] /* MatStm3.B[1,4] variable */ = data->modelData->realVarsData[457].attribute /* MatStm3.B[1,4] variable */.start;

  data->localData[0]->realVars[456] /* MatStm3.B[1,3] variable */ = data->modelData->realVarsData[456].attribute /* MatStm3.B[1,3] variable */.start;

  data->localData[0]->realVars[455] /* MatStm3.B[1,2] variable */ = data->modelData->realVarsData[455].attribute /* MatStm3.B[1,2] variable */.start;

  data->localData[0]->realVars[454] /* MatStm3.B[1,1] variable */ = data->modelData->realVarsData[454].attribute /* MatStm3.B[1,1] variable */.start;

  tmp6 = ((modelica_integer) 1); tmp7 = 1; tmp8 = ((modelica_integer) 2);
  if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp6, tmp8); $Pi += tmp7)
    {
      tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 4);
      if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
      {
        modelica_integer $Pj;
        for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp3, tmp5); $Pj += tmp4)
        {
          tmp0 = ((modelica_integer) 1); tmp1 = 1; tmp2 = ((modelica_integer) 4);
          if(!(((tmp1 > 0) && (tmp0 > tmp2)) || ((tmp1 < 0) && (tmp0 < tmp2))))
          {
            modelica_integer $Pl;
            for($Pl = ((modelica_integer) 1); in_range_integer($Pl, tmp0, tmp2); $Pl += tmp1)
            {
              (&data->localData[0]->realVars[454] /* MatStm3.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)] = ((&data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[599] /* MatStm3.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 1), (modelica_integer)$Pj)]) + ((&data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[599] /* MatStm3.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 2), (modelica_integer)$Pj)]) + ((&data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[599] /* MatStm3.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 3), (modelica_integer)$Pj)]) + ((&data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 4), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[599] /* MatStm3.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 4), (modelica_integer)$Pj)]);
            }
          }
        }
      }
    }
  }

  array_alloc_scalar_real_array(&tmp9, 2, (modelica_real)0.0, (modelica_real)0.0);
  create_index_spec(&tmp10, 1, (1), (int*)0, 'W');
  real_array_create(&tmp11, (modelica_real*)&data->localData[0]->realVars[593] /* MatStm3.sum[1] variable */, 1, 2);
  indexed_assign_real_array(tmp9, &tmp11, &tmp10);

  tmp16 = ((modelica_integer) 1); tmp17 = 1; tmp18 = ((modelica_integer) 4);
  if(!(((tmp17 > 0) && (tmp16 > tmp18)) || ((tmp17 < 0) && (tmp16 < tmp18))))
  {
    modelica_integer $Pj;
    for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp16, tmp18); $Pj += tmp17)
    {
      tmp13 = ((modelica_integer) 1); tmp14 = 1; tmp15 = ((modelica_integer) 2);
      if(!(((tmp14 > 0) && (tmp13 > tmp15)) || ((tmp14 < 0) && (tmp13 < tmp15))))
      {
        modelica_integer $Pi;
        for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp13, tmp15); $Pi += tmp14)
        {
          tmp12 = DIVISION_SIM((&data->localData[0]->realVars[454] /* MatStm3.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[484] /* MatStm3.S[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm3.S[j]",equationIndexes);
          if(!(tmp12 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
            throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.B[i,j] / MatStm3.S[j]) was %g should be > 0", tmp12);
          }
          (&data->localData[0]->realVars[593] /* MatStm3.sum[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = (&data->localData[0]->realVars[593] /* MatStm3.sum[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] + ((&data->localData[0]->realVars[615] /* MatStm3.theta[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)]) * (DIVISION_SIM((&data->localData[0]->realVars[454] /* MatStm3.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[484] /* MatStm3.S[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm3.S[j]",equationIndexes)) - (((&data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, (modelica_integer)$Pj, (modelica_integer)$Pi)]) * (log(tmp12)));

          (&data->localData[0]->realVars[561] /* MatStm3.gammar[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = exp(((&data->localData[0]->realVars[580] /* MatStm3.q[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * (1.0 - (&data->localData[0]->realVars[593] /* MatStm3.sum[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 626
type: SIMPLE_ASSIGN
$cse75 = log(MatStm3.J[1] / MatStm3.L[1])
*/
void Flowsheet_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->localData[0]->realVars[462] /* MatStm3.J[1] variable */,data->localData[0]->realVars[470] /* MatStm3.L[1] variable */,"MatStm3.L[1]",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J[1] / MatStm3.L[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[84] /* $cse75 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 627
type: SIMPLE_ASSIGN
$cse77 = log(MatStm3.J[2] / MatStm3.L[2])
*/
void Flowsheet_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->localData[0]->realVars[463] /* MatStm3.J[2] variable */,data->localData[0]->realVars[471] /* MatStm3.L[2] variable */,"MatStm3.L[2]",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J[2] / MatStm3.L[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[86] /* $cse77 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 628
type: SIMPLE_ASSIGN
$cse74 = log(MatStm3.J[1])
*/
void Flowsheet_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[462] /* MatStm3.J[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[83] /* $cse74 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 629
type: SIMPLE_ASSIGN
MatStm3._gammac[1] = exp(1.0 + $cse74 + (-5.0) * MatStm3.q[1] * (1.0 + $cse75 - MatStm3.J[1] / MatStm3.L[1]) - MatStm3.J[1])
*/
void Flowsheet_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  data->localData[0]->realVars[555] /* MatStm3.gammac[1] variable */ = exp(1.0 + data->localData[0]->realVars[83] /* $cse74 variable */ + (-5.0) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (1.0 + data->localData[0]->realVars[84] /* $cse75 variable */ - (DIVISION_SIM(data->localData[0]->realVars[462] /* MatStm3.J[1] variable */,data->localData[0]->realVars[470] /* MatStm3.L[1] variable */,"MatStm3.L[1]",equationIndexes)))) - data->localData[0]->realVars[462] /* MatStm3.J[1] variable */);
  TRACE_POP
}
/*
equation index: 630
type: SIMPLE_ASSIGN
$cse76 = log(MatStm3.J[2])
*/
void Flowsheet_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[463] /* MatStm3.J[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[85] /* $cse76 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 631
type: SIMPLE_ASSIGN
MatStm3._gammac[2] = exp(1.0 + $cse76 + (-5.0) * MatStm3.q[2] * (1.0 + $cse77 - MatStm3.J[2] / MatStm3.L[2]) - MatStm3.J[2])
*/
void Flowsheet_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  data->localData[0]->realVars[556] /* MatStm3.gammac[2] variable */ = exp(1.0 + data->localData[0]->realVars[85] /* $cse76 variable */ + (-5.0) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (1.0 + data->localData[0]->realVars[86] /* $cse77 variable */ - (DIVISION_SIM(data->localData[0]->realVars[463] /* MatStm3.J[2] variable */,data->localData[0]->realVars[471] /* MatStm3.L[2] variable */,"MatStm3.L[2]",equationIndexes)))) - data->localData[0]->realVars[463] /* MatStm3.J[2] variable */);
  TRACE_POP
}
/*
equation index: 632
type: SIMPLE_ASSIGN
$cse73 = log(MatStm3.gammac[2])
*/
void Flowsheet_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[556] /* MatStm3.gammac[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammac[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[82] /* $cse73 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 633
type: SIMPLE_ASSIGN
$cse71 = log(MatStm3.gammac[1])
*/
void Flowsheet_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[555] /* MatStm3.gammac[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammac[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[80] /* $cse71 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 634
type: SIMPLE_ASSIGN
$cse72 = log(MatStm3.gammar[2])
*/
void Flowsheet_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[562] /* MatStm3.gammar[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammar[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[81] /* $cse72 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 635
type: SIMPLE_ASSIGN
MatStm3._gamma[2] = exp($cse72 + $cse73)
*/
void Flowsheet_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  data->localData[0]->realVars[550] /* MatStm3.gamma[2] variable */ = exp(data->localData[0]->realVars[81] /* $cse72 variable */ + data->localData[0]->realVars[82] /* $cse73 variable */);
  TRACE_POP
}
/*
equation index: 636
type: SIMPLE_ASSIGN
MatStm3._K[2] = 9.869232667160129e-006 * MatStm3.gamma[2] * MatStm3.Psat[2]
*/
void Flowsheet_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  data->localData[0]->realVars[469] /* MatStm3.K[2] variable */ = (9.869232667160129e-006) * ((data->localData[0]->realVars[550] /* MatStm3.gamma[2] variable */) * (data->localData[0]->realVars[483] /* MatStm3.Psat[2] variable */));
  TRACE_POP
}
/*
equation index: 637
type: SIMPLE_ASSIGN
$cse70 = log(MatStm3.gammar[1])
*/
void Flowsheet_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[561] /* MatStm3.gammar[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammar[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[79] /* $cse70 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 638
type: SIMPLE_ASSIGN
MatStm3._gamma[1] = exp($cse70 + $cse71)
*/
void Flowsheet_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  data->localData[0]->realVars[549] /* MatStm3.gamma[1] variable */ = exp(data->localData[0]->realVars[79] /* $cse70 variable */ + data->localData[0]->realVars[80] /* $cse71 variable */);
  TRACE_POP
}
/*
equation index: 639
type: SIMPLE_ASSIGN
MatStm3._K[1] = 9.869232667160129e-006 * MatStm3.gamma[1] * MatStm3.Psat[1]
*/
void Flowsheet_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  data->localData[0]->realVars[468] /* MatStm3.K[1] variable */ = (9.869232667160129e-006) * ((data->localData[0]->realVars[549] /* MatStm3.gamma[1] variable */) * (data->localData[0]->realVars[482] /* MatStm3.Psat[1] variable */));
  TRACE_POP
}
/*
equation index: 640
type: ALGORITHM

  MatStm3.gammar_bubl[2] := $START.MatStm3.gammar_bubl[2];
  MatStm3.gammar_bubl[1] := $START.MatStm3.gammar_bubl[1];
  MatStm3.sum_bubl[2] := $START.MatStm3.sum_bubl[2];
  MatStm3.sum_bubl[1] := $START.MatStm3.sum_bubl[1];
  MatStm3.sum_bubl[:] := {0.0, 0.0};
  for j in 1:4 loop
    for i in 1:2 loop
      MatStm3.sum_bubl[i] := MatStm3.sum_bubl[i] + MatStm3.theta_bubl[j] * MatStm3.B[i,j] / MatStm3.S_bubl[j] - MatStm3.e[j,i] * log(MatStm3.B[i,j] / MatStm3.S_bubl[j]);
      MatStm3.gammar_bubl[i] := exp(MatStm3.q[i] * (1.0 - MatStm3.sum_bubl[i]));
    end for;
  end for;
*/
void Flowsheet_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_real tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[564] /* MatStm3.gammar_bubl[2] variable */ = data->modelData->realVarsData[564].attribute /* MatStm3.gammar_bubl[2] variable */.start;

  data->localData[0]->realVars[563] /* MatStm3.gammar_bubl[1] variable */ = data->modelData->realVarsData[563].attribute /* MatStm3.gammar_bubl[1] variable */.start;

  data->localData[0]->realVars[596] /* MatStm3.sum_bubl[2] variable */ = data->modelData->realVarsData[596].attribute /* MatStm3.sum_bubl[2] variable */.start;

  data->localData[0]->realVars[595] /* MatStm3.sum_bubl[1] variable */ = data->modelData->realVarsData[595].attribute /* MatStm3.sum_bubl[1] variable */.start;

  array_alloc_scalar_real_array(&tmp0, 2, (modelica_real)0.0, (modelica_real)0.0);
  create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
  real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[595] /* MatStm3.sum_bubl[1] variable */, 1, 2);
  indexed_assign_real_array(tmp0, &tmp2, &tmp1);

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 4);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pj;
    for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp7, tmp9); $Pj += tmp8)
    {
      tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = ((modelica_integer) 2);
      if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
      {
        modelica_integer $Pi;
        for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp4, tmp6); $Pi += tmp5)
        {
          tmp3 = DIVISION_SIM((&data->localData[0]->realVars[454] /* MatStm3.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[488] /* MatStm3.S_bubl[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm3.S_bubl[j]",equationIndexes);
          if(!(tmp3 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
            throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.B[i,j] / MatStm3.S_bubl[j]) was %g should be > 0", tmp3);
          }
          (&data->localData[0]->realVars[595] /* MatStm3.sum_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = (&data->localData[0]->realVars[595] /* MatStm3.sum_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] + ((&data->localData[0]->realVars[619] /* MatStm3.theta_bubl[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)]) * (DIVISION_SIM((&data->localData[0]->realVars[454] /* MatStm3.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[488] /* MatStm3.S_bubl[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm3.S_bubl[j]",equationIndexes)) - (((&data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, (modelica_integer)$Pj, (modelica_integer)$Pi)]) * (log(tmp3)));

          (&data->localData[0]->realVars[563] /* MatStm3.gammar_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = exp(((&data->localData[0]->realVars[580] /* MatStm3.q[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * (1.0 - (&data->localData[0]->realVars[595] /* MatStm3.sum_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 641
type: SIMPLE_ASSIGN
$cse64 = log(MatStm3.gammar_bubl[2])
*/
void Flowsheet_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[564] /* MatStm3.gammar_bubl[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammar_bubl[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[72] /* $cse64 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 642
type: SIMPLE_ASSIGN
MatStm3._gammaBubl[2] = exp($cse64 + $cse65)
*/
void Flowsheet_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  data->localData[0]->realVars[552] /* MatStm3.gammaBubl[2] variable */ = exp(data->localData[0]->realVars[72] /* $cse64 variable */ + data->localData[0]->realVars[73] /* $cse65 variable */);
  TRACE_POP
}
/*
equation index: 643
type: SIMPLE_ASSIGN
$cse62 = log(MatStm3.gammar_bubl[1])
*/
void Flowsheet_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[563] /* MatStm3.gammar_bubl[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammar_bubl[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[70] /* $cse62 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 644
type: SIMPLE_ASSIGN
MatStm3._gammaBubl[1] = exp($cse62 + $cse63)
*/
void Flowsheet_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  data->localData[0]->realVars[551] /* MatStm3.gammaBubl[1] variable */ = exp(data->localData[0]->realVars[70] /* $cse62 variable */ + data->localData[0]->realVars[71] /* $cse63 variable */);
  TRACE_POP
}
/*
equation index: 645
type: SIMPLE_ASSIGN
MatStm3._Pbubl = MatStm3.gammaBubl[1] * MatStm3.compMolFrac[1,1] * $cse54 + MatStm3.gammaBubl[2] * MatStm3.compMolFrac[1,2] * $cse55
*/
void Flowsheet_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */ = (data->localData[0]->realVars[551] /* MatStm3.gammaBubl[1] variable */) * ((data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[61] /* $cse54 variable */)) + (data->localData[0]->realVars[552] /* MatStm3.gammaBubl[2] variable */) * ((data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[62] /* $cse55 variable */));
  TRACE_POP
}
/*
equation index: 646
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  data->localData[0]->realVars[523] /* MatStm3.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[631] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 647
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  data->localData[0]->realVars[524] /* MatStm3.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[631] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 648
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac = 0.0125 * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  data->localData[0]->realVars[568] /* MatStm3.liqPhasMolFrac variable */ = (0.0125) * (data->localData[0]->realVars[631] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 649
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac[1] = 1.0 - MatStm3.liqPhasMolFrac
*/
void Flowsheet_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->localData[0]->realVars[636] /* Mixer1.inVapPhasMolFrac[1] variable */ = 1.0 - data->localData[0]->realVars[568] /* MatStm3.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 650
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[3] = 80.0 * Mixer1.inVapPhasMolFrac[1]
*/
void Flowsheet_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  data->localData[0]->realVars[632] /* MatStm3.totMolFlo[3] variable */ = (80.0) * (data->localData[0]->realVars[636] /* Mixer1.inVapPhasMolFrac[1] variable */);
  TRACE_POP
}
/*
equation index: 651
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  data->localData[0]->realVars[525] /* MatStm3.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[632] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 652
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  data->localData[0]->realVars[526] /* MatStm3.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[632] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 653
type: SIMPLE_ASSIGN
$cse66 = log(MatStm3.J_dew[1])
*/
void Flowsheet_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[466] /* MatStm3.J_dew[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J_dew[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[74] /* $cse66 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 654
type: SIMPLE_ASSIGN
$cse68 = log(MatStm3.J_dew[2])
*/
void Flowsheet_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[467] /* MatStm3.J_dew[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J_dew[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[76] /* $cse68 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 655
type: SIMPLE_ASSIGN
$cse67 = log(MatStm3.J_dew[1] / MatStm3.L_dew[1])
*/
void Flowsheet_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->localData[0]->realVars[466] /* MatStm3.J_dew[1] variable */,data->localData[0]->realVars[474] /* MatStm3.L_dew[1] variable */,"MatStm3.L_dew[1]",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J_dew[1] / MatStm3.L_dew[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[75] /* $cse67 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 656
type: SIMPLE_ASSIGN
MatStm3._gammac_dew[1] = exp(1.0 + $cse66 + (-5.0) * MatStm3.q[1] * (1.0 + $cse67 - MatStm3.J_dew[1] / MatStm3.L_dew[1]) - MatStm3.J_dew[1])
*/
void Flowsheet_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  data->localData[0]->realVars[559] /* MatStm3.gammac_dew[1] variable */ = exp(1.0 + data->localData[0]->realVars[74] /* $cse66 variable */ + (-5.0) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (1.0 + data->localData[0]->realVars[75] /* $cse67 variable */ - (DIVISION_SIM(data->localData[0]->realVars[466] /* MatStm3.J_dew[1] variable */,data->localData[0]->realVars[474] /* MatStm3.L_dew[1] variable */,"MatStm3.L_dew[1]",equationIndexes)))) - data->localData[0]->realVars[466] /* MatStm3.J_dew[1] variable */);
  TRACE_POP
}
/*
equation index: 657
type: SIMPLE_ASSIGN
$cse59 = log(MatStm3.gammac_dew[1])
*/
void Flowsheet_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[559] /* MatStm3.gammac_dew[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammac_dew[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[66] /* $cse59 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 658
type: SIMPLE_ASSIGN
MatStm3._gammaDew[1] = exp($cse58 + $cse59)
*/
void Flowsheet_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  data->localData[0]->realVars[553] /* MatStm3.gammaDew[1] variable */ = exp(data->localData[0]->realVars[65] /* $cse58 variable */ + data->localData[0]->realVars[66] /* $cse59 variable */);
  TRACE_POP
}
/*
equation index: 659
type: SIMPLE_ASSIGN
MatStm3._gammar_dew[1] = exp($cse58)
*/
void Flowsheet_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  data->localData[0]->realVars[565] /* MatStm3.gammar_dew[1] variable */ = exp(data->localData[0]->realVars[65] /* $cse58 variable */);
  TRACE_POP
}
/*
equation index: 660
type: SIMPLE_ASSIGN
MatStm3._dewLiqMolFrac[1] = MatStm3.compMolFrac[1,1] * MatStm3.Pdew / (MatStm3.Psat[1] * MatStm3.gammaDew[1])
*/
void Flowsheet_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */ = (data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) * (DIVISION_SIM(data->localData[0]->realVars[481] /* MatStm3.Pdew variable */,(data->localData[0]->realVars[482] /* MatStm3.Psat[1] variable */) * (data->localData[0]->realVars[553] /* MatStm3.gammaDew[1] variable */),"MatStm3.Psat[1] * MatStm3.gammaDew[1]",equationIndexes));
  TRACE_POP
}
/*
equation index: 661
type: SIMPLE_ASSIGN
MatStm3._theta_dew[2] = (MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] * MatStm3.e[2,1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2] * MatStm3.e[2,2]) / (MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->localData[0]->realVars[624] /* MatStm3.theta_dew[2] variable */ = DIVISION_SIM((data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[543] /* MatStm3.e[2,1] variable */)) + (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[544] /* MatStm3.e[2,2] variable */)),(data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 662
type: SIMPLE_ASSIGN
MatStm3._L_dew[2] = MatStm3.q[2] / (MatStm3.q[1] * MatStm3.dewLiqMolFrac[1] + MatStm3.q[2] * MatStm3.dewLiqMolFrac[2])
*/
void Flowsheet_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  data->localData[0]->realVars[475] /* MatStm3.L_dew[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[581] /* MatStm3.q[2] variable */,(data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */),"MatStm3.q[1] * MatStm3.dewLiqMolFrac[1] + MatStm3.q[2] * MatStm3.dewLiqMolFrac[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 663
type: SIMPLE_ASSIGN
MatStm3._theta_dew[1] = (MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] * MatStm3.e[1,1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2] * MatStm3.e[1,2]) / (MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->localData[0]->realVars[623] /* MatStm3.theta_dew[1] variable */ = DIVISION_SIM((data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */)) + (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[542] /* MatStm3.e[1,2] variable */)),(data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 664
type: SIMPLE_ASSIGN
MatStm3._theta_dew[3] = (MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] * MatStm3.e[3,1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2] * MatStm3.e[3,2]) / (MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  data->localData[0]->realVars[625] /* MatStm3.theta_dew[3] variable */ = DIVISION_SIM((data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[545] /* MatStm3.e[3,1] variable */)) + (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[546] /* MatStm3.e[3,2] variable */)),(data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 665
type: SIMPLE_ASSIGN
MatStm3._theta_dew[4] = (MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] * MatStm3.e[4,1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2] * MatStm3.e[4,2]) / (MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  data->localData[0]->realVars[626] /* MatStm3.theta_dew[4] variable */ = DIVISION_SIM((data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[547] /* MatStm3.e[4,1] variable */)) + (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[548] /* MatStm3.e[4,2] variable */)),(data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 666
type: SIMPLE_ASSIGN
MatStm3._S_dew[2] = MatStm3.theta_dew[1] * MatStm3.tau[1,2] + MatStm3.theta_dew[2] * MatStm3.tau[2,2] + MatStm3.theta_dew[3] * MatStm3.tau[3,2] + MatStm3.theta_dew[4] * MatStm3.tau[4,2]
*/
void Flowsheet_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  data->localData[0]->realVars[493] /* MatStm3.S_dew[2] variable */ = (data->localData[0]->realVars[623] /* MatStm3.theta_dew[1] variable */) * (data->localData[0]->realVars[600] /* MatStm3.tau[1,2] variable */) + (data->localData[0]->realVars[624] /* MatStm3.theta_dew[2] variable */) * (data->localData[0]->realVars[604] /* MatStm3.tau[2,2] variable */) + (data->localData[0]->realVars[625] /* MatStm3.theta_dew[3] variable */) * (data->localData[0]->realVars[608] /* MatStm3.tau[3,2] variable */) + (data->localData[0]->realVars[626] /* MatStm3.theta_dew[4] variable */) * (data->localData[0]->realVars[612] /* MatStm3.tau[4,2] variable */);
  TRACE_POP
}
/*
equation index: 667
type: SIMPLE_ASSIGN
MatStm3._S_dew[1] = MatStm3.theta_dew[1] * MatStm3.tau[1,1] + MatStm3.theta_dew[2] * MatStm3.tau[2,1] + MatStm3.theta_dew[3] * MatStm3.tau[3,1] + MatStm3.theta_dew[4] * MatStm3.tau[4,1]
*/
void Flowsheet_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->localData[0]->realVars[492] /* MatStm3.S_dew[1] variable */ = (data->localData[0]->realVars[623] /* MatStm3.theta_dew[1] variable */) * (data->localData[0]->realVars[599] /* MatStm3.tau[1,1] variable */) + (data->localData[0]->realVars[624] /* MatStm3.theta_dew[2] variable */) * (data->localData[0]->realVars[603] /* MatStm3.tau[2,1] variable */) + (data->localData[0]->realVars[625] /* MatStm3.theta_dew[3] variable */) * (data->localData[0]->realVars[607] /* MatStm3.tau[3,1] variable */) + (data->localData[0]->realVars[626] /* MatStm3.theta_dew[4] variable */) * (data->localData[0]->realVars[611] /* MatStm3.tau[4,1] variable */);
  TRACE_POP
}
/*
equation index: 668
type: SIMPLE_ASSIGN
MatStm3._S_dew[3] = MatStm3.theta_dew[1] * MatStm3.tau[1,3] + MatStm3.theta_dew[2] * MatStm3.tau[2,3] + MatStm3.theta_dew[3] * MatStm3.tau[3,3] + MatStm3.theta_dew[4] * MatStm3.tau[4,3]
*/
void Flowsheet_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  data->localData[0]->realVars[494] /* MatStm3.S_dew[3] variable */ = (data->localData[0]->realVars[623] /* MatStm3.theta_dew[1] variable */) * (data->localData[0]->realVars[601] /* MatStm3.tau[1,3] variable */) + (data->localData[0]->realVars[624] /* MatStm3.theta_dew[2] variable */) * (data->localData[0]->realVars[605] /* MatStm3.tau[2,3] variable */) + (data->localData[0]->realVars[625] /* MatStm3.theta_dew[3] variable */) * (data->localData[0]->realVars[609] /* MatStm3.tau[3,3] variable */) + (data->localData[0]->realVars[626] /* MatStm3.theta_dew[4] variable */) * (data->localData[0]->realVars[613] /* MatStm3.tau[4,3] variable */);
  TRACE_POP
}
/*
equation index: 669
type: SIMPLE_ASSIGN
MatStm3._S_dew[4] = MatStm3.theta_dew[1] * MatStm3.tau[1,4] + MatStm3.theta_dew[2] * MatStm3.tau[2,4] + MatStm3.theta_dew[3] * MatStm3.tau[3,4] + MatStm3.theta_dew[4] * MatStm3.tau[4,4]
*/
void Flowsheet_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  data->localData[0]->realVars[495] /* MatStm3.S_dew[4] variable */ = (data->localData[0]->realVars[623] /* MatStm3.theta_dew[1] variable */) * (data->localData[0]->realVars[602] /* MatStm3.tau[1,4] variable */) + (data->localData[0]->realVars[624] /* MatStm3.theta_dew[2] variable */) * (data->localData[0]->realVars[606] /* MatStm3.tau[2,4] variable */) + (data->localData[0]->realVars[625] /* MatStm3.theta_dew[3] variable */) * (data->localData[0]->realVars[610] /* MatStm3.tau[3,4] variable */) + (data->localData[0]->realVars[626] /* MatStm3.theta_dew[4] variable */) * (data->localData[0]->realVars[614] /* MatStm3.tau[4,4] variable */);
  TRACE_POP
}
/*
equation index: 670
type: SIMPLE_ASSIGN
$cse69 = log(MatStm3.J_dew[2] / MatStm3.L_dew[2])
*/
void Flowsheet_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->localData[0]->realVars[467] /* MatStm3.J_dew[2] variable */,data->localData[0]->realVars[475] /* MatStm3.L_dew[2] variable */,"MatStm3.L_dew[2]",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J_dew[2] / MatStm3.L_dew[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[77] /* $cse69 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 671
type: SIMPLE_ASSIGN
MatStm3._gammac_dew[2] = exp(1.0 + $cse68 + (-5.0) * MatStm3.q[2] * (1.0 + $cse69 - MatStm3.J_dew[2] / MatStm3.L_dew[2]) - MatStm3.J_dew[2])
*/
void Flowsheet_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  data->localData[0]->realVars[560] /* MatStm3.gammac_dew[2] variable */ = exp(1.0 + data->localData[0]->realVars[76] /* $cse68 variable */ + (-5.0) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (1.0 + data->localData[0]->realVars[77] /* $cse69 variable */ - (DIVISION_SIM(data->localData[0]->realVars[467] /* MatStm3.J_dew[2] variable */,data->localData[0]->realVars[475] /* MatStm3.L_dew[2] variable */,"MatStm3.L_dew[2]",equationIndexes)))) - data->localData[0]->realVars[467] /* MatStm3.J_dew[2] variable */);
  TRACE_POP
}
/*
equation index: 672
type: SIMPLE_ASSIGN
$cse61 = log(MatStm3.gammac_dew[2])
*/
void Flowsheet_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[560] /* MatStm3.gammac_dew[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammac_dew[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[69] /* $cse61 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 673
type: SIMPLE_ASSIGN
MatStm3._gammaDew[2] = exp($cse60 + $cse61)
*/
void Flowsheet_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  data->localData[0]->realVars[554] /* MatStm3.gammaDew[2] variable */ = exp(data->localData[0]->realVars[68] /* $cse60 variable */ + data->localData[0]->realVars[69] /* $cse61 variable */);
  TRACE_POP
}
/*
equation index: 674
type: SIMPLE_ASSIGN
MatStm3._gammar_dew[2] = exp($cse60)
*/
void Flowsheet_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  data->localData[0]->realVars[566] /* MatStm3.gammar_dew[2] variable */ = exp(data->localData[0]->realVars[68] /* $cse60 variable */);
  TRACE_POP
}
/*
equation index: 686
type: ALGORITHM

  $TMP_MatStm3$Pgammar_dew$rB2$lB_682 := $START.MatStm3.gammar_dew[2];
  $TMP_MatStm3$Pgammar_dew$rB1$lB_682 := $START.MatStm3.gammar_dew[1];
  $TMP_MatStm3$Psum_dew$rB2$lB_682 := $START.MatStm3.sum_dew[2];
  $TMP_MatStm3$Psum_dew$rB1$lB_682 := $START.MatStm3.sum_dew[1];
  {$TMP_MatStm3$Psum_dew$rB1$lB_682, $TMP_MatStm3$Psum_dew$rB2$lB_682} := {0.0, 0.0};
  for j in 1:4 loop
    for i in 1:2 loop
      MatStm3.sum_dew[i] := MatStm3.sum_dew[i] + MatStm3.theta_dew[j] * MatStm3.B[i,j] / MatStm3.S_dew[j] - MatStm3.e[j,i] * log(MatStm3.B[i,j] / MatStm3.S_dew[j]);
      MatStm3.gammar_dew[i] := exp(MatStm3.q[i] * (1.0 - MatStm3.sum_dew[i]));
    end for;
  end for;
*/
void Flowsheet_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  modelica_real tmp0;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  data->localData[0]->realVars[9] /* $TMP_MatStm3$Pgammar_dew$rB2$lB_682 variable */ = data->modelData->realVarsData[566].attribute /* MatStm3.gammar_dew[2] variable */.start;

  data->localData[0]->realVars[8] /* $TMP_MatStm3$Pgammar_dew$rB1$lB_682 variable */ = data->modelData->realVarsData[565].attribute /* MatStm3.gammar_dew[1] variable */.start;

  data->localData[0]->realVars[11] /* $TMP_MatStm3$Psum_dew$rB2$lB_682 variable */ = data->modelData->realVarsData[598].attribute /* MatStm3.sum_dew[2] variable */.start;

  data->localData[0]->realVars[10] /* $TMP_MatStm3$Psum_dew$rB1$lB_682 variable */ = data->modelData->realVarsData[597].attribute /* MatStm3.sum_dew[1] variable */.start;

  tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = ((modelica_integer) 4);
  if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
  {
    modelica_integer $Pj;
    for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp4, tmp6); $Pj += tmp5)
    {
      tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = ((modelica_integer) 2);
      if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
      {
        modelica_integer $Pi;
        for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp1, tmp3); $Pi += tmp2)
        {
          tmp0 = DIVISION_SIM((&data->localData[0]->realVars[454] /* MatStm3.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[492] /* MatStm3.S_dew[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm3.S_dew[j]",equationIndexes);
          if(!(tmp0 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
            throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.B[i,j] / MatStm3.S_dew[j]) was %g should be > 0", tmp0);
          }
          (&data->localData[0]->realVars[597] /* MatStm3.sum_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = (&data->localData[0]->realVars[597] /* MatStm3.sum_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] + ((&data->localData[0]->realVars[623] /* MatStm3.theta_dew[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)]) * (DIVISION_SIM((&data->localData[0]->realVars[454] /* MatStm3.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[492] /* MatStm3.S_dew[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm3.S_dew[j]",equationIndexes)) - (((&data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, (modelica_integer)$Pj, (modelica_integer)$Pi)]) * (log(tmp0)));

          (&data->localData[0]->realVars[565] /* MatStm3.gammar_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = exp(((&data->localData[0]->realVars[580] /* MatStm3.q[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * (1.0 - (&data->localData[0]->realVars[597] /* MatStm3.sum_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
        }
      }
    }
  }
  TRACE_POP
}

void residualFunc690(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,690};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  /* iteration variables */
  for (i=0; i<14; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<14; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[597] /* MatStm3.sum_dew[1] variable */ = xloc[0];
  data->localData[0]->realVars[598] /* MatStm3.sum_dew[2] variable */ = xloc[1];
  data->localData[0]->realVars[68] /* $cse60 variable */ = xloc[2];
  data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */ = xloc[3];
  data->localData[0]->realVars[481] /* MatStm3.Pdew variable */ = xloc[4];
  data->localData[0]->realVars[65] /* $cse58 variable */ = xloc[5];
  data->localData[0]->realVars[474] /* MatStm3.L_dew[1] variable */ = xloc[6];
  data->localData[0]->realVars[467] /* MatStm3.J_dew[2] variable */ = xloc[7];
  data->localData[0]->realVars[466] /* MatStm3.J_dew[1] variable */ = xloc[8];
  data->localData[0]->realVars[631] /* MatStm3.totMolFlo[2] variable */ = xloc[9];
  data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */ = xloc[10];
  data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */ = xloc[11];
  data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */ = xloc[12];
  data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */ = xloc[13];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_613(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_614(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_615(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_616(data, threadData);

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

  /* local constraints */
  Flowsheet_eqFunction_626(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_627(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_628(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_629(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_630(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_631(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_632(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_633(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_634(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_635(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_636(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_637(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_638(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_639(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_640(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_641(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_642(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_643(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_644(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_645(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_646(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_647(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_648(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_649(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_650(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_651(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_652(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_653(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_654(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_655(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_656(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_657(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_658(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_659(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_660(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_661(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_662(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_663(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_664(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_665(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_666(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_667(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_668(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_669(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_670(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_671(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_672(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_673(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_674(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_686(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[526] /* MatStm3.compMolFlo[3,2] variable */ + data->localData[0]->realVars[524] /* MatStm3.compMolFlo[2,2] variable */ - data->localData[0]->realVars[522] /* MatStm3.compMolFlo[1,2] variable */;

  res[1] = data->localData[0]->realVars[583] /* MatStm3.r[2] variable */ - ((data->localData[0]->realVars[467] /* MatStm3.J_dew[2] variable */) * ((data->localData[0]->realVars[582] /* MatStm3.r[1] variable */) * (data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[583] /* MatStm3.r[2] variable */) * (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */)));

  res[2] = data->localData[0]->realVars[580] /* MatStm3.q[1] variable */ - ((data->localData[0]->realVars[474] /* MatStm3.L_dew[1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */)));

  res[3] = data->localData[0]->realVars[8] /* $TMP_MatStm3$Pgammar_dew$rB1$lB_682 variable */ - data->localData[0]->realVars[565] /* MatStm3.gammar_dew[1] variable */;

  res[4] = data->localData[0]->realVars[9] /* $TMP_MatStm3$Pgammar_dew$rB2$lB_682 variable */ - data->localData[0]->realVars[566] /* MatStm3.gammar_dew[2] variable */;

  res[5] = data->localData[0]->realVars[10] /* $TMP_MatStm3$Psum_dew$rB1$lB_682 variable */ - data->localData[0]->realVars[597] /* MatStm3.sum_dew[1] variable */;

  res[6] = data->localData[0]->realVars[11] /* $TMP_MatStm3$Psum_dew$rB2$lB_682 variable */ - data->localData[0]->realVars[598] /* MatStm3.sum_dew[2] variable */;

  res[7] = 1.0 - ((data->localData[0]->realVars[481] /* MatStm3.Pdew variable */) * ((data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) * (DIVISION_SIM(data->localData[0]->realVars[63] /* $cse56 variable */,data->localData[0]->realVars[553] /* MatStm3.gammaDew[1] variable */,"MatStm3.gammaDew[1]",equationIndexes)) + (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */) * (DIVISION_SIM(data->localData[0]->realVars[64] /* $cse57 variable */,data->localData[0]->realVars[554] /* MatStm3.gammaDew[2] variable */,"MatStm3.gammaDew[2]",equationIndexes))));

  res[8] = (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */) * (DIVISION_SIM(data->localData[0]->realVars[481] /* MatStm3.Pdew variable */,(data->localData[0]->realVars[483] /* MatStm3.Psat[2] variable */) * (data->localData[0]->realVars[554] /* MatStm3.gammaDew[2] variable */),"MatStm3.Psat[2] * MatStm3.gammaDew[2]",equationIndexes)) - data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */;

  res[9] = data->localData[0]->realVars[582] /* MatStm3.r[1] variable */ - ((data->localData[0]->realVars[466] /* MatStm3.J_dew[1] variable */) * ((data->localData[0]->realVars[582] /* MatStm3.r[1] variable */) * (data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[583] /* MatStm3.r[2] variable */) * (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */)));

  RELATIONHYSTERESIS(tmp0, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp1, 101325.0, data->localData[0]->realVars[481] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp3 = (tmp1?data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[468] /* MatStm3.K[1] variable */) * (data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */)):data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */);
  }
  res[10] = tmp3;

  res[11] = data->localData[0]->realVars[525] /* MatStm3.compMolFlo[3,1] variable */ + data->localData[0]->realVars[523] /* MatStm3.compMolFlo[2,1] variable */ - data->localData[0]->realVars[521] /* MatStm3.compMolFlo[1,1] variable */;

  RELATIONHYSTERESIS(tmp4, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  res[12] = (tmp4?data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */ + data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */ + data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */ - 1.0);

  RELATIONHYSTERESIS(tmp5, 101325.0, data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */, 0, GreaterEq);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp6, 101325.0, data->localData[0]->realVars[481] /* MatStm3.Pdew variable */, 1, GreaterEq);
    tmp8 = (tmp6?data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[469] /* MatStm3.K[2] variable */) * (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */)):data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */);
  }
  res[13] = tmp8;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS690(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS690(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm3.sum_dew[1] */
  sysData->nominal[i] = data->modelData->realVarsData[597].attribute /* MatStm3.sum_dew[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[597].attribute /* MatStm3.sum_dew[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[597].attribute /* MatStm3.sum_dew[1] */.max;
  /* static nls data for MatStm3.sum_dew[2] */
  sysData->nominal[i] = data->modelData->realVarsData[598].attribute /* MatStm3.sum_dew[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[598].attribute /* MatStm3.sum_dew[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[598].attribute /* MatStm3.sum_dew[2] */.max;
  /* static nls data for $cse60 */
  sysData->nominal[i] = data->modelData->realVarsData[68].attribute /* $cse60 */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[68].attribute /* $cse60 */.min;
  sysData->max[i++]   = data->modelData->realVarsData[68].attribute /* $cse60 */.max;
  /* static nls data for MatStm3.dewLiqMolFrac[2] */
  sysData->nominal[i] = data->modelData->realVarsData[540].attribute /* MatStm3.dewLiqMolFrac[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[540].attribute /* MatStm3.dewLiqMolFrac[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[540].attribute /* MatStm3.dewLiqMolFrac[2] */.max;
  /* static nls data for MatStm3.Pdew */
  sysData->nominal[i] = data->modelData->realVarsData[481].attribute /* MatStm3.Pdew */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[481].attribute /* MatStm3.Pdew */.min;
  sysData->max[i++]   = data->modelData->realVarsData[481].attribute /* MatStm3.Pdew */.max;
  /* static nls data for $cse58 */
  sysData->nominal[i] = data->modelData->realVarsData[65].attribute /* $cse58 */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[65].attribute /* $cse58 */.min;
  sysData->max[i++]   = data->modelData->realVarsData[65].attribute /* $cse58 */.max;
  /* static nls data for MatStm3.L_dew[1] */
  sysData->nominal[i] = data->modelData->realVarsData[474].attribute /* MatStm3.L_dew[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[474].attribute /* MatStm3.L_dew[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[474].attribute /* MatStm3.L_dew[1] */.max;
  /* static nls data for MatStm3.J_dew[2] */
  sysData->nominal[i] = data->modelData->realVarsData[467].attribute /* MatStm3.J_dew[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[467].attribute /* MatStm3.J_dew[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[467].attribute /* MatStm3.J_dew[2] */.max;
  /* static nls data for MatStm3.J_dew[1] */
  sysData->nominal[i] = data->modelData->realVarsData[466].attribute /* MatStm3.J_dew[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[466].attribute /* MatStm3.J_dew[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[466].attribute /* MatStm3.J_dew[1] */.max;
  /* static nls data for MatStm3.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[631].attribute /* MatStm3.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[631].attribute /* MatStm3.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[631].attribute /* MatStm3.totMolFlo[2] */.max;
  /* static nls data for MatStm3.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[529].attribute /* MatStm3.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[529].attribute /* MatStm3.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[529].attribute /* MatStm3.compMolFrac[2,1] */.max;
  /* static nls data for MatStm3.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[530].attribute /* MatStm3.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[530].attribute /* MatStm3.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[530].attribute /* MatStm3.compMolFrac[2,2] */.max;
  /* static nls data for MatStm3.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[532].attribute /* MatStm3.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[532].attribute /* MatStm3.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[532].attribute /* MatStm3.compMolFrac[3,2] */.max;
  /* static nls data for MatStm3.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[531].attribute /* MatStm3.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[531].attribute /* MatStm3.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[531].attribute /* MatStm3.compMolFrac[3,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS690(sysData);
}

void getIterationVarsNLS690(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[597] /* MatStm3.sum_dew[1] variable */;
  array[1] = data->localData[0]->realVars[598] /* MatStm3.sum_dew[2] variable */;
  array[2] = data->localData[0]->realVars[68] /* $cse60 variable */;
  array[3] = data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */;
  array[4] = data->localData[0]->realVars[481] /* MatStm3.Pdew variable */;
  array[5] = data->localData[0]->realVars[65] /* $cse58 variable */;
  array[6] = data->localData[0]->realVars[474] /* MatStm3.L_dew[1] variable */;
  array[7] = data->localData[0]->realVars[467] /* MatStm3.J_dew[2] variable */;
  array[8] = data->localData[0]->realVars[466] /* MatStm3.J_dew[1] variable */;
  array[9] = data->localData[0]->realVars[631] /* MatStm3.totMolFlo[2] variable */;
  array[10] = data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */;
  array[11] = data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */;
  array[12] = data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */;
  array[13] = data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */;
}


/* inner equations */

/*
equation index: 502
type: SIMPLE_ASSIGN
MatStm1._J[1] = MatStm1.r[1] / (MatStm1.r[1] * MatStm1.compMolFrac[2,1] + MatStm1.r[2] * MatStm1.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  data->localData[0]->realVars[97] /* MatStm1.J[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[217] /* MatStm1.r[1] variable */,(data->localData[0]->realVars[217] /* MatStm1.r[1] variable */) * (data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[218] /* MatStm1.r[2] variable */) * (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */),"MatStm1.r[1] * MatStm1.compMolFrac[2,1] + MatStm1.r[2] * MatStm1.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 503
type: SIMPLE_ASSIGN
MatStm1._L[1] = MatStm1.q[1] / (MatStm1.q[1] * MatStm1.compMolFrac[2,1] + MatStm1.q[2] * MatStm1.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  data->localData[0]->realVars[105] /* MatStm1.L[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[215] /* MatStm1.q[1] variable */,(data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */),"MatStm1.q[1] * MatStm1.compMolFrac[2,1] + MatStm1.q[2] * MatStm1.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 504
type: SIMPLE_ASSIGN
MatStm1._J[2] = MatStm1.r[2] / (MatStm1.r[1] * MatStm1.compMolFrac[2,1] + MatStm1.r[2] * MatStm1.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->localData[0]->realVars[98] /* MatStm1.J[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[218] /* MatStm1.r[2] variable */,(data->localData[0]->realVars[217] /* MatStm1.r[1] variable */) * (data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[218] /* MatStm1.r[2] variable */) * (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */),"MatStm1.r[1] * MatStm1.compMolFrac[2,1] + MatStm1.r[2] * MatStm1.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 505
type: SIMPLE_ASSIGN
MatStm1._L[2] = MatStm1.q[2] / (MatStm1.q[1] * MatStm1.compMolFrac[2,1] + MatStm1.q[2] * MatStm1.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  data->localData[0]->realVars[106] /* MatStm1.L[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[216] /* MatStm1.q[2] variable */,(data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */),"MatStm1.q[1] * MatStm1.compMolFrac[2,1] + MatStm1.q[2] * MatStm1.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 506
type: SIMPLE_ASSIGN
MatStm1._theta[2] = (MatStm1.compMolFrac[2,1] * MatStm1.q[1] * MatStm1.e[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2] * MatStm1.e[2,2]) / (MatStm1.compMolFrac[2,1] * MatStm1.q[1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->localData[0]->realVars[251] /* MatStm1.theta[2] variable */ = DIVISION_SIM((data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[178] /* MatStm1.e[2,1] variable */)) + (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[179] /* MatStm1.e[2,2] variable */)),(data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.compMolFrac[2,1] * MatStm1.q[1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 507
type: SIMPLE_ASSIGN
MatStm1._theta[3] = (MatStm1.compMolFrac[2,1] * MatStm1.q[1] * MatStm1.e[3,1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2] * MatStm1.e[3,2]) / (MatStm1.compMolFrac[2,1] * MatStm1.q[1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->localData[0]->realVars[252] /* MatStm1.theta[3] variable */ = DIVISION_SIM((data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[180] /* MatStm1.e[3,1] variable */)) + (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[181] /* MatStm1.e[3,2] variable */)),(data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.compMolFrac[2,1] * MatStm1.q[1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 508
type: SIMPLE_ASSIGN
MatStm1._theta[1] = (MatStm1.compMolFrac[2,1] * MatStm1.q[1] * MatStm1.e[1,1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2] * MatStm1.e[1,2]) / (MatStm1.compMolFrac[2,1] * MatStm1.q[1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  data->localData[0]->realVars[250] /* MatStm1.theta[1] variable */ = DIVISION_SIM((data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */)) + (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[177] /* MatStm1.e[1,2] variable */)),(data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.compMolFrac[2,1] * MatStm1.q[1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 509
type: SIMPLE_ASSIGN
MatStm1._theta[4] = (MatStm1.compMolFrac[2,1] * MatStm1.q[1] * MatStm1.e[4,1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2] * MatStm1.e[4,2]) / (MatStm1.compMolFrac[2,1] * MatStm1.q[1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->localData[0]->realVars[253] /* MatStm1.theta[4] variable */ = DIVISION_SIM((data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[182] /* MatStm1.e[4,1] variable */)) + (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[183] /* MatStm1.e[4,2] variable */)),(data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.compMolFrac[2,1] * MatStm1.q[1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 510
type: SIMPLE_ASSIGN
MatStm1._S[1] = MatStm1.theta[1] * MatStm1.tau[1,1] + MatStm1.theta[2] * MatStm1.tau[2,1] + MatStm1.theta[3] * MatStm1.tau[3,1] + MatStm1.theta[4] * MatStm1.tau[4,1]
*/
void Flowsheet_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->localData[0]->realVars[119] /* MatStm1.S[1] variable */ = (data->localData[0]->realVars[250] /* MatStm1.theta[1] variable */) * (data->localData[0]->realVars[234] /* MatStm1.tau[1,1] variable */) + (data->localData[0]->realVars[251] /* MatStm1.theta[2] variable */) * (data->localData[0]->realVars[238] /* MatStm1.tau[2,1] variable */) + (data->localData[0]->realVars[252] /* MatStm1.theta[3] variable */) * (data->localData[0]->realVars[242] /* MatStm1.tau[3,1] variable */) + (data->localData[0]->realVars[253] /* MatStm1.theta[4] variable */) * (data->localData[0]->realVars[246] /* MatStm1.tau[4,1] variable */);
  TRACE_POP
}
/*
equation index: 511
type: SIMPLE_ASSIGN
MatStm1._S[3] = MatStm1.theta[1] * MatStm1.tau[1,3] + MatStm1.theta[2] * MatStm1.tau[2,3] + MatStm1.theta[3] * MatStm1.tau[3,3] + MatStm1.theta[4] * MatStm1.tau[4,3]
*/
void Flowsheet_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  data->localData[0]->realVars[121] /* MatStm1.S[3] variable */ = (data->localData[0]->realVars[250] /* MatStm1.theta[1] variable */) * (data->localData[0]->realVars[236] /* MatStm1.tau[1,3] variable */) + (data->localData[0]->realVars[251] /* MatStm1.theta[2] variable */) * (data->localData[0]->realVars[240] /* MatStm1.tau[2,3] variable */) + (data->localData[0]->realVars[252] /* MatStm1.theta[3] variable */) * (data->localData[0]->realVars[244] /* MatStm1.tau[3,3] variable */) + (data->localData[0]->realVars[253] /* MatStm1.theta[4] variable */) * (data->localData[0]->realVars[248] /* MatStm1.tau[4,3] variable */);
  TRACE_POP
}
/*
equation index: 512
type: SIMPLE_ASSIGN
MatStm1._S[4] = MatStm1.theta[1] * MatStm1.tau[1,4] + MatStm1.theta[2] * MatStm1.tau[2,4] + MatStm1.theta[3] * MatStm1.tau[3,4] + MatStm1.theta[4] * MatStm1.tau[4,4]
*/
void Flowsheet_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  data->localData[0]->realVars[122] /* MatStm1.S[4] variable */ = (data->localData[0]->realVars[250] /* MatStm1.theta[1] variable */) * (data->localData[0]->realVars[237] /* MatStm1.tau[1,4] variable */) + (data->localData[0]->realVars[251] /* MatStm1.theta[2] variable */) * (data->localData[0]->realVars[241] /* MatStm1.tau[2,4] variable */) + (data->localData[0]->realVars[252] /* MatStm1.theta[3] variable */) * (data->localData[0]->realVars[245] /* MatStm1.tau[3,4] variable */) + (data->localData[0]->realVars[253] /* MatStm1.theta[4] variable */) * (data->localData[0]->realVars[249] /* MatStm1.tau[4,4] variable */);
  TRACE_POP
}
/*
equation index: 513
type: SIMPLE_ASSIGN
MatStm1._S[2] = MatStm1.theta[1] * MatStm1.tau[1,2] + MatStm1.theta[2] * MatStm1.tau[2,2] + MatStm1.theta[3] * MatStm1.tau[3,2] + MatStm1.theta[4] * MatStm1.tau[4,2]
*/
void Flowsheet_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->localData[0]->realVars[120] /* MatStm1.S[2] variable */ = (data->localData[0]->realVars[250] /* MatStm1.theta[1] variable */) * (data->localData[0]->realVars[235] /* MatStm1.tau[1,2] variable */) + (data->localData[0]->realVars[251] /* MatStm1.theta[2] variable */) * (data->localData[0]->realVars[239] /* MatStm1.tau[2,2] variable */) + (data->localData[0]->realVars[252] /* MatStm1.theta[3] variable */) * (data->localData[0]->realVars[243] /* MatStm1.tau[3,2] variable */) + (data->localData[0]->realVars[253] /* MatStm1.theta[4] variable */) * (data->localData[0]->realVars[247] /* MatStm1.tau[4,2] variable */);
  TRACE_POP
}
/*
equation index: 514
type: ALGORITHM

  MatStm1.gammar[2] := $START.MatStm1.gammar[2];
  MatStm1.gammar[1] := $START.MatStm1.gammar[1];
  MatStm1.sum[2] := $START.MatStm1.sum[2];
  MatStm1.sum[1] := $START.MatStm1.sum[1];
  MatStm1.B[2,4] := $START.MatStm1.B[2,4];
  MatStm1.B[2,3] := $START.MatStm1.B[2,3];
  MatStm1.B[2,2] := $START.MatStm1.B[2,2];
  MatStm1.B[2,1] := $START.MatStm1.B[2,1];
  MatStm1.B[1,4] := $START.MatStm1.B[1,4];
  MatStm1.B[1,3] := $START.MatStm1.B[1,3];
  MatStm1.B[1,2] := $START.MatStm1.B[1,2];
  MatStm1.B[1,1] := $START.MatStm1.B[1,1];
  for i in 1:2 loop
    for j in 1:4 loop
      for l in 1:4 loop
        MatStm1.B[i,j] := MatStm1.e[1,i] * MatStm1.tau[1,j] + MatStm1.e[2,i] * MatStm1.tau[2,j] + MatStm1.e[3,i] * MatStm1.tau[3,j] + MatStm1.e[4,i] * MatStm1.tau[4,j];
      end for;
    end for;
  end for;
  MatStm1.sum[:] := {0.0, 0.0};
  for j in 1:4 loop
    for i in 1:2 loop
      MatStm1.sum[i] := MatStm1.sum[i] + MatStm1.theta[j] * MatStm1.B[i,j] / MatStm1.S[j] - MatStm1.e[j,i] * log(MatStm1.B[i,j] / MatStm1.S[j]);
      MatStm1.gammar[i] := exp(MatStm1.q[i] * (1.0 - MatStm1.sum[i]));
    end for;
  end for;
*/
void Flowsheet_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  modelica_integer tmp0;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  real_array tmp9;
  index_spec_t tmp10;
  real_array tmp11;
  modelica_real tmp12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  data->localData[0]->realVars[197] /* MatStm1.gammar[2] variable */ = data->modelData->realVarsData[197].attribute /* MatStm1.gammar[2] variable */.start;

  data->localData[0]->realVars[196] /* MatStm1.gammar[1] variable */ = data->modelData->realVarsData[196].attribute /* MatStm1.gammar[1] variable */.start;

  data->localData[0]->realVars[229] /* MatStm1.sum[2] variable */ = data->modelData->realVarsData[229].attribute /* MatStm1.sum[2] variable */.start;

  data->localData[0]->realVars[228] /* MatStm1.sum[1] variable */ = data->modelData->realVarsData[228].attribute /* MatStm1.sum[1] variable */.start;

  data->localData[0]->realVars[96] /* MatStm1.B[2,4] variable */ = data->modelData->realVarsData[96].attribute /* MatStm1.B[2,4] variable */.start;

  data->localData[0]->realVars[95] /* MatStm1.B[2,3] variable */ = data->modelData->realVarsData[95].attribute /* MatStm1.B[2,3] variable */.start;

  data->localData[0]->realVars[94] /* MatStm1.B[2,2] variable */ = data->modelData->realVarsData[94].attribute /* MatStm1.B[2,2] variable */.start;

  data->localData[0]->realVars[93] /* MatStm1.B[2,1] variable */ = data->modelData->realVarsData[93].attribute /* MatStm1.B[2,1] variable */.start;

  data->localData[0]->realVars[92] /* MatStm1.B[1,4] variable */ = data->modelData->realVarsData[92].attribute /* MatStm1.B[1,4] variable */.start;

  data->localData[0]->realVars[91] /* MatStm1.B[1,3] variable */ = data->modelData->realVarsData[91].attribute /* MatStm1.B[1,3] variable */.start;

  data->localData[0]->realVars[90] /* MatStm1.B[1,2] variable */ = data->modelData->realVarsData[90].attribute /* MatStm1.B[1,2] variable */.start;

  data->localData[0]->realVars[89] /* MatStm1.B[1,1] variable */ = data->modelData->realVarsData[89].attribute /* MatStm1.B[1,1] variable */.start;

  tmp6 = ((modelica_integer) 1); tmp7 = 1; tmp8 = ((modelica_integer) 2);
  if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp6, tmp8); $Pi += tmp7)
    {
      tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 4);
      if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
      {
        modelica_integer $Pj;
        for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp3, tmp5); $Pj += tmp4)
        {
          tmp0 = ((modelica_integer) 1); tmp1 = 1; tmp2 = ((modelica_integer) 4);
          if(!(((tmp1 > 0) && (tmp0 > tmp2)) || ((tmp1 < 0) && (tmp0 < tmp2))))
          {
            modelica_integer $Pl;
            for($Pl = ((modelica_integer) 1); in_range_integer($Pl, tmp0, tmp2); $Pl += tmp1)
            {
              (&data->localData[0]->realVars[89] /* MatStm1.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)] = ((&data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[234] /* MatStm1.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 1), (modelica_integer)$Pj)]) + ((&data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[234] /* MatStm1.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 2), (modelica_integer)$Pj)]) + ((&data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[234] /* MatStm1.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 3), (modelica_integer)$Pj)]) + ((&data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 4), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[234] /* MatStm1.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 4), (modelica_integer)$Pj)]);
            }
          }
        }
      }
    }
  }

  array_alloc_scalar_real_array(&tmp9, 2, (modelica_real)0.0, (modelica_real)0.0);
  create_index_spec(&tmp10, 1, (1), (int*)0, 'W');
  real_array_create(&tmp11, (modelica_real*)&data->localData[0]->realVars[228] /* MatStm1.sum[1] variable */, 1, 2);
  indexed_assign_real_array(tmp9, &tmp11, &tmp10);

  tmp16 = ((modelica_integer) 1); tmp17 = 1; tmp18 = ((modelica_integer) 4);
  if(!(((tmp17 > 0) && (tmp16 > tmp18)) || ((tmp17 < 0) && (tmp16 < tmp18))))
  {
    modelica_integer $Pj;
    for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp16, tmp18); $Pj += tmp17)
    {
      tmp13 = ((modelica_integer) 1); tmp14 = 1; tmp15 = ((modelica_integer) 2);
      if(!(((tmp14 > 0) && (tmp13 > tmp15)) || ((tmp14 < 0) && (tmp13 < tmp15))))
      {
        modelica_integer $Pi;
        for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp13, tmp15); $Pi += tmp14)
        {
          tmp12 = DIVISION_SIM((&data->localData[0]->realVars[89] /* MatStm1.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[119] /* MatStm1.S[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm1.S[j]",equationIndexes);
          if(!(tmp12 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
            throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.B[i,j] / MatStm1.S[j]) was %g should be > 0", tmp12);
          }
          (&data->localData[0]->realVars[228] /* MatStm1.sum[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = (&data->localData[0]->realVars[228] /* MatStm1.sum[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] + ((&data->localData[0]->realVars[250] /* MatStm1.theta[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)]) * (DIVISION_SIM((&data->localData[0]->realVars[89] /* MatStm1.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[119] /* MatStm1.S[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm1.S[j]",equationIndexes)) - (((&data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, (modelica_integer)$Pj, (modelica_integer)$Pi)]) * (log(tmp12)));

          (&data->localData[0]->realVars[196] /* MatStm1.gammar[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = exp(((&data->localData[0]->realVars[215] /* MatStm1.q[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * (1.0 - (&data->localData[0]->realVars[228] /* MatStm1.sum[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 515
type: SIMPLE_ASSIGN
$cse22 = log(MatStm1.J[1] / MatStm1.L[1])
*/
void Flowsheet_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->localData[0]->realVars[97] /* MatStm1.J[1] variable */,data->localData[0]->realVars[105] /* MatStm1.L[1] variable */,"MatStm1.L[1]",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J[1] / MatStm1.L[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[26] /* $cse22 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 516
type: SIMPLE_ASSIGN
$cse24 = log(MatStm1.J[2] / MatStm1.L[2])
*/
void Flowsheet_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->localData[0]->realVars[98] /* MatStm1.J[2] variable */,data->localData[0]->realVars[106] /* MatStm1.L[2] variable */,"MatStm1.L[2]",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J[2] / MatStm1.L[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[28] /* $cse24 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 517
type: SIMPLE_ASSIGN
$cse21 = log(MatStm1.J[1])
*/
void Flowsheet_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[97] /* MatStm1.J[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[25] /* $cse21 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 518
type: SIMPLE_ASSIGN
MatStm1._gammac[1] = exp(1.0 + $cse21 + (-5.0) * MatStm1.q[1] * (1.0 + $cse22 - MatStm1.J[1] / MatStm1.L[1]) - MatStm1.J[1])
*/
void Flowsheet_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  data->localData[0]->realVars[190] /* MatStm1.gammac[1] variable */ = exp(1.0 + data->localData[0]->realVars[25] /* $cse21 variable */ + (-5.0) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (1.0 + data->localData[0]->realVars[26] /* $cse22 variable */ - (DIVISION_SIM(data->localData[0]->realVars[97] /* MatStm1.J[1] variable */,data->localData[0]->realVars[105] /* MatStm1.L[1] variable */,"MatStm1.L[1]",equationIndexes)))) - data->localData[0]->realVars[97] /* MatStm1.J[1] variable */);
  TRACE_POP
}
/*
equation index: 519
type: SIMPLE_ASSIGN
$cse18 = log(MatStm1.gammac[1])
*/
void Flowsheet_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[190] /* MatStm1.gammac[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammac[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[21] /* $cse18 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 520
type: SIMPLE_ASSIGN
$cse23 = log(MatStm1.J[2])
*/
void Flowsheet_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[98] /* MatStm1.J[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[27] /* $cse23 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 521
type: SIMPLE_ASSIGN
MatStm1._gammac[2] = exp(1.0 + $cse23 + (-5.0) * MatStm1.q[2] * (1.0 + $cse24 - MatStm1.J[2] / MatStm1.L[2]) - MatStm1.J[2])
*/
void Flowsheet_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  data->localData[0]->realVars[191] /* MatStm1.gammac[2] variable */ = exp(1.0 + data->localData[0]->realVars[27] /* $cse23 variable */ + (-5.0) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (1.0 + data->localData[0]->realVars[28] /* $cse24 variable */ - (DIVISION_SIM(data->localData[0]->realVars[98] /* MatStm1.J[2] variable */,data->localData[0]->realVars[106] /* MatStm1.L[2] variable */,"MatStm1.L[2]",equationIndexes)))) - data->localData[0]->realVars[98] /* MatStm1.J[2] variable */);
  TRACE_POP
}
/*
equation index: 522
type: SIMPLE_ASSIGN
$cse20 = log(MatStm1.gammac[2])
*/
void Flowsheet_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[191] /* MatStm1.gammac[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammac[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[24] /* $cse20 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 523
type: SIMPLE_ASSIGN
$cse19 = log(MatStm1.gammar[2])
*/
void Flowsheet_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[197] /* MatStm1.gammar[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammar[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[22] /* $cse19 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 524
type: SIMPLE_ASSIGN
MatStm1._gamma[2] = exp($cse19 + $cse20)
*/
void Flowsheet_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  data->localData[0]->realVars[185] /* MatStm1.gamma[2] variable */ = exp(data->localData[0]->realVars[22] /* $cse19 variable */ + data->localData[0]->realVars[24] /* $cse20 variable */);
  TRACE_POP
}
/*
equation index: 525
type: SIMPLE_ASSIGN
MatStm1._K[2] = 9.869232667160129e-006 * MatStm1.gamma[2] * MatStm1.Psat[2]
*/
void Flowsheet_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->localData[0]->realVars[104] /* MatStm1.K[2] variable */ = (9.869232667160129e-006) * ((data->localData[0]->realVars[185] /* MatStm1.gamma[2] variable */) * (data->localData[0]->realVars[118] /* MatStm1.Psat[2] variable */));
  TRACE_POP
}
/*
equation index: 526
type: SIMPLE_ASSIGN
$cse17 = log(MatStm1.gammar[1])
*/
void Flowsheet_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[196] /* MatStm1.gammar[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammar[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[20] /* $cse17 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 527
type: SIMPLE_ASSIGN
MatStm1._gamma[1] = exp($cse17 + $cse18)
*/
void Flowsheet_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->localData[0]->realVars[184] /* MatStm1.gamma[1] variable */ = exp(data->localData[0]->realVars[20] /* $cse17 variable */ + data->localData[0]->realVars[21] /* $cse18 variable */);
  TRACE_POP
}
/*
equation index: 528
type: SIMPLE_ASSIGN
MatStm1._K[1] = 9.869232667160129e-006 * MatStm1.gamma[1] * MatStm1.Psat[1]
*/
void Flowsheet_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->localData[0]->realVars[103] /* MatStm1.K[1] variable */ = (9.869232667160129e-006) * ((data->localData[0]->realVars[184] /* MatStm1.gamma[1] variable */) * (data->localData[0]->realVars[117] /* MatStm1.Psat[1] variable */));
  TRACE_POP
}
/*
equation index: 529
type: ALGORITHM

  MatStm1.gammar_bubl[2] := $START.MatStm1.gammar_bubl[2];
  MatStm1.gammar_bubl[1] := $START.MatStm1.gammar_bubl[1];
  MatStm1.sum_bubl[2] := $START.MatStm1.sum_bubl[2];
  MatStm1.sum_bubl[1] := $START.MatStm1.sum_bubl[1];
  MatStm1.sum_bubl[:] := {0.0, 0.0};
  for j in 1:4 loop
    for i in 1:2 loop
      MatStm1.sum_bubl[i] := MatStm1.sum_bubl[i] + MatStm1.theta_bubl[j] * MatStm1.B[i,j] / MatStm1.S_bubl[j] - MatStm1.e[j,i] * log(MatStm1.B[i,j] / MatStm1.S_bubl[j]);
      MatStm1.gammar_bubl[i] := exp(MatStm1.q[i] * (1.0 - MatStm1.sum_bubl[i]));
    end for;
  end for;
*/
void Flowsheet_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_real tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[199] /* MatStm1.gammar_bubl[2] variable */ = data->modelData->realVarsData[199].attribute /* MatStm1.gammar_bubl[2] variable */.start;

  data->localData[0]->realVars[198] /* MatStm1.gammar_bubl[1] variable */ = data->modelData->realVarsData[198].attribute /* MatStm1.gammar_bubl[1] variable */.start;

  data->localData[0]->realVars[231] /* MatStm1.sum_bubl[2] variable */ = data->modelData->realVarsData[231].attribute /* MatStm1.sum_bubl[2] variable */.start;

  data->localData[0]->realVars[230] /* MatStm1.sum_bubl[1] variable */ = data->modelData->realVarsData[230].attribute /* MatStm1.sum_bubl[1] variable */.start;

  array_alloc_scalar_real_array(&tmp0, 2, (modelica_real)0.0, (modelica_real)0.0);
  create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
  real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[230] /* MatStm1.sum_bubl[1] variable */, 1, 2);
  indexed_assign_real_array(tmp0, &tmp2, &tmp1);

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 4);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pj;
    for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp7, tmp9); $Pj += tmp8)
    {
      tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = ((modelica_integer) 2);
      if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
      {
        modelica_integer $Pi;
        for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp4, tmp6); $Pi += tmp5)
        {
          tmp3 = DIVISION_SIM((&data->localData[0]->realVars[89] /* MatStm1.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[123] /* MatStm1.S_bubl[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm1.S_bubl[j]",equationIndexes);
          if(!(tmp3 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
            throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.B[i,j] / MatStm1.S_bubl[j]) was %g should be > 0", tmp3);
          }
          (&data->localData[0]->realVars[230] /* MatStm1.sum_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = (&data->localData[0]->realVars[230] /* MatStm1.sum_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] + ((&data->localData[0]->realVars[254] /* MatStm1.theta_bubl[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)]) * (DIVISION_SIM((&data->localData[0]->realVars[89] /* MatStm1.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[123] /* MatStm1.S_bubl[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm1.S_bubl[j]",equationIndexes)) - (((&data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, (modelica_integer)$Pj, (modelica_integer)$Pi)]) * (log(tmp3)));

          (&data->localData[0]->realVars[198] /* MatStm1.gammar_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = exp(((&data->localData[0]->realVars[215] /* MatStm1.q[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * (1.0 - (&data->localData[0]->realVars[230] /* MatStm1.sum_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 530
type: SIMPLE_ASSIGN
$cse11 = log(MatStm1.gammar_bubl[2])
*/
void Flowsheet_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[199] /* MatStm1.gammar_bubl[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammar_bubl[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[14] /* $cse11 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 531
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[2] = exp($cse11 + $cse12)
*/
void Flowsheet_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  data->localData[0]->realVars[187] /* MatStm1.gammaBubl[2] variable */ = exp(data->localData[0]->realVars[14] /* $cse11 variable */ + data->localData[0]->realVars[15] /* $cse12 variable */);
  TRACE_POP
}
/*
equation index: 532
type: SIMPLE_ASSIGN
$cse9 = log(MatStm1.gammar_bubl[1])
*/
void Flowsheet_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[198] /* MatStm1.gammar_bubl[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammar_bubl[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[88] /* $cse9 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 533
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[1] = exp($cse9 + $cse10)
*/
void Flowsheet_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->localData[0]->realVars[186] /* MatStm1.gammaBubl[1] variable */ = exp(data->localData[0]->realVars[88] /* $cse9 variable */ + data->localData[0]->realVars[13] /* $cse10 variable */);
  TRACE_POP
}
/*
equation index: 534
type: SIMPLE_ASSIGN
MatStm1._Pbubl = MatStm1.gammaBubl[1] * MatStm1.compMolFrac[1,1] * $cse1 + MatStm1.gammaBubl[2] * MatStm1.compMolFrac[1,2] * $cse2
*/
void Flowsheet_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */ = (data->localData[0]->realVars[186] /* MatStm1.gammaBubl[1] variable */) * ((data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) * (data->localData[0]->realVars[12] /* $cse1 variable */)) + (data->localData[0]->realVars[187] /* MatStm1.gammaBubl[2] variable */) * ((data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */) * (data->localData[0]->realVars[23] /* $cse2 variable */));
  TRACE_POP
}
/*
equation index: 535
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  data->localData[0]->realVars[160] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[267] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 536
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->localData[0]->realVars[161] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[267] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 537
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac[2] = 0.01428571428571429 * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  data->localData[0]->realVars[637] /* Mixer1.inVapPhasMolFrac[2] variable */ = (0.01428571428571429) * (data->localData[0]->realVars[267] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 538
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 1.0 - Mixer1.inVapPhasMolFrac[2]
*/
void Flowsheet_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  data->localData[0]->realVars[203] /* MatStm1.liqPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[637] /* Mixer1.inVapPhasMolFrac[2] variable */;
  TRACE_POP
}
/*
equation index: 539
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[2] = 70.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  data->localData[0]->realVars[266] /* MatStm1.totMolFlo[2] variable */ = (70.0) * (data->localData[0]->realVars[203] /* MatStm1.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 540
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  data->localData[0]->realVars[158] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[266] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 541
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  data->localData[0]->realVars[159] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[266] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 542
type: SIMPLE_ASSIGN
$cse13 = log(MatStm1.J_dew[1])
*/
void Flowsheet_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[101] /* MatStm1.J_dew[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J_dew[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[16] /* $cse13 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 543
type: SIMPLE_ASSIGN
$cse15 = log(MatStm1.J_dew[2])
*/
void Flowsheet_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[102] /* MatStm1.J_dew[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J_dew[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[18] /* $cse15 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 544
type: SIMPLE_ASSIGN
$cse16 = log(MatStm1.J_dew[2] / MatStm1.L_dew[2])
*/
void Flowsheet_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->localData[0]->realVars[102] /* MatStm1.J_dew[2] variable */,data->localData[0]->realVars[110] /* MatStm1.L_dew[2] variable */,"MatStm1.L_dew[2]",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J_dew[2] / MatStm1.L_dew[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[19] /* $cse16 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 545
type: SIMPLE_ASSIGN
MatStm1._gammac_dew[2] = exp(1.0 + $cse15 + (-5.0) * MatStm1.q[2] * (1.0 + $cse16 - MatStm1.J_dew[2] / MatStm1.L_dew[2]) - MatStm1.J_dew[2])
*/
void Flowsheet_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  data->localData[0]->realVars[195] /* MatStm1.gammac_dew[2] variable */ = exp(1.0 + data->localData[0]->realVars[18] /* $cse15 variable */ + (-5.0) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (1.0 + data->localData[0]->realVars[19] /* $cse16 variable */ - (DIVISION_SIM(data->localData[0]->realVars[102] /* MatStm1.J_dew[2] variable */,data->localData[0]->realVars[110] /* MatStm1.L_dew[2] variable */,"MatStm1.L_dew[2]",equationIndexes)))) - data->localData[0]->realVars[102] /* MatStm1.J_dew[2] variable */);
  TRACE_POP
}
/*
equation index: 546
type: SIMPLE_ASSIGN
$cse8 = log(MatStm1.gammac_dew[2])
*/
void Flowsheet_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[195] /* MatStm1.gammac_dew[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammac_dew[2]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[87] /* $cse8 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 547
type: SIMPLE_ASSIGN
MatStm1._gammaDew[2] = exp($cse7 + $cse8)
*/
void Flowsheet_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  data->localData[0]->realVars[189] /* MatStm1.gammaDew[2] variable */ = exp(data->localData[0]->realVars[78] /* $cse7 variable */ + data->localData[0]->realVars[87] /* $cse8 variable */);
  TRACE_POP
}
/*
equation index: 548
type: SIMPLE_ASSIGN
MatStm1._gammar_dew[2] = exp($cse7)
*/
void Flowsheet_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  data->localData[0]->realVars[201] /* MatStm1.gammar_dew[2] variable */ = exp(data->localData[0]->realVars[78] /* $cse7 variable */);
  TRACE_POP
}
/*
equation index: 549
type: SIMPLE_ASSIGN
MatStm1._dewLiqMolFrac[2] = MatStm1.compMolFrac[1,2] * MatStm1.Pdew / (MatStm1.Psat[2] * MatStm1.gammaDew[2])
*/
void Flowsheet_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */ = (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */) * (DIVISION_SIM(data->localData[0]->realVars[116] /* MatStm1.Pdew variable */,(data->localData[0]->realVars[118] /* MatStm1.Psat[2] variable */) * (data->localData[0]->realVars[189] /* MatStm1.gammaDew[2] variable */),"MatStm1.Psat[2] * MatStm1.gammaDew[2]",equationIndexes));
  TRACE_POP
}
/*
equation index: 550
type: SIMPLE_ASSIGN
MatStm1._theta_dew[1] = (MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] * MatStm1.e[1,1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2] * MatStm1.e[1,2]) / (MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  data->localData[0]->realVars[258] /* MatStm1.theta_dew[1] variable */ = DIVISION_SIM((data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */)) + (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[177] /* MatStm1.e[1,2] variable */)),(data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 551
type: SIMPLE_ASSIGN
MatStm1._theta_dew[3] = (MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] * MatStm1.e[3,1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2] * MatStm1.e[3,2]) / (MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  data->localData[0]->realVars[260] /* MatStm1.theta_dew[3] variable */ = DIVISION_SIM((data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[180] /* MatStm1.e[3,1] variable */)) + (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[181] /* MatStm1.e[3,2] variable */)),(data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 552
type: SIMPLE_ASSIGN
MatStm1._theta_dew[2] = (MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] * MatStm1.e[2,1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2] * MatStm1.e[2,2]) / (MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  data->localData[0]->realVars[259] /* MatStm1.theta_dew[2] variable */ = DIVISION_SIM((data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[178] /* MatStm1.e[2,1] variable */)) + (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[179] /* MatStm1.e[2,2] variable */)),(data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 553
type: SIMPLE_ASSIGN
MatStm1._theta_dew[4] = (MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] * MatStm1.e[4,1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2] * MatStm1.e[4,2]) / (MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  data->localData[0]->realVars[261] /* MatStm1.theta_dew[4] variable */ = DIVISION_SIM((data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[182] /* MatStm1.e[4,1] variable */)) + (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[183] /* MatStm1.e[4,2] variable */)),(data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 554
type: SIMPLE_ASSIGN
MatStm1._L_dew[1] = MatStm1.q[1] / (MatStm1.q[1] * MatStm1.dewLiqMolFrac[1] + MatStm1.q[2] * MatStm1.dewLiqMolFrac[2])
*/
void Flowsheet_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  data->localData[0]->realVars[109] /* MatStm1.L_dew[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[215] /* MatStm1.q[1] variable */,(data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */),"MatStm1.q[1] * MatStm1.dewLiqMolFrac[1] + MatStm1.q[2] * MatStm1.dewLiqMolFrac[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 555
type: SIMPLE_ASSIGN
MatStm1._S_dew[2] = MatStm1.theta_dew[1] * MatStm1.tau[1,2] + MatStm1.theta_dew[2] * MatStm1.tau[2,2] + MatStm1.theta_dew[3] * MatStm1.tau[3,2] + MatStm1.theta_dew[4] * MatStm1.tau[4,2]
*/
void Flowsheet_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  data->localData[0]->realVars[128] /* MatStm1.S_dew[2] variable */ = (data->localData[0]->realVars[258] /* MatStm1.theta_dew[1] variable */) * (data->localData[0]->realVars[235] /* MatStm1.tau[1,2] variable */) + (data->localData[0]->realVars[259] /* MatStm1.theta_dew[2] variable */) * (data->localData[0]->realVars[239] /* MatStm1.tau[2,2] variable */) + (data->localData[0]->realVars[260] /* MatStm1.theta_dew[3] variable */) * (data->localData[0]->realVars[243] /* MatStm1.tau[3,2] variable */) + (data->localData[0]->realVars[261] /* MatStm1.theta_dew[4] variable */) * (data->localData[0]->realVars[247] /* MatStm1.tau[4,2] variable */);
  TRACE_POP
}
/*
equation index: 556
type: SIMPLE_ASSIGN
MatStm1._S_dew[1] = MatStm1.theta_dew[1] * MatStm1.tau[1,1] + MatStm1.theta_dew[2] * MatStm1.tau[2,1] + MatStm1.theta_dew[3] * MatStm1.tau[3,1] + MatStm1.theta_dew[4] * MatStm1.tau[4,1]
*/
void Flowsheet_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->localData[0]->realVars[127] /* MatStm1.S_dew[1] variable */ = (data->localData[0]->realVars[258] /* MatStm1.theta_dew[1] variable */) * (data->localData[0]->realVars[234] /* MatStm1.tau[1,1] variable */) + (data->localData[0]->realVars[259] /* MatStm1.theta_dew[2] variable */) * (data->localData[0]->realVars[238] /* MatStm1.tau[2,1] variable */) + (data->localData[0]->realVars[260] /* MatStm1.theta_dew[3] variable */) * (data->localData[0]->realVars[242] /* MatStm1.tau[3,1] variable */) + (data->localData[0]->realVars[261] /* MatStm1.theta_dew[4] variable */) * (data->localData[0]->realVars[246] /* MatStm1.tau[4,1] variable */);
  TRACE_POP
}
/*
equation index: 557
type: SIMPLE_ASSIGN
MatStm1._S_dew[3] = MatStm1.theta_dew[1] * MatStm1.tau[1,3] + MatStm1.theta_dew[2] * MatStm1.tau[2,3] + MatStm1.theta_dew[3] * MatStm1.tau[3,3] + MatStm1.theta_dew[4] * MatStm1.tau[4,3]
*/
void Flowsheet_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->localData[0]->realVars[129] /* MatStm1.S_dew[3] variable */ = (data->localData[0]->realVars[258] /* MatStm1.theta_dew[1] variable */) * (data->localData[0]->realVars[236] /* MatStm1.tau[1,3] variable */) + (data->localData[0]->realVars[259] /* MatStm1.theta_dew[2] variable */) * (data->localData[0]->realVars[240] /* MatStm1.tau[2,3] variable */) + (data->localData[0]->realVars[260] /* MatStm1.theta_dew[3] variable */) * (data->localData[0]->realVars[244] /* MatStm1.tau[3,3] variable */) + (data->localData[0]->realVars[261] /* MatStm1.theta_dew[4] variable */) * (data->localData[0]->realVars[248] /* MatStm1.tau[4,3] variable */);
  TRACE_POP
}
/*
equation index: 558
type: SIMPLE_ASSIGN
MatStm1._S_dew[4] = MatStm1.theta_dew[1] * MatStm1.tau[1,4] + MatStm1.theta_dew[2] * MatStm1.tau[2,4] + MatStm1.theta_dew[3] * MatStm1.tau[3,4] + MatStm1.theta_dew[4] * MatStm1.tau[4,4]
*/
void Flowsheet_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  data->localData[0]->realVars[130] /* MatStm1.S_dew[4] variable */ = (data->localData[0]->realVars[258] /* MatStm1.theta_dew[1] variable */) * (data->localData[0]->realVars[237] /* MatStm1.tau[1,4] variable */) + (data->localData[0]->realVars[259] /* MatStm1.theta_dew[2] variable */) * (data->localData[0]->realVars[241] /* MatStm1.tau[2,4] variable */) + (data->localData[0]->realVars[260] /* MatStm1.theta_dew[3] variable */) * (data->localData[0]->realVars[245] /* MatStm1.tau[3,4] variable */) + (data->localData[0]->realVars[261] /* MatStm1.theta_dew[4] variable */) * (data->localData[0]->realVars[249] /* MatStm1.tau[4,4] variable */);
  TRACE_POP
}
/*
equation index: 559
type: SIMPLE_ASSIGN
$cse14 = log(MatStm1.J_dew[1] / MatStm1.L_dew[1])
*/
void Flowsheet_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM(data->localData[0]->realVars[101] /* MatStm1.J_dew[1] variable */,data->localData[0]->realVars[109] /* MatStm1.L_dew[1] variable */,"MatStm1.L_dew[1]",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J_dew[1] / MatStm1.L_dew[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[17] /* $cse14 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 560
type: SIMPLE_ASSIGN
MatStm1._gammac_dew[1] = exp(1.0 + $cse13 + (-5.0) * MatStm1.q[1] * (1.0 + $cse14 - MatStm1.J_dew[1] / MatStm1.L_dew[1]) - MatStm1.J_dew[1])
*/
void Flowsheet_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  data->localData[0]->realVars[194] /* MatStm1.gammac_dew[1] variable */ = exp(1.0 + data->localData[0]->realVars[16] /* $cse13 variable */ + (-5.0) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (1.0 + data->localData[0]->realVars[17] /* $cse14 variable */ - (DIVISION_SIM(data->localData[0]->realVars[101] /* MatStm1.J_dew[1] variable */,data->localData[0]->realVars[109] /* MatStm1.L_dew[1] variable */,"MatStm1.L_dew[1]",equationIndexes)))) - data->localData[0]->realVars[101] /* MatStm1.J_dew[1] variable */);
  TRACE_POP
}
/*
equation index: 561
type: SIMPLE_ASSIGN
$cse6 = log(MatStm1.gammac_dew[1])
*/
void Flowsheet_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[194] /* MatStm1.gammac_dew[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammac_dew[1]) was %g should be > 0", tmp0);
  }
  data->localData[0]->realVars[67] /* $cse6 variable */ = log(tmp0);
  TRACE_POP
}
/*
equation index: 562
type: SIMPLE_ASSIGN
MatStm1._gammaDew[1] = exp($cse5 + $cse6)
*/
void Flowsheet_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  data->localData[0]->realVars[188] /* MatStm1.gammaDew[1] variable */ = exp(data->localData[0]->realVars[56] /* $cse5 variable */ + data->localData[0]->realVars[67] /* $cse6 variable */);
  TRACE_POP
}
/*
equation index: 563
type: SIMPLE_ASSIGN
MatStm1._gammar_dew[1] = exp($cse5)
*/
void Flowsheet_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  data->localData[0]->realVars[200] /* MatStm1.gammar_dew[1] variable */ = exp(data->localData[0]->realVars[56] /* $cse5 variable */);
  TRACE_POP
}
/*
equation index: 573
type: ALGORITHM

  $TMP_MatStm1$Pgammar_dew$rB2$lB_569 := $START.MatStm1.gammar_dew[2];
  $TMP_MatStm1$Pgammar_dew$rB1$lB_569 := $START.MatStm1.gammar_dew[1];
  $TMP_MatStm1$Psum_dew$rB2$lB_569 := $START.MatStm1.sum_dew[2];
  $TMP_MatStm1$Psum_dew$rB1$lB_569 := $START.MatStm1.sum_dew[1];
  {$TMP_MatStm1$Psum_dew$rB1$lB_569, $TMP_MatStm1$Psum_dew$rB2$lB_569} := {0.0, 0.0};
  for j in 1:4 loop
    for i in 1:2 loop
      MatStm1.sum_dew[i] := MatStm1.sum_dew[i] + MatStm1.theta_dew[j] * MatStm1.B[i,j] / MatStm1.S_dew[j] - MatStm1.e[j,i] * log(MatStm1.B[i,j] / MatStm1.S_dew[j]);
      MatStm1.gammar_dew[i] := exp(MatStm1.q[i] * (1.0 - MatStm1.sum_dew[i]));
    end for;
  end for;
*/
void Flowsheet_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  modelica_real tmp0;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  data->localData[0]->realVars[1] /* $TMP_MatStm1$Pgammar_dew$rB2$lB_569 variable */ = data->modelData->realVarsData[201].attribute /* MatStm1.gammar_dew[2] variable */.start;

  data->localData[0]->realVars[0] /* $TMP_MatStm1$Pgammar_dew$rB1$lB_569 variable */ = data->modelData->realVarsData[200].attribute /* MatStm1.gammar_dew[1] variable */.start;

  data->localData[0]->realVars[3] /* $TMP_MatStm1$Psum_dew$rB2$lB_569 variable */ = data->modelData->realVarsData[233].attribute /* MatStm1.sum_dew[2] variable */.start;

  data->localData[0]->realVars[2] /* $TMP_MatStm1$Psum_dew$rB1$lB_569 variable */ = data->modelData->realVarsData[232].attribute /* MatStm1.sum_dew[1] variable */.start;

  tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = ((modelica_integer) 4);
  if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
  {
    modelica_integer $Pj;
    for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp4, tmp6); $Pj += tmp5)
    {
      tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = ((modelica_integer) 2);
      if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
      {
        modelica_integer $Pi;
        for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp1, tmp3); $Pi += tmp2)
        {
          tmp0 = DIVISION_SIM((&data->localData[0]->realVars[89] /* MatStm1.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[127] /* MatStm1.S_dew[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm1.S_dew[j]",equationIndexes);
          if(!(tmp0 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
            throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.B[i,j] / MatStm1.S_dew[j]) was %g should be > 0", tmp0);
          }
          (&data->localData[0]->realVars[232] /* MatStm1.sum_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = (&data->localData[0]->realVars[232] /* MatStm1.sum_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] + ((&data->localData[0]->realVars[258] /* MatStm1.theta_dew[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)]) * (DIVISION_SIM((&data->localData[0]->realVars[89] /* MatStm1.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[127] /* MatStm1.S_dew[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm1.S_dew[j]",equationIndexes)) - (((&data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, (modelica_integer)$Pj, (modelica_integer)$Pi)]) * (log(tmp0)));

          (&data->localData[0]->realVars[200] /* MatStm1.gammar_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = exp(((&data->localData[0]->realVars[215] /* MatStm1.q[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * (1.0 - (&data->localData[0]->realVars[232] /* MatStm1.sum_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
        }
      }
    }
  }
  TRACE_POP
}

void residualFunc579(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,579};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  /* iteration variables */
  for (i=0; i<14; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<14; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[232] /* MatStm1.sum_dew[1] variable */ = xloc[0];
  data->localData[0]->realVars[233] /* MatStm1.sum_dew[2] variable */ = xloc[1];
  data->localData[0]->realVars[56] /* $cse5 variable */ = xloc[2];
  data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */ = xloc[3];
  data->localData[0]->realVars[116] /* MatStm1.Pdew variable */ = xloc[4];
  data->localData[0]->realVars[78] /* $cse7 variable */ = xloc[5];
  data->localData[0]->realVars[110] /* MatStm1.L_dew[2] variable */ = xloc[6];
  data->localData[0]->realVars[102] /* MatStm1.J_dew[2] variable */ = xloc[7];
  data->localData[0]->realVars[101] /* MatStm1.J_dew[1] variable */ = xloc[8];
  data->localData[0]->realVars[267] /* MatStm1.totMolFlo[3] variable */ = xloc[9];
  data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */ = xloc[10];
  data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */ = xloc[11];
  data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */ = xloc[12];
  data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */ = xloc[13];
  /* backup outputs */
  /* pre body */
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

  /* local constraints */
  Flowsheet_eqFunction_523(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_524(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_525(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_526(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_527(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_528(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_529(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_530(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_531(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_532(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_533(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_534(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_535(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_536(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_537(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_538(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_539(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_540(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_541(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_542(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_543(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_544(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_545(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_546(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_547(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_548(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_549(data, threadData);

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

  /* local constraints */
  Flowsheet_eqFunction_559(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_560(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_561(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_562(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_563(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_573(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[216] /* MatStm1.q[2] variable */ - ((data->localData[0]->realVars[110] /* MatStm1.L_dew[2] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */)));

  res[1] = data->localData[0]->realVars[218] /* MatStm1.r[2] variable */ - ((data->localData[0]->realVars[102] /* MatStm1.J_dew[2] variable */) * ((data->localData[0]->realVars[217] /* MatStm1.r[1] variable */) * (data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[218] /* MatStm1.r[2] variable */) * (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */)));

  res[2] = (data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) * (DIVISION_SIM(data->localData[0]->realVars[116] /* MatStm1.Pdew variable */,(data->localData[0]->realVars[117] /* MatStm1.Psat[1] variable */) * (data->localData[0]->realVars[188] /* MatStm1.gammaDew[1] variable */),"MatStm1.Psat[1] * MatStm1.gammaDew[1]",equationIndexes)) - data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */;

  res[3] = 1.0 - ((data->localData[0]->realVars[116] /* MatStm1.Pdew variable */) * ((data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) * (DIVISION_SIM(data->localData[0]->realVars[34] /* $cse3 variable */,data->localData[0]->realVars[188] /* MatStm1.gammaDew[1] variable */,"MatStm1.gammaDew[1]",equationIndexes)) + (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */) * (DIVISION_SIM(data->localData[0]->realVars[45] /* $cse4 variable */,data->localData[0]->realVars[189] /* MatStm1.gammaDew[2] variable */,"MatStm1.gammaDew[2]",equationIndexes))));

  res[4] = data->localData[0]->realVars[217] /* MatStm1.r[1] variable */ - ((data->localData[0]->realVars[101] /* MatStm1.J_dew[1] variable */) * ((data->localData[0]->realVars[217] /* MatStm1.r[1] variable */) * (data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[218] /* MatStm1.r[2] variable */) * (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */)));

  res[5] = data->localData[0]->realVars[0] /* $TMP_MatStm1$Pgammar_dew$rB1$lB_569 variable */ - data->localData[0]->realVars[200] /* MatStm1.gammar_dew[1] variable */;

  res[6] = data->localData[0]->realVars[1] /* $TMP_MatStm1$Pgammar_dew$rB2$lB_569 variable */ - data->localData[0]->realVars[201] /* MatStm1.gammar_dew[2] variable */;

  res[7] = data->localData[0]->realVars[2] /* $TMP_MatStm1$Psum_dew$rB1$lB_569 variable */ - data->localData[0]->realVars[232] /* MatStm1.sum_dew[1] variable */;

  res[8] = data->localData[0]->realVars[3] /* $TMP_MatStm1$Psum_dew$rB2$lB_569 variable */ - data->localData[0]->realVars[233] /* MatStm1.sum_dew[2] variable */;

  res[9] = data->localData[0]->realVars[161] /* MatStm1.compMolFlo[3,2] variable */ + data->localData[0]->realVars[159] /* MatStm1.compMolFlo[2,2] variable */ - data->localData[0]->realVars[157] /* MatStm1.compMolFlo[1,2] variable */;

  RELATIONHYSTERESIS(tmp0, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  res[10] = (tmp0?data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */ + data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */ + data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */ - 1.0);

  RELATIONHYSTERESIS(tmp1, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  tmp3 = (modelica_boolean)tmp1;
  if(tmp3)
  {
    tmp4 = data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp2, 101325.0, data->localData[0]->realVars[116] /* MatStm1.Pdew variable */, 3, GreaterEq);
    tmp4 = (tmp2?data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[104] /* MatStm1.K[2] variable */) * (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */)):data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */);
  }
  res[11] = tmp4;

  RELATIONHYSTERESIS(tmp5, 101325.0, data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */, 2, GreaterEq);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */;
  }
  else
  {
    RELATIONHYSTERESIS(tmp6, 101325.0, data->localData[0]->realVars[116] /* MatStm1.Pdew variable */, 3, GreaterEq);
    tmp8 = (tmp6?data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[103] /* MatStm1.K[1] variable */) * (data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */)):data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */);
  }
  res[12] = tmp8;

  res[13] = data->localData[0]->realVars[160] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[158] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[156] /* MatStm1.compMolFlo[1,1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS579(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS579(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.sum_dew[1] */
  sysData->nominal[i] = data->modelData->realVarsData[232].attribute /* MatStm1.sum_dew[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[232].attribute /* MatStm1.sum_dew[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[232].attribute /* MatStm1.sum_dew[1] */.max;
  /* static nls data for MatStm1.sum_dew[2] */
  sysData->nominal[i] = data->modelData->realVarsData[233].attribute /* MatStm1.sum_dew[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[233].attribute /* MatStm1.sum_dew[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[233].attribute /* MatStm1.sum_dew[2] */.max;
  /* static nls data for $cse5 */
  sysData->nominal[i] = data->modelData->realVarsData[56].attribute /* $cse5 */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[56].attribute /* $cse5 */.min;
  sysData->max[i++]   = data->modelData->realVarsData[56].attribute /* $cse5 */.max;
  /* static nls data for MatStm1.dewLiqMolFrac[1] */
  sysData->nominal[i] = data->modelData->realVarsData[174].attribute /* MatStm1.dewLiqMolFrac[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[174].attribute /* MatStm1.dewLiqMolFrac[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[174].attribute /* MatStm1.dewLiqMolFrac[1] */.max;
  /* static nls data for MatStm1.Pdew */
  sysData->nominal[i] = data->modelData->realVarsData[116].attribute /* MatStm1.Pdew */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[116].attribute /* MatStm1.Pdew */.min;
  sysData->max[i++]   = data->modelData->realVarsData[116].attribute /* MatStm1.Pdew */.max;
  /* static nls data for $cse7 */
  sysData->nominal[i] = data->modelData->realVarsData[78].attribute /* $cse7 */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[78].attribute /* $cse7 */.min;
  sysData->max[i++]   = data->modelData->realVarsData[78].attribute /* $cse7 */.max;
  /* static nls data for MatStm1.L_dew[2] */
  sysData->nominal[i] = data->modelData->realVarsData[110].attribute /* MatStm1.L_dew[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[110].attribute /* MatStm1.L_dew[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[110].attribute /* MatStm1.L_dew[2] */.max;
  /* static nls data for MatStm1.J_dew[2] */
  sysData->nominal[i] = data->modelData->realVarsData[102].attribute /* MatStm1.J_dew[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[102].attribute /* MatStm1.J_dew[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[102].attribute /* MatStm1.J_dew[2] */.max;
  /* static nls data for MatStm1.J_dew[1] */
  sysData->nominal[i] = data->modelData->realVarsData[101].attribute /* MatStm1.J_dew[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[101].attribute /* MatStm1.J_dew[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[101].attribute /* MatStm1.J_dew[1] */.max;
  /* static nls data for MatStm1.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[267].attribute /* MatStm1.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[267].attribute /* MatStm1.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[267].attribute /* MatStm1.totMolFlo[3] */.max;
  /* static nls data for MatStm1.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[165].attribute /* MatStm1.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[165].attribute /* MatStm1.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[165].attribute /* MatStm1.compMolFrac[2,2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[164].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[164].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[164].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* static nls data for MatStm1.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[167].attribute /* MatStm1.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[167].attribute /* MatStm1.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[167].attribute /* MatStm1.compMolFrac[3,2] */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[166].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[166].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[166].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS579(sysData);
}

void getIterationVarsNLS579(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[232] /* MatStm1.sum_dew[1] variable */;
  array[1] = data->localData[0]->realVars[233] /* MatStm1.sum_dew[2] variable */;
  array[2] = data->localData[0]->realVars[56] /* $cse5 variable */;
  array[3] = data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */;
  array[4] = data->localData[0]->realVars[116] /* MatStm1.Pdew variable */;
  array[5] = data->localData[0]->realVars[78] /* $cse7 variable */;
  array[6] = data->localData[0]->realVars[110] /* MatStm1.L_dew[2] variable */;
  array[7] = data->localData[0]->realVars[102] /* MatStm1.J_dew[2] variable */;
  array[8] = data->localData[0]->realVars[101] /* MatStm1.J_dew[1] variable */;
  array[9] = data->localData[0]->realVars[267] /* MatStm1.totMolFlo[3] variable */;
  array[10] = data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */;
  array[11] = data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */;
  array[12] = data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */;
  array[13] = data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */;
}


/* inner equations */

/*
equation index: 327
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,2] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[2].SH, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tc, MatStm2.T)
*/
void Flowsheet_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526], (modelica_real)data->simulationInfo->realParameter[527]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427]);
  data->localData[0]->realVars[331] /* MatStm2.compMolEnth[3,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[487], tmp0, tmp1, data->simulationInfo->realParameter[497], data->localData[0]->realVars[313] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 328
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,1] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, MatStm2.T)
*/
void Flowsheet_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421]);
  data->localData[0]->realVars[328] /* MatStm2.compMolEnth[2,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[486], tmp0, tmp1, data->simulationInfo->realParameter[496], data->localData[0]->realVars[313] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 329
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[3,1] = Simulator.Files.Thermodynamic_Functions.HVapId(MatStm2.comp[1].SH, {MatStm2.comp[1].VapCp[1], MatStm2.comp[1].VapCp[2], MatStm2.comp[1].VapCp[3], MatStm2.comp[1].VapCp[4], MatStm2.comp[1].VapCp[5], MatStm2.comp[1].VapCp[6]}, {MatStm2.comp[1].HOV[1], MatStm2.comp[1].HOV[2], MatStm2.comp[1].HOV[3], MatStm2.comp[1].HOV[4], MatStm2.comp[1].HOV[5], MatStm2.comp[1].HOV[6]}, MatStm2.comp[1].Tc, MatStm2.T)
*/
void Flowsheet_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[516], (modelica_real)data->simulationInfo->realParameter[517], (modelica_real)data->simulationInfo->realParameter[518], (modelica_real)data->simulationInfo->realParameter[519], (modelica_real)data->simulationInfo->realParameter[520], (modelica_real)data->simulationInfo->realParameter[521]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[416], (modelica_real)data->simulationInfo->realParameter[417], (modelica_real)data->simulationInfo->realParameter[418], (modelica_real)data->simulationInfo->realParameter[419], (modelica_real)data->simulationInfo->realParameter[420], (modelica_real)data->simulationInfo->realParameter[421]);
  data->localData[0]->realVars[330] /* MatStm2.compMolEnth[3,1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HVapId(threadData, data->simulationInfo->realParameter[486], tmp0, tmp1, data->simulationInfo->realParameter[496], data->localData[0]->realVars[313] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 330
type: SIMPLE_ASSIGN
MatStm2._compMolEnth[2,2] = Simulator.Files.Thermodynamic_Functions.HLiqId(MatStm2.comp[2].SH, {MatStm2.comp[2].VapCp[1], MatStm2.comp[2].VapCp[2], MatStm2.comp[2].VapCp[3], MatStm2.comp[2].VapCp[4], MatStm2.comp[2].VapCp[5], MatStm2.comp[2].VapCp[6]}, {MatStm2.comp[2].HOV[1], MatStm2.comp[2].HOV[2], MatStm2.comp[2].HOV[3], MatStm2.comp[2].HOV[4], MatStm2.comp[2].HOV[5], MatStm2.comp[2].HOV[6]}, MatStm2.comp[2].Tc, MatStm2.T)
*/
void Flowsheet_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[522], (modelica_real)data->simulationInfo->realParameter[523], (modelica_real)data->simulationInfo->realParameter[524], (modelica_real)data->simulationInfo->realParameter[525], (modelica_real)data->simulationInfo->realParameter[526], (modelica_real)data->simulationInfo->realParameter[527]);
  array_alloc_scalar_real_array(&tmp1, 6, (modelica_real)data->simulationInfo->realParameter[422], (modelica_real)data->simulationInfo->realParameter[423], (modelica_real)data->simulationInfo->realParameter[424], (modelica_real)data->simulationInfo->realParameter[425], (modelica_real)data->simulationInfo->realParameter[426], (modelica_real)data->simulationInfo->realParameter[427]);
  data->localData[0]->realVars[329] /* MatStm2.compMolEnth[2,2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_HLiqId(threadData, data->simulationInfo->realParameter[487], tmp0, tmp1, data->simulationInfo->realParameter[497], data->localData[0]->realVars[313] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 331
type: SIMPLE_ASSIGN
MatStm2._J[1] = MatStm2.r[1] / (MatStm2.r[1] * MatStm2.compMolFrac[2,1] + MatStm2.r[2] * MatStm2.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->localData[0]->realVars[279] /* MatStm2.J[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[399] /* MatStm2.r[1] variable */,(data->localData[0]->realVars[399] /* MatStm2.r[1] variable */) * (data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[400] /* MatStm2.r[2] variable */) * (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */),"MatStm2.r[1] * MatStm2.compMolFrac[2,1] + MatStm2.r[2] * MatStm2.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 332
type: SIMPLE_ASSIGN
MatStm2._theta[1] = (MatStm2.compMolFrac[2,1] * MatStm2.q[1] * MatStm2.e[1,1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2] * MatStm2.e[1,2]) / (MatStm2.compMolFrac[2,1] * MatStm2.q[1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2])
*/
void Flowsheet_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->localData[0]->realVars[432] /* MatStm2.theta[1] variable */ = DIVISION_SIM((data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */)) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[359] /* MatStm2.e[1,2] variable */)),(data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */),"MatStm2.compMolFrac[2,1] * MatStm2.q[1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 333
type: SIMPLE_ASSIGN
MatStm2._L[1] = MatStm2.q[1] / (MatStm2.q[1] * MatStm2.compMolFrac[2,1] + MatStm2.q[2] * MatStm2.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->localData[0]->realVars[287] /* MatStm2.L[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[397] /* MatStm2.q[1] variable */,(data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */),"MatStm2.q[1] * MatStm2.compMolFrac[2,1] + MatStm2.q[2] * MatStm2.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 334
type: SIMPLE_ASSIGN
MatStm2._gammac[1] = exp(1.0 + log(MatStm2.J[1]) + (-5.0) * MatStm2.q[1] * (1.0 + log(MatStm2.J[1] / MatStm2.L[1]) - MatStm2.J[1] / MatStm2.L[1]) - MatStm2.J[1])
*/
void Flowsheet_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[279] /* MatStm2.J[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J[1]) was %g should be > 0", tmp0);
  }tmp1 = DIVISION_SIM(data->localData[0]->realVars[279] /* MatStm2.J[1] variable */,data->localData[0]->realVars[287] /* MatStm2.L[1] variable */,"MatStm2.L[1]",equationIndexes);
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J[1] / MatStm2.L[1]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[372] /* MatStm2.gammac[1] variable */ = exp(1.0 + log(tmp0) + (-5.0) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (1.0 + log(tmp1) - (DIVISION_SIM(data->localData[0]->realVars[279] /* MatStm2.J[1] variable */,data->localData[0]->realVars[287] /* MatStm2.L[1] variable */,"MatStm2.L[1]",equationIndexes)))) - data->localData[0]->realVars[279] /* MatStm2.J[1] variable */);
  TRACE_POP
}
/*
equation index: 335
type: SIMPLE_ASSIGN
MatStm2._J[2] = MatStm2.r[2] / (MatStm2.r[1] * MatStm2.compMolFrac[2,1] + MatStm2.r[2] * MatStm2.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->localData[0]->realVars[280] /* MatStm2.J[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[400] /* MatStm2.r[2] variable */,(data->localData[0]->realVars[399] /* MatStm2.r[1] variable */) * (data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[400] /* MatStm2.r[2] variable */) * (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */),"MatStm2.r[1] * MatStm2.compMolFrac[2,1] + MatStm2.r[2] * MatStm2.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 336
type: SIMPLE_ASSIGN
MatStm2._L[2] = MatStm2.q[2] / (MatStm2.q[1] * MatStm2.compMolFrac[2,1] + MatStm2.q[2] * MatStm2.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->localData[0]->realVars[288] /* MatStm2.L[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[398] /* MatStm2.q[2] variable */,(data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */),"MatStm2.q[1] * MatStm2.compMolFrac[2,1] + MatStm2.q[2] * MatStm2.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 337
type: SIMPLE_ASSIGN
MatStm2._gammac[2] = exp(1.0 + log(MatStm2.J[2]) + (-5.0) * MatStm2.q[2] * (1.0 + log(MatStm2.J[2] / MatStm2.L[2]) - MatStm2.J[2] / MatStm2.L[2]) - MatStm2.J[2])
*/
void Flowsheet_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[280] /* MatStm2.J[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J[2]) was %g should be > 0", tmp0);
  }tmp1 = DIVISION_SIM(data->localData[0]->realVars[280] /* MatStm2.J[2] variable */,data->localData[0]->realVars[288] /* MatStm2.L[2] variable */,"MatStm2.L[2]",equationIndexes);
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J[2] / MatStm2.L[2]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[373] /* MatStm2.gammac[2] variable */ = exp(1.0 + log(tmp0) + (-5.0) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (1.0 + log(tmp1) - (DIVISION_SIM(data->localData[0]->realVars[280] /* MatStm2.J[2] variable */,data->localData[0]->realVars[288] /* MatStm2.L[2] variable */,"MatStm2.L[2]",equationIndexes)))) - data->localData[0]->realVars[280] /* MatStm2.J[2] variable */);
  TRACE_POP
}
/*
equation index: 338
type: SIMPLE_ASSIGN
MatStm2._theta[2] = (MatStm2.compMolFrac[2,1] * MatStm2.q[1] * MatStm2.e[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2] * MatStm2.e[2,2]) / (MatStm2.compMolFrac[2,1] * MatStm2.q[1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2])
*/
void Flowsheet_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->localData[0]->realVars[433] /* MatStm2.theta[2] variable */ = DIVISION_SIM((data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[360] /* MatStm2.e[2,1] variable */)) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[361] /* MatStm2.e[2,2] variable */)),(data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */),"MatStm2.compMolFrac[2,1] * MatStm2.q[1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 339
type: SIMPLE_ASSIGN
MatStm2._theta[3] = (MatStm2.compMolFrac[2,1] * MatStm2.q[1] * MatStm2.e[3,1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2] * MatStm2.e[3,2]) / (MatStm2.compMolFrac[2,1] * MatStm2.q[1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2])
*/
void Flowsheet_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->localData[0]->realVars[434] /* MatStm2.theta[3] variable */ = DIVISION_SIM((data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[362] /* MatStm2.e[3,1] variable */)) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[363] /* MatStm2.e[3,2] variable */)),(data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */),"MatStm2.compMolFrac[2,1] * MatStm2.q[1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 340
type: SIMPLE_ASSIGN
MatStm2._theta[4] = (MatStm2.compMolFrac[2,1] * MatStm2.q[1] * MatStm2.e[4,1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2] * MatStm2.e[4,2]) / (MatStm2.compMolFrac[2,1] * MatStm2.q[1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2])
*/
void Flowsheet_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->localData[0]->realVars[435] /* MatStm2.theta[4] variable */ = DIVISION_SIM((data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[364] /* MatStm2.e[4,1] variable */)) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[365] /* MatStm2.e[4,2] variable */)),(data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */),"MatStm2.compMolFrac[2,1] * MatStm2.q[1] + MatStm2.compMolFrac[2,2] * MatStm2.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 341
type: SIMPLE_ASSIGN
MatStm2._Psat[1] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[1].VP[1], MatStm2.comp[1].VP[2], MatStm2.comp[1].VP[3], MatStm2.comp[1].VP[4], MatStm2.comp[1].VP[5], MatStm2.comp[1].VP[6]}, MatStm2.T)
*/
void Flowsheet_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[504], (modelica_real)data->simulationInfo->realParameter[505], (modelica_real)data->simulationInfo->realParameter[506], (modelica_real)data->simulationInfo->realParameter[507], (modelica_real)data->simulationInfo->realParameter[508], (modelica_real)data->simulationInfo->realParameter[509]);
  data->localData[0]->realVars[299] /* MatStm2.Psat[1] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[313] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 342
type: SIMPLE_ASSIGN
MatStm2._Psat[2] = Simulator.Files.Thermodynamic_Functions.Psat({MatStm2.comp[2].VP[1], MatStm2.comp[2].VP[2], MatStm2.comp[2].VP[3], MatStm2.comp[2].VP[4], MatStm2.comp[2].VP[5], MatStm2.comp[2].VP[6]}, MatStm2.T)
*/
void Flowsheet_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 6, (modelica_real)data->simulationInfo->realParameter[510], (modelica_real)data->simulationInfo->realParameter[511], (modelica_real)data->simulationInfo->realParameter[512], (modelica_real)data->simulationInfo->realParameter[513], (modelica_real)data->simulationInfo->realParameter[514], (modelica_real)data->simulationInfo->realParameter[515]);
  data->localData[0]->realVars[300] /* MatStm2.Psat[2] variable */ = omc_Simulator_Files_Thermodynamic__Functions_Psat(threadData, tmp0, data->localData[0]->realVars[313] /* MatStm2.T variable */);
  TRACE_POP
}
/*
equation index: 343
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[3] = MatStm2.compMolFrac[3,1] * MatStm2.compMolEnth[3,1] + MatStm2.compMolFrac[3,2] * MatStm2.compMolEnth[3,2]
*/
void Flowsheet_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  data->localData[0]->realVars[390] /* MatStm2.phasMolEnth[3] variable */ = (data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[330] /* MatStm2.compMolEnth[3,1] variable */) + (data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[331] /* MatStm2.compMolEnth[3,2] variable */);
  TRACE_POP
}
/*
equation index: 344
type: SIMPLE_ASSIGN
MatStm2._phasMolEnth[2] = MatStm2.compMolFrac[2,1] * MatStm2.compMolEnth[2,1] + MatStm2.compMolFrac[2,2] * MatStm2.compMolEnth[2,2]
*/
void Flowsheet_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  data->localData[0]->realVars[389] /* MatStm2.phasMolEnth[2] variable */ = (data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[328] /* MatStm2.compMolEnth[2,1] variable */) + (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[329] /* MatStm2.compMolEnth[2,2] variable */);
  TRACE_POP
}
/*
equation index: 345
type: SIMPLE_ASSIGN
MatStm2._tau[1,1] = exp((-MatStm2.a[1,1]) / MatStm2.T)
*/
void Flowsheet_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  data->localData[0]->realVars[416] /* MatStm2.tau[1,1] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[380]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 346
type: SIMPLE_ASSIGN
MatStm2._tau[1,2] = exp((-MatStm2.a[1,2]) / MatStm2.T)
*/
void Flowsheet_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  data->localData[0]->realVars[417] /* MatStm2.tau[1,2] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[381]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 347
type: SIMPLE_ASSIGN
MatStm2._tau[1,3] = exp((-MatStm2.a[1,3]) / MatStm2.T)
*/
void Flowsheet_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->localData[0]->realVars[418] /* MatStm2.tau[1,3] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[382]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 348
type: SIMPLE_ASSIGN
MatStm2._tau[1,4] = exp((-MatStm2.a[1,4]) / MatStm2.T)
*/
void Flowsheet_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->localData[0]->realVars[419] /* MatStm2.tau[1,4] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[383]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 349
type: SIMPLE_ASSIGN
MatStm2._tau[2,1] = exp((-MatStm2.a[2,1]) / MatStm2.T)
*/
void Flowsheet_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->localData[0]->realVars[420] /* MatStm2.tau[2,1] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[384]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 350
type: SIMPLE_ASSIGN
MatStm2._tau[2,2] = exp((-MatStm2.a[2,2]) / MatStm2.T)
*/
void Flowsheet_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->localData[0]->realVars[421] /* MatStm2.tau[2,2] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[385]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 351
type: SIMPLE_ASSIGN
MatStm2._tau[2,3] = exp((-MatStm2.a[2,3]) / MatStm2.T)
*/
void Flowsheet_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->localData[0]->realVars[422] /* MatStm2.tau[2,3] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[386]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 352
type: SIMPLE_ASSIGN
MatStm2._tau[2,4] = exp((-MatStm2.a[2,4]) / MatStm2.T)
*/
void Flowsheet_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  data->localData[0]->realVars[423] /* MatStm2.tau[2,4] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[387]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 353
type: SIMPLE_ASSIGN
MatStm2._tau[3,1] = exp((-MatStm2.a[3,1]) / MatStm2.T)
*/
void Flowsheet_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->localData[0]->realVars[424] /* MatStm2.tau[3,1] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[388]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 354
type: SIMPLE_ASSIGN
MatStm2._tau[3,2] = exp((-MatStm2.a[3,2]) / MatStm2.T)
*/
void Flowsheet_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  data->localData[0]->realVars[425] /* MatStm2.tau[3,2] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[389]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 355
type: SIMPLE_ASSIGN
MatStm2._tau[3,3] = exp((-MatStm2.a[3,3]) / MatStm2.T)
*/
void Flowsheet_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  data->localData[0]->realVars[426] /* MatStm2.tau[3,3] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[390]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 356
type: SIMPLE_ASSIGN
MatStm2._tau[3,4] = exp((-MatStm2.a[3,4]) / MatStm2.T)
*/
void Flowsheet_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->localData[0]->realVars[427] /* MatStm2.tau[3,4] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[391]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 357
type: SIMPLE_ASSIGN
MatStm2._tau[4,1] = exp((-MatStm2.a[4,1]) / MatStm2.T)
*/
void Flowsheet_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->localData[0]->realVars[428] /* MatStm2.tau[4,1] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[392]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 358
type: SIMPLE_ASSIGN
MatStm2._S[1] = MatStm2.theta[1] * MatStm2.tau[1,1] + MatStm2.theta[2] * MatStm2.tau[2,1] + MatStm2.theta[3] * MatStm2.tau[3,1] + MatStm2.theta[4] * MatStm2.tau[4,1]
*/
void Flowsheet_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->localData[0]->realVars[301] /* MatStm2.S[1] variable */ = (data->localData[0]->realVars[432] /* MatStm2.theta[1] variable */) * (data->localData[0]->realVars[416] /* MatStm2.tau[1,1] variable */) + (data->localData[0]->realVars[433] /* MatStm2.theta[2] variable */) * (data->localData[0]->realVars[420] /* MatStm2.tau[2,1] variable */) + (data->localData[0]->realVars[434] /* MatStm2.theta[3] variable */) * (data->localData[0]->realVars[424] /* MatStm2.tau[3,1] variable */) + (data->localData[0]->realVars[435] /* MatStm2.theta[4] variable */) * (data->localData[0]->realVars[428] /* MatStm2.tau[4,1] variable */);
  TRACE_POP
}
/*
equation index: 359
type: SIMPLE_ASSIGN
MatStm2._S_bubl[1] = MatStm2.theta_bubl[1] * MatStm2.tau[1,1] + MatStm2.theta_bubl[2] * MatStm2.tau[2,1] + MatStm2.theta_bubl[3] * MatStm2.tau[3,1] + MatStm2.theta_bubl[4] * MatStm2.tau[4,1]
*/
void Flowsheet_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->localData[0]->realVars[305] /* MatStm2.S_bubl[1] variable */ = (data->localData[0]->realVars[436] /* MatStm2.theta_bubl[1] variable */) * (data->localData[0]->realVars[416] /* MatStm2.tau[1,1] variable */) + (data->localData[0]->realVars[437] /* MatStm2.theta_bubl[2] variable */) * (data->localData[0]->realVars[420] /* MatStm2.tau[2,1] variable */) + (data->localData[0]->realVars[438] /* MatStm2.theta_bubl[3] variable */) * (data->localData[0]->realVars[424] /* MatStm2.tau[3,1] variable */) + (data->localData[0]->realVars[439] /* MatStm2.theta_bubl[4] variable */) * (data->localData[0]->realVars[428] /* MatStm2.tau[4,1] variable */);
  TRACE_POP
}
/*
equation index: 360
type: SIMPLE_ASSIGN
MatStm2._tau[4,2] = exp((-MatStm2.a[4,2]) / MatStm2.T)
*/
void Flowsheet_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->localData[0]->realVars[429] /* MatStm2.tau[4,2] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[393]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 361
type: SIMPLE_ASSIGN
MatStm2._S[2] = MatStm2.theta[1] * MatStm2.tau[1,2] + MatStm2.theta[2] * MatStm2.tau[2,2] + MatStm2.theta[3] * MatStm2.tau[3,2] + MatStm2.theta[4] * MatStm2.tau[4,2]
*/
void Flowsheet_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  data->localData[0]->realVars[302] /* MatStm2.S[2] variable */ = (data->localData[0]->realVars[432] /* MatStm2.theta[1] variable */) * (data->localData[0]->realVars[417] /* MatStm2.tau[1,2] variable */) + (data->localData[0]->realVars[433] /* MatStm2.theta[2] variable */) * (data->localData[0]->realVars[421] /* MatStm2.tau[2,2] variable */) + (data->localData[0]->realVars[434] /* MatStm2.theta[3] variable */) * (data->localData[0]->realVars[425] /* MatStm2.tau[3,2] variable */) + (data->localData[0]->realVars[435] /* MatStm2.theta[4] variable */) * (data->localData[0]->realVars[429] /* MatStm2.tau[4,2] variable */);
  TRACE_POP
}
/*
equation index: 362
type: SIMPLE_ASSIGN
MatStm2._S_bubl[2] = MatStm2.theta_bubl[1] * MatStm2.tau[1,2] + MatStm2.theta_bubl[2] * MatStm2.tau[2,2] + MatStm2.theta_bubl[3] * MatStm2.tau[3,2] + MatStm2.theta_bubl[4] * MatStm2.tau[4,2]
*/
void Flowsheet_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  data->localData[0]->realVars[306] /* MatStm2.S_bubl[2] variable */ = (data->localData[0]->realVars[436] /* MatStm2.theta_bubl[1] variable */) * (data->localData[0]->realVars[417] /* MatStm2.tau[1,2] variable */) + (data->localData[0]->realVars[437] /* MatStm2.theta_bubl[2] variable */) * (data->localData[0]->realVars[421] /* MatStm2.tau[2,2] variable */) + (data->localData[0]->realVars[438] /* MatStm2.theta_bubl[3] variable */) * (data->localData[0]->realVars[425] /* MatStm2.tau[3,2] variable */) + (data->localData[0]->realVars[439] /* MatStm2.theta_bubl[4] variable */) * (data->localData[0]->realVars[429] /* MatStm2.tau[4,2] variable */);
  TRACE_POP
}
/*
equation index: 363
type: SIMPLE_ASSIGN
MatStm2._tau[4,3] = exp((-MatStm2.a[4,3]) / MatStm2.T)
*/
void Flowsheet_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  data->localData[0]->realVars[430] /* MatStm2.tau[4,3] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[394]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 364
type: SIMPLE_ASSIGN
MatStm2._S[3] = MatStm2.theta[1] * MatStm2.tau[1,3] + MatStm2.theta[2] * MatStm2.tau[2,3] + MatStm2.theta[3] * MatStm2.tau[3,3] + MatStm2.theta[4] * MatStm2.tau[4,3]
*/
void Flowsheet_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  data->localData[0]->realVars[303] /* MatStm2.S[3] variable */ = (data->localData[0]->realVars[432] /* MatStm2.theta[1] variable */) * (data->localData[0]->realVars[418] /* MatStm2.tau[1,3] variable */) + (data->localData[0]->realVars[433] /* MatStm2.theta[2] variable */) * (data->localData[0]->realVars[422] /* MatStm2.tau[2,3] variable */) + (data->localData[0]->realVars[434] /* MatStm2.theta[3] variable */) * (data->localData[0]->realVars[426] /* MatStm2.tau[3,3] variable */) + (data->localData[0]->realVars[435] /* MatStm2.theta[4] variable */) * (data->localData[0]->realVars[430] /* MatStm2.tau[4,3] variable */);
  TRACE_POP
}
/*
equation index: 365
type: SIMPLE_ASSIGN
MatStm2._S_bubl[3] = MatStm2.theta_bubl[1] * MatStm2.tau[1,3] + MatStm2.theta_bubl[2] * MatStm2.tau[2,3] + MatStm2.theta_bubl[3] * MatStm2.tau[3,3] + MatStm2.theta_bubl[4] * MatStm2.tau[4,3]
*/
void Flowsheet_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  data->localData[0]->realVars[307] /* MatStm2.S_bubl[3] variable */ = (data->localData[0]->realVars[436] /* MatStm2.theta_bubl[1] variable */) * (data->localData[0]->realVars[418] /* MatStm2.tau[1,3] variable */) + (data->localData[0]->realVars[437] /* MatStm2.theta_bubl[2] variable */) * (data->localData[0]->realVars[422] /* MatStm2.tau[2,3] variable */) + (data->localData[0]->realVars[438] /* MatStm2.theta_bubl[3] variable */) * (data->localData[0]->realVars[426] /* MatStm2.tau[3,3] variable */) + (data->localData[0]->realVars[439] /* MatStm2.theta_bubl[4] variable */) * (data->localData[0]->realVars[430] /* MatStm2.tau[4,3] variable */);
  TRACE_POP
}
/*
equation index: 366
type: SIMPLE_ASSIGN
MatStm2._tau[4,4] = exp((-MatStm2.a[4,4]) / MatStm2.T)
*/
void Flowsheet_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->localData[0]->realVars[431] /* MatStm2.tau[4,4] variable */ = exp(DIVISION_SIM((-data->simulationInfo->realParameter[395]),data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 367
type: SIMPLE_ASSIGN
MatStm2._S[4] = MatStm2.theta[1] * MatStm2.tau[1,4] + MatStm2.theta[2] * MatStm2.tau[2,4] + MatStm2.theta[3] * MatStm2.tau[3,4] + MatStm2.theta[4] * MatStm2.tau[4,4]
*/
void Flowsheet_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->localData[0]->realVars[304] /* MatStm2.S[4] variable */ = (data->localData[0]->realVars[432] /* MatStm2.theta[1] variable */) * (data->localData[0]->realVars[419] /* MatStm2.tau[1,4] variable */) + (data->localData[0]->realVars[433] /* MatStm2.theta[2] variable */) * (data->localData[0]->realVars[423] /* MatStm2.tau[2,4] variable */) + (data->localData[0]->realVars[434] /* MatStm2.theta[3] variable */) * (data->localData[0]->realVars[427] /* MatStm2.tau[3,4] variable */) + (data->localData[0]->realVars[435] /* MatStm2.theta[4] variable */) * (data->localData[0]->realVars[431] /* MatStm2.tau[4,4] variable */);
  TRACE_POP
}
/*
equation index: 368
type: ALGORITHM

  MatStm2.gammar[2] := $START.MatStm2.gammar[2];
  MatStm2.gammar[1] := $START.MatStm2.gammar[1];
  MatStm2.sum[2] := $START.MatStm2.sum[2];
  MatStm2.sum[1] := $START.MatStm2.sum[1];
  MatStm2.B[2,4] := $START.MatStm2.B[2,4];
  MatStm2.B[2,3] := $START.MatStm2.B[2,3];
  MatStm2.B[2,2] := $START.MatStm2.B[2,2];
  MatStm2.B[2,1] := $START.MatStm2.B[2,1];
  MatStm2.B[1,4] := $START.MatStm2.B[1,4];
  MatStm2.B[1,3] := $START.MatStm2.B[1,3];
  MatStm2.B[1,2] := $START.MatStm2.B[1,2];
  MatStm2.B[1,1] := $START.MatStm2.B[1,1];
  for i in 1:2 loop
    for j in 1:4 loop
      for l in 1:4 loop
        MatStm2.B[i,j] := MatStm2.e[1,i] * MatStm2.tau[1,j] + MatStm2.e[2,i] * MatStm2.tau[2,j] + MatStm2.e[3,i] * MatStm2.tau[3,j] + MatStm2.e[4,i] * MatStm2.tau[4,j];
      end for;
    end for;
  end for;
  MatStm2.sum[:] := {0.0, 0.0};
  for j in 1:4 loop
    for i in 1:2 loop
      MatStm2.sum[i] := MatStm2.sum[i] + MatStm2.theta[j] * MatStm2.B[i,j] / MatStm2.S[j] - MatStm2.e[j,i] * log(MatStm2.B[i,j] / MatStm2.S[j]);
      MatStm2.gammar[i] := exp(MatStm2.q[i] * (1.0 - MatStm2.sum[i]));
    end for;
  end for;
*/
void Flowsheet_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  modelica_integer tmp0;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  real_array tmp9;
  index_spec_t tmp10;
  real_array tmp11;
  modelica_real tmp12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  data->localData[0]->realVars[379] /* MatStm2.gammar[2] variable */ = data->modelData->realVarsData[379].attribute /* MatStm2.gammar[2] variable */.start;

  data->localData[0]->realVars[378] /* MatStm2.gammar[1] variable */ = data->modelData->realVarsData[378].attribute /* MatStm2.gammar[1] variable */.start;

  data->localData[0]->realVars[411] /* MatStm2.sum[2] variable */ = data->modelData->realVarsData[411].attribute /* MatStm2.sum[2] variable */.start;

  data->localData[0]->realVars[410] /* MatStm2.sum[1] variable */ = data->modelData->realVarsData[410].attribute /* MatStm2.sum[1] variable */.start;

  data->localData[0]->realVars[278] /* MatStm2.B[2,4] variable */ = data->modelData->realVarsData[278].attribute /* MatStm2.B[2,4] variable */.start;

  data->localData[0]->realVars[277] /* MatStm2.B[2,3] variable */ = data->modelData->realVarsData[277].attribute /* MatStm2.B[2,3] variable */.start;

  data->localData[0]->realVars[276] /* MatStm2.B[2,2] variable */ = data->modelData->realVarsData[276].attribute /* MatStm2.B[2,2] variable */.start;

  data->localData[0]->realVars[275] /* MatStm2.B[2,1] variable */ = data->modelData->realVarsData[275].attribute /* MatStm2.B[2,1] variable */.start;

  data->localData[0]->realVars[274] /* MatStm2.B[1,4] variable */ = data->modelData->realVarsData[274].attribute /* MatStm2.B[1,4] variable */.start;

  data->localData[0]->realVars[273] /* MatStm2.B[1,3] variable */ = data->modelData->realVarsData[273].attribute /* MatStm2.B[1,3] variable */.start;

  data->localData[0]->realVars[272] /* MatStm2.B[1,2] variable */ = data->modelData->realVarsData[272].attribute /* MatStm2.B[1,2] variable */.start;

  data->localData[0]->realVars[271] /* MatStm2.B[1,1] variable */ = data->modelData->realVarsData[271].attribute /* MatStm2.B[1,1] variable */.start;

  tmp6 = ((modelica_integer) 1); tmp7 = 1; tmp8 = ((modelica_integer) 2);
  if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp6, tmp8); $Pi += tmp7)
    {
      tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 4);
      if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
      {
        modelica_integer $Pj;
        for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp3, tmp5); $Pj += tmp4)
        {
          tmp0 = ((modelica_integer) 1); tmp1 = 1; tmp2 = ((modelica_integer) 4);
          if(!(((tmp1 > 0) && (tmp0 > tmp2)) || ((tmp1 < 0) && (tmp0 < tmp2))))
          {
            modelica_integer $Pl;
            for($Pl = ((modelica_integer) 1); in_range_integer($Pl, tmp0, tmp2); $Pl += tmp1)
            {
              (&data->localData[0]->realVars[271] /* MatStm2.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)] = ((&data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[416] /* MatStm2.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 1), (modelica_integer)$Pj)]) + ((&data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[416] /* MatStm2.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 2), (modelica_integer)$Pj)]) + ((&data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[416] /* MatStm2.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 3), (modelica_integer)$Pj)]) + ((&data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 4), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[416] /* MatStm2.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 4), (modelica_integer)$Pj)]);
            }
          }
        }
      }
    }
  }

  array_alloc_scalar_real_array(&tmp9, 2, (modelica_real)0.0, (modelica_real)0.0);
  create_index_spec(&tmp10, 1, (1), (int*)0, 'W');
  real_array_create(&tmp11, (modelica_real*)&data->localData[0]->realVars[410] /* MatStm2.sum[1] variable */, 1, 2);
  indexed_assign_real_array(tmp9, &tmp11, &tmp10);

  tmp16 = ((modelica_integer) 1); tmp17 = 1; tmp18 = ((modelica_integer) 4);
  if(!(((tmp17 > 0) && (tmp16 > tmp18)) || ((tmp17 < 0) && (tmp16 < tmp18))))
  {
    modelica_integer $Pj;
    for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp16, tmp18); $Pj += tmp17)
    {
      tmp13 = ((modelica_integer) 1); tmp14 = 1; tmp15 = ((modelica_integer) 2);
      if(!(((tmp14 > 0) && (tmp13 > tmp15)) || ((tmp14 < 0) && (tmp13 < tmp15))))
      {
        modelica_integer $Pi;
        for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp13, tmp15); $Pi += tmp14)
        {
          tmp12 = DIVISION_SIM((&data->localData[0]->realVars[271] /* MatStm2.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[301] /* MatStm2.S[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm2.S[j]",equationIndexes);
          if(!(tmp12 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
            throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.B[i,j] / MatStm2.S[j]) was %g should be > 0", tmp12);
          }
          (&data->localData[0]->realVars[410] /* MatStm2.sum[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = (&data->localData[0]->realVars[410] /* MatStm2.sum[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] + ((&data->localData[0]->realVars[432] /* MatStm2.theta[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)]) * (DIVISION_SIM((&data->localData[0]->realVars[271] /* MatStm2.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[301] /* MatStm2.S[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm2.S[j]",equationIndexes)) - (((&data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, (modelica_integer)$Pj, (modelica_integer)$Pi)]) * (log(tmp12)));

          (&data->localData[0]->realVars[378] /* MatStm2.gammar[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = exp(((&data->localData[0]->realVars[397] /* MatStm2.q[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * (1.0 - (&data->localData[0]->realVars[410] /* MatStm2.sum[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 369
type: SIMPLE_ASSIGN
MatStm2._gamma[1] = exp(log(MatStm2.gammar[1]) + log(MatStm2.gammac[1]))
*/
void Flowsheet_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[378] /* MatStm2.gammar[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammar[1]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[372] /* MatStm2.gammac[1] variable */;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammac[1]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[366] /* MatStm2.gamma[1] variable */ = exp(log(tmp0) + log(tmp1));
  TRACE_POP
}
/*
equation index: 370
type: SIMPLE_ASSIGN
MatStm2._gamma[2] = exp(log(MatStm2.gammar[2]) + log(MatStm2.gammac[2]))
*/
void Flowsheet_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[379] /* MatStm2.gammar[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammar[2]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[373] /* MatStm2.gammac[2] variable */;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammac[2]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[367] /* MatStm2.gamma[2] variable */ = exp(log(tmp0) + log(tmp1));
  TRACE_POP
}
/*
equation index: 371
type: SIMPLE_ASSIGN
MatStm2._S_bubl[4] = MatStm2.theta_bubl[1] * MatStm2.tau[1,4] + MatStm2.theta_bubl[2] * MatStm2.tau[2,4] + MatStm2.theta_bubl[3] * MatStm2.tau[3,4] + MatStm2.theta_bubl[4] * MatStm2.tau[4,4]
*/
void Flowsheet_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->localData[0]->realVars[308] /* MatStm2.S_bubl[4] variable */ = (data->localData[0]->realVars[436] /* MatStm2.theta_bubl[1] variable */) * (data->localData[0]->realVars[419] /* MatStm2.tau[1,4] variable */) + (data->localData[0]->realVars[437] /* MatStm2.theta_bubl[2] variable */) * (data->localData[0]->realVars[423] /* MatStm2.tau[2,4] variable */) + (data->localData[0]->realVars[438] /* MatStm2.theta_bubl[3] variable */) * (data->localData[0]->realVars[427] /* MatStm2.tau[3,4] variable */) + (data->localData[0]->realVars[439] /* MatStm2.theta_bubl[4] variable */) * (data->localData[0]->realVars[431] /* MatStm2.tau[4,4] variable */);
  TRACE_POP
}
/*
equation index: 372
type: ALGORITHM

  MatStm2.gammar_bubl[2] := $START.MatStm2.gammar_bubl[2];
  MatStm2.gammar_bubl[1] := $START.MatStm2.gammar_bubl[1];
  MatStm2.sum_bubl[2] := $START.MatStm2.sum_bubl[2];
  MatStm2.sum_bubl[1] := $START.MatStm2.sum_bubl[1];
  MatStm2.sum_bubl[:] := {0.0, 0.0};
  for j in 1:4 loop
    for i in 1:2 loop
      MatStm2.sum_bubl[i] := MatStm2.sum_bubl[i] + MatStm2.theta_bubl[j] * MatStm2.B[i,j] / MatStm2.S_bubl[j] - MatStm2.e[j,i] * log(MatStm2.B[i,j] / MatStm2.S_bubl[j]);
      MatStm2.gammar_bubl[i] := exp(MatStm2.q[i] * (1.0 - MatStm2.sum_bubl[i]));
    end for;
  end for;
*/
void Flowsheet_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_real tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[381] /* MatStm2.gammar_bubl[2] variable */ = data->modelData->realVarsData[381].attribute /* MatStm2.gammar_bubl[2] variable */.start;

  data->localData[0]->realVars[380] /* MatStm2.gammar_bubl[1] variable */ = data->modelData->realVarsData[380].attribute /* MatStm2.gammar_bubl[1] variable */.start;

  data->localData[0]->realVars[413] /* MatStm2.sum_bubl[2] variable */ = data->modelData->realVarsData[413].attribute /* MatStm2.sum_bubl[2] variable */.start;

  data->localData[0]->realVars[412] /* MatStm2.sum_bubl[1] variable */ = data->modelData->realVarsData[412].attribute /* MatStm2.sum_bubl[1] variable */.start;

  array_alloc_scalar_real_array(&tmp0, 2, (modelica_real)0.0, (modelica_real)0.0);
  create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
  real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[412] /* MatStm2.sum_bubl[1] variable */, 1, 2);
  indexed_assign_real_array(tmp0, &tmp2, &tmp1);

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 4);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pj;
    for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp7, tmp9); $Pj += tmp8)
    {
      tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = ((modelica_integer) 2);
      if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
      {
        modelica_integer $Pi;
        for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp4, tmp6); $Pi += tmp5)
        {
          tmp3 = DIVISION_SIM((&data->localData[0]->realVars[271] /* MatStm2.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[305] /* MatStm2.S_bubl[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm2.S_bubl[j]",equationIndexes);
          if(!(tmp3 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
            throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.B[i,j] / MatStm2.S_bubl[j]) was %g should be > 0", tmp3);
          }
          (&data->localData[0]->realVars[412] /* MatStm2.sum_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = (&data->localData[0]->realVars[412] /* MatStm2.sum_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] + ((&data->localData[0]->realVars[436] /* MatStm2.theta_bubl[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)]) * (DIVISION_SIM((&data->localData[0]->realVars[271] /* MatStm2.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[305] /* MatStm2.S_bubl[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm2.S_bubl[j]",equationIndexes)) - (((&data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, (modelica_integer)$Pj, (modelica_integer)$Pi)]) * (log(tmp3)));

          (&data->localData[0]->realVars[380] /* MatStm2.gammar_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = exp(((&data->localData[0]->realVars[397] /* MatStm2.q[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * (1.0 - (&data->localData[0]->realVars[412] /* MatStm2.sum_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 373
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[1] = exp(log(MatStm2.gammar_bubl[1]) + log(MatStm2.gammac_bubl[1]))
*/
void Flowsheet_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[380] /* MatStm2.gammar_bubl[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammar_bubl[1]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[374] /* MatStm2.gammac_bubl[1] variable */;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammac_bubl[1]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[368] /* MatStm2.gammaBubl[1] variable */ = exp(log(tmp0) + log(tmp1));
  TRACE_POP
}
/*
equation index: 374
type: SIMPLE_ASSIGN
MatStm2._gammaBubl[2] = exp(log(MatStm2.gammar_bubl[2]) + log(MatStm2.gammac_bubl[2]))
*/
void Flowsheet_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[381] /* MatStm2.gammar_bubl[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammar_bubl[2]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[375] /* MatStm2.gammac_bubl[2] variable */;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammac_bubl[2]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[369] /* MatStm2.gammaBubl[2] variable */ = exp(log(tmp0) + log(tmp1));
  TRACE_POP
}
/*
equation index: 375
type: SIMPLE_ASSIGN
MatStm2._Pbubl = MatStm2.gammaBubl[1] * MatStm2.compMolFrac[1,1] * exp(MatStm2.comp[1].VP[2] + MatStm2.comp[1].VP[3] / MatStm2.T + MatStm2.comp[1].VP[4] * log(MatStm2.T) + MatStm2.comp[1].VP[5] * MatStm2.T ^ MatStm2.comp[1].VP[6]) + MatStm2.gammaBubl[2] * MatStm2.compMolFrac[1,2] * exp(MatStm2.comp[2].VP[2] + MatStm2.comp[2].VP[3] / MatStm2.T + MatStm2.comp[2].VP[4] * log(MatStm2.T) + MatStm2.comp[2].VP[5] * MatStm2.T ^ MatStm2.comp[2].VP[6])
*/
void Flowsheet_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
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
  tmp0 = data->localData[0]->realVars[313] /* MatStm2.T variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.T) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[313] /* MatStm2.T variable */;
  tmp2 = data->simulationInfo->realParameter[509];
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
  }tmp8 = data->localData[0]->realVars[313] /* MatStm2.T variable */;
  if(!(tmp8 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.T) was %g should be > 0", tmp8);
  }tmp9 = data->localData[0]->realVars[313] /* MatStm2.T variable */;
  tmp10 = data->simulationInfo->realParameter[515];
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
  }
  data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */ = (data->localData[0]->realVars[368] /* MatStm2.gammaBubl[1] variable */) * ((data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[505] + DIVISION_SIM(data->simulationInfo->realParameter[506],data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes) + (data->simulationInfo->realParameter[507]) * (log(tmp0)) + (data->simulationInfo->realParameter[508]) * (tmp3)))) + (data->localData[0]->realVars[369] /* MatStm2.gammaBubl[2] variable */) * ((data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[511] + DIVISION_SIM(data->simulationInfo->realParameter[512],data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes) + (data->simulationInfo->realParameter[513]) * (log(tmp8)) + (data->simulationInfo->realParameter[514]) * (tmp11))));
  TRACE_POP
}
/*
equation index: 376
type: SIMPLE_ASSIGN
MatStm2._K[1] = 9.869232667160129e-006 * MatStm2.gamma[1] * MatStm2.Psat[1]
*/
void Flowsheet_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->localData[0]->realVars[285] /* MatStm2.K[1] variable */ = (9.869232667160129e-006) * ((data->localData[0]->realVars[366] /* MatStm2.gamma[1] variable */) * (data->localData[0]->realVars[299] /* MatStm2.Psat[1] variable */));
  TRACE_POP
}
/*
equation index: 377
type: SIMPLE_ASSIGN
MatStm2._K[2] = 9.869232667160129e-006 * MatStm2.gamma[2] * MatStm2.Psat[2]
*/
void Flowsheet_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  data->localData[0]->realVars[286] /* MatStm2.K[2] variable */ = (9.869232667160129e-006) * ((data->localData[0]->realVars[367] /* MatStm2.gamma[2] variable */) * (data->localData[0]->realVars[300] /* MatStm2.Psat[2] variable */));
  TRACE_POP
}
/*
equation index: 378
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,1] = MatStm2.compMolFrac[2,1] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  data->localData[0]->realVars[340] /* MatStm2.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[448] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 379
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[2,2] = MatStm2.compMolFrac[2,2] * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->localData[0]->realVars[341] /* MatStm2.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[448] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 380
type: SIMPLE_ASSIGN
MatStm2._liqPhasMolFrac = 0.006666666666666667 * MatStm2.totMolFlo[2]
*/
void Flowsheet_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->localData[0]->realVars[385] /* MatStm2.liqPhasMolFrac variable */ = (0.006666666666666667) * (data->localData[0]->realVars[448] /* MatStm2.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 381
type: SIMPLE_ASSIGN
MatStm2._vapPhasMolFrac = 1.0 - MatStm2.liqPhasMolFrac
*/
void Flowsheet_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  data->localData[0]->realVars[451] /* MatStm2.vapPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[385] /* MatStm2.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 382
type: SIMPLE_ASSIGN
MatStm2._totMolFlo[3] = 150.0 * MatStm2.vapPhasMolFrac
*/
void Flowsheet_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->localData[0]->realVars[449] /* MatStm2.totMolFlo[3] variable */ = (150.0) * (data->localData[0]->realVars[451] /* MatStm2.vapPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 383
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,1] = MatStm2.compMolFrac[3,1] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->localData[0]->realVars[342] /* MatStm2.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[449] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 384
type: SIMPLE_ASSIGN
MatStm2._compMolFlo[3,2] = MatStm2.compMolFrac[3,2] * MatStm2.totMolFlo[3]
*/
void Flowsheet_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->localData[0]->realVars[343] /* MatStm2.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[449] /* MatStm2.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 385
type: SIMPLE_ASSIGN
MatStm2._theta_dew[4] = (MatStm2.dewLiqMolFrac[1] * MatStm2.q[1] * MatStm2.e[4,1] + MatStm2.dewLiqMolFrac[2] * MatStm2.q[2] * MatStm2.e[4,2]) / (MatStm2.dewLiqMolFrac[1] * MatStm2.q[1] + MatStm2.dewLiqMolFrac[2] * MatStm2.q[2])
*/
void Flowsheet_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->localData[0]->realVars[443] /* MatStm2.theta_dew[4] variable */ = DIVISION_SIM((data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[364] /* MatStm2.e[4,1] variable */)) + (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[365] /* MatStm2.e[4,2] variable */)),(data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */),"MatStm2.dewLiqMolFrac[1] * MatStm2.q[1] + MatStm2.dewLiqMolFrac[2] * MatStm2.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 386
type: SIMPLE_ASSIGN
MatStm2._theta_dew[1] = (MatStm2.dewLiqMolFrac[1] * MatStm2.q[1] * MatStm2.e[1,1] + MatStm2.dewLiqMolFrac[2] * MatStm2.q[2] * MatStm2.e[1,2]) / (MatStm2.dewLiqMolFrac[1] * MatStm2.q[1] + MatStm2.dewLiqMolFrac[2] * MatStm2.q[2])
*/
void Flowsheet_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->localData[0]->realVars[440] /* MatStm2.theta_dew[1] variable */ = DIVISION_SIM((data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */)) + (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[359] /* MatStm2.e[1,2] variable */)),(data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */),"MatStm2.dewLiqMolFrac[1] * MatStm2.q[1] + MatStm2.dewLiqMolFrac[2] * MatStm2.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 387
type: SIMPLE_ASSIGN
MatStm2._S_dew[3] = MatStm2.theta_dew[1] * MatStm2.tau[1,3] + MatStm2.theta_dew[2] * MatStm2.tau[2,3] + MatStm2.theta_dew[3] * MatStm2.tau[3,3] + MatStm2.theta_dew[4] * MatStm2.tau[4,3]
*/
void Flowsheet_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  data->localData[0]->realVars[311] /* MatStm2.S_dew[3] variable */ = (data->localData[0]->realVars[440] /* MatStm2.theta_dew[1] variable */) * (data->localData[0]->realVars[418] /* MatStm2.tau[1,3] variable */) + (data->localData[0]->realVars[441] /* MatStm2.theta_dew[2] variable */) * (data->localData[0]->realVars[422] /* MatStm2.tau[2,3] variable */) + (data->localData[0]->realVars[442] /* MatStm2.theta_dew[3] variable */) * (data->localData[0]->realVars[426] /* MatStm2.tau[3,3] variable */) + (data->localData[0]->realVars[443] /* MatStm2.theta_dew[4] variable */) * (data->localData[0]->realVars[430] /* MatStm2.tau[4,3] variable */);
  TRACE_POP
}
/*
equation index: 388
type: SIMPLE_ASSIGN
MatStm2._S_dew[2] = MatStm2.theta_dew[1] * MatStm2.tau[1,2] + MatStm2.theta_dew[2] * MatStm2.tau[2,2] + MatStm2.theta_dew[3] * MatStm2.tau[3,2] + MatStm2.theta_dew[4] * MatStm2.tau[4,2]
*/
void Flowsheet_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  data->localData[0]->realVars[310] /* MatStm2.S_dew[2] variable */ = (data->localData[0]->realVars[440] /* MatStm2.theta_dew[1] variable */) * (data->localData[0]->realVars[417] /* MatStm2.tau[1,2] variable */) + (data->localData[0]->realVars[441] /* MatStm2.theta_dew[2] variable */) * (data->localData[0]->realVars[421] /* MatStm2.tau[2,2] variable */) + (data->localData[0]->realVars[442] /* MatStm2.theta_dew[3] variable */) * (data->localData[0]->realVars[425] /* MatStm2.tau[3,2] variable */) + (data->localData[0]->realVars[443] /* MatStm2.theta_dew[4] variable */) * (data->localData[0]->realVars[429] /* MatStm2.tau[4,2] variable */);
  TRACE_POP
}
/*
equation index: 389
type: SIMPLE_ASSIGN
MatStm2._S_dew[1] = MatStm2.theta_dew[1] * MatStm2.tau[1,1] + MatStm2.theta_dew[2] * MatStm2.tau[2,1] + MatStm2.theta_dew[3] * MatStm2.tau[3,1] + MatStm2.theta_dew[4] * MatStm2.tau[4,1]
*/
void Flowsheet_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  data->localData[0]->realVars[309] /* MatStm2.S_dew[1] variable */ = (data->localData[0]->realVars[440] /* MatStm2.theta_dew[1] variable */) * (data->localData[0]->realVars[416] /* MatStm2.tau[1,1] variable */) + (data->localData[0]->realVars[441] /* MatStm2.theta_dew[2] variable */) * (data->localData[0]->realVars[420] /* MatStm2.tau[2,1] variable */) + (data->localData[0]->realVars[442] /* MatStm2.theta_dew[3] variable */) * (data->localData[0]->realVars[424] /* MatStm2.tau[3,1] variable */) + (data->localData[0]->realVars[443] /* MatStm2.theta_dew[4] variable */) * (data->localData[0]->realVars[428] /* MatStm2.tau[4,1] variable */);
  TRACE_POP
}
/*
equation index: 390
type: SIMPLE_ASSIGN
MatStm2._S_dew[4] = MatStm2.theta_dew[1] * MatStm2.tau[1,4] + MatStm2.theta_dew[2] * MatStm2.tau[2,4] + MatStm2.theta_dew[3] * MatStm2.tau[3,4] + MatStm2.theta_dew[4] * MatStm2.tau[4,4]
*/
void Flowsheet_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  data->localData[0]->realVars[312] /* MatStm2.S_dew[4] variable */ = (data->localData[0]->realVars[440] /* MatStm2.theta_dew[1] variable */) * (data->localData[0]->realVars[419] /* MatStm2.tau[1,4] variable */) + (data->localData[0]->realVars[441] /* MatStm2.theta_dew[2] variable */) * (data->localData[0]->realVars[423] /* MatStm2.tau[2,4] variable */) + (data->localData[0]->realVars[442] /* MatStm2.theta_dew[3] variable */) * (data->localData[0]->realVars[427] /* MatStm2.tau[3,4] variable */) + (data->localData[0]->realVars[443] /* MatStm2.theta_dew[4] variable */) * (data->localData[0]->realVars[431] /* MatStm2.tau[4,4] variable */);
  TRACE_POP
}
/*
equation index: 391
type: ALGORITHM

  MatStm2.gammar_dew[2] := $START.MatStm2.gammar_dew[2];
  MatStm2.gammar_dew[1] := $START.MatStm2.gammar_dew[1];
  MatStm2.sum_dew[2] := $START.MatStm2.sum_dew[2];
  MatStm2.sum_dew[1] := $START.MatStm2.sum_dew[1];
  MatStm2.sum_dew[:] := {0.0, 0.0};
  for j in 1:4 loop
    for i in 1:2 loop
      MatStm2.sum_dew[i] := MatStm2.sum_dew[i] + MatStm2.theta_dew[j] * MatStm2.B[i,j] / MatStm2.S_dew[j] - MatStm2.e[j,i] * log(MatStm2.B[i,j] / MatStm2.S_dew[j]);
      MatStm2.gammar_dew[i] := exp(MatStm2.q[i] * (1.0 - MatStm2.sum_dew[i]));
    end for;
  end for;
*/
void Flowsheet_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_real tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[383] /* MatStm2.gammar_dew[2] variable */ = data->modelData->realVarsData[383].attribute /* MatStm2.gammar_dew[2] variable */.start;

  data->localData[0]->realVars[382] /* MatStm2.gammar_dew[1] variable */ = data->modelData->realVarsData[382].attribute /* MatStm2.gammar_dew[1] variable */.start;

  data->localData[0]->realVars[415] /* MatStm2.sum_dew[2] variable */ = data->modelData->realVarsData[415].attribute /* MatStm2.sum_dew[2] variable */.start;

  data->localData[0]->realVars[414] /* MatStm2.sum_dew[1] variable */ = data->modelData->realVarsData[414].attribute /* MatStm2.sum_dew[1] variable */.start;

  array_alloc_scalar_real_array(&tmp0, 2, (modelica_real)0.0, (modelica_real)0.0);
  create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
  real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[414] /* MatStm2.sum_dew[1] variable */, 1, 2);
  indexed_assign_real_array(tmp0, &tmp2, &tmp1);

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 4);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pj;
    for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp7, tmp9); $Pj += tmp8)
    {
      tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = ((modelica_integer) 2);
      if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
      {
        modelica_integer $Pi;
        for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp4, tmp6); $Pi += tmp5)
        {
          tmp3 = DIVISION_SIM((&data->localData[0]->realVars[271] /* MatStm2.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[309] /* MatStm2.S_dew[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm2.S_dew[j]",equationIndexes);
          if(!(tmp3 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
            throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.B[i,j] / MatStm2.S_dew[j]) was %g should be > 0", tmp3);
          }
          (&data->localData[0]->realVars[414] /* MatStm2.sum_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = (&data->localData[0]->realVars[414] /* MatStm2.sum_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] + ((&data->localData[0]->realVars[440] /* MatStm2.theta_dew[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)]) * (DIVISION_SIM((&data->localData[0]->realVars[271] /* MatStm2.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[309] /* MatStm2.S_dew[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm2.S_dew[j]",equationIndexes)) - (((&data->localData[0]->realVars[358] /* MatStm2.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, (modelica_integer)$Pj, (modelica_integer)$Pi)]) * (log(tmp3)));

          (&data->localData[0]->realVars[382] /* MatStm2.gammar_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = exp(((&data->localData[0]->realVars[397] /* MatStm2.q[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * (1.0 - (&data->localData[0]->realVars[414] /* MatStm2.sum_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 392
type: SIMPLE_ASSIGN
MatStm2._J_dew[1] = MatStm2.r[1] / (MatStm2.r[1] * MatStm2.dewLiqMolFrac[1] + MatStm2.r[2] * MatStm2.dewLiqMolFrac[2])
*/
void Flowsheet_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->localData[0]->realVars[283] /* MatStm2.J_dew[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[399] /* MatStm2.r[1] variable */,(data->localData[0]->realVars[399] /* MatStm2.r[1] variable */) * (data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[400] /* MatStm2.r[2] variable */) * (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */),"MatStm2.r[1] * MatStm2.dewLiqMolFrac[1] + MatStm2.r[2] * MatStm2.dewLiqMolFrac[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 393
type: SIMPLE_ASSIGN
MatStm2._L_dew[1] = MatStm2.q[1] / (MatStm2.q[1] * MatStm2.dewLiqMolFrac[1] + MatStm2.q[2] * MatStm2.dewLiqMolFrac[2])
*/
void Flowsheet_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  data->localData[0]->realVars[291] /* MatStm2.L_dew[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[397] /* MatStm2.q[1] variable */,(data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */),"MatStm2.q[1] * MatStm2.dewLiqMolFrac[1] + MatStm2.q[2] * MatStm2.dewLiqMolFrac[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 394
type: SIMPLE_ASSIGN
MatStm2._gammac_dew[1] = exp(1.0 + log(MatStm2.J_dew[1]) + (-5.0) * MatStm2.q[1] * (1.0 + log(MatStm2.J_dew[1] / MatStm2.L_dew[1]) - MatStm2.J_dew[1] / MatStm2.L_dew[1]) - MatStm2.J_dew[1])
*/
void Flowsheet_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[283] /* MatStm2.J_dew[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J_dew[1]) was %g should be > 0", tmp0);
  }tmp1 = DIVISION_SIM(data->localData[0]->realVars[283] /* MatStm2.J_dew[1] variable */,data->localData[0]->realVars[291] /* MatStm2.L_dew[1] variable */,"MatStm2.L_dew[1]",equationIndexes);
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J_dew[1] / MatStm2.L_dew[1]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[376] /* MatStm2.gammac_dew[1] variable */ = exp(1.0 + log(tmp0) + (-5.0) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (1.0 + log(tmp1) - (DIVISION_SIM(data->localData[0]->realVars[283] /* MatStm2.J_dew[1] variable */,data->localData[0]->realVars[291] /* MatStm2.L_dew[1] variable */,"MatStm2.L_dew[1]",equationIndexes)))) - data->localData[0]->realVars[283] /* MatStm2.J_dew[1] variable */);
  TRACE_POP
}
/*
equation index: 395
type: SIMPLE_ASSIGN
MatStm2._gammaDew[1] = exp(log(MatStm2.gammar_dew[1]) + log(MatStm2.gammac_dew[1]))
*/
void Flowsheet_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[382] /* MatStm2.gammar_dew[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammar_dew[1]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[376] /* MatStm2.gammac_dew[1] variable */;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammac_dew[1]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[370] /* MatStm2.gammaDew[1] variable */ = exp(log(tmp0) + log(tmp1));
  TRACE_POP
}
/*
equation index: 396
type: SIMPLE_ASSIGN
MatStm2._J_dew[2] = MatStm2.r[2] / (MatStm2.r[1] * MatStm2.dewLiqMolFrac[1] + MatStm2.r[2] * MatStm2.dewLiqMolFrac[2])
*/
void Flowsheet_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->localData[0]->realVars[284] /* MatStm2.J_dew[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[400] /* MatStm2.r[2] variable */,(data->localData[0]->realVars[399] /* MatStm2.r[1] variable */) * (data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[400] /* MatStm2.r[2] variable */) * (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */),"MatStm2.r[1] * MatStm2.dewLiqMolFrac[1] + MatStm2.r[2] * MatStm2.dewLiqMolFrac[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 397
type: SIMPLE_ASSIGN
MatStm2._L_dew[2] = MatStm2.q[2] / (MatStm2.q[1] * MatStm2.dewLiqMolFrac[1] + MatStm2.q[2] * MatStm2.dewLiqMolFrac[2])
*/
void Flowsheet_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->localData[0]->realVars[292] /* MatStm2.L_dew[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[398] /* MatStm2.q[2] variable */,(data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */),"MatStm2.q[1] * MatStm2.dewLiqMolFrac[1] + MatStm2.q[2] * MatStm2.dewLiqMolFrac[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 398
type: SIMPLE_ASSIGN
MatStm2._gammac_dew[2] = exp(1.0 + log(MatStm2.J_dew[2]) + (-5.0) * MatStm2.q[2] * (1.0 + log(MatStm2.J_dew[2] / MatStm2.L_dew[2]) - MatStm2.J_dew[2] / MatStm2.L_dew[2]) - MatStm2.J_dew[2])
*/
void Flowsheet_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[284] /* MatStm2.J_dew[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J_dew[2]) was %g should be > 0", tmp0);
  }tmp1 = DIVISION_SIM(data->localData[0]->realVars[284] /* MatStm2.J_dew[2] variable */,data->localData[0]->realVars[292] /* MatStm2.L_dew[2] variable */,"MatStm2.L_dew[2]",equationIndexes);
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.J_dew[2] / MatStm2.L_dew[2]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[377] /* MatStm2.gammac_dew[2] variable */ = exp(1.0 + log(tmp0) + (-5.0) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (1.0 + log(tmp1) - (DIVISION_SIM(data->localData[0]->realVars[284] /* MatStm2.J_dew[2] variable */,data->localData[0]->realVars[292] /* MatStm2.L_dew[2] variable */,"MatStm2.L_dew[2]",equationIndexes)))) - data->localData[0]->realVars[284] /* MatStm2.J_dew[2] variable */);
  TRACE_POP
}
/*
equation index: 399
type: SIMPLE_ASSIGN
MatStm2._gammaDew[2] = exp(log(MatStm2.gammar_dew[2]) + log(MatStm2.gammac_dew[2]))
*/
void Flowsheet_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[383] /* MatStm2.gammar_dew[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammar_dew[2]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[377] /* MatStm2.gammac_dew[2] variable */;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.gammac_dew[2]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[371] /* MatStm2.gammaDew[2] variable */ = exp(log(tmp0) + log(tmp1));
  TRACE_POP
}
/*
equation index: 400
type: SIMPLE_ASSIGN
MatStm2._Pdew = 1.0 / (MatStm2.compMolFrac[1,1] * exp((-MatStm2.comp[1].VP[2]) - MatStm2.comp[1].VP[3] / MatStm2.T - MatStm2.comp[1].VP[4] * log(MatStm2.T) - MatStm2.comp[1].VP[5] * MatStm2.T ^ MatStm2.comp[1].VP[6]) / MatStm2.gammaDew[1] + MatStm2.compMolFrac[1,2] * exp((-MatStm2.comp[2].VP[2]) - MatStm2.comp[2].VP[3] / MatStm2.T - MatStm2.comp[2].VP[4] * log(MatStm2.T) - MatStm2.comp[2].VP[5] * MatStm2.T ^ MatStm2.comp[2].VP[6]) / MatStm2.gammaDew[2])
*/
void Flowsheet_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
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
  tmp0 = data->localData[0]->realVars[313] /* MatStm2.T variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.T) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[313] /* MatStm2.T variable */;
  tmp2 = data->simulationInfo->realParameter[509];
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
  }tmp8 = data->localData[0]->realVars[313] /* MatStm2.T variable */;
  if(!(tmp8 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm2.T) was %g should be > 0", tmp8);
  }tmp9 = data->localData[0]->realVars[313] /* MatStm2.T variable */;
  tmp10 = data->simulationInfo->realParameter[515];
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
  }
  data->localData[0]->realVars[298] /* MatStm2.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) * (DIVISION_SIM(exp((-data->simulationInfo->realParameter[505]) - (DIVISION_SIM(data->simulationInfo->realParameter[506],data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes)) - ((data->simulationInfo->realParameter[507]) * (log(tmp0))) - ((data->simulationInfo->realParameter[508]) * (tmp3))),data->localData[0]->realVars[370] /* MatStm2.gammaDew[1] variable */,"MatStm2.gammaDew[1]",equationIndexes)) + (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */) * (DIVISION_SIM(exp((-data->simulationInfo->realParameter[511]) - (DIVISION_SIM(data->simulationInfo->realParameter[512],data->localData[0]->realVars[313] /* MatStm2.T variable */,"MatStm2.T",equationIndexes)) - ((data->simulationInfo->realParameter[513]) * (log(tmp8))) - ((data->simulationInfo->realParameter[514]) * (tmp11))),data->localData[0]->realVars[371] /* MatStm2.gammaDew[2] variable */,"MatStm2.gammaDew[2]",equationIndexes)),"MatStm2.compMolFrac[1,1] * exp((-MatStm2.comp[1].VP[2]) - MatStm2.comp[1].VP[3] / MatStm2.T - MatStm2.comp[1].VP[4] * log(MatStm2.T) - MatStm2.comp[1].VP[5] * MatStm2.T ^ MatStm2.comp[1].VP[6]) / MatStm2.gammaDew[1] + MatStm2.compMolFrac[1,2] * exp((-MatStm2.comp[2].VP[2]) - MatStm2.comp[2].VP[3] / MatStm2.T - MatStm2.comp[2].VP[4] * log(MatStm2.T) - MatStm2.comp[2].VP[5] * MatStm2.T ^ MatStm2.comp[2].VP[6]) / MatStm2.gammaDew[2]",equationIndexes);
  TRACE_POP
}

void residualFunc411(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,411};
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
  /* iteration variables */
  for (i=0; i<10; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<10; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */ = xloc[0];
  data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */ = xloc[1];
  data->localData[0]->realVars[441] /* MatStm2.theta_dew[2] variable */ = xloc[2];
  data->localData[0]->realVars[442] /* MatStm2.theta_dew[3] variable */ = xloc[3];
  data->localData[0]->realVars[448] /* MatStm2.totMolFlo[2] variable */ = xloc[4];
  data->localData[0]->realVars[313] /* MatStm2.T variable */ = xloc[5];
  data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */ = xloc[6];
  data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */ = xloc[7];
  data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */ = xloc[8];
  data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */ = xloc[9];
  /* backup outputs */
  /* pre body */
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

  /* local constraints */
  Flowsheet_eqFunction_332(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_333(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_334(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_335(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_336(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_337(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_338(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_339(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_340(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_341(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_342(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_343(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_344(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_345(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_346(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_347(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_348(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_349(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_350(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_351(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_352(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_353(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_354(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_355(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_356(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_357(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_358(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_359(data, threadData);

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

  /* local constraints */
  Flowsheet_eqFunction_369(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_370(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_371(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_372(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_373(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_374(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_375(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_376(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_377(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_378(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_379(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_380(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_381(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_382(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_383(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_384(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_385(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_386(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_387(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_388(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_389(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_390(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_391(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_392(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_393(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_394(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_395(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_396(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_397(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_398(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_399(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_400(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[362] /* MatStm2.e[3,1] variable */)) + (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[363] /* MatStm2.e[3,2] variable */)) - ((data->localData[0]->realVars[442] /* MatStm2.theta_dew[3] variable */) * ((data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */)));

  res[1] = (data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) * (data->localData[0]->realVars[360] /* MatStm2.e[2,1] variable */)) + (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[398] /* MatStm2.q[2] variable */) * (data->localData[0]->realVars[361] /* MatStm2.e[2,2] variable */)) - ((data->localData[0]->realVars[441] /* MatStm2.theta_dew[2] variable */) * ((data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[397] /* MatStm2.q[1] variable */) + (data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[398] /* MatStm2.q[2] variable */)));

  res[2] = (data->localData[0]->realVars[344] /* MatStm2.compMolFrac[1,1] variable */) * (DIVISION_SIM(data->localData[0]->realVars[298] /* MatStm2.Pdew variable */,(data->localData[0]->realVars[299] /* MatStm2.Psat[1] variable */) * (data->localData[0]->realVars[370] /* MatStm2.gammaDew[1] variable */),"MatStm2.Psat[1] * MatStm2.gammaDew[1]",equationIndexes)) - data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */;

  res[3] = (data->localData[0]->realVars[345] /* MatStm2.compMolFrac[1,2] variable */) * (DIVISION_SIM(data->localData[0]->realVars[298] /* MatStm2.Pdew variable */,(data->localData[0]->realVars[300] /* MatStm2.Psat[2] variable */) * (data->localData[0]->realVars[371] /* MatStm2.gammaDew[2] variable */),"MatStm2.Psat[2] * MatStm2.gammaDew[2]",equationIndexes)) - data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[298] /* MatStm2.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[285] /* MatStm2.K[1] variable */) * (data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */)):data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */);
  }
  res[4] = tmp3;

  res[5] = data->localData[0]->realVars[343] /* MatStm2.compMolFlo[3,2] variable */ + data->localData[0]->realVars[341] /* MatStm2.compMolFlo[2,2] variable */ - data->localData[0]->realVars[339] /* MatStm2.compMolFlo[1,2] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[298] /* MatStm2.Pdew variable */);
    tmp7 = (tmp5?data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[286] /* MatStm2.K[2] variable */) * (data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */)):data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */);
  }
  res[6] = tmp7;

  res[7] = data->localData[0]->realVars[342] /* MatStm2.compMolFlo[3,1] variable */ + data->localData[0]->realVars[340] /* MatStm2.compMolFlo[2,1] variable */ - data->localData[0]->realVars[338] /* MatStm2.compMolFlo[1,1] variable */;

  tmp8 = GreaterEq(101325.0,data->localData[0]->realVars[297] /* MatStm2.Pbubl variable */);
  res[8] = (tmp8?data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */ + data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */ + data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */ - 1.0);

  res[9] = (data->localData[0]->realVars[451] /* MatStm2.vapPhasMolFrac variable */) * (data->localData[0]->realVars[390] /* MatStm2.phasMolEnth[3] variable */) + (data->localData[0]->realVars[385] /* MatStm2.liqPhasMolFrac variable */) * (data->localData[0]->realVars[389] /* MatStm2.phasMolEnth[2] variable */) - data->localData[0]->realVars[388] /* MatStm2.phasMolEnth[1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS411(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+10] = {0,6,6,5,5,3,6,4,7,4,7};
  const int rowIndex[53] = {0,1,2,3,4,6,0,1,2,3,4,6,1,2,3,4,6,0,2,3,4,6,5,7,9,2,3,4,6,8,9,4,7,8,9,2,3,4,5,6,8,9,5,6,8,9,2,3,4,6,7,8,9};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((10+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(53*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 53;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(10*sizeof(int));
  inSysData->sparsePattern.maxColors = 9;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (10+1)*sizeof(int));
  
  for(i=2;i<10+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 53*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[9] = 1;
  inSysData->sparsePattern.colorCols[8] = 2;
  inSysData->sparsePattern.colorCols[7] = 3;
  inSysData->sparsePattern.colorCols[6] = 4;
  inSysData->sparsePattern.colorCols[5] = 5;
  inSysData->sparsePattern.colorCols[3] = 6;
  inSysData->sparsePattern.colorCols[2] = 7;
  inSysData->sparsePattern.colorCols[1] = 8;
  inSysData->sparsePattern.colorCols[0] = 9;
  inSysData->sparsePattern.colorCols[4] = 9;
}
void initializeStaticDataNLS411(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm2.dewLiqMolFrac[2] */
  sysData->nominal[i] = data->modelData->realVarsData[357].attribute /* MatStm2.dewLiqMolFrac[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[357].attribute /* MatStm2.dewLiqMolFrac[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[357].attribute /* MatStm2.dewLiqMolFrac[2] */.max;
  /* static nls data for MatStm2.dewLiqMolFrac[1] */
  sysData->nominal[i] = data->modelData->realVarsData[356].attribute /* MatStm2.dewLiqMolFrac[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[356].attribute /* MatStm2.dewLiqMolFrac[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[356].attribute /* MatStm2.dewLiqMolFrac[1] */.max;
  /* static nls data for MatStm2.theta_dew[2] */
  sysData->nominal[i] = data->modelData->realVarsData[441].attribute /* MatStm2.theta_dew[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[441].attribute /* MatStm2.theta_dew[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[441].attribute /* MatStm2.theta_dew[2] */.max;
  /* static nls data for MatStm2.theta_dew[3] */
  sysData->nominal[i] = data->modelData->realVarsData[442].attribute /* MatStm2.theta_dew[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[442].attribute /* MatStm2.theta_dew[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[442].attribute /* MatStm2.theta_dew[3] */.max;
  /* static nls data for MatStm2.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[448].attribute /* MatStm2.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[448].attribute /* MatStm2.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[448].attribute /* MatStm2.totMolFlo[2] */.max;
  /* static nls data for MatStm2.T */
  sysData->nominal[i] = data->modelData->realVarsData[313].attribute /* MatStm2.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[313].attribute /* MatStm2.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[313].attribute /* MatStm2.T */.max;
  /* static nls data for MatStm2.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[348].attribute /* MatStm2.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[348].attribute /* MatStm2.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[348].attribute /* MatStm2.compMolFrac[3,1] */.max;
  /* static nls data for MatStm2.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[347].attribute /* MatStm2.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[347].attribute /* MatStm2.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[347].attribute /* MatStm2.compMolFrac[2,2] */.max;
  /* static nls data for MatStm2.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[349].attribute /* MatStm2.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[349].attribute /* MatStm2.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[349].attribute /* MatStm2.compMolFrac[3,2] */.max;
  /* static nls data for MatStm2.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[346].attribute /* MatStm2.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[346].attribute /* MatStm2.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[346].attribute /* MatStm2.compMolFrac[2,1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS411(sysData);
}

void getIterationVarsNLS411(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[357] /* MatStm2.dewLiqMolFrac[2] variable */;
  array[1] = data->localData[0]->realVars[356] /* MatStm2.dewLiqMolFrac[1] variable */;
  array[2] = data->localData[0]->realVars[441] /* MatStm2.theta_dew[2] variable */;
  array[3] = data->localData[0]->realVars[442] /* MatStm2.theta_dew[3] variable */;
  array[4] = data->localData[0]->realVars[448] /* MatStm2.totMolFlo[2] variable */;
  array[5] = data->localData[0]->realVars[313] /* MatStm2.T variable */;
  array[6] = data->localData[0]->realVars[348] /* MatStm2.compMolFrac[3,1] variable */;
  array[7] = data->localData[0]->realVars[347] /* MatStm2.compMolFrac[2,2] variable */;
  array[8] = data->localData[0]->realVars[349] /* MatStm2.compMolFrac[3,2] variable */;
  array[9] = data->localData[0]->realVars[346] /* MatStm2.compMolFrac[2,1] variable */;
}


/* inner equations */

/*
equation index: 239
type: SIMPLE_ASSIGN
MatStm3._theta[1] = (MatStm3.compMolFrac[2,1] * MatStm3.q[1] * MatStm3.e[1,1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2] * MatStm3.e[1,2]) / (MatStm3.compMolFrac[2,1] * MatStm3.q[1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  data->localData[0]->realVars[615] /* MatStm3.theta[1] variable */ = DIVISION_SIM((data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */)) + (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[542] /* MatStm3.e[1,2] variable */)),(data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.compMolFrac[2,1] * MatStm3.q[1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 240
type: SIMPLE_ASSIGN
MatStm3._J[1] = MatStm3.r[1] / (MatStm3.r[1] * MatStm3.compMolFrac[2,1] + MatStm3.r[2] * MatStm3.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->localData[0]->realVars[462] /* MatStm3.J[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[582] /* MatStm3.r[1] variable */,(data->localData[0]->realVars[582] /* MatStm3.r[1] variable */) * (data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[583] /* MatStm3.r[2] variable */) * (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */),"MatStm3.r[1] * MatStm3.compMolFrac[2,1] + MatStm3.r[2] * MatStm3.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 241
type: SIMPLE_ASSIGN
MatStm3._L[1] = MatStm3.q[1] / (MatStm3.q[1] * MatStm3.compMolFrac[2,1] + MatStm3.q[2] * MatStm3.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->localData[0]->realVars[470] /* MatStm3.L[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[580] /* MatStm3.q[1] variable */,(data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */),"MatStm3.q[1] * MatStm3.compMolFrac[2,1] + MatStm3.q[2] * MatStm3.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 242
type: SIMPLE_ASSIGN
MatStm3._gammac[1] = exp(1.0 + log(MatStm3.J[1]) + (-5.0) * MatStm3.q[1] * (1.0 + log(MatStm3.J[1] / MatStm3.L[1]) - MatStm3.J[1] / MatStm3.L[1]) - MatStm3.J[1])
*/
void Flowsheet_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[462] /* MatStm3.J[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J[1]) was %g should be > 0", tmp0);
  }tmp1 = DIVISION_SIM(data->localData[0]->realVars[462] /* MatStm3.J[1] variable */,data->localData[0]->realVars[470] /* MatStm3.L[1] variable */,"MatStm3.L[1]",equationIndexes);
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J[1] / MatStm3.L[1]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[555] /* MatStm3.gammac[1] variable */ = exp(1.0 + log(tmp0) + (-5.0) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (1.0 + log(tmp1) - (DIVISION_SIM(data->localData[0]->realVars[462] /* MatStm3.J[1] variable */,data->localData[0]->realVars[470] /* MatStm3.L[1] variable */,"MatStm3.L[1]",equationIndexes)))) - data->localData[0]->realVars[462] /* MatStm3.J[1] variable */);
  TRACE_POP
}
/*
equation index: 243
type: SIMPLE_ASSIGN
MatStm3._J[2] = MatStm3.r[2] / (MatStm3.r[1] * MatStm3.compMolFrac[2,1] + MatStm3.r[2] * MatStm3.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->localData[0]->realVars[463] /* MatStm3.J[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[583] /* MatStm3.r[2] variable */,(data->localData[0]->realVars[582] /* MatStm3.r[1] variable */) * (data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[583] /* MatStm3.r[2] variable */) * (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */),"MatStm3.r[1] * MatStm3.compMolFrac[2,1] + MatStm3.r[2] * MatStm3.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 244
type: SIMPLE_ASSIGN
MatStm3._L[2] = MatStm3.q[2] / (MatStm3.q[1] * MatStm3.compMolFrac[2,1] + MatStm3.q[2] * MatStm3.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->localData[0]->realVars[471] /* MatStm3.L[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[581] /* MatStm3.q[2] variable */,(data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */),"MatStm3.q[1] * MatStm3.compMolFrac[2,1] + MatStm3.q[2] * MatStm3.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 245
type: SIMPLE_ASSIGN
MatStm3._gammac[2] = exp(1.0 + log(MatStm3.J[2]) + (-5.0) * MatStm3.q[2] * (1.0 + log(MatStm3.J[2] / MatStm3.L[2]) - MatStm3.J[2] / MatStm3.L[2]) - MatStm3.J[2])
*/
void Flowsheet_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[463] /* MatStm3.J[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J[2]) was %g should be > 0", tmp0);
  }tmp1 = DIVISION_SIM(data->localData[0]->realVars[463] /* MatStm3.J[2] variable */,data->localData[0]->realVars[471] /* MatStm3.L[2] variable */,"MatStm3.L[2]",equationIndexes);
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J[2] / MatStm3.L[2]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[556] /* MatStm3.gammac[2] variable */ = exp(1.0 + log(tmp0) + (-5.0) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (1.0 + log(tmp1) - (DIVISION_SIM(data->localData[0]->realVars[463] /* MatStm3.J[2] variable */,data->localData[0]->realVars[471] /* MatStm3.L[2] variable */,"MatStm3.L[2]",equationIndexes)))) - data->localData[0]->realVars[463] /* MatStm3.J[2] variable */);
  TRACE_POP
}
/*
equation index: 246
type: SIMPLE_ASSIGN
MatStm3._theta[2] = (MatStm3.compMolFrac[2,1] * MatStm3.q[1] * MatStm3.e[2,1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2] * MatStm3.e[2,2]) / (MatStm3.compMolFrac[2,1] * MatStm3.q[1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->localData[0]->realVars[616] /* MatStm3.theta[2] variable */ = DIVISION_SIM((data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[543] /* MatStm3.e[2,1] variable */)) + (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[544] /* MatStm3.e[2,2] variable */)),(data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.compMolFrac[2,1] * MatStm3.q[1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 247
type: SIMPLE_ASSIGN
MatStm3._theta[3] = (MatStm3.compMolFrac[2,1] * MatStm3.q[1] * MatStm3.e[3,1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2] * MatStm3.e[3,2]) / (MatStm3.compMolFrac[2,1] * MatStm3.q[1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->localData[0]->realVars[617] /* MatStm3.theta[3] variable */ = DIVISION_SIM((data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[545] /* MatStm3.e[3,1] variable */)) + (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[546] /* MatStm3.e[3,2] variable */)),(data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.compMolFrac[2,1] * MatStm3.q[1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 248
type: SIMPLE_ASSIGN
MatStm3._theta[4] = (MatStm3.compMolFrac[2,1] * MatStm3.q[1] * MatStm3.e[4,1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2] * MatStm3.e[4,2]) / (MatStm3.compMolFrac[2,1] * MatStm3.q[1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->localData[0]->realVars[618] /* MatStm3.theta[4] variable */ = DIVISION_SIM((data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[547] /* MatStm3.e[4,1] variable */)) + (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[548] /* MatStm3.e[4,2] variable */)),(data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.compMolFrac[2,1] * MatStm3.q[1] + MatStm3.compMolFrac[2,2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 249
type: SIMPLE_ASSIGN
MatStm3._S[4] = MatStm3.theta[1] * MatStm3.tau[1,4] + MatStm3.theta[2] * MatStm3.tau[2,4] + MatStm3.theta[3] * MatStm3.tau[3,4] + MatStm3.theta[4] * MatStm3.tau[4,4]
*/
void Flowsheet_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->localData[0]->realVars[487] /* MatStm3.S[4] variable */ = (data->localData[0]->realVars[615] /* MatStm3.theta[1] variable */) * (data->localData[0]->realVars[602] /* MatStm3.tau[1,4] variable */) + (data->localData[0]->realVars[616] /* MatStm3.theta[2] variable */) * (data->localData[0]->realVars[606] /* MatStm3.tau[2,4] variable */) + (data->localData[0]->realVars[617] /* MatStm3.theta[3] variable */) * (data->localData[0]->realVars[610] /* MatStm3.tau[3,4] variable */) + (data->localData[0]->realVars[618] /* MatStm3.theta[4] variable */) * (data->localData[0]->realVars[614] /* MatStm3.tau[4,4] variable */);
  TRACE_POP
}
/*
equation index: 250
type: SIMPLE_ASSIGN
MatStm3._S[1] = MatStm3.theta[1] * MatStm3.tau[1,1] + MatStm3.theta[2] * MatStm3.tau[2,1] + MatStm3.theta[3] * MatStm3.tau[3,1] + MatStm3.theta[4] * MatStm3.tau[4,1]
*/
void Flowsheet_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->localData[0]->realVars[484] /* MatStm3.S[1] variable */ = (data->localData[0]->realVars[615] /* MatStm3.theta[1] variable */) * (data->localData[0]->realVars[599] /* MatStm3.tau[1,1] variable */) + (data->localData[0]->realVars[616] /* MatStm3.theta[2] variable */) * (data->localData[0]->realVars[603] /* MatStm3.tau[2,1] variable */) + (data->localData[0]->realVars[617] /* MatStm3.theta[3] variable */) * (data->localData[0]->realVars[607] /* MatStm3.tau[3,1] variable */) + (data->localData[0]->realVars[618] /* MatStm3.theta[4] variable */) * (data->localData[0]->realVars[611] /* MatStm3.tau[4,1] variable */);
  TRACE_POP
}
/*
equation index: 251
type: SIMPLE_ASSIGN
MatStm3._S[2] = MatStm3.theta[1] * MatStm3.tau[1,2] + MatStm3.theta[2] * MatStm3.tau[2,2] + MatStm3.theta[3] * MatStm3.tau[3,2] + MatStm3.theta[4] * MatStm3.tau[4,2]
*/
void Flowsheet_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->localData[0]->realVars[485] /* MatStm3.S[2] variable */ = (data->localData[0]->realVars[615] /* MatStm3.theta[1] variable */) * (data->localData[0]->realVars[600] /* MatStm3.tau[1,2] variable */) + (data->localData[0]->realVars[616] /* MatStm3.theta[2] variable */) * (data->localData[0]->realVars[604] /* MatStm3.tau[2,2] variable */) + (data->localData[0]->realVars[617] /* MatStm3.theta[3] variable */) * (data->localData[0]->realVars[608] /* MatStm3.tau[3,2] variable */) + (data->localData[0]->realVars[618] /* MatStm3.theta[4] variable */) * (data->localData[0]->realVars[612] /* MatStm3.tau[4,2] variable */);
  TRACE_POP
}
/*
equation index: 252
type: SIMPLE_ASSIGN
MatStm3._S[3] = MatStm3.theta[1] * MatStm3.tau[1,3] + MatStm3.theta[2] * MatStm3.tau[2,3] + MatStm3.theta[3] * MatStm3.tau[3,3] + MatStm3.theta[4] * MatStm3.tau[4,3]
*/
void Flowsheet_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->localData[0]->realVars[486] /* MatStm3.S[3] variable */ = (data->localData[0]->realVars[615] /* MatStm3.theta[1] variable */) * (data->localData[0]->realVars[601] /* MatStm3.tau[1,3] variable */) + (data->localData[0]->realVars[616] /* MatStm3.theta[2] variable */) * (data->localData[0]->realVars[605] /* MatStm3.tau[2,3] variable */) + (data->localData[0]->realVars[617] /* MatStm3.theta[3] variable */) * (data->localData[0]->realVars[609] /* MatStm3.tau[3,3] variable */) + (data->localData[0]->realVars[618] /* MatStm3.theta[4] variable */) * (data->localData[0]->realVars[613] /* MatStm3.tau[4,3] variable */);
  TRACE_POP
}
/*
equation index: 253
type: ALGORITHM

  MatStm3.gammar[2] := $START.MatStm3.gammar[2];
  MatStm3.gammar[1] := $START.MatStm3.gammar[1];
  MatStm3.sum[2] := $START.MatStm3.sum[2];
  MatStm3.sum[1] := $START.MatStm3.sum[1];
  MatStm3.B[2,4] := $START.MatStm3.B[2,4];
  MatStm3.B[2,3] := $START.MatStm3.B[2,3];
  MatStm3.B[2,2] := $START.MatStm3.B[2,2];
  MatStm3.B[2,1] := $START.MatStm3.B[2,1];
  MatStm3.B[1,4] := $START.MatStm3.B[1,4];
  MatStm3.B[1,3] := $START.MatStm3.B[1,3];
  MatStm3.B[1,2] := $START.MatStm3.B[1,2];
  MatStm3.B[1,1] := $START.MatStm3.B[1,1];
  for i in 1:2 loop
    for j in 1:4 loop
      for l in 1:4 loop
        MatStm3.B[i,j] := MatStm3.e[1,i] * MatStm3.tau[1,j] + MatStm3.e[2,i] * MatStm3.tau[2,j] + MatStm3.e[3,i] * MatStm3.tau[3,j] + MatStm3.e[4,i] * MatStm3.tau[4,j];
      end for;
    end for;
  end for;
  MatStm3.sum[:] := {0.0, 0.0};
  for j in 1:4 loop
    for i in 1:2 loop
      MatStm3.sum[i] := MatStm3.sum[i] + MatStm3.theta[j] * MatStm3.B[i,j] / MatStm3.S[j] - MatStm3.e[j,i] * log(MatStm3.B[i,j] / MatStm3.S[j]);
      MatStm3.gammar[i] := exp(MatStm3.q[i] * (1.0 - MatStm3.sum[i]));
    end for;
  end for;
*/
void Flowsheet_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  modelica_integer tmp0;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  real_array tmp9;
  index_spec_t tmp10;
  real_array tmp11;
  modelica_real tmp12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  data->localData[0]->realVars[562] /* MatStm3.gammar[2] variable */ = data->modelData->realVarsData[562].attribute /* MatStm3.gammar[2] variable */.start;

  data->localData[0]->realVars[561] /* MatStm3.gammar[1] variable */ = data->modelData->realVarsData[561].attribute /* MatStm3.gammar[1] variable */.start;

  data->localData[0]->realVars[594] /* MatStm3.sum[2] variable */ = data->modelData->realVarsData[594].attribute /* MatStm3.sum[2] variable */.start;

  data->localData[0]->realVars[593] /* MatStm3.sum[1] variable */ = data->modelData->realVarsData[593].attribute /* MatStm3.sum[1] variable */.start;

  data->localData[0]->realVars[461] /* MatStm3.B[2,4] variable */ = data->modelData->realVarsData[461].attribute /* MatStm3.B[2,4] variable */.start;

  data->localData[0]->realVars[460] /* MatStm3.B[2,3] variable */ = data->modelData->realVarsData[460].attribute /* MatStm3.B[2,3] variable */.start;

  data->localData[0]->realVars[459] /* MatStm3.B[2,2] variable */ = data->modelData->realVarsData[459].attribute /* MatStm3.B[2,2] variable */.start;

  data->localData[0]->realVars[458] /* MatStm3.B[2,1] variable */ = data->modelData->realVarsData[458].attribute /* MatStm3.B[2,1] variable */.start;

  data->localData[0]->realVars[457] /* MatStm3.B[1,4] variable */ = data->modelData->realVarsData[457].attribute /* MatStm3.B[1,4] variable */.start;

  data->localData[0]->realVars[456] /* MatStm3.B[1,3] variable */ = data->modelData->realVarsData[456].attribute /* MatStm3.B[1,3] variable */.start;

  data->localData[0]->realVars[455] /* MatStm3.B[1,2] variable */ = data->modelData->realVarsData[455].attribute /* MatStm3.B[1,2] variable */.start;

  data->localData[0]->realVars[454] /* MatStm3.B[1,1] variable */ = data->modelData->realVarsData[454].attribute /* MatStm3.B[1,1] variable */.start;

  tmp6 = ((modelica_integer) 1); tmp7 = 1; tmp8 = ((modelica_integer) 2);
  if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp6, tmp8); $Pi += tmp7)
    {
      tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 4);
      if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
      {
        modelica_integer $Pj;
        for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp3, tmp5); $Pj += tmp4)
        {
          tmp0 = ((modelica_integer) 1); tmp1 = 1; tmp2 = ((modelica_integer) 4);
          if(!(((tmp1 > 0) && (tmp0 > tmp2)) || ((tmp1 < 0) && (tmp0 < tmp2))))
          {
            modelica_integer $Pl;
            for($Pl = ((modelica_integer) 1); in_range_integer($Pl, tmp0, tmp2); $Pl += tmp1)
            {
              (&data->localData[0]->realVars[454] /* MatStm3.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)] = ((&data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[599] /* MatStm3.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 1), (modelica_integer)$Pj)]) + ((&data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[599] /* MatStm3.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 2), (modelica_integer)$Pj)]) + ((&data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[599] /* MatStm3.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 3), (modelica_integer)$Pj)]) + ((&data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 4), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[599] /* MatStm3.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 4), (modelica_integer)$Pj)]);
            }
          }
        }
      }
    }
  }

  array_alloc_scalar_real_array(&tmp9, 2, (modelica_real)0.0, (modelica_real)0.0);
  create_index_spec(&tmp10, 1, (1), (int*)0, 'W');
  real_array_create(&tmp11, (modelica_real*)&data->localData[0]->realVars[593] /* MatStm3.sum[1] variable */, 1, 2);
  indexed_assign_real_array(tmp9, &tmp11, &tmp10);

  tmp16 = ((modelica_integer) 1); tmp17 = 1; tmp18 = ((modelica_integer) 4);
  if(!(((tmp17 > 0) && (tmp16 > tmp18)) || ((tmp17 < 0) && (tmp16 < tmp18))))
  {
    modelica_integer $Pj;
    for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp16, tmp18); $Pj += tmp17)
    {
      tmp13 = ((modelica_integer) 1); tmp14 = 1; tmp15 = ((modelica_integer) 2);
      if(!(((tmp14 > 0) && (tmp13 > tmp15)) || ((tmp14 < 0) && (tmp13 < tmp15))))
      {
        modelica_integer $Pi;
        for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp13, tmp15); $Pi += tmp14)
        {
          tmp12 = DIVISION_SIM((&data->localData[0]->realVars[454] /* MatStm3.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[484] /* MatStm3.S[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm3.S[j]",equationIndexes);
          if(!(tmp12 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
            throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.B[i,j] / MatStm3.S[j]) was %g should be > 0", tmp12);
          }
          (&data->localData[0]->realVars[593] /* MatStm3.sum[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = (&data->localData[0]->realVars[593] /* MatStm3.sum[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] + ((&data->localData[0]->realVars[615] /* MatStm3.theta[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)]) * (DIVISION_SIM((&data->localData[0]->realVars[454] /* MatStm3.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[484] /* MatStm3.S[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm3.S[j]",equationIndexes)) - (((&data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, (modelica_integer)$Pj, (modelica_integer)$Pi)]) * (log(tmp12)));

          (&data->localData[0]->realVars[561] /* MatStm3.gammar[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = exp(((&data->localData[0]->realVars[580] /* MatStm3.q[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * (1.0 - (&data->localData[0]->realVars[593] /* MatStm3.sum[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 254
type: SIMPLE_ASSIGN
MatStm3._gamma[1] = exp(log(MatStm3.gammar[1]) + log(MatStm3.gammac[1]))
*/
void Flowsheet_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[561] /* MatStm3.gammar[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammar[1]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[555] /* MatStm3.gammac[1] variable */;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammac[1]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[549] /* MatStm3.gamma[1] variable */ = exp(log(tmp0) + log(tmp1));
  TRACE_POP
}
/*
equation index: 255
type: SIMPLE_ASSIGN
MatStm3._gamma[2] = exp(log(MatStm3.gammar[2]) + log(MatStm3.gammac[2]))
*/
void Flowsheet_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[562] /* MatStm3.gammar[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammar[2]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[556] /* MatStm3.gammac[2] variable */;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammac[2]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[550] /* MatStm3.gamma[2] variable */ = exp(log(tmp0) + log(tmp1));
  TRACE_POP
}
/*
equation index: 256
type: SIMPLE_ASSIGN
MatStm3._K[1] = 9.869232667160129e-006 * MatStm3.gamma[1] * MatStm3.Psat[1]
*/
void Flowsheet_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->localData[0]->realVars[468] /* MatStm3.K[1] variable */ = (9.869232667160129e-006) * ((data->localData[0]->realVars[549] /* MatStm3.gamma[1] variable */) * (data->localData[0]->realVars[482] /* MatStm3.Psat[1] variable */));
  TRACE_POP
}
/*
equation index: 257
type: SIMPLE_ASSIGN
MatStm3._K[2] = 9.869232667160129e-006 * MatStm3.gamma[2] * MatStm3.Psat[2]
*/
void Flowsheet_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->localData[0]->realVars[469] /* MatStm3.K[2] variable */ = (9.869232667160129e-006) * ((data->localData[0]->realVars[550] /* MatStm3.gamma[2] variable */) * (data->localData[0]->realVars[483] /* MatStm3.Psat[2] variable */));
  TRACE_POP
}
/*
equation index: 258
type: ALGORITHM

  MatStm3.gammar_bubl[2] := $START.MatStm3.gammar_bubl[2];
  MatStm3.gammar_bubl[1] := $START.MatStm3.gammar_bubl[1];
  MatStm3.sum_bubl[2] := $START.MatStm3.sum_bubl[2];
  MatStm3.sum_bubl[1] := $START.MatStm3.sum_bubl[1];
  MatStm3.sum_bubl[:] := {0.0, 0.0};
  for j in 1:4 loop
    for i in 1:2 loop
      MatStm3.sum_bubl[i] := MatStm3.sum_bubl[i] + MatStm3.theta_bubl[j] * MatStm3.B[i,j] / MatStm3.S_bubl[j] - MatStm3.e[j,i] * log(MatStm3.B[i,j] / MatStm3.S_bubl[j]);
      MatStm3.gammar_bubl[i] := exp(MatStm3.q[i] * (1.0 - MatStm3.sum_bubl[i]));
    end for;
  end for;
*/
void Flowsheet_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_real tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[564] /* MatStm3.gammar_bubl[2] variable */ = data->modelData->realVarsData[564].attribute /* MatStm3.gammar_bubl[2] variable */.start;

  data->localData[0]->realVars[563] /* MatStm3.gammar_bubl[1] variable */ = data->modelData->realVarsData[563].attribute /* MatStm3.gammar_bubl[1] variable */.start;

  data->localData[0]->realVars[596] /* MatStm3.sum_bubl[2] variable */ = data->modelData->realVarsData[596].attribute /* MatStm3.sum_bubl[2] variable */.start;

  data->localData[0]->realVars[595] /* MatStm3.sum_bubl[1] variable */ = data->modelData->realVarsData[595].attribute /* MatStm3.sum_bubl[1] variable */.start;

  array_alloc_scalar_real_array(&tmp0, 2, (modelica_real)0.0, (modelica_real)0.0);
  create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
  real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[595] /* MatStm3.sum_bubl[1] variable */, 1, 2);
  indexed_assign_real_array(tmp0, &tmp2, &tmp1);

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 4);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pj;
    for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp7, tmp9); $Pj += tmp8)
    {
      tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = ((modelica_integer) 2);
      if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
      {
        modelica_integer $Pi;
        for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp4, tmp6); $Pi += tmp5)
        {
          tmp3 = DIVISION_SIM((&data->localData[0]->realVars[454] /* MatStm3.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[488] /* MatStm3.S_bubl[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm3.S_bubl[j]",equationIndexes);
          if(!(tmp3 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
            throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.B[i,j] / MatStm3.S_bubl[j]) was %g should be > 0", tmp3);
          }
          (&data->localData[0]->realVars[595] /* MatStm3.sum_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = (&data->localData[0]->realVars[595] /* MatStm3.sum_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] + ((&data->localData[0]->realVars[619] /* MatStm3.theta_bubl[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)]) * (DIVISION_SIM((&data->localData[0]->realVars[454] /* MatStm3.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[488] /* MatStm3.S_bubl[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm3.S_bubl[j]",equationIndexes)) - (((&data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, (modelica_integer)$Pj, (modelica_integer)$Pi)]) * (log(tmp3)));

          (&data->localData[0]->realVars[563] /* MatStm3.gammar_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = exp(((&data->localData[0]->realVars[580] /* MatStm3.q[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * (1.0 - (&data->localData[0]->realVars[595] /* MatStm3.sum_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 259
type: SIMPLE_ASSIGN
MatStm3._gammaBubl[1] = exp(log(MatStm3.gammar_bubl[1]) + log(MatStm3.gammac_bubl[1]))
*/
void Flowsheet_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[563] /* MatStm3.gammar_bubl[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammar_bubl[1]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[557] /* MatStm3.gammac_bubl[1] variable */;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammac_bubl[1]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[551] /* MatStm3.gammaBubl[1] variable */ = exp(log(tmp0) + log(tmp1));
  TRACE_POP
}
/*
equation index: 260
type: SIMPLE_ASSIGN
MatStm3._gammaBubl[2] = exp(log(MatStm3.gammar_bubl[2]) + log(MatStm3.gammac_bubl[2]))
*/
void Flowsheet_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[564] /* MatStm3.gammar_bubl[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammar_bubl[2]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[558] /* MatStm3.gammac_bubl[2] variable */;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammac_bubl[2]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[552] /* MatStm3.gammaBubl[2] variable */ = exp(log(tmp0) + log(tmp1));
  TRACE_POP
}
/*
equation index: 261
type: SIMPLE_ASSIGN
MatStm3._Pbubl = MatStm3.gammaBubl[1] * MatStm3.compMolFrac[1,1] * exp(MatStm3.comp[1].VP[2] + MatStm3.comp[1].VP[3] / 310.0 + MatStm3.comp[1].VP[4] * 5.736572297479192 + MatStm3.comp[1].VP[5] * 310.0 ^ MatStm3.comp[1].VP[6]) + MatStm3.gammaBubl[2] * MatStm3.compMolFrac[1,2] * exp(MatStm3.comp[2].VP[2] + MatStm3.comp[2].VP[3] / 310.0 + MatStm3.comp[2].VP[4] * 5.736572297479192 + MatStm3.comp[2].VP[5] * 310.0 ^ MatStm3.comp[2].VP[6])
*/
void Flowsheet_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
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
  tmp0 = 310.0;
  tmp1 = data->simulationInfo->realParameter[707];
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
  }tmp7 = 310.0;
  tmp8 = data->simulationInfo->realParameter[713];
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
  data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */ = (data->localData[0]->realVars[551] /* MatStm3.gammaBubl[1] variable */) * ((data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[703] + DIVISION_SIM(data->simulationInfo->realParameter[704],310.0,"310.0",equationIndexes) + (data->simulationInfo->realParameter[705]) * (5.736572297479192) + (data->simulationInfo->realParameter[706]) * (tmp2)))) + (data->localData[0]->realVars[552] /* MatStm3.gammaBubl[2] variable */) * ((data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[709] + DIVISION_SIM(data->simulationInfo->realParameter[710],310.0,"310.0",equationIndexes) + (data->simulationInfo->realParameter[711]) * (5.736572297479192) + (data->simulationInfo->realParameter[712]) * (tmp9))));
  TRACE_POP
}
/*
equation index: 262
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,2] = MatStm3.compMolFrac[2,2] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->localData[0]->realVars[524] /* MatStm3.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[631] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 263
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[2,1] = MatStm3.compMolFrac[2,1] * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->localData[0]->realVars[523] /* MatStm3.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[631] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 264
type: SIMPLE_ASSIGN
MatStm3._liqPhasMolFrac = 0.0125 * MatStm3.totMolFlo[2]
*/
void Flowsheet_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->localData[0]->realVars[568] /* MatStm3.liqPhasMolFrac variable */ = (0.0125) * (data->localData[0]->realVars[631] /* MatStm3.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 265
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac[1] = 1.0 - MatStm3.liqPhasMolFrac
*/
void Flowsheet_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->localData[0]->realVars[636] /* Mixer1.inVapPhasMolFrac[1] variable */ = 1.0 - data->localData[0]->realVars[568] /* MatStm3.liqPhasMolFrac variable */;
  TRACE_POP
}
/*
equation index: 266
type: SIMPLE_ASSIGN
MatStm3._totMolFlo[3] = 80.0 * Mixer1.inVapPhasMolFrac[1]
*/
void Flowsheet_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->localData[0]->realVars[632] /* MatStm3.totMolFlo[3] variable */ = (80.0) * (data->localData[0]->realVars[636] /* Mixer1.inVapPhasMolFrac[1] variable */);
  TRACE_POP
}
/*
equation index: 267
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,2] = MatStm3.compMolFrac[3,2] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  data->localData[0]->realVars[526] /* MatStm3.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[632] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 268
type: SIMPLE_ASSIGN
MatStm3._compMolFlo[3,1] = MatStm3.compMolFrac[3,1] * MatStm3.totMolFlo[3]
*/
void Flowsheet_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->localData[0]->realVars[525] /* MatStm3.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[632] /* MatStm3.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 269
type: SIMPLE_ASSIGN
MatStm3._theta_dew[4] = (MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] * MatStm3.e[4,1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2] * MatStm3.e[4,2]) / (MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->localData[0]->realVars[626] /* MatStm3.theta_dew[4] variable */ = DIVISION_SIM((data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[547] /* MatStm3.e[4,1] variable */)) + (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[548] /* MatStm3.e[4,2] variable */)),(data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 270
type: SIMPLE_ASSIGN
MatStm3._L_dew[1] = MatStm3.q[1] / (MatStm3.q[1] * MatStm3.dewLiqMolFrac[1] + MatStm3.q[2] * MatStm3.dewLiqMolFrac[2])
*/
void Flowsheet_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->localData[0]->realVars[474] /* MatStm3.L_dew[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[580] /* MatStm3.q[1] variable */,(data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */),"MatStm3.q[1] * MatStm3.dewLiqMolFrac[1] + MatStm3.q[2] * MatStm3.dewLiqMolFrac[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 271
type: SIMPLE_ASSIGN
MatStm3._J_dew[1] = MatStm3.r[1] / (MatStm3.r[1] * MatStm3.dewLiqMolFrac[1] + MatStm3.r[2] * MatStm3.dewLiqMolFrac[2])
*/
void Flowsheet_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->localData[0]->realVars[466] /* MatStm3.J_dew[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[582] /* MatStm3.r[1] variable */,(data->localData[0]->realVars[582] /* MatStm3.r[1] variable */) * (data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[583] /* MatStm3.r[2] variable */) * (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */),"MatStm3.r[1] * MatStm3.dewLiqMolFrac[1] + MatStm3.r[2] * MatStm3.dewLiqMolFrac[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 272
type: SIMPLE_ASSIGN
MatStm3._gammac_dew[1] = exp(1.0 + log(MatStm3.J_dew[1]) + (-5.0) * MatStm3.q[1] * (1.0 + log(MatStm3.J_dew[1] / MatStm3.L_dew[1]) - MatStm3.J_dew[1] / MatStm3.L_dew[1]) - MatStm3.J_dew[1])
*/
void Flowsheet_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[466] /* MatStm3.J_dew[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J_dew[1]) was %g should be > 0", tmp0);
  }tmp1 = DIVISION_SIM(data->localData[0]->realVars[466] /* MatStm3.J_dew[1] variable */,data->localData[0]->realVars[474] /* MatStm3.L_dew[1] variable */,"MatStm3.L_dew[1]",equationIndexes);
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J_dew[1] / MatStm3.L_dew[1]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[559] /* MatStm3.gammac_dew[1] variable */ = exp(1.0 + log(tmp0) + (-5.0) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (1.0 + log(tmp1) - (DIVISION_SIM(data->localData[0]->realVars[466] /* MatStm3.J_dew[1] variable */,data->localData[0]->realVars[474] /* MatStm3.L_dew[1] variable */,"MatStm3.L_dew[1]",equationIndexes)))) - data->localData[0]->realVars[466] /* MatStm3.J_dew[1] variable */);
  TRACE_POP
}
/*
equation index: 273
type: SIMPLE_ASSIGN
MatStm3._J_dew[2] = MatStm3.r[2] / (MatStm3.r[1] * MatStm3.dewLiqMolFrac[1] + MatStm3.r[2] * MatStm3.dewLiqMolFrac[2])
*/
void Flowsheet_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->localData[0]->realVars[467] /* MatStm3.J_dew[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[583] /* MatStm3.r[2] variable */,(data->localData[0]->realVars[582] /* MatStm3.r[1] variable */) * (data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[583] /* MatStm3.r[2] variable */) * (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */),"MatStm3.r[1] * MatStm3.dewLiqMolFrac[1] + MatStm3.r[2] * MatStm3.dewLiqMolFrac[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 274
type: SIMPLE_ASSIGN
MatStm3._L_dew[2] = MatStm3.q[2] / (MatStm3.q[1] * MatStm3.dewLiqMolFrac[1] + MatStm3.q[2] * MatStm3.dewLiqMolFrac[2])
*/
void Flowsheet_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->localData[0]->realVars[475] /* MatStm3.L_dew[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[581] /* MatStm3.q[2] variable */,(data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */),"MatStm3.q[1] * MatStm3.dewLiqMolFrac[1] + MatStm3.q[2] * MatStm3.dewLiqMolFrac[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 275
type: SIMPLE_ASSIGN
MatStm3._gammac_dew[2] = exp(1.0 + log(MatStm3.J_dew[2]) + (-5.0) * MatStm3.q[2] * (1.0 + log(MatStm3.J_dew[2] / MatStm3.L_dew[2]) - MatStm3.J_dew[2] / MatStm3.L_dew[2]) - MatStm3.J_dew[2])
*/
void Flowsheet_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[467] /* MatStm3.J_dew[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J_dew[2]) was %g should be > 0", tmp0);
  }tmp1 = DIVISION_SIM(data->localData[0]->realVars[467] /* MatStm3.J_dew[2] variable */,data->localData[0]->realVars[475] /* MatStm3.L_dew[2] variable */,"MatStm3.L_dew[2]",equationIndexes);
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.J_dew[2] / MatStm3.L_dew[2]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[560] /* MatStm3.gammac_dew[2] variable */ = exp(1.0 + log(tmp0) + (-5.0) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (1.0 + log(tmp1) - (DIVISION_SIM(data->localData[0]->realVars[467] /* MatStm3.J_dew[2] variable */,data->localData[0]->realVars[475] /* MatStm3.L_dew[2] variable */,"MatStm3.L_dew[2]",equationIndexes)))) - data->localData[0]->realVars[467] /* MatStm3.J_dew[2] variable */);
  TRACE_POP
}
/*
equation index: 276
type: SIMPLE_ASSIGN
MatStm3._theta_dew[1] = (MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] * MatStm3.e[1,1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2] * MatStm3.e[1,2]) / (MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  data->localData[0]->realVars[623] /* MatStm3.theta_dew[1] variable */ = DIVISION_SIM((data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */)) + (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[542] /* MatStm3.e[1,2] variable */)),(data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 277
type: SIMPLE_ASSIGN
MatStm3._theta_dew[2] = (MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] * MatStm3.e[2,1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2] * MatStm3.e[2,2]) / (MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->localData[0]->realVars[624] /* MatStm3.theta_dew[2] variable */ = DIVISION_SIM((data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[543] /* MatStm3.e[2,1] variable */)) + (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[544] /* MatStm3.e[2,2] variable */)),(data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 278
type: SIMPLE_ASSIGN
MatStm3._theta_dew[3] = (MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] * MatStm3.e[3,1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2] * MatStm3.e[3,2]) / (MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2])
*/
void Flowsheet_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->localData[0]->realVars[625] /* MatStm3.theta_dew[3] variable */ = DIVISION_SIM((data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) * (data->localData[0]->realVars[545] /* MatStm3.e[3,1] variable */)) + (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[581] /* MatStm3.q[2] variable */) * (data->localData[0]->realVars[546] /* MatStm3.e[3,2] variable */)),(data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[580] /* MatStm3.q[1] variable */) + (data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[581] /* MatStm3.q[2] variable */),"MatStm3.dewLiqMolFrac[1] * MatStm3.q[1] + MatStm3.dewLiqMolFrac[2] * MatStm3.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 279
type: SIMPLE_ASSIGN
MatStm3._S_dew[4] = MatStm3.theta_dew[1] * MatStm3.tau[1,4] + MatStm3.theta_dew[2] * MatStm3.tau[2,4] + MatStm3.theta_dew[3] * MatStm3.tau[3,4] + MatStm3.theta_dew[4] * MatStm3.tau[4,4]
*/
void Flowsheet_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->localData[0]->realVars[495] /* MatStm3.S_dew[4] variable */ = (data->localData[0]->realVars[623] /* MatStm3.theta_dew[1] variable */) * (data->localData[0]->realVars[602] /* MatStm3.tau[1,4] variable */) + (data->localData[0]->realVars[624] /* MatStm3.theta_dew[2] variable */) * (data->localData[0]->realVars[606] /* MatStm3.tau[2,4] variable */) + (data->localData[0]->realVars[625] /* MatStm3.theta_dew[3] variable */) * (data->localData[0]->realVars[610] /* MatStm3.tau[3,4] variable */) + (data->localData[0]->realVars[626] /* MatStm3.theta_dew[4] variable */) * (data->localData[0]->realVars[614] /* MatStm3.tau[4,4] variable */);
  TRACE_POP
}
/*
equation index: 280
type: SIMPLE_ASSIGN
MatStm3._S_dew[1] = MatStm3.theta_dew[1] * MatStm3.tau[1,1] + MatStm3.theta_dew[2] * MatStm3.tau[2,1] + MatStm3.theta_dew[3] * MatStm3.tau[3,1] + MatStm3.theta_dew[4] * MatStm3.tau[4,1]
*/
void Flowsheet_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->localData[0]->realVars[492] /* MatStm3.S_dew[1] variable */ = (data->localData[0]->realVars[623] /* MatStm3.theta_dew[1] variable */) * (data->localData[0]->realVars[599] /* MatStm3.tau[1,1] variable */) + (data->localData[0]->realVars[624] /* MatStm3.theta_dew[2] variable */) * (data->localData[0]->realVars[603] /* MatStm3.tau[2,1] variable */) + (data->localData[0]->realVars[625] /* MatStm3.theta_dew[3] variable */) * (data->localData[0]->realVars[607] /* MatStm3.tau[3,1] variable */) + (data->localData[0]->realVars[626] /* MatStm3.theta_dew[4] variable */) * (data->localData[0]->realVars[611] /* MatStm3.tau[4,1] variable */);
  TRACE_POP
}
/*
equation index: 281
type: SIMPLE_ASSIGN
MatStm3._S_dew[2] = MatStm3.theta_dew[1] * MatStm3.tau[1,2] + MatStm3.theta_dew[2] * MatStm3.tau[2,2] + MatStm3.theta_dew[3] * MatStm3.tau[3,2] + MatStm3.theta_dew[4] * MatStm3.tau[4,2]
*/
void Flowsheet_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->localData[0]->realVars[493] /* MatStm3.S_dew[2] variable */ = (data->localData[0]->realVars[623] /* MatStm3.theta_dew[1] variable */) * (data->localData[0]->realVars[600] /* MatStm3.tau[1,2] variable */) + (data->localData[0]->realVars[624] /* MatStm3.theta_dew[2] variable */) * (data->localData[0]->realVars[604] /* MatStm3.tau[2,2] variable */) + (data->localData[0]->realVars[625] /* MatStm3.theta_dew[3] variable */) * (data->localData[0]->realVars[608] /* MatStm3.tau[3,2] variable */) + (data->localData[0]->realVars[626] /* MatStm3.theta_dew[4] variable */) * (data->localData[0]->realVars[612] /* MatStm3.tau[4,2] variable */);
  TRACE_POP
}
/*
equation index: 282
type: SIMPLE_ASSIGN
MatStm3._S_dew[3] = MatStm3.theta_dew[1] * MatStm3.tau[1,3] + MatStm3.theta_dew[2] * MatStm3.tau[2,3] + MatStm3.theta_dew[3] * MatStm3.tau[3,3] + MatStm3.theta_dew[4] * MatStm3.tau[4,3]
*/
void Flowsheet_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->localData[0]->realVars[494] /* MatStm3.S_dew[3] variable */ = (data->localData[0]->realVars[623] /* MatStm3.theta_dew[1] variable */) * (data->localData[0]->realVars[601] /* MatStm3.tau[1,3] variable */) + (data->localData[0]->realVars[624] /* MatStm3.theta_dew[2] variable */) * (data->localData[0]->realVars[605] /* MatStm3.tau[2,3] variable */) + (data->localData[0]->realVars[625] /* MatStm3.theta_dew[3] variable */) * (data->localData[0]->realVars[609] /* MatStm3.tau[3,3] variable */) + (data->localData[0]->realVars[626] /* MatStm3.theta_dew[4] variable */) * (data->localData[0]->realVars[613] /* MatStm3.tau[4,3] variable */);
  TRACE_POP
}
/*
equation index: 283
type: ALGORITHM

  MatStm3.gammar_dew[2] := $START.MatStm3.gammar_dew[2];
  MatStm3.gammar_dew[1] := $START.MatStm3.gammar_dew[1];
  MatStm3.sum_dew[2] := $START.MatStm3.sum_dew[2];
  MatStm3.sum_dew[1] := $START.MatStm3.sum_dew[1];
  MatStm3.sum_dew[:] := {0.0, 0.0};
  for j in 1:4 loop
    for i in 1:2 loop
      MatStm3.sum_dew[i] := MatStm3.sum_dew[i] + MatStm3.theta_dew[j] * MatStm3.B[i,j] / MatStm3.S_dew[j] - MatStm3.e[j,i] * log(MatStm3.B[i,j] / MatStm3.S_dew[j]);
      MatStm3.gammar_dew[i] := exp(MatStm3.q[i] * (1.0 - MatStm3.sum_dew[i]));
    end for;
  end for;
*/
void Flowsheet_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_real tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[566] /* MatStm3.gammar_dew[2] variable */ = data->modelData->realVarsData[566].attribute /* MatStm3.gammar_dew[2] variable */.start;

  data->localData[0]->realVars[565] /* MatStm3.gammar_dew[1] variable */ = data->modelData->realVarsData[565].attribute /* MatStm3.gammar_dew[1] variable */.start;

  data->localData[0]->realVars[598] /* MatStm3.sum_dew[2] variable */ = data->modelData->realVarsData[598].attribute /* MatStm3.sum_dew[2] variable */.start;

  data->localData[0]->realVars[597] /* MatStm3.sum_dew[1] variable */ = data->modelData->realVarsData[597].attribute /* MatStm3.sum_dew[1] variable */.start;

  array_alloc_scalar_real_array(&tmp0, 2, (modelica_real)0.0, (modelica_real)0.0);
  create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
  real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[597] /* MatStm3.sum_dew[1] variable */, 1, 2);
  indexed_assign_real_array(tmp0, &tmp2, &tmp1);

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 4);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pj;
    for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp7, tmp9); $Pj += tmp8)
    {
      tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = ((modelica_integer) 2);
      if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
      {
        modelica_integer $Pi;
        for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp4, tmp6); $Pi += tmp5)
        {
          tmp3 = DIVISION_SIM((&data->localData[0]->realVars[454] /* MatStm3.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[492] /* MatStm3.S_dew[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm3.S_dew[j]",equationIndexes);
          if(!(tmp3 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
            throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.B[i,j] / MatStm3.S_dew[j]) was %g should be > 0", tmp3);
          }
          (&data->localData[0]->realVars[597] /* MatStm3.sum_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = (&data->localData[0]->realVars[597] /* MatStm3.sum_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] + ((&data->localData[0]->realVars[623] /* MatStm3.theta_dew[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)]) * (DIVISION_SIM((&data->localData[0]->realVars[454] /* MatStm3.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[492] /* MatStm3.S_dew[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm3.S_dew[j]",equationIndexes)) - (((&data->localData[0]->realVars[541] /* MatStm3.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, (modelica_integer)$Pj, (modelica_integer)$Pi)]) * (log(tmp3)));

          (&data->localData[0]->realVars[565] /* MatStm3.gammar_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = exp(((&data->localData[0]->realVars[580] /* MatStm3.q[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * (1.0 - (&data->localData[0]->realVars[597] /* MatStm3.sum_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 284
type: SIMPLE_ASSIGN
MatStm3._gammaDew[2] = exp(log(MatStm3.gammar_dew[2]) + log(MatStm3.gammac_dew[2]))
*/
void Flowsheet_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[566] /* MatStm3.gammar_dew[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammar_dew[2]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[560] /* MatStm3.gammac_dew[2] variable */;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammac_dew[2]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[554] /* MatStm3.gammaDew[2] variable */ = exp(log(tmp0) + log(tmp1));
  TRACE_POP
}
/*
equation index: 285
type: SIMPLE_ASSIGN
MatStm3._gammaDew[1] = exp(log(MatStm3.gammar_dew[1]) + log(MatStm3.gammac_dew[1]))
*/
void Flowsheet_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[565] /* MatStm3.gammar_dew[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammar_dew[1]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[559] /* MatStm3.gammac_dew[1] variable */;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm3.gammac_dew[1]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[553] /* MatStm3.gammaDew[1] variable */ = exp(log(tmp0) + log(tmp1));
  TRACE_POP
}
/*
equation index: 286
type: SIMPLE_ASSIGN
MatStm3._Pdew = 1.0 / (MatStm3.compMolFrac[1,1] * exp((-MatStm3.comp[1].VP[2]) - MatStm3.comp[1].VP[3] / 310.0 - MatStm3.comp[1].VP[4] * 5.736572297479192 - MatStm3.comp[1].VP[5] * 310.0 ^ MatStm3.comp[1].VP[6]) / MatStm3.gammaDew[1] + MatStm3.compMolFrac[1,2] * exp((-MatStm3.comp[2].VP[2]) - MatStm3.comp[2].VP[3] / 310.0 - MatStm3.comp[2].VP[4] * 5.736572297479192 - MatStm3.comp[2].VP[5] * 310.0 ^ MatStm3.comp[2].VP[6]) / MatStm3.gammaDew[2])
*/
void Flowsheet_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
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
  tmp0 = 310.0;
  tmp1 = data->simulationInfo->realParameter[707];
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
  }tmp7 = 310.0;
  tmp8 = data->simulationInfo->realParameter[713];
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
  data->localData[0]->realVars[481] /* MatStm3.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) * (DIVISION_SIM(exp((-data->simulationInfo->realParameter[703]) - (DIVISION_SIM(data->simulationInfo->realParameter[704],310.0,"310.0",equationIndexes)) - ((data->simulationInfo->realParameter[705]) * (5.736572297479192)) - ((data->simulationInfo->realParameter[706]) * (tmp2))),data->localData[0]->realVars[553] /* MatStm3.gammaDew[1] variable */,"MatStm3.gammaDew[1]",equationIndexes)) + (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */) * (DIVISION_SIM(exp((-data->simulationInfo->realParameter[709]) - (DIVISION_SIM(data->simulationInfo->realParameter[710],310.0,"310.0",equationIndexes)) - ((data->simulationInfo->realParameter[711]) * (5.736572297479192)) - ((data->simulationInfo->realParameter[712]) * (tmp9))),data->localData[0]->realVars[554] /* MatStm3.gammaDew[2] variable */,"MatStm3.gammaDew[2]",equationIndexes)),"MatStm3.compMolFrac[1,1] * exp((-MatStm3.comp[1].VP[2]) - MatStm3.comp[1].VP[3] / 310.0 - MatStm3.comp[1].VP[4] * 5.736572297479192 - MatStm3.comp[1].VP[5] * 310.0 ^ MatStm3.comp[1].VP[6]) / MatStm3.gammaDew[1] + MatStm3.compMolFrac[1,2] * exp((-MatStm3.comp[2].VP[2]) - MatStm3.comp[2].VP[3] / 310.0 - MatStm3.comp[2].VP[4] * 5.736572297479192 - MatStm3.comp[2].VP[5] * 310.0 ^ MatStm3.comp[2].VP[6]) / MatStm3.gammaDew[2]",equationIndexes);
  TRACE_POP
}

void residualFunc294(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,294};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  /* iteration variables */
  for (i=0; i<7; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<7; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */ = xloc[0];
  data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */ = xloc[1];
  data->localData[0]->realVars[631] /* MatStm3.totMolFlo[2] variable */ = xloc[2];
  data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */ = xloc[4];
  data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */ = xloc[5];
  data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */ = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_239(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_240(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_241(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_242(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_243(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_244(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_245(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_246(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_247(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_248(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_249(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_250(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_251(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_252(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_253(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_254(data, threadData);

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

  /* local constraints */
  Flowsheet_eqFunction_264(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_265(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_266(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_267(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_268(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_269(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_270(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_271(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_272(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_273(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_274(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_275(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_276(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_277(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_278(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_279(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_280(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_281(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_282(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_283(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_284(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_285(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_286(data, threadData);
  /* body */
  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[481] /* MatStm3.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[468] /* MatStm3.K[1] variable */) * (data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */)):data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */);
  }
  res[0] = tmp3;

  res[1] = data->localData[0]->realVars[525] /* MatStm3.compMolFlo[3,1] variable */ + data->localData[0]->realVars[523] /* MatStm3.compMolFlo[2,1] variable */ - data->localData[0]->realVars[521] /* MatStm3.compMolFlo[1,1] variable */;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  res[2] = (tmp4?data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */ + data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */ + data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */ - 1.0);

  res[3] = data->localData[0]->realVars[526] /* MatStm3.compMolFlo[3,2] variable */ + data->localData[0]->realVars[524] /* MatStm3.compMolFlo[2,2] variable */ - data->localData[0]->realVars[522] /* MatStm3.compMolFlo[1,2] variable */;

  tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[480] /* MatStm3.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[481] /* MatStm3.Pdew variable */);
    tmp8 = (tmp6?data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[469] /* MatStm3.K[2] variable */) * (data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */)):data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */);
  }
  res[4] = tmp8;

  res[5] = (data->localData[0]->realVars[527] /* MatStm3.compMolFrac[1,1] variable */) * (DIVISION_SIM(data->localData[0]->realVars[481] /* MatStm3.Pdew variable */,(data->localData[0]->realVars[482] /* MatStm3.Psat[1] variable */) * (data->localData[0]->realVars[553] /* MatStm3.gammaDew[1] variable */),"MatStm3.Psat[1] * MatStm3.gammaDew[1]",equationIndexes)) - data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */;

  res[6] = (data->localData[0]->realVars[528] /* MatStm3.compMolFrac[1,2] variable */) * (DIVISION_SIM(data->localData[0]->realVars[481] /* MatStm3.Pdew variable */,(data->localData[0]->realVars[483] /* MatStm3.Psat[2] variable */) * (data->localData[0]->realVars[554] /* MatStm3.gammaDew[2] variable */),"MatStm3.Psat[2] * MatStm3.gammaDew[2]",equationIndexes)) - data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS294(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,4,4,2,3,6,3,6};
  const int rowIndex[28] = {0,4,5,6,0,4,5,6,1,3,2,3,4,0,1,2,4,5,6,0,1,2,0,2,3,4,5,6};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((7+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(28*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 28;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(7*sizeof(int));
  inSysData->sparsePattern.maxColors = 6;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (7+1)*sizeof(int));
  
  for(i=2;i<7+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 28*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[6] = 1;
  inSysData->sparsePattern.colorCols[5] = 2;
  inSysData->sparsePattern.colorCols[4] = 3;
  inSysData->sparsePattern.colorCols[3] = 4;
  inSysData->sparsePattern.colorCols[1] = 5;
  inSysData->sparsePattern.colorCols[0] = 6;
  inSysData->sparsePattern.colorCols[2] = 6;
}
void initializeStaticDataNLS294(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm3.dewLiqMolFrac[2] */
  sysData->nominal[i] = data->modelData->realVarsData[540].attribute /* MatStm3.dewLiqMolFrac[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[540].attribute /* MatStm3.dewLiqMolFrac[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[540].attribute /* MatStm3.dewLiqMolFrac[2] */.max;
  /* static nls data for MatStm3.dewLiqMolFrac[1] */
  sysData->nominal[i] = data->modelData->realVarsData[539].attribute /* MatStm3.dewLiqMolFrac[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[539].attribute /* MatStm3.dewLiqMolFrac[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[539].attribute /* MatStm3.dewLiqMolFrac[1] */.max;
  /* static nls data for MatStm3.totMolFlo[2] */
  sysData->nominal[i] = data->modelData->realVarsData[631].attribute /* MatStm3.totMolFlo[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[631].attribute /* MatStm3.totMolFlo[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[631].attribute /* MatStm3.totMolFlo[2] */.max;
  /* static nls data for MatStm3.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[532].attribute /* MatStm3.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[532].attribute /* MatStm3.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[532].attribute /* MatStm3.compMolFrac[3,2] */.max;
  /* static nls data for MatStm3.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[529].attribute /* MatStm3.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[529].attribute /* MatStm3.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[529].attribute /* MatStm3.compMolFrac[2,1] */.max;
  /* static nls data for MatStm3.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[531].attribute /* MatStm3.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[531].attribute /* MatStm3.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[531].attribute /* MatStm3.compMolFrac[3,1] */.max;
  /* static nls data for MatStm3.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[530].attribute /* MatStm3.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[530].attribute /* MatStm3.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[530].attribute /* MatStm3.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS294(sysData);
}

void getIterationVarsNLS294(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[540] /* MatStm3.dewLiqMolFrac[2] variable */;
  array[1] = data->localData[0]->realVars[539] /* MatStm3.dewLiqMolFrac[1] variable */;
  array[2] = data->localData[0]->realVars[631] /* MatStm3.totMolFlo[2] variable */;
  array[3] = data->localData[0]->realVars[532] /* MatStm3.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[529] /* MatStm3.compMolFrac[2,1] variable */;
  array[5] = data->localData[0]->realVars[531] /* MatStm3.compMolFrac[3,1] variable */;
  array[6] = data->localData[0]->realVars[530] /* MatStm3.compMolFrac[2,2] variable */;
}


/* inner equations */

/*
equation index: 136
type: SIMPLE_ASSIGN
MatStm1._theta[4] = (MatStm1.compMolFrac[2,1] * MatStm1.q[1] * MatStm1.e[4,1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2] * MatStm1.e[4,2]) / (MatStm1.compMolFrac[2,1] * MatStm1.q[1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->localData[0]->realVars[253] /* MatStm1.theta[4] variable */ = DIVISION_SIM((data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[182] /* MatStm1.e[4,1] variable */)) + (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[183] /* MatStm1.e[4,2] variable */)),(data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.compMolFrac[2,1] * MatStm1.q[1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 137
type: SIMPLE_ASSIGN
MatStm1._J[1] = MatStm1.r[1] / (MatStm1.r[1] * MatStm1.compMolFrac[2,1] + MatStm1.r[2] * MatStm1.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->localData[0]->realVars[97] /* MatStm1.J[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[217] /* MatStm1.r[1] variable */,(data->localData[0]->realVars[217] /* MatStm1.r[1] variable */) * (data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[218] /* MatStm1.r[2] variable */) * (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */),"MatStm1.r[1] * MatStm1.compMolFrac[2,1] + MatStm1.r[2] * MatStm1.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 138
type: SIMPLE_ASSIGN
MatStm1._L[1] = MatStm1.q[1] / (MatStm1.q[1] * MatStm1.compMolFrac[2,1] + MatStm1.q[2] * MatStm1.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->localData[0]->realVars[105] /* MatStm1.L[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[215] /* MatStm1.q[1] variable */,(data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */),"MatStm1.q[1] * MatStm1.compMolFrac[2,1] + MatStm1.q[2] * MatStm1.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 139
type: SIMPLE_ASSIGN
MatStm1._gammac[1] = exp(1.0 + log(MatStm1.J[1]) + (-5.0) * MatStm1.q[1] * (1.0 + log(MatStm1.J[1] / MatStm1.L[1]) - MatStm1.J[1] / MatStm1.L[1]) - MatStm1.J[1])
*/
void Flowsheet_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[97] /* MatStm1.J[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J[1]) was %g should be > 0", tmp0);
  }tmp1 = DIVISION_SIM(data->localData[0]->realVars[97] /* MatStm1.J[1] variable */,data->localData[0]->realVars[105] /* MatStm1.L[1] variable */,"MatStm1.L[1]",equationIndexes);
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J[1] / MatStm1.L[1]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[190] /* MatStm1.gammac[1] variable */ = exp(1.0 + log(tmp0) + (-5.0) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (1.0 + log(tmp1) - (DIVISION_SIM(data->localData[0]->realVars[97] /* MatStm1.J[1] variable */,data->localData[0]->realVars[105] /* MatStm1.L[1] variable */,"MatStm1.L[1]",equationIndexes)))) - data->localData[0]->realVars[97] /* MatStm1.J[1] variable */);
  TRACE_POP
}
/*
equation index: 140
type: SIMPLE_ASSIGN
MatStm1._J[2] = MatStm1.r[2] / (MatStm1.r[1] * MatStm1.compMolFrac[2,1] + MatStm1.r[2] * MatStm1.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->localData[0]->realVars[98] /* MatStm1.J[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[218] /* MatStm1.r[2] variable */,(data->localData[0]->realVars[217] /* MatStm1.r[1] variable */) * (data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[218] /* MatStm1.r[2] variable */) * (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */),"MatStm1.r[1] * MatStm1.compMolFrac[2,1] + MatStm1.r[2] * MatStm1.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 141
type: SIMPLE_ASSIGN
MatStm1._L[2] = MatStm1.q[2] / (MatStm1.q[1] * MatStm1.compMolFrac[2,1] + MatStm1.q[2] * MatStm1.compMolFrac[2,2])
*/
void Flowsheet_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->localData[0]->realVars[106] /* MatStm1.L[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[216] /* MatStm1.q[2] variable */,(data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) + (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */),"MatStm1.q[1] * MatStm1.compMolFrac[2,1] + MatStm1.q[2] * MatStm1.compMolFrac[2,2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 142
type: SIMPLE_ASSIGN
MatStm1._gammac[2] = exp(1.0 + log(MatStm1.J[2]) + (-5.0) * MatStm1.q[2] * (1.0 + log(MatStm1.J[2] / MatStm1.L[2]) - MatStm1.J[2] / MatStm1.L[2]) - MatStm1.J[2])
*/
void Flowsheet_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[98] /* MatStm1.J[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J[2]) was %g should be > 0", tmp0);
  }tmp1 = DIVISION_SIM(data->localData[0]->realVars[98] /* MatStm1.J[2] variable */,data->localData[0]->realVars[106] /* MatStm1.L[2] variable */,"MatStm1.L[2]",equationIndexes);
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J[2] / MatStm1.L[2]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[191] /* MatStm1.gammac[2] variable */ = exp(1.0 + log(tmp0) + (-5.0) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (1.0 + log(tmp1) - (DIVISION_SIM(data->localData[0]->realVars[98] /* MatStm1.J[2] variable */,data->localData[0]->realVars[106] /* MatStm1.L[2] variable */,"MatStm1.L[2]",equationIndexes)))) - data->localData[0]->realVars[98] /* MatStm1.J[2] variable */);
  TRACE_POP
}
/*
equation index: 143
type: SIMPLE_ASSIGN
MatStm1._theta[1] = (MatStm1.compMolFrac[2,1] * MatStm1.q[1] * MatStm1.e[1,1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2] * MatStm1.e[1,2]) / (MatStm1.compMolFrac[2,1] * MatStm1.q[1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  data->localData[0]->realVars[250] /* MatStm1.theta[1] variable */ = DIVISION_SIM((data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */)) + (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[177] /* MatStm1.e[1,2] variable */)),(data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.compMolFrac[2,1] * MatStm1.q[1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 144
type: SIMPLE_ASSIGN
MatStm1._theta[2] = (MatStm1.compMolFrac[2,1] * MatStm1.q[1] * MatStm1.e[2,1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2] * MatStm1.e[2,2]) / (MatStm1.compMolFrac[2,1] * MatStm1.q[1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->localData[0]->realVars[251] /* MatStm1.theta[2] variable */ = DIVISION_SIM((data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[178] /* MatStm1.e[2,1] variable */)) + (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[179] /* MatStm1.e[2,2] variable */)),(data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.compMolFrac[2,1] * MatStm1.q[1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 145
type: SIMPLE_ASSIGN
MatStm1._theta[3] = (MatStm1.compMolFrac[2,1] * MatStm1.q[1] * MatStm1.e[3,1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2] * MatStm1.e[3,2]) / (MatStm1.compMolFrac[2,1] * MatStm1.q[1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  data->localData[0]->realVars[252] /* MatStm1.theta[3] variable */ = DIVISION_SIM((data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[180] /* MatStm1.e[3,1] variable */)) + (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[181] /* MatStm1.e[3,2] variable */)),(data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.compMolFrac[2,1] * MatStm1.q[1] + MatStm1.compMolFrac[2,2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 146
type: SIMPLE_ASSIGN
MatStm1._S[4] = MatStm1.theta[1] * MatStm1.tau[1,4] + MatStm1.theta[2] * MatStm1.tau[2,4] + MatStm1.theta[3] * MatStm1.tau[3,4] + MatStm1.theta[4] * MatStm1.tau[4,4]
*/
void Flowsheet_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->localData[0]->realVars[122] /* MatStm1.S[4] variable */ = (data->localData[0]->realVars[250] /* MatStm1.theta[1] variable */) * (data->localData[0]->realVars[237] /* MatStm1.tau[1,4] variable */) + (data->localData[0]->realVars[251] /* MatStm1.theta[2] variable */) * (data->localData[0]->realVars[241] /* MatStm1.tau[2,4] variable */) + (data->localData[0]->realVars[252] /* MatStm1.theta[3] variable */) * (data->localData[0]->realVars[245] /* MatStm1.tau[3,4] variable */) + (data->localData[0]->realVars[253] /* MatStm1.theta[4] variable */) * (data->localData[0]->realVars[249] /* MatStm1.tau[4,4] variable */);
  TRACE_POP
}
/*
equation index: 147
type: SIMPLE_ASSIGN
MatStm1._S[1] = MatStm1.theta[1] * MatStm1.tau[1,1] + MatStm1.theta[2] * MatStm1.tau[2,1] + MatStm1.theta[3] * MatStm1.tau[3,1] + MatStm1.theta[4] * MatStm1.tau[4,1]
*/
void Flowsheet_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  data->localData[0]->realVars[119] /* MatStm1.S[1] variable */ = (data->localData[0]->realVars[250] /* MatStm1.theta[1] variable */) * (data->localData[0]->realVars[234] /* MatStm1.tau[1,1] variable */) + (data->localData[0]->realVars[251] /* MatStm1.theta[2] variable */) * (data->localData[0]->realVars[238] /* MatStm1.tau[2,1] variable */) + (data->localData[0]->realVars[252] /* MatStm1.theta[3] variable */) * (data->localData[0]->realVars[242] /* MatStm1.tau[3,1] variable */) + (data->localData[0]->realVars[253] /* MatStm1.theta[4] variable */) * (data->localData[0]->realVars[246] /* MatStm1.tau[4,1] variable */);
  TRACE_POP
}
/*
equation index: 148
type: SIMPLE_ASSIGN
MatStm1._S[2] = MatStm1.theta[1] * MatStm1.tau[1,2] + MatStm1.theta[2] * MatStm1.tau[2,2] + MatStm1.theta[3] * MatStm1.tau[3,2] + MatStm1.theta[4] * MatStm1.tau[4,2]
*/
void Flowsheet_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  data->localData[0]->realVars[120] /* MatStm1.S[2] variable */ = (data->localData[0]->realVars[250] /* MatStm1.theta[1] variable */) * (data->localData[0]->realVars[235] /* MatStm1.tau[1,2] variable */) + (data->localData[0]->realVars[251] /* MatStm1.theta[2] variable */) * (data->localData[0]->realVars[239] /* MatStm1.tau[2,2] variable */) + (data->localData[0]->realVars[252] /* MatStm1.theta[3] variable */) * (data->localData[0]->realVars[243] /* MatStm1.tau[3,2] variable */) + (data->localData[0]->realVars[253] /* MatStm1.theta[4] variable */) * (data->localData[0]->realVars[247] /* MatStm1.tau[4,2] variable */);
  TRACE_POP
}
/*
equation index: 149
type: SIMPLE_ASSIGN
MatStm1._S[3] = MatStm1.theta[1] * MatStm1.tau[1,3] + MatStm1.theta[2] * MatStm1.tau[2,3] + MatStm1.theta[3] * MatStm1.tau[3,3] + MatStm1.theta[4] * MatStm1.tau[4,3]
*/
void Flowsheet_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->localData[0]->realVars[121] /* MatStm1.S[3] variable */ = (data->localData[0]->realVars[250] /* MatStm1.theta[1] variable */) * (data->localData[0]->realVars[236] /* MatStm1.tau[1,3] variable */) + (data->localData[0]->realVars[251] /* MatStm1.theta[2] variable */) * (data->localData[0]->realVars[240] /* MatStm1.tau[2,3] variable */) + (data->localData[0]->realVars[252] /* MatStm1.theta[3] variable */) * (data->localData[0]->realVars[244] /* MatStm1.tau[3,3] variable */) + (data->localData[0]->realVars[253] /* MatStm1.theta[4] variable */) * (data->localData[0]->realVars[248] /* MatStm1.tau[4,3] variable */);
  TRACE_POP
}
/*
equation index: 150
type: ALGORITHM

  MatStm1.gammar[2] := $START.MatStm1.gammar[2];
  MatStm1.gammar[1] := $START.MatStm1.gammar[1];
  MatStm1.sum[2] := $START.MatStm1.sum[2];
  MatStm1.sum[1] := $START.MatStm1.sum[1];
  MatStm1.B[2,4] := $START.MatStm1.B[2,4];
  MatStm1.B[2,3] := $START.MatStm1.B[2,3];
  MatStm1.B[2,2] := $START.MatStm1.B[2,2];
  MatStm1.B[2,1] := $START.MatStm1.B[2,1];
  MatStm1.B[1,4] := $START.MatStm1.B[1,4];
  MatStm1.B[1,3] := $START.MatStm1.B[1,3];
  MatStm1.B[1,2] := $START.MatStm1.B[1,2];
  MatStm1.B[1,1] := $START.MatStm1.B[1,1];
  for i in 1:2 loop
    for j in 1:4 loop
      for l in 1:4 loop
        MatStm1.B[i,j] := MatStm1.e[1,i] * MatStm1.tau[1,j] + MatStm1.e[2,i] * MatStm1.tau[2,j] + MatStm1.e[3,i] * MatStm1.tau[3,j] + MatStm1.e[4,i] * MatStm1.tau[4,j];
      end for;
    end for;
  end for;
  MatStm1.sum[:] := {0.0, 0.0};
  for j in 1:4 loop
    for i in 1:2 loop
      MatStm1.sum[i] := MatStm1.sum[i] + MatStm1.theta[j] * MatStm1.B[i,j] / MatStm1.S[j] - MatStm1.e[j,i] * log(MatStm1.B[i,j] / MatStm1.S[j]);
      MatStm1.gammar[i] := exp(MatStm1.q[i] * (1.0 - MatStm1.sum[i]));
    end for;
  end for;
*/
void Flowsheet_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  modelica_integer tmp0;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  real_array tmp9;
  index_spec_t tmp10;
  real_array tmp11;
  modelica_real tmp12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  data->localData[0]->realVars[197] /* MatStm1.gammar[2] variable */ = data->modelData->realVarsData[197].attribute /* MatStm1.gammar[2] variable */.start;

  data->localData[0]->realVars[196] /* MatStm1.gammar[1] variable */ = data->modelData->realVarsData[196].attribute /* MatStm1.gammar[1] variable */.start;

  data->localData[0]->realVars[229] /* MatStm1.sum[2] variable */ = data->modelData->realVarsData[229].attribute /* MatStm1.sum[2] variable */.start;

  data->localData[0]->realVars[228] /* MatStm1.sum[1] variable */ = data->modelData->realVarsData[228].attribute /* MatStm1.sum[1] variable */.start;

  data->localData[0]->realVars[96] /* MatStm1.B[2,4] variable */ = data->modelData->realVarsData[96].attribute /* MatStm1.B[2,4] variable */.start;

  data->localData[0]->realVars[95] /* MatStm1.B[2,3] variable */ = data->modelData->realVarsData[95].attribute /* MatStm1.B[2,3] variable */.start;

  data->localData[0]->realVars[94] /* MatStm1.B[2,2] variable */ = data->modelData->realVarsData[94].attribute /* MatStm1.B[2,2] variable */.start;

  data->localData[0]->realVars[93] /* MatStm1.B[2,1] variable */ = data->modelData->realVarsData[93].attribute /* MatStm1.B[2,1] variable */.start;

  data->localData[0]->realVars[92] /* MatStm1.B[1,4] variable */ = data->modelData->realVarsData[92].attribute /* MatStm1.B[1,4] variable */.start;

  data->localData[0]->realVars[91] /* MatStm1.B[1,3] variable */ = data->modelData->realVarsData[91].attribute /* MatStm1.B[1,3] variable */.start;

  data->localData[0]->realVars[90] /* MatStm1.B[1,2] variable */ = data->modelData->realVarsData[90].attribute /* MatStm1.B[1,2] variable */.start;

  data->localData[0]->realVars[89] /* MatStm1.B[1,1] variable */ = data->modelData->realVarsData[89].attribute /* MatStm1.B[1,1] variable */.start;

  tmp6 = ((modelica_integer) 1); tmp7 = 1; tmp8 = ((modelica_integer) 2);
  if(!(((tmp7 > 0) && (tmp6 > tmp8)) || ((tmp7 < 0) && (tmp6 < tmp8))))
  {
    modelica_integer $Pi;
    for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp6, tmp8); $Pi += tmp7)
    {
      tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = ((modelica_integer) 4);
      if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
      {
        modelica_integer $Pj;
        for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp3, tmp5); $Pj += tmp4)
        {
          tmp0 = ((modelica_integer) 1); tmp1 = 1; tmp2 = ((modelica_integer) 4);
          if(!(((tmp1 > 0) && (tmp0 > tmp2)) || ((tmp1 < 0) && (tmp0 < tmp2))))
          {
            modelica_integer $Pl;
            for($Pl = ((modelica_integer) 1); in_range_integer($Pl, tmp0, tmp2); $Pl += tmp1)
            {
              (&data->localData[0]->realVars[89] /* MatStm1.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)] = ((&data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 1), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[234] /* MatStm1.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 1), (modelica_integer)$Pj)]) + ((&data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 2), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[234] /* MatStm1.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 2), (modelica_integer)$Pj)]) + ((&data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 3), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[234] /* MatStm1.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 3), (modelica_integer)$Pj)]) + ((&data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, ((modelica_integer) 4), (modelica_integer)$Pi)]) * ((&data->localData[0]->realVars[234] /* MatStm1.tau[1,1] variable */)[calc_base_index_dims_subs(2, 4, 4, ((modelica_integer) 4), (modelica_integer)$Pj)]);
            }
          }
        }
      }
    }
  }

  array_alloc_scalar_real_array(&tmp9, 2, (modelica_real)0.0, (modelica_real)0.0);
  create_index_spec(&tmp10, 1, (1), (int*)0, 'W');
  real_array_create(&tmp11, (modelica_real*)&data->localData[0]->realVars[228] /* MatStm1.sum[1] variable */, 1, 2);
  indexed_assign_real_array(tmp9, &tmp11, &tmp10);

  tmp16 = ((modelica_integer) 1); tmp17 = 1; tmp18 = ((modelica_integer) 4);
  if(!(((tmp17 > 0) && (tmp16 > tmp18)) || ((tmp17 < 0) && (tmp16 < tmp18))))
  {
    modelica_integer $Pj;
    for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp16, tmp18); $Pj += tmp17)
    {
      tmp13 = ((modelica_integer) 1); tmp14 = 1; tmp15 = ((modelica_integer) 2);
      if(!(((tmp14 > 0) && (tmp13 > tmp15)) || ((tmp14 < 0) && (tmp13 < tmp15))))
      {
        modelica_integer $Pi;
        for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp13, tmp15); $Pi += tmp14)
        {
          tmp12 = DIVISION_SIM((&data->localData[0]->realVars[89] /* MatStm1.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[119] /* MatStm1.S[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm1.S[j]",equationIndexes);
          if(!(tmp12 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
            throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.B[i,j] / MatStm1.S[j]) was %g should be > 0", tmp12);
          }
          (&data->localData[0]->realVars[228] /* MatStm1.sum[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = (&data->localData[0]->realVars[228] /* MatStm1.sum[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] + ((&data->localData[0]->realVars[250] /* MatStm1.theta[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)]) * (DIVISION_SIM((&data->localData[0]->realVars[89] /* MatStm1.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[119] /* MatStm1.S[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm1.S[j]",equationIndexes)) - (((&data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, (modelica_integer)$Pj, (modelica_integer)$Pi)]) * (log(tmp12)));

          (&data->localData[0]->realVars[196] /* MatStm1.gammar[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = exp(((&data->localData[0]->realVars[215] /* MatStm1.q[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * (1.0 - (&data->localData[0]->realVars[228] /* MatStm1.sum[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 151
type: SIMPLE_ASSIGN
MatStm1._gamma[1] = exp(log(MatStm1.gammar[1]) + log(MatStm1.gammac[1]))
*/
void Flowsheet_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[196] /* MatStm1.gammar[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammar[1]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[190] /* MatStm1.gammac[1] variable */;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammac[1]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[184] /* MatStm1.gamma[1] variable */ = exp(log(tmp0) + log(tmp1));
  TRACE_POP
}
/*
equation index: 152
type: SIMPLE_ASSIGN
MatStm1._gamma[2] = exp(log(MatStm1.gammar[2]) + log(MatStm1.gammac[2]))
*/
void Flowsheet_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[197] /* MatStm1.gammar[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammar[2]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[191] /* MatStm1.gammac[2] variable */;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammac[2]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[185] /* MatStm1.gamma[2] variable */ = exp(log(tmp0) + log(tmp1));
  TRACE_POP
}
/*
equation index: 153
type: SIMPLE_ASSIGN
MatStm1._K[1] = 9.869232667160129e-006 * MatStm1.gamma[1] * MatStm1.Psat[1]
*/
void Flowsheet_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->localData[0]->realVars[103] /* MatStm1.K[1] variable */ = (9.869232667160129e-006) * ((data->localData[0]->realVars[184] /* MatStm1.gamma[1] variable */) * (data->localData[0]->realVars[117] /* MatStm1.Psat[1] variable */));
  TRACE_POP
}
/*
equation index: 154
type: SIMPLE_ASSIGN
MatStm1._K[2] = 9.869232667160129e-006 * MatStm1.gamma[2] * MatStm1.Psat[2]
*/
void Flowsheet_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->localData[0]->realVars[104] /* MatStm1.K[2] variable */ = (9.869232667160129e-006) * ((data->localData[0]->realVars[185] /* MatStm1.gamma[2] variable */) * (data->localData[0]->realVars[118] /* MatStm1.Psat[2] variable */));
  TRACE_POP
}
/*
equation index: 155
type: ALGORITHM

  MatStm1.gammar_bubl[2] := $START.MatStm1.gammar_bubl[2];
  MatStm1.gammar_bubl[1] := $START.MatStm1.gammar_bubl[1];
  MatStm1.sum_bubl[2] := $START.MatStm1.sum_bubl[2];
  MatStm1.sum_bubl[1] := $START.MatStm1.sum_bubl[1];
  MatStm1.sum_bubl[:] := {0.0, 0.0};
  for j in 1:4 loop
    for i in 1:2 loop
      MatStm1.sum_bubl[i] := MatStm1.sum_bubl[i] + MatStm1.theta_bubl[j] * MatStm1.B[i,j] / MatStm1.S_bubl[j] - MatStm1.e[j,i] * log(MatStm1.B[i,j] / MatStm1.S_bubl[j]);
      MatStm1.gammar_bubl[i] := exp(MatStm1.q[i] * (1.0 - MatStm1.sum_bubl[i]));
    end for;
  end for;
*/
void Flowsheet_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_real tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[199] /* MatStm1.gammar_bubl[2] variable */ = data->modelData->realVarsData[199].attribute /* MatStm1.gammar_bubl[2] variable */.start;

  data->localData[0]->realVars[198] /* MatStm1.gammar_bubl[1] variable */ = data->modelData->realVarsData[198].attribute /* MatStm1.gammar_bubl[1] variable */.start;

  data->localData[0]->realVars[231] /* MatStm1.sum_bubl[2] variable */ = data->modelData->realVarsData[231].attribute /* MatStm1.sum_bubl[2] variable */.start;

  data->localData[0]->realVars[230] /* MatStm1.sum_bubl[1] variable */ = data->modelData->realVarsData[230].attribute /* MatStm1.sum_bubl[1] variable */.start;

  array_alloc_scalar_real_array(&tmp0, 2, (modelica_real)0.0, (modelica_real)0.0);
  create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
  real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[230] /* MatStm1.sum_bubl[1] variable */, 1, 2);
  indexed_assign_real_array(tmp0, &tmp2, &tmp1);

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 4);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pj;
    for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp7, tmp9); $Pj += tmp8)
    {
      tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = ((modelica_integer) 2);
      if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
      {
        modelica_integer $Pi;
        for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp4, tmp6); $Pi += tmp5)
        {
          tmp3 = DIVISION_SIM((&data->localData[0]->realVars[89] /* MatStm1.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[123] /* MatStm1.S_bubl[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm1.S_bubl[j]",equationIndexes);
          if(!(tmp3 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
            throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.B[i,j] / MatStm1.S_bubl[j]) was %g should be > 0", tmp3);
          }
          (&data->localData[0]->realVars[230] /* MatStm1.sum_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = (&data->localData[0]->realVars[230] /* MatStm1.sum_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] + ((&data->localData[0]->realVars[254] /* MatStm1.theta_bubl[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)]) * (DIVISION_SIM((&data->localData[0]->realVars[89] /* MatStm1.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[123] /* MatStm1.S_bubl[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm1.S_bubl[j]",equationIndexes)) - (((&data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, (modelica_integer)$Pj, (modelica_integer)$Pi)]) * (log(tmp3)));

          (&data->localData[0]->realVars[198] /* MatStm1.gammar_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = exp(((&data->localData[0]->realVars[215] /* MatStm1.q[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * (1.0 - (&data->localData[0]->realVars[230] /* MatStm1.sum_bubl[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 156
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[2] = exp(log(MatStm1.gammar_bubl[2]) + log(MatStm1.gammac_bubl[2]))
*/
void Flowsheet_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[199] /* MatStm1.gammar_bubl[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammar_bubl[2]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[193] /* MatStm1.gammac_bubl[2] variable */;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammac_bubl[2]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[187] /* MatStm1.gammaBubl[2] variable */ = exp(log(tmp0) + log(tmp1));
  TRACE_POP
}
/*
equation index: 157
type: SIMPLE_ASSIGN
MatStm1._gammaBubl[1] = exp(log(MatStm1.gammar_bubl[1]) + log(MatStm1.gammac_bubl[1]))
*/
void Flowsheet_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[198] /* MatStm1.gammar_bubl[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammar_bubl[1]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[192] /* MatStm1.gammac_bubl[1] variable */;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammac_bubl[1]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[186] /* MatStm1.gammaBubl[1] variable */ = exp(log(tmp0) + log(tmp1));
  TRACE_POP
}
/*
equation index: 158
type: SIMPLE_ASSIGN
MatStm1._Pbubl = MatStm1.gammaBubl[1] * MatStm1.compMolFrac[1,1] * exp(MatStm1.comp[1].VP[2] + 0.003125 * MatStm1.comp[1].VP[3] + MatStm1.comp[1].VP[4] * 5.768320995793772 + MatStm1.comp[1].VP[5] * 320.0 ^ MatStm1.comp[1].VP[6]) + MatStm1.gammaBubl[2] * MatStm1.compMolFrac[1,2] * exp(MatStm1.comp[2].VP[2] + 0.003125 * MatStm1.comp[2].VP[3] + MatStm1.comp[2].VP[4] * 5.768320995793772 + MatStm1.comp[2].VP[5] * 320.0 ^ MatStm1.comp[2].VP[6])
*/
void Flowsheet_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
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
  tmp0 = 320.0;
  tmp1 = data->simulationInfo->realParameter[311];
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
  }tmp7 = 320.0;
  tmp8 = data->simulationInfo->realParameter[317];
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
  data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */ = (data->localData[0]->realVars[186] /* MatStm1.gammaBubl[1] variable */) * ((data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) * (exp(data->simulationInfo->realParameter[307] + (0.003125) * (data->simulationInfo->realParameter[308]) + (data->simulationInfo->realParameter[309]) * (5.768320995793772) + (data->simulationInfo->realParameter[310]) * (tmp2)))) + (data->localData[0]->realVars[187] /* MatStm1.gammaBubl[2] variable */) * ((data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */) * (exp(data->simulationInfo->realParameter[313] + (0.003125) * (data->simulationInfo->realParameter[314]) + (data->simulationInfo->realParameter[315]) * (5.768320995793772) + (data->simulationInfo->realParameter[316]) * (tmp9))));
  TRACE_POP
}
/*
equation index: 159
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,2] = MatStm1.compMolFrac[3,2] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  data->localData[0]->realVars[161] /* MatStm1.compMolFlo[3,2] variable */ = (data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */) * (data->localData[0]->realVars[267] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 160
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[3,1] = MatStm1.compMolFrac[3,1] * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  data->localData[0]->realVars[160] /* MatStm1.compMolFlo[3,1] variable */ = (data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */) * (data->localData[0]->realVars[267] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 161
type: SIMPLE_ASSIGN
Mixer1._inVapPhasMolFrac[2] = 0.01428571428571429 * MatStm1.totMolFlo[3]
*/
void Flowsheet_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->localData[0]->realVars[637] /* Mixer1.inVapPhasMolFrac[2] variable */ = (0.01428571428571429) * (data->localData[0]->realVars[267] /* MatStm1.totMolFlo[3] variable */);
  TRACE_POP
}
/*
equation index: 162
type: SIMPLE_ASSIGN
MatStm1._liqPhasMolFrac = 1.0 - Mixer1.inVapPhasMolFrac[2]
*/
void Flowsheet_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  data->localData[0]->realVars[203] /* MatStm1.liqPhasMolFrac variable */ = 1.0 - data->localData[0]->realVars[637] /* Mixer1.inVapPhasMolFrac[2] variable */;
  TRACE_POP
}
/*
equation index: 163
type: SIMPLE_ASSIGN
MatStm1._totMolFlo[2] = 70.0 * MatStm1.liqPhasMolFrac
*/
void Flowsheet_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  data->localData[0]->realVars[266] /* MatStm1.totMolFlo[2] variable */ = (70.0) * (data->localData[0]->realVars[203] /* MatStm1.liqPhasMolFrac variable */);
  TRACE_POP
}
/*
equation index: 164
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,1] = MatStm1.compMolFrac[2,1] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  data->localData[0]->realVars[158] /* MatStm1.compMolFlo[2,1] variable */ = (data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */) * (data->localData[0]->realVars[266] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 165
type: SIMPLE_ASSIGN
MatStm1._compMolFlo[2,2] = MatStm1.compMolFrac[2,2] * MatStm1.totMolFlo[2]
*/
void Flowsheet_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  data->localData[0]->realVars[159] /* MatStm1.compMolFlo[2,2] variable */ = (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */) * (data->localData[0]->realVars[266] /* MatStm1.totMolFlo[2] variable */);
  TRACE_POP
}
/*
equation index: 166
type: SIMPLE_ASSIGN
MatStm1._L_dew[2] = MatStm1.q[2] / (MatStm1.q[1] * MatStm1.dewLiqMolFrac[1] + MatStm1.q[2] * MatStm1.dewLiqMolFrac[2])
*/
void Flowsheet_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  data->localData[0]->realVars[110] /* MatStm1.L_dew[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[216] /* MatStm1.q[2] variable */,(data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */),"MatStm1.q[1] * MatStm1.dewLiqMolFrac[1] + MatStm1.q[2] * MatStm1.dewLiqMolFrac[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 167
type: SIMPLE_ASSIGN
MatStm1._theta_dew[1] = (MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] * MatStm1.e[1,1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2] * MatStm1.e[1,2]) / (MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->localData[0]->realVars[258] /* MatStm1.theta_dew[1] variable */ = DIVISION_SIM((data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */)) + (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[177] /* MatStm1.e[1,2] variable */)),(data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 168
type: SIMPLE_ASSIGN
MatStm1._J_dew[1] = MatStm1.r[1] / (MatStm1.r[1] * MatStm1.dewLiqMolFrac[1] + MatStm1.r[2] * MatStm1.dewLiqMolFrac[2])
*/
void Flowsheet_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->localData[0]->realVars[101] /* MatStm1.J_dew[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[217] /* MatStm1.r[1] variable */,(data->localData[0]->realVars[217] /* MatStm1.r[1] variable */) * (data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[218] /* MatStm1.r[2] variable */) * (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */),"MatStm1.r[1] * MatStm1.dewLiqMolFrac[1] + MatStm1.r[2] * MatStm1.dewLiqMolFrac[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 169
type: SIMPLE_ASSIGN
MatStm1._L_dew[1] = MatStm1.q[1] / (MatStm1.q[1] * MatStm1.dewLiqMolFrac[1] + MatStm1.q[2] * MatStm1.dewLiqMolFrac[2])
*/
void Flowsheet_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->localData[0]->realVars[109] /* MatStm1.L_dew[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[215] /* MatStm1.q[1] variable */,(data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */),"MatStm1.q[1] * MatStm1.dewLiqMolFrac[1] + MatStm1.q[2] * MatStm1.dewLiqMolFrac[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 170
type: SIMPLE_ASSIGN
MatStm1._gammac_dew[1] = exp(1.0 + log(MatStm1.J_dew[1]) + (-5.0) * MatStm1.q[1] * (1.0 + log(MatStm1.J_dew[1] / MatStm1.L_dew[1]) - MatStm1.J_dew[1] / MatStm1.L_dew[1]) - MatStm1.J_dew[1])
*/
void Flowsheet_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[101] /* MatStm1.J_dew[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J_dew[1]) was %g should be > 0", tmp0);
  }tmp1 = DIVISION_SIM(data->localData[0]->realVars[101] /* MatStm1.J_dew[1] variable */,data->localData[0]->realVars[109] /* MatStm1.L_dew[1] variable */,"MatStm1.L_dew[1]",equationIndexes);
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J_dew[1] / MatStm1.L_dew[1]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[194] /* MatStm1.gammac_dew[1] variable */ = exp(1.0 + log(tmp0) + (-5.0) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (1.0 + log(tmp1) - (DIVISION_SIM(data->localData[0]->realVars[101] /* MatStm1.J_dew[1] variable */,data->localData[0]->realVars[109] /* MatStm1.L_dew[1] variable */,"MatStm1.L_dew[1]",equationIndexes)))) - data->localData[0]->realVars[101] /* MatStm1.J_dew[1] variable */);
  TRACE_POP
}
/*
equation index: 171
type: SIMPLE_ASSIGN
MatStm1._J_dew[2] = MatStm1.r[2] / (MatStm1.r[1] * MatStm1.dewLiqMolFrac[1] + MatStm1.r[2] * MatStm1.dewLiqMolFrac[2])
*/
void Flowsheet_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->localData[0]->realVars[102] /* MatStm1.J_dew[2] variable */ = DIVISION_SIM(data->localData[0]->realVars[218] /* MatStm1.r[2] variable */,(data->localData[0]->realVars[217] /* MatStm1.r[1] variable */) * (data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) + (data->localData[0]->realVars[218] /* MatStm1.r[2] variable */) * (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */),"MatStm1.r[1] * MatStm1.dewLiqMolFrac[1] + MatStm1.r[2] * MatStm1.dewLiqMolFrac[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 172
type: SIMPLE_ASSIGN
MatStm1._gammac_dew[2] = exp(1.0 + log(MatStm1.J_dew[2]) + (-5.0) * MatStm1.q[2] * (1.0 + log(MatStm1.J_dew[2] / MatStm1.L_dew[2]) - MatStm1.J_dew[2] / MatStm1.L_dew[2]) - MatStm1.J_dew[2])
*/
void Flowsheet_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[102] /* MatStm1.J_dew[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J_dew[2]) was %g should be > 0", tmp0);
  }tmp1 = DIVISION_SIM(data->localData[0]->realVars[102] /* MatStm1.J_dew[2] variable */,data->localData[0]->realVars[110] /* MatStm1.L_dew[2] variable */,"MatStm1.L_dew[2]",equationIndexes);
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.J_dew[2] / MatStm1.L_dew[2]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[195] /* MatStm1.gammac_dew[2] variable */ = exp(1.0 + log(tmp0) + (-5.0) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (1.0 + log(tmp1) - (DIVISION_SIM(data->localData[0]->realVars[102] /* MatStm1.J_dew[2] variable */,data->localData[0]->realVars[110] /* MatStm1.L_dew[2] variable */,"MatStm1.L_dew[2]",equationIndexes)))) - data->localData[0]->realVars[102] /* MatStm1.J_dew[2] variable */);
  TRACE_POP
}
/*
equation index: 173
type: SIMPLE_ASSIGN
MatStm1._theta_dew[2] = (MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] * MatStm1.e[2,1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2] * MatStm1.e[2,2]) / (MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->localData[0]->realVars[259] /* MatStm1.theta_dew[2] variable */ = DIVISION_SIM((data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[178] /* MatStm1.e[2,1] variable */)) + (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[179] /* MatStm1.e[2,2] variable */)),(data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 174
type: SIMPLE_ASSIGN
MatStm1._theta_dew[3] = (MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] * MatStm1.e[3,1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2] * MatStm1.e[3,2]) / (MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->localData[0]->realVars[260] /* MatStm1.theta_dew[3] variable */ = DIVISION_SIM((data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[180] /* MatStm1.e[3,1] variable */)) + (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[181] /* MatStm1.e[3,2] variable */)),(data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 175
type: SIMPLE_ASSIGN
MatStm1._theta_dew[4] = (MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] * MatStm1.e[4,1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2] * MatStm1.e[4,2]) / (MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2])
*/
void Flowsheet_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->localData[0]->realVars[261] /* MatStm1.theta_dew[4] variable */ = DIVISION_SIM((data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) * ((data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) * (data->localData[0]->realVars[182] /* MatStm1.e[4,1] variable */)) + (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */) * ((data->localData[0]->realVars[216] /* MatStm1.q[2] variable */) * (data->localData[0]->realVars[183] /* MatStm1.e[4,2] variable */)),(data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */) * (data->localData[0]->realVars[215] /* MatStm1.q[1] variable */) + (data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */) * (data->localData[0]->realVars[216] /* MatStm1.q[2] variable */),"MatStm1.dewLiqMolFrac[1] * MatStm1.q[1] + MatStm1.dewLiqMolFrac[2] * MatStm1.q[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 176
type: SIMPLE_ASSIGN
MatStm1._S_dew[1] = MatStm1.theta_dew[1] * MatStm1.tau[1,1] + MatStm1.theta_dew[2] * MatStm1.tau[2,1] + MatStm1.theta_dew[3] * MatStm1.tau[3,1] + MatStm1.theta_dew[4] * MatStm1.tau[4,1]
*/
void Flowsheet_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->localData[0]->realVars[127] /* MatStm1.S_dew[1] variable */ = (data->localData[0]->realVars[258] /* MatStm1.theta_dew[1] variable */) * (data->localData[0]->realVars[234] /* MatStm1.tau[1,1] variable */) + (data->localData[0]->realVars[259] /* MatStm1.theta_dew[2] variable */) * (data->localData[0]->realVars[238] /* MatStm1.tau[2,1] variable */) + (data->localData[0]->realVars[260] /* MatStm1.theta_dew[3] variable */) * (data->localData[0]->realVars[242] /* MatStm1.tau[3,1] variable */) + (data->localData[0]->realVars[261] /* MatStm1.theta_dew[4] variable */) * (data->localData[0]->realVars[246] /* MatStm1.tau[4,1] variable */);
  TRACE_POP
}
/*
equation index: 177
type: SIMPLE_ASSIGN
MatStm1._S_dew[2] = MatStm1.theta_dew[1] * MatStm1.tau[1,2] + MatStm1.theta_dew[2] * MatStm1.tau[2,2] + MatStm1.theta_dew[3] * MatStm1.tau[3,2] + MatStm1.theta_dew[4] * MatStm1.tau[4,2]
*/
void Flowsheet_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->localData[0]->realVars[128] /* MatStm1.S_dew[2] variable */ = (data->localData[0]->realVars[258] /* MatStm1.theta_dew[1] variable */) * (data->localData[0]->realVars[235] /* MatStm1.tau[1,2] variable */) + (data->localData[0]->realVars[259] /* MatStm1.theta_dew[2] variable */) * (data->localData[0]->realVars[239] /* MatStm1.tau[2,2] variable */) + (data->localData[0]->realVars[260] /* MatStm1.theta_dew[3] variable */) * (data->localData[0]->realVars[243] /* MatStm1.tau[3,2] variable */) + (data->localData[0]->realVars[261] /* MatStm1.theta_dew[4] variable */) * (data->localData[0]->realVars[247] /* MatStm1.tau[4,2] variable */);
  TRACE_POP
}
/*
equation index: 178
type: SIMPLE_ASSIGN
MatStm1._S_dew[3] = MatStm1.theta_dew[1] * MatStm1.tau[1,3] + MatStm1.theta_dew[2] * MatStm1.tau[2,3] + MatStm1.theta_dew[3] * MatStm1.tau[3,3] + MatStm1.theta_dew[4] * MatStm1.tau[4,3]
*/
void Flowsheet_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->localData[0]->realVars[129] /* MatStm1.S_dew[3] variable */ = (data->localData[0]->realVars[258] /* MatStm1.theta_dew[1] variable */) * (data->localData[0]->realVars[236] /* MatStm1.tau[1,3] variable */) + (data->localData[0]->realVars[259] /* MatStm1.theta_dew[2] variable */) * (data->localData[0]->realVars[240] /* MatStm1.tau[2,3] variable */) + (data->localData[0]->realVars[260] /* MatStm1.theta_dew[3] variable */) * (data->localData[0]->realVars[244] /* MatStm1.tau[3,3] variable */) + (data->localData[0]->realVars[261] /* MatStm1.theta_dew[4] variable */) * (data->localData[0]->realVars[248] /* MatStm1.tau[4,3] variable */);
  TRACE_POP
}
/*
equation index: 179
type: SIMPLE_ASSIGN
MatStm1._S_dew[4] = MatStm1.theta_dew[1] * MatStm1.tau[1,4] + MatStm1.theta_dew[2] * MatStm1.tau[2,4] + MatStm1.theta_dew[3] * MatStm1.tau[3,4] + MatStm1.theta_dew[4] * MatStm1.tau[4,4]
*/
void Flowsheet_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->localData[0]->realVars[130] /* MatStm1.S_dew[4] variable */ = (data->localData[0]->realVars[258] /* MatStm1.theta_dew[1] variable */) * (data->localData[0]->realVars[237] /* MatStm1.tau[1,4] variable */) + (data->localData[0]->realVars[259] /* MatStm1.theta_dew[2] variable */) * (data->localData[0]->realVars[241] /* MatStm1.tau[2,4] variable */) + (data->localData[0]->realVars[260] /* MatStm1.theta_dew[3] variable */) * (data->localData[0]->realVars[245] /* MatStm1.tau[3,4] variable */) + (data->localData[0]->realVars[261] /* MatStm1.theta_dew[4] variable */) * (data->localData[0]->realVars[249] /* MatStm1.tau[4,4] variable */);
  TRACE_POP
}
/*
equation index: 180
type: ALGORITHM

  MatStm1.gammar_dew[2] := $START.MatStm1.gammar_dew[2];
  MatStm1.gammar_dew[1] := $START.MatStm1.gammar_dew[1];
  MatStm1.sum_dew[2] := $START.MatStm1.sum_dew[2];
  MatStm1.sum_dew[1] := $START.MatStm1.sum_dew[1];
  MatStm1.sum_dew[:] := {0.0, 0.0};
  for j in 1:4 loop
    for i in 1:2 loop
      MatStm1.sum_dew[i] := MatStm1.sum_dew[i] + MatStm1.theta_dew[j] * MatStm1.B[i,j] / MatStm1.S_dew[j] - MatStm1.e[j,i] * log(MatStm1.B[i,j] / MatStm1.S_dew[j]);
      MatStm1.gammar_dew[i] := exp(MatStm1.q[i] * (1.0 - MatStm1.sum_dew[i]));
    end for;
  end for;
*/
void Flowsheet_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  real_array tmp0;
  index_spec_t tmp1;
  real_array tmp2;
  modelica_real tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  data->localData[0]->realVars[201] /* MatStm1.gammar_dew[2] variable */ = data->modelData->realVarsData[201].attribute /* MatStm1.gammar_dew[2] variable */.start;

  data->localData[0]->realVars[200] /* MatStm1.gammar_dew[1] variable */ = data->modelData->realVarsData[200].attribute /* MatStm1.gammar_dew[1] variable */.start;

  data->localData[0]->realVars[233] /* MatStm1.sum_dew[2] variable */ = data->modelData->realVarsData[233].attribute /* MatStm1.sum_dew[2] variable */.start;

  data->localData[0]->realVars[232] /* MatStm1.sum_dew[1] variable */ = data->modelData->realVarsData[232].attribute /* MatStm1.sum_dew[1] variable */.start;

  array_alloc_scalar_real_array(&tmp0, 2, (modelica_real)0.0, (modelica_real)0.0);
  create_index_spec(&tmp1, 1, (1), (int*)0, 'W');
  real_array_create(&tmp2, (modelica_real*)&data->localData[0]->realVars[232] /* MatStm1.sum_dew[1] variable */, 1, 2);
  indexed_assign_real_array(tmp0, &tmp2, &tmp1);

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 4);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer $Pj;
    for($Pj = ((modelica_integer) 1); in_range_integer($Pj, tmp7, tmp9); $Pj += tmp8)
    {
      tmp4 = ((modelica_integer) 1); tmp5 = 1; tmp6 = ((modelica_integer) 2);
      if(!(((tmp5 > 0) && (tmp4 > tmp6)) || ((tmp5 < 0) && (tmp4 < tmp6))))
      {
        modelica_integer $Pi;
        for($Pi = ((modelica_integer) 1); in_range_integer($Pi, tmp4, tmp6); $Pi += tmp5)
        {
          tmp3 = DIVISION_SIM((&data->localData[0]->realVars[89] /* MatStm1.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[127] /* MatStm1.S_dew[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm1.S_dew[j]",equationIndexes);
          if(!(tmp3 > 0.0))
          {
            FILE_INFO info = {"",0,0,0,0,0};
            omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
            throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.B[i,j] / MatStm1.S_dew[j]) was %g should be > 0", tmp3);
          }
          (&data->localData[0]->realVars[232] /* MatStm1.sum_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = (&data->localData[0]->realVars[232] /* MatStm1.sum_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] + ((&data->localData[0]->realVars[258] /* MatStm1.theta_dew[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)]) * (DIVISION_SIM((&data->localData[0]->realVars[89] /* MatStm1.B[1,1] variable */)[calc_base_index_dims_subs(2, 2, 4, (modelica_integer)$Pi, (modelica_integer)$Pj)],(&data->localData[0]->realVars[127] /* MatStm1.S_dew[1] variable */)[calc_base_index_dims_subs(1, 4, (modelica_integer)$Pj)],"MatStm1.S_dew[j]",equationIndexes)) - (((&data->localData[0]->realVars[176] /* MatStm1.e[1,1] variable */)[calc_base_index_dims_subs(2, 4, 2, (modelica_integer)$Pj, (modelica_integer)$Pi)]) * (log(tmp3)));

          (&data->localData[0]->realVars[200] /* MatStm1.gammar_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)] = exp(((&data->localData[0]->realVars[215] /* MatStm1.q[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]) * (1.0 - (&data->localData[0]->realVars[232] /* MatStm1.sum_dew[1] variable */)[calc_base_index_dims_subs(1, 2, (modelica_integer)$Pi)]));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 181
type: SIMPLE_ASSIGN
MatStm1._gammaDew[2] = exp(log(MatStm1.gammar_dew[2]) + log(MatStm1.gammac_dew[2]))
*/
void Flowsheet_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[201] /* MatStm1.gammar_dew[2] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammar_dew[2]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[195] /* MatStm1.gammac_dew[2] variable */;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammac_dew[2]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[189] /* MatStm1.gammaDew[2] variable */ = exp(log(tmp0) + log(tmp1));
  TRACE_POP
}
/*
equation index: 182
type: SIMPLE_ASSIGN
MatStm1._gammaDew[1] = exp(log(MatStm1.gammar_dew[1]) + log(MatStm1.gammac_dew[1]))
*/
void Flowsheet_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = data->localData[0]->realVars[200] /* MatStm1.gammar_dew[1] variable */;
  if(!(tmp0 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammar_dew[1]) was %g should be > 0", tmp0);
  }tmp1 = data->localData[0]->realVars[194] /* MatStm1.gammac_dew[1] variable */;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(MatStm1.gammac_dew[1]) was %g should be > 0", tmp1);
  }
  data->localData[0]->realVars[188] /* MatStm1.gammaDew[1] variable */ = exp(log(tmp0) + log(tmp1));
  TRACE_POP
}
/*
equation index: 183
type: SIMPLE_ASSIGN
MatStm1._Pdew = 1.0 / (MatStm1.compMolFrac[1,1] * exp((-MatStm1.comp[1].VP[2]) - 0.003125 * MatStm1.comp[1].VP[3] - MatStm1.comp[1].VP[4] * 5.768320995793772 - MatStm1.comp[1].VP[5] * 320.0 ^ MatStm1.comp[1].VP[6]) / MatStm1.gammaDew[1] + MatStm1.compMolFrac[1,2] * exp((-MatStm1.comp[2].VP[2]) - 0.003125 * MatStm1.comp[2].VP[3] - MatStm1.comp[2].VP[4] * 5.768320995793772 - MatStm1.comp[2].VP[5] * 320.0 ^ MatStm1.comp[2].VP[6]) / MatStm1.gammaDew[2])
*/
void Flowsheet_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
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
  tmp0 = 320.0;
  tmp1 = data->simulationInfo->realParameter[311];
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
  }tmp7 = 320.0;
  tmp8 = data->simulationInfo->realParameter[317];
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
  data->localData[0]->realVars[116] /* MatStm1.Pdew variable */ = DIVISION_SIM(1.0,(data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) * (DIVISION_SIM(exp((-data->simulationInfo->realParameter[307]) - ((0.003125) * (data->simulationInfo->realParameter[308])) - ((data->simulationInfo->realParameter[309]) * (5.768320995793772)) - ((data->simulationInfo->realParameter[310]) * (tmp2))),data->localData[0]->realVars[188] /* MatStm1.gammaDew[1] variable */,"MatStm1.gammaDew[1]",equationIndexes)) + (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */) * (DIVISION_SIM(exp((-data->simulationInfo->realParameter[313]) - ((0.003125) * (data->simulationInfo->realParameter[314])) - ((data->simulationInfo->realParameter[315]) * (5.768320995793772)) - ((data->simulationInfo->realParameter[316]) * (tmp9))),data->localData[0]->realVars[189] /* MatStm1.gammaDew[2] variable */,"MatStm1.gammaDew[2]",equationIndexes)),"MatStm1.compMolFrac[1,1] * exp((-MatStm1.comp[1].VP[2]) - 0.003125 * MatStm1.comp[1].VP[3] - MatStm1.comp[1].VP[4] * 5.768320995793772 - MatStm1.comp[1].VP[5] * 320.0 ^ MatStm1.comp[1].VP[6]) / MatStm1.gammaDew[1] + MatStm1.compMolFrac[1,2] * exp((-MatStm1.comp[2].VP[2]) - 0.003125 * MatStm1.comp[2].VP[3] - MatStm1.comp[2].VP[4] * 5.768320995793772 - MatStm1.comp[2].VP[5] * 320.0 ^ MatStm1.comp[2].VP[6]) / MatStm1.gammaDew[2]",equationIndexes);
  TRACE_POP
}

void residualFunc191(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,191};
  int i;
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  /* iteration variables */
  for (i=0; i<7; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<7; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */ = xloc[0];
  data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */ = xloc[1];
  data->localData[0]->realVars[267] /* MatStm1.totMolFlo[3] variable */ = xloc[2];
  data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */ = xloc[3];
  data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */ = xloc[4];
  data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */ = xloc[5];
  data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */ = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Flowsheet_eqFunction_136(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_137(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_138(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_139(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_140(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_141(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_142(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_143(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_144(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_145(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_146(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_147(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_148(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_149(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_150(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_151(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_152(data, threadData);

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

  /* local constraints */
  Flowsheet_eqFunction_162(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_163(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_164(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_165(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_166(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_167(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_168(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_169(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_170(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_171(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_172(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_173(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_174(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_175(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_176(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_177(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_178(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_179(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_180(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_181(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_182(data, threadData);

  /* local constraints */
  Flowsheet_eqFunction_183(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[162] /* MatStm1.compMolFrac[1,1] variable */) * (DIVISION_SIM(data->localData[0]->realVars[116] /* MatStm1.Pdew variable */,(data->localData[0]->realVars[117] /* MatStm1.Psat[1] variable */) * (data->localData[0]->realVars[188] /* MatStm1.gammaDew[1] variable */),"MatStm1.Psat[1] * MatStm1.gammaDew[1]",equationIndexes)) - data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */;

  res[1] = data->localData[0]->realVars[161] /* MatStm1.compMolFlo[3,2] variable */ + data->localData[0]->realVars[159] /* MatStm1.compMolFlo[2,2] variable */ - data->localData[0]->realVars[157] /* MatStm1.compMolFlo[1,2] variable */;

  tmp0 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */;
  }
  else
  {
    tmp1 = GreaterEq(101325.0,data->localData[0]->realVars[116] /* MatStm1.Pdew variable */);
    tmp3 = (tmp1?data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */ - ((data->localData[0]->realVars[103] /* MatStm1.K[1] variable */) * (data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */)):data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */);
  }
  res[2] = tmp3;

  tmp4 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  res[3] = (tmp4?data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */ + data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */ - 1.0:data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */ + data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */ - 1.0);

  res[4] = data->localData[0]->realVars[160] /* MatStm1.compMolFlo[3,1] variable */ + data->localData[0]->realVars[158] /* MatStm1.compMolFlo[2,1] variable */ - data->localData[0]->realVars[156] /* MatStm1.compMolFlo[1,1] variable */;

  tmp5 = GreaterEq(101325.0,data->localData[0]->realVars[115] /* MatStm1.Pbubl variable */);
  tmp7 = (modelica_boolean)tmp5;
  if(tmp7)
  {
    tmp8 = data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */;
  }
  else
  {
    tmp6 = GreaterEq(101325.0,data->localData[0]->realVars[116] /* MatStm1.Pdew variable */);
    tmp8 = (tmp6?data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */ - ((data->localData[0]->realVars[104] /* MatStm1.K[2] variable */) * (data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */)):data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */);
  }
  res[5] = tmp8;

  res[6] = (data->localData[0]->realVars[163] /* MatStm1.compMolFrac[1,2] variable */) * (DIVISION_SIM(data->localData[0]->realVars[116] /* MatStm1.Pdew variable */,(data->localData[0]->realVars[118] /* MatStm1.Psat[2] variable */) * (data->localData[0]->realVars[189] /* MatStm1.gammaDew[2] variable */),"MatStm1.Psat[2] * MatStm1.gammaDew[2]",equationIndexes)) - data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS191(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,4,4,2,3,6,3,6};
  const int rowIndex[28] = {0,2,5,6,0,2,5,6,1,4,1,3,5,0,2,3,4,5,6,2,3,4,0,1,2,3,5,6};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((7+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(28*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 28;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(7*sizeof(int));
  inSysData->sparsePattern.maxColors = 6;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (7+1)*sizeof(int));
  
  for(i=2;i<7+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 28*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[6] = 1;
  inSysData->sparsePattern.colorCols[5] = 2;
  inSysData->sparsePattern.colorCols[4] = 3;
  inSysData->sparsePattern.colorCols[3] = 4;
  inSysData->sparsePattern.colorCols[1] = 5;
  inSysData->sparsePattern.colorCols[0] = 6;
  inSysData->sparsePattern.colorCols[2] = 6;
}
void initializeStaticDataNLS191(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for MatStm1.dewLiqMolFrac[2] */
  sysData->nominal[i] = data->modelData->realVarsData[175].attribute /* MatStm1.dewLiqMolFrac[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[175].attribute /* MatStm1.dewLiqMolFrac[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[175].attribute /* MatStm1.dewLiqMolFrac[2] */.max;
  /* static nls data for MatStm1.dewLiqMolFrac[1] */
  sysData->nominal[i] = data->modelData->realVarsData[174].attribute /* MatStm1.dewLiqMolFrac[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[174].attribute /* MatStm1.dewLiqMolFrac[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[174].attribute /* MatStm1.dewLiqMolFrac[1] */.max;
  /* static nls data for MatStm1.totMolFlo[3] */
  sysData->nominal[i] = data->modelData->realVarsData[267].attribute /* MatStm1.totMolFlo[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[267].attribute /* MatStm1.totMolFlo[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[267].attribute /* MatStm1.totMolFlo[3] */.max;
  /* static nls data for MatStm1.compMolFrac[3,2] */
  sysData->nominal[i] = data->modelData->realVarsData[167].attribute /* MatStm1.compMolFrac[3,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[167].attribute /* MatStm1.compMolFrac[3,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[167].attribute /* MatStm1.compMolFrac[3,2] */.max;
  /* static nls data for MatStm1.compMolFrac[2,1] */
  sysData->nominal[i] = data->modelData->realVarsData[164].attribute /* MatStm1.compMolFrac[2,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[164].attribute /* MatStm1.compMolFrac[2,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[164].attribute /* MatStm1.compMolFrac[2,1] */.max;
  /* static nls data for MatStm1.compMolFrac[3,1] */
  sysData->nominal[i] = data->modelData->realVarsData[166].attribute /* MatStm1.compMolFrac[3,1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[166].attribute /* MatStm1.compMolFrac[3,1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[166].attribute /* MatStm1.compMolFrac[3,1] */.max;
  /* static nls data for MatStm1.compMolFrac[2,2] */
  sysData->nominal[i] = data->modelData->realVarsData[165].attribute /* MatStm1.compMolFrac[2,2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[165].attribute /* MatStm1.compMolFrac[2,2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[165].attribute /* MatStm1.compMolFrac[2,2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS191(sysData);
}

void getIterationVarsNLS191(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[175] /* MatStm1.dewLiqMolFrac[2] variable */;
  array[1] = data->localData[0]->realVars[174] /* MatStm1.dewLiqMolFrac[1] variable */;
  array[2] = data->localData[0]->realVars[267] /* MatStm1.totMolFlo[3] variable */;
  array[3] = data->localData[0]->realVars[167] /* MatStm1.compMolFrac[3,2] variable */;
  array[4] = data->localData[0]->realVars[164] /* MatStm1.compMolFrac[2,1] variable */;
  array[5] = data->localData[0]->realVars[166] /* MatStm1.compMolFrac[3,1] variable */;
  array[6] = data->localData[0]->realVars[165] /* MatStm1.compMolFrac[2,2] variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void Flowsheet_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[5].equationIndex = 829;
  nonLinearSystemData[5].size = 15;
  nonLinearSystemData[5].homotopySupport = 0;
  nonLinearSystemData[5].mixedSystem = 1;
  nonLinearSystemData[5].residualFunc = residualFunc829;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = NULL;
  nonLinearSystemData[5].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[5].jacobianIndex = -1;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS829;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS829;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  
  nonLinearSystemData[4].equationIndex = 690;
  nonLinearSystemData[4].size = 14;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 1;
  nonLinearSystemData[4].residualFunc = residualFunc690;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = NULL;
  nonLinearSystemData[4].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[4].jacobianIndex = -1;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS690;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS690;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 579;
  nonLinearSystemData[3].size = 14;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc579;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS579;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS579;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 411;
  nonLinearSystemData[2].size = 10;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc411;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS411;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS411;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 294;
  nonLinearSystemData[1].size = 7;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc294;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS294;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS294;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 191;
  nonLinearSystemData[0].size = 7;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc191;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS191;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS191;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

