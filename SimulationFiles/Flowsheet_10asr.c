/* Asserts */
#include "Flowsheet_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 1721
type: ALGORITHM

  assert(Mixer1.inVapPhasMolFrac[1] >= 0.0 and Mixer1.inVapPhasMolFrac[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[1] <= 1.0, has value: " + String(Mixer1.inVapPhasMolFrac[1], "g"));
*/
void Flowsheet_eqFunction_1721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1721};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,92,"Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[1] <= 1.0, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq(data->localData[0]->realVars[362] /* Mixer1.inVapPhasMolFrac[1] variable */,0.0);
    tmp1 = LessEq(data->localData[0]->realVars[362] /* Mixer1.inVapPhasMolFrac[1] variable */,1.0);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[362] /* Mixer1.inVapPhasMolFrac[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4319,7,4319,434,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMixer1.inVapPhasMolFrac[1] >= 0.0 and Mixer1.inVapPhasMolFrac[1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1722
type: ALGORITHM

  assert(Mixer1.inVapPhasMolFrac[2] >= 0.0 and Mixer1.inVapPhasMolFrac[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[2] <= 1.0, has value: " + String(Mixer1.inVapPhasMolFrac[2], "g"));
*/
void Flowsheet_eqFunction_1722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1722};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,92,"Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[2] <= 1.0, has value: ");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp9)
  {
    tmp5 = GreaterEq(data->localData[0]->realVars[363] /* Mixer1.inVapPhasMolFrac[2] variable */,0.0);
    tmp6 = LessEq(data->localData[0]->realVars[363] /* Mixer1.inVapPhasMolFrac[2] variable */,1.0);
    if(!(tmp5 && tmp6))
    {
      tmp8 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[363] /* Mixer1.inVapPhasMolFrac[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4319,7,4319,434,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMixer1.inVapPhasMolFrac[2] >= 0.0 and Mixer1.inVapPhasMolFrac[2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp9 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1723
type: ALGORITHM

  assert(MatStm1.T >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.T, has value: " + String(MatStm1.T, "g"));
*/
void Flowsheet_eqFunction_1723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1723};
  modelica_boolean tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,64,"Variable violating min constraint: 0.0 <= MatStm1.T, has value: ");
  modelica_string tmp12;
  static int tmp13 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp13)
  {
    tmp10 = GreaterEq(data->localData[0]->realVars[19] /* MatStm1.T variable */,0.0);
    if(!tmp10)
    {
      tmp12 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[19] /* MatStm1.T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp11),tmp12);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4168,3,4168,75,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp13 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1724
type: ALGORITHM

  assert(MatStm1.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.Pbubl, has value: " + String(MatStm1.Pbubl, "g"));
*/
void Flowsheet_eqFunction_1724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1724};
  modelica_boolean tmp14;
  static const MMC_DEFSTRINGLIT(tmp15,68,"Variable violating min constraint: 0.0 <= MatStm1.Pbubl, has value: ");
  modelica_string tmp16;
  static int tmp17 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp17)
  {
    tmp14 = GreaterEq(data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */,0.0);
    if(!tmp14)
    {
      tmp16 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp15),tmp16);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp17 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1725
type: ALGORITHM

  assert(MatStm1.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.Pdew, has value: " + String(MatStm1.Pdew, "g"));
*/
void Flowsheet_eqFunction_1725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1725};
  modelica_boolean tmp18;
  static const MMC_DEFSTRINGLIT(tmp19,67,"Variable violating min constraint: 0.0 <= MatStm1.Pdew, has value: ");
  modelica_string tmp20;
  static int tmp21 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp21)
  {
    tmp18 = GreaterEq(data->localData[0]->realVars[15] /* MatStm1.Pdew variable */,0.0);
    if(!tmp18)
    {
      tmp20 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp19),tmp20);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp21 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1726
type: ALGORITHM

  assert(MatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: " + String(MatStm1.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_1726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1726};
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp25;
  static int tmp26 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp26)
  {
    tmp22 = GreaterEq(data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */,0.0);
    tmp23 = LessEq(data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */,1.0);
    if(!(tmp22 && tmp23))
    {
      tmp25 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp24),tmp25);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp26 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1727
