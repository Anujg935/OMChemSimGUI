/* Asserts */
#include "Flowsheet_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
<<<<<<< HEAD
equation index: 362
=======
equation index: 885
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: ALGORITHM

  assert(MatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: " + String(MatStm1.liqPhasMolFrac, "g"));
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
=======
void Flowsheet_eqFunction_885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,885};
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
<<<<<<< HEAD
    tmp0 = GreaterEq(data->localData[0]->realVars[60] /* MatStm1.liqPhasMolFrac variable */,0.0);
    tmp1 = LessEq(data->localData[0]->realVars[60] /* MatStm1.liqPhasMolFrac variable */,1.0);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[60] /* MatStm1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp0 = GreaterEq(data->localData[0]->realVars[18] /* MatStm1.T variable */,0.0);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[18] /* MatStm1.T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4168,3,4168,75,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 363
=======
equation index: 886
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: ALGORITHM

  assert(MatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: " + String(MatStm1.vapPhasMolFrac, "g"));
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp8;
  static int tmp9 = 0;
=======
void Flowsheet_eqFunction_886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,886};
  modelica_boolean tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,68,"Variable violating min constraint: 0.0 <= MatStm1.Pbubl, has value: ");
  modelica_string tmp6;
  static int tmp7 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp9)
  {
<<<<<<< HEAD
    tmp5 = GreaterEq(data->localData[0]->realVars[88] /* MatStm1.vapPhasMolFrac variable */,0.0);
    tmp6 = LessEq(data->localData[0]->realVars[88] /* MatStm1.vapPhasMolFrac variable */,1.0);
    if(!(tmp5 && tmp6))
    {
      tmp8 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[88] /* MatStm1.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp4 = GreaterEq(data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */,0.0);
    if(!tmp4)
    {
      tmp6 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp5),tmp6);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp9 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 364
=======
equation index: 887
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: ALGORITHM

  assert(MatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: " + String(MatStm1.liqPhasMasFrac, "g"));
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp13;
  static int tmp14 = 0;
=======
void Flowsheet_eqFunction_887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,887};
  modelica_boolean tmp8;
  static const MMC_DEFSTRINGLIT(tmp9,67,"Variable violating min constraint: 0.0 <= MatStm1.Pdew, has value: ");
  modelica_string tmp10;
  static int tmp11 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp14)
  {
<<<<<<< HEAD
    tmp10 = GreaterEq(data->localData[0]->realVars[59] /* MatStm1.liqPhasMasFrac variable */,0.0);
    tmp11 = LessEq(data->localData[0]->realVars[59] /* MatStm1.liqPhasMasFrac variable */,1.0);
    if(!(tmp10 && tmp11))
    {
      tmp13 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[59] /* MatStm1.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp12),tmp13);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp8 = GreaterEq(data->localData[0]->realVars[15] /* MatStm1.Pdew variable */,0.0);
    if(!tmp8)
    {
      tmp10 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp9),tmp10);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp14 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 365
=======
equation index: 888
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: ALGORITHM

  assert(MatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: " + String(MatStm1.vapPhasMasFrac, "g"));
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp18;
  static int tmp19 = 0;
=======
void Flowsheet_eqFunction_888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,888};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  static const MMC_DEFSTRINGLIT(tmp14,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp15;
  static int tmp16 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp19)
  {
<<<<<<< HEAD
    tmp15 = GreaterEq(data->localData[0]->realVars[87] /* MatStm1.vapPhasMasFrac variable */,0.0);
    tmp16 = LessEq(data->localData[0]->realVars[87] /* MatStm1.vapPhasMasFrac variable */,1.0);
    if(!(tmp15 && tmp16))
    {
      tmp18 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[87] /* MatStm1.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp12 = GreaterEq(data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */,0.0);
    tmp13 = LessEq(data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */,1.0);
    if(!(tmp12 && tmp13))
    {
      tmp15 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp14),tmp15);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp19 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 366
