/* Asserts */
#include "Flowsheet_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 2141
type: ALGORITHM

  assert(Splitter1.outMixMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= Splitter1.outMixMasFlo[1], has value: " + String(Splitter1.outMixMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2141};
  modelica_boolean tmp2;
  static const MMC_DEFSTRINGLIT(tmp3,80,"Variable violating min constraint: 0.0 <= Splitter1.outMixMasFlo[1], has value: ");
  modelica_string tmp4;
  static int tmp5 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp5)
  {
    tmp2 = GreaterEq(data->localData[0]->realVars[463] /* Splitter1.outMixMasFlo[1] variable */,0.0);
    if(!tmp2)
    {
      tmp4 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[463] /* Splitter1.outMixMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp3),tmp4);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",5080,7,5080,800,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.outMixMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp5 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2142
type: ALGORITHM

  assert(MatStm1.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.Pbubl, has value: " + String(MatStm1.Pbubl, "g"));
*/
void Flowsheet_eqFunction_2142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2142};
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,68,"Variable violating min constraint: 0.0 <= MatStm1.Pbubl, has value: ");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp9)
  {
    tmp6 = GreaterEq(data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */,0.0);
    if(!tmp6)
    {
      tmp8 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp9 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2143
type: ALGORITHM

  assert(MatStm1.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.Pdew, has value: " + String(MatStm1.Pdew, "g"));
*/
void Flowsheet_eqFunction_2143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2143};
  modelica_boolean tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,67,"Variable violating min constraint: 0.0 <= MatStm1.Pdew, has value: ");
  modelica_string tmp12;
  static int tmp13 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp13)
  {
    tmp10 = GreaterEq(data->localData[0]->realVars[19] /* MatStm1.Pdew variable */,0.0);
    if(!tmp10)
    {
      tmp12 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp11),tmp12);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp13 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2144
type: ALGORITHM

  assert(MatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: " + String(MatStm1.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2144};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp17;
  static int tmp18 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp18)
  {
    tmp14 = GreaterEq(data->localData[0]->realVars[71] /* MatStm1.liqPhasMolFrac variable */,0.0);
    tmp15 = LessEq(data->localData[0]->realVars[71] /* MatStm1.liqPhasMolFrac variable */,1.0);
    if(!(tmp14 && tmp15))
    {
      tmp17 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[71] /* MatStm1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp16),tmp17);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp18 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2145
type: ALGORITHM

  assert(MatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: " + String(MatStm1.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2145};
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp22;
  static int tmp23 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp23)
  {
    tmp19 = GreaterEq(data->localData[0]->realVars[99] /* MatStm1.vapPhasMolFrac variable */,0.0);
    tmp20 = LessEq(data->localData[0]->realVars[99] /* MatStm1.vapPhasMolFrac variable */,1.0);
    if(!(tmp19 && tmp20))
    {
      tmp22 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[99] /* MatStm1.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp23 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2146
type: ALGORITHM

  assert(MatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: " + String(MatStm1.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2146};
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  static const MMC_DEFSTRINGLIT(tmp26,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp27;
  static int tmp28 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp28)
  {
    tmp24 = GreaterEq(data->localData[0]->realVars[70] /* MatStm1.liqPhasMasFrac variable */,0.0);
    tmp25 = LessEq(data->localData[0]->realVars[70] /* MatStm1.liqPhasMasFrac variable */,1.0);
    if(!(tmp24 && tmp25))
    {
      tmp27 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[70] /* MatStm1.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp26),tmp27);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp28 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2147
type: ALGORITHM

  assert(MatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: " + String(MatStm1.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2147};
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  static const MMC_DEFSTRINGLIT(tmp31,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp32;
  static int tmp33 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp33)
  {
    tmp29 = GreaterEq(data->localData[0]->realVars[98] /* MatStm1.vapPhasMasFrac variable */,0.0);
    tmp30 = LessEq(data->localData[0]->realVars[98] /* MatStm1.vapPhasMasFrac variable */,1.0);
    if(!(tmp29 && tmp30))
    {
      tmp32 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[98] /* MatStm1.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp31),tmp32);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp33 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2148
type: ALGORITHM

  assert(MatStm1.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: " + String(MatStm1.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2148};
  modelica_boolean tmp34;
  static const MMC_DEFSTRINGLIT(tmp35,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: ");
  modelica_string tmp36;
  static int tmp37 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp37)
  {
    tmp34 = GreaterEq(data->localData[0]->realVars[96] /* MatStm1.totMolFlo[2] variable */,0.0);
    if(!tmp34)
    {
      tmp36 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[96] /* MatStm1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp35),tmp36);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp37 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2149
type: ALGORITHM

  assert(MatStm1.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: " + String(MatStm1.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2149};
  modelica_boolean tmp38;
  static const MMC_DEFSTRINGLIT(tmp39,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: ");
  modelica_string tmp40;
  static int tmp41 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp41)
  {
    tmp38 = GreaterEq(data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */,0.0);
    if(!tmp38)
    {
      tmp40 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp39),tmp40);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp41 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2150
type: ALGORITHM

  assert(MatStm1.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: " + String(MatStm1.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2150};
  modelica_boolean tmp42;
  static const MMC_DEFSTRINGLIT(tmp43,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: ");
  modelica_string tmp44;
  static int tmp45 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp45)
  {
    tmp42 = GreaterEq(data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */,0.0);
    if(!tmp42)
    {
      tmp44 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp43),tmp44);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp45 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2151
type: ALGORITHM

  assert(MatStm1.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: " + String(MatStm1.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2151};
  modelica_boolean tmp46;
  static const MMC_DEFSTRINGLIT(tmp47,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: ");
  modelica_string tmp48;
  static int tmp49 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp49)
  {
    tmp46 = GreaterEq(data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */,0.0);
    if(!tmp46)
    {
      tmp48 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp47),tmp48);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp49 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2152
type: ALGORITHM

  assert(MatStm1.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: " + String(MatStm1.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2152};
  modelica_boolean tmp50;
  static const MMC_DEFSTRINGLIT(tmp51,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: ");
  modelica_string tmp52;
  static int tmp53 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp53)
  {
    tmp50 = GreaterEq(data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */,0.0);
    if(!tmp50)
    {
      tmp52 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp51),tmp52);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp53 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2153
type: ALGORITHM

  assert(MatStm1.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: " + String(MatStm1.MW[1], "g"));
*/
void Flowsheet_eqFunction_2153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2153};
  modelica_boolean tmp54;
  static const MMC_DEFSTRINGLIT(tmp55,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: ");
  modelica_string tmp56;
  static int tmp57 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp57)
  {
    tmp54 = GreaterEq(data->localData[0]->realVars[15] /* MatStm1.MW[1] variable */,0.0);
    if(!tmp54)
    {
      tmp56 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[15] /* MatStm1.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp55),tmp56);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp57 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2154
type: ALGORITHM

  assert(MatStm1.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: " + String(MatStm1.MW[2], "g"));
*/
void Flowsheet_eqFunction_2154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2154};
  modelica_boolean tmp58;
  static const MMC_DEFSTRINGLIT(tmp59,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: ");
  modelica_string tmp60;
  static int tmp61 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp61)
  {
    tmp58 = GreaterEq(data->localData[0]->realVars[16] /* MatStm1.MW[2] variable */,0.0);
    if(!tmp58)
    {
      tmp60 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[16] /* MatStm1.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp59),tmp60);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp61 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2155
type: ALGORITHM

  assert(MatStm1.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: " + String(MatStm1.MW[3], "g"));
*/
void Flowsheet_eqFunction_2155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2155};
  modelica_boolean tmp62;
  static const MMC_DEFSTRINGLIT(tmp63,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: ");
  modelica_string tmp64;
  static int tmp65 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp65)
  {
    tmp62 = GreaterEq(data->localData[0]->realVars[17] /* MatStm1.MW[3] variable */,0.0);
    if(!tmp62)
    {
      tmp64 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[17] /* MatStm1.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp63),tmp64);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp65 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2156
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2156};
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  static const MMC_DEFSTRINGLIT(tmp68,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp69;
  static int tmp70 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp70)
  {
    tmp66 = GreaterEq(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */,0.0);
    tmp67 = LessEq(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */,1.0);
    if(!(tmp66 && tmp67))
    {
      tmp69 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp68),tmp69);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp70 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2157
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2157};
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  static const MMC_DEFSTRINGLIT(tmp73,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp74;
  static int tmp75 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp75)
  {
    tmp71 = GreaterEq(data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */,0.0);
    tmp72 = LessEq(data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */,1.0);
    if(!(tmp71 && tmp72))
    {
      tmp74 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp73),tmp74);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp75 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2158
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2158};
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  static const MMC_DEFSTRINGLIT(tmp78,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp79;
  static int tmp80 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp80)
  {
    tmp76 = GreaterEq(data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */,0.0);
    tmp77 = LessEq(data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */,1.0);
    if(!(tmp76 && tmp77))
    {
      tmp79 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp78),tmp79);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp80 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2159
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2159};
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  static const MMC_DEFSTRINGLIT(tmp83,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp84;
  static int tmp85 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp85)
  {
    tmp81 = GreaterEq(data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */,0.0);
    tmp82 = LessEq(data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */,1.0);
    if(!(tmp81 && tmp82))
    {
      tmp84 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp83),tmp84);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp85 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2160
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2160};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  static const MMC_DEFSTRINGLIT(tmp88,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp89;
  static int tmp90 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp90)
  {
    tmp86 = GreaterEq(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[1,1] variable */,0.0);
    tmp87 = LessEq(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[1,1] variable */,1.0);
    if(!(tmp86 && tmp87))
    {
      tmp89 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp88),tmp89);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp90 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2161
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2161};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  static const MMC_DEFSTRINGLIT(tmp93,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp94;
  static int tmp95 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp95)
  {
    tmp91 = GreaterEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */,0.0);
    tmp92 = LessEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */,1.0);
    if(!(tmp91 && tmp92))
    {
      tmp94 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp93),tmp94);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp95 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2162
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2162};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  static const MMC_DEFSTRINGLIT(tmp98,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp99;
  static int tmp100 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp100)
  {
    tmp96 = GreaterEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */,0.0);
    tmp97 = LessEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */,1.0);
    if(!(tmp96 && tmp97))
    {
      tmp99 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp98),tmp99);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp100 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2163
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2163};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  static const MMC_DEFSTRINGLIT(tmp103,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp104;
  static int tmp105 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp105)
  {
    tmp101 = GreaterEq(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */,0.0);
    tmp102 = LessEq(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */,1.0);
    if(!(tmp101 && tmp102))
    {
      tmp104 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp103),tmp104);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp105 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2164
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2164};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  static const MMC_DEFSTRINGLIT(tmp108,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp109;
  static int tmp110 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp110)
  {
    tmp106 = GreaterEq(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[3,1] variable */,0.0);
    tmp107 = LessEq(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[3,1] variable */,1.0);
    if(!(tmp106 && tmp107))
    {
      tmp109 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp108),tmp109);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp110 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2165
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2165};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  static const MMC_DEFSTRINGLIT(tmp113,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp114;
  static int tmp115 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp115)
  {
    tmp111 = GreaterEq(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[3,2] variable */,0.0);
    tmp112 = LessEq(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[3,2] variable */,1.0);
    if(!(tmp111 && tmp112))
    {
      tmp114 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp113),tmp114);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp115 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2166
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: " + String(MatStm1.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2166};
  modelica_boolean tmp116;
  static const MMC_DEFSTRINGLIT(tmp117,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: ");
  modelica_string tmp118;
  static int tmp119 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp119)
  {
    tmp116 = GreaterEq(data->localData[0]->realVars[48] /* MatStm1.compMolFlo[2,1] variable */,0.0);
    if(!tmp116)
    {
      tmp118 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[48] /* MatStm1.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp117),tmp118);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp119 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2167
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: " + String(MatStm1.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2167};
  modelica_boolean tmp120;
  static const MMC_DEFSTRINGLIT(tmp121,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: ");
  modelica_string tmp122;
  static int tmp123 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp123)
  {
    tmp120 = GreaterEq(data->localData[0]->realVars[49] /* MatStm1.compMolFlo[2,2] variable */,0.0);
    if(!tmp120)
    {
      tmp122 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[49] /* MatStm1.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp121),tmp122);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp123 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2168
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: " + String(MatStm1.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2168};
  modelica_boolean tmp124;
  static const MMC_DEFSTRINGLIT(tmp125,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: ");
  modelica_string tmp126;
  static int tmp127 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp127)
  {
    tmp124 = GreaterEq(data->localData[0]->realVars[50] /* MatStm1.compMolFlo[3,1] variable */,0.0);
    if(!tmp124)
    {
      tmp126 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[50] /* MatStm1.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp125),tmp126);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp127 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2169
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: " + String(MatStm1.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2169};
  modelica_boolean tmp128;
  static const MMC_DEFSTRINGLIT(tmp129,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: ");
  modelica_string tmp130;
  static int tmp131 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp131)
  {
    tmp128 = GreaterEq(data->localData[0]->realVars[51] /* MatStm1.compMolFlo[3,2] variable */,0.0);
    if(!tmp128)
    {
      tmp130 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[51] /* MatStm1.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp129),tmp130);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp131 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2170
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: " + String(MatStm1.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2170};
  modelica_boolean tmp132;
  static const MMC_DEFSTRINGLIT(tmp133,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: ");
  modelica_string tmp134;
  static int tmp135 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp135)
  {
    tmp132 = GreaterEq(data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,1] variable */,0.0);
    if(!tmp132)
    {
      tmp134 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp133),tmp134);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp135 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2171
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: " + String(MatStm1.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2171};
  modelica_boolean tmp136;
  static const MMC_DEFSTRINGLIT(tmp137,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: ");
  modelica_string tmp138;
  static int tmp139 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp139)
  {
    tmp136 = GreaterEq(data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,2] variable */,0.0);
    if(!tmp136)
    {
      tmp138 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp137),tmp138);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp139 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2172
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: " + String(MatStm1.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2172};
  modelica_boolean tmp140;
  static const MMC_DEFSTRINGLIT(tmp141,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: ");
  modelica_string tmp142;
  static int tmp143 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp143)
  {
    tmp140 = GreaterEq(data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */,0.0);
    if(!tmp140)
    {
      tmp142 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp141),tmp142);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp143 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2173
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: " + String(MatStm1.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2173};
  modelica_boolean tmp144;
  static const MMC_DEFSTRINGLIT(tmp145,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: ");
  modelica_string tmp146;
  static int tmp147 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp147)
  {
    tmp144 = GreaterEq(data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */,0.0);
    if(!tmp144)
    {
      tmp146 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp145),tmp146);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp147 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2174
