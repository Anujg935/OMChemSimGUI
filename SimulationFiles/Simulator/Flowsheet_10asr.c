/* Asserts */
#include "Flowsheet_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 885
type: ALGORITHM

  assert(MatStm1.T >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.T, has value: " + String(MatStm1.T, "g"));
*/
void Flowsheet_eqFunction_885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,885};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,64,"Variable violating min constraint: 0.0 <= MatStm1.T, has value: ");
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp3)
  {
    tmp0 = GreaterEq(data->localData[0]->realVars[18] /* MatStm1.T variable */,0.0);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[18] /* MatStm1.T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4168,3,4168,75,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp3 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 886
type: ALGORITHM

  assert(MatStm1.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.Pbubl, has value: " + String(MatStm1.Pbubl, "g"));
*/
void Flowsheet_eqFunction_886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,886};
  modelica_boolean tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,68,"Variable violating min constraint: 0.0 <= MatStm1.Pbubl, has value: ");
  modelica_string tmp6;
  static int tmp7 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp7)
  {
    tmp4 = GreaterEq(data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */,0.0);
    if(!tmp4)
    {
      tmp6 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp5),tmp6);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp7 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 887
type: ALGORITHM

  assert(MatStm1.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.Pdew, has value: " + String(MatStm1.Pdew, "g"));
*/
void Flowsheet_eqFunction_887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,887};
  modelica_boolean tmp8;
  static const MMC_DEFSTRINGLIT(tmp9,67,"Variable violating min constraint: 0.0 <= MatStm1.Pdew, has value: ");
  modelica_string tmp10;
  static int tmp11 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp11)
  {
    tmp8 = GreaterEq(data->localData[0]->realVars[15] /* MatStm1.Pdew variable */,0.0);
    if(!tmp8)
    {
      tmp10 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp9),tmp10);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp11 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 888