type: ALGORITHM

  assert(MatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: " + String(MatStm1.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_1727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1727};
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp30;
  static int tmp31 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp31)
  {
    tmp27 = GreaterEq(data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */,0.0);
    tmp28 = LessEq(data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */,1.0);
    if(!(tmp27 && tmp28))
    {
      tmp30 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp31 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1728
type: ALGORITHM

  assert(MatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: " + String(MatStm1.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_1728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1728};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp35;
  static int tmp36 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp36)
  {
    tmp32 = GreaterEq(data->localData[0]->realVars[92] /* MatStm1.liqPhasMasFrac variable */,0.0);
    tmp33 = LessEq(data->localData[0]->realVars[92] /* MatStm1.liqPhasMasFrac variable */,1.0);
    if(!(tmp32 && tmp33))
    {
      tmp35 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[92] /* MatStm1.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp34),tmp35);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp36 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1729
type: ALGORITHM

  assert(MatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: " + String(MatStm1.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_1729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1729};
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  static const MMC_DEFSTRINGLIT(tmp39,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp40;
  static int tmp41 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp41)
  {
    tmp37 = GreaterEq(data->localData[0]->realVars[121] /* MatStm1.vapPhasMasFrac variable */,0.0);
    tmp38 = LessEq(data->localData[0]->realVars[121] /* MatStm1.vapPhasMasFrac variable */,1.0);
    if(!(tmp37 && tmp38))
    {
      tmp40 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[121] /* MatStm1.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp39),tmp40);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp41 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1730
type: ALGORITHM

  assert(MatStm1.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: " + String(MatStm1.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_1730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1730};
  modelica_boolean tmp42;
  static const MMC_DEFSTRINGLIT(tmp43,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: ");
  modelica_string tmp44;
  static int tmp45 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp45)
  {
    tmp42 = GreaterEq(data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */,0.0);
    if(!tmp42)
    {
      tmp44 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp43),tmp44);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp45 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1731
type: ALGORITHM

  assert(MatStm1.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: " + String(MatStm1.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_1731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1731};
  modelica_boolean tmp46;
  static const MMC_DEFSTRINGLIT(tmp47,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: ");
  modelica_string tmp48;
  static int tmp49 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp49)
  {
    tmp46 = GreaterEq(data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */,0.0);
    if(!tmp46)
    {
      tmp48 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp47),tmp48);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp49 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1732
type: ALGORITHM

  assert(MatStm1.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: " + String(MatStm1.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_1732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1732};
  modelica_boolean tmp50;
  static const MMC_DEFSTRINGLIT(tmp51,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: ");
  modelica_string tmp52;
  static int tmp53 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp53)
  {
    tmp50 = GreaterEq(data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */,0.0);
    if(!tmp50)
    {
      tmp52 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp51),tmp52);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp53 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1733
type: ALGORITHM

  assert(MatStm1.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: " + String(MatStm1.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_1733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1733};
  modelica_boolean tmp54;
  static const MMC_DEFSTRINGLIT(tmp55,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: ");
  modelica_string tmp56;
  static int tmp57 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp57)
  {
    tmp54 = GreaterEq(data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */,0.0);
    if(!tmp54)
    {
      tmp56 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp55),tmp56);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp57 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1734
type: ALGORITHM

  assert(MatStm1.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: " + String(MatStm1.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_1734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1734};
  modelica_boolean tmp58;
  static const MMC_DEFSTRINGLIT(tmp59,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: ");
  modelica_string tmp60;
  static int tmp61 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp61)
  {
    tmp58 = GreaterEq(data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */,0.0);
    if(!tmp58)
    {
      tmp60 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp59),tmp60);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp61 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1735
type: ALGORITHM

  assert(MatStm1.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: " + String(MatStm1.MW[1], "g"));
*/
void Flowsheet_eqFunction_1735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1735};
  modelica_boolean tmp62;
  static const MMC_DEFSTRINGLIT(tmp63,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: ");
  modelica_string tmp64;
  static int tmp65 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp65)
  {
    tmp62 = GreaterEq(data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */,0.0);
    if(!tmp62)
    {
      tmp64 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp63),tmp64);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp65 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1736
type: ALGORITHM

  assert(MatStm1.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: " + String(MatStm1.MW[2], "g"));
*/
void Flowsheet_eqFunction_1736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1736};
  modelica_boolean tmp66;
  static const MMC_DEFSTRINGLIT(tmp67,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: ");
  modelica_string tmp68;
  static int tmp69 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp69)
  {
    tmp66 = GreaterEq(data->localData[0]->realVars[11] /* MatStm1.MW[2] variable */,0.0);
    if(!tmp66)
    {
      tmp68 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[11] /* MatStm1.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp67),tmp68);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp69 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1737
type: ALGORITHM

  assert(MatStm1.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: " + String(MatStm1.MW[3], "g"));
*/
void Flowsheet_eqFunction_1737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1737};
  modelica_boolean tmp70;
  static const MMC_DEFSTRINGLIT(tmp71,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: ");
  modelica_string tmp72;
  static int tmp73 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp73)
  {
    tmp70 = GreaterEq(data->localData[0]->realVars[12] /* MatStm1.MW[3] variable */,0.0);
    if(!tmp70)
    {
      tmp72 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[12] /* MatStm1.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp71),tmp72);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp73 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1738
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_1738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1738};
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  static const MMC_DEFSTRINGLIT(tmp76,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp77;
  static int tmp78 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp78)
  {
    tmp74 = GreaterEq(data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */,0.0);
    tmp75 = LessEq(data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */,1.0);
    if(!(tmp74 && tmp75))
    {
      tmp77 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp76),tmp77);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp78 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1739
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_1739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1739};
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  static const MMC_DEFSTRINGLIT(tmp81,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp82;
  static int tmp83 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp83)
  {
    tmp79 = GreaterEq(data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */,0.0);
    tmp80 = LessEq(data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */,1.0);
    if(!(tmp79 && tmp80))
    {
      tmp82 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp81),tmp82);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp83 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1740
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,3] >= 0.0 and MatStm1.compMolFrac[2,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,3] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,3], "g"));
*/
void Flowsheet_eqFunction_1740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1740};
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  static const MMC_DEFSTRINGLIT(tmp86,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,3] <= 1.0, has value: ");
  modelica_string tmp87;
  static int tmp88 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp88)
  {
    tmp84 = GreaterEq(data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */,0.0);
    tmp85 = LessEq(data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */,1.0);
    if(!(tmp84 && tmp85))
    {
      tmp87 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp86),tmp87);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,3] >= 0.0 and MatStm1.compMolFrac[2,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp88 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1741
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_1741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1741};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  static const MMC_DEFSTRINGLIT(tmp91,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp92;
  static int tmp93 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp93)
  {
    tmp89 = GreaterEq(data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */,0.0);
    tmp90 = LessEq(data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */,1.0);
    if(!(tmp89 && tmp90))
    {
      tmp92 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp91),tmp92);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp93 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1742
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_1742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1742};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  static const MMC_DEFSTRINGLIT(tmp96,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp97;
  static int tmp98 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp98)
  {
    tmp94 = GreaterEq(data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */,0.0);
    tmp95 = LessEq(data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */,1.0);
    if(!(tmp94 && tmp95))
    {
      tmp97 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp96),tmp97);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp98 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1743
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,3] >= 0.0 and MatStm1.compMolFrac[3,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,3] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,3], "g"));
*/
void Flowsheet_eqFunction_1743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1743};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  static const MMC_DEFSTRINGLIT(tmp101,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,3] <= 1.0, has value: ");
  modelica_string tmp102;
  static int tmp103 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp103)
  {
    tmp99 = GreaterEq(data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */,0.0);
    tmp100 = LessEq(data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */,1.0);
    if(!(tmp99 && tmp100))
    {
      tmp102 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp101),tmp102);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,3] >= 0.0 and MatStm1.compMolFrac[3,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp103 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1744
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_1744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1744};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  static const MMC_DEFSTRINGLIT(tmp106,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp107;
  static int tmp108 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp108)
  {
    tmp104 = GreaterEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,1] variable */,0.0);
    tmp105 = LessEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,1] variable */,1.0);
    if(!(tmp104 && tmp105))
    {
      tmp107 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp106),tmp107);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp108 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1745
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_1745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1745};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  static const MMC_DEFSTRINGLIT(tmp111,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp112;
  static int tmp113 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp113)
  {
    tmp109 = GreaterEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[1,2] variable */,0.0);
    tmp110 = LessEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[1,2] variable */,1.0);
    if(!(tmp109 && tmp110))
    {
      tmp112 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp111),tmp112);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp113 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1746
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,3] >= 0.0 and MatStm1.compMasFrac[1,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,3] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,3], "g"));
*/
void Flowsheet_eqFunction_1746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1746};
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  static const MMC_DEFSTRINGLIT(tmp116,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,3] <= 1.0, has value: ");
  modelica_string tmp117;
  static int tmp118 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp118)
  {
    tmp114 = GreaterEq(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[1,3] variable */,0.0);
    tmp115 = LessEq(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[1,3] variable */,1.0);
    if(!(tmp114 && tmp115))
    {
      tmp117 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[1,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp116),tmp117);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,3] >= 0.0 and MatStm1.compMasFrac[1,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp118 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1747
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_1747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1747};
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  static const MMC_DEFSTRINGLIT(tmp121,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp122;
  static int tmp123 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp123)
  {
    tmp119 = GreaterEq(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[2,1] variable */,0.0);
    tmp120 = LessEq(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[2,1] variable */,1.0);
    if(!(tmp119 && tmp120))
    {
      tmp122 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp121),tmp122);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp123 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1748
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_1748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1748};
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  static const MMC_DEFSTRINGLIT(tmp126,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp127;
  static int tmp128 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp128)
  {
    tmp124 = GreaterEq(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[2,2] variable */,0.0);
    tmp125 = LessEq(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[2,2] variable */,1.0);
    if(!(tmp124 && tmp125))
    {
      tmp127 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp126),tmp127);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp128 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1749
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,3] >= 0.0 and MatStm1.compMasFrac[2,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,3] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,3], "g"));
*/
void Flowsheet_eqFunction_1749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1749};
  modelica_boolean tmp129;
  modelica_boolean tmp130;
  static const MMC_DEFSTRINGLIT(tmp131,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,3] <= 1.0, has value: ");
  modelica_string tmp132;
  static int tmp133 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp133)
  {
    tmp129 = GreaterEq(data->localData[0]->realVars[34] /* MatStm1.compMasFrac[2,3] variable */,0.0);
    tmp130 = LessEq(data->localData[0]->realVars[34] /* MatStm1.compMasFrac[2,3] variable */,1.0);
    if(!(tmp129 && tmp130))
    {
      tmp132 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[34] /* MatStm1.compMasFrac[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp131),tmp132);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,3] >= 0.0 and MatStm1.compMasFrac[2,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp133 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1750
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_1750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1750};
  modelica_boolean tmp134;
  modelica_boolean tmp135;
  static const MMC_DEFSTRINGLIT(tmp136,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp137;
  static int tmp138 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp138)
  {
    tmp134 = GreaterEq(data->localData[0]->realVars[35] /* MatStm1.compMasFrac[3,1] variable */,0.0);
    tmp135 = LessEq(data->localData[0]->realVars[35] /* MatStm1.compMasFrac[3,1] variable */,1.0);
    if(!(tmp134 && tmp135))
    {
      tmp137 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[35] /* MatStm1.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp136),tmp137);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp138 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1751
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_1751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1751};
  modelica_boolean tmp139;
  modelica_boolean tmp140;
  static const MMC_DEFSTRINGLIT(tmp141,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp142;
  static int tmp143 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp143)
  {
    tmp139 = GreaterEq(data->localData[0]->realVars[36] /* MatStm1.compMasFrac[3,2] variable */,0.0);
    tmp140 = LessEq(data->localData[0]->realVars[36] /* MatStm1.compMasFrac[3,2] variable */,1.0);
    if(!(tmp139 && tmp140))
    {
      tmp142 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[36] /* MatStm1.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp141),tmp142);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp143 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1752
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,3] >= 0.0 and MatStm1.compMasFrac[3,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,3] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,3], "g"));
*/
void Flowsheet_eqFunction_1752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1752};
  modelica_boolean tmp144;
  modelica_boolean tmp145;
  static const MMC_DEFSTRINGLIT(tmp146,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,3] <= 1.0, has value: ");
  modelica_string tmp147;
  static int tmp148 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp148)
  {
    tmp144 = GreaterEq(data->localData[0]->realVars[37] /* MatStm1.compMasFrac[3,3] variable */,0.0);
    tmp145 = LessEq(data->localData[0]->realVars[37] /* MatStm1.compMasFrac[3,3] variable */,1.0);
    if(!(tmp144 && tmp145))
    {
      tmp147 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[37] /* MatStm1.compMasFrac[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp146),tmp147);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,3] >= 0.0 and MatStm1.compMasFrac[3,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp148 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1753
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: " + String(MatStm1.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_1753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1753};
  modelica_boolean tmp149;
  static const MMC_DEFSTRINGLIT(tmp150,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: ");
  modelica_string tmp151;
  static int tmp152 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp152)
  {
    tmp149 = GreaterEq(data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,1] variable */,0.0);
    if(!tmp149)
    {
      tmp151 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp150),tmp151);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp152 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1754
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: " + String(MatStm1.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_1754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1754};
  modelica_boolean tmp153;
  static const MMC_DEFSTRINGLIT(tmp154,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: ");
  modelica_string tmp155;
  static int tmp156 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp156)
  {
    tmp153 = GreaterEq(data->localData[0]->realVars[60] /* MatStm1.compMolFlo[2,2] variable */,0.0);
    if(!tmp153)
    {
      tmp155 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[60] /* MatStm1.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp154),tmp155);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp156 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1755
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,3], has value: " + String(MatStm1.compMolFlo[2,3], "g"));
*/
void Flowsheet_eqFunction_1755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1755};
  modelica_boolean tmp157;
  static const MMC_DEFSTRINGLIT(tmp158,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,3], has value: ");
  modelica_string tmp159;
  static int tmp160 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp160)
  {
    tmp157 = GreaterEq(data->localData[0]->realVars[61] /* MatStm1.compMolFlo[2,3] variable */,0.0);
    if(!tmp157)
    {
      tmp159 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[61] /* MatStm1.compMolFlo[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp158),tmp159);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp160 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1756
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: " + String(MatStm1.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_1756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1756};
  modelica_boolean tmp161;
  static const MMC_DEFSTRINGLIT(tmp162,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: ");
  modelica_string tmp163;
  static int tmp164 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp164)
  {
    tmp161 = GreaterEq(data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,1] variable */,0.0);
    if(!tmp161)
    {
      tmp163 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp162),tmp163);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp164 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1757
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: " + String(MatStm1.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_1757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1757};
  modelica_boolean tmp165;
  static const MMC_DEFSTRINGLIT(tmp166,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: ");
  modelica_string tmp167;
  static int tmp168 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp168)
  {
    tmp165 = GreaterEq(data->localData[0]->realVars[63] /* MatStm1.compMolFlo[3,2] variable */,0.0);
    if(!tmp165)
    {
      tmp167 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[63] /* MatStm1.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp166),tmp167);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp168 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1758
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,3], has value: " + String(MatStm1.compMolFlo[3,3], "g"));
*/
void Flowsheet_eqFunction_1758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1758};
  modelica_boolean tmp169;
  static const MMC_DEFSTRINGLIT(tmp170,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,3], has value: ");
  modelica_string tmp171;
  static int tmp172 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp172)
  {
    tmp169 = GreaterEq(data->localData[0]->realVars[64] /* MatStm1.compMolFlo[3,3] variable */,0.0);
    if(!tmp169)
    {
      tmp171 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[64] /* MatStm1.compMolFlo[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp170),tmp171);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp172 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1759
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: " + String(MatStm1.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_1759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1759};
  modelica_boolean tmp173;
  static const MMC_DEFSTRINGLIT(tmp174,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: ");
  modelica_string tmp175;
  static int tmp176 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp176)
  {
    tmp173 = GreaterEq(data->localData[0]->realVars[23] /* MatStm1.compMasFlo[2,1] variable */,0.0);
    if(!tmp173)
    {
      tmp175 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[23] /* MatStm1.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp174),tmp175);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp176 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1760
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: " + String(MatStm1.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_1760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1760};
  modelica_boolean tmp177;
  static const MMC_DEFSTRINGLIT(tmp178,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: ");
  modelica_string tmp179;
  static int tmp180 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp180)
  {
    tmp177 = GreaterEq(data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,2] variable */,0.0);
    if(!tmp177)
    {
      tmp179 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp178),tmp179);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp180 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1761
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,3], has value: " + String(MatStm1.compMasFlo[2,3], "g"));
*/
void Flowsheet_eqFunction_1761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1761};
  modelica_boolean tmp181;
  static const MMC_DEFSTRINGLIT(tmp182,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,3], has value: ");
  modelica_string tmp183;
  static int tmp184 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp184)
  {
    tmp181 = GreaterEq(data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,3] variable */,0.0);
    if(!tmp181)
    {
      tmp183 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp182),tmp183);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp184 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1762
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: " + String(MatStm1.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_1762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1762};
  modelica_boolean tmp185;
  static const MMC_DEFSTRINGLIT(tmp186,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: ");
  modelica_string tmp187;
  static int tmp188 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp188)
  {
    tmp185 = GreaterEq(data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */,0.0);
    if(!tmp185)
    {
      tmp187 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp186),tmp187);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp188 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1763
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: " + String(MatStm1.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_1763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1763};
  modelica_boolean tmp189;
  static const MMC_DEFSTRINGLIT(tmp190,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: ");
  modelica_string tmp191;
  static int tmp192 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp192)
  {
    tmp189 = GreaterEq(data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */,0.0);
    if(!tmp189)
    {
      tmp191 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp190),tmp191);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp192 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1764
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,3], has value: " + String(MatStm1.compMasFlo[3,3], "g"));
*/
void Flowsheet_eqFunction_1764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1764};
  modelica_boolean tmp193;
  static const MMC_DEFSTRINGLIT(tmp194,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,3], has value: ");
  modelica_string tmp195;
  static int tmp196 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp196)
  {
    tmp193 = GreaterEq(data->localData[0]->realVars[28] /* MatStm1.compMasFlo[3,3] variable */,0.0);
    if(!tmp193)
    {
      tmp195 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[28] /* MatStm1.compMasFlo[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp194),tmp195);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp196 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1765
type: ALGORITHM

  assert(MatStm1.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: " + String(MatStm1.K[1], "g"));
*/
void Flowsheet_eqFunction_1765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1765};
  modelica_boolean tmp197;
  static const MMC_DEFSTRINGLIT(tmp198,67,"Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: ");
  modelica_string tmp199;
  static int tmp200 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp200)
  {
    tmp197 = GreaterEq(data->localData[0]->realVars[7] /* MatStm1.K[1] variable */,0.0);
    if(!tmp197)
    {
      tmp199 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[7] /* MatStm1.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp198),tmp199);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp200 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1766
type: ALGORITHM

  assert(MatStm1.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: " + String(MatStm1.K[2], "g"));
*/
void Flowsheet_eqFunction_1766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1766};
  modelica_boolean tmp201;
  static const MMC_DEFSTRINGLIT(tmp202,67,"Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: ");
  modelica_string tmp203;
  static int tmp204 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp204)
  {
    tmp201 = GreaterEq(data->localData[0]->realVars[8] /* MatStm1.K[2] variable */,0.0);
    if(!tmp201)
    {
      tmp203 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[8] /* MatStm1.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp202),tmp203);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp204 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1767
type: ALGORITHM

  assert(MatStm1.K[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[3], has value: " + String(MatStm1.K[3], "g"));
*/
void Flowsheet_eqFunction_1767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1767};
  modelica_boolean tmp205;
  static const MMC_DEFSTRINGLIT(tmp206,67,"Variable violating min constraint: 0.0 <= MatStm1.K[3], has value: ");
  modelica_string tmp207;
  static int tmp208 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp208)
  {
    tmp205 = GreaterEq(data->localData[0]->realVars[9] /* MatStm1.K[3] variable */,0.0);
    if(!tmp205)
    {
      tmp207 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[9] /* MatStm1.K[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp206),tmp207);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp208 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1768
type: ALGORITHM

  assert(MatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: " + String(MatStm2.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_1768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1768};
  modelica_boolean tmp209;
  modelica_boolean tmp210;
  static const MMC_DEFSTRINGLIT(tmp211,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp212;
  static int tmp213 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp213)
  {
    tmp209 = GreaterEq(data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */,0.0);
    tmp210 = LessEq(data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */,1.0);
    if(!(tmp209 && tmp210))
    {
      tmp212 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp211),tmp212);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp213 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1769