type: ALGORITHM

  assert(MatStm1.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: " + String(MatStm1.K[1], "g"));
*/
void Flowsheet_eqFunction_2174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2174};
  modelica_boolean tmp148;
  static const MMC_DEFSTRINGLIT(tmp149,67,"Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: ");
  modelica_string tmp150;
  static int tmp151 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp151)
  {
    tmp148 = GreaterEq(data->localData[0]->realVars[13] /* MatStm1.K[1] variable */,0.0);
    if(!tmp148)
    {
      tmp150 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[13] /* MatStm1.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp149),tmp150);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp151 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2175
type: ALGORITHM

  assert(MatStm1.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: " + String(MatStm1.K[2], "g"));
*/
void Flowsheet_eqFunction_2175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2175};
  modelica_boolean tmp152;
  static const MMC_DEFSTRINGLIT(tmp153,67,"Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: ");
  modelica_string tmp154;
  static int tmp155 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp155)
  {
    tmp152 = GreaterEq(data->localData[0]->realVars[14] /* MatStm1.K[2] variable */,0.0);
    if(!tmp152)
    {
      tmp154 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[14] /* MatStm1.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp153),tmp154);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp155 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2176
type: ALGORITHM

  assert(MatStm2.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.Pbubl, has value: " + String(MatStm2.Pbubl, "g"));
*/
void Flowsheet_eqFunction_2176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2176};
  modelica_boolean tmp156;
  static const MMC_DEFSTRINGLIT(tmp157,68,"Variable violating min constraint: 0.0 <= MatStm2.Pbubl, has value: ");
  modelica_string tmp158;
  static int tmp159 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp159)
  {
    tmp156 = GreaterEq(data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */,0.0);
    if(!tmp156)
    {
      tmp158 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp157),tmp158);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp159 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2177
type: ALGORITHM

  assert(MatStm2.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.Pdew, has value: " + String(MatStm2.Pdew, "g"));
*/
void Flowsheet_eqFunction_2177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2177};
  modelica_boolean tmp160;
  static const MMC_DEFSTRINGLIT(tmp161,67,"Variable violating min constraint: 0.0 <= MatStm2.Pdew, has value: ");
  modelica_string tmp162;
  static int tmp163 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp163)
  {
    tmp160 = GreaterEq(data->localData[0]->realVars[108] /* MatStm2.Pdew variable */,0.0);
    if(!tmp160)
    {
      tmp162 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp161),tmp162);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp163 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2178