type: ALGORITHM

  assert(MatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: " + String(MatStm1.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,888};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  static const MMC_DEFSTRINGLIT(tmp14,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp15;
  static int tmp16 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp16)
  {
    tmp12 = GreaterEq(data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */,0.0);
    tmp13 = LessEq(data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */,1.0);
    if(!(tmp12 && tmp13))
    {
      tmp15 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[68] /* MatStm1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp14),tmp15);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp16 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 889
type: ALGORITHM

  assert(MatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: " + String(MatStm1.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,889};
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  static const MMC_DEFSTRINGLIT(tmp19,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp20;
  static int tmp21 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp21)
  {
    tmp17 = GreaterEq(data->localData[0]->realVars[95] /* MatStm1.vapPhasMolFrac variable */,0.0);
    tmp18 = LessEq(data->localData[0]->realVars[95] /* MatStm1.vapPhasMolFrac variable */,1.0);
    if(!(tmp17 && tmp18))
    {
      tmp20 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[95] /* MatStm1.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp19),tmp20);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp21 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 890
type: ALGORITHM

  assert(MatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: " + String(MatStm1.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,890};
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp25;
  static int tmp26 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp26)
  {
    tmp22 = GreaterEq(data->localData[0]->realVars[67] /* MatStm1.liqPhasMasFrac variable */,0.0);
    tmp23 = LessEq(data->localData[0]->realVars[67] /* MatStm1.liqPhasMasFrac variable */,1.0);
    if(!(tmp22 && tmp23))
    {
      tmp25 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[67] /* MatStm1.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp24),tmp25);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp26 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 891
type: ALGORITHM

  assert(MatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: " + String(MatStm1.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,891};
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp30;
  static int tmp31 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp31)
  {
    tmp27 = GreaterEq(data->localData[0]->realVars[94] /* MatStm1.vapPhasMasFrac variable */,0.0);
    tmp28 = LessEq(data->localData[0]->realVars[94] /* MatStm1.vapPhasMasFrac variable */,1.0);
    if(!(tmp27 && tmp28))
    {
      tmp30 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[94] /* MatStm1.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp31 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 892
type: ALGORITHM

  assert(MatStm1.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: " + String(MatStm1.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,892};
  modelica_boolean tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: ");
  modelica_string tmp34;
  static int tmp35 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp35)
  {
    tmp32 = GreaterEq(data->localData[0]->realVars[92] /* MatStm1.totMolFlo[2] variable */,0.0);
    if(!tmp32)
    {
      tmp34 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[92] /* MatStm1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp33),tmp34);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp35 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 893
type: ALGORITHM

  assert(MatStm1.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: " + String(MatStm1.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,893};
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: ");
  modelica_string tmp38;
  static int tmp39 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp39)
  {
    tmp36 = GreaterEq(data->localData[0]->realVars[93] /* MatStm1.totMolFlo[3] variable */,0.0);
    if(!tmp36)
    {
      tmp38 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[93] /* MatStm1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp39 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 894
type: ALGORITHM

  assert(MatStm1.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: " + String(MatStm1.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,894};
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: ");
  modelica_string tmp42;
  static int tmp43 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp43)
  {
    tmp40 = GreaterEq(data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */,0.0);
    if(!tmp40)
    {
      tmp42 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[89] /* MatStm1.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp43 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 895
type: ALGORITHM

  assert(MatStm1.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: " + String(MatStm1.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,895};
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: ");
  modelica_string tmp46;
  static int tmp47 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp47)
  {
    tmp44 = GreaterEq(data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */,0.0);
    if(!tmp44)
    {
      tmp46 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[90] /* MatStm1.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp47 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 896
type: ALGORITHM

  assert(MatStm1.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: " + String(MatStm1.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,896};
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: ");
  modelica_string tmp50;
  static int tmp51 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp51)
  {
    tmp48 = GreaterEq(data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */,0.0);
    if(!tmp48)
    {
      tmp50 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[91] /* MatStm1.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp49),tmp50);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp51 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 897
type: ALGORITHM

  assert(MatStm1.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: " + String(MatStm1.MW[1], "g"));
*/
void Flowsheet_eqFunction_897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,897};
  modelica_boolean tmp52;
  static const MMC_DEFSTRINGLIT(tmp53,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: ");
  modelica_string tmp54;
  static int tmp55 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp55)
  {
    tmp52 = GreaterEq(data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */,0.0);
    if(!tmp52)
    {
      tmp54 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp53),tmp54);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp55 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 898
type: ALGORITHM

  assert(MatStm1.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: " + String(MatStm1.MW[2], "g"));
*/
void Flowsheet_eqFunction_898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,898};
  modelica_boolean tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: ");
  modelica_string tmp58;
  static int tmp59 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp59)
  {
    tmp56 = GreaterEq(data->localData[0]->realVars[11] /* MatStm1.MW[2] variable */,0.0);
    if(!tmp56)
    {
      tmp58 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[11] /* MatStm1.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp57),tmp58);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp59 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 899
type: ALGORITHM

  assert(MatStm1.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: " + String(MatStm1.MW[3], "g"));
*/
void Flowsheet_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  modelica_boolean tmp60;
  static const MMC_DEFSTRINGLIT(tmp61,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: ");
  modelica_string tmp62;
  static int tmp63 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp63)
  {
    tmp60 = GreaterEq(data->localData[0]->realVars[12] /* MatStm1.MW[3] variable */,0.0);
    if(!tmp60)
    {
      tmp62 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[12] /* MatStm1.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp61),tmp62);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp63 = 1;
    }
  }
  TRACE_POP
}

/*
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
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp68)
  {
    tmp64 = GreaterEq(data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */,0.0);
    tmp65 = LessEq(data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */,1.0);
    if(!(tmp64 && tmp65))
    {
      tmp67 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[49] /* MatStm1.compMolFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp66),tmp67);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[1,1] >= 0.0 and MatStm1.compMolFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp68 = 1;
    }
  }
  TRACE_POP
}

/*
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
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp73)
  {
    tmp69 = GreaterEq(data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,2] variable */,0.0);
    tmp70 = LessEq(data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,2] variable */,1.0);
    if(!(tmp69 && tmp70))
    {
      tmp72 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp71),tmp72);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[1,2] >= 0.0 and MatStm1.compMolFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp73 = 1;
    }
  }
  TRACE_POP
}

/*
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
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp78)
  {
    tmp74 = GreaterEq(data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */,0.0);
    tmp75 = LessEq(data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */,1.0);
    if(!(tmp74 && tmp75))
    {
      tmp77 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[51] /* MatStm1.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp76),tmp77);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp78 = 1;
    }
  }
  TRACE_POP
}

/*
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
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp83)
  {
    tmp79 = GreaterEq(data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */,0.0);
    tmp80 = LessEq(data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */,1.0);
    if(!(tmp79 && tmp80))
    {
      tmp82 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp81),tmp82);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp83 = 1;
    }
  }
  TRACE_POP
}

/*
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
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp88)
  {
    tmp84 = GreaterEq(data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */,0.0);
    tmp85 = LessEq(data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */,1.0);
    if(!(tmp84 && tmp85))
    {
      tmp87 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[53] /* MatStm1.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp86),tmp87);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp88 = 1;
    }
  }
  TRACE_POP
}

/*
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
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp93)
  {
    tmp89 = GreaterEq(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */,0.0);
    tmp90 = LessEq(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */,1.0);
    if(!(tmp89 && tmp90))
    {
      tmp92 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp91),tmp92);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp93 = 1;
    }
  }
  TRACE_POP
}