type: ALGORITHM

  assert(MatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: " + String(MatStm2.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_1769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1769};
  modelica_boolean tmp214;
  modelica_boolean tmp215;
  static const MMC_DEFSTRINGLIT(tmp216,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp217;
  static int tmp218 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp218)
  {
    tmp214 = GreaterEq(data->localData[0]->realVars[211] /* MatStm2.liqPhasMasFrac variable */,0.0);
    tmp215 = LessEq(data->localData[0]->realVars[211] /* MatStm2.liqPhasMasFrac variable */,1.0);
    if(!(tmp214 && tmp215))
    {
      tmp217 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[211] /* MatStm2.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp216),tmp217);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp218 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1770
type: ALGORITHM

  assert(MatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: " + String(MatStm2.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_1770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1770};
  modelica_boolean tmp219;
  modelica_boolean tmp220;
  static const MMC_DEFSTRINGLIT(tmp221,88,"Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp222;
  static int tmp223 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp223)
  {
    tmp219 = GreaterEq(data->localData[0]->realVars[240] /* MatStm2.vapPhasMasFrac variable */,0.0);
    tmp220 = LessEq(data->localData[0]->realVars[240] /* MatStm2.vapPhasMasFrac variable */,1.0);
    if(!(tmp219 && tmp220))
    {
      tmp222 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[240] /* MatStm2.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp221),tmp222);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp223 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1771
type: ALGORITHM

  assert(MatStm2.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: " + String(MatStm2.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_1771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1771};
  modelica_boolean tmp224;
  static const MMC_DEFSTRINGLIT(tmp225,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: ");
  modelica_string tmp226;
  static int tmp227 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp227)
  {
    tmp224 = GreaterEq(data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */,0.0);
    if(!tmp224)
    {
      tmp226 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp225),tmp226);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp227 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1772
type: ALGORITHM

  assert(MatStm2.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: " + String(MatStm2.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_1772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1772};
  modelica_boolean tmp228;
  static const MMC_DEFSTRINGLIT(tmp229,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: ");
  modelica_string tmp230;
  static int tmp231 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp231)
  {
    tmp228 = GreaterEq(data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */,0.0);
    if(!tmp228)
    {
      tmp230 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp229),tmp230);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp231 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1773
type: ALGORITHM

  assert(MatStm2.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: " + String(MatStm2.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_1773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1773};
  modelica_boolean tmp232;
  static const MMC_DEFSTRINGLIT(tmp233,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: ");
  modelica_string tmp234;
  static int tmp235 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp235)
  {
    tmp232 = GreaterEq(data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */,0.0);
    if(!tmp232)
    {
      tmp234 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp233),tmp234);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp235 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1774
type: ALGORITHM

  assert(MatStm2.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: " + String(MatStm2.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_1774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1774};
  modelica_boolean tmp236;
  static const MMC_DEFSTRINGLIT(tmp237,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: ");
  modelica_string tmp238;
  static int tmp239 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp239)
  {
    tmp236 = GreaterEq(data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */,0.0);
    if(!tmp236)
    {
      tmp238 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp237),tmp238);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp239 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1775
type: ALGORITHM

  assert(MatStm2.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: " + String(MatStm2.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_1775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1775};
  modelica_boolean tmp240;
  static const MMC_DEFSTRINGLIT(tmp241,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: ");
  modelica_string tmp242;
  static int tmp243 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp243)
  {
    tmp240 = GreaterEq(data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */,0.0);
    if(!tmp240)
    {
      tmp242 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp241),tmp242);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp243 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1776
type: ALGORITHM

  assert(MatStm2.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: " + String(MatStm2.MW[1], "g"));
*/
void Flowsheet_eqFunction_1776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1776};
  modelica_boolean tmp244;
  static const MMC_DEFSTRINGLIT(tmp245,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: ");
  modelica_string tmp246;
  static int tmp247 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp247)
  {
    tmp244 = GreaterEq(data->localData[0]->realVars[129] /* MatStm2.MW[1] variable */,0.0);
    if(!tmp244)
    {
      tmp246 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[129] /* MatStm2.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp245),tmp246);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp247 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1777
type: ALGORITHM

  assert(MatStm2.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: " + String(MatStm2.MW[2], "g"));
*/
void Flowsheet_eqFunction_1777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1777};
  modelica_boolean tmp248;
  static const MMC_DEFSTRINGLIT(tmp249,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: ");
  modelica_string tmp250;
  static int tmp251 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp251)
  {
    tmp248 = GreaterEq(data->localData[0]->realVars[130] /* MatStm2.MW[2] variable */,0.0);
    if(!tmp248)
    {
      tmp250 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[130] /* MatStm2.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp249),tmp250);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp251 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1778
type: ALGORITHM

  assert(MatStm2.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: " + String(MatStm2.MW[3], "g"));
*/
void Flowsheet_eqFunction_1778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1778};
  modelica_boolean tmp252;
  static const MMC_DEFSTRINGLIT(tmp253,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: ");
  modelica_string tmp254;
  static int tmp255 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp255)
  {
    tmp252 = GreaterEq(data->localData[0]->realVars[131] /* MatStm2.MW[3] variable */,0.0);
    if(!tmp252)
    {
      tmp254 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[131] /* MatStm2.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp253),tmp254);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp255 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1779
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_1779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1779};
  modelica_boolean tmp256;
  modelica_boolean tmp257;
  static const MMC_DEFSTRINGLIT(tmp258,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp259;
  static int tmp260 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp260)
  {
    tmp256 = GreaterEq(data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */,0.0);
    tmp257 = LessEq(data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */,1.0);
    if(!(tmp256 && tmp257))
    {
      tmp259 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp258),tmp259);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp260 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1780
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_1780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1780};
  modelica_boolean tmp261;
  modelica_boolean tmp262;
  static const MMC_DEFSTRINGLIT(tmp263,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp264;
  static int tmp265 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp265)
  {
    tmp261 = GreaterEq(data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */,0.0);
    tmp262 = LessEq(data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */,1.0);
    if(!(tmp261 && tmp262))
    {
      tmp264 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp263),tmp264);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp265 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1781
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,3] >= 0.0 and MatStm2.compMolFrac[2,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,3] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,3], "g"));
*/
void Flowsheet_eqFunction_1781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1781};
  modelica_boolean tmp266;
  modelica_boolean tmp267;
  static const MMC_DEFSTRINGLIT(tmp268,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,3] <= 1.0, has value: ");
  modelica_string tmp269;
  static int tmp270 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp270)
  {
    tmp266 = GreaterEq(data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */,0.0);
    tmp267 = LessEq(data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */,1.0);
    if(!(tmp266 && tmp267))
    {
      tmp269 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp268),tmp269);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,3] >= 0.0 and MatStm2.compMolFrac[2,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp270 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1782
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_1782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1782};
  modelica_boolean tmp271;
  modelica_boolean tmp272;
  static const MMC_DEFSTRINGLIT(tmp273,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp274;
  static int tmp275 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp275)
  {
    tmp271 = GreaterEq(data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */,0.0);
    tmp272 = LessEq(data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */,1.0);
    if(!(tmp271 && tmp272))
    {
      tmp274 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp273),tmp274);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp275 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1783
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_1783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1783};
  modelica_boolean tmp276;
  modelica_boolean tmp277;
  static const MMC_DEFSTRINGLIT(tmp278,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp279;
  static int tmp280 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp280)
  {
    tmp276 = GreaterEq(data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */,0.0);
    tmp277 = LessEq(data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */,1.0);
    if(!(tmp276 && tmp277))
    {
      tmp279 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp278),tmp279);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp280 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1784
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,3] >= 0.0 and MatStm2.compMolFrac[3,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,3] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,3], "g"));
*/
void Flowsheet_eqFunction_1784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1784};
  modelica_boolean tmp281;
  modelica_boolean tmp282;
  static const MMC_DEFSTRINGLIT(tmp283,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,3] <= 1.0, has value: ");
  modelica_string tmp284;
  static int tmp285 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp285)
  {
    tmp281 = GreaterEq(data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */,0.0);
    tmp282 = LessEq(data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */,1.0);
    if(!(tmp281 && tmp282))
    {
      tmp284 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp283),tmp284);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,3] >= 0.0 and MatStm2.compMolFrac[3,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp285 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1785
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_1785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1785};
  modelica_boolean tmp286;
  modelica_boolean tmp287;
  static const MMC_DEFSTRINGLIT(tmp288,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp289;
  static int tmp290 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp290)
  {
    tmp286 = GreaterEq(data->localData[0]->realVars[148] /* MatStm2.compMasFrac[1,1] variable */,0.0);
    tmp287 = LessEq(data->localData[0]->realVars[148] /* MatStm2.compMasFrac[1,1] variable */,1.0);
    if(!(tmp286 && tmp287))
    {
      tmp289 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[148] /* MatStm2.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp288),tmp289);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp290 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1786
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_1786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1786};
  modelica_boolean tmp291;
  modelica_boolean tmp292;
  static const MMC_DEFSTRINGLIT(tmp293,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp294;
  static int tmp295 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp295)
  {
    tmp291 = GreaterEq(data->localData[0]->realVars[149] /* MatStm2.compMasFrac[1,2] variable */,0.0);
    tmp292 = LessEq(data->localData[0]->realVars[149] /* MatStm2.compMasFrac[1,2] variable */,1.0);
    if(!(tmp291 && tmp292))
    {
      tmp294 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[149] /* MatStm2.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp293),tmp294);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp295 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1787
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,3] >= 0.0 and MatStm2.compMasFrac[1,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,3] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,3], "g"));
*/
void Flowsheet_eqFunction_1787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1787};
  modelica_boolean tmp296;
  modelica_boolean tmp297;
  static const MMC_DEFSTRINGLIT(tmp298,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,3] <= 1.0, has value: ");
  modelica_string tmp299;
  static int tmp300 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp300)
  {
    tmp296 = GreaterEq(data->localData[0]->realVars[150] /* MatStm2.compMasFrac[1,3] variable */,0.0);
    tmp297 = LessEq(data->localData[0]->realVars[150] /* MatStm2.compMasFrac[1,3] variable */,1.0);
    if(!(tmp296 && tmp297))
    {
      tmp299 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[150] /* MatStm2.compMasFrac[1,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp298),tmp299);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,3] >= 0.0 and MatStm2.compMasFrac[1,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp300 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1788
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_1788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1788};
  modelica_boolean tmp301;
  modelica_boolean tmp302;
  static const MMC_DEFSTRINGLIT(tmp303,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp304;
  static int tmp305 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp305)
  {
    tmp301 = GreaterEq(data->localData[0]->realVars[151] /* MatStm2.compMasFrac[2,1] variable */,0.0);
    tmp302 = LessEq(data->localData[0]->realVars[151] /* MatStm2.compMasFrac[2,1] variable */,1.0);
    if(!(tmp301 && tmp302))
    {
      tmp304 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[151] /* MatStm2.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp303),tmp304);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp305 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1789
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_1789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1789};
  modelica_boolean tmp306;
  modelica_boolean tmp307;
  static const MMC_DEFSTRINGLIT(tmp308,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp309;
  static int tmp310 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp310)
  {
    tmp306 = GreaterEq(data->localData[0]->realVars[152] /* MatStm2.compMasFrac[2,2] variable */,0.0);
    tmp307 = LessEq(data->localData[0]->realVars[152] /* MatStm2.compMasFrac[2,2] variable */,1.0);
    if(!(tmp306 && tmp307))
    {
      tmp309 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[152] /* MatStm2.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp308),tmp309);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp310 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1790
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,3] >= 0.0 and MatStm2.compMasFrac[2,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,3] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,3], "g"));
*/
void Flowsheet_eqFunction_1790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1790};
  modelica_boolean tmp311;
  modelica_boolean tmp312;
  static const MMC_DEFSTRINGLIT(tmp313,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,3] <= 1.0, has value: ");
  modelica_string tmp314;
  static int tmp315 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp315)
  {
    tmp311 = GreaterEq(data->localData[0]->realVars[153] /* MatStm2.compMasFrac[2,3] variable */,0.0);
    tmp312 = LessEq(data->localData[0]->realVars[153] /* MatStm2.compMasFrac[2,3] variable */,1.0);
    if(!(tmp311 && tmp312))
    {
      tmp314 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[153] /* MatStm2.compMasFrac[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp313),tmp314);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,3] >= 0.0 and MatStm2.compMasFrac[2,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp315 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1791
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_1791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1791};
  modelica_boolean tmp316;
  modelica_boolean tmp317;
  static const MMC_DEFSTRINGLIT(tmp318,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp319;
  static int tmp320 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp320)
  {
    tmp316 = GreaterEq(data->localData[0]->realVars[154] /* MatStm2.compMasFrac[3,1] variable */,0.0);
    tmp317 = LessEq(data->localData[0]->realVars[154] /* MatStm2.compMasFrac[3,1] variable */,1.0);
    if(!(tmp316 && tmp317))
    {
      tmp319 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[154] /* MatStm2.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp318),tmp319);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp320 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1792
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_1792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1792};
  modelica_boolean tmp321;
  modelica_boolean tmp322;
  static const MMC_DEFSTRINGLIT(tmp323,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp324;
  static int tmp325 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp325)
  {
    tmp321 = GreaterEq(data->localData[0]->realVars[155] /* MatStm2.compMasFrac[3,2] variable */,0.0);
    tmp322 = LessEq(data->localData[0]->realVars[155] /* MatStm2.compMasFrac[3,2] variable */,1.0);
    if(!(tmp321 && tmp322))
    {
      tmp324 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[155] /* MatStm2.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp323),tmp324);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp325 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1793
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,3] >= 0.0 and MatStm2.compMasFrac[3,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,3] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,3], "g"));
*/
void Flowsheet_eqFunction_1793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1793};
  modelica_boolean tmp326;
  modelica_boolean tmp327;
  static const MMC_DEFSTRINGLIT(tmp328,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,3] <= 1.0, has value: ");
  modelica_string tmp329;
  static int tmp330 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp330)
  {
    tmp326 = GreaterEq(data->localData[0]->realVars[156] /* MatStm2.compMasFrac[3,3] variable */,0.0);
    tmp327 = LessEq(data->localData[0]->realVars[156] /* MatStm2.compMasFrac[3,3] variable */,1.0);
    if(!(tmp326 && tmp327))
    {
      tmp329 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[156] /* MatStm2.compMasFrac[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp328),tmp329);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,3] >= 0.0 and MatStm2.compMasFrac[3,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp330 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1794
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: " + String(MatStm2.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_1794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1794};
  modelica_boolean tmp331;
  static const MMC_DEFSTRINGLIT(tmp332,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: ");
  modelica_string tmp333;
  static int tmp334 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp334)
  {
    tmp331 = GreaterEq(data->localData[0]->realVars[178] /* MatStm2.compMolFlo[2,1] variable */,0.0);
    if(!tmp331)
    {
      tmp333 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[178] /* MatStm2.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp332),tmp333);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp334 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1795
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: " + String(MatStm2.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_1795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1795};
  modelica_boolean tmp335;
  static const MMC_DEFSTRINGLIT(tmp336,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: ");
  modelica_string tmp337;
  static int tmp338 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp338)
  {
    tmp335 = GreaterEq(data->localData[0]->realVars[179] /* MatStm2.compMolFlo[2,2] variable */,0.0);
    if(!tmp335)
    {
      tmp337 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[179] /* MatStm2.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp336),tmp337);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp338 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1796
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,3], has value: " + String(MatStm2.compMolFlo[2,3], "g"));
*/
void Flowsheet_eqFunction_1796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1796};
  modelica_boolean tmp339;
  static const MMC_DEFSTRINGLIT(tmp340,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,3], has value: ");
  modelica_string tmp341;
  static int tmp342 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp342)
  {
    tmp339 = GreaterEq(data->localData[0]->realVars[180] /* MatStm2.compMolFlo[2,3] variable */,0.0);
    if(!tmp339)
    {
      tmp341 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[180] /* MatStm2.compMolFlo[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp340),tmp341);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp342 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1797
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: " + String(MatStm2.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_1797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1797};
  modelica_boolean tmp343;
  static const MMC_DEFSTRINGLIT(tmp344,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: ");
  modelica_string tmp345;
  static int tmp346 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp346)
  {
    tmp343 = GreaterEq(data->localData[0]->realVars[181] /* MatStm2.compMolFlo[3,1] variable */,0.0);
    if(!tmp343)
    {
      tmp345 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[181] /* MatStm2.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp344),tmp345);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp346 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1798
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: " + String(MatStm2.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_1798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1798};
  modelica_boolean tmp347;
  static const MMC_DEFSTRINGLIT(tmp348,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: ");
  modelica_string tmp349;
  static int tmp350 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp350)
  {
    tmp347 = GreaterEq(data->localData[0]->realVars[182] /* MatStm2.compMolFlo[3,2] variable */,0.0);
    if(!tmp347)
    {
      tmp349 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[182] /* MatStm2.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp348),tmp349);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp350 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1799
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,3], has value: " + String(MatStm2.compMolFlo[3,3], "g"));
*/
void Flowsheet_eqFunction_1799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1799};
  modelica_boolean tmp351;
  static const MMC_DEFSTRINGLIT(tmp352,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,3], has value: ");
  modelica_string tmp353;
  static int tmp354 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp354)
  {
    tmp351 = GreaterEq(data->localData[0]->realVars[183] /* MatStm2.compMolFlo[3,3] variable */,0.0);
    if(!tmp351)
    {
      tmp353 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[183] /* MatStm2.compMolFlo[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp352),tmp353);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp354 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1800
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: " + String(MatStm2.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_1800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1800};
  modelica_boolean tmp355;
  static const MMC_DEFSTRINGLIT(tmp356,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: ");
  modelica_string tmp357;
  static int tmp358 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp358)
  {
    tmp355 = GreaterEq(data->localData[0]->realVars[142] /* MatStm2.compMasFlo[2,1] variable */,0.0);
    if(!tmp355)
    {
      tmp357 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[142] /* MatStm2.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp356),tmp357);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp358 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1801
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: " + String(MatStm2.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_1801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1801};
  modelica_boolean tmp359;
  static const MMC_DEFSTRINGLIT(tmp360,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: ");
  modelica_string tmp361;
  static int tmp362 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp362)
  {
    tmp359 = GreaterEq(data->localData[0]->realVars[143] /* MatStm2.compMasFlo[2,2] variable */,0.0);
    if(!tmp359)
    {
      tmp361 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[143] /* MatStm2.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp360),tmp361);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp362 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1802
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,3], has value: " + String(MatStm2.compMasFlo[2,3], "g"));
*/
void Flowsheet_eqFunction_1802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1802};
  modelica_boolean tmp363;
  static const MMC_DEFSTRINGLIT(tmp364,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,3], has value: ");
  modelica_string tmp365;
  static int tmp366 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp366)
  {
    tmp363 = GreaterEq(data->localData[0]->realVars[144] /* MatStm2.compMasFlo[2,3] variable */,0.0);
    if(!tmp363)
    {
      tmp365 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[144] /* MatStm2.compMasFlo[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp364),tmp365);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp366 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1803
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: " + String(MatStm2.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_1803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1803};
  modelica_boolean tmp367;
  static const MMC_DEFSTRINGLIT(tmp368,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: ");
  modelica_string tmp369;
  static int tmp370 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp370)
  {
    tmp367 = GreaterEq(data->localData[0]->realVars[145] /* MatStm2.compMasFlo[3,1] variable */,0.0);
    if(!tmp367)
    {
      tmp369 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[145] /* MatStm2.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp368),tmp369);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp370 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1804
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: " + String(MatStm2.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_1804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1804};
  modelica_boolean tmp371;
  static const MMC_DEFSTRINGLIT(tmp372,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: ");
  modelica_string tmp373;
  static int tmp374 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp374)
  {
    tmp371 = GreaterEq(data->localData[0]->realVars[146] /* MatStm2.compMasFlo[3,2] variable */,0.0);
    if(!tmp371)
    {
      tmp373 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[146] /* MatStm2.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp372),tmp373);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp374 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1805
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,3], has value: " + String(MatStm2.compMasFlo[3,3], "g"));
*/
void Flowsheet_eqFunction_1805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1805};
  modelica_boolean tmp375;
  static const MMC_DEFSTRINGLIT(tmp376,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,3], has value: ");
  modelica_string tmp377;
  static int tmp378 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp378)
  {
    tmp375 = GreaterEq(data->localData[0]->realVars[147] /* MatStm2.compMasFlo[3,3] variable */,0.0);
    if(!tmp375)
    {
      tmp377 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[147] /* MatStm2.compMasFlo[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp376),tmp377);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp378 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1806
type: ALGORITHM

  assert(MatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: " + String(MatStm3.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_1806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1806};
  modelica_boolean tmp379;
  modelica_boolean tmp380;
  static const MMC_DEFSTRINGLIT(tmp381,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp382;
  static int tmp383 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp383)
  {
    tmp379 = GreaterEq(data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */,0.0);
    tmp380 = LessEq(data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */,1.0);
    if(!(tmp379 && tmp380))
    {
      tmp382 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp381),tmp382);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp383 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1807