type: ALGORITHM

  assert(MatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: " + String(MatStm2.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2178};
  modelica_boolean tmp164;
  modelica_boolean tmp165;
  static const MMC_DEFSTRINGLIT(tmp166,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp167;
  static int tmp168 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp168)
  {
    tmp164 = GreaterEq(data->localData[0]->realVars[160] /* MatStm2.liqPhasMolFrac variable */,0.0);
    tmp165 = LessEq(data->localData[0]->realVars[160] /* MatStm2.liqPhasMolFrac variable */,1.0);
    if(!(tmp164 && tmp165))
    {
      tmp167 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[160] /* MatStm2.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp166),tmp167);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp168 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2179
type: ALGORITHM

  assert(MatStm2.vapPhasMolFrac >= 0.0 and MatStm2.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMolFrac <= 1.0, has value: " + String(MatStm2.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2179};
  modelica_boolean tmp169;
  modelica_boolean tmp170;
  static const MMC_DEFSTRINGLIT(tmp171,88,"Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp172;
  static int tmp173 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp173)
  {
    tmp169 = GreaterEq(data->localData[0]->realVars[187] /* MatStm2.vapPhasMolFrac variable */,0.0);
    tmp170 = LessEq(data->localData[0]->realVars[187] /* MatStm2.vapPhasMolFrac variable */,1.0);
    if(!(tmp169 && tmp170))
    {
      tmp172 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[187] /* MatStm2.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp171),tmp172);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.vapPhasMolFrac >= 0.0 and MatStm2.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp173 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2180
type: ALGORITHM

  assert(MatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: " + String(MatStm2.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2180};
  modelica_boolean tmp174;
  modelica_boolean tmp175;
  static const MMC_DEFSTRINGLIT(tmp176,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp177;
  static int tmp178 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp178)
  {
    tmp174 = GreaterEq(data->localData[0]->realVars[159] /* MatStm2.liqPhasMasFrac variable */,0.0);
    tmp175 = LessEq(data->localData[0]->realVars[159] /* MatStm2.liqPhasMasFrac variable */,1.0);
    if(!(tmp174 && tmp175))
    {
      tmp177 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[159] /* MatStm2.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp176),tmp177);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp178 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2181
type: ALGORITHM

  assert(MatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: " + String(MatStm2.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2181};
  modelica_boolean tmp179;
  modelica_boolean tmp180;
  static const MMC_DEFSTRINGLIT(tmp181,88,"Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp182;
  static int tmp183 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp183)
  {
    tmp179 = GreaterEq(data->localData[0]->realVars[186] /* MatStm2.vapPhasMasFrac variable */,0.0);
    tmp180 = LessEq(data->localData[0]->realVars[186] /* MatStm2.vapPhasMasFrac variable */,1.0);
    if(!(tmp179 && tmp180))
    {
      tmp182 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[186] /* MatStm2.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp181),tmp182);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp183 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2182
type: ALGORITHM

  assert(MatStm2.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: " + String(MatStm2.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2182};
  modelica_boolean tmp184;
  static const MMC_DEFSTRINGLIT(tmp185,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: ");
  modelica_string tmp186;
  static int tmp187 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp187)
  {
    tmp184 = GreaterEq(data->localData[0]->realVars[184] /* MatStm2.totMolFlo[2] variable */,0.0);
    if(!tmp184)
    {
      tmp186 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[184] /* MatStm2.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp185),tmp186);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp187 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2183
type: ALGORITHM

  assert(MatStm2.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: " + String(MatStm2.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2183};
  modelica_boolean tmp188;
  static const MMC_DEFSTRINGLIT(tmp189,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: ");
  modelica_string tmp190;
  static int tmp191 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp191)
  {
    tmp188 = GreaterEq(data->localData[0]->realVars[185] /* MatStm2.totMolFlo[3] variable */,0.0);
    if(!tmp188)
    {
      tmp190 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[185] /* MatStm2.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp189),tmp190);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp191 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2184
type: ALGORITHM

  assert(MatStm2.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: " + String(MatStm2.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2184};
  modelica_boolean tmp192;
  static const MMC_DEFSTRINGLIT(tmp193,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: ");
  modelica_string tmp194;
  static int tmp195 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp195)
  {
    tmp192 = GreaterEq(data->localData[0]->realVars[181] /* MatStm2.totMasFlo[1] variable */,0.0);
    if(!tmp192)
    {
      tmp194 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[181] /* MatStm2.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp193),tmp194);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp195 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2185
type: ALGORITHM

  assert(MatStm2.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: " + String(MatStm2.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2185};
  modelica_boolean tmp196;
  static const MMC_DEFSTRINGLIT(tmp197,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: ");
  modelica_string tmp198;
  static int tmp199 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp199)
  {
    tmp196 = GreaterEq(data->localData[0]->realVars[182] /* MatStm2.totMasFlo[2] variable */,0.0);
    if(!tmp196)
    {
      tmp198 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[182] /* MatStm2.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp197),tmp198);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp199 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2186
type: ALGORITHM

  assert(MatStm2.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: " + String(MatStm2.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2186};
  modelica_boolean tmp200;
  static const MMC_DEFSTRINGLIT(tmp201,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: ");
  modelica_string tmp202;
  static int tmp203 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp203)
  {
    tmp200 = GreaterEq(data->localData[0]->realVars[183] /* MatStm2.totMasFlo[3] variable */,0.0);
    if(!tmp200)
    {
      tmp202 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[183] /* MatStm2.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp201),tmp202);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp203 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2187
type: ALGORITHM

  assert(MatStm2.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: " + String(MatStm2.MW[1], "g"));
*/
void Flowsheet_eqFunction_2187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2187};
  modelica_boolean tmp204;
  static const MMC_DEFSTRINGLIT(tmp205,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: ");
  modelica_string tmp206;
  static int tmp207 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp207)
  {
    tmp204 = GreaterEq(data->localData[0]->realVars[104] /* MatStm2.MW[1] variable */,0.0);
    if(!tmp204)
    {
      tmp206 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[104] /* MatStm2.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp205),tmp206);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp207 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2188
type: ALGORITHM

  assert(MatStm2.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: " + String(MatStm2.MW[2], "g"));
*/
void Flowsheet_eqFunction_2188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2188};
  modelica_boolean tmp208;
  static const MMC_DEFSTRINGLIT(tmp209,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: ");
  modelica_string tmp210;
  static int tmp211 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp211)
  {
    tmp208 = GreaterEq(data->localData[0]->realVars[105] /* MatStm2.MW[2] variable */,0.0);
    if(!tmp208)
    {
      tmp210 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[105] /* MatStm2.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp209),tmp210);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp211 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2189
type: ALGORITHM

  assert(MatStm2.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: " + String(MatStm2.MW[3], "g"));
*/
void Flowsheet_eqFunction_2189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2189};
  modelica_boolean tmp212;
  static const MMC_DEFSTRINGLIT(tmp213,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: ");
  modelica_string tmp214;
  static int tmp215 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp215)
  {
    tmp212 = GreaterEq(data->localData[0]->realVars[106] /* MatStm2.MW[3] variable */,0.0);
    if(!tmp212)
    {
      tmp214 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[106] /* MatStm2.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp213),tmp214);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp215 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2190
type: ALGORITHM

  assert(MatStm2.compMolFrac[1,1] >= 0.0 and MatStm2.compMolFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2190};
  modelica_boolean tmp216;
  modelica_boolean tmp217;
  static const MMC_DEFSTRINGLIT(tmp218,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp219;
  static int tmp220 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp220)
  {
    tmp216 = GreaterEq(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[1,1] variable */,0.0);
    tmp217 = LessEq(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[1,1] variable */,1.0);
    if(!(tmp216 && tmp217))
    {
      tmp219 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp218),tmp219);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[1,1] >= 0.0 and MatStm2.compMolFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp220 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2191
type: ALGORITHM

  assert(MatStm2.compMolFrac[1,2] >= 0.0 and MatStm2.compMolFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2191};
  modelica_boolean tmp221;
  modelica_boolean tmp222;
  static const MMC_DEFSTRINGLIT(tmp223,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp224;
  static int tmp225 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp225)
  {
    tmp221 = GreaterEq(data->localData[0]->realVars[142] /* MatStm2.compMolFrac[1,2] variable */,0.0);
    tmp222 = LessEq(data->localData[0]->realVars[142] /* MatStm2.compMolFrac[1,2] variable */,1.0);
    if(!(tmp221 && tmp222))
    {
      tmp224 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[142] /* MatStm2.compMolFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp223),tmp224);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[1,2] >= 0.0 and MatStm2.compMolFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp225 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2192
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2192};
  modelica_boolean tmp226;
  modelica_boolean tmp227;
  static const MMC_DEFSTRINGLIT(tmp228,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp229;
  static int tmp230 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp230)
  {
    tmp226 = GreaterEq(data->localData[0]->realVars[143] /* MatStm2.compMolFrac[2,1] variable */,0.0);
    tmp227 = LessEq(data->localData[0]->realVars[143] /* MatStm2.compMolFrac[2,1] variable */,1.0);
    if(!(tmp226 && tmp227))
    {
      tmp229 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[143] /* MatStm2.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp228),tmp229);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp230 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2193
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2193};
  modelica_boolean tmp231;
  modelica_boolean tmp232;
  static const MMC_DEFSTRINGLIT(tmp233,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp234;
  static int tmp235 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp235)
  {
    tmp231 = GreaterEq(data->localData[0]->realVars[144] /* MatStm2.compMolFrac[2,2] variable */,0.0);
    tmp232 = LessEq(data->localData[0]->realVars[144] /* MatStm2.compMolFrac[2,2] variable */,1.0);
    if(!(tmp231 && tmp232))
    {
      tmp234 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[144] /* MatStm2.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp233),tmp234);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp235 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2194
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2194};
  modelica_boolean tmp236;
  modelica_boolean tmp237;
  static const MMC_DEFSTRINGLIT(tmp238,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp239;
  static int tmp240 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp240)
  {
    tmp236 = GreaterEq(data->localData[0]->realVars[145] /* MatStm2.compMolFrac[3,1] variable */,0.0);
    tmp237 = LessEq(data->localData[0]->realVars[145] /* MatStm2.compMolFrac[3,1] variable */,1.0);
    if(!(tmp236 && tmp237))
    {
      tmp239 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[145] /* MatStm2.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp238),tmp239);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp240 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2195
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2195};
  modelica_boolean tmp241;
  modelica_boolean tmp242;
  static const MMC_DEFSTRINGLIT(tmp243,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp244;
  static int tmp245 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp245)
  {
    tmp241 = GreaterEq(data->localData[0]->realVars[146] /* MatStm2.compMolFrac[3,2] variable */,0.0);
    tmp242 = LessEq(data->localData[0]->realVars[146] /* MatStm2.compMolFrac[3,2] variable */,1.0);
    if(!(tmp241 && tmp242))
    {
      tmp244 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[146] /* MatStm2.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp243),tmp244);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp245 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2196
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2196};
  modelica_boolean tmp246;
  modelica_boolean tmp247;
  static const MMC_DEFSTRINGLIT(tmp248,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp249;
  static int tmp250 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp250)
  {
    tmp246 = GreaterEq(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[1,1] variable */,0.0);
    tmp247 = LessEq(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[1,1] variable */,1.0);
    if(!(tmp246 && tmp247))
    {
      tmp249 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp248),tmp249);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp250 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2197
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2197};
  modelica_boolean tmp251;
  modelica_boolean tmp252;
  static const MMC_DEFSTRINGLIT(tmp253,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp254;
  static int tmp255 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp255)
  {
    tmp251 = GreaterEq(data->localData[0]->realVars[118] /* MatStm2.compMasFrac[1,2] variable */,0.0);
    tmp252 = LessEq(data->localData[0]->realVars[118] /* MatStm2.compMasFrac[1,2] variable */,1.0);
    if(!(tmp251 && tmp252))
    {
      tmp254 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[118] /* MatStm2.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp253),tmp254);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp255 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2198
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2198};
  modelica_boolean tmp256;
  modelica_boolean tmp257;
  static const MMC_DEFSTRINGLIT(tmp258,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp259;
  static int tmp260 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp260)
  {
    tmp256 = GreaterEq(data->localData[0]->realVars[119] /* MatStm2.compMasFrac[2,1] variable */,0.0);
    tmp257 = LessEq(data->localData[0]->realVars[119] /* MatStm2.compMasFrac[2,1] variable */,1.0);
    if(!(tmp256 && tmp257))
    {
      tmp259 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[119] /* MatStm2.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp258),tmp259);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp260 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2199
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2199};
  modelica_boolean tmp261;
  modelica_boolean tmp262;
  static const MMC_DEFSTRINGLIT(tmp263,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp264;
  static int tmp265 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp265)
  {
    tmp261 = GreaterEq(data->localData[0]->realVars[120] /* MatStm2.compMasFrac[2,2] variable */,0.0);
    tmp262 = LessEq(data->localData[0]->realVars[120] /* MatStm2.compMasFrac[2,2] variable */,1.0);
    if(!(tmp261 && tmp262))
    {
      tmp264 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[120] /* MatStm2.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp263),tmp264);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp265 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2200
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2200};
  modelica_boolean tmp266;
  modelica_boolean tmp267;
  static const MMC_DEFSTRINGLIT(tmp268,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp269;
  static int tmp270 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp270)
  {
    tmp266 = GreaterEq(data->localData[0]->realVars[121] /* MatStm2.compMasFrac[3,1] variable */,0.0);
    tmp267 = LessEq(data->localData[0]->realVars[121] /* MatStm2.compMasFrac[3,1] variable */,1.0);
    if(!(tmp266 && tmp267))
    {
      tmp269 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[121] /* MatStm2.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp268),tmp269);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp270 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2201
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2201};
  modelica_boolean tmp271;
  modelica_boolean tmp272;
  static const MMC_DEFSTRINGLIT(tmp273,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp274;
  static int tmp275 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp275)
  {
    tmp271 = GreaterEq(data->localData[0]->realVars[122] /* MatStm2.compMasFrac[3,2] variable */,0.0);
    tmp272 = LessEq(data->localData[0]->realVars[122] /* MatStm2.compMasFrac[3,2] variable */,1.0);
    if(!(tmp271 && tmp272))
    {
      tmp274 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[122] /* MatStm2.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp273),tmp274);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp275 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2202
type: ALGORITHM

  assert(MatStm2.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,1], has value: " + String(MatStm2.compMolFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2202};
  modelica_boolean tmp276;
  static const MMC_DEFSTRINGLIT(tmp277,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,1], has value: ");
  modelica_string tmp278;
  static int tmp279 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp279)
  {
    tmp276 = GreaterEq(data->localData[0]->realVars[135] /* MatStm2.compMolFlo[1,1] variable */,0.0);
    if(!tmp276)
    {
      tmp278 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[135] /* MatStm2.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp277),tmp278);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp279 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2203
type: ALGORITHM

  assert(MatStm2.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,2], has value: " + String(MatStm2.compMolFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2203};
  modelica_boolean tmp280;
  static const MMC_DEFSTRINGLIT(tmp281,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,2], has value: ");
  modelica_string tmp282;
  static int tmp283 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp283)
  {
    tmp280 = GreaterEq(data->localData[0]->realVars[136] /* MatStm2.compMolFlo[1,2] variable */,0.0);
    if(!tmp280)
    {
      tmp282 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[136] /* MatStm2.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp281),tmp282);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp283 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2204
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: " + String(MatStm2.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2204};
  modelica_boolean tmp284;
  static const MMC_DEFSTRINGLIT(tmp285,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: ");
  modelica_string tmp286;
  static int tmp287 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp287)
  {
    tmp284 = GreaterEq(data->localData[0]->realVars[137] /* MatStm2.compMolFlo[2,1] variable */,0.0);
    if(!tmp284)
    {
      tmp286 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[137] /* MatStm2.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp285),tmp286);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp287 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2205
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: " + String(MatStm2.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2205};
  modelica_boolean tmp288;
  static const MMC_DEFSTRINGLIT(tmp289,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: ");
  modelica_string tmp290;
  static int tmp291 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp291)
  {
    tmp288 = GreaterEq(data->localData[0]->realVars[138] /* MatStm2.compMolFlo[2,2] variable */,0.0);
    if(!tmp288)
    {
      tmp290 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[138] /* MatStm2.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp289),tmp290);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp291 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2206
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: " + String(MatStm2.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2206};
  modelica_boolean tmp292;
  static const MMC_DEFSTRINGLIT(tmp293,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: ");
  modelica_string tmp294;
  static int tmp295 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp295)
  {
    tmp292 = GreaterEq(data->localData[0]->realVars[139] /* MatStm2.compMolFlo[3,1] variable */,0.0);
    if(!tmp292)
    {
      tmp294 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[139] /* MatStm2.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp293),tmp294);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp295 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2207
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: " + String(MatStm2.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2207};
  modelica_boolean tmp296;
  static const MMC_DEFSTRINGLIT(tmp297,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: ");
  modelica_string tmp298;
  static int tmp299 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp299)
  {
    tmp296 = GreaterEq(data->localData[0]->realVars[140] /* MatStm2.compMolFlo[3,2] variable */,0.0);
    if(!tmp296)
    {
      tmp298 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[140] /* MatStm2.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp297),tmp298);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp299 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2208
type: ALGORITHM

  assert(MatStm2.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,1], has value: " + String(MatStm2.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2208};
  modelica_boolean tmp300;
  static const MMC_DEFSTRINGLIT(tmp301,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,1], has value: ");
  modelica_string tmp302;
  static int tmp303 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp303)
  {
    tmp300 = GreaterEq(data->localData[0]->realVars[111] /* MatStm2.compMasFlo[1,1] variable */,0.0);
    if(!tmp300)
    {
      tmp302 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[111] /* MatStm2.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp301),tmp302);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp303 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2209
type: ALGORITHM

  assert(MatStm2.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,2], has value: " + String(MatStm2.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2209};
  modelica_boolean tmp304;
  static const MMC_DEFSTRINGLIT(tmp305,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,2], has value: ");
  modelica_string tmp306;
  static int tmp307 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp307)
  {
    tmp304 = GreaterEq(data->localData[0]->realVars[112] /* MatStm2.compMasFlo[1,2] variable */,0.0);
    if(!tmp304)
    {
      tmp306 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[112] /* MatStm2.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp305),tmp306);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp307 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2210
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: " + String(MatStm2.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2210};
  modelica_boolean tmp308;
  static const MMC_DEFSTRINGLIT(tmp309,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: ");
  modelica_string tmp310;
  static int tmp311 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp311)
  {
    tmp308 = GreaterEq(data->localData[0]->realVars[113] /* MatStm2.compMasFlo[2,1] variable */,0.0);
    if(!tmp308)
    {
      tmp310 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[113] /* MatStm2.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp309),tmp310);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp311 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2211
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: " + String(MatStm2.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2211};
  modelica_boolean tmp312;
  static const MMC_DEFSTRINGLIT(tmp313,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: ");
  modelica_string tmp314;
  static int tmp315 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp315)
  {
    tmp312 = GreaterEq(data->localData[0]->realVars[114] /* MatStm2.compMasFlo[2,2] variable */,0.0);
    if(!tmp312)
    {
      tmp314 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[114] /* MatStm2.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp313),tmp314);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp315 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2212
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: " + String(MatStm2.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2212};
  modelica_boolean tmp316;
  static const MMC_DEFSTRINGLIT(tmp317,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: ");
  modelica_string tmp318;
  static int tmp319 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp319)
  {
    tmp316 = GreaterEq(data->localData[0]->realVars[115] /* MatStm2.compMasFlo[3,1] variable */,0.0);
    if(!tmp316)
    {
      tmp318 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[115] /* MatStm2.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp317),tmp318);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp319 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2213
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: " + String(MatStm2.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2213};
  modelica_boolean tmp320;
  static const MMC_DEFSTRINGLIT(tmp321,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: ");
  modelica_string tmp322;
  static int tmp323 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp323)
  {
    tmp320 = GreaterEq(data->localData[0]->realVars[116] /* MatStm2.compMasFlo[3,2] variable */,0.0);
    if(!tmp320)
    {
      tmp322 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[116] /* MatStm2.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp321),tmp322);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp323 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2214
type: ALGORITHM

  assert(MatStm2.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.K[1], has value: " + String(MatStm2.K[1], "g"));
*/
void Flowsheet_eqFunction_2214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2214};
  modelica_boolean tmp324;
  static const MMC_DEFSTRINGLIT(tmp325,67,"Variable violating min constraint: 0.0 <= MatStm2.K[1], has value: ");
  modelica_string tmp326;
  static int tmp327 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp327)
  {
    tmp324 = GreaterEq(data->localData[0]->realVars[102] /* MatStm2.K[1] variable */,0.0);
    if(!tmp324)
    {
      tmp326 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[102] /* MatStm2.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp325),tmp326);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp327 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2215
type: ALGORITHM

  assert(MatStm2.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.K[2], has value: " + String(MatStm2.K[2], "g"));
*/
void Flowsheet_eqFunction_2215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2215};
  modelica_boolean tmp328;
  static const MMC_DEFSTRINGLIT(tmp329,67,"Variable violating min constraint: 0.0 <= MatStm2.K[2], has value: ");
  modelica_string tmp330;
  static int tmp331 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp331)
  {
    tmp328 = GreaterEq(data->localData[0]->realVars[103] /* MatStm2.K[2] variable */,0.0);
    if(!tmp328)
    {
      tmp330 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[103] /* MatStm2.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp329),tmp330);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp331 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2216
type: ALGORITHM

  assert(MatStm3.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.Pbubl, has value: " + String(MatStm3.Pbubl, "g"));
*/
void Flowsheet_eqFunction_2216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2216};
  modelica_boolean tmp332;
  static const MMC_DEFSTRINGLIT(tmp333,68,"Variable violating min constraint: 0.0 <= MatStm3.Pbubl, has value: ");
  modelica_string tmp334;
  static int tmp335 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp335)
  {
    tmp332 = GreaterEq(data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */,0.0);
    if(!tmp332)
    {
      tmp334 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp333),tmp334);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp335 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2217
type: ALGORITHM

  assert(MatStm3.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.Pdew, has value: " + String(MatStm3.Pdew, "g"));
*/
void Flowsheet_eqFunction_2217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2217};
  modelica_boolean tmp336;
  static const MMC_DEFSTRINGLIT(tmp337,67,"Variable violating min constraint: 0.0 <= MatStm3.Pdew, has value: ");
  modelica_string tmp338;
  static int tmp339 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp339)
  {
    tmp336 = GreaterEq(data->localData[0]->realVars[196] /* MatStm3.Pdew variable */,0.0);
    if(!tmp336)
    {
      tmp338 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp337),tmp338);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp339 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2218
type: ALGORITHM

  assert(MatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: " + String(MatStm3.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2218};
  modelica_boolean tmp340;
  modelica_boolean tmp341;
  static const MMC_DEFSTRINGLIT(tmp342,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp343;
  static int tmp344 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp344)
  {
    tmp340 = GreaterEq(data->localData[0]->realVars[248] /* MatStm3.liqPhasMolFrac variable */,0.0);
    tmp341 = LessEq(data->localData[0]->realVars[248] /* MatStm3.liqPhasMolFrac variable */,1.0);
    if(!(tmp340 && tmp341))
    {
      tmp343 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[248] /* MatStm3.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp342),tmp343);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp344 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2219
type: ALGORITHM

  assert(MatStm3.vapPhasMolFrac >= 0.0 and MatStm3.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMolFrac <= 1.0, has value: " + String(MatStm3.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2219};
  modelica_boolean tmp345;
  modelica_boolean tmp346;
  static const MMC_DEFSTRINGLIT(tmp347,88,"Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp348;
  static int tmp349 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp349)
  {
    tmp345 = GreaterEq(data->localData[0]->realVars[275] /* MatStm3.vapPhasMolFrac variable */,0.0);
    tmp346 = LessEq(data->localData[0]->realVars[275] /* MatStm3.vapPhasMolFrac variable */,1.0);
    if(!(tmp345 && tmp346))
    {
      tmp348 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[275] /* MatStm3.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp347),tmp348);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.vapPhasMolFrac >= 0.0 and MatStm3.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp349 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2220
type: ALGORITHM

  assert(MatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: " + String(MatStm3.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2220};
  modelica_boolean tmp350;
  modelica_boolean tmp351;
  static const MMC_DEFSTRINGLIT(tmp352,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp353;
  static int tmp354 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp354)
  {
    tmp350 = GreaterEq(data->localData[0]->realVars[247] /* MatStm3.liqPhasMasFrac variable */,0.0);
    tmp351 = LessEq(data->localData[0]->realVars[247] /* MatStm3.liqPhasMasFrac variable */,1.0);
    if(!(tmp350 && tmp351))
    {
      tmp353 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[247] /* MatStm3.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp352),tmp353);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp354 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2221
type: ALGORITHM

  assert(MatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: " + String(MatStm3.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2221};
  modelica_boolean tmp355;
  modelica_boolean tmp356;
  static const MMC_DEFSTRINGLIT(tmp357,88,"Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp358;
  static int tmp359 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp359)
  {
    tmp355 = GreaterEq(data->localData[0]->realVars[274] /* MatStm3.vapPhasMasFrac variable */,0.0);
    tmp356 = LessEq(data->localData[0]->realVars[274] /* MatStm3.vapPhasMasFrac variable */,1.0);
    if(!(tmp355 && tmp356))
    {
      tmp358 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[274] /* MatStm3.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp357),tmp358);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp359 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2222
type: ALGORITHM

  assert(MatStm3.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: " + String(MatStm3.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2222};
  modelica_boolean tmp360;
  static const MMC_DEFSTRINGLIT(tmp361,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: ");
  modelica_string tmp362;
  static int tmp363 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp363)
  {
    tmp360 = GreaterEq(data->localData[0]->realVars[272] /* MatStm3.totMolFlo[2] variable */,0.0);
    if(!tmp360)
    {
      tmp362 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[272] /* MatStm3.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp361),tmp362);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp363 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2223
type: ALGORITHM

  assert(MatStm3.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: " + String(MatStm3.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2223};
  modelica_boolean tmp364;
  static const MMC_DEFSTRINGLIT(tmp365,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: ");
  modelica_string tmp366;
  static int tmp367 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp367)
  {
    tmp364 = GreaterEq(data->localData[0]->realVars[273] /* MatStm3.totMolFlo[3] variable */,0.0);
    if(!tmp364)
    {
      tmp366 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[273] /* MatStm3.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp365),tmp366);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp367 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2224
type: ALGORITHM

  assert(MatStm3.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: " + String(MatStm3.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2224};
  modelica_boolean tmp368;
  static const MMC_DEFSTRINGLIT(tmp369,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: ");
  modelica_string tmp370;
  static int tmp371 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp371)
  {
    tmp368 = GreaterEq(data->localData[0]->realVars[269] /* MatStm3.totMasFlo[1] variable */,0.0);
    if(!tmp368)
    {
      tmp370 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[269] /* MatStm3.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp369),tmp370);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp371 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2225
type: ALGORITHM

  assert(MatStm3.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: " + String(MatStm3.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2225};
  modelica_boolean tmp372;
  static const MMC_DEFSTRINGLIT(tmp373,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: ");
  modelica_string tmp374;
  static int tmp375 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp375)
  {
    tmp372 = GreaterEq(data->localData[0]->realVars[270] /* MatStm3.totMasFlo[2] variable */,0.0);
    if(!tmp372)
    {
      tmp374 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[270] /* MatStm3.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp373),tmp374);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp375 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2226
type: ALGORITHM

  assert(MatStm3.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: " + String(MatStm3.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2226};
  modelica_boolean tmp376;
  static const MMC_DEFSTRINGLIT(tmp377,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: ");
  modelica_string tmp378;
  static int tmp379 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp379)
  {
    tmp376 = GreaterEq(data->localData[0]->realVars[271] /* MatStm3.totMasFlo[3] variable */,0.0);
    if(!tmp376)
    {
      tmp378 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[271] /* MatStm3.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp377),tmp378);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp379 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2227
type: ALGORITHM

  assert(MatStm3.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: " + String(MatStm3.MW[1], "g"));
*/
void Flowsheet_eqFunction_2227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2227};
  modelica_boolean tmp380;
  static const MMC_DEFSTRINGLIT(tmp381,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: ");
  modelica_string tmp382;
  static int tmp383 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp383)
  {
    tmp380 = GreaterEq(data->localData[0]->realVars[192] /* MatStm3.MW[1] variable */,0.0);
    if(!tmp380)
    {
      tmp382 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[192] /* MatStm3.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp381),tmp382);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp383 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2228
type: ALGORITHM

  assert(MatStm3.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: " + String(MatStm3.MW[2], "g"));
*/
void Flowsheet_eqFunction_2228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2228};
  modelica_boolean tmp384;
  static const MMC_DEFSTRINGLIT(tmp385,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: ");
  modelica_string tmp386;
  static int tmp387 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp387)
  {
    tmp384 = GreaterEq(data->localData[0]->realVars[193] /* MatStm3.MW[2] variable */,0.0);
    if(!tmp384)
    {
      tmp386 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[193] /* MatStm3.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp385),tmp386);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp387 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2229
type: ALGORITHM

  assert(MatStm3.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: " + String(MatStm3.MW[3], "g"));
*/
void Flowsheet_eqFunction_2229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2229};
  modelica_boolean tmp388;
  static const MMC_DEFSTRINGLIT(tmp389,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: ");
  modelica_string tmp390;
  static int tmp391 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp391)
  {
    tmp388 = GreaterEq(data->localData[0]->realVars[194] /* MatStm3.MW[3] variable */,0.0);
    if(!tmp388)
    {
      tmp390 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[194] /* MatStm3.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp389),tmp390);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp391 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2230
type: ALGORITHM

  assert(MatStm3.compMolFrac[1,1] >= 0.0 and MatStm3.compMolFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[1,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2230};
  modelica_boolean tmp392;
  modelica_boolean tmp393;
  static const MMC_DEFSTRINGLIT(tmp394,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp395;
  static int tmp396 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp396)
  {
    tmp392 = GreaterEq(data->localData[0]->realVars[229] /* MatStm3.compMolFrac[1,1] variable */,0.0);
    tmp393 = LessEq(data->localData[0]->realVars[229] /* MatStm3.compMolFrac[1,1] variable */,1.0);
    if(!(tmp392 && tmp393))
    {
      tmp395 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[229] /* MatStm3.compMolFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp394),tmp395);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[1,1] >= 0.0 and MatStm3.compMolFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp396 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2231
type: ALGORITHM

  assert(MatStm3.compMolFrac[1,2] >= 0.0 and MatStm3.compMolFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[1,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2231};
  modelica_boolean tmp397;
  modelica_boolean tmp398;
  static const MMC_DEFSTRINGLIT(tmp399,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp400;
  static int tmp401 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp401)
  {
    tmp397 = GreaterEq(data->localData[0]->realVars[230] /* MatStm3.compMolFrac[1,2] variable */,0.0);
    tmp398 = LessEq(data->localData[0]->realVars[230] /* MatStm3.compMolFrac[1,2] variable */,1.0);
    if(!(tmp397 && tmp398))
    {
      tmp400 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[230] /* MatStm3.compMolFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp399),tmp400);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[1,2] >= 0.0 and MatStm3.compMolFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp401 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2232
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2232};
  modelica_boolean tmp402;
  modelica_boolean tmp403;
  static const MMC_DEFSTRINGLIT(tmp404,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp405;
  static int tmp406 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp406)
  {
    tmp402 = GreaterEq(data->localData[0]->realVars[231] /* MatStm3.compMolFrac[2,1] variable */,0.0);
    tmp403 = LessEq(data->localData[0]->realVars[231] /* MatStm3.compMolFrac[2,1] variable */,1.0);
    if(!(tmp402 && tmp403))
    {
      tmp405 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[231] /* MatStm3.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp404),tmp405);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp406 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2233
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2233};
  modelica_boolean tmp407;
  modelica_boolean tmp408;
  static const MMC_DEFSTRINGLIT(tmp409,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp410;
  static int tmp411 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp411)
  {
    tmp407 = GreaterEq(data->localData[0]->realVars[232] /* MatStm3.compMolFrac[2,2] variable */,0.0);
    tmp408 = LessEq(data->localData[0]->realVars[232] /* MatStm3.compMolFrac[2,2] variable */,1.0);
    if(!(tmp407 && tmp408))
    {
      tmp410 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[232] /* MatStm3.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp409),tmp410);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp411 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2234
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2234};
  modelica_boolean tmp412;
  modelica_boolean tmp413;
  static const MMC_DEFSTRINGLIT(tmp414,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp415;
  static int tmp416 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp416)
  {
    tmp412 = GreaterEq(data->localData[0]->realVars[233] /* MatStm3.compMolFrac[3,1] variable */,0.0);
    tmp413 = LessEq(data->localData[0]->realVars[233] /* MatStm3.compMolFrac[3,1] variable */,1.0);
    if(!(tmp412 && tmp413))
    {
      tmp415 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[233] /* MatStm3.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp414),tmp415);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp416 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2235
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2235};
  modelica_boolean tmp417;
  modelica_boolean tmp418;
  static const MMC_DEFSTRINGLIT(tmp419,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp420;
  static int tmp421 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp421)
  {
    tmp417 = GreaterEq(data->localData[0]->realVars[234] /* MatStm3.compMolFrac[3,2] variable */,0.0);
    tmp418 = LessEq(data->localData[0]->realVars[234] /* MatStm3.compMolFrac[3,2] variable */,1.0);
    if(!(tmp417 && tmp418))
    {
      tmp420 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[234] /* MatStm3.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp419),tmp420);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp421 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2236
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2236};
  modelica_boolean tmp422;
  modelica_boolean tmp423;
  static const MMC_DEFSTRINGLIT(tmp424,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp425;
  static int tmp426 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp426)
  {
    tmp422 = GreaterEq(data->localData[0]->realVars[205] /* MatStm3.compMasFrac[1,1] variable */,0.0);
    tmp423 = LessEq(data->localData[0]->realVars[205] /* MatStm3.compMasFrac[1,1] variable */,1.0);
    if(!(tmp422 && tmp423))
    {
      tmp425 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[205] /* MatStm3.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp424),tmp425);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp426 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2237
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2237};
  modelica_boolean tmp427;
  modelica_boolean tmp428;
  static const MMC_DEFSTRINGLIT(tmp429,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp430;
  static int tmp431 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp431)
  {
    tmp427 = GreaterEq(data->localData[0]->realVars[206] /* MatStm3.compMasFrac[1,2] variable */,0.0);
    tmp428 = LessEq(data->localData[0]->realVars[206] /* MatStm3.compMasFrac[1,2] variable */,1.0);
    if(!(tmp427 && tmp428))
    {
      tmp430 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[206] /* MatStm3.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp429),tmp430);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp431 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2238
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2238};
  modelica_boolean tmp432;
  modelica_boolean tmp433;
  static const MMC_DEFSTRINGLIT(tmp434,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp435;
  static int tmp436 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp436)
  {
    tmp432 = GreaterEq(data->localData[0]->realVars[207] /* MatStm3.compMasFrac[2,1] variable */,0.0);
    tmp433 = LessEq(data->localData[0]->realVars[207] /* MatStm3.compMasFrac[2,1] variable */,1.0);
    if(!(tmp432 && tmp433))
    {
      tmp435 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[207] /* MatStm3.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp434),tmp435);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp436 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2239
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2239};
  modelica_boolean tmp437;
  modelica_boolean tmp438;
  static const MMC_DEFSTRINGLIT(tmp439,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp440;
  static int tmp441 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp441)
  {
    tmp437 = GreaterEq(data->localData[0]->realVars[208] /* MatStm3.compMasFrac[2,2] variable */,0.0);
    tmp438 = LessEq(data->localData[0]->realVars[208] /* MatStm3.compMasFrac[2,2] variable */,1.0);
    if(!(tmp437 && tmp438))
    {
      tmp440 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[208] /* MatStm3.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp439),tmp440);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp441 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2240
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2240};
  modelica_boolean tmp442;
  modelica_boolean tmp443;
  static const MMC_DEFSTRINGLIT(tmp444,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp445;
  static int tmp446 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp446)
  {
    tmp442 = GreaterEq(data->localData[0]->realVars[209] /* MatStm3.compMasFrac[3,1] variable */,0.0);
    tmp443 = LessEq(data->localData[0]->realVars[209] /* MatStm3.compMasFrac[3,1] variable */,1.0);
    if(!(tmp442 && tmp443))
    {
      tmp445 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[209] /* MatStm3.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp444),tmp445);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp446 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2241
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2241};
  modelica_boolean tmp447;
  modelica_boolean tmp448;
  static const MMC_DEFSTRINGLIT(tmp449,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp450;
  static int tmp451 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp451)
  {
    tmp447 = GreaterEq(data->localData[0]->realVars[210] /* MatStm3.compMasFrac[3,2] variable */,0.0);
    tmp448 = LessEq(data->localData[0]->realVars[210] /* MatStm3.compMasFrac[3,2] variable */,1.0);
    if(!(tmp447 && tmp448))
    {
      tmp450 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[210] /* MatStm3.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp449),tmp450);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp451 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2242
type: ALGORITHM

  assert(MatStm3.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,1], has value: " + String(MatStm3.compMolFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2242};
  modelica_boolean tmp452;
  static const MMC_DEFSTRINGLIT(tmp453,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,1], has value: ");
  modelica_string tmp454;
  static int tmp455 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp455)
  {
    tmp452 = GreaterEq(data->localData[0]->realVars[223] /* MatStm3.compMolFlo[1,1] variable */,0.0);
    if(!tmp452)
    {
      tmp454 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[223] /* MatStm3.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp453),tmp454);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp455 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2243
type: ALGORITHM

  assert(MatStm3.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,2], has value: " + String(MatStm3.compMolFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2243};
  modelica_boolean tmp456;
  static const MMC_DEFSTRINGLIT(tmp457,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,2], has value: ");
  modelica_string tmp458;
  static int tmp459 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp459)
  {
    tmp456 = GreaterEq(data->localData[0]->realVars[224] /* MatStm3.compMolFlo[1,2] variable */,0.0);
    if(!tmp456)
    {
      tmp458 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[224] /* MatStm3.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp457),tmp458);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp459 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2244
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: " + String(MatStm3.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2244};
  modelica_boolean tmp460;
  static const MMC_DEFSTRINGLIT(tmp461,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: ");
  modelica_string tmp462;
  static int tmp463 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp463)
  {
    tmp460 = GreaterEq(data->localData[0]->realVars[225] /* MatStm3.compMolFlo[2,1] variable */,0.0);
    if(!tmp460)
    {
      tmp462 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[225] /* MatStm3.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp461),tmp462);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp463 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2245
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: " + String(MatStm3.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2245};
  modelica_boolean tmp464;
  static const MMC_DEFSTRINGLIT(tmp465,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: ");
  modelica_string tmp466;
  static int tmp467 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp467)
  {
    tmp464 = GreaterEq(data->localData[0]->realVars[226] /* MatStm3.compMolFlo[2,2] variable */,0.0);
    if(!tmp464)
    {
      tmp466 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[226] /* MatStm3.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp465),tmp466);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp467 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2246
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: " + String(MatStm3.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2246};
  modelica_boolean tmp468;
  static const MMC_DEFSTRINGLIT(tmp469,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: ");
  modelica_string tmp470;
  static int tmp471 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp471)
  {
    tmp468 = GreaterEq(data->localData[0]->realVars[227] /* MatStm3.compMolFlo[3,1] variable */,0.0);
    if(!tmp468)
    {
      tmp470 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[227] /* MatStm3.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp469),tmp470);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp471 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2247
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: " + String(MatStm3.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2247};
  modelica_boolean tmp472;
  static const MMC_DEFSTRINGLIT(tmp473,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: ");
  modelica_string tmp474;
  static int tmp475 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp475)
  {
    tmp472 = GreaterEq(data->localData[0]->realVars[228] /* MatStm3.compMolFlo[3,2] variable */,0.0);
    if(!tmp472)
    {
      tmp474 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[228] /* MatStm3.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp473),tmp474);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp475 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2248
type: ALGORITHM

  assert(MatStm3.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,1], has value: " + String(MatStm3.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2248};
  modelica_boolean tmp476;
  static const MMC_DEFSTRINGLIT(tmp477,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,1], has value: ");
  modelica_string tmp478;
  static int tmp479 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp479)
  {
    tmp476 = GreaterEq(data->localData[0]->realVars[199] /* MatStm3.compMasFlo[1,1] variable */,0.0);
    if(!tmp476)
    {
      tmp478 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[199] /* MatStm3.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp477),tmp478);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp479 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2249
type: ALGORITHM

  assert(MatStm3.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,2], has value: " + String(MatStm3.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2249};
  modelica_boolean tmp480;
  static const MMC_DEFSTRINGLIT(tmp481,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,2], has value: ");
  modelica_string tmp482;
  static int tmp483 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp483)
  {
    tmp480 = GreaterEq(data->localData[0]->realVars[200] /* MatStm3.compMasFlo[1,2] variable */,0.0);
    if(!tmp480)
    {
      tmp482 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[200] /* MatStm3.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp481),tmp482);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp483 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2250
type: ALGORITHM

  assert(MatStm3.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: " + String(MatStm3.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2250};
  modelica_boolean tmp484;
  static const MMC_DEFSTRINGLIT(tmp485,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: ");
  modelica_string tmp486;
  static int tmp487 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp487)
  {
    tmp484 = GreaterEq(data->localData[0]->realVars[201] /* MatStm3.compMasFlo[2,1] variable */,0.0);
    if(!tmp484)
    {
      tmp486 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[201] /* MatStm3.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp485),tmp486);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp487 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2251
type: ALGORITHM

  assert(MatStm3.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: " + String(MatStm3.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2251};
  modelica_boolean tmp488;
  static const MMC_DEFSTRINGLIT(tmp489,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: ");
  modelica_string tmp490;
  static int tmp491 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp491)
  {
    tmp488 = GreaterEq(data->localData[0]->realVars[202] /* MatStm3.compMasFlo[2,2] variable */,0.0);
    if(!tmp488)
    {
      tmp490 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[202] /* MatStm3.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp489),tmp490);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp491 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2252
type: ALGORITHM

  assert(MatStm3.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: " + String(MatStm3.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2252};
  modelica_boolean tmp492;
  static const MMC_DEFSTRINGLIT(tmp493,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: ");
  modelica_string tmp494;
  static int tmp495 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp495)
  {
    tmp492 = GreaterEq(data->localData[0]->realVars[203] /* MatStm3.compMasFlo[3,1] variable */,0.0);
    if(!tmp492)
    {
      tmp494 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[203] /* MatStm3.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp493),tmp494);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp495 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2253
type: ALGORITHM

  assert(MatStm3.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: " + String(MatStm3.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2253};
  modelica_boolean tmp496;
  static const MMC_DEFSTRINGLIT(tmp497,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: ");
  modelica_string tmp498;
  static int tmp499 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp499)
  {
    tmp496 = GreaterEq(data->localData[0]->realVars[204] /* MatStm3.compMasFlo[3,2] variable */,0.0);
    if(!tmp496)
    {
      tmp498 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[204] /* MatStm3.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp497),tmp498);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp499 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2254
type: ALGORITHM

  assert(MatStm3.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.K[1], has value: " + String(MatStm3.K[1], "g"));
*/
void Flowsheet_eqFunction_2254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2254};
  modelica_boolean tmp500;
  static const MMC_DEFSTRINGLIT(tmp501,67,"Variable violating min constraint: 0.0 <= MatStm3.K[1], has value: ");
  modelica_string tmp502;
  static int tmp503 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp503)
  {
    tmp500 = GreaterEq(data->localData[0]->realVars[190] /* MatStm3.K[1] variable */,0.0);
    if(!tmp500)
    {
      tmp502 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[190] /* MatStm3.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp501),tmp502);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp503 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2255
type: ALGORITHM

  assert(MatStm3.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.K[2], has value: " + String(MatStm3.K[2], "g"));
*/
void Flowsheet_eqFunction_2255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2255};
  modelica_boolean tmp504;
  static const MMC_DEFSTRINGLIT(tmp505,67,"Variable violating min constraint: 0.0 <= MatStm3.K[2], has value: ");
  modelica_string tmp506;
  static int tmp507 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp507)
  {
    tmp504 = GreaterEq(data->localData[0]->realVars[191] /* MatStm3.K[2] variable */,0.0);
    if(!tmp504)
    {
      tmp506 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[191] /* MatStm3.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp505),tmp506);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp507 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2256
type: ALGORITHM

  assert(MatStm4.liqPhasMolFrac >= 0.0 and MatStm4.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.liqPhasMolFrac <= 1.0, has value: " + String(MatStm4.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2256};
  modelica_boolean tmp508;
  modelica_boolean tmp509;
  static const MMC_DEFSTRINGLIT(tmp510,88,"Variable violating min/max constraint: 0.0 <= MatStm4.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp511;
  static int tmp512 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp512)
  {
    tmp508 = GreaterEq(data->localData[0]->realVars[338] /* MatStm4.liqPhasMolFrac variable */,0.0);
    tmp509 = LessEq(data->localData[0]->realVars[338] /* MatStm4.liqPhasMolFrac variable */,1.0);
    if(!(tmp508 && tmp509))
    {
      tmp511 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[338] /* MatStm4.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp510),tmp511);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.liqPhasMolFrac >= 0.0 and MatStm4.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp512 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2257
type: ALGORITHM

  assert(MatStm4.liqPhasMasFrac >= 0.0 and MatStm4.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.liqPhasMasFrac <= 1.0, has value: " + String(MatStm4.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2257};
  modelica_boolean tmp513;
  modelica_boolean tmp514;
  static const MMC_DEFSTRINGLIT(tmp515,88,"Variable violating min/max constraint: 0.0 <= MatStm4.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp516;
  static int tmp517 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp517)
  {
    tmp513 = GreaterEq(data->localData[0]->realVars[337] /* MatStm4.liqPhasMasFrac variable */,0.0);
    tmp514 = LessEq(data->localData[0]->realVars[337] /* MatStm4.liqPhasMasFrac variable */,1.0);
    if(!(tmp513 && tmp514))
    {
      tmp516 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[337] /* MatStm4.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp515),tmp516);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.liqPhasMasFrac >= 0.0 and MatStm4.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp517 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2258
type: ALGORITHM

  assert(MatStm4.vapPhasMasFrac >= 0.0 and MatStm4.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.vapPhasMasFrac <= 1.0, has value: " + String(MatStm4.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2258};
  modelica_boolean tmp518;
  modelica_boolean tmp519;
  static const MMC_DEFSTRINGLIT(tmp520,88,"Variable violating min/max constraint: 0.0 <= MatStm4.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp521;
  static int tmp522 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp522)
  {
    tmp518 = GreaterEq(data->localData[0]->realVars[365] /* MatStm4.vapPhasMasFrac variable */,0.0);
    tmp519 = LessEq(data->localData[0]->realVars[365] /* MatStm4.vapPhasMasFrac variable */,1.0);
    if(!(tmp518 && tmp519))
    {
      tmp521 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[365] /* MatStm4.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp520),tmp521);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.vapPhasMasFrac >= 0.0 and MatStm4.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp522 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2259
type: ALGORITHM

  assert(MatStm4.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMolFlo[2], has value: " + String(MatStm4.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2259};
  modelica_boolean tmp523;
  static const MMC_DEFSTRINGLIT(tmp524,75,"Variable violating min constraint: 0.0 <= MatStm4.totMolFlo[2], has value: ");
  modelica_string tmp525;
  static int tmp526 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp526)
  {
    tmp523 = GreaterEq(data->localData[0]->realVars[363] /* MatStm4.totMolFlo[2] variable */,0.0);
    if(!tmp523)
    {
      tmp525 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[363] /* MatStm4.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp524),tmp525);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp526 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2260
type: ALGORITHM

  assert(MatStm4.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMolFlo[3], has value: " + String(MatStm4.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2260};
  modelica_boolean tmp527;
  static const MMC_DEFSTRINGLIT(tmp528,75,"Variable violating min constraint: 0.0 <= MatStm4.totMolFlo[3], has value: ");
  modelica_string tmp529;
  static int tmp530 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp530)
  {
    tmp527 = GreaterEq(data->localData[0]->realVars[364] /* MatStm4.totMolFlo[3] variable */,0.0);
    if(!tmp527)
    {
      tmp529 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[364] /* MatStm4.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp528),tmp529);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp530 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2261
type: ALGORITHM

  assert(MatStm4.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[1], has value: " + String(MatStm4.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2261};
  modelica_boolean tmp531;
  static const MMC_DEFSTRINGLIT(tmp532,75,"Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[1], has value: ");
  modelica_string tmp533;
  static int tmp534 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp534)
  {
    tmp531 = GreaterEq(data->localData[0]->realVars[359] /* MatStm4.totMasFlo[1] variable */,0.0);
    if(!tmp531)
    {
      tmp533 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[359] /* MatStm4.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp532),tmp533);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp534 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2262
type: ALGORITHM

  assert(MatStm4.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[2], has value: " + String(MatStm4.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2262};
  modelica_boolean tmp535;
  static const MMC_DEFSTRINGLIT(tmp536,75,"Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[2], has value: ");
  modelica_string tmp537;
  static int tmp538 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp538)
  {
    tmp535 = GreaterEq(data->localData[0]->realVars[360] /* MatStm4.totMasFlo[2] variable */,0.0);
    if(!tmp535)
    {
      tmp537 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[360] /* MatStm4.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp536),tmp537);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp538 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2263
type: ALGORITHM

  assert(MatStm4.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[3], has value: " + String(MatStm4.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2263};
  modelica_boolean tmp539;
  static const MMC_DEFSTRINGLIT(tmp540,75,"Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[3], has value: ");
  modelica_string tmp541;
  static int tmp542 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp542)
  {
    tmp539 = GreaterEq(data->localData[0]->realVars[361] /* MatStm4.totMasFlo[3] variable */,0.0);
    if(!tmp539)
    {
      tmp541 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[361] /* MatStm4.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp540),tmp541);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp542 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2264
type: ALGORITHM

  assert(MatStm4.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.MW[1], has value: " + String(MatStm4.MW[1], "g"));
*/
void Flowsheet_eqFunction_2264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2264};
  modelica_boolean tmp543;
  static const MMC_DEFSTRINGLIT(tmp544,68,"Variable violating min constraint: 0.0 <= MatStm4.MW[1], has value: ");
  modelica_string tmp545;
  static int tmp546 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp546)
  {
    tmp543 = GreaterEq(data->localData[0]->realVars[280] /* MatStm4.MW[1] variable */,0.0);
    if(!tmp543)
    {
      tmp545 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[280] /* MatStm4.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp544),tmp545);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp546 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2265
type: ALGORITHM

  assert(MatStm4.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.MW[2], has value: " + String(MatStm4.MW[2], "g"));
*/
void Flowsheet_eqFunction_2265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2265};
  modelica_boolean tmp547;
  static const MMC_DEFSTRINGLIT(tmp548,68,"Variable violating min constraint: 0.0 <= MatStm4.MW[2], has value: ");
  modelica_string tmp549;
  static int tmp550 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp550)
  {
    tmp547 = GreaterEq(data->localData[0]->realVars[281] /* MatStm4.MW[2] variable */,0.0);
    if(!tmp547)
    {
      tmp549 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[281] /* MatStm4.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp548),tmp549);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp550 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2266
type: ALGORITHM

  assert(MatStm4.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.MW[3], has value: " + String(MatStm4.MW[3], "g"));
*/
void Flowsheet_eqFunction_2266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2266};
  modelica_boolean tmp551;
  static const MMC_DEFSTRINGLIT(tmp552,68,"Variable violating min constraint: 0.0 <= MatStm4.MW[3], has value: ");
  modelica_string tmp553;
  static int tmp554 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp554)
  {
    tmp551 = GreaterEq(data->localData[0]->realVars[282] /* MatStm4.MW[3] variable */,0.0);
    if(!tmp551)
    {
      tmp553 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[282] /* MatStm4.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp552),tmp553);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp554 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2267
type: ALGORITHM

  assert(MatStm4.compMolFrac[2,1] >= 0.0 and MatStm4.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm4.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2267};
  modelica_boolean tmp555;
  modelica_boolean tmp556;
  static const MMC_DEFSTRINGLIT(tmp557,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp558;
  static int tmp559 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp559)
  {
    tmp555 = GreaterEq(data->localData[0]->realVars[321] /* MatStm4.compMolFrac[2,1] variable */,0.0);
    tmp556 = LessEq(data->localData[0]->realVars[321] /* MatStm4.compMolFrac[2,1] variable */,1.0);
    if(!(tmp555 && tmp556))
    {
      tmp558 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[321] /* MatStm4.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp557),tmp558);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[2,1] >= 0.0 and MatStm4.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp559 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2268
type: ALGORITHM

  assert(MatStm4.compMolFrac[2,2] >= 0.0 and MatStm4.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm4.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2268};
  modelica_boolean tmp560;
  modelica_boolean tmp561;
  static const MMC_DEFSTRINGLIT(tmp562,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp563;
  static int tmp564 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp564)
  {
    tmp560 = GreaterEq(data->localData[0]->realVars[322] /* MatStm4.compMolFrac[2,2] variable */,0.0);
    tmp561 = LessEq(data->localData[0]->realVars[322] /* MatStm4.compMolFrac[2,2] variable */,1.0);
    if(!(tmp560 && tmp561))
    {
      tmp563 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[322] /* MatStm4.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp562),tmp563);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[2,2] >= 0.0 and MatStm4.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp564 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2269
type: ALGORITHM

  assert(MatStm4.compMolFrac[3,1] >= 0.0 and MatStm4.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm4.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2269};
  modelica_boolean tmp565;
  modelica_boolean tmp566;
  static const MMC_DEFSTRINGLIT(tmp567,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp568;
  static int tmp569 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp569)
  {
    tmp565 = GreaterEq(data->localData[0]->realVars[323] /* MatStm4.compMolFrac[3,1] variable */,0.0);
    tmp566 = LessEq(data->localData[0]->realVars[323] /* MatStm4.compMolFrac[3,1] variable */,1.0);
    if(!(tmp565 && tmp566))
    {
      tmp568 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[323] /* MatStm4.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp567),tmp568);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[3,1] >= 0.0 and MatStm4.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp569 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2270
type: ALGORITHM

  assert(MatStm4.compMolFrac[3,2] >= 0.0 and MatStm4.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm4.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2270};
  modelica_boolean tmp570;
  modelica_boolean tmp571;
  static const MMC_DEFSTRINGLIT(tmp572,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp573;
  static int tmp574 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp574)
  {
    tmp570 = GreaterEq(data->localData[0]->realVars[324] /* MatStm4.compMolFrac[3,2] variable */,0.0);
    tmp571 = LessEq(data->localData[0]->realVars[324] /* MatStm4.compMolFrac[3,2] variable */,1.0);
    if(!(tmp570 && tmp571))
    {
      tmp573 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[324] /* MatStm4.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp572),tmp573);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[3,2] >= 0.0 and MatStm4.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp574 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2271
type: ALGORITHM

  assert(MatStm4.compMasFrac[1,1] >= 0.0 and MatStm4.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm4.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2271};
  modelica_boolean tmp575;
  modelica_boolean tmp576;
  static const MMC_DEFSTRINGLIT(tmp577,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp578;
  static int tmp579 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp579)
  {
    tmp575 = GreaterEq(data->localData[0]->realVars[295] /* MatStm4.compMasFrac[1,1] variable */,0.0);
    tmp576 = LessEq(data->localData[0]->realVars[295] /* MatStm4.compMasFrac[1,1] variable */,1.0);
    if(!(tmp575 && tmp576))
    {
      tmp578 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[295] /* MatStm4.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp577),tmp578);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[1,1] >= 0.0 and MatStm4.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp579 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2272
type: ALGORITHM

  assert(MatStm4.compMasFrac[1,2] >= 0.0 and MatStm4.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm4.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2272};
  modelica_boolean tmp580;
  modelica_boolean tmp581;
  static const MMC_DEFSTRINGLIT(tmp582,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp583;
  static int tmp584 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp584)
  {
    tmp580 = GreaterEq(data->localData[0]->realVars[296] /* MatStm4.compMasFrac[1,2] variable */,0.0);
    tmp581 = LessEq(data->localData[0]->realVars[296] /* MatStm4.compMasFrac[1,2] variable */,1.0);
    if(!(tmp580 && tmp581))
    {
      tmp583 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[296] /* MatStm4.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp582),tmp583);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[1,2] >= 0.0 and MatStm4.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp584 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2273
type: ALGORITHM

  assert(MatStm4.compMasFrac[2,1] >= 0.0 and MatStm4.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm4.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2273};
  modelica_boolean tmp585;
  modelica_boolean tmp586;
  static const MMC_DEFSTRINGLIT(tmp587,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp588;
  static int tmp589 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp589)
  {
    tmp585 = GreaterEq(data->localData[0]->realVars[297] /* MatStm4.compMasFrac[2,1] variable */,0.0);
    tmp586 = LessEq(data->localData[0]->realVars[297] /* MatStm4.compMasFrac[2,1] variable */,1.0);
    if(!(tmp585 && tmp586))
    {
      tmp588 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[297] /* MatStm4.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp587),tmp588);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[2,1] >= 0.0 and MatStm4.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp589 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2274
type: ALGORITHM

  assert(MatStm4.compMasFrac[2,2] >= 0.0 and MatStm4.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm4.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2274};
  modelica_boolean tmp590;
  modelica_boolean tmp591;
  static const MMC_DEFSTRINGLIT(tmp592,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp593;
  static int tmp594 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp594)
  {
    tmp590 = GreaterEq(data->localData[0]->realVars[298] /* MatStm4.compMasFrac[2,2] variable */,0.0);
    tmp591 = LessEq(data->localData[0]->realVars[298] /* MatStm4.compMasFrac[2,2] variable */,1.0);
    if(!(tmp590 && tmp591))
    {
      tmp593 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[298] /* MatStm4.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp592),tmp593);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[2,2] >= 0.0 and MatStm4.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp594 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2275
type: ALGORITHM

  assert(MatStm4.compMasFrac[3,1] >= 0.0 and MatStm4.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm4.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2275};
  modelica_boolean tmp595;
  modelica_boolean tmp596;
  static const MMC_DEFSTRINGLIT(tmp597,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp598;
  static int tmp599 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp599)
  {
    tmp595 = GreaterEq(data->localData[0]->realVars[299] /* MatStm4.compMasFrac[3,1] variable */,0.0);
    tmp596 = LessEq(data->localData[0]->realVars[299] /* MatStm4.compMasFrac[3,1] variable */,1.0);
    if(!(tmp595 && tmp596))
    {
      tmp598 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[299] /* MatStm4.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp597),tmp598);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[3,1] >= 0.0 and MatStm4.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp599 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2276
type: ALGORITHM

  assert(MatStm4.compMasFrac[3,2] >= 0.0 and MatStm4.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm4.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2276};
  modelica_boolean tmp600;
  modelica_boolean tmp601;
  static const MMC_DEFSTRINGLIT(tmp602,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp603;
  static int tmp604 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp604)
  {
    tmp600 = GreaterEq(data->localData[0]->realVars[300] /* MatStm4.compMasFrac[3,2] variable */,0.0);
    tmp601 = LessEq(data->localData[0]->realVars[300] /* MatStm4.compMasFrac[3,2] variable */,1.0);
    if(!(tmp600 && tmp601))
    {
      tmp603 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[300] /* MatStm4.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp602),tmp603);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[3,2] >= 0.0 and MatStm4.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp604 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2277
type: ALGORITHM

  assert(MatStm4.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[2,1], has value: " + String(MatStm4.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2277};
  modelica_boolean tmp605;
  static const MMC_DEFSTRINGLIT(tmp606,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[2,1], has value: ");
  modelica_string tmp607;
  static int tmp608 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp608)
  {
    tmp605 = GreaterEq(data->localData[0]->realVars[315] /* MatStm4.compMolFlo[2,1] variable */,0.0);
    if(!tmp605)
    {
      tmp607 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[315] /* MatStm4.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp606),tmp607);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp608 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2278
type: ALGORITHM

  assert(MatStm4.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[2,2], has value: " + String(MatStm4.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2278};
  modelica_boolean tmp609;
  static const MMC_DEFSTRINGLIT(tmp610,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[2,2], has value: ");
  modelica_string tmp611;
  static int tmp612 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp612)
  {
    tmp609 = GreaterEq(data->localData[0]->realVars[316] /* MatStm4.compMolFlo[2,2] variable */,0.0);
    if(!tmp609)
    {
      tmp611 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[316] /* MatStm4.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp610),tmp611);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp612 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2279
type: ALGORITHM

  assert(MatStm4.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[3,1], has value: " + String(MatStm4.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2279};
  modelica_boolean tmp613;
  static const MMC_DEFSTRINGLIT(tmp614,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[3,1], has value: ");
  modelica_string tmp615;
  static int tmp616 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp616)
  {
    tmp613 = GreaterEq(data->localData[0]->realVars[317] /* MatStm4.compMolFlo[3,1] variable */,0.0);
    if(!tmp613)
    {
      tmp615 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[317] /* MatStm4.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp614),tmp615);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp616 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2280
type: ALGORITHM

  assert(MatStm4.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[3,2], has value: " + String(MatStm4.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2280};
  modelica_boolean tmp617;
  static const MMC_DEFSTRINGLIT(tmp618,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[3,2], has value: ");
  modelica_string tmp619;
  static int tmp620 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp620)
  {
    tmp617 = GreaterEq(data->localData[0]->realVars[318] /* MatStm4.compMolFlo[3,2] variable */,0.0);
    if(!tmp617)
    {
      tmp619 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[318] /* MatStm4.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp618),tmp619);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp620 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2281
type: ALGORITHM

  assert(MatStm4.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[2,1], has value: " + String(MatStm4.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2281};
  modelica_boolean tmp621;
  static const MMC_DEFSTRINGLIT(tmp622,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[2,1], has value: ");
  modelica_string tmp623;
  static int tmp624 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp624)
  {
    tmp621 = GreaterEq(data->localData[0]->realVars[291] /* MatStm4.compMasFlo[2,1] variable */,0.0);
    if(!tmp621)
    {
      tmp623 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[291] /* MatStm4.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp622),tmp623);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp624 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2282
type: ALGORITHM

  assert(MatStm4.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[2,2], has value: " + String(MatStm4.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2282};
  modelica_boolean tmp625;
  static const MMC_DEFSTRINGLIT(tmp626,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[2,2], has value: ");
  modelica_string tmp627;
  static int tmp628 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp628)
  {
    tmp625 = GreaterEq(data->localData[0]->realVars[292] /* MatStm4.compMasFlo[2,2] variable */,0.0);
    if(!tmp625)
    {
      tmp627 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[292] /* MatStm4.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp626),tmp627);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp628 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2283
type: ALGORITHM

  assert(MatStm4.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[3,1], has value: " + String(MatStm4.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2283};
  modelica_boolean tmp629;
  static const MMC_DEFSTRINGLIT(tmp630,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[3,1], has value: ");
  modelica_string tmp631;
  static int tmp632 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp632)
  {
    tmp629 = GreaterEq(data->localData[0]->realVars[293] /* MatStm4.compMasFlo[3,1] variable */,0.0);
    if(!tmp629)
    {
      tmp631 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[293] /* MatStm4.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp630),tmp631);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp632 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2284
type: ALGORITHM

  assert(MatStm4.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[3,2], has value: " + String(MatStm4.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2284};
  modelica_boolean tmp633;
  static const MMC_DEFSTRINGLIT(tmp634,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[3,2], has value: ");
  modelica_string tmp635;
  static int tmp636 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp636)
  {
    tmp633 = GreaterEq(data->localData[0]->realVars[294] /* MatStm4.compMasFlo[3,2] variable */,0.0);
    if(!tmp633)
    {
      tmp635 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[294] /* MatStm4.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp634),tmp635);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp636 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2285
type: ALGORITHM

  assert(MatStm5.liqPhasMolFrac >= 0.0 and MatStm5.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.liqPhasMolFrac <= 1.0, has value: " + String(MatStm5.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2285};
  modelica_boolean tmp637;
  modelica_boolean tmp638;
  static const MMC_DEFSTRINGLIT(tmp639,88,"Variable violating min/max constraint: 0.0 <= MatStm5.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp640;
  static int tmp641 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp641)
  {
    tmp637 = GreaterEq(data->localData[0]->realVars[428] /* MatStm5.liqPhasMolFrac variable */,0.0);
    tmp638 = LessEq(data->localData[0]->realVars[428] /* MatStm5.liqPhasMolFrac variable */,1.0);
    if(!(tmp637 && tmp638))
    {
      tmp640 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[428] /* MatStm5.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp639),tmp640);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.liqPhasMolFrac >= 0.0 and MatStm5.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp641 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2286
type: ALGORITHM

  assert(MatStm5.liqPhasMasFrac >= 0.0 and MatStm5.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.liqPhasMasFrac <= 1.0, has value: " + String(MatStm5.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2286};
  modelica_boolean tmp642;
  modelica_boolean tmp643;
  static const MMC_DEFSTRINGLIT(tmp644,88,"Variable violating min/max constraint: 0.0 <= MatStm5.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp645;
  static int tmp646 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp646)
  {
    tmp642 = GreaterEq(data->localData[0]->realVars[427] /* MatStm5.liqPhasMasFrac variable */,0.0);
    tmp643 = LessEq(data->localData[0]->realVars[427] /* MatStm5.liqPhasMasFrac variable */,1.0);
    if(!(tmp642 && tmp643))
    {
      tmp645 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[427] /* MatStm5.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp644),tmp645);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.liqPhasMasFrac >= 0.0 and MatStm5.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp646 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2287
type: ALGORITHM

  assert(MatStm5.vapPhasMasFrac >= 0.0 and MatStm5.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.vapPhasMasFrac <= 1.0, has value: " + String(MatStm5.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2287};
  modelica_boolean tmp647;
  modelica_boolean tmp648;
  static const MMC_DEFSTRINGLIT(tmp649,88,"Variable violating min/max constraint: 0.0 <= MatStm5.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp650;
  static int tmp651 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp651)
  {
    tmp647 = GreaterEq(data->localData[0]->realVars[455] /* MatStm5.vapPhasMasFrac variable */,0.0);
    tmp648 = LessEq(data->localData[0]->realVars[455] /* MatStm5.vapPhasMasFrac variable */,1.0);
    if(!(tmp647 && tmp648))
    {
      tmp650 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[455] /* MatStm5.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp649),tmp650);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.vapPhasMasFrac >= 0.0 and MatStm5.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp651 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2288
type: ALGORITHM

  assert(MatStm5.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMolFlo[2], has value: " + String(MatStm5.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2288};
  modelica_boolean tmp652;
  static const MMC_DEFSTRINGLIT(tmp653,75,"Variable violating min constraint: 0.0 <= MatStm5.totMolFlo[2], has value: ");
  modelica_string tmp654;
  static int tmp655 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp655)
  {
    tmp652 = GreaterEq(data->localData[0]->realVars[453] /* MatStm5.totMolFlo[2] variable */,0.0);
    if(!tmp652)
    {
      tmp654 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[453] /* MatStm5.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp653),tmp654);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp655 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2289
type: ALGORITHM

  assert(MatStm5.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMolFlo[3], has value: " + String(MatStm5.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2289};
  modelica_boolean tmp656;
  static const MMC_DEFSTRINGLIT(tmp657,75,"Variable violating min constraint: 0.0 <= MatStm5.totMolFlo[3], has value: ");
  modelica_string tmp658;
  static int tmp659 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp659)
  {
    tmp656 = GreaterEq(data->localData[0]->realVars[454] /* MatStm5.totMolFlo[3] variable */,0.0);
    if(!tmp656)
    {
      tmp658 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[454] /* MatStm5.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp657),tmp658);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp659 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2290
type: ALGORITHM

  assert(MatStm5.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[1], has value: " + String(MatStm5.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2290};
  modelica_boolean tmp660;
  static const MMC_DEFSTRINGLIT(tmp661,75,"Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[1], has value: ");
  modelica_string tmp662;
  static int tmp663 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp663)
  {
    tmp660 = GreaterEq(data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */,0.0);
    if(!tmp660)
    {
      tmp662 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp661),tmp662);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp663 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2291
type: ALGORITHM

  assert(MatStm5.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[2], has value: " + String(MatStm5.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2291};
  modelica_boolean tmp664;
  static const MMC_DEFSTRINGLIT(tmp665,75,"Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[2], has value: ");
  modelica_string tmp666;
  static int tmp667 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp667)
  {
    tmp664 = GreaterEq(data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */,0.0);
    if(!tmp664)
    {
      tmp666 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp665),tmp666);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp667 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2292
type: ALGORITHM

  assert(MatStm5.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[3], has value: " + String(MatStm5.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2292};
  modelica_boolean tmp668;
  static const MMC_DEFSTRINGLIT(tmp669,75,"Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[3], has value: ");
  modelica_string tmp670;
  static int tmp671 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp671)
  {
    tmp668 = GreaterEq(data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */,0.0);
    if(!tmp668)
    {
      tmp670 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp669),tmp670);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp671 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2293
type: ALGORITHM

  assert(MatStm5.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.MW[1], has value: " + String(MatStm5.MW[1], "g"));
*/
void Flowsheet_eqFunction_2293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2293};
  modelica_boolean tmp672;
  static const MMC_DEFSTRINGLIT(tmp673,68,"Variable violating min constraint: 0.0 <= MatStm5.MW[1], has value: ");
  modelica_string tmp674;
  static int tmp675 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp675)
  {
    tmp672 = GreaterEq(data->localData[0]->realVars[370] /* MatStm5.MW[1] variable */,0.0);
    if(!tmp672)
    {
      tmp674 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[370] /* MatStm5.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp673),tmp674);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp675 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2294
type: ALGORITHM

  assert(MatStm5.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.MW[2], has value: " + String(MatStm5.MW[2], "g"));
*/
void Flowsheet_eqFunction_2294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2294};
  modelica_boolean tmp676;
  static const MMC_DEFSTRINGLIT(tmp677,68,"Variable violating min constraint: 0.0 <= MatStm5.MW[2], has value: ");
  modelica_string tmp678;
  static int tmp679 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp679)
  {
    tmp676 = GreaterEq(data->localData[0]->realVars[371] /* MatStm5.MW[2] variable */,0.0);
    if(!tmp676)
    {
      tmp678 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[371] /* MatStm5.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp677),tmp678);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp679 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2295
type: ALGORITHM

  assert(MatStm5.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.MW[3], has value: " + String(MatStm5.MW[3], "g"));
*/
void Flowsheet_eqFunction_2295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2295};
  modelica_boolean tmp680;
  static const MMC_DEFSTRINGLIT(tmp681,68,"Variable violating min constraint: 0.0 <= MatStm5.MW[3], has value: ");
  modelica_string tmp682;
  static int tmp683 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp683)
  {
    tmp680 = GreaterEq(data->localData[0]->realVars[372] /* MatStm5.MW[3] variable */,0.0);
    if(!tmp680)
    {
      tmp682 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[372] /* MatStm5.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp681),tmp682);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp683 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2296
type: ALGORITHM

  assert(MatStm5.compMolFrac[2,1] >= 0.0 and MatStm5.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm5.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2296};
  modelica_boolean tmp684;
  modelica_boolean tmp685;
  static const MMC_DEFSTRINGLIT(tmp686,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp687;
  static int tmp688 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp688)
  {
    tmp684 = GreaterEq(data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */,0.0);
    tmp685 = LessEq(data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */,1.0);
    if(!(tmp684 && tmp685))
    {
      tmp687 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp686),tmp687);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[2,1] >= 0.0 and MatStm5.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp688 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2297
type: ALGORITHM

  assert(MatStm5.compMolFrac[2,2] >= 0.0 and MatStm5.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm5.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2297};
  modelica_boolean tmp689;
  modelica_boolean tmp690;
  static const MMC_DEFSTRINGLIT(tmp691,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp692;
  static int tmp693 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp693)
  {
    tmp689 = GreaterEq(data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */,0.0);
    tmp690 = LessEq(data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */,1.0);
    if(!(tmp689 && tmp690))
    {
      tmp692 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp691),tmp692);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[2,2] >= 0.0 and MatStm5.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp693 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2298
type: ALGORITHM

  assert(MatStm5.compMolFrac[3,1] >= 0.0 and MatStm5.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm5.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2298};
  modelica_boolean tmp694;
  modelica_boolean tmp695;
  static const MMC_DEFSTRINGLIT(tmp696,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp697;
  static int tmp698 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp698)
  {
    tmp694 = GreaterEq(data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */,0.0);
    tmp695 = LessEq(data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */,1.0);
    if(!(tmp694 && tmp695))
    {
      tmp697 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp696),tmp697);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[3,1] >= 0.0 and MatStm5.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp698 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2299
type: ALGORITHM

  assert(MatStm5.compMolFrac[3,2] >= 0.0 and MatStm5.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm5.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2299};
  modelica_boolean tmp699;
  modelica_boolean tmp700;
  static const MMC_DEFSTRINGLIT(tmp701,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp702;
  static int tmp703 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp703)
  {
    tmp699 = GreaterEq(data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */,0.0);
    tmp700 = LessEq(data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */,1.0);
    if(!(tmp699 && tmp700))
    {
      tmp702 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp701),tmp702);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[3,2] >= 0.0 and MatStm5.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp703 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2300
type: ALGORITHM

  assert(MatStm5.compMasFrac[1,1] >= 0.0 and MatStm5.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm5.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2300};
  modelica_boolean tmp704;
  modelica_boolean tmp705;
  static const MMC_DEFSTRINGLIT(tmp706,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp707;
  static int tmp708 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp708)
  {
    tmp704 = GreaterEq(data->localData[0]->realVars[385] /* MatStm5.compMasFrac[1,1] variable */,0.0);
    tmp705 = LessEq(data->localData[0]->realVars[385] /* MatStm5.compMasFrac[1,1] variable */,1.0);
    if(!(tmp704 && tmp705))
    {
      tmp707 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[385] /* MatStm5.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp706),tmp707);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[1,1] >= 0.0 and MatStm5.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp708 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2301
type: ALGORITHM

  assert(MatStm5.compMasFrac[1,2] >= 0.0 and MatStm5.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm5.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2301};
  modelica_boolean tmp709;
  modelica_boolean tmp710;
  static const MMC_DEFSTRINGLIT(tmp711,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp712;
  static int tmp713 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp713)
  {
    tmp709 = GreaterEq(data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */,0.0);
    tmp710 = LessEq(data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */,1.0);
    if(!(tmp709 && tmp710))
    {
      tmp712 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp711),tmp712);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[1,2] >= 0.0 and MatStm5.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp713 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2302
type: ALGORITHM

  assert(MatStm5.compMasFrac[2,1] >= 0.0 and MatStm5.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm5.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2302};
  modelica_boolean tmp714;
  modelica_boolean tmp715;
  static const MMC_DEFSTRINGLIT(tmp716,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp717;
  static int tmp718 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp718)
  {
    tmp714 = GreaterEq(data->localData[0]->realVars[387] /* MatStm5.compMasFrac[2,1] variable */,0.0);
    tmp715 = LessEq(data->localData[0]->realVars[387] /* MatStm5.compMasFrac[2,1] variable */,1.0);
    if(!(tmp714 && tmp715))
    {
      tmp717 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[387] /* MatStm5.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp716),tmp717);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[2,1] >= 0.0 and MatStm5.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp718 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2303
type: ALGORITHM

  assert(MatStm5.compMasFrac[2,2] >= 0.0 and MatStm5.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm5.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2303};
  modelica_boolean tmp719;
  modelica_boolean tmp720;
  static const MMC_DEFSTRINGLIT(tmp721,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp722;
  static int tmp723 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp723)
  {
    tmp719 = GreaterEq(data->localData[0]->realVars[388] /* MatStm5.compMasFrac[2,2] variable */,0.0);
    tmp720 = LessEq(data->localData[0]->realVars[388] /* MatStm5.compMasFrac[2,2] variable */,1.0);
    if(!(tmp719 && tmp720))
    {
      tmp722 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[388] /* MatStm5.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp721),tmp722);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[2,2] >= 0.0 and MatStm5.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp723 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2304
type: ALGORITHM

  assert(MatStm5.compMasFrac[3,1] >= 0.0 and MatStm5.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm5.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2304};
  modelica_boolean tmp724;
  modelica_boolean tmp725;
  static const MMC_DEFSTRINGLIT(tmp726,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp727;
  static int tmp728 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp728)
  {
    tmp724 = GreaterEq(data->localData[0]->realVars[389] /* MatStm5.compMasFrac[3,1] variable */,0.0);
    tmp725 = LessEq(data->localData[0]->realVars[389] /* MatStm5.compMasFrac[3,1] variable */,1.0);
    if(!(tmp724 && tmp725))
    {
      tmp727 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[389] /* MatStm5.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp726),tmp727);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[3,1] >= 0.0 and MatStm5.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp728 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2305
type: ALGORITHM

  assert(MatStm5.compMasFrac[3,2] >= 0.0 and MatStm5.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm5.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2305};
  modelica_boolean tmp729;
  modelica_boolean tmp730;
  static const MMC_DEFSTRINGLIT(tmp731,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp732;
  static int tmp733 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp733)
  {
    tmp729 = GreaterEq(data->localData[0]->realVars[390] /* MatStm5.compMasFrac[3,2] variable */,0.0);
    tmp730 = LessEq(data->localData[0]->realVars[390] /* MatStm5.compMasFrac[3,2] variable */,1.0);
    if(!(tmp729 && tmp730))
    {
      tmp732 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[390] /* MatStm5.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp731),tmp732);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[3,2] >= 0.0 and MatStm5.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp733 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2306
type: ALGORITHM

  assert(MatStm5.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[2,1], has value: " + String(MatStm5.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2306};
  modelica_boolean tmp734;
  static const MMC_DEFSTRINGLIT(tmp735,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[2,1], has value: ");
  modelica_string tmp736;
  static int tmp737 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp737)
  {
    tmp734 = GreaterEq(data->localData[0]->realVars[405] /* MatStm5.compMolFlo[2,1] variable */,0.0);
    if(!tmp734)
    {
      tmp736 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[405] /* MatStm5.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp735),tmp736);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp737 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2307
type: ALGORITHM

  assert(MatStm5.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[2,2], has value: " + String(MatStm5.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2307};
  modelica_boolean tmp738;
  static const MMC_DEFSTRINGLIT(tmp739,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[2,2], has value: ");
  modelica_string tmp740;
  static int tmp741 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp741)
  {
    tmp738 = GreaterEq(data->localData[0]->realVars[406] /* MatStm5.compMolFlo[2,2] variable */,0.0);
    if(!tmp738)
    {
      tmp740 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[406] /* MatStm5.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp739),tmp740);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp741 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2308
type: ALGORITHM

  assert(MatStm5.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[3,1], has value: " + String(MatStm5.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2308};
  modelica_boolean tmp742;
  static const MMC_DEFSTRINGLIT(tmp743,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[3,1], has value: ");
  modelica_string tmp744;
  static int tmp745 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp745)
  {
    tmp742 = GreaterEq(data->localData[0]->realVars[407] /* MatStm5.compMolFlo[3,1] variable */,0.0);
    if(!tmp742)
    {
      tmp744 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[407] /* MatStm5.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp743),tmp744);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp745 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2309
type: ALGORITHM

  assert(MatStm5.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[3,2], has value: " + String(MatStm5.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2309};
  modelica_boolean tmp746;
  static const MMC_DEFSTRINGLIT(tmp747,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[3,2], has value: ");
  modelica_string tmp748;
  static int tmp749 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp749)
  {
    tmp746 = GreaterEq(data->localData[0]->realVars[408] /* MatStm5.compMolFlo[3,2] variable */,0.0);
    if(!tmp746)
    {
      tmp748 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[408] /* MatStm5.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp747),tmp748);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp749 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2310
type: ALGORITHM

  assert(MatStm5.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[2,1], has value: " + String(MatStm5.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2310};
  modelica_boolean tmp750;
  static const MMC_DEFSTRINGLIT(tmp751,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[2,1], has value: ");
  modelica_string tmp752;
  static int tmp753 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp753)
  {
    tmp750 = GreaterEq(data->localData[0]->realVars[381] /* MatStm5.compMasFlo[2,1] variable */,0.0);
    if(!tmp750)
    {
      tmp752 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[381] /* MatStm5.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp751),tmp752);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp753 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2311
type: ALGORITHM

  assert(MatStm5.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[2,2], has value: " + String(MatStm5.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2311};
  modelica_boolean tmp754;
  static const MMC_DEFSTRINGLIT(tmp755,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[2,2], has value: ");
  modelica_string tmp756;
  static int tmp757 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp757)
  {
    tmp754 = GreaterEq(data->localData[0]->realVars[382] /* MatStm5.compMasFlo[2,2] variable */,0.0);
    if(!tmp754)
    {
      tmp756 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[382] /* MatStm5.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp755),tmp756);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp757 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2312
type: ALGORITHM

  assert(MatStm5.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[3,1], has value: " + String(MatStm5.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2312};
  modelica_boolean tmp758;
  static const MMC_DEFSTRINGLIT(tmp759,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[3,1], has value: ");
  modelica_string tmp760;
  static int tmp761 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp761)
  {
    tmp758 = GreaterEq(data->localData[0]->realVars[383] /* MatStm5.compMasFlo[3,1] variable */,0.0);
    if(!tmp758)
    {
      tmp760 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[383] /* MatStm5.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp759),tmp760);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp761 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2313
type: ALGORITHM

  assert(MatStm5.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[3,2], has value: " + String(MatStm5.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2313};
  modelica_boolean tmp762;
  static const MMC_DEFSTRINGLIT(tmp763,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[3,2], has value: ");
  modelica_string tmp764;
  static int tmp765 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp765)
  {
    tmp762 = GreaterEq(data->localData[0]->realVars[384] /* MatStm5.compMasFlo[3,2] variable */,0.0);
    if(!tmp762)
    {
      tmp764 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[384] /* MatStm5.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp763),tmp764);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp765 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2314
type: ALGORITHM

  assert(Mixer1.inVapPhasMolFrac[1] >= 0.0 and Mixer1.inVapPhasMolFrac[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[1] <= 1.0, has value: " + String(Mixer1.inVapPhasMolFrac[1], "g"));
*/
void Flowsheet_eqFunction_2314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2314};
  modelica_boolean tmp766;
  modelica_boolean tmp767;
  static const MMC_DEFSTRINGLIT(tmp768,92,"Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[1] <= 1.0, has value: ");
  modelica_string tmp769;
  static int tmp770 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp770)
  {
    tmp766 = GreaterEq(data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */,0.0);
    tmp767 = LessEq(data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */,1.0);
    if(!(tmp766 && tmp767))
    {
      tmp769 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp768),tmp769);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4319,7,4319,434,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMixer1.inVapPhasMolFrac[1] >= 0.0 and Mixer1.inVapPhasMolFrac[1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp770 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2315
type: ALGORITHM

  assert(Mixer1.inVapPhasMolFrac[2] >= 0.0 and Mixer1.inVapPhasMolFrac[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[2] <= 1.0, has value: " + String(Mixer1.inVapPhasMolFrac[2], "g"));
*/
void Flowsheet_eqFunction_2315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2315};
  modelica_boolean tmp771;
  modelica_boolean tmp772;
  static const MMC_DEFSTRINGLIT(tmp773,92,"Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[2] <= 1.0, has value: ");
  modelica_string tmp774;
  static int tmp775 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp775)
  {
    tmp771 = GreaterEq(data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */,0.0);
    tmp772 = LessEq(data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */,1.0);
    if(!(tmp771 && tmp772))
    {
      tmp774 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp773),tmp774);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4319,7,4319,434,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMixer1.inVapPhasMolFrac[2] >= 0.0 and Mixer1.inVapPhasMolFrac[2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp775 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2316
type: ALGORITHM

  assert(Splitter1.outT[2] >= 0.0, "Variable violating min constraint: 0.0 <= Splitter1.outT[2], has value: " + String(Splitter1.outT[2], "g"));
*/
void Flowsheet_eqFunction_2316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2316};
  modelica_boolean tmp776;
  static const MMC_DEFSTRINGLIT(tmp777,72,"Variable violating min constraint: 0.0 <= Splitter1.outT[2], has value: ");
  modelica_string tmp778;
  static int tmp779 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp779)
  {
    tmp776 = GreaterEq(data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,0.0);
    if(!tmp776)
    {
      tmp778 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp777),tmp778);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",5080,7,5080,800,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.outT[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp779 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2317
type: ALGORITHM

  assert(Splitter1.inMixMolFrac[1] >= 0.0 and Splitter1.inMixMolFrac[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= Splitter1.inMixMolFrac[1] <= 1.0, has value: " + String(Splitter1.inMixMolFrac[1], "g"));
*/
void Flowsheet_eqFunction_2317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2317};
  modelica_boolean tmp780;
  modelica_boolean tmp781;
  static const MMC_DEFSTRINGLIT(tmp782,91,"Variable violating min/max constraint: 0.0 <= Splitter1.inMixMolFrac[1] <= 1.0, has value: ");
  modelica_string tmp783;
  static int tmp784 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp784)
  {
    tmp780 = GreaterEq(data->localData[0]->realVars[461] /* Splitter1.inMixMolFrac[1] variable */,0.0);
    tmp781 = LessEq(data->localData[0]->realVars[461] /* Splitter1.inMixMolFrac[1] variable */,1.0);
    if(!(tmp780 && tmp781))
    {
      tmp783 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[461] /* Splitter1.inMixMolFrac[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp782),tmp783);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",5080,7,5080,800,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.inMixMolFrac[1] >= 0.0 and Splitter1.inMixMolFrac[1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp784 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2318
type: ALGORITHM

  assert(Splitter1.inMixMolFrac[2] >= 0.0 and Splitter1.inMixMolFrac[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= Splitter1.inMixMolFrac[2] <= 1.0, has value: " + String(Splitter1.inMixMolFrac[2], "g"));
*/
void Flowsheet_eqFunction_2318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2318};
  modelica_boolean tmp785;
  modelica_boolean tmp786;
  static const MMC_DEFSTRINGLIT(tmp787,91,"Variable violating min/max constraint: 0.0 <= Splitter1.inMixMolFrac[2] <= 1.0, has value: ");
  modelica_string tmp788;
  static int tmp789 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp789)
  {
    tmp785 = GreaterEq(data->localData[0]->realVars[462] /* Splitter1.inMixMolFrac[2] variable */,0.0);
    tmp786 = LessEq(data->localData[0]->realVars[462] /* Splitter1.inMixMolFrac[2] variable */,1.0);
    if(!(tmp785 && tmp786))
    {
      tmp788 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[462] /* Splitter1.inMixMolFrac[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp787),tmp788);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",5080,7,5080,800,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.inMixMolFrac[2] >= 0.0 and Splitter1.inMixMolFrac[2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp789 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2319
type: ALGORITHM

  assert(Splitter1.MW >= 0.0, "Variable violating min constraint: 0.0 <= Splitter1.MW, has value: " + String(Splitter1.MW, "g"));
*/
void Flowsheet_eqFunction_2319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2319};
  modelica_boolean tmp790;
  static const MMC_DEFSTRINGLIT(tmp791,67,"Variable violating min constraint: 0.0 <= Splitter1.MW, has value: ");
  modelica_string tmp792;
  static int tmp793 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp793)
  {
    tmp790 = GreaterEq(data->localData[0]->realVars[460] /* Splitter1.MW variable */,0.0);
    if(!tmp790)
    {
      tmp792 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[460] /* Splitter1.MW variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp791),tmp792);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",5080,7,5080,800,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.MW >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp793 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2320
type: ALGORITHM

  assert(Splitter1.outMixMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= Splitter1.outMixMasFlo[2], has value: " + String(Splitter1.outMixMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2320};
  modelica_boolean tmp794;
  static const MMC_DEFSTRINGLIT(tmp795,80,"Variable violating min constraint: 0.0 <= Splitter1.outMixMasFlo[2], has value: ");
  modelica_string tmp796;
  static int tmp797 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp797)
  {
    tmp794 = GreaterEq(data->localData[0]->realVars[464] /* Splitter1.outMixMasFlo[2] variable */,0.0);
    if(!tmp794)
    {
      tmp796 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[464] /* Splitter1.outMixMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp795),tmp796);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",5080,7,5080,800,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.outMixMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp797 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2140
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: " + String(MatStm1.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2140};
  modelica_boolean tmp798;
  static const MMC_DEFSTRINGLIT(tmp799,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: ");
  modelica_string tmp800;
  static int tmp801 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp801)
  {
    tmp798 = GreaterEq(data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */,0.0);
    if(!tmp798)
    {
      tmp800 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp799),tmp800);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp801 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2139
type: ALGORITHM

  assert(MatStm1.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,1], has value: " + String(MatStm1.compMolFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2139};
  modelica_boolean tmp802;
  static const MMC_DEFSTRINGLIT(tmp803,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,1], has value: ");
  modelica_string tmp804;
  static int tmp805 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp805)
  {
    tmp802 = GreaterEq(data->localData[0]->realVars[46] /* MatStm1.compMolFlo[1,1] variable */,0.0);
    if(!tmp802)
    {
      tmp804 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[46] /* MatStm1.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp803),tmp804);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp805 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2138
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: " + String(MatStm1.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2138};
  modelica_boolean tmp806;
  static const MMC_DEFSTRINGLIT(tmp807,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: ");
  modelica_string tmp808;
  static int tmp809 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp809)
  {
    tmp806 = GreaterEq(data->localData[0]->realVars[23] /* MatStm1.compMasFlo[1,2] variable */,0.0);
    if(!tmp806)
    {
      tmp808 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[23] /* MatStm1.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp807),tmp808);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp809 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2137
type: ALGORITHM

  assert(MatStm1.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,2], has value: " + String(MatStm1.compMolFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2137};
  modelica_boolean tmp810;
  static const MMC_DEFSTRINGLIT(tmp811,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,2], has value: ");
  modelica_string tmp812;
  static int tmp813 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp813)
  {
    tmp810 = GreaterEq(data->localData[0]->realVars[47] /* MatStm1.compMolFlo[1,2] variable */,0.0);
    if(!tmp810)
    {
      tmp812 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[47] /* MatStm1.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp811),tmp812);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp813 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int Flowsheet_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  Flowsheet_eqFunction_2141(data, threadData);

  Flowsheet_eqFunction_2142(data, threadData);

  Flowsheet_eqFunction_2143(data, threadData);

  Flowsheet_eqFunction_2144(data, threadData);

  Flowsheet_eqFunction_2145(data, threadData);

  Flowsheet_eqFunction_2146(data, threadData);

  Flowsheet_eqFunction_2147(data, threadData);

  Flowsheet_eqFunction_2148(data, threadData);

  Flowsheet_eqFunction_2149(data, threadData);

  Flowsheet_eqFunction_2150(data, threadData);

  Flowsheet_eqFunction_2151(data, threadData);

  Flowsheet_eqFunction_2152(data, threadData);

  Flowsheet_eqFunction_2153(data, threadData);

  Flowsheet_eqFunction_2154(data, threadData);

  Flowsheet_eqFunction_2155(data, threadData);

  Flowsheet_eqFunction_2156(data, threadData);

  Flowsheet_eqFunction_2157(data, threadData);

  Flowsheet_eqFunction_2158(data, threadData);

  Flowsheet_eqFunction_2159(data, threadData);

  Flowsheet_eqFunction_2160(data, threadData);

  Flowsheet_eqFunction_2161(data, threadData);

  Flowsheet_eqFunction_2162(data, threadData);

  Flowsheet_eqFunction_2163(data, threadData);

  Flowsheet_eqFunction_2164(data, threadData);

  Flowsheet_eqFunction_2165(data, threadData);

  Flowsheet_eqFunction_2166(data, threadData);

  Flowsheet_eqFunction_2167(data, threadData);

  Flowsheet_eqFunction_2168(data, threadData);

  Flowsheet_eqFunction_2169(data, threadData);

  Flowsheet_eqFunction_2170(data, threadData);

  Flowsheet_eqFunction_2171(data, threadData);

  Flowsheet_eqFunction_2172(data, threadData);

  Flowsheet_eqFunction_2173(data, threadData);

  Flowsheet_eqFunction_2174(data, threadData);

  Flowsheet_eqFunction_2175(data, threadData);

  Flowsheet_eqFunction_2176(data, threadData);

  Flowsheet_eqFunction_2177(data, threadData);

  Flowsheet_eqFunction_2178(data, threadData);

  Flowsheet_eqFunction_2179(data, threadData);

  Flowsheet_eqFunction_2180(data, threadData);

  Flowsheet_eqFunction_2181(data, threadData);

  Flowsheet_eqFunction_2182(data, threadData);

  Flowsheet_eqFunction_2183(data, threadData);

  Flowsheet_eqFunction_2184(data, threadData);

  Flowsheet_eqFunction_2185(data, threadData);

  Flowsheet_eqFunction_2186(data, threadData);

  Flowsheet_eqFunction_2187(data, threadData);

  Flowsheet_eqFunction_2188(data, threadData);

  Flowsheet_eqFunction_2189(data, threadData);

  Flowsheet_eqFunction_2190(data, threadData);

  Flowsheet_eqFunction_2191(data, threadData);

  Flowsheet_eqFunction_2192(data, threadData);

  Flowsheet_eqFunction_2193(data, threadData);

  Flowsheet_eqFunction_2194(data, threadData);

  Flowsheet_eqFunction_2195(data, threadData);

  Flowsheet_eqFunction_2196(data, threadData);

  Flowsheet_eqFunction_2197(data, threadData);

  Flowsheet_eqFunction_2198(data, threadData);

  Flowsheet_eqFunction_2199(data, threadData);

  Flowsheet_eqFunction_2200(data, threadData);

  Flowsheet_eqFunction_2201(data, threadData);

  Flowsheet_eqFunction_2202(data, threadData);

  Flowsheet_eqFunction_2203(data, threadData);

  Flowsheet_eqFunction_2204(data, threadData);

  Flowsheet_eqFunction_2205(data, threadData);

  Flowsheet_eqFunction_2206(data, threadData);

  Flowsheet_eqFunction_2207(data, threadData);

  Flowsheet_eqFunction_2208(data, threadData);

  Flowsheet_eqFunction_2209(data, threadData);

  Flowsheet_eqFunction_2210(data, threadData);

  Flowsheet_eqFunction_2211(data, threadData);

  Flowsheet_eqFunction_2212(data, threadData);

  Flowsheet_eqFunction_2213(data, threadData);

  Flowsheet_eqFunction_2214(data, threadData);

  Flowsheet_eqFunction_2215(data, threadData);

  Flowsheet_eqFunction_2216(data, threadData);

  Flowsheet_eqFunction_2217(data, threadData);

  Flowsheet_eqFunction_2218(data, threadData);

  Flowsheet_eqFunction_2219(data, threadData);

  Flowsheet_eqFunction_2220(data, threadData);

  Flowsheet_eqFunction_2221(data, threadData);

  Flowsheet_eqFunction_2222(data, threadData);

  Flowsheet_eqFunction_2223(data, threadData);

  Flowsheet_eqFunction_2224(data, threadData);

  Flowsheet_eqFunction_2225(data, threadData);

  Flowsheet_eqFunction_2226(data, threadData);

  Flowsheet_eqFunction_2227(data, threadData);

  Flowsheet_eqFunction_2228(data, threadData);

  Flowsheet_eqFunction_2229(data, threadData);

  Flowsheet_eqFunction_2230(data, threadData);

  Flowsheet_eqFunction_2231(data, threadData);

  Flowsheet_eqFunction_2232(data, threadData);

  Flowsheet_eqFunction_2233(data, threadData);

  Flowsheet_eqFunction_2234(data, threadData);

  Flowsheet_eqFunction_2235(data, threadData);

  Flowsheet_eqFunction_2236(data, threadData);

  Flowsheet_eqFunction_2237(data, threadData);

  Flowsheet_eqFunction_2238(data, threadData);

  Flowsheet_eqFunction_2239(data, threadData);

  Flowsheet_eqFunction_2240(data, threadData);

  Flowsheet_eqFunction_2241(data, threadData);

  Flowsheet_eqFunction_2242(data, threadData);

  Flowsheet_eqFunction_2243(data, threadData);

  Flowsheet_eqFunction_2244(data, threadData);

  Flowsheet_eqFunction_2245(data, threadData);

  Flowsheet_eqFunction_2246(data, threadData);

  Flowsheet_eqFunction_2247(data, threadData);

  Flowsheet_eqFunction_2248(data, threadData);

  Flowsheet_eqFunction_2249(data, threadData);

  Flowsheet_eqFunction_2250(data, threadData);

  Flowsheet_eqFunction_2251(data, threadData);

  Flowsheet_eqFunction_2252(data, threadData);

  Flowsheet_eqFunction_2253(data, threadData);

  Flowsheet_eqFunction_2254(data, threadData);

  Flowsheet_eqFunction_2255(data, threadData);

  Flowsheet_eqFunction_2256(data, threadData);

  Flowsheet_eqFunction_2257(data, threadData);

  Flowsheet_eqFunction_2258(data, threadData);

  Flowsheet_eqFunction_2259(data, threadData);

  Flowsheet_eqFunction_2260(data, threadData);

  Flowsheet_eqFunction_2261(data, threadData);

  Flowsheet_eqFunction_2262(data, threadData);

  Flowsheet_eqFunction_2263(data, threadData);

  Flowsheet_eqFunction_2264(data, threadData);

  Flowsheet_eqFunction_2265(data, threadData);

  Flowsheet_eqFunction_2266(data, threadData);

  Flowsheet_eqFunction_2267(data, threadData);

  Flowsheet_eqFunction_2268(data, threadData);

  Flowsheet_eqFunction_2269(data, threadData);

  Flowsheet_eqFunction_2270(data, threadData);

  Flowsheet_eqFunction_2271(data, threadData);

  Flowsheet_eqFunction_2272(data, threadData);

  Flowsheet_eqFunction_2273(data, threadData);

  Flowsheet_eqFunction_2274(data, threadData);

  Flowsheet_eqFunction_2275(data, threadData);

  Flowsheet_eqFunction_2276(data, threadData);

  Flowsheet_eqFunction_2277(data, threadData);

  Flowsheet_eqFunction_2278(data, threadData);

  Flowsheet_eqFunction_2279(data, threadData);

  Flowsheet_eqFunction_2280(data, threadData);

  Flowsheet_eqFunction_2281(data, threadData);

  Flowsheet_eqFunction_2282(data, threadData);

  Flowsheet_eqFunction_2283(data, threadData);

  Flowsheet_eqFunction_2284(data, threadData);

  Flowsheet_eqFunction_2285(data, threadData);

  Flowsheet_eqFunction_2286(data, threadData);

  Flowsheet_eqFunction_2287(data, threadData);

  Flowsheet_eqFunction_2288(data, threadData);

  Flowsheet_eqFunction_2289(data, threadData);

  Flowsheet_eqFunction_2290(data, threadData);

  Flowsheet_eqFunction_2291(data, threadData);

  Flowsheet_eqFunction_2292(data, threadData);

  Flowsheet_eqFunction_2293(data, threadData);

  Flowsheet_eqFunction_2294(data, threadData);

  Flowsheet_eqFunction_2295(data, threadData);

  Flowsheet_eqFunction_2296(data, threadData);

  Flowsheet_eqFunction_2297(data, threadData);

  Flowsheet_eqFunction_2298(data, threadData);

  Flowsheet_eqFunction_2299(data, threadData);

  Flowsheet_eqFunction_2300(data, threadData);

  Flowsheet_eqFunction_2301(data, threadData);

  Flowsheet_eqFunction_2302(data, threadData);

  Flowsheet_eqFunction_2303(data, threadData);

  Flowsheet_eqFunction_2304(data, threadData);

  Flowsheet_eqFunction_2305(data, threadData);

  Flowsheet_eqFunction_2306(data, threadData);

  Flowsheet_eqFunction_2307(data, threadData);

  Flowsheet_eqFunction_2308(data, threadData);

  Flowsheet_eqFunction_2309(data, threadData);

  Flowsheet_eqFunction_2310(data, threadData);

  Flowsheet_eqFunction_2311(data, threadData);

  Flowsheet_eqFunction_2312(data, threadData);

  Flowsheet_eqFunction_2313(data, threadData);

  Flowsheet_eqFunction_2314(data, threadData);

  Flowsheet_eqFunction_2315(data, threadData);

  Flowsheet_eqFunction_2316(data, threadData);

  Flowsheet_eqFunction_2317(data, threadData);

  Flowsheet_eqFunction_2318(data, threadData);

  Flowsheet_eqFunction_2319(data, threadData);

  Flowsheet_eqFunction_2320(data, threadData);

  Flowsheet_eqFunction_2140(data, threadData);

  Flowsheet_eqFunction_2139(data, threadData);

  Flowsheet_eqFunction_2138(data, threadData);

  Flowsheet_eqFunction_2137(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