=======
equation index: 889
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: ALGORITHM

  assert(MatStm1.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: " + String(MatStm1.totMolFlo[2], "g"));
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: ");
  modelica_string tmp22;
  static int tmp23 = 0;
=======
void Flowsheet_eqFunction_889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,889};
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  static const MMC_DEFSTRINGLIT(tmp19,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp20;
  static int tmp21 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp23)
  {
<<<<<<< HEAD
    tmp20 = GreaterEq(data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */,0.0);
    if(!tmp20)
    {
      tmp22 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp17 = GreaterEq(data->localData[0]->realVars[95] /* MatStm1.vapPhasMolFrac variable */,0.0);
    tmp18 = LessEq(data->localData[0]->realVars[95] /* MatStm1.vapPhasMolFrac variable */,1.0);
    if(!(tmp17 && tmp18))
    {
      tmp20 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[95] /* MatStm1.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp19),tmp20);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp23 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 367
=======
equation index: 890
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: ALGORITHM

  assert(MatStm1.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: " + String(MatStm1.totMolFlo[3], "g"));
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  modelica_boolean tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: ");
  modelica_string tmp26;
  static int tmp27 = 0;
=======
void Flowsheet_eqFunction_890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,890};
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp25;
  static int tmp26 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp27)
  {
<<<<<<< HEAD
    tmp24 = GreaterEq(data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */,0.0);
    if(!tmp24)
    {
      tmp26 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp25),tmp26);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp22 = GreaterEq(data->localData[0]->realVars[67] /* MatStm1.liqPhasMasFrac variable */,0.0);
    tmp23 = LessEq(data->localData[0]->realVars[67] /* MatStm1.liqPhasMasFrac variable */,1.0);
    if(!(tmp22 && tmp23))
    {
      tmp25 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[67] /* MatStm1.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp24),tmp25);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp27 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 368
=======
equation index: 891
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: ALGORITHM

  assert(MatStm1.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: " + String(MatStm1.totMasFlo[1], "g"));
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
=======
void Flowsheet_eqFunction_891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,891};
  modelica_boolean tmp27;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: ");
  modelica_string tmp30;
  static int tmp31 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp31)
  {
<<<<<<< HEAD
    tmp28 = GreaterEq(data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */,0.0);
    if(!tmp28)
    {
      tmp30 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp27 = GreaterEq(data->localData[0]->realVars[94] /* MatStm1.vapPhasMasFrac variable */,0.0);
    tmp28 = LessEq(data->localData[0]->realVars[94] /* MatStm1.vapPhasMasFrac variable */,1.0);
    if(!(tmp27 && tmp28))
    {
      tmp30 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[94] /* MatStm1.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp31 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 369
=======
equation index: 892
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: ALGORITHM

  assert(MatStm1.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: " + String(MatStm1.totMasFlo[2], "g"));
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
=======
void Flowsheet_eqFunction_892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,892};
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_boolean tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: ");
  modelica_string tmp34;
  static int tmp35 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp35)
  {
<<<<<<< HEAD
    tmp32 = GreaterEq(data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */,0.0);
    if(!tmp32)
    {
      tmp34 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp33),tmp34);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp32 = GreaterEq(data->localData[0]->realVars[92] /* MatStm1.totMolFlo[2] variable */,0.0);
    if(!tmp32)
    {
      tmp34 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[92] /* MatStm1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp33),tmp34);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp35 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 370
=======
equation index: 893
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: ALGORITHM

  assert(MatStm1.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: " + String(MatStm1.totMasFlo[3], "g"));
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
=======
void Flowsheet_eqFunction_893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,893};
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: ");
  modelica_string tmp38;
  static int tmp39 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp39)
  {
<<<<<<< HEAD
    tmp36 = GreaterEq(data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */,0.0);
    if(!tmp36)
    {
      tmp38 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp36 = GreaterEq(data->localData[0]->realVars[93] /* MatStm1.totMolFlo[3] variable */,0.0);
    if(!tmp36)
    {
      tmp38 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[93] /* MatStm1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp39 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 371
=======
equation index: 894
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: ALGORITHM

  assert(MatStm1.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: " + String(MatStm1.MW[1], "g"));
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
=======
void Flowsheet_eqFunction_894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,894};
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: ");
  modelica_string tmp42;
  static int tmp43 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp43)
  {
<<<<<<< HEAD
    tmp40 = GreaterEq(data->localData[0]->realVars[2] /* MatStm1.MW[1] variable */,0.0);
    if(!tmp40)
    {
      tmp42 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[2] /* MatStm1.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp40 = GreaterEq(data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */,0.0);
    if(!tmp40)
    {
      tmp42 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp43 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 372
=======
equation index: 895
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: ALGORITHM

  assert(MatStm1.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: " + String(MatStm1.MW[2], "g"));
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
=======
void Flowsheet_eqFunction_895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,895};
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: ");
  modelica_string tmp46;
  static int tmp47 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp47)
  {
<<<<<<< HEAD
    tmp44 = GreaterEq(data->localData[0]->realVars[3] /* MatStm1.MW[2] variable */,0.0);
    if(!tmp44)
    {
      tmp46 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[3] /* MatStm1.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp44 = GreaterEq(data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */,0.0);
    if(!tmp44)
    {
      tmp46 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp47 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 373
=======
equation index: 896
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: ALGORITHM

  assert(MatStm1.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: " + String(MatStm1.MW[3], "g"));
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
=======
void Flowsheet_eqFunction_896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,896};
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: ");
  modelica_string tmp50;
  static int tmp51 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp51)
  {
<<<<<<< HEAD
    tmp48 = GreaterEq(data->localData[0]->realVars[4] /* MatStm1.MW[3] variable */,0.0);
    if(!tmp48)
    {
      tmp50 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[4] /* MatStm1.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp49),tmp50);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp48 = GreaterEq(data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */,0.0);
    if(!tmp48)
    {
      tmp50 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp49),tmp50);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp51 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 374
=======
equation index: 897
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,1], "g"));
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
=======
void Flowsheet_eqFunction_897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,897};
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  static const MMC_DEFSTRINGLIT(tmp54,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp55;
  static int tmp56 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp56)
  {
<<<<<<< HEAD
    tmp52 = GreaterEq(data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */,0.0);
    tmp53 = LessEq(data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */,1.0);
    if(!(tmp52 && tmp53))
    {
      tmp55 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp54),tmp55);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp52 = GreaterEq(data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */,0.0);
    if(!tmp52)
    {
      tmp54 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp53),tmp54);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp56 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 375