type: ALGORITHM

  assert(MatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: " + String(MatStm3.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_1807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1807};
  modelica_boolean tmp384;
  modelica_boolean tmp385;
  static const MMC_DEFSTRINGLIT(tmp386,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp387;
  static int tmp388 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp388)
  {
    tmp384 = GreaterEq(data->localData[0]->realVars[329] /* MatStm3.liqPhasMasFrac variable */,0.0);
    tmp385 = LessEq(data->localData[0]->realVars[329] /* MatStm3.liqPhasMasFrac variable */,1.0);
    if(!(tmp384 && tmp385))
    {
      tmp387 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[329] /* MatStm3.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp386),tmp387);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp388 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1808
type: ALGORITHM

  assert(MatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: " + String(MatStm3.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_1808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1808};
  modelica_boolean tmp389;
  modelica_boolean tmp390;
  static const MMC_DEFSTRINGLIT(tmp391,88,"Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp392;
  static int tmp393 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp393)
  {
    tmp389 = GreaterEq(data->localData[0]->realVars[358] /* MatStm3.vapPhasMasFrac variable */,0.0);
    tmp390 = LessEq(data->localData[0]->realVars[358] /* MatStm3.vapPhasMasFrac variable */,1.0);
    if(!(tmp389 && tmp390))
    {
      tmp392 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[358] /* MatStm3.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp391),tmp392);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp393 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1809
type: ALGORITHM

  assert(MatStm3.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: " + String(MatStm3.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_1809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1809};
  modelica_boolean tmp394;
  static const MMC_DEFSTRINGLIT(tmp395,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: ");
  modelica_string tmp396;
  static int tmp397 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp397)
  {
    tmp394 = GreaterEq(data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */,0.0);
    if(!tmp394)
    {
      tmp396 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp395),tmp396);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp397 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1810
type: ALGORITHM

  assert(MatStm3.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: " + String(MatStm3.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_1810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1810};
  modelica_boolean tmp398;
  static const MMC_DEFSTRINGLIT(tmp399,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: ");
  modelica_string tmp400;
  static int tmp401 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp401)
  {
    tmp398 = GreaterEq(data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */,0.0);
    if(!tmp398)
    {
      tmp400 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp399),tmp400);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp401 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1811
type: ALGORITHM

  assert(MatStm3.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: " + String(MatStm3.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_1811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1811};
  modelica_boolean tmp402;
  static const MMC_DEFSTRINGLIT(tmp403,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: ");
  modelica_string tmp404;
  static int tmp405 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp405)
  {
    tmp402 = GreaterEq(data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */,0.0);
    if(!tmp402)
    {
      tmp404 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp403),tmp404);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp405 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1812
type: ALGORITHM

  assert(MatStm3.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: " + String(MatStm3.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_1812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1812};
  modelica_boolean tmp406;
  static const MMC_DEFSTRINGLIT(tmp407,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: ");
  modelica_string tmp408;
  static int tmp409 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp409)
  {
    tmp406 = GreaterEq(data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */,0.0);
    if(!tmp406)
    {
      tmp408 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp407),tmp408);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp409 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1813
type: ALGORITHM

  assert(MatStm3.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: " + String(MatStm3.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_1813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1813};
  modelica_boolean tmp410;
  static const MMC_DEFSTRINGLIT(tmp411,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: ");
  modelica_string tmp412;
  static int tmp413 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp413)
  {
    tmp410 = GreaterEq(data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */,0.0);
    if(!tmp410)
    {
      tmp412 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp411),tmp412);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp413 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1814
type: ALGORITHM

  assert(MatStm3.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: " + String(MatStm3.MW[1], "g"));
*/
void Flowsheet_eqFunction_1814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1814};
  modelica_boolean tmp414;
  static const MMC_DEFSTRINGLIT(tmp415,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: ");
  modelica_string tmp416;
  static int tmp417 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp417)
  {
    tmp414 = GreaterEq(data->localData[0]->realVars[247] /* MatStm3.MW[1] variable */,0.0);
    if(!tmp414)
    {
      tmp416 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[247] /* MatStm3.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp415),tmp416);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp417 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1815
type: ALGORITHM

  assert(MatStm3.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: " + String(MatStm3.MW[2], "g"));
*/
void Flowsheet_eqFunction_1815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1815};
  modelica_boolean tmp418;
  static const MMC_DEFSTRINGLIT(tmp419,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: ");
  modelica_string tmp420;
  static int tmp421 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp421)
  {
    tmp418 = GreaterEq(data->localData[0]->realVars[248] /* MatStm3.MW[2] variable */,0.0);
    if(!tmp418)
    {
      tmp420 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[248] /* MatStm3.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp419),tmp420);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp421 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1816
type: ALGORITHM

  assert(MatStm3.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: " + String(MatStm3.MW[3], "g"));
*/
void Flowsheet_eqFunction_1816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1816};
  modelica_boolean tmp422;
  static const MMC_DEFSTRINGLIT(tmp423,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: ");
  modelica_string tmp424;
  static int tmp425 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp425)
  {
    tmp422 = GreaterEq(data->localData[0]->realVars[249] /* MatStm3.MW[3] variable */,0.0);
    if(!tmp422)
    {
      tmp424 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[249] /* MatStm3.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp423),tmp424);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp425 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1817
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_1817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1817};
  modelica_boolean tmp426;
  modelica_boolean tmp427;
  static const MMC_DEFSTRINGLIT(tmp428,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp429;
  static int tmp430 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp430)
  {
    tmp426 = GreaterEq(data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */,0.0);
    tmp427 = LessEq(data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */,1.0);
    if(!(tmp426 && tmp427))
    {
      tmp429 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp428),tmp429);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp430 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1818
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_1818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1818};
  modelica_boolean tmp431;
  modelica_boolean tmp432;
  static const MMC_DEFSTRINGLIT(tmp433,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp434;
  static int tmp435 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp435)
  {
    tmp431 = GreaterEq(data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */,0.0);
    tmp432 = LessEq(data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */,1.0);
    if(!(tmp431 && tmp432))
    {
      tmp434 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp433),tmp434);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp435 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1819
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,3] >= 0.0 and MatStm3.compMolFrac[2,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,3] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,3], "g"));
*/
void Flowsheet_eqFunction_1819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1819};
  modelica_boolean tmp436;
  modelica_boolean tmp437;
  static const MMC_DEFSTRINGLIT(tmp438,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,3] <= 1.0, has value: ");
  modelica_string tmp439;
  static int tmp440 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp440)
  {
    tmp436 = GreaterEq(data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */,0.0);
    tmp437 = LessEq(data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */,1.0);
    if(!(tmp436 && tmp437))
    {
      tmp439 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp438),tmp439);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,3] >= 0.0 and MatStm3.compMolFrac[2,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp440 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1820
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_1820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1820};
  modelica_boolean tmp441;
  modelica_boolean tmp442;
  static const MMC_DEFSTRINGLIT(tmp443,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp444;
  static int tmp445 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp445)
  {
    tmp441 = GreaterEq(data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */,0.0);
    tmp442 = LessEq(data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */,1.0);
    if(!(tmp441 && tmp442))
    {
      tmp444 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp443),tmp444);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp445 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1821
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_1821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1821};
  modelica_boolean tmp446;
  modelica_boolean tmp447;
  static const MMC_DEFSTRINGLIT(tmp448,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp449;
  static int tmp450 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp450)
  {
    tmp446 = GreaterEq(data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */,0.0);
    tmp447 = LessEq(data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */,1.0);
    if(!(tmp446 && tmp447))
    {
      tmp449 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp448),tmp449);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp450 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1822
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,3] >= 0.0 and MatStm3.compMolFrac[3,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,3] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,3], "g"));
*/
void Flowsheet_eqFunction_1822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1822};
  modelica_boolean tmp451;
  modelica_boolean tmp452;
  static const MMC_DEFSTRINGLIT(tmp453,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,3] <= 1.0, has value: ");
  modelica_string tmp454;
  static int tmp455 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp455)
  {
    tmp451 = GreaterEq(data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */,0.0);
    tmp452 = LessEq(data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */,1.0);
    if(!(tmp451 && tmp452))
    {
      tmp454 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp453),tmp454);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,3] >= 0.0 and MatStm3.compMolFrac[3,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp455 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1823
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_1823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1823};
  modelica_boolean tmp456;
  modelica_boolean tmp457;
  static const MMC_DEFSTRINGLIT(tmp458,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp459;
  static int tmp460 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp460)
  {
    tmp456 = GreaterEq(data->localData[0]->realVars[266] /* MatStm3.compMasFrac[1,1] variable */,0.0);
    tmp457 = LessEq(data->localData[0]->realVars[266] /* MatStm3.compMasFrac[1,1] variable */,1.0);
    if(!(tmp456 && tmp457))
    {
      tmp459 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[266] /* MatStm3.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp458),tmp459);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp460 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1824
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_1824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1824};
  modelica_boolean tmp461;
  modelica_boolean tmp462;
  static const MMC_DEFSTRINGLIT(tmp463,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp464;
  static int tmp465 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp465)
  {
    tmp461 = GreaterEq(data->localData[0]->realVars[267] /* MatStm3.compMasFrac[1,2] variable */,0.0);
    tmp462 = LessEq(data->localData[0]->realVars[267] /* MatStm3.compMasFrac[1,2] variable */,1.0);
    if(!(tmp461 && tmp462))
    {
      tmp464 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[267] /* MatStm3.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp463),tmp464);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp465 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1825
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,3] >= 0.0 and MatStm3.compMasFrac[1,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,3] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,3], "g"));
*/
void Flowsheet_eqFunction_1825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1825};
  modelica_boolean tmp466;
  modelica_boolean tmp467;
  static const MMC_DEFSTRINGLIT(tmp468,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,3] <= 1.0, has value: ");
  modelica_string tmp469;
  static int tmp470 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp470)
  {
    tmp466 = GreaterEq(data->localData[0]->realVars[268] /* MatStm3.compMasFrac[1,3] variable */,0.0);
    tmp467 = LessEq(data->localData[0]->realVars[268] /* MatStm3.compMasFrac[1,3] variable */,1.0);
    if(!(tmp466 && tmp467))
    {
      tmp469 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[268] /* MatStm3.compMasFrac[1,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp468),tmp469);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,3] >= 0.0 and MatStm3.compMasFrac[1,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp470 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1826
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_1826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1826};
  modelica_boolean tmp471;
  modelica_boolean tmp472;
  static const MMC_DEFSTRINGLIT(tmp473,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp474;
  static int tmp475 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp475)
  {
    tmp471 = GreaterEq(data->localData[0]->realVars[269] /* MatStm3.compMasFrac[2,1] variable */,0.0);
    tmp472 = LessEq(data->localData[0]->realVars[269] /* MatStm3.compMasFrac[2,1] variable */,1.0);
    if(!(tmp471 && tmp472))
    {
      tmp474 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[269] /* MatStm3.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp473),tmp474);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp475 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1827
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_1827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1827};
  modelica_boolean tmp476;
  modelica_boolean tmp477;
  static const MMC_DEFSTRINGLIT(tmp478,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp479;
  static int tmp480 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp480)
  {
    tmp476 = GreaterEq(data->localData[0]->realVars[270] /* MatStm3.compMasFrac[2,2] variable */,0.0);
    tmp477 = LessEq(data->localData[0]->realVars[270] /* MatStm3.compMasFrac[2,2] variable */,1.0);
    if(!(tmp476 && tmp477))
    {
      tmp479 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[270] /* MatStm3.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp478),tmp479);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp480 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1828
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,3] >= 0.0 and MatStm3.compMasFrac[2,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,3] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,3], "g"));
*/
void Flowsheet_eqFunction_1828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1828};
  modelica_boolean tmp481;
  modelica_boolean tmp482;
  static const MMC_DEFSTRINGLIT(tmp483,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,3] <= 1.0, has value: ");
  modelica_string tmp484;
  static int tmp485 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp485)
  {
    tmp481 = GreaterEq(data->localData[0]->realVars[271] /* MatStm3.compMasFrac[2,3] variable */,0.0);
    tmp482 = LessEq(data->localData[0]->realVars[271] /* MatStm3.compMasFrac[2,3] variable */,1.0);
    if(!(tmp481 && tmp482))
    {
      tmp484 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[271] /* MatStm3.compMasFrac[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp483),tmp484);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,3] >= 0.0 and MatStm3.compMasFrac[2,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp485 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1829
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_1829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1829};
  modelica_boolean tmp486;
  modelica_boolean tmp487;
  static const MMC_DEFSTRINGLIT(tmp488,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp489;
  static int tmp490 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp490)
  {
    tmp486 = GreaterEq(data->localData[0]->realVars[272] /* MatStm3.compMasFrac[3,1] variable */,0.0);
    tmp487 = LessEq(data->localData[0]->realVars[272] /* MatStm3.compMasFrac[3,1] variable */,1.0);
    if(!(tmp486 && tmp487))
    {
      tmp489 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[272] /* MatStm3.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp488),tmp489);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp490 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1830
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_1830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1830};
  modelica_boolean tmp491;
  modelica_boolean tmp492;
  static const MMC_DEFSTRINGLIT(tmp493,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp494;
  static int tmp495 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp495)
  {
    tmp491 = GreaterEq(data->localData[0]->realVars[273] /* MatStm3.compMasFrac[3,2] variable */,0.0);
    tmp492 = LessEq(data->localData[0]->realVars[273] /* MatStm3.compMasFrac[3,2] variable */,1.0);
    if(!(tmp491 && tmp492))
    {
      tmp494 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[273] /* MatStm3.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp493),tmp494);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp495 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1831
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,3] >= 0.0 and MatStm3.compMasFrac[3,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,3] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,3], "g"));
*/
void Flowsheet_eqFunction_1831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1831};
  modelica_boolean tmp496;
  modelica_boolean tmp497;
  static const MMC_DEFSTRINGLIT(tmp498,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,3] <= 1.0, has value: ");
  modelica_string tmp499;
  static int tmp500 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp500)
  {
    tmp496 = GreaterEq(data->localData[0]->realVars[274] /* MatStm3.compMasFrac[3,3] variable */,0.0);
    tmp497 = LessEq(data->localData[0]->realVars[274] /* MatStm3.compMasFrac[3,3] variable */,1.0);
    if(!(tmp496 && tmp497))
    {
      tmp499 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[274] /* MatStm3.compMasFrac[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp498),tmp499);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,3] >= 0.0 and MatStm3.compMasFrac[3,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp500 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1832
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: " + String(MatStm3.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_1832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1832};
  modelica_boolean tmp501;
  static const MMC_DEFSTRINGLIT(tmp502,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: ");
  modelica_string tmp503;
  static int tmp504 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp504)
  {
    tmp501 = GreaterEq(data->localData[0]->realVars[296] /* MatStm3.compMolFlo[2,1] variable */,0.0);
    if(!tmp501)
    {
      tmp503 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[296] /* MatStm3.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp502),tmp503);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp504 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1833
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: " + String(MatStm3.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_1833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1833};
  modelica_boolean tmp505;
  static const MMC_DEFSTRINGLIT(tmp506,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: ");
  modelica_string tmp507;
  static int tmp508 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp508)
  {
    tmp505 = GreaterEq(data->localData[0]->realVars[297] /* MatStm3.compMolFlo[2,2] variable */,0.0);
    if(!tmp505)
    {
      tmp507 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[297] /* MatStm3.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp506),tmp507);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp508 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1834
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,3], has value: " + String(MatStm3.compMolFlo[2,3], "g"));
*/
void Flowsheet_eqFunction_1834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1834};
  modelica_boolean tmp509;
  static const MMC_DEFSTRINGLIT(tmp510,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,3], has value: ");
  modelica_string tmp511;
  static int tmp512 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp512)
  {
    tmp509 = GreaterEq(data->localData[0]->realVars[298] /* MatStm3.compMolFlo[2,3] variable */,0.0);
    if(!tmp509)
    {
      tmp511 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[298] /* MatStm3.compMolFlo[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp510),tmp511);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp512 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1835
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: " + String(MatStm3.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_1835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1835};
  modelica_boolean tmp513;
  static const MMC_DEFSTRINGLIT(tmp514,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: ");
  modelica_string tmp515;
  static int tmp516 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp516)
  {
    tmp513 = GreaterEq(data->localData[0]->realVars[299] /* MatStm3.compMolFlo[3,1] variable */,0.0);
    if(!tmp513)
    {
      tmp515 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[299] /* MatStm3.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp514),tmp515);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp516 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1836
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: " + String(MatStm3.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_1836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1836};
  modelica_boolean tmp517;
  static const MMC_DEFSTRINGLIT(tmp518,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: ");
  modelica_string tmp519;
  static int tmp520 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp520)
  {
    tmp517 = GreaterEq(data->localData[0]->realVars[300] /* MatStm3.compMolFlo[3,2] variable */,0.0);
    if(!tmp517)
    {
      tmp519 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[300] /* MatStm3.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp518),tmp519);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp520 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1837
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,3], has value: " + String(MatStm3.compMolFlo[3,3], "g"));
*/
void Flowsheet_eqFunction_1837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1837};
  modelica_boolean tmp521;
  static const MMC_DEFSTRINGLIT(tmp522,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,3], has value: ");
  modelica_string tmp523;
  static int tmp524 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp524)
  {
    tmp521 = GreaterEq(data->localData[0]->realVars[301] /* MatStm3.compMolFlo[3,3] variable */,0.0);
    if(!tmp521)
    {
      tmp523 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[301] /* MatStm3.compMolFlo[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp522),tmp523);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp524 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1838
type: ALGORITHM

  assert(MatStm3.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: " + String(MatStm3.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_1838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1838};
  modelica_boolean tmp525;
  static const MMC_DEFSTRINGLIT(tmp526,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: ");
  modelica_string tmp527;
  static int tmp528 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp528)
  {
    tmp525 = GreaterEq(data->localData[0]->realVars[260] /* MatStm3.compMasFlo[2,1] variable */,0.0);
    if(!tmp525)
    {
      tmp527 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[260] /* MatStm3.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp526),tmp527);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp528 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1839
type: ALGORITHM

  assert(MatStm3.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: " + String(MatStm3.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_1839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1839};
  modelica_boolean tmp529;
  static const MMC_DEFSTRINGLIT(tmp530,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: ");
  modelica_string tmp531;
  static int tmp532 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp532)
  {
    tmp529 = GreaterEq(data->localData[0]->realVars[261] /* MatStm3.compMasFlo[2,2] variable */,0.0);
    if(!tmp529)
    {
      tmp531 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[261] /* MatStm3.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp530),tmp531);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp532 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1840
type: ALGORITHM

  assert(MatStm3.compMasFlo[2,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,3], has value: " + String(MatStm3.compMasFlo[2,3], "g"));
*/
void Flowsheet_eqFunction_1840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1840};
  modelica_boolean tmp533;
  static const MMC_DEFSTRINGLIT(tmp534,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,3], has value: ");
  modelica_string tmp535;
  static int tmp536 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp536)
  {
    tmp533 = GreaterEq(data->localData[0]->realVars[262] /* MatStm3.compMasFlo[2,3] variable */,0.0);
    if(!tmp533)
    {
      tmp535 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[262] /* MatStm3.compMasFlo[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp534),tmp535);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp536 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1841
type: ALGORITHM

  assert(MatStm3.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: " + String(MatStm3.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_1841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1841};
  modelica_boolean tmp537;
  static const MMC_DEFSTRINGLIT(tmp538,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: ");
  modelica_string tmp539;
  static int tmp540 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp540)
  {
    tmp537 = GreaterEq(data->localData[0]->realVars[263] /* MatStm3.compMasFlo[3,1] variable */,0.0);
    if(!tmp537)
    {
      tmp539 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[263] /* MatStm3.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp538),tmp539);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp540 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1842
type: ALGORITHM

  assert(MatStm3.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: " + String(MatStm3.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_1842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1842};
  modelica_boolean tmp541;
  static const MMC_DEFSTRINGLIT(tmp542,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: ");
  modelica_string tmp543;
  static int tmp544 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp544)
  {
    tmp541 = GreaterEq(data->localData[0]->realVars[264] /* MatStm3.compMasFlo[3,2] variable */,0.0);
    if(!tmp541)
    {
      tmp543 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[264] /* MatStm3.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp542),tmp543);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp544 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1843
type: ALGORITHM

  assert(MatStm3.compMasFlo[3,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,3], has value: " + String(MatStm3.compMasFlo[3,3], "g"));
*/
void Flowsheet_eqFunction_1843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1843};
  modelica_boolean tmp545;
  static const MMC_DEFSTRINGLIT(tmp546,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,3], has value: ");
  modelica_string tmp547;
  static int tmp548 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp548)
  {
    tmp545 = GreaterEq(data->localData[0]->realVars[265] /* MatStm3.compMasFlo[3,3] variable */,0.0);
    if(!tmp545)
    {
      tmp547 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[265] /* MatStm3.compMasFlo[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp546),tmp547);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp548 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1720
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: " + String(MatStm1.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_1720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1720};
  modelica_boolean tmp549;
  static const MMC_DEFSTRINGLIT(tmp550,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: ");
  modelica_string tmp551;
  static int tmp552 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp552)
  {
    tmp549 = GreaterEq(data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */,0.0);
    if(!tmp549)
    {
      tmp551 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp550),tmp551);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp552 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1719
