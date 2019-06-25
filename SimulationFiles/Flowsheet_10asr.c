/* Asserts */
#include "Flowsheet_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 869
type: ALGORITHM

  assert(MatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: " + String(MatStm1.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,869};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq(data->localData[0]->realVars[65] /* MatStm1.liqPhasMolFrac variable */,0.0);
    tmp1 = LessEq(data->localData[0]->realVars[65] /* MatStm1.liqPhasMolFrac variable */,1.0);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[65] /* MatStm1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 870
type: ALGORITHM

  assert(MatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: " + String(MatStm1.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,870};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp9)
  {
    tmp5 = GreaterEq(data->localData[0]->realVars[92] /* MatStm1.vapPhasMolFrac variable */,0.0);
    tmp6 = LessEq(data->localData[0]->realVars[92] /* MatStm1.vapPhasMolFrac variable */,1.0);
    if(!(tmp5 && tmp6))
    {
      tmp8 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[92] /* MatStm1.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp9 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 871
type: ALGORITHM

  assert(MatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: " + String(MatStm1.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,871};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp13;
  static int tmp14 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp14)
  {
    tmp10 = GreaterEq(data->localData[0]->realVars[64] /* MatStm1.liqPhasMasFrac variable */,0.0);
    tmp11 = LessEq(data->localData[0]->realVars[64] /* MatStm1.liqPhasMasFrac variable */,1.0);
    if(!(tmp10 && tmp11))
    {
      tmp13 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[64] /* MatStm1.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp12),tmp13);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp14 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 872
type: ALGORITHM

  assert(MatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: " + String(MatStm1.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,872};
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp19)
  {
    tmp15 = GreaterEq(data->localData[0]->realVars[91] /* MatStm1.vapPhasMasFrac variable */,0.0);
    tmp16 = LessEq(data->localData[0]->realVars[91] /* MatStm1.vapPhasMasFrac variable */,1.0);
    if(!(tmp15 && tmp16))
    {
      tmp18 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[91] /* MatStm1.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp19 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 873
type: ALGORITHM

  assert(MatStm1.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: " + String(MatStm1.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,873};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: ");
  modelica_string tmp22;
  static int tmp23 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp23)
  {
    tmp20 = GreaterEq(data->localData[0]->realVars[89] /* MatStm1.totMolFlo[2] variable */,0.0);
    if(!tmp20)
    {
      tmp22 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[89] /* MatStm1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp23 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 874
type: ALGORITHM

  assert(MatStm1.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: " + String(MatStm1.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,874};
  modelica_boolean tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: ");
  modelica_string tmp26;
  static int tmp27 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp27)
  {
    tmp24 = GreaterEq(data->localData[0]->realVars[90] /* MatStm1.totMolFlo[3] variable */,0.0);
    if(!tmp24)
    {
      tmp26 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[90] /* MatStm1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp25),tmp26);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp27 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 875
type: ALGORITHM

  assert(MatStm1.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: " + String(MatStm1.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,875};
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: ");
  modelica_string tmp30;
  static int tmp31 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp31)
  {
    tmp28 = GreaterEq(data->localData[0]->realVars[85] /* MatStm1.totMasFlo[1] variable */,0.0);
    if(!tmp28)
    {
      tmp30 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[85] /* MatStm1.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp31 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 876
type: ALGORITHM

  assert(MatStm1.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: " + String(MatStm1.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,876};
  modelica_boolean tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: ");
  modelica_string tmp34;
  static int tmp35 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp35)
  {
    tmp32 = GreaterEq(data->localData[0]->realVars[86] /* MatStm1.totMasFlo[2] variable */,0.0);
    if(!tmp32)
    {
      tmp34 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[86] /* MatStm1.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp33),tmp34);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp35 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 877
type: ALGORITHM

  assert(MatStm1.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: " + String(MatStm1.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,877};
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: ");
  modelica_string tmp38;
  static int tmp39 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp39)
  {
    tmp36 = GreaterEq(data->localData[0]->realVars[87] /* MatStm1.totMasFlo[3] variable */,0.0);
    if(!tmp36)
    {
      tmp38 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[87] /* MatStm1.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp39 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 878
type: ALGORITHM

  assert(MatStm1.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: " + String(MatStm1.MW[1], "g"));
*/
void Flowsheet_eqFunction_878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,878};
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: ");
  modelica_string tmp42;
  static int tmp43 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp43)
  {
    tmp40 = GreaterEq(data->localData[0]->realVars[7] /* MatStm1.MW[1] variable */,0.0);
    if(!tmp40)
    {
      tmp42 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[7] /* MatStm1.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp43 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 879
type: ALGORITHM

  assert(MatStm1.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: " + String(MatStm1.MW[2], "g"));
*/
void Flowsheet_eqFunction_879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,879};
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: ");
  modelica_string tmp46;
  static int tmp47 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp47)
  {
    tmp44 = GreaterEq(data->localData[0]->realVars[8] /* MatStm1.MW[2] variable */,0.0);
    if(!tmp44)
    {
      tmp46 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[8] /* MatStm1.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp47 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 880
type: ALGORITHM

  assert(MatStm1.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: " + String(MatStm1.MW[3], "g"));
*/
void Flowsheet_eqFunction_880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,880};
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: ");
  modelica_string tmp50;
  static int tmp51 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp51)
  {
    tmp48 = GreaterEq(data->localData[0]->realVars[9] /* MatStm1.MW[3] variable */,0.0);
    if(!tmp48)
    {
      tmp50 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[9] /* MatStm1.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp49),tmp50);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp51 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 881
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,881};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  static const MMC_DEFSTRINGLIT(tmp54,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp55;
  static int tmp56 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp56)
  {
    tmp52 = GreaterEq(data->localData[0]->realVars[48] /* MatStm1.compMolFrac[2,1] variable */,0.0);
    tmp53 = LessEq(data->localData[0]->realVars[48] /* MatStm1.compMolFrac[2,1] variable */,1.0);
    if(!(tmp52 && tmp53))
    {
      tmp55 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[48] /* MatStm1.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp54),tmp55);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp56 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 882
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,882};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  static const MMC_DEFSTRINGLIT(tmp59,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp60;
  static int tmp61 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp61)
  {
    tmp57 = GreaterEq(data->localData[0]->realVars[49] /* MatStm1.compMolFrac[2,2] variable */,0.0);
    tmp58 = LessEq(data->localData[0]->realVars[49] /* MatStm1.compMolFrac[2,2] variable */,1.0);
    if(!(tmp57 && tmp58))
    {
      tmp60 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[49] /* MatStm1.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp59),tmp60);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp61 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 883
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,883};
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp65;
  static int tmp66 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp66)
  {
    tmp62 = GreaterEq(data->localData[0]->realVars[50] /* MatStm1.compMolFrac[3,1] variable */,0.0);
    tmp63 = LessEq(data->localData[0]->realVars[50] /* MatStm1.compMolFrac[3,1] variable */,1.0);
    if(!(tmp62 && tmp63))
    {
      tmp65 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[50] /* MatStm1.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp64),tmp65);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp66 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 884
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,884};
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  static const MMC_DEFSTRINGLIT(tmp69,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp70;
  static int tmp71 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp71)
  {
    tmp67 = GreaterEq(data->localData[0]->realVars[51] /* MatStm1.compMolFrac[3,2] variable */,0.0);
    tmp68 = LessEq(data->localData[0]->realVars[51] /* MatStm1.compMolFrac[3,2] variable */,1.0);
    if(!(tmp67 && tmp68))
    {
      tmp70 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[51] /* MatStm1.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp69),tmp70);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp71 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 885
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,885};
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  static const MMC_DEFSTRINGLIT(tmp74,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp75;
  static int tmp76 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp76)
  {
    tmp72 = GreaterEq(data->localData[0]->realVars[22] /* MatStm1.compMasFrac[1,1] variable */,0.0);
    tmp73 = LessEq(data->localData[0]->realVars[22] /* MatStm1.compMasFrac[1,1] variable */,1.0);
    if(!(tmp72 && tmp73))
    {
      tmp75 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[22] /* MatStm1.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp74),tmp75);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp76 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 886
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,886};
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  static const MMC_DEFSTRINGLIT(tmp79,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp80;
  static int tmp81 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp81)
  {
    tmp77 = GreaterEq(data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */,0.0);
    tmp78 = LessEq(data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */,1.0);
    if(!(tmp77 && tmp78))
    {
      tmp80 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp79),tmp80);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp81 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 887
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,887};
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  static const MMC_DEFSTRINGLIT(tmp84,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp85;
  static int tmp86 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp86)
  {
    tmp82 = GreaterEq(data->localData[0]->realVars[24] /* MatStm1.compMasFrac[2,1] variable */,0.0);
    tmp83 = LessEq(data->localData[0]->realVars[24] /* MatStm1.compMasFrac[2,1] variable */,1.0);
    if(!(tmp82 && tmp83))
    {
      tmp85 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[24] /* MatStm1.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp84),tmp85);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp86 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 888
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,888};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  static const MMC_DEFSTRINGLIT(tmp89,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp90;
  static int tmp91 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp91)
  {
    tmp87 = GreaterEq(data->localData[0]->realVars[25] /* MatStm1.compMasFrac[2,2] variable */,0.0);
    tmp88 = LessEq(data->localData[0]->realVars[25] /* MatStm1.compMasFrac[2,2] variable */,1.0);
    if(!(tmp87 && tmp88))
    {
      tmp90 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[25] /* MatStm1.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp89),tmp90);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp91 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 889
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,889};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  static const MMC_DEFSTRINGLIT(tmp94,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp95;
  static int tmp96 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp96)
  {
    tmp92 = GreaterEq(data->localData[0]->realVars[26] /* MatStm1.compMasFrac[3,1] variable */,0.0);
    tmp93 = LessEq(data->localData[0]->realVars[26] /* MatStm1.compMasFrac[3,1] variable */,1.0);
    if(!(tmp92 && tmp93))
    {
      tmp95 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[26] /* MatStm1.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp94),tmp95);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp96 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 890
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,890};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  static const MMC_DEFSTRINGLIT(tmp99,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp100;
  static int tmp101 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp101)
  {
    tmp97 = GreaterEq(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[3,2] variable */,0.0);
    tmp98 = LessEq(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[3,2] variable */,1.0);
    if(!(tmp97 && tmp98))
    {
      tmp100 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp99),tmp100);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp101 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 891
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: " + String(MatStm1.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,891};
  modelica_boolean tmp102;
  static const MMC_DEFSTRINGLIT(tmp103,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: ");
  modelica_string tmp104;
  static int tmp105 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp105)
  {
    tmp102 = GreaterEq(data->localData[0]->realVars[42] /* MatStm1.compMolFlo[2,1] variable */,0.0);
    if(!tmp102)
    {
      tmp104 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[42] /* MatStm1.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp103),tmp104);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp105 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 892
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: " + String(MatStm1.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,892};
  modelica_boolean tmp106;
  static const MMC_DEFSTRINGLIT(tmp107,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: ");
  modelica_string tmp108;
  static int tmp109 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp109)
  {
    tmp106 = GreaterEq(data->localData[0]->realVars[43] /* MatStm1.compMolFlo[2,2] variable */,0.0);
    if(!tmp106)
    {
      tmp108 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[43] /* MatStm1.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp107),tmp108);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp109 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 893
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: " + String(MatStm1.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,893};
  modelica_boolean tmp110;
  static const MMC_DEFSTRINGLIT(tmp111,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: ");
  modelica_string tmp112;
  static int tmp113 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp113)
  {
    tmp110 = GreaterEq(data->localData[0]->realVars[44] /* MatStm1.compMolFlo[3,1] variable */,0.0);
    if(!tmp110)
    {
      tmp112 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[44] /* MatStm1.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp111),tmp112);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp113 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 894
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: " + String(MatStm1.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,894};
  modelica_boolean tmp114;
  static const MMC_DEFSTRINGLIT(tmp115,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: ");
  modelica_string tmp116;
  static int tmp117 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp117)
  {
    tmp114 = GreaterEq(data->localData[0]->realVars[45] /* MatStm1.compMolFlo[3,2] variable */,0.0);
    if(!tmp114)
    {
      tmp116 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[45] /* MatStm1.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp115),tmp116);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp117 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 895
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: " + String(MatStm1.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,895};
  modelica_boolean tmp118;
  static const MMC_DEFSTRINGLIT(tmp119,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: ");
  modelica_string tmp120;
  static int tmp121 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp121)
  {
    tmp118 = GreaterEq(data->localData[0]->realVars[18] /* MatStm1.compMasFlo[2,1] variable */,0.0);
    if(!tmp118)
    {
      tmp120 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[18] /* MatStm1.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp119),tmp120);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp121 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 896
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: " + String(MatStm1.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,896};
  modelica_boolean tmp122;
  static const MMC_DEFSTRINGLIT(tmp123,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: ");
  modelica_string tmp124;
  static int tmp125 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp125)
  {
    tmp122 = GreaterEq(data->localData[0]->realVars[19] /* MatStm1.compMasFlo[2,2] variable */,0.0);
    if(!tmp122)
    {
      tmp124 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[19] /* MatStm1.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp123),tmp124);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp125 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 897
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: " + String(MatStm1.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,897};
  modelica_boolean tmp126;
  static const MMC_DEFSTRINGLIT(tmp127,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: ");
  modelica_string tmp128;
  static int tmp129 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp129)
  {
    tmp126 = GreaterEq(data->localData[0]->realVars[20] /* MatStm1.compMasFlo[3,1] variable */,0.0);
    if(!tmp126)
    {
      tmp128 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[20] /* MatStm1.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp127),tmp128);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp129 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 898
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: " + String(MatStm1.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,898};
  modelica_boolean tmp130;
  static const MMC_DEFSTRINGLIT(tmp131,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: ");
  modelica_string tmp132;
  static int tmp133 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp133)
  {
    tmp130 = GreaterEq(data->localData[0]->realVars[21] /* MatStm1.compMasFlo[3,2] variable */,0.0);
    if(!tmp130)
    {
      tmp132 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[21] /* MatStm1.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp131),tmp132);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp133 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 899
type: ALGORITHM

  assert(MatStm2.T >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.T, has value: " + String(MatStm2.T, "g"));
*/
void Flowsheet_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  modelica_boolean tmp134;
  static const MMC_DEFSTRINGLIT(tmp135,64,"Variable violating min constraint: 0.0 <= MatStm2.T, has value: ");
  modelica_string tmp136;
  static int tmp137 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp137)
  {
    tmp134 = GreaterEq(data->localData[0]->realVars[105] /* MatStm2.T variable */,0.0);
    if(!tmp134)
    {
      tmp136 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[105] /* MatStm2.T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp135),tmp136);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4168,3,4168,75,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp137 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 900
type: ALGORITHM

  assert(MatStm2.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.Pbubl, has value: " + String(MatStm2.Pbubl, "g"));
*/
void Flowsheet_eqFunction_900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,900};
  modelica_boolean tmp138;
  static const MMC_DEFSTRINGLIT(tmp139,68,"Variable violating min constraint: 0.0 <= MatStm2.Pbubl, has value: ");
  modelica_string tmp140;
  static int tmp141 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp141)
  {
    tmp138 = GreaterEq(data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */,0.0);
    if(!tmp138)
    {
      tmp140 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[101] /* MatStm2.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp139),tmp140);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp141 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 901
type: ALGORITHM

  assert(MatStm2.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.Pdew, has value: " + String(MatStm2.Pdew, "g"));
*/
void Flowsheet_eqFunction_901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,901};
  modelica_boolean tmp142;
  static const MMC_DEFSTRINGLIT(tmp143,67,"Variable violating min constraint: 0.0 <= MatStm2.Pdew, has value: ");
  modelica_string tmp144;
  static int tmp145 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp145)
  {
    tmp142 = GreaterEq(data->localData[0]->realVars[102] /* MatStm2.Pdew variable */,0.0);
    if(!tmp142)
    {
      tmp144 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[102] /* MatStm2.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp143),tmp144);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp145 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 902
type: ALGORITHM

  assert(MatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: " + String(MatStm2.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,902};
  modelica_boolean tmp146;
  modelica_boolean tmp147;
  static const MMC_DEFSTRINGLIT(tmp148,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp149;
  static int tmp150 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp150)
  {
    tmp146 = GreaterEq(data->localData[0]->realVars[155] /* MatStm2.liqPhasMolFrac variable */,0.0);
    tmp147 = LessEq(data->localData[0]->realVars[155] /* MatStm2.liqPhasMolFrac variable */,1.0);
    if(!(tmp146 && tmp147))
    {
      tmp149 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[155] /* MatStm2.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp148),tmp149);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp150 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 903
type: ALGORITHM

  assert(MatStm2.vapPhasMolFrac >= 0.0 and MatStm2.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMolFrac <= 1.0, has value: " + String(MatStm2.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,903};
  modelica_boolean tmp151;
  modelica_boolean tmp152;
  static const MMC_DEFSTRINGLIT(tmp153,88,"Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp154;
  static int tmp155 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp155)
  {
    tmp151 = GreaterEq(data->localData[0]->realVars[182] /* MatStm2.vapPhasMolFrac variable */,0.0);
    tmp152 = LessEq(data->localData[0]->realVars[182] /* MatStm2.vapPhasMolFrac variable */,1.0);
    if(!(tmp151 && tmp152))
    {
      tmp154 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[182] /* MatStm2.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp153),tmp154);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.vapPhasMolFrac >= 0.0 and MatStm2.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp155 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 904
type: ALGORITHM

  assert(MatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: " + String(MatStm2.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,904};
  modelica_boolean tmp156;
  modelica_boolean tmp157;
  static const MMC_DEFSTRINGLIT(tmp158,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp159;
  static int tmp160 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp160)
  {
    tmp156 = GreaterEq(data->localData[0]->realVars[154] /* MatStm2.liqPhasMasFrac variable */,0.0);
    tmp157 = LessEq(data->localData[0]->realVars[154] /* MatStm2.liqPhasMasFrac variable */,1.0);
    if(!(tmp156 && tmp157))
    {
      tmp159 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[154] /* MatStm2.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp158),tmp159);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp160 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 905
type: ALGORITHM

  assert(MatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: " + String(MatStm2.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,905};
  modelica_boolean tmp161;
  modelica_boolean tmp162;
  static const MMC_DEFSTRINGLIT(tmp163,88,"Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp164;
  static int tmp165 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp165)
  {
    tmp161 = GreaterEq(data->localData[0]->realVars[181] /* MatStm2.vapPhasMasFrac variable */,0.0);
    tmp162 = LessEq(data->localData[0]->realVars[181] /* MatStm2.vapPhasMasFrac variable */,1.0);
    if(!(tmp161 && tmp162))
    {
      tmp164 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[181] /* MatStm2.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp163),tmp164);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp165 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 906
type: ALGORITHM

  assert(MatStm2.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: " + String(MatStm2.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,906};
  modelica_boolean tmp166;
  static const MMC_DEFSTRINGLIT(tmp167,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: ");
  modelica_string tmp168;
  static int tmp169 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp169)
  {
    tmp166 = GreaterEq(data->localData[0]->realVars[179] /* MatStm2.totMolFlo[2] variable */,0.0);
    if(!tmp166)
    {
      tmp168 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[179] /* MatStm2.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp167),tmp168);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp169 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 907
type: ALGORITHM

  assert(MatStm2.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: " + String(MatStm2.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,907};
  modelica_boolean tmp170;
  static const MMC_DEFSTRINGLIT(tmp171,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: ");
  modelica_string tmp172;
  static int tmp173 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp173)
  {
    tmp170 = GreaterEq(data->localData[0]->realVars[180] /* MatStm2.totMolFlo[3] variable */,0.0);
    if(!tmp170)
    {
      tmp172 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[180] /* MatStm2.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp171),tmp172);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp173 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 908
type: ALGORITHM

  assert(MatStm2.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: " + String(MatStm2.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,908};
  modelica_boolean tmp174;
  static const MMC_DEFSTRINGLIT(tmp175,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: ");
  modelica_string tmp176;
  static int tmp177 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp177)
  {
    tmp174 = GreaterEq(data->localData[0]->realVars[176] /* MatStm2.totMasFlo[1] variable */,0.0);
    if(!tmp174)
    {
      tmp176 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[176] /* MatStm2.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp175),tmp176);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp177 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 909
type: ALGORITHM

  assert(MatStm2.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: " + String(MatStm2.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,909};
  modelica_boolean tmp178;
  static const MMC_DEFSTRINGLIT(tmp179,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: ");
  modelica_string tmp180;
  static int tmp181 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp181)
  {
    tmp178 = GreaterEq(data->localData[0]->realVars[177] /* MatStm2.totMasFlo[2] variable */,0.0);
    if(!tmp178)
    {
      tmp180 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[177] /* MatStm2.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp179),tmp180);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp181 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 910
type: ALGORITHM

  assert(MatStm2.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: " + String(MatStm2.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
  modelica_boolean tmp182;
  static const MMC_DEFSTRINGLIT(tmp183,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: ");
  modelica_string tmp184;
  static int tmp185 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp185)
  {
    tmp182 = GreaterEq(data->localData[0]->realVars[178] /* MatStm2.totMasFlo[3] variable */,0.0);
    if(!tmp182)
    {
      tmp184 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[178] /* MatStm2.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp183),tmp184);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp185 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 911
type: ALGORITHM

  assert(MatStm2.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: " + String(MatStm2.MW[1], "g"));
*/
void Flowsheet_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
  modelica_boolean tmp186;
  static const MMC_DEFSTRINGLIT(tmp187,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: ");
  modelica_string tmp188;
  static int tmp189 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp189)
  {
    tmp186 = GreaterEq(data->localData[0]->realVars[97] /* MatStm2.MW[1] variable */,0.0);
    if(!tmp186)
    {
      tmp188 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[97] /* MatStm2.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp187),tmp188);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp189 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 912
type: ALGORITHM

  assert(MatStm2.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: " + String(MatStm2.MW[2], "g"));
*/
void Flowsheet_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  modelica_boolean tmp190;
  static const MMC_DEFSTRINGLIT(tmp191,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: ");
  modelica_string tmp192;
  static int tmp193 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp193)
  {
    tmp190 = GreaterEq(data->localData[0]->realVars[98] /* MatStm2.MW[2] variable */,0.0);
    if(!tmp190)
    {
      tmp192 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[98] /* MatStm2.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp191),tmp192);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp193 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 913
type: ALGORITHM

  assert(MatStm2.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: " + String(MatStm2.MW[3], "g"));
*/
void Flowsheet_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  modelica_boolean tmp194;
  static const MMC_DEFSTRINGLIT(tmp195,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: ");
  modelica_string tmp196;
  static int tmp197 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp197)
  {
    tmp194 = GreaterEq(data->localData[0]->realVars[99] /* MatStm2.MW[3] variable */,0.0);
    if(!tmp194)
    {
      tmp196 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[99] /* MatStm2.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp195),tmp196);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp197 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 914
type: ALGORITHM

  assert(MatStm2.compMolFrac[1,1] >= 0.0 and MatStm2.compMolFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  modelica_boolean tmp198;
  modelica_boolean tmp199;
  static const MMC_DEFSTRINGLIT(tmp200,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp201;
  static int tmp202 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp202)
  {
    tmp198 = GreaterEq(data->localData[0]->realVars[136] /* MatStm2.compMolFrac[1,1] variable */,0.0);
    tmp199 = LessEq(data->localData[0]->realVars[136] /* MatStm2.compMolFrac[1,1] variable */,1.0);
    if(!(tmp198 && tmp199))
    {
      tmp201 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[136] /* MatStm2.compMolFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp200),tmp201);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[1,1] >= 0.0 and MatStm2.compMolFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp202 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 915
type: ALGORITHM

  assert(MatStm2.compMolFrac[1,2] >= 0.0 and MatStm2.compMolFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  modelica_boolean tmp203;
  modelica_boolean tmp204;
  static const MMC_DEFSTRINGLIT(tmp205,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp206;
  static int tmp207 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp207)
  {
    tmp203 = GreaterEq(data->localData[0]->realVars[137] /* MatStm2.compMolFrac[1,2] variable */,0.0);
    tmp204 = LessEq(data->localData[0]->realVars[137] /* MatStm2.compMolFrac[1,2] variable */,1.0);
    if(!(tmp203 && tmp204))
    {
      tmp206 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[137] /* MatStm2.compMolFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp205),tmp206);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[1,2] >= 0.0 and MatStm2.compMolFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp207 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 916
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  modelica_boolean tmp208;
  modelica_boolean tmp209;
  static const MMC_DEFSTRINGLIT(tmp210,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp211;
  static int tmp212 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp212)
  {
    tmp208 = GreaterEq(data->localData[0]->realVars[138] /* MatStm2.compMolFrac[2,1] variable */,0.0);
    tmp209 = LessEq(data->localData[0]->realVars[138] /* MatStm2.compMolFrac[2,1] variable */,1.0);
    if(!(tmp208 && tmp209))
    {
      tmp211 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[138] /* MatStm2.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp210),tmp211);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp212 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 917
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  modelica_boolean tmp213;
  modelica_boolean tmp214;
  static const MMC_DEFSTRINGLIT(tmp215,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp216;
  static int tmp217 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp217)
  {
    tmp213 = GreaterEq(data->localData[0]->realVars[139] /* MatStm2.compMolFrac[2,2] variable */,0.0);
    tmp214 = LessEq(data->localData[0]->realVars[139] /* MatStm2.compMolFrac[2,2] variable */,1.0);
    if(!(tmp213 && tmp214))
    {
      tmp216 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[139] /* MatStm2.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp215),tmp216);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp217 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 918
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  modelica_boolean tmp218;
  modelica_boolean tmp219;
  static const MMC_DEFSTRINGLIT(tmp220,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp221;
  static int tmp222 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp222)
  {
    tmp218 = GreaterEq(data->localData[0]->realVars[140] /* MatStm2.compMolFrac[3,1] variable */,0.0);
    tmp219 = LessEq(data->localData[0]->realVars[140] /* MatStm2.compMolFrac[3,1] variable */,1.0);
    if(!(tmp218 && tmp219))
    {
      tmp221 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[140] /* MatStm2.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp220),tmp221);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp222 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 919
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  modelica_boolean tmp223;
  modelica_boolean tmp224;
  static const MMC_DEFSTRINGLIT(tmp225,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp226;
  static int tmp227 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp227)
  {
    tmp223 = GreaterEq(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[3,2] variable */,0.0);
    tmp224 = LessEq(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[3,2] variable */,1.0);
    if(!(tmp223 && tmp224))
    {
      tmp226 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp225),tmp226);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp227 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 920
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  modelica_boolean tmp228;
  modelica_boolean tmp229;
  static const MMC_DEFSTRINGLIT(tmp230,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp231;
  static int tmp232 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp232)
  {
    tmp228 = GreaterEq(data->localData[0]->realVars[112] /* MatStm2.compMasFrac[1,1] variable */,0.0);
    tmp229 = LessEq(data->localData[0]->realVars[112] /* MatStm2.compMasFrac[1,1] variable */,1.0);
    if(!(tmp228 && tmp229))
    {
      tmp231 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[112] /* MatStm2.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp230),tmp231);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp232 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 921
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  modelica_boolean tmp233;
  modelica_boolean tmp234;
  static const MMC_DEFSTRINGLIT(tmp235,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp236;
  static int tmp237 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp237)
  {
    tmp233 = GreaterEq(data->localData[0]->realVars[113] /* MatStm2.compMasFrac[1,2] variable */,0.0);
    tmp234 = LessEq(data->localData[0]->realVars[113] /* MatStm2.compMasFrac[1,2] variable */,1.0);
    if(!(tmp233 && tmp234))
    {
      tmp236 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[113] /* MatStm2.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp235),tmp236);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp237 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 922
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  modelica_boolean tmp238;
  modelica_boolean tmp239;
  static const MMC_DEFSTRINGLIT(tmp240,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp241;
  static int tmp242 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp242)
  {
    tmp238 = GreaterEq(data->localData[0]->realVars[114] /* MatStm2.compMasFrac[2,1] variable */,0.0);
    tmp239 = LessEq(data->localData[0]->realVars[114] /* MatStm2.compMasFrac[2,1] variable */,1.0);
    if(!(tmp238 && tmp239))
    {
      tmp241 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[114] /* MatStm2.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp240),tmp241);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp242 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 923
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  modelica_boolean tmp243;
  modelica_boolean tmp244;
  static const MMC_DEFSTRINGLIT(tmp245,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp246;
  static int tmp247 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp247)
  {
    tmp243 = GreaterEq(data->localData[0]->realVars[115] /* MatStm2.compMasFrac[2,2] variable */,0.0);
    tmp244 = LessEq(data->localData[0]->realVars[115] /* MatStm2.compMasFrac[2,2] variable */,1.0);
    if(!(tmp243 && tmp244))
    {
      tmp246 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[115] /* MatStm2.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp245),tmp246);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp247 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 924
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  modelica_boolean tmp248;
  modelica_boolean tmp249;
  static const MMC_DEFSTRINGLIT(tmp250,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp251;
  static int tmp252 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp252)
  {
    tmp248 = GreaterEq(data->localData[0]->realVars[116] /* MatStm2.compMasFrac[3,1] variable */,0.0);
    tmp249 = LessEq(data->localData[0]->realVars[116] /* MatStm2.compMasFrac[3,1] variable */,1.0);
    if(!(tmp248 && tmp249))
    {
      tmp251 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[116] /* MatStm2.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp250),tmp251);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp252 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 925
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,925};
  modelica_boolean tmp253;
  modelica_boolean tmp254;
  static const MMC_DEFSTRINGLIT(tmp255,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp256;
  static int tmp257 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp257)
  {
    tmp253 = GreaterEq(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[3,2] variable */,0.0);
    tmp254 = LessEq(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[3,2] variable */,1.0);
    if(!(tmp253 && tmp254))
    {
      tmp256 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp255),tmp256);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp257 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 926
type: ALGORITHM

  assert(MatStm2.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,1], has value: " + String(MatStm2.compMolFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  modelica_boolean tmp258;
  static const MMC_DEFSTRINGLIT(tmp259,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,1], has value: ");
  modelica_string tmp260;
  static int tmp261 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp261)
  {
    tmp258 = GreaterEq(data->localData[0]->realVars[130] /* MatStm2.compMolFlo[1,1] variable */,0.0);
    if(!tmp258)
    {
      tmp260 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[130] /* MatStm2.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp259),tmp260);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp261 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 927
type: ALGORITHM

  assert(MatStm2.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,2], has value: " + String(MatStm2.compMolFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,927};
  modelica_boolean tmp262;
  static const MMC_DEFSTRINGLIT(tmp263,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,2], has value: ");
  modelica_string tmp264;
  static int tmp265 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp265)
  {
    tmp262 = GreaterEq(data->localData[0]->realVars[131] /* MatStm2.compMolFlo[1,2] variable */,0.0);
    if(!tmp262)
    {
      tmp264 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[131] /* MatStm2.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp263),tmp264);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp265 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 928
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: " + String(MatStm2.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,928};
  modelica_boolean tmp266;
  static const MMC_DEFSTRINGLIT(tmp267,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: ");
  modelica_string tmp268;
  static int tmp269 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp269)
  {
    tmp266 = GreaterEq(data->localData[0]->realVars[132] /* MatStm2.compMolFlo[2,1] variable */,0.0);
    if(!tmp266)
    {
      tmp268 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[132] /* MatStm2.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp267),tmp268);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp269 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 929
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: " + String(MatStm2.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  modelica_boolean tmp270;
  static const MMC_DEFSTRINGLIT(tmp271,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: ");
  modelica_string tmp272;
  static int tmp273 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp273)
  {
    tmp270 = GreaterEq(data->localData[0]->realVars[133] /* MatStm2.compMolFlo[2,2] variable */,0.0);
    if(!tmp270)
    {
      tmp272 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[133] /* MatStm2.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp271),tmp272);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp273 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 930
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: " + String(MatStm2.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,930};
  modelica_boolean tmp274;
  static const MMC_DEFSTRINGLIT(tmp275,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: ");
  modelica_string tmp276;
  static int tmp277 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp277)
  {
    tmp274 = GreaterEq(data->localData[0]->realVars[134] /* MatStm2.compMolFlo[3,1] variable */,0.0);
    if(!tmp274)
    {
      tmp276 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[134] /* MatStm2.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp275),tmp276);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp277 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 931
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: " + String(MatStm2.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,931};
  modelica_boolean tmp278;
  static const MMC_DEFSTRINGLIT(tmp279,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: ");
  modelica_string tmp280;
  static int tmp281 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp281)
  {
    tmp278 = GreaterEq(data->localData[0]->realVars[135] /* MatStm2.compMolFlo[3,2] variable */,0.0);
    if(!tmp278)
    {
      tmp280 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[135] /* MatStm2.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp279),tmp280);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp281 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 932
type: ALGORITHM

  assert(MatStm2.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,1], has value: " + String(MatStm2.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,932};
  modelica_boolean tmp282;
  static const MMC_DEFSTRINGLIT(tmp283,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,1], has value: ");
  modelica_string tmp284;
  static int tmp285 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp285)
  {
    tmp282 = GreaterEq(data->localData[0]->realVars[106] /* MatStm2.compMasFlo[1,1] variable */,0.0);
    if(!tmp282)
    {
      tmp284 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[106] /* MatStm2.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp283),tmp284);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp285 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 933
type: ALGORITHM

  assert(MatStm2.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,2], has value: " + String(MatStm2.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,933};
  modelica_boolean tmp286;
  static const MMC_DEFSTRINGLIT(tmp287,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,2], has value: ");
  modelica_string tmp288;
  static int tmp289 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp289)
  {
    tmp286 = GreaterEq(data->localData[0]->realVars[107] /* MatStm2.compMasFlo[1,2] variable */,0.0);
    if(!tmp286)
    {
      tmp288 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[107] /* MatStm2.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp287),tmp288);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp289 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 934
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: " + String(MatStm2.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,934};
  modelica_boolean tmp290;
  static const MMC_DEFSTRINGLIT(tmp291,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: ");
  modelica_string tmp292;
  static int tmp293 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp293)
  {
    tmp290 = GreaterEq(data->localData[0]->realVars[108] /* MatStm2.compMasFlo[2,1] variable */,0.0);
    if(!tmp290)
    {
      tmp292 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[108] /* MatStm2.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp291),tmp292);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp293 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 935
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: " + String(MatStm2.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,935};
  modelica_boolean tmp294;
  static const MMC_DEFSTRINGLIT(tmp295,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: ");
  modelica_string tmp296;
  static int tmp297 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp297)
  {
    tmp294 = GreaterEq(data->localData[0]->realVars[109] /* MatStm2.compMasFlo[2,2] variable */,0.0);
    if(!tmp294)
    {
      tmp296 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[109] /* MatStm2.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp295),tmp296);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp297 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 936
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: " + String(MatStm2.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,936};
  modelica_boolean tmp298;
  static const MMC_DEFSTRINGLIT(tmp299,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: ");
  modelica_string tmp300;
  static int tmp301 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp301)
  {
    tmp298 = GreaterEq(data->localData[0]->realVars[110] /* MatStm2.compMasFlo[3,1] variable */,0.0);
    if(!tmp298)
    {
      tmp300 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[110] /* MatStm2.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp299),tmp300);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp301 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 937
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: " + String(MatStm2.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,937};
  modelica_boolean tmp302;
  static const MMC_DEFSTRINGLIT(tmp303,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: ");
  modelica_string tmp304;
  static int tmp305 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp305)
  {
    tmp302 = GreaterEq(data->localData[0]->realVars[111] /* MatStm2.compMasFlo[3,2] variable */,0.0);
    if(!tmp302)
    {
      tmp304 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[111] /* MatStm2.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp303),tmp304);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp305 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 938
type: ALGORITHM

  assert(MatStm2.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.K[1], has value: " + String(MatStm2.K[1], "g"));
*/
void Flowsheet_eqFunction_938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,938};
  modelica_boolean tmp306;
  static const MMC_DEFSTRINGLIT(tmp307,67,"Variable violating min constraint: 0.0 <= MatStm2.K[1], has value: ");
  modelica_string tmp308;
  static int tmp309 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp309)
  {
    tmp306 = GreaterEq(data->localData[0]->realVars[95] /* MatStm2.K[1] variable */,0.0);
    if(!tmp306)
    {
      tmp308 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[95] /* MatStm2.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp307),tmp308);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp309 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 939
type: ALGORITHM

  assert(MatStm2.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.K[2], has value: " + String(MatStm2.K[2], "g"));
*/
void Flowsheet_eqFunction_939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,939};
  modelica_boolean tmp310;
  static const MMC_DEFSTRINGLIT(tmp311,67,"Variable violating min constraint: 0.0 <= MatStm2.K[2], has value: ");
  modelica_string tmp312;
  static int tmp313 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp313)
  {
    tmp310 = GreaterEq(data->localData[0]->realVars[96] /* MatStm2.K[2] variable */,0.0);
    if(!tmp310)
    {
      tmp312 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[96] /* MatStm2.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp311),tmp312);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp313 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int Flowsheet_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  Flowsheet_eqFunction_869(data, threadData);

  Flowsheet_eqFunction_870(data, threadData);

  Flowsheet_eqFunction_871(data, threadData);

  Flowsheet_eqFunction_872(data, threadData);

  Flowsheet_eqFunction_873(data, threadData);

  Flowsheet_eqFunction_874(data, threadData);

  Flowsheet_eqFunction_875(data, threadData);

  Flowsheet_eqFunction_876(data, threadData);

  Flowsheet_eqFunction_877(data, threadData);

  Flowsheet_eqFunction_878(data, threadData);

  Flowsheet_eqFunction_879(data, threadData);

  Flowsheet_eqFunction_880(data, threadData);

  Flowsheet_eqFunction_881(data, threadData);

  Flowsheet_eqFunction_882(data, threadData);

  Flowsheet_eqFunction_883(data, threadData);

  Flowsheet_eqFunction_884(data, threadData);

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
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