=======
equation index: 898
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,2], "g"));
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  static const MMC_DEFSTRINGLIT(tmp59,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp60;
  static int tmp61 = 0;
=======
void Flowsheet_eqFunction_898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,898};
  modelica_boolean tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: ");
  modelica_string tmp58;
  static int tmp59 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp61)
  {
<<<<<<< HEAD
    tmp57 = GreaterEq(data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */,0.0);
    tmp58 = LessEq(data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */,1.0);
    if(!(tmp57 && tmp58))
    {
      tmp60 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp59),tmp60);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp56 = GreaterEq(data->localData[0]->realVars[11] /* MatStm1.MW[2] variable */,0.0);
    if(!tmp56)
    {
      tmp58 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[11] /* MatStm1.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp57),tmp58);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp61 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 376
=======
equation index: 899
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,1], "g"));
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp65;
  static int tmp66 = 0;
=======
void Flowsheet_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  modelica_boolean tmp60;
  static const MMC_DEFSTRINGLIT(tmp61,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: ");
  modelica_string tmp62;
  static int tmp63 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp66)
  {
<<<<<<< HEAD
    tmp62 = GreaterEq(data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */,0.0);
    tmp63 = LessEq(data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */,1.0);
    if(!(tmp62 && tmp63))
    {
      tmp65 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp64),tmp65);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp60 = GreaterEq(data->localData[0]->realVars[12] /* MatStm1.MW[3] variable */,0.0);
    if(!tmp60)
    {
      tmp62 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[12] /* MatStm1.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp61),tmp62);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp66 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 377
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  static const MMC_DEFSTRINGLIT(tmp69,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp70;
  static int tmp71 = 0;
=======
equation index: 900
type: ALGORITHM

  assert(MatStm1.compMolFrac[1,1] >= 0.0 and MatStm1.compMolFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,900};
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  static const MMC_DEFSTRINGLIT(tmp66,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp67;
  static int tmp68 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp71)
  {
<<<<<<< HEAD
    tmp67 = GreaterEq(data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */,0.0);
    tmp68 = LessEq(data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */,1.0);
    if(!(tmp67 && tmp68))
    {
      tmp70 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp69),tmp70);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp64 = GreaterEq(data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */,0.0);
    tmp65 = LessEq(data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */,1.0);
    if(!(tmp64 && tmp65))
    {
      tmp67 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp66),tmp67);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[1,1] >= 0.0 and MatStm1.compMolFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp71 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 378
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  static const MMC_DEFSTRINGLIT(tmp74,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp75;
  static int tmp76 = 0;
=======
equation index: 901
type: ALGORITHM

  assert(MatStm1.compMolFrac[1,2] >= 0.0 and MatStm1.compMolFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[1,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,901};
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  static const MMC_DEFSTRINGLIT(tmp71,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp72;
  static int tmp73 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp76)
  {
<<<<<<< HEAD
    tmp72 = GreaterEq(data->localData[0]->realVars[17] /* MatStm1.compMasFrac[1,1] variable */,0.0);
    tmp73 = LessEq(data->localData[0]->realVars[17] /* MatStm1.compMasFrac[1,1] variable */,1.0);
    if(!(tmp72 && tmp73))
    {
      tmp75 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[17] /* MatStm1.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp74),tmp75);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp69 = GreaterEq(data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,2] variable */,0.0);
    tmp70 = LessEq(data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,2] variable */,1.0);
    if(!(tmp69 && tmp70))
    {
      tmp72 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp71),tmp72);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[1,2] >= 0.0 and MatStm1.compMolFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp76 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 379
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  static const MMC_DEFSTRINGLIT(tmp79,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp80;
  static int tmp81 = 0;
=======
equation index: 902
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,902};
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  static const MMC_DEFSTRINGLIT(tmp76,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp77;
  static int tmp78 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp81)
  {
<<<<<<< HEAD
    tmp77 = GreaterEq(data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */,0.0);
    tmp78 = LessEq(data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */,1.0);
    if(!(tmp77 && tmp78))
    {
      tmp80 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp79),tmp80);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp74 = GreaterEq(data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */,0.0);
    tmp75 = LessEq(data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */,1.0);
    if(!(tmp74 && tmp75))
    {
      tmp77 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp76),tmp77);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp81 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 380
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  static const MMC_DEFSTRINGLIT(tmp84,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp85;
  static int tmp86 = 0;
=======
equation index: 903
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,903};
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  static const MMC_DEFSTRINGLIT(tmp81,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp82;
  static int tmp83 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp86)
  {
<<<<<<< HEAD
    tmp82 = GreaterEq(data->localData[0]->realVars[19] /* MatStm1.compMasFrac[2,1] variable */,0.0);
    tmp83 = LessEq(data->localData[0]->realVars[19] /* MatStm1.compMasFrac[2,1] variable */,1.0);
    if(!(tmp82 && tmp83))
    {
      tmp85 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[19] /* MatStm1.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp84),tmp85);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp79 = GreaterEq(data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */,0.0);
    tmp80 = LessEq(data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */,1.0);
    if(!(tmp79 && tmp80))
    {
      tmp82 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp81),tmp82);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp86 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 381
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  static const MMC_DEFSTRINGLIT(tmp89,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp90;
  static int tmp91 = 0;
=======
equation index: 904
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,904};
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  static const MMC_DEFSTRINGLIT(tmp86,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp87;
  static int tmp88 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp91)
  {
<<<<<<< HEAD
    tmp87 = GreaterEq(data->localData[0]->realVars[20] /* MatStm1.compMasFrac[2,2] variable */,0.0);
    tmp88 = LessEq(data->localData[0]->realVars[20] /* MatStm1.compMasFrac[2,2] variable */,1.0);
    if(!(tmp87 && tmp88))
    {
      tmp90 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[20] /* MatStm1.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp89),tmp90);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp84 = GreaterEq(data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */,0.0);
    tmp85 = LessEq(data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */,1.0);
    if(!(tmp84 && tmp85))
    {
      tmp87 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp86),tmp87);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp91 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 382
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  static const MMC_DEFSTRINGLIT(tmp94,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp95;
  static int tmp96 = 0;
=======
equation index: 905
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,905};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  static const MMC_DEFSTRINGLIT(tmp91,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp92;
  static int tmp93 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp96)
  {
<<<<<<< HEAD
    tmp92 = GreaterEq(data->localData[0]->realVars[21] /* MatStm1.compMasFrac[3,1] variable */,0.0);
    tmp93 = LessEq(data->localData[0]->realVars[21] /* MatStm1.compMasFrac[3,1] variable */,1.0);
    if(!(tmp92 && tmp93))
    {
      tmp95 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[21] /* MatStm1.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp94),tmp95);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp89 = GreaterEq(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */,0.0);
    tmp90 = LessEq(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */,1.0);
    if(!(tmp89 && tmp90))
    {
      tmp92 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp91),tmp92);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp96 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 383
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  static const MMC_DEFSTRINGLIT(tmp99,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp100;
  static int tmp101 = 0;
=======
equation index: 906
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,906};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  static const MMC_DEFSTRINGLIT(tmp96,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp97;
  static int tmp98 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp101)
  {
<<<<<<< HEAD
    tmp97 = GreaterEq(data->localData[0]->realVars[22] /* MatStm1.compMasFrac[3,2] variable */,0.0);
    tmp98 = LessEq(data->localData[0]->realVars[22] /* MatStm1.compMasFrac[3,2] variable */,1.0);
    if(!(tmp97 && tmp98))
    {
      tmp100 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[22] /* MatStm1.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp99),tmp100);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp94 = GreaterEq(data->localData[0]->realVars[25] /* MatStm1.compMasFrac[1,1] variable */,0.0);
    tmp95 = LessEq(data->localData[0]->realVars[25] /* MatStm1.compMasFrac[1,1] variable */,1.0);
    if(!(tmp94 && tmp95))
    {
      tmp97 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[25] /* MatStm1.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp96),tmp97);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp101 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 384
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: " + String(MatStm1.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  modelica_boolean tmp102;
  static const MMC_DEFSTRINGLIT(tmp103,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: ");
  modelica_string tmp104;
  static int tmp105 = 0;
=======
equation index: 907
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,907};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  static const MMC_DEFSTRINGLIT(tmp101,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp102;
  static int tmp103 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp105)
  {
<<<<<<< HEAD
    tmp102 = GreaterEq(data->localData[0]->realVars[37] /* MatStm1.compMolFlo[2,1] variable */,0.0);
    if(!tmp102)
    {
      tmp104 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[37] /* MatStm1.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp103),tmp104);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp99 = GreaterEq(data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */,0.0);
    tmp100 = LessEq(data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */,1.0);
    if(!(tmp99 && tmp100))
    {
      tmp102 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp101),tmp102);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp105 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 385
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: " + String(MatStm1.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  modelica_boolean tmp106;
  static const MMC_DEFSTRINGLIT(tmp107,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: ");
  modelica_string tmp108;
  static int tmp109 = 0;
=======
equation index: 908
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,908};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  static const MMC_DEFSTRINGLIT(tmp106,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp107;
  static int tmp108 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp109)
  {
<<<<<<< HEAD
    tmp106 = GreaterEq(data->localData[0]->realVars[38] /* MatStm1.compMolFlo[2,2] variable */,0.0);
    if(!tmp106)
    {
      tmp108 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[38] /* MatStm1.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp107),tmp108);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp104 = GreaterEq(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[2,1] variable */,0.0);
    tmp105 = LessEq(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[2,1] variable */,1.0);
    if(!(tmp104 && tmp105))
    {
      tmp107 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp106),tmp107);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp109 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 386
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: " + String(MatStm1.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  modelica_boolean tmp110;
  static const MMC_DEFSTRINGLIT(tmp111,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: ");
=======
equation index: 909
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,909};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  static const MMC_DEFSTRINGLIT(tmp111,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: ");
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_string tmp112;
  static int tmp113 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp113)
  {
<<<<<<< HEAD
    tmp110 = GreaterEq(data->localData[0]->realVars[39] /* MatStm1.compMolFlo[3,1] variable */,0.0);
    if(!tmp110)
    {
      tmp112 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[39] /* MatStm1.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp111),tmp112);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp109 = GreaterEq(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[2,2] variable */,0.0);
    tmp110 = LessEq(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[2,2] variable */,1.0);
    if(!(tmp109 && tmp110))
    {
      tmp112 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp111),tmp112);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp113 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 387
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: " + String(MatStm1.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  modelica_boolean tmp114;
  static const MMC_DEFSTRINGLIT(tmp115,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: ");
  modelica_string tmp116;
  static int tmp117 = 0;
=======
equation index: 910
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  static const MMC_DEFSTRINGLIT(tmp116,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp117;
  static int tmp118 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp118)
  {
<<<<<<< HEAD
    tmp114 = GreaterEq(data->localData[0]->realVars[40] /* MatStm1.compMolFlo[3,2] variable */,0.0);
    if(!tmp114)
    {
      tmp116 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[40] /* MatStm1.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp115),tmp116);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp114 = GreaterEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[3,1] variable */,0.0);
    tmp115 = LessEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[3,1] variable */,1.0);
    if(!(tmp114 && tmp115))
    {
      tmp117 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp116),tmp117);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp118 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 388
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: " + String(MatStm1.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  modelica_boolean tmp118;
  static const MMC_DEFSTRINGLIT(tmp119,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: ");
  modelica_string tmp120;
  static int tmp121 = 0;
=======
equation index: 911
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  static const MMC_DEFSTRINGLIT(tmp121,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp122;
  static int tmp123 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp123)
  {
<<<<<<< HEAD
    tmp118 = GreaterEq(data->localData[0]->realVars[13] /* MatStm1.compMasFlo[2,1] variable */,0.0);
    if(!tmp118)
    {
      tmp120 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[13] /* MatStm1.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp119),tmp120);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp119 = GreaterEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[3,2] variable */,0.0);
    tmp120 = LessEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[3,2] variable */,1.0);
    if(!(tmp119 && tmp120))
    {
      tmp122 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp121),tmp122);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp123 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 389
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: " + String(MatStm1.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  modelica_boolean tmp122;
  static const MMC_DEFSTRINGLIT(tmp123,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: ");
  modelica_string tmp124;
  static int tmp125 = 0;
=======
equation index: 912
type: ALGORITHM

  assert(MatStm1.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,1], has value: " + String(MatStm1.compMolFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  modelica_boolean tmp124;
  static const MMC_DEFSTRINGLIT(tmp125,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,1], has value: ");
  modelica_string tmp126;
  static int tmp127 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp127)
  {
<<<<<<< HEAD
    tmp122 = GreaterEq(data->localData[0]->realVars[14] /* MatStm1.compMasFlo[2,2] variable */,0.0);
    if(!tmp122)
    {
      tmp124 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[14] /* MatStm1.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp123),tmp124);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp124 = GreaterEq(data->localData[0]->realVars[43] /* MatStm1.compMolFlo[1,1] variable */,0.0);
    if(!tmp124)
    {
      tmp126 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[43] /* MatStm1.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp125),tmp126);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp127 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 390
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: " + String(MatStm1.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  modelica_boolean tmp126;
  static const MMC_DEFSTRINGLIT(tmp127,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: ");
  modelica_string tmp128;
  static int tmp129 = 0;
=======
equation index: 913
type: ALGORITHM

  assert(MatStm1.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,2], has value: " + String(MatStm1.compMolFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  modelica_boolean tmp128;
  static const MMC_DEFSTRINGLIT(tmp129,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,2], has value: ");
  modelica_string tmp130;
  static int tmp131 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp131)
  {
<<<<<<< HEAD
    tmp126 = GreaterEq(data->localData[0]->realVars[15] /* MatStm1.compMasFlo[3,1] variable */,0.0);
    if(!tmp126)
    {
      tmp128 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[15] /* MatStm1.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp127),tmp128);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp128 = GreaterEq(data->localData[0]->realVars[44] /* MatStm1.compMolFlo[1,2] variable */,0.0);
    if(!tmp128)
    {
      tmp130 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[44] /* MatStm1.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp129),tmp130);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp131 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 391
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: " + String(MatStm1.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  modelica_boolean tmp130;
  static const MMC_DEFSTRINGLIT(tmp131,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: ");
  modelica_string tmp132;
  static int tmp133 = 0;
=======
equation index: 914
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: " + String(MatStm1.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  modelica_boolean tmp132;
  static const MMC_DEFSTRINGLIT(tmp133,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: ");
  modelica_string tmp134;
  static int tmp135 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp135)
  {
<<<<<<< HEAD
    tmp130 = GreaterEq(data->localData[0]->realVars[16] /* MatStm1.compMasFlo[3,2] variable */,0.0);
    if(!tmp130)
    {
      tmp132 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[16] /* MatStm1.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp131),tmp132);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp132 = GreaterEq(data->localData[0]->realVars[45] /* MatStm1.compMolFlo[2,1] variable */,0.0);
    if(!tmp132)
    {
      tmp134 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[45] /* MatStm1.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp133),tmp134);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp135 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 361
type: ALGORITHM

  assert(MatStm1.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: " + String(MatStm1.K[2], "g"));
*/
void Flowsheet_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  modelica_boolean tmp134;
  static const MMC_DEFSTRINGLIT(tmp135,67,"Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: ");
  modelica_string tmp136;
  static int tmp137 = 0;
=======
equation index: 915
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: " + String(MatStm1.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  modelica_boolean tmp136;
  static const MMC_DEFSTRINGLIT(tmp137,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: ");
  modelica_string tmp138;
  static int tmp139 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp139)
  {
<<<<<<< HEAD
    tmp134 = GreaterEq(data->localData[0]->realVars[1] /* MatStm1.K[2] variable */,0.0);
    if(!tmp134)
    {
      tmp136 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1] /* MatStm1.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp135),tmp136);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp136 = GreaterEq(data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,2] variable */,0.0);
    if(!tmp136)
    {
      tmp138 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp137),tmp138);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp139 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 360
type: ALGORITHM

  assert(MatStm1.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: " + String(MatStm1.K[1], "g"));
*/
void Flowsheet_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  modelica_boolean tmp138;
  static const MMC_DEFSTRINGLIT(tmp139,67,"Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: ");
  modelica_string tmp140;
  static int tmp141 = 0;
=======
equation index: 916
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: " + String(MatStm1.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  modelica_boolean tmp140;
  static const MMC_DEFSTRINGLIT(tmp141,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: ");
  modelica_string tmp142;
  static int tmp143 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp143)
  {
<<<<<<< HEAD
    tmp138 = GreaterEq(data->localData[0]->realVars[0] /* MatStm1.K[1] variable */,0.0);
    if(!tmp138)
    {
      tmp140 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[0] /* MatStm1.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp139),tmp140);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp140 = GreaterEq(data->localData[0]->realVars[47] /* MatStm1.compMolFlo[3,1] variable */,0.0);
    if(!tmp140)
    {
      tmp142 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[47] /* MatStm1.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp141),tmp142);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp143 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 359
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: " + String(MatStm1.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  modelica_boolean tmp142;
  static const MMC_DEFSTRINGLIT(tmp143,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: ");
  modelica_string tmp144;
  static int tmp145 = 0;
=======
equation index: 917
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: " + String(MatStm1.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  modelica_boolean tmp144;
  static const MMC_DEFSTRINGLIT(tmp145,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: ");
  modelica_string tmp146;
  static int tmp147 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp147)
  {
<<<<<<< HEAD
    tmp142 = GreaterEq(data->localData[0]->realVars[12] /* MatStm1.compMasFlo[1,2] variable */,0.0);
    if(!tmp142)
    {
      tmp144 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[12] /* MatStm1.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp143),tmp144);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
=======
    tmp144 = GreaterEq(data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,2] variable */,0.0);
    if(!tmp144)
    {
      tmp146 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp145),tmp146);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp147 = 1;
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 358
=======
equation index: 918
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: " + String(MatStm1.compMasFlo[1,1], "g"));
*/
<<<<<<< HEAD
void Flowsheet_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  modelica_boolean tmp146;
  static const MMC_DEFSTRINGLIT(tmp147,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: ");
  modelica_string tmp148;
  static int tmp149 = 0;
=======
void Flowsheet_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  modelica_boolean tmp148;
  static const MMC_DEFSTRINGLIT(tmp149,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: ");
  modelica_string tmp150;
  static int tmp151 = 0;
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp151)
  {
<<<<<<< HEAD
    tmp146 = GreaterEq(data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */,0.0);
    if(!tmp146)
    {
      tmp148 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp147),tmp148);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
=======
    tmp148 = GreaterEq(data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */,0.0);
    if(!tmp148)
    {
      tmp150 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp149),tmp150);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp151 = 1;
    }
  }
  TRACE_POP
}
<<<<<<< HEAD
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int Flowsheet_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  Flowsheet_eqFunction_362(data, threadData);

  Flowsheet_eqFunction_363(data, threadData);

  Flowsheet_eqFunction_364(data, threadData);

  Flowsheet_eqFunction_365(data, threadData);

  Flowsheet_eqFunction_366(data, threadData);

  Flowsheet_eqFunction_367(data, threadData);

  Flowsheet_eqFunction_368(data, threadData);

  Flowsheet_eqFunction_369(data, threadData);

  Flowsheet_eqFunction_370(data, threadData);

  Flowsheet_eqFunction_371(data, threadData);

  Flowsheet_eqFunction_372(data, threadData);

  Flowsheet_eqFunction_373(data, threadData);

  Flowsheet_eqFunction_374(data, threadData);

  Flowsheet_eqFunction_375(data, threadData);

  Flowsheet_eqFunction_376(data, threadData);

  Flowsheet_eqFunction_377(data, threadData);

  Flowsheet_eqFunction_378(data, threadData);

  Flowsheet_eqFunction_379(data, threadData);

  Flowsheet_eqFunction_380(data, threadData);

  Flowsheet_eqFunction_381(data, threadData);

  Flowsheet_eqFunction_382(data, threadData);

  Flowsheet_eqFunction_383(data, threadData);

  Flowsheet_eqFunction_384(data, threadData);

  Flowsheet_eqFunction_385(data, threadData);

  Flowsheet_eqFunction_386(data, threadData);

  Flowsheet_eqFunction_387(data, threadData);

  Flowsheet_eqFunction_388(data, threadData);

  Flowsheet_eqFunction_389(data, threadData);

  Flowsheet_eqFunction_390(data, threadData);

  Flowsheet_eqFunction_391(data, threadData);

  Flowsheet_eqFunction_361(data, threadData);

  Flowsheet_eqFunction_360(data, threadData);

  Flowsheet_eqFunction_359(data, threadData);

  Flowsheet_eqFunction_358(data, threadData);