type: ALGORITHM

  assert(MatStm1.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,1], has value: " + String(MatStm1.compMolFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_1719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1719};
  modelica_boolean tmp553;
  static const MMC_DEFSTRINGLIT(tmp554,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,1], has value: ");
  modelica_string tmp555;
  static int tmp556 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp556)
  {
    tmp553 = GreaterEq(data->localData[0]->realVars[56] /* MatStm1.compMolFlo[1,1] variable */,0.0);
    if(!tmp553)
    {
      tmp555 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[56] /* MatStm1.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp554),tmp555);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp556 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1718
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: " + String(MatStm1.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_1718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1718};
  modelica_boolean tmp557;
  static const MMC_DEFSTRINGLIT(tmp558,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: ");
  modelica_string tmp559;
  static int tmp560 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp560)
  {
    tmp557 = GreaterEq(data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */,0.0);
    if(!tmp557)
    {
      tmp559 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp558),tmp559);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp560 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1717
type: ALGORITHM

  assert(MatStm1.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,2], has value: " + String(MatStm1.compMolFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_1717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1717};
  modelica_boolean tmp561;
  static const MMC_DEFSTRINGLIT(tmp562,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,2], has value: ");
  modelica_string tmp563;
  static int tmp564 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp564)
  {
    tmp561 = GreaterEq(data->localData[0]->realVars[57] /* MatStm1.compMolFlo[1,2] variable */,0.0);
    if(!tmp561)
    {
      tmp563 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[57] /* MatStm1.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp562),tmp563);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp564 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1716
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,3], has value: " + String(MatStm1.compMasFlo[1,3], "g"));
*/
void Flowsheet_eqFunction_1716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1716};
  modelica_boolean tmp565;
  static const MMC_DEFSTRINGLIT(tmp566,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,3], has value: ");
  modelica_string tmp567;
  static int tmp568 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp568)
  {
    tmp565 = GreaterEq(data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,3] variable */,0.0);
    if(!tmp565)
    {
      tmp567 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp566),tmp567);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp568 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1715