/*
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
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp98)
  {
    tmp94 = GreaterEq(data->localData[0]->realVars[25] /* MatStm1.compMasFrac[1,1] variable */,0.0);
    tmp95 = LessEq(data->localData[0]->realVars[25] /* MatStm1.compMasFrac[1,1] variable */,1.0);
    if(!(tmp94 && tmp95))
    {
      tmp97 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[25] /* MatStm1.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp96),tmp97);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp98 = 1;
    }
  }
  TRACE_POP
}

/*
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
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp103)
  {
    tmp99 = GreaterEq(data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */,0.0);
    tmp100 = LessEq(data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */,1.0);
    if(!(tmp99 && tmp100))
    {
      tmp102 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp101),tmp102);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp103 = 1;
    }
  }
  TRACE_POP
}

/*
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
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp108)
  {
    tmp104 = GreaterEq(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[2,1] variable */,0.0);
    tmp105 = LessEq(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[2,1] variable */,1.0);
    if(!(tmp104 && tmp105))
    {
      tmp107 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp106),tmp107);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp108 = 1;
    }
  }
  TRACE_POP
}

/*
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
  modelica_string tmp112;
  static int tmp113 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp113)
  {
    tmp109 = GreaterEq(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[2,2] variable */,0.0);
    tmp110 = LessEq(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[2,2] variable */,1.0);
    if(!(tmp109 && tmp110))
    {
      tmp112 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp111),tmp112);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp113 = 1;
    }
  }
  TRACE_POP
}

/*
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
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp118)
  {
    tmp114 = GreaterEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[3,1] variable */,0.0);
    tmp115 = LessEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[3,1] variable */,1.0);
    if(!(tmp114 && tmp115))
    {
      tmp117 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp116),tmp117);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp118 = 1;
    }
  }
  TRACE_POP
}

/*
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
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp123)
  {
    tmp119 = GreaterEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[3,2] variable */,0.0);
    tmp120 = LessEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[3,2] variable */,1.0);
    if(!(tmp119 && tmp120))
    {
      tmp122 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp121),tmp122);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp123 = 1;
    }
  }
  TRACE_POP
}

/*
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
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp127)
  {
    tmp124 = GreaterEq(data->localData[0]->realVars[43] /* MatStm1.compMolFlo[1,1] variable */,0.0);
    if(!tmp124)
    {
      tmp126 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[43] /* MatStm1.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp125),tmp126);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp127 = 1;
    }
  }
  TRACE_POP
}

/*
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
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp131)
  {
    tmp128 = GreaterEq(data->localData[0]->realVars[44] /* MatStm1.compMolFlo[1,2] variable */,0.0);
    if(!tmp128)
    {
      tmp130 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[44] /* MatStm1.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp129),tmp130);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp131 = 1;
    }
  }
  TRACE_POP
}

/*
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
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp135)
  {
    tmp132 = GreaterEq(data->localData[0]->realVars[45] /* MatStm1.compMolFlo[2,1] variable */,0.0);
    if(!tmp132)
    {
      tmp134 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[45] /* MatStm1.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp133),tmp134);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp135 = 1;
    }
  }
  TRACE_POP
}

/*
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
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp139)
  {
    tmp136 = GreaterEq(data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,2] variable */,0.0);
    if(!tmp136)
    {
      tmp138 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp137),tmp138);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp139 = 1;
    }
  }
  TRACE_POP
}

/*
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
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp143)
  {
    tmp140 = GreaterEq(data->localData[0]->realVars[47] /* MatStm1.compMolFlo[3,1] variable */,0.0);
    if(!tmp140)
    {
      tmp142 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[47] /* MatStm1.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp141),tmp142);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp143 = 1;
    }
  }
  TRACE_POP
}

/*
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
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp147)
  {
    tmp144 = GreaterEq(data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,2] variable */,0.0);
    if(!tmp144)
    {
      tmp146 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp145),tmp146);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp147 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 918
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: " + String(MatStm1.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  modelica_boolean tmp148;
  static const MMC_DEFSTRINGLIT(tmp149,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: ");
  modelica_string tmp150;
  static int tmp151 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp151)
  {
    tmp148 = GreaterEq(data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */,0.0);
    if(!tmp148)
    {
      tmp150 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[19] /* MatStm1.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp149),tmp150);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp151 = 1;
    }
  }
  TRACE_POP
}

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
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