=======

/*
equation index: 919
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: " + String(MatStm1.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  modelica_boolean tmp152;
  static const MMC_DEFSTRINGLIT(tmp153,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: ");
  modelica_string tmp154;
  static int tmp155 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp155)
  {
    tmp152 = GreaterEq(data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,2] variable */,0.0);
    if(!tmp152)
    {
      tmp154 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp153),tmp154);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp155 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 920
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: " + String(MatStm1.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  modelica_boolean tmp156;
  static const MMC_DEFSTRINGLIT(tmp157,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: ");
  modelica_string tmp158;
  static int tmp159 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp159)
  {
    tmp156 = GreaterEq(data->localData[0]->realVars[21] /* MatStm1.compMasFlo[2,1] variable */,0.0);
    if(!tmp156)
    {
      tmp158 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[21] /* MatStm1.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp157),tmp158);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp159 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 921
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: " + String(MatStm1.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  modelica_boolean tmp160;
  static const MMC_DEFSTRINGLIT(tmp161,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: ");
  modelica_string tmp162;
  static int tmp163 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp163)
  {
    tmp160 = GreaterEq(data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,2] variable */,0.0);
    if(!tmp160)
    {
      tmp162 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp161),tmp162);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp163 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 922
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: " + String(MatStm1.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  modelica_boolean tmp164;
  static const MMC_DEFSTRINGLIT(tmp165,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: ");
  modelica_string tmp166;
  static int tmp167 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp167)
  {
    tmp164 = GreaterEq(data->localData[0]->realVars[23] /* MatStm1.compMasFlo[3,1] variable */,0.0);
    if(!tmp164)
    {
      tmp166 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[23] /* MatStm1.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp165),tmp166);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp167 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 923
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: " + String(MatStm1.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  modelica_boolean tmp168;
  static const MMC_DEFSTRINGLIT(tmp169,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: ");
  modelica_string tmp170;
  static int tmp171 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp171)
  {
    tmp168 = GreaterEq(data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,2] variable */,0.0);
    if(!tmp168)
    {
      tmp170 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp169),tmp170);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp171 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 924