type: ALGORITHM

  assert(MatStm1.compMolFlo[1,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,3], has value: " + String(MatStm1.compMolFlo[1,3], "g"));
*/
void Flowsheet_eqFunction_1715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1715};
  modelica_boolean tmp569;
  static const MMC_DEFSTRINGLIT(tmp570,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,3], has value: ");
  modelica_string tmp571;
  static int tmp572 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp572)
  {
    tmp569 = GreaterEq(data->localData[0]->realVars[58] /* MatStm1.compMolFlo[1,3] variable */,0.0);
    if(!tmp569)
    {
      tmp571 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[58] /* MatStm1.compMolFlo[1,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp570),tmp571);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[1,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp572 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int Flowsheet_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  Flowsheet_eqFunction_1721(data, threadData);

  Flowsheet_eqFunction_1722(data, threadData);

  Flowsheet_eqFunction_1723(data, threadData);

  Flowsheet_eqFunction_1724(data, threadData);

  Flowsheet_eqFunction_1725(data, threadData);

  Flowsheet_eqFunction_1726(data, threadData);

  Flowsheet_eqFunction_1727(data, threadData);

  Flowsheet_eqFunction_1728(data, threadData);

  Flowsheet_eqFunction_1729(data, threadData);

  Flowsheet_eqFunction_1730(data, threadData);

  Flowsheet_eqFunction_1731(data, threadData);

  Flowsheet_eqFunction_1732(data, threadData);

  Flowsheet_eqFunction_1733(data, threadData);

  Flowsheet_eqFunction_1734(data, threadData);

  Flowsheet_eqFunction_1735(data, threadData);

  Flowsheet_eqFunction_1736(data, threadData);

  Flowsheet_eqFunction_1737(data, threadData);

  Flowsheet_eqFunction_1738(data, threadData);

  Flowsheet_eqFunction_1739(data, threadData);

  Flowsheet_eqFunction_1740(data, threadData);

  Flowsheet_eqFunction_1741(data, threadData);

  Flowsheet_eqFunction_1742(data, threadData);

  Flowsheet_eqFunction_1743(data, threadData);

  Flowsheet_eqFunction_1744(data, threadData);

  Flowsheet_eqFunction_1745(data, threadData);

  Flowsheet_eqFunction_1746(data, threadData);

  Flowsheet_eqFunction_1747(data, threadData);

  Flowsheet_eqFunction_1748(data, threadData);

  Flowsheet_eqFunction_1749(data, threadData);

  Flowsheet_eqFunction_1750(data, threadData);

  Flowsheet_eqFunction_1751(data, threadData);

  Flowsheet_eqFunction_1752(data, threadData);

  Flowsheet_eqFunction_1753(data, threadData);

  Flowsheet_eqFunction_1754(data, threadData);

  Flowsheet_eqFunction_1755(data, threadData);

  Flowsheet_eqFunction_1756(data, threadData);

  Flowsheet_eqFunction_1757(data, threadData);

  Flowsheet_eqFunction_1758(data, threadData);

  Flowsheet_eqFunction_1759(data, threadData);

  Flowsheet_eqFunction_1760(data, threadData);

  Flowsheet_eqFunction_1761(data, threadData);

  Flowsheet_eqFunction_1762(data, threadData);

  Flowsheet_eqFunction_1763(data, threadData);

  Flowsheet_eqFunction_1764(data, threadData);

  Flowsheet_eqFunction_1765(data, threadData);

  Flowsheet_eqFunction_1766(data, threadData);

  Flowsheet_eqFunction_1767(data, threadData);

  Flowsheet_eqFunction_1768(data, threadData);

  Flowsheet_eqFunction_1769(data, threadData);

  Flowsheet_eqFunction_1770(data, threadData);

  Flowsheet_eqFunction_1771(data, threadData);

  Flowsheet_eqFunction_1772(data, threadData);

  Flowsheet_eqFunction_1773(data, threadData);

  Flowsheet_eqFunction_1774(data, threadData);

  Flowsheet_eqFunction_1775(data, threadData);

  Flowsheet_eqFunction_1776(data, threadData);

  Flowsheet_eqFunction_1777(data, threadData);

  Flowsheet_eqFunction_1778(data, threadData);

  Flowsheet_eqFunction_1779(data, threadData);

  Flowsheet_eqFunction_1780(data, threadData);

  Flowsheet_eqFunction_1781(data, threadData);

  Flowsheet_eqFunction_1782(data, threadData);

  Flowsheet_eqFunction_1783(data, threadData);

  Flowsheet_eqFunction_1784(data, threadData);

  Flowsheet_eqFunction_1785(data, threadData);

  Flowsheet_eqFunction_1786(data, threadData);

  Flowsheet_eqFunction_1787(data, threadData);

  Flowsheet_eqFunction_1788(data, threadData);

  Flowsheet_eqFunction_1789(data, threadData);

  Flowsheet_eqFunction_1790(data, threadData);

  Flowsheet_eqFunction_1791(data, threadData);

  Flowsheet_eqFunction_1792(data, threadData);

  Flowsheet_eqFunction_1793(data, threadData);

  Flowsheet_eqFunction_1794(data, threadData);

  Flowsheet_eqFunction_1795(data, threadData);

  Flowsheet_eqFunction_1796(data, threadData);

  Flowsheet_eqFunction_1797(data, threadData);

  Flowsheet_eqFunction_1798(data, threadData);

  Flowsheet_eqFunction_1799(data, threadData);

  Flowsheet_eqFunction_1800(data, threadData);

  Flowsheet_eqFunction_1801(data, threadData);

  Flowsheet_eqFunction_1802(data, threadData);

  Flowsheet_eqFunction_1803(data, threadData);

  Flowsheet_eqFunction_1804(data, threadData);

  Flowsheet_eqFunction_1805(data, threadData);

  Flowsheet_eqFunction_1806(data, threadData);

  Flowsheet_eqFunction_1807(data, threadData);

  Flowsheet_eqFunction_1808(data, threadData);

  Flowsheet_eqFunction_1809(data, threadData);

  Flowsheet_eqFunction_1810(data, threadData);

  Flowsheet_eqFunction_1811(data, threadData);

  Flowsheet_eqFunction_1812(data, threadData);

  Flowsheet_eqFunction_1813(data, threadData);

  Flowsheet_eqFunction_1814(data, threadData);

  Flowsheet_eqFunction_1815(data, threadData);

  Flowsheet_eqFunction_1816(data, threadData);

  Flowsheet_eqFunction_1817(data, threadData);

  Flowsheet_eqFunction_1818(data, threadData);

  Flowsheet_eqFunction_1819(data, threadData);

  Flowsheet_eqFunction_1820(data, threadData);

  Flowsheet_eqFunction_1821(data, threadData);

  Flowsheet_eqFunction_1822(data, threadData);

  Flowsheet_eqFunction_1823(data, threadData);

  Flowsheet_eqFunction_1824(data, threadData);

  Flowsheet_eqFunction_1825(data, threadData);

  Flowsheet_eqFunction_1826(data, threadData);

  Flowsheet_eqFunction_1827(data, threadData);

  Flowsheet_eqFunction_1828(data, threadData);

  Flowsheet_eqFunction_1829(data, threadData);

  Flowsheet_eqFunction_1830(data, threadData);

  Flowsheet_eqFunction_1831(data, threadData);

  Flowsheet_eqFunction_1832(data, threadData);

  Flowsheet_eqFunction_1833(data, threadData);

  Flowsheet_eqFunction_1834(data, threadData);

  Flowsheet_eqFunction_1835(data, threadData);

  Flowsheet_eqFunction_1836(data, threadData);

  Flowsheet_eqFunction_1837(data, threadData);

  Flowsheet_eqFunction_1838(data, threadData);

  Flowsheet_eqFunction_1839(data, threadData);

  Flowsheet_eqFunction_1840(data, threadData);

  Flowsheet_eqFunction_1841(data, threadData);

  Flowsheet_eqFunction_1842(data, threadData);

  Flowsheet_eqFunction_1843(data, threadData);

  Flowsheet_eqFunction_1720(data, threadData);

  Flowsheet_eqFunction_1719(data, threadData);

  Flowsheet_eqFunction_1718(data, threadData);

  Flowsheet_eqFunction_1717(data, threadData);

  Flowsheet_eqFunction_1716(data, threadData);

  Flowsheet_eqFunction_1715(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