type: ALGORITHM

  assert(MatStm1.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: " + String(MatStm1.K[1], "g"));
*/
void Flowsheet_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  modelica_boolean tmp172;
  static const MMC_DEFSTRINGLIT(tmp173,67,"Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: ");
  modelica_string tmp174;
  static int tmp175 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp175)
  {
    tmp172 = GreaterEq(data->localData[0]->realVars[8] /* MatStm1.K[1] variable */,0.0);
    if(!tmp172)
    {
      tmp174 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[8] /* MatStm1.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp173),tmp174);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp175 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 925
type: ALGORITHM

  assert(MatStm1.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: " + String(MatStm1.K[2], "g"));
*/
void Flowsheet_eqFunction_925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,925};
  modelica_boolean tmp176;
  static const MMC_DEFSTRINGLIT(tmp177,67,"Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: ");
  modelica_string tmp178;
  static int tmp179 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp179)
  {
    tmp176 = GreaterEq(data->localData[0]->realVars[9] /* MatStm1.K[2] variable */,0.0);
    if(!tmp176)
    {
      tmp178 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[9] /* MatStm1.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp177),tmp178);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp179 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 926
type: ALGORITHM

  assert(MatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: " + String(MatStm2.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  modelica_boolean tmp180;
  modelica_boolean tmp181;
  static const MMC_DEFSTRINGLIT(tmp182,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp183;
  static int tmp184 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp184)
  {
    tmp180 = GreaterEq(data->localData[0]->realVars[158] /* MatStm2.liqPhasMolFrac variable */,0.0);
    tmp181 = LessEq(data->localData[0]->realVars[158] /* MatStm2.liqPhasMolFrac variable */,1.0);
    if(!(tmp180 && tmp181))
    {
      tmp183 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[158] /* MatStm2.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp182),tmp183);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp184 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 927
type: ALGORITHM

  assert(MatStm2.vapPhasMolFrac >= 0.0 and MatStm2.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMolFrac <= 1.0, has value: " + String(MatStm2.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,927};
  modelica_boolean tmp185;
  modelica_boolean tmp186;
  static const MMC_DEFSTRINGLIT(tmp187,88,"Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp188;
  static int tmp189 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp189)
  {
    tmp185 = GreaterEq(data->localData[0]->realVars[186] /* MatStm2.vapPhasMolFrac variable */,0.0);
    tmp186 = LessEq(data->localData[0]->realVars[186] /* MatStm2.vapPhasMolFrac variable */,1.0);
    if(!(tmp185 && tmp186))
    {
      tmp188 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[186] /* MatStm2.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp187),tmp188);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.vapPhasMolFrac >= 0.0 and MatStm2.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp189 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 928
type: ALGORITHM

  assert(MatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: " + String(MatStm2.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,928};
  modelica_boolean tmp190;
  modelica_boolean tmp191;
  static const MMC_DEFSTRINGLIT(tmp192,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp193;
  static int tmp194 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp194)
  {
    tmp190 = GreaterEq(data->localData[0]->realVars[157] /* MatStm2.liqPhasMasFrac variable */,0.0);
    tmp191 = LessEq(data->localData[0]->realVars[157] /* MatStm2.liqPhasMasFrac variable */,1.0);
    if(!(tmp190 && tmp191))
    {
      tmp193 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[157] /* MatStm2.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp192),tmp193);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp194 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 929
type: ALGORITHM

  assert(MatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: " + String(MatStm2.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  modelica_boolean tmp195;
  modelica_boolean tmp196;
  static const MMC_DEFSTRINGLIT(tmp197,88,"Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp198;
  static int tmp199 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp199)
  {
    tmp195 = GreaterEq(data->localData[0]->realVars[185] /* MatStm2.vapPhasMasFrac variable */,0.0);
    tmp196 = LessEq(data->localData[0]->realVars[185] /* MatStm2.vapPhasMasFrac variable */,1.0);
    if(!(tmp195 && tmp196))
    {
      tmp198 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[185] /* MatStm2.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp197),tmp198);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp199 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 930
type: ALGORITHM

  assert(MatStm2.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: " + String(MatStm2.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,930};
  modelica_boolean tmp200;
  static const MMC_DEFSTRINGLIT(tmp201,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: ");
  modelica_string tmp202;
  static int tmp203 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp203)
  {
    tmp200 = GreaterEq(data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */,0.0);
    if(!tmp200)
    {
      tmp202 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp201),tmp202);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp203 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 931
type: ALGORITHM

  assert(MatStm2.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: " + String(MatStm2.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,931};
  modelica_boolean tmp204;
  static const MMC_DEFSTRINGLIT(tmp205,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: ");
  modelica_string tmp206;
  static int tmp207 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp207)
  {
    tmp204 = GreaterEq(data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */,0.0);
    if(!tmp204)
    {
      tmp206 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp205),tmp206);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp207 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 932
type: ALGORITHM

  assert(MatStm2.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: " + String(MatStm2.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,932};
  modelica_boolean tmp208;
  static const MMC_DEFSTRINGLIT(tmp209,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: ");
  modelica_string tmp210;
  static int tmp211 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp211)
  {
    tmp208 = GreaterEq(data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */,0.0);
    if(!tmp208)
    {
      tmp210 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp209),tmp210);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp211 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 933
type: ALGORITHM

  assert(MatStm2.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: " + String(MatStm2.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,933};
  modelica_boolean tmp212;
  static const MMC_DEFSTRINGLIT(tmp213,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: ");
  modelica_string tmp214;
  static int tmp215 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp215)
  {
    tmp212 = GreaterEq(data->localData[0]->realVars[180] /* MatStm2.totMasFlo[2] variable */,0.0);
    if(!tmp212)
    {
      tmp214 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[180] /* MatStm2.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp213),tmp214);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp215 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 934
type: ALGORITHM

  assert(MatStm2.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: " + String(MatStm2.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,934};
  modelica_boolean tmp216;
  static const MMC_DEFSTRINGLIT(tmp217,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: ");
  modelica_string tmp218;
  static int tmp219 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp219)
  {
    tmp216 = GreaterEq(data->localData[0]->realVars[181] /* MatStm2.totMasFlo[3] variable */,0.0);
    if(!tmp216)
    {
      tmp218 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[181] /* MatStm2.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp217),tmp218);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp219 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 935
type: ALGORITHM

  assert(MatStm2.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: " + String(MatStm2.MW[1], "g"));
*/
void Flowsheet_eqFunction_935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,935};
  modelica_boolean tmp220;
  static const MMC_DEFSTRINGLIT(tmp221,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: ");
  modelica_string tmp222;
  static int tmp223 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp223)
  {
    tmp220 = GreaterEq(data->localData[0]->realVars[100] /* MatStm2.MW[1] variable */,0.0);
    if(!tmp220)
    {
      tmp222 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[100] /* MatStm2.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp221),tmp222);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp223 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 936
type: ALGORITHM

  assert(MatStm2.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: " + String(MatStm2.MW[2], "g"));
*/
void Flowsheet_eqFunction_936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,936};
  modelica_boolean tmp224;
  static const MMC_DEFSTRINGLIT(tmp225,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: ");
  modelica_string tmp226;
  static int tmp227 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp227)
  {
    tmp224 = GreaterEq(data->localData[0]->realVars[101] /* MatStm2.MW[2] variable */,0.0);
    if(!tmp224)
    {
      tmp226 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[101] /* MatStm2.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp225),tmp226);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp227 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 937
type: ALGORITHM

  assert(MatStm2.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: " + String(MatStm2.MW[3], "g"));
*/
void Flowsheet_eqFunction_937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,937};
  modelica_boolean tmp228;
  static const MMC_DEFSTRINGLIT(tmp229,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: ");
  modelica_string tmp230;
  static int tmp231 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp231)
  {
    tmp228 = GreaterEq(data->localData[0]->realVars[102] /* MatStm2.MW[3] variable */,0.0);
    if(!tmp228)
    {
      tmp230 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[102] /* MatStm2.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp229),tmp230);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp231 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 938
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,938};
  modelica_boolean tmp232;
  modelica_boolean tmp233;
  static const MMC_DEFSTRINGLIT(tmp234,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp235;
  static int tmp236 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp236)
  {
    tmp232 = GreaterEq(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */,0.0);
    tmp233 = LessEq(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */,1.0);
    if(!(tmp232 && tmp233))
    {
      tmp235 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp234),tmp235);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp236 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 939
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,939};
  modelica_boolean tmp237;
  modelica_boolean tmp238;
  static const MMC_DEFSTRINGLIT(tmp239,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp240;
  static int tmp241 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp241)
  {
    tmp237 = GreaterEq(data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */,0.0);
    tmp238 = LessEq(data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */,1.0);
    if(!(tmp237 && tmp238))
    {
      tmp240 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp239),tmp240);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp241 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 940
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,940};
  modelica_boolean tmp242;
  modelica_boolean tmp243;
  static const MMC_DEFSTRINGLIT(tmp244,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp245;
  static int tmp246 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp246)
  {
    tmp242 = GreaterEq(data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */,0.0);
    tmp243 = LessEq(data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */,1.0);
    if(!(tmp242 && tmp243))
    {
      tmp245 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp244),tmp245);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp246 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 941
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,941};
  modelica_boolean tmp247;
  modelica_boolean tmp248;
  static const MMC_DEFSTRINGLIT(tmp249,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp250;
  static int tmp251 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp251)
  {
    tmp247 = GreaterEq(data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */,0.0);
    tmp248 = LessEq(data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */,1.0);
    if(!(tmp247 && tmp248))
    {
      tmp250 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp249),tmp250);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp251 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 942
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,942};
  modelica_boolean tmp252;
  modelica_boolean tmp253;
  static const MMC_DEFSTRINGLIT(tmp254,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp255;
  static int tmp256 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp256)
  {
    tmp252 = GreaterEq(data->localData[0]->realVars[115] /* MatStm2.compMasFrac[1,1] variable */,0.0);
    tmp253 = LessEq(data->localData[0]->realVars[115] /* MatStm2.compMasFrac[1,1] variable */,1.0);
    if(!(tmp252 && tmp253))
    {
      tmp255 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[115] /* MatStm2.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp254),tmp255);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp256 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 943
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,943};
  modelica_boolean tmp257;
  modelica_boolean tmp258;
  static const MMC_DEFSTRINGLIT(tmp259,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp260;
  static int tmp261 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp261)
  {
    tmp257 = GreaterEq(data->localData[0]->realVars[116] /* MatStm2.compMasFrac[1,2] variable */,0.0);
    tmp258 = LessEq(data->localData[0]->realVars[116] /* MatStm2.compMasFrac[1,2] variable */,1.0);
    if(!(tmp257 && tmp258))
    {
      tmp260 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[116] /* MatStm2.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp259),tmp260);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp261 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 944
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,944};
  modelica_boolean tmp262;
  modelica_boolean tmp263;
  static const MMC_DEFSTRINGLIT(tmp264,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp265;
  static int tmp266 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp266)
  {
    tmp262 = GreaterEq(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[2,1] variable */,0.0);
    tmp263 = LessEq(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[2,1] variable */,1.0);
    if(!(tmp262 && tmp263))
    {
      tmp265 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp264),tmp265);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp266 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 945
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,945};
  modelica_boolean tmp267;
  modelica_boolean tmp268;
  static const MMC_DEFSTRINGLIT(tmp269,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp270;
  static int tmp271 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp271)
  {
    tmp267 = GreaterEq(data->localData[0]->realVars[118] /* MatStm2.compMasFrac[2,2] variable */,0.0);
    tmp268 = LessEq(data->localData[0]->realVars[118] /* MatStm2.compMasFrac[2,2] variable */,1.0);
    if(!(tmp267 && tmp268))
    {
      tmp270 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[118] /* MatStm2.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp269),tmp270);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp271 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 946
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,946};
  modelica_boolean tmp272;
  modelica_boolean tmp273;
  static const MMC_DEFSTRINGLIT(tmp274,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp275;
  static int tmp276 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp276)
  {
    tmp272 = GreaterEq(data->localData[0]->realVars[119] /* MatStm2.compMasFrac[3,1] variable */,0.0);
    tmp273 = LessEq(data->localData[0]->realVars[119] /* MatStm2.compMasFrac[3,1] variable */,1.0);
    if(!(tmp272 && tmp273))
    {
      tmp275 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[119] /* MatStm2.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp274),tmp275);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp276 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 947
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,947};
  modelica_boolean tmp277;
  modelica_boolean tmp278;
  static const MMC_DEFSTRINGLIT(tmp279,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp280;
  static int tmp281 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp281)
  {
    tmp277 = GreaterEq(data->localData[0]->realVars[120] /* MatStm2.compMasFrac[3,2] variable */,0.0);
    tmp278 = LessEq(data->localData[0]->realVars[120] /* MatStm2.compMasFrac[3,2] variable */,1.0);
    if(!(tmp277 && tmp278))
    {
      tmp280 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[120] /* MatStm2.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp279),tmp280);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp281 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 948
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: " + String(MatStm2.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,948};
  modelica_boolean tmp282;
  static const MMC_DEFSTRINGLIT(tmp283,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: ");
  modelica_string tmp284;
  static int tmp285 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp285)
  {
    tmp282 = GreaterEq(data->localData[0]->realVars[135] /* MatStm2.compMolFlo[2,1] variable */,0.0);
    if(!tmp282)
    {
      tmp284 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[135] /* MatStm2.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp283),tmp284);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp285 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 949
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: " + String(MatStm2.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,949};
  modelica_boolean tmp286;
  static const MMC_DEFSTRINGLIT(tmp287,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: ");
  modelica_string tmp288;
  static int tmp289 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp289)
  {
    tmp286 = GreaterEq(data->localData[0]->realVars[136] /* MatStm2.compMolFlo[2,2] variable */,0.0);
    if(!tmp286)
    {
      tmp288 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[136] /* MatStm2.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp287),tmp288);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp289 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 950
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: " + String(MatStm2.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,950};
  modelica_boolean tmp290;
  static const MMC_DEFSTRINGLIT(tmp291,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: ");
  modelica_string tmp292;
  static int tmp293 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp293)
  {
    tmp290 = GreaterEq(data->localData[0]->realVars[137] /* MatStm2.compMolFlo[3,1] variable */,0.0);
    if(!tmp290)
    {
      tmp292 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[137] /* MatStm2.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp291),tmp292);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp293 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 951
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: " + String(MatStm2.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,951};
  modelica_boolean tmp294;
  static const MMC_DEFSTRINGLIT(tmp295,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: ");
  modelica_string tmp296;
  static int tmp297 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp297)
  {
    tmp294 = GreaterEq(data->localData[0]->realVars[138] /* MatStm2.compMolFlo[3,2] variable */,0.0);
    if(!tmp294)
    {
      tmp296 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[138] /* MatStm2.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp295),tmp296);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp297 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 952
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: " + String(MatStm2.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,952};
  modelica_boolean tmp298;
  static const MMC_DEFSTRINGLIT(tmp299,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: ");
  modelica_string tmp300;
  static int tmp301 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp301)
  {
    tmp298 = GreaterEq(data->localData[0]->realVars[111] /* MatStm2.compMasFlo[2,1] variable */,0.0);
    if(!tmp298)
    {
      tmp300 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[111] /* MatStm2.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp299),tmp300);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp301 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 953
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: " + String(MatStm2.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,953};
  modelica_boolean tmp302;
  static const MMC_DEFSTRINGLIT(tmp303,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: ");
  modelica_string tmp304;
  static int tmp305 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp305)
  {
    tmp302 = GreaterEq(data->localData[0]->realVars[112] /* MatStm2.compMasFlo[2,2] variable */,0.0);
    if(!tmp302)
    {
      tmp304 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[112] /* MatStm2.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp303),tmp304);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp305 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 954
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: " + String(MatStm2.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,954};
  modelica_boolean tmp306;
  static const MMC_DEFSTRINGLIT(tmp307,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: ");
  modelica_string tmp308;
  static int tmp309 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp309)
  {
    tmp306 = GreaterEq(data->localData[0]->realVars[113] /* MatStm2.compMasFlo[3,1] variable */,0.0);
    if(!tmp306)
    {
      tmp308 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[113] /* MatStm2.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp307),tmp308);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp309 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 955
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: " + String(MatStm2.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,955};
  modelica_boolean tmp310;
  static const MMC_DEFSTRINGLIT(tmp311,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: ");
  modelica_string tmp312;
  static int tmp313 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp313)
  {
    tmp310 = GreaterEq(data->localData[0]->realVars[114] /* MatStm2.compMasFlo[3,2] variable */,0.0);
    if(!tmp310)
    {
      tmp312 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[114] /* MatStm2.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp311),tmp312);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp313 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 956
type: ALGORITHM

  assert(Pump1.vapPress >= 0.0, "Variable violating min constraint: 0.0 <= Pump1.vapPress, has value: " + String(Pump1.vapPress, "g"));
*/
void Flowsheet_eqFunction_956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,956};
  modelica_boolean tmp314;
  static const MMC_DEFSTRINGLIT(tmp315,69,"Variable violating min constraint: 0.0 <= Pump1.vapPress, has value: ");
  modelica_string tmp316;
  static int tmp317 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp317)
  {
    tmp314 = GreaterEq(data->localData[0]->realVars[195] /* Pump1.vapPress variable */,0.0);
    if(!tmp314)
    {
      tmp316 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[195] /* Pump1.vapPress variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp315),tmp316);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",5132,7,5132,896,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nPump1.vapPress >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp317 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int Flowsheet_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  Flowsheet_eqFunction_885(data, threadData);

  Flowsheet_eqFunction_886(data, threadData);

  Flowsheet_eqFunction_887(data, threadData);

  Flowsheet_eqFunction_888(data, threadData);

  Flowsheet_eqFunction_889(data, threadData);

  Flowsheet_eqFunction_890(data, threadData);

  Flowsheet_eqFunction_891(data, threadData);

  Flowsheet_eqFunction_892(data, threadData);

  Flowsheet_eqFunction_893(data, threadData);

  Flowsheet_eqFunction_894(data, threadData);

  Flowsheet_eqFunction_895(data, threadData);

  Flowsheet_eqFunction_896(data, threadData);

  Flowsheet_eqFunction_897(data, threadData);

  Flowsheet_eqFunction_898(data, threadData);

  Flowsheet_eqFunction_899(data, threadData);

  Flowsheet_eqFunction_900(data, threadData);

  Flowsheet_eqFunction_901(data, threadData);

  Flowsheet_eqFunction_902(data, threadData);

  Flowsheet_eqFunction_903(data, threadData);

  Flowsheet_eqFunction_904(data, threadData);

  Flowsheet_eqFunction_905(data, threadData);

  Flowsheet_eqFunction_906(data, threadData);

  Flowsheet_eqFunction_907(data, threadData);

  Flowsheet_eqFunction_908(data, threadData);

  Flowsheet_eqFunction_909(data, threadData);

  Flowsheet_eqFunction_910(data, threadData);

  Flowsheet_eqFunction_911(data, threadData);

  Flowsheet_eqFunction_912(data, threadData);

  Flowsheet_eqFunction_913(data, threadData);

  Flowsheet_eqFunction_914(data, threadData);

  Flowsheet_eqFunction_915(data, threadData);

  Flowsheet_eqFunction_916(data, threadData);

  Flowsheet_eqFunction_917(data, threadData);

  Flowsheet_eqFunction_918(data, threadData);

  Flowsheet_eqFunction_919(data, threadData);

  Flowsheet_eqFunction_920(data, threadData);

  Flowsheet_eqFunction_921(data, threadData);

  Flowsheet_eqFunction_922(data, threadData);

  Flowsheet_eqFunction_923(data, threadData);

  Flowsheet_eqFunction_924(data, threadData);

  Flowsheet_eqFunction_925(data, threadData);

  Flowsheet_eqFunction_926(data, threadData);

  Flowsheet_eqFunction_927(data, threadData);

  Flowsheet_eqFunction_928(data, threadData);

  Flowsheet_eqFunction_929(data, threadData);

  Flowsheet_eqFunction_930(data, threadData);

  Flowsheet_eqFunction_931(data, threadData);

  Flowsheet_eqFunction_932(data, threadData);

  Flowsheet_eqFunction_933(data, threadData);

  Flowsheet_eqFunction_934(data, threadData);

  Flowsheet_eqFunction_935(data, threadData);

  Flowsheet_eqFunction_936(data, threadData);

  Flowsheet_eqFunction_937(data, threadData);

  Flowsheet_eqFunction_938(data, threadData);

  Flowsheet_eqFunction_939(data, threadData);

  Flowsheet_eqFunction_940(data, threadData);

  Flowsheet_eqFunction_941(data, threadData);

  Flowsheet_eqFunction_942(data, threadData);

  Flowsheet_eqFunction_943(data, threadData);

  Flowsheet_eqFunction_944(data, threadData);

  Flowsheet_eqFunction_945(data, threadData);

  Flowsheet_eqFunction_946(data, threadData);

  Flowsheet_eqFunction_947(data, threadData);

  Flowsheet_eqFunction_948(data, threadData);

  Flowsheet_eqFunction_949(data, threadData);

  Flowsheet_eqFunction_950(data, threadData);

  Flowsheet_eqFunction_951(data, threadData);

  Flowsheet_eqFunction_952(data, threadData);

  Flowsheet_eqFunction_953(data, threadData);

  Flowsheet_eqFunction_954(data, threadData);

  Flowsheet_eqFunction_955(data, threadData);

  Flowsheet_eqFunction_956(data, threadData);
>>>>>>> 157c77c00e5428e63a2324692100c0dc8276137c
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

