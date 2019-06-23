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
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,80,"Variable violating min constraint: 0.0 <= Splitter1.outMixMasFlo[1], has value: ");
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp3)
  {
    tmp0 = GreaterEq(data->localData[0]->realVars[463] /* Splitter1.outMixMasFlo[1] variable */,0.0);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[463] /* Splitter1.outMixMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",5080,7,5080,800,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.outMixMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp3 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2142
type: ALGORITHM

  assert(MatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: " + String(MatStm1.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2142};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  static const MMC_DEFSTRINGLIT(tmp6,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp7;
  static int tmp8 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp8)
  {
    tmp4 = GreaterEq(data->localData[0]->realVars[73] /* MatStm1.liqPhasMolFrac variable */,0.0);
    tmp5 = LessEq(data->localData[0]->realVars[73] /* MatStm1.liqPhasMolFrac variable */,1.0);
    if(!(tmp4 && tmp5))
    {
      tmp7 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[73] /* MatStm1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp6),tmp7);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp8 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2143
type: ALGORITHM

  assert(MatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: " + String(MatStm1.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2143};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp12;
  static int tmp13 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp13)
  {
    tmp9 = GreaterEq(data->localData[0]->realVars[72] /* MatStm1.liqPhasMasFrac variable */,0.0);
    tmp10 = LessEq(data->localData[0]->realVars[72] /* MatStm1.liqPhasMasFrac variable */,1.0);
    if(!(tmp9 && tmp10))
    {
      tmp12 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[72] /* MatStm1.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp11),tmp12);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: " + String(MatStm1.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2144};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp17;
  static int tmp18 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp18)
  {
    tmp14 = GreaterEq(data->localData[0]->realVars[100] /* MatStm1.vapPhasMasFrac variable */,0.0);
    tmp15 = LessEq(data->localData[0]->realVars[100] /* MatStm1.vapPhasMasFrac variable */,1.0);
    if(!(tmp14 && tmp15))
    {
      tmp17 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[100] /* MatStm1.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp16),tmp17);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: " + String(MatStm1.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2145};
  modelica_boolean tmp19;
  static const MMC_DEFSTRINGLIT(tmp20,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: ");
  modelica_string tmp21;
  static int tmp22 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp22)
  {
    tmp19 = GreaterEq(data->localData[0]->realVars[98] /* MatStm1.totMolFlo[2] variable */,0.0);
    if(!tmp19)
    {
      tmp21 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[98] /* MatStm1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp20),tmp21);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp22 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2146
type: ALGORITHM

  assert(MatStm1.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: " + String(MatStm1.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2146};
  modelica_boolean tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: ");
  modelica_string tmp25;
  static int tmp26 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp26)
  {
    tmp23 = GreaterEq(data->localData[0]->realVars[99] /* MatStm1.totMolFlo[3] variable */,0.0);
    if(!tmp23)
    {
      tmp25 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[99] /* MatStm1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp24),tmp25);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp26 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2147
type: ALGORITHM

  assert(MatStm1.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: " + String(MatStm1.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2147};
  modelica_boolean tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: ");
  modelica_string tmp29;
  static int tmp30 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp30)
  {
    tmp27 = GreaterEq(data->localData[0]->realVars[94] /* MatStm1.totMasFlo[1] variable */,0.0);
    if(!tmp27)
    {
      tmp29 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[94] /* MatStm1.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp28),tmp29);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp30 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2148
type: ALGORITHM

  assert(MatStm1.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: " + String(MatStm1.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2148};
  modelica_boolean tmp31;
  static const MMC_DEFSTRINGLIT(tmp32,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: ");
  modelica_string tmp33;
  static int tmp34 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp34)
  {
    tmp31 = GreaterEq(data->localData[0]->realVars[95] /* MatStm1.totMasFlo[2] variable */,0.0);
    if(!tmp31)
    {
      tmp33 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[95] /* MatStm1.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp32),tmp33);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp34 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2149
type: ALGORITHM

  assert(MatStm1.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: " + String(MatStm1.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2149};
  modelica_boolean tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: ");
  modelica_string tmp37;
  static int tmp38 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp38)
  {
    tmp35 = GreaterEq(data->localData[0]->realVars[96] /* MatStm1.totMasFlo[3] variable */,0.0);
    if(!tmp35)
    {
      tmp37 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[96] /* MatStm1.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp36),tmp37);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp38 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2150
type: ALGORITHM

  assert(MatStm1.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: " + String(MatStm1.MW[1], "g"));
*/
void Flowsheet_eqFunction_2150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2150};
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: ");
  modelica_string tmp41;
  static int tmp42 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp42)
  {
    tmp39 = GreaterEq(data->localData[0]->realVars[15] /* MatStm1.MW[1] variable */,0.0);
    if(!tmp39)
    {
      tmp41 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[15] /* MatStm1.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp42 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2151
type: ALGORITHM

  assert(MatStm1.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: " + String(MatStm1.MW[2], "g"));
*/
void Flowsheet_eqFunction_2151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2151};
  modelica_boolean tmp43;
  static const MMC_DEFSTRINGLIT(tmp44,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: ");
  modelica_string tmp45;
  static int tmp46 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp46)
  {
    tmp43 = GreaterEq(data->localData[0]->realVars[16] /* MatStm1.MW[2] variable */,0.0);
    if(!tmp43)
    {
      tmp45 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[16] /* MatStm1.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp44),tmp45);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp46 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2152
type: ALGORITHM

  assert(MatStm1.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: " + String(MatStm1.MW[3], "g"));
*/
void Flowsheet_eqFunction_2152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2152};
  modelica_boolean tmp47;
  static const MMC_DEFSTRINGLIT(tmp48,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: ");
  modelica_string tmp49;
  static int tmp50 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp50)
  {
    tmp47 = GreaterEq(data->localData[0]->realVars[17] /* MatStm1.MW[3] variable */,0.0);
    if(!tmp47)
    {
      tmp49 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[17] /* MatStm1.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp48),tmp49);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp50 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2153
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2153};
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  static const MMC_DEFSTRINGLIT(tmp53,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp54;
  static int tmp55 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp55)
  {
    tmp51 = GreaterEq(data->localData[0]->realVars[56] /* MatStm1.compMolFrac[2,1] variable */,0.0);
    tmp52 = LessEq(data->localData[0]->realVars[56] /* MatStm1.compMolFrac[2,1] variable */,1.0);
    if(!(tmp51 && tmp52))
    {
      tmp54 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[56] /* MatStm1.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp53),tmp54);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp55 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2154
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2154};
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  static const MMC_DEFSTRINGLIT(tmp58,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp59;
  static int tmp60 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp60)
  {
    tmp56 = GreaterEq(data->localData[0]->realVars[57] /* MatStm1.compMolFrac[2,2] variable */,0.0);
    tmp57 = LessEq(data->localData[0]->realVars[57] /* MatStm1.compMolFrac[2,2] variable */,1.0);
    if(!(tmp56 && tmp57))
    {
      tmp59 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[57] /* MatStm1.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp58),tmp59);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp60 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2155
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2155};
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  static const MMC_DEFSTRINGLIT(tmp63,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp64;
  static int tmp65 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp65)
  {
    tmp61 = GreaterEq(data->localData[0]->realVars[58] /* MatStm1.compMolFrac[3,1] variable */,0.0);
    tmp62 = LessEq(data->localData[0]->realVars[58] /* MatStm1.compMolFrac[3,1] variable */,1.0);
    if(!(tmp61 && tmp62))
    {
      tmp64 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[58] /* MatStm1.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp63),tmp64);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2156};
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  static const MMC_DEFSTRINGLIT(tmp68,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp69;
  static int tmp70 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp70)
  {
    tmp66 = GreaterEq(data->localData[0]->realVars[59] /* MatStm1.compMolFrac[3,2] variable */,0.0);
    tmp67 = LessEq(data->localData[0]->realVars[59] /* MatStm1.compMolFrac[3,2] variable */,1.0);
    if(!(tmp66 && tmp67))
    {
      tmp69 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[59] /* MatStm1.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp68),tmp69);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2157};
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  static const MMC_DEFSTRINGLIT(tmp73,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp74;
  static int tmp75 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp75)
  {
    tmp71 = GreaterEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[1,1] variable */,0.0);
    tmp72 = LessEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[1,1] variable */,1.0);
    if(!(tmp71 && tmp72))
    {
      tmp74 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp73),tmp74);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2158};
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  static const MMC_DEFSTRINGLIT(tmp78,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp79;
  static int tmp80 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp80)
  {
    tmp76 = GreaterEq(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[1,2] variable */,0.0);
    tmp77 = LessEq(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[1,2] variable */,1.0);
    if(!(tmp76 && tmp77))
    {
      tmp79 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp78),tmp79);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2159};
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  static const MMC_DEFSTRINGLIT(tmp83,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp84;
  static int tmp85 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp85)
  {
    tmp81 = GreaterEq(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[2,1] variable */,0.0);
    tmp82 = LessEq(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[2,1] variable */,1.0);
    if(!(tmp81 && tmp82))
    {
      tmp84 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp83),tmp84);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2160};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  static const MMC_DEFSTRINGLIT(tmp88,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp89;
  static int tmp90 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp90)
  {
    tmp86 = GreaterEq(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[2,2] variable */,0.0);
    tmp87 = LessEq(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[2,2] variable */,1.0);
    if(!(tmp86 && tmp87))
    {
      tmp89 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp88),tmp89);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2161};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  static const MMC_DEFSTRINGLIT(tmp93,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp94;
  static int tmp95 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp95)
  {
    tmp91 = GreaterEq(data->localData[0]->realVars[34] /* MatStm1.compMasFrac[3,1] variable */,0.0);
    tmp92 = LessEq(data->localData[0]->realVars[34] /* MatStm1.compMasFrac[3,1] variable */,1.0);
    if(!(tmp91 && tmp92))
    {
      tmp94 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[34] /* MatStm1.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp93),tmp94);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2162};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  static const MMC_DEFSTRINGLIT(tmp98,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp99;
  static int tmp100 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp100)
  {
    tmp96 = GreaterEq(data->localData[0]->realVars[35] /* MatStm1.compMasFrac[3,2] variable */,0.0);
    tmp97 = LessEq(data->localData[0]->realVars[35] /* MatStm1.compMasFrac[3,2] variable */,1.0);
    if(!(tmp96 && tmp97))
    {
      tmp99 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[35] /* MatStm1.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp98),tmp99);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: " + String(MatStm1.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2163};
  modelica_boolean tmp101;
  static const MMC_DEFSTRINGLIT(tmp102,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: ");
  modelica_string tmp103;
  static int tmp104 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp104)
  {
    tmp101 = GreaterEq(data->localData[0]->realVars[50] /* MatStm1.compMolFlo[2,1] variable */,0.0);
    if(!tmp101)
    {
      tmp103 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[50] /* MatStm1.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp102),tmp103);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp104 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2164
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: " + String(MatStm1.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2164};
  modelica_boolean tmp105;
  static const MMC_DEFSTRINGLIT(tmp106,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: ");
  modelica_string tmp107;
  static int tmp108 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp108)
  {
    tmp105 = GreaterEq(data->localData[0]->realVars[51] /* MatStm1.compMolFlo[2,2] variable */,0.0);
    if(!tmp105)
    {
      tmp107 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[51] /* MatStm1.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp106),tmp107);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp108 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2165
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: " + String(MatStm1.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2165};
  modelica_boolean tmp109;
  static const MMC_DEFSTRINGLIT(tmp110,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: ");
  modelica_string tmp111;
  static int tmp112 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp112)
  {
    tmp109 = GreaterEq(data->localData[0]->realVars[52] /* MatStm1.compMolFlo[3,1] variable */,0.0);
    if(!tmp109)
    {
      tmp111 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[52] /* MatStm1.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp110),tmp111);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp112 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2166
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: " + String(MatStm1.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2166};
  modelica_boolean tmp113;
  static const MMC_DEFSTRINGLIT(tmp114,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: ");
  modelica_string tmp115;
  static int tmp116 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp116)
  {
    tmp113 = GreaterEq(data->localData[0]->realVars[53] /* MatStm1.compMolFlo[3,2] variable */,0.0);
    if(!tmp113)
    {
      tmp115 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[53] /* MatStm1.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp114),tmp115);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp116 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2167
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: " + String(MatStm1.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2167};
  modelica_boolean tmp117;
  static const MMC_DEFSTRINGLIT(tmp118,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: ");
  modelica_string tmp119;
  static int tmp120 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp120)
  {
    tmp117 = GreaterEq(data->localData[0]->realVars[26] /* MatStm1.compMasFlo[2,1] variable */,0.0);
    if(!tmp117)
    {
      tmp119 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[26] /* MatStm1.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp118),tmp119);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp120 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2168
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: " + String(MatStm1.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2168};
  modelica_boolean tmp121;
  static const MMC_DEFSTRINGLIT(tmp122,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: ");
  modelica_string tmp123;
  static int tmp124 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp124)
  {
    tmp121 = GreaterEq(data->localData[0]->realVars[27] /* MatStm1.compMasFlo[2,2] variable */,0.0);
    if(!tmp121)
    {
      tmp123 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[27] /* MatStm1.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp122),tmp123);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp124 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2169
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: " + String(MatStm1.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2169};
  modelica_boolean tmp125;
  static const MMC_DEFSTRINGLIT(tmp126,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: ");
  modelica_string tmp127;
  static int tmp128 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp128)
  {
    tmp125 = GreaterEq(data->localData[0]->realVars[28] /* MatStm1.compMasFlo[3,1] variable */,0.0);
    if(!tmp125)
    {
      tmp127 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[28] /* MatStm1.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp126),tmp127);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp128 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2170
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: " + String(MatStm1.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2170};
  modelica_boolean tmp129;
  static const MMC_DEFSTRINGLIT(tmp130,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: ");
  modelica_string tmp131;
  static int tmp132 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp132)
  {
    tmp129 = GreaterEq(data->localData[0]->realVars[29] /* MatStm1.compMasFlo[3,2] variable */,0.0);
    if(!tmp129)
    {
      tmp131 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[29] /* MatStm1.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp130),tmp131);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp132 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2171
type: ALGORITHM

  assert(MatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: " + String(MatStm2.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2171};
  modelica_boolean tmp133;
  modelica_boolean tmp134;
  static const MMC_DEFSTRINGLIT(tmp135,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp136;
  static int tmp137 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp137)
  {
    tmp133 = GreaterEq(data->localData[0]->realVars[163] /* MatStm2.liqPhasMolFrac variable */,0.0);
    tmp134 = LessEq(data->localData[0]->realVars[163] /* MatStm2.liqPhasMolFrac variable */,1.0);
    if(!(tmp133 && tmp134))
    {
      tmp136 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[163] /* MatStm2.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp135),tmp136);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp137 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2172
type: ALGORITHM

  assert(MatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: " + String(MatStm2.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2172};
  modelica_boolean tmp138;
  modelica_boolean tmp139;
  static const MMC_DEFSTRINGLIT(tmp140,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp141;
  static int tmp142 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp142)
  {
    tmp138 = GreaterEq(data->localData[0]->realVars[162] /* MatStm2.liqPhasMasFrac variable */,0.0);
    tmp139 = LessEq(data->localData[0]->realVars[162] /* MatStm2.liqPhasMasFrac variable */,1.0);
    if(!(tmp138 && tmp139))
    {
      tmp141 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[162] /* MatStm2.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp140),tmp141);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp142 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2173
type: ALGORITHM

  assert(MatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: " + String(MatStm2.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2173};
  modelica_boolean tmp143;
  modelica_boolean tmp144;
  static const MMC_DEFSTRINGLIT(tmp145,88,"Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp146;
  static int tmp147 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp147)
  {
    tmp143 = GreaterEq(data->localData[0]->realVars[190] /* MatStm2.vapPhasMasFrac variable */,0.0);
    tmp144 = LessEq(data->localData[0]->realVars[190] /* MatStm2.vapPhasMasFrac variable */,1.0);
    if(!(tmp143 && tmp144))
    {
      tmp146 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[190] /* MatStm2.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp145),tmp146);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: " + String(MatStm2.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2174};
  modelica_boolean tmp148;
  static const MMC_DEFSTRINGLIT(tmp149,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: ");
  modelica_string tmp150;
  static int tmp151 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp151)
  {
    tmp148 = GreaterEq(data->localData[0]->realVars[188] /* MatStm2.totMolFlo[2] variable */,0.0);
    if(!tmp148)
    {
      tmp150 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[188] /* MatStm2.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp149),tmp150);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: " + String(MatStm2.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2175};
  modelica_boolean tmp152;
  static const MMC_DEFSTRINGLIT(tmp153,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: ");
  modelica_string tmp154;
  static int tmp155 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp155)
  {
    tmp152 = GreaterEq(data->localData[0]->realVars[189] /* MatStm2.totMolFlo[3] variable */,0.0);
    if(!tmp152)
    {
      tmp154 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[189] /* MatStm2.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp153),tmp154);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: " + String(MatStm2.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2176};
  modelica_boolean tmp156;
  static const MMC_DEFSTRINGLIT(tmp157,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: ");
  modelica_string tmp158;
  static int tmp159 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp159)
  {
    tmp156 = GreaterEq(data->localData[0]->realVars[184] /* MatStm2.totMasFlo[1] variable */,0.0);
    if(!tmp156)
    {
      tmp158 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[184] /* MatStm2.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp157),tmp158);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: " + String(MatStm2.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2177};
  modelica_boolean tmp160;
  static const MMC_DEFSTRINGLIT(tmp161,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: ");
  modelica_string tmp162;
  static int tmp163 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp163)
  {
    tmp160 = GreaterEq(data->localData[0]->realVars[185] /* MatStm2.totMasFlo[2] variable */,0.0);
    if(!tmp160)
    {
      tmp162 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[185] /* MatStm2.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp161),tmp162);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: " + String(MatStm2.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2178};
  modelica_boolean tmp164;
  static const MMC_DEFSTRINGLIT(tmp165,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: ");
  modelica_string tmp166;
  static int tmp167 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp167)
  {
    tmp164 = GreaterEq(data->localData[0]->realVars[186] /* MatStm2.totMasFlo[3] variable */,0.0);
    if(!tmp164)
    {
      tmp166 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[186] /* MatStm2.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp165),tmp166);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp167 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2179
type: ALGORITHM

  assert(MatStm2.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: " + String(MatStm2.MW[1], "g"));
*/
void Flowsheet_eqFunction_2179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2179};
  modelica_boolean tmp168;
  static const MMC_DEFSTRINGLIT(tmp169,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: ");
  modelica_string tmp170;
  static int tmp171 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp171)
  {
    tmp168 = GreaterEq(data->localData[0]->realVars[105] /* MatStm2.MW[1] variable */,0.0);
    if(!tmp168)
    {
      tmp170 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[105] /* MatStm2.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp169),tmp170);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp171 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2180
type: ALGORITHM

  assert(MatStm2.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: " + String(MatStm2.MW[2], "g"));
*/
void Flowsheet_eqFunction_2180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2180};
  modelica_boolean tmp172;
  static const MMC_DEFSTRINGLIT(tmp173,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: ");
  modelica_string tmp174;
  static int tmp175 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp175)
  {
    tmp172 = GreaterEq(data->localData[0]->realVars[106] /* MatStm2.MW[2] variable */,0.0);
    if(!tmp172)
    {
      tmp174 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[106] /* MatStm2.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp173),tmp174);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp175 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2181
type: ALGORITHM

  assert(MatStm2.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: " + String(MatStm2.MW[3], "g"));
*/
void Flowsheet_eqFunction_2181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2181};
  modelica_boolean tmp176;
  static const MMC_DEFSTRINGLIT(tmp177,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: ");
  modelica_string tmp178;
  static int tmp179 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp179)
  {
    tmp176 = GreaterEq(data->localData[0]->realVars[107] /* MatStm2.MW[3] variable */,0.0);
    if(!tmp176)
    {
      tmp178 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[107] /* MatStm2.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp177),tmp178);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp179 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2182
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2182};
  modelica_boolean tmp180;
  modelica_boolean tmp181;
  static const MMC_DEFSTRINGLIT(tmp182,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp183;
  static int tmp184 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp184)
  {
    tmp180 = GreaterEq(data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,1] variable */,0.0);
    tmp181 = LessEq(data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,1] variable */,1.0);
    if(!(tmp180 && tmp181))
    {
      tmp183 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp182),tmp183);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp184 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2183
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2183};
  modelica_boolean tmp185;
  modelica_boolean tmp186;
  static const MMC_DEFSTRINGLIT(tmp187,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp188;
  static int tmp189 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp189)
  {
    tmp185 = GreaterEq(data->localData[0]->realVars[147] /* MatStm2.compMolFrac[2,2] variable */,0.0);
    tmp186 = LessEq(data->localData[0]->realVars[147] /* MatStm2.compMolFrac[2,2] variable */,1.0);
    if(!(tmp185 && tmp186))
    {
      tmp188 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[147] /* MatStm2.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp187),tmp188);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp189 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2184
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2184};
  modelica_boolean tmp190;
  modelica_boolean tmp191;
  static const MMC_DEFSTRINGLIT(tmp192,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp193;
  static int tmp194 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp194)
  {
    tmp190 = GreaterEq(data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,1] variable */,0.0);
    tmp191 = LessEq(data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,1] variable */,1.0);
    if(!(tmp190 && tmp191))
    {
      tmp193 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp192),tmp193);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp194 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2185
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2185};
  modelica_boolean tmp195;
  modelica_boolean tmp196;
  static const MMC_DEFSTRINGLIT(tmp197,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp198;
  static int tmp199 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp199)
  {
    tmp195 = GreaterEq(data->localData[0]->realVars[149] /* MatStm2.compMolFrac[3,2] variable */,0.0);
    tmp196 = LessEq(data->localData[0]->realVars[149] /* MatStm2.compMolFrac[3,2] variable */,1.0);
    if(!(tmp195 && tmp196))
    {
      tmp198 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[149] /* MatStm2.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp197),tmp198);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2186};
  modelica_boolean tmp200;
  modelica_boolean tmp201;
  static const MMC_DEFSTRINGLIT(tmp202,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp203;
  static int tmp204 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp204)
  {
    tmp200 = GreaterEq(data->localData[0]->realVars[120] /* MatStm2.compMasFrac[1,1] variable */,0.0);
    tmp201 = LessEq(data->localData[0]->realVars[120] /* MatStm2.compMasFrac[1,1] variable */,1.0);
    if(!(tmp200 && tmp201))
    {
      tmp203 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[120] /* MatStm2.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp202),tmp203);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp204 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2187
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2187};
  modelica_boolean tmp205;
  modelica_boolean tmp206;
  static const MMC_DEFSTRINGLIT(tmp207,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp208;
  static int tmp209 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp209)
  {
    tmp205 = GreaterEq(data->localData[0]->realVars[121] /* MatStm2.compMasFrac[1,2] variable */,0.0);
    tmp206 = LessEq(data->localData[0]->realVars[121] /* MatStm2.compMasFrac[1,2] variable */,1.0);
    if(!(tmp205 && tmp206))
    {
      tmp208 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[121] /* MatStm2.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp207),tmp208);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp209 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2188
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2188};
  modelica_boolean tmp210;
  modelica_boolean tmp211;
  static const MMC_DEFSTRINGLIT(tmp212,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp213;
  static int tmp214 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp214)
  {
    tmp210 = GreaterEq(data->localData[0]->realVars[122] /* MatStm2.compMasFrac[2,1] variable */,0.0);
    tmp211 = LessEq(data->localData[0]->realVars[122] /* MatStm2.compMasFrac[2,1] variable */,1.0);
    if(!(tmp210 && tmp211))
    {
      tmp213 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[122] /* MatStm2.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp212),tmp213);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp214 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2189
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2189};
  modelica_boolean tmp215;
  modelica_boolean tmp216;
  static const MMC_DEFSTRINGLIT(tmp217,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp218;
  static int tmp219 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp219)
  {
    tmp215 = GreaterEq(data->localData[0]->realVars[123] /* MatStm2.compMasFrac[2,2] variable */,0.0);
    tmp216 = LessEq(data->localData[0]->realVars[123] /* MatStm2.compMasFrac[2,2] variable */,1.0);
    if(!(tmp215 && tmp216))
    {
      tmp218 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[123] /* MatStm2.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp217),tmp218);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp219 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2190
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2190};
  modelica_boolean tmp220;
  modelica_boolean tmp221;
  static const MMC_DEFSTRINGLIT(tmp222,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp223;
  static int tmp224 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp224)
  {
    tmp220 = GreaterEq(data->localData[0]->realVars[124] /* MatStm2.compMasFrac[3,1] variable */,0.0);
    tmp221 = LessEq(data->localData[0]->realVars[124] /* MatStm2.compMasFrac[3,1] variable */,1.0);
    if(!(tmp220 && tmp221))
    {
      tmp223 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[124] /* MatStm2.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp222),tmp223);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp224 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2191
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2191};
  modelica_boolean tmp225;
  modelica_boolean tmp226;
  static const MMC_DEFSTRINGLIT(tmp227,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp228;
  static int tmp229 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp229)
  {
    tmp225 = GreaterEq(data->localData[0]->realVars[125] /* MatStm2.compMasFrac[3,2] variable */,0.0);
    tmp226 = LessEq(data->localData[0]->realVars[125] /* MatStm2.compMasFrac[3,2] variable */,1.0);
    if(!(tmp225 && tmp226))
    {
      tmp228 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[125] /* MatStm2.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp227),tmp228);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp229 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2192
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: " + String(MatStm2.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2192};
  modelica_boolean tmp230;
  static const MMC_DEFSTRINGLIT(tmp231,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: ");
  modelica_string tmp232;
  static int tmp233 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp233)
  {
    tmp230 = GreaterEq(data->localData[0]->realVars[140] /* MatStm2.compMolFlo[2,1] variable */,0.0);
    if(!tmp230)
    {
      tmp232 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[140] /* MatStm2.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp231),tmp232);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp233 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2193
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: " + String(MatStm2.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2193};
  modelica_boolean tmp234;
  static const MMC_DEFSTRINGLIT(tmp235,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: ");
  modelica_string tmp236;
  static int tmp237 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp237)
  {
    tmp234 = GreaterEq(data->localData[0]->realVars[141] /* MatStm2.compMolFlo[2,2] variable */,0.0);
    if(!tmp234)
    {
      tmp236 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[141] /* MatStm2.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp235),tmp236);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp237 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2194
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: " + String(MatStm2.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2194};
  modelica_boolean tmp238;
  static const MMC_DEFSTRINGLIT(tmp239,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: ");
  modelica_string tmp240;
  static int tmp241 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp241)
  {
    tmp238 = GreaterEq(data->localData[0]->realVars[142] /* MatStm2.compMolFlo[3,1] variable */,0.0);
    if(!tmp238)
    {
      tmp240 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[142] /* MatStm2.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp239),tmp240);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp241 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2195
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: " + String(MatStm2.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2195};
  modelica_boolean tmp242;
  static const MMC_DEFSTRINGLIT(tmp243,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: ");
  modelica_string tmp244;
  static int tmp245 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp245)
  {
    tmp242 = GreaterEq(data->localData[0]->realVars[143] /* MatStm2.compMolFlo[3,2] variable */,0.0);
    if(!tmp242)
    {
      tmp244 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[143] /* MatStm2.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp243),tmp244);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: " + String(MatStm2.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2196};
  modelica_boolean tmp246;
  static const MMC_DEFSTRINGLIT(tmp247,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: ");
  modelica_string tmp248;
  static int tmp249 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp249)
  {
    tmp246 = GreaterEq(data->localData[0]->realVars[116] /* MatStm2.compMasFlo[2,1] variable */,0.0);
    if(!tmp246)
    {
      tmp248 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[116] /* MatStm2.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp247),tmp248);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp249 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2197
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: " + String(MatStm2.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2197};
  modelica_boolean tmp250;
  static const MMC_DEFSTRINGLIT(tmp251,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: ");
  modelica_string tmp252;
  static int tmp253 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp253)
  {
    tmp250 = GreaterEq(data->localData[0]->realVars[117] /* MatStm2.compMasFlo[2,2] variable */,0.0);
    if(!tmp250)
    {
      tmp252 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[117] /* MatStm2.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp251),tmp252);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp253 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2198
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: " + String(MatStm2.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2198};
  modelica_boolean tmp254;
  static const MMC_DEFSTRINGLIT(tmp255,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: ");
  modelica_string tmp256;
  static int tmp257 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp257)
  {
    tmp254 = GreaterEq(data->localData[0]->realVars[118] /* MatStm2.compMasFlo[3,1] variable */,0.0);
    if(!tmp254)
    {
      tmp256 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[118] /* MatStm2.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp255),tmp256);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp257 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2199
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: " + String(MatStm2.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2199};
  modelica_boolean tmp258;
  static const MMC_DEFSTRINGLIT(tmp259,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: ");
  modelica_string tmp260;
  static int tmp261 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp261)
  {
    tmp258 = GreaterEq(data->localData[0]->realVars[119] /* MatStm2.compMasFlo[3,2] variable */,0.0);
    if(!tmp258)
    {
      tmp260 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[119] /* MatStm2.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp259),tmp260);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp261 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2200
type: ALGORITHM

  assert(Mixer1.inVapPhasMolFrac[1] >= 0.0 and Mixer1.inVapPhasMolFrac[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[1] <= 1.0, has value: " + String(Mixer1.inVapPhasMolFrac[1], "g"));
*/
void Flowsheet_eqFunction_2200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2200};
  modelica_boolean tmp262;
  modelica_boolean tmp263;
  static const MMC_DEFSTRINGLIT(tmp264,92,"Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[1] <= 1.0, has value: ");
  modelica_string tmp265;
  static int tmp266 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp266)
  {
    tmp262 = GreaterEq(data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */,0.0);
    tmp263 = LessEq(data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */,1.0);
    if(!(tmp262 && tmp263))
    {
      tmp265 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp264),tmp265);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4319,7,4319,434,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMixer1.inVapPhasMolFrac[1] >= 0.0 and Mixer1.inVapPhasMolFrac[1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp266 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2201
type: ALGORITHM

  assert(Mixer1.inVapPhasMolFrac[2] >= 0.0 and Mixer1.inVapPhasMolFrac[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[2] <= 1.0, has value: " + String(Mixer1.inVapPhasMolFrac[2], "g"));
*/
void Flowsheet_eqFunction_2201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2201};
  modelica_boolean tmp267;
  modelica_boolean tmp268;
  static const MMC_DEFSTRINGLIT(tmp269,92,"Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[2] <= 1.0, has value: ");
  modelica_string tmp270;
  static int tmp271 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp271)
  {
    tmp267 = GreaterEq(data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */,0.0);
    tmp268 = LessEq(data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */,1.0);
    if(!(tmp267 && tmp268))
    {
      tmp270 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp269),tmp270);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4319,7,4319,434,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMixer1.inVapPhasMolFrac[2] >= 0.0 and Mixer1.inVapPhasMolFrac[2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp271 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2202
type: ALGORITHM

  assert(MatStm3.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.Pbubl, has value: " + String(MatStm3.Pbubl, "g"));
*/
void Flowsheet_eqFunction_2202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2202};
  modelica_boolean tmp272;
  static const MMC_DEFSTRINGLIT(tmp273,68,"Variable violating min constraint: 0.0 <= MatStm3.Pbubl, has value: ");
  modelica_string tmp274;
  static int tmp275 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp275)
  {
    tmp272 = GreaterEq(data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */,0.0);
    if(!tmp272)
    {
      tmp274 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[198] /* MatStm3.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp273),tmp274);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp275 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2203
type: ALGORITHM

  assert(MatStm3.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.Pdew, has value: " + String(MatStm3.Pdew, "g"));
*/
void Flowsheet_eqFunction_2203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2203};
  modelica_boolean tmp276;
  static const MMC_DEFSTRINGLIT(tmp277,67,"Variable violating min constraint: 0.0 <= MatStm3.Pdew, has value: ");
  modelica_string tmp278;
  static int tmp279 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp279)
  {
    tmp276 = GreaterEq(data->localData[0]->realVars[199] /* MatStm3.Pdew variable */,0.0);
    if(!tmp276)
    {
      tmp278 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[199] /* MatStm3.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp277),tmp278);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp279 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2204
type: ALGORITHM

  assert(MatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: " + String(MatStm3.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2204};
  modelica_boolean tmp280;
  modelica_boolean tmp281;
  static const MMC_DEFSTRINGLIT(tmp282,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp283;
  static int tmp284 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp284)
  {
    tmp280 = GreaterEq(data->localData[0]->realVars[251] /* MatStm3.liqPhasMolFrac variable */,0.0);
    tmp281 = LessEq(data->localData[0]->realVars[251] /* MatStm3.liqPhasMolFrac variable */,1.0);
    if(!(tmp280 && tmp281))
    {
      tmp283 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[251] /* MatStm3.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp282),tmp283);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp284 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2205
type: ALGORITHM

  assert(MatStm3.vapPhasMolFrac >= 0.0 and MatStm3.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMolFrac <= 1.0, has value: " + String(MatStm3.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2205};
  modelica_boolean tmp285;
  modelica_boolean tmp286;
  static const MMC_DEFSTRINGLIT(tmp287,88,"Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp288;
  static int tmp289 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp289)
  {
    tmp285 = GreaterEq(data->localData[0]->realVars[279] /* MatStm3.vapPhasMolFrac variable */,0.0);
    tmp286 = LessEq(data->localData[0]->realVars[279] /* MatStm3.vapPhasMolFrac variable */,1.0);
    if(!(tmp285 && tmp286))
    {
      tmp288 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[279] /* MatStm3.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp287),tmp288);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.vapPhasMolFrac >= 0.0 and MatStm3.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp289 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2206
type: ALGORITHM

  assert(MatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: " + String(MatStm3.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2206};
  modelica_boolean tmp290;
  modelica_boolean tmp291;
  static const MMC_DEFSTRINGLIT(tmp292,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp293;
  static int tmp294 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp294)
  {
    tmp290 = GreaterEq(data->localData[0]->realVars[250] /* MatStm3.liqPhasMasFrac variable */,0.0);
    tmp291 = LessEq(data->localData[0]->realVars[250] /* MatStm3.liqPhasMasFrac variable */,1.0);
    if(!(tmp290 && tmp291))
    {
      tmp293 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[250] /* MatStm3.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp292),tmp293);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp294 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2207
type: ALGORITHM

  assert(MatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: " + String(MatStm3.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2207};
  modelica_boolean tmp295;
  modelica_boolean tmp296;
  static const MMC_DEFSTRINGLIT(tmp297,88,"Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp298;
  static int tmp299 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp299)
  {
    tmp295 = GreaterEq(data->localData[0]->realVars[278] /* MatStm3.vapPhasMasFrac variable */,0.0);
    tmp296 = LessEq(data->localData[0]->realVars[278] /* MatStm3.vapPhasMasFrac variable */,1.0);
    if(!(tmp295 && tmp296))
    {
      tmp298 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[278] /* MatStm3.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp297),tmp298);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: " + String(MatStm3.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2208};
  modelica_boolean tmp300;
  static const MMC_DEFSTRINGLIT(tmp301,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: ");
  modelica_string tmp302;
  static int tmp303 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp303)
  {
    tmp300 = GreaterEq(data->localData[0]->realVars[276] /* MatStm3.totMolFlo[2] variable */,0.0);
    if(!tmp300)
    {
      tmp302 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[276] /* MatStm3.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp301),tmp302);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: " + String(MatStm3.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2209};
  modelica_boolean tmp304;
  static const MMC_DEFSTRINGLIT(tmp305,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: ");
  modelica_string tmp306;
  static int tmp307 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp307)
  {
    tmp304 = GreaterEq(data->localData[0]->realVars[277] /* MatStm3.totMolFlo[3] variable */,0.0);
    if(!tmp304)
    {
      tmp306 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[277] /* MatStm3.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp305),tmp306);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: " + String(MatStm3.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2210};
  modelica_boolean tmp308;
  static const MMC_DEFSTRINGLIT(tmp309,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: ");
  modelica_string tmp310;
  static int tmp311 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp311)
  {
    tmp308 = GreaterEq(data->localData[0]->realVars[272] /* MatStm3.totMasFlo[1] variable */,0.0);
    if(!tmp308)
    {
      tmp310 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[272] /* MatStm3.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp309),tmp310);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: " + String(MatStm3.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2211};
  modelica_boolean tmp312;
  static const MMC_DEFSTRINGLIT(tmp313,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: ");
  modelica_string tmp314;
  static int tmp315 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp315)
  {
    tmp312 = GreaterEq(data->localData[0]->realVars[273] /* MatStm3.totMasFlo[2] variable */,0.0);
    if(!tmp312)
    {
      tmp314 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[273] /* MatStm3.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp313),tmp314);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: " + String(MatStm3.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2212};
  modelica_boolean tmp316;
  static const MMC_DEFSTRINGLIT(tmp317,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: ");
  modelica_string tmp318;
  static int tmp319 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp319)
  {
    tmp316 = GreaterEq(data->localData[0]->realVars[274] /* MatStm3.totMasFlo[3] variable */,0.0);
    if(!tmp316)
    {
      tmp318 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[274] /* MatStm3.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp317),tmp318);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: " + String(MatStm3.MW[1], "g"));
*/
void Flowsheet_eqFunction_2213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2213};
  modelica_boolean tmp320;
  static const MMC_DEFSTRINGLIT(tmp321,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: ");
  modelica_string tmp322;
  static int tmp323 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp323)
  {
    tmp320 = GreaterEq(data->localData[0]->realVars[195] /* MatStm3.MW[1] variable */,0.0);
    if(!tmp320)
    {
      tmp322 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[195] /* MatStm3.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp321),tmp322);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: " + String(MatStm3.MW[2], "g"));
*/
void Flowsheet_eqFunction_2214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2214};
  modelica_boolean tmp324;
  static const MMC_DEFSTRINGLIT(tmp325,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: ");
  modelica_string tmp326;
  static int tmp327 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp327)
  {
    tmp324 = GreaterEq(data->localData[0]->realVars[196] /* MatStm3.MW[2] variable */,0.0);
    if(!tmp324)
    {
      tmp326 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[196] /* MatStm3.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp325),tmp326);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: " + String(MatStm3.MW[3], "g"));
*/
void Flowsheet_eqFunction_2215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2215};
  modelica_boolean tmp328;
  static const MMC_DEFSTRINGLIT(tmp329,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: ");
  modelica_string tmp330;
  static int tmp331 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp331)
  {
    tmp328 = GreaterEq(data->localData[0]->realVars[197] /* MatStm3.MW[3] variable */,0.0);
    if(!tmp328)
    {
      tmp330 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[197] /* MatStm3.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp329),tmp330);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2216};
  modelica_boolean tmp332;
  modelica_boolean tmp333;
  static const MMC_DEFSTRINGLIT(tmp334,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp335;
  static int tmp336 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp336)
  {
    tmp332 = GreaterEq(data->localData[0]->realVars[234] /* MatStm3.compMolFrac[2,1] variable */,0.0);
    tmp333 = LessEq(data->localData[0]->realVars[234] /* MatStm3.compMolFrac[2,1] variable */,1.0);
    if(!(tmp332 && tmp333))
    {
      tmp335 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[234] /* MatStm3.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp334),tmp335);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp336 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2217
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2217};
  modelica_boolean tmp337;
  modelica_boolean tmp338;
  static const MMC_DEFSTRINGLIT(tmp339,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp340;
  static int tmp341 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp341)
  {
    tmp337 = GreaterEq(data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,2] variable */,0.0);
    tmp338 = LessEq(data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,2] variable */,1.0);
    if(!(tmp337 && tmp338))
    {
      tmp340 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp339),tmp340);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp341 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2218
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2218};
  modelica_boolean tmp342;
  modelica_boolean tmp343;
  static const MMC_DEFSTRINGLIT(tmp344,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp345;
  static int tmp346 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp346)
  {
    tmp342 = GreaterEq(data->localData[0]->realVars[236] /* MatStm3.compMolFrac[3,1] variable */,0.0);
    tmp343 = LessEq(data->localData[0]->realVars[236] /* MatStm3.compMolFrac[3,1] variable */,1.0);
    if(!(tmp342 && tmp343))
    {
      tmp345 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[236] /* MatStm3.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp344),tmp345);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp346 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2219
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2219};
  modelica_boolean tmp347;
  modelica_boolean tmp348;
  static const MMC_DEFSTRINGLIT(tmp349,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp350;
  static int tmp351 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp351)
  {
    tmp347 = GreaterEq(data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,2] variable */,0.0);
    tmp348 = LessEq(data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,2] variable */,1.0);
    if(!(tmp347 && tmp348))
    {
      tmp350 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp349),tmp350);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp351 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2220
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2220};
  modelica_boolean tmp352;
  modelica_boolean tmp353;
  static const MMC_DEFSTRINGLIT(tmp354,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp355;
  static int tmp356 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp356)
  {
    tmp352 = GreaterEq(data->localData[0]->realVars[208] /* MatStm3.compMasFrac[1,1] variable */,0.0);
    tmp353 = LessEq(data->localData[0]->realVars[208] /* MatStm3.compMasFrac[1,1] variable */,1.0);
    if(!(tmp352 && tmp353))
    {
      tmp355 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[208] /* MatStm3.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp354),tmp355);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp356 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2221
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2221};
  modelica_boolean tmp357;
  modelica_boolean tmp358;
  static const MMC_DEFSTRINGLIT(tmp359,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp360;
  static int tmp361 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp361)
  {
    tmp357 = GreaterEq(data->localData[0]->realVars[209] /* MatStm3.compMasFrac[1,2] variable */,0.0);
    tmp358 = LessEq(data->localData[0]->realVars[209] /* MatStm3.compMasFrac[1,2] variable */,1.0);
    if(!(tmp357 && tmp358))
    {
      tmp360 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[209] /* MatStm3.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp359),tmp360);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp361 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2222
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2222};
  modelica_boolean tmp362;
  modelica_boolean tmp363;
  static const MMC_DEFSTRINGLIT(tmp364,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp365;
  static int tmp366 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp366)
  {
    tmp362 = GreaterEq(data->localData[0]->realVars[210] /* MatStm3.compMasFrac[2,1] variable */,0.0);
    tmp363 = LessEq(data->localData[0]->realVars[210] /* MatStm3.compMasFrac[2,1] variable */,1.0);
    if(!(tmp362 && tmp363))
    {
      tmp365 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[210] /* MatStm3.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp364),tmp365);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp366 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2223
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2223};
  modelica_boolean tmp367;
  modelica_boolean tmp368;
  static const MMC_DEFSTRINGLIT(tmp369,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp370;
  static int tmp371 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp371)
  {
    tmp367 = GreaterEq(data->localData[0]->realVars[211] /* MatStm3.compMasFrac[2,2] variable */,0.0);
    tmp368 = LessEq(data->localData[0]->realVars[211] /* MatStm3.compMasFrac[2,2] variable */,1.0);
    if(!(tmp367 && tmp368))
    {
      tmp370 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[211] /* MatStm3.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp369),tmp370);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp371 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2224
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2224};
  modelica_boolean tmp372;
  modelica_boolean tmp373;
  static const MMC_DEFSTRINGLIT(tmp374,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp375;
  static int tmp376 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp376)
  {
    tmp372 = GreaterEq(data->localData[0]->realVars[212] /* MatStm3.compMasFrac[3,1] variable */,0.0);
    tmp373 = LessEq(data->localData[0]->realVars[212] /* MatStm3.compMasFrac[3,1] variable */,1.0);
    if(!(tmp372 && tmp373))
    {
      tmp375 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[212] /* MatStm3.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp374),tmp375);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp376 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2225
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2225};
  modelica_boolean tmp377;
  modelica_boolean tmp378;
  static const MMC_DEFSTRINGLIT(tmp379,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp380;
  static int tmp381 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp381)
  {
    tmp377 = GreaterEq(data->localData[0]->realVars[213] /* MatStm3.compMasFrac[3,2] variable */,0.0);
    tmp378 = LessEq(data->localData[0]->realVars[213] /* MatStm3.compMasFrac[3,2] variable */,1.0);
    if(!(tmp377 && tmp378))
    {
      tmp380 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[213] /* MatStm3.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp379),tmp380);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp381 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2226
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: " + String(MatStm3.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2226};
  modelica_boolean tmp382;
  static const MMC_DEFSTRINGLIT(tmp383,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: ");
  modelica_string tmp384;
  static int tmp385 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp385)
  {
    tmp382 = GreaterEq(data->localData[0]->realVars[228] /* MatStm3.compMolFlo[2,1] variable */,0.0);
    if(!tmp382)
    {
      tmp384 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[228] /* MatStm3.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp383),tmp384);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp385 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2227
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: " + String(MatStm3.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2227};
  modelica_boolean tmp386;
  static const MMC_DEFSTRINGLIT(tmp387,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: ");
  modelica_string tmp388;
  static int tmp389 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp389)
  {
    tmp386 = GreaterEq(data->localData[0]->realVars[229] /* MatStm3.compMolFlo[2,2] variable */,0.0);
    if(!tmp386)
    {
      tmp388 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[229] /* MatStm3.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp387),tmp388);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp389 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2228
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: " + String(MatStm3.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2228};
  modelica_boolean tmp390;
  static const MMC_DEFSTRINGLIT(tmp391,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: ");
  modelica_string tmp392;
  static int tmp393 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp393)
  {
    tmp390 = GreaterEq(data->localData[0]->realVars[230] /* MatStm3.compMolFlo[3,1] variable */,0.0);
    if(!tmp390)
    {
      tmp392 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[230] /* MatStm3.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp391),tmp392);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp393 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2229
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: " + String(MatStm3.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2229};
  modelica_boolean tmp394;
  static const MMC_DEFSTRINGLIT(tmp395,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: ");
  modelica_string tmp396;
  static int tmp397 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp397)
  {
    tmp394 = GreaterEq(data->localData[0]->realVars[231] /* MatStm3.compMolFlo[3,2] variable */,0.0);
    if(!tmp394)
    {
      tmp396 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[231] /* MatStm3.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp395),tmp396);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp397 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2230
type: ALGORITHM

  assert(MatStm3.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: " + String(MatStm3.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2230};
  modelica_boolean tmp398;
  static const MMC_DEFSTRINGLIT(tmp399,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: ");
  modelica_string tmp400;
  static int tmp401 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp401)
  {
    tmp398 = GreaterEq(data->localData[0]->realVars[204] /* MatStm3.compMasFlo[2,1] variable */,0.0);
    if(!tmp398)
    {
      tmp400 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[204] /* MatStm3.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp399),tmp400);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp401 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2231
type: ALGORITHM

  assert(MatStm3.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: " + String(MatStm3.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2231};
  modelica_boolean tmp402;
  static const MMC_DEFSTRINGLIT(tmp403,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: ");
  modelica_string tmp404;
  static int tmp405 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp405)
  {
    tmp402 = GreaterEq(data->localData[0]->realVars[205] /* MatStm3.compMasFlo[2,2] variable */,0.0);
    if(!tmp402)
    {
      tmp404 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[205] /* MatStm3.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp403),tmp404);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp405 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2232
type: ALGORITHM

  assert(MatStm3.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: " + String(MatStm3.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2232};
  modelica_boolean tmp406;
  static const MMC_DEFSTRINGLIT(tmp407,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: ");
  modelica_string tmp408;
  static int tmp409 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp409)
  {
    tmp406 = GreaterEq(data->localData[0]->realVars[206] /* MatStm3.compMasFlo[3,1] variable */,0.0);
    if(!tmp406)
    {
      tmp408 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[206] /* MatStm3.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp407),tmp408);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp409 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2233
type: ALGORITHM

  assert(MatStm3.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: " + String(MatStm3.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2233};
  modelica_boolean tmp410;
  static const MMC_DEFSTRINGLIT(tmp411,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: ");
  modelica_string tmp412;
  static int tmp413 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp413)
  {
    tmp410 = GreaterEq(data->localData[0]->realVars[207] /* MatStm3.compMasFlo[3,2] variable */,0.0);
    if(!tmp410)
    {
      tmp412 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[207] /* MatStm3.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp411),tmp412);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp413 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2234
type: ALGORITHM

  assert(MatStm3.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.K[1], has value: " + String(MatStm3.K[1], "g"));
*/
void Flowsheet_eqFunction_2234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2234};
  modelica_boolean tmp414;
  static const MMC_DEFSTRINGLIT(tmp415,67,"Variable violating min constraint: 0.0 <= MatStm3.K[1], has value: ");
  modelica_string tmp416;
  static int tmp417 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp417)
  {
    tmp414 = GreaterEq(data->localData[0]->realVars[193] /* MatStm3.K[1] variable */,0.0);
    if(!tmp414)
    {
      tmp416 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[193] /* MatStm3.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp415),tmp416);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp417 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2235
type: ALGORITHM

  assert(MatStm3.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.K[2], has value: " + String(MatStm3.K[2], "g"));
*/
void Flowsheet_eqFunction_2235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2235};
  modelica_boolean tmp418;
  static const MMC_DEFSTRINGLIT(tmp419,67,"Variable violating min constraint: 0.0 <= MatStm3.K[2], has value: ");
  modelica_string tmp420;
  static int tmp421 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp421)
  {
    tmp418 = GreaterEq(data->localData[0]->realVars[194] /* MatStm3.K[2] variable */,0.0);
    if(!tmp418)
    {
      tmp420 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[194] /* MatStm3.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp419),tmp420);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(Splitter1.outT[2] >= 0.0, "Variable violating min constraint: 0.0 <= Splitter1.outT[2], has value: " + String(Splitter1.outT[2], "g"));
*/
void Flowsheet_eqFunction_2236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2236};
  modelica_boolean tmp422;
  static const MMC_DEFSTRINGLIT(tmp423,72,"Variable violating min constraint: 0.0 <= Splitter1.outT[2], has value: ");
  modelica_string tmp424;
  static int tmp425 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp425)
  {
    tmp422 = GreaterEq(data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,0.0);
    if(!tmp422)
    {
      tmp424 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp423),tmp424);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",5080,7,5080,800,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.outT[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp425 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2237
type: ALGORITHM

  assert(Splitter1.inMixMolFrac[1] >= 0.0 and Splitter1.inMixMolFrac[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= Splitter1.inMixMolFrac[1] <= 1.0, has value: " + String(Splitter1.inMixMolFrac[1], "g"));
*/
void Flowsheet_eqFunction_2237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2237};
  modelica_boolean tmp426;
  modelica_boolean tmp427;
  static const MMC_DEFSTRINGLIT(tmp428,91,"Variable violating min/max constraint: 0.0 <= Splitter1.inMixMolFrac[1] <= 1.0, has value: ");
  modelica_string tmp429;
  static int tmp430 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp430)
  {
    tmp426 = GreaterEq(data->localData[0]->realVars[461] /* Splitter1.inMixMolFrac[1] variable */,0.0);
    tmp427 = LessEq(data->localData[0]->realVars[461] /* Splitter1.inMixMolFrac[1] variable */,1.0);
    if(!(tmp426 && tmp427))
    {
      tmp429 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[461] /* Splitter1.inMixMolFrac[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp428),tmp429);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",5080,7,5080,800,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.inMixMolFrac[1] >= 0.0 and Splitter1.inMixMolFrac[1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp430 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2238
type: ALGORITHM

  assert(Splitter1.inMixMolFrac[2] >= 0.0 and Splitter1.inMixMolFrac[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= Splitter1.inMixMolFrac[2] <= 1.0, has value: " + String(Splitter1.inMixMolFrac[2], "g"));
*/
void Flowsheet_eqFunction_2238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2238};
  modelica_boolean tmp431;
  modelica_boolean tmp432;
  static const MMC_DEFSTRINGLIT(tmp433,91,"Variable violating min/max constraint: 0.0 <= Splitter1.inMixMolFrac[2] <= 1.0, has value: ");
  modelica_string tmp434;
  static int tmp435 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp435)
  {
    tmp431 = GreaterEq(data->localData[0]->realVars[462] /* Splitter1.inMixMolFrac[2] variable */,0.0);
    tmp432 = LessEq(data->localData[0]->realVars[462] /* Splitter1.inMixMolFrac[2] variable */,1.0);
    if(!(tmp431 && tmp432))
    {
      tmp434 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[462] /* Splitter1.inMixMolFrac[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp433),tmp434);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",5080,7,5080,800,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.inMixMolFrac[2] >= 0.0 and Splitter1.inMixMolFrac[2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp435 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2239
type: ALGORITHM

  assert(Splitter1.MW >= 0.0, "Variable violating min constraint: 0.0 <= Splitter1.MW, has value: " + String(Splitter1.MW, "g"));
*/
void Flowsheet_eqFunction_2239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2239};
  modelica_boolean tmp436;
  static const MMC_DEFSTRINGLIT(tmp437,67,"Variable violating min constraint: 0.0 <= Splitter1.MW, has value: ");
  modelica_string tmp438;
  static int tmp439 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp439)
  {
    tmp436 = GreaterEq(data->localData[0]->realVars[460] /* Splitter1.MW variable */,0.0);
    if(!tmp436)
    {
      tmp438 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[460] /* Splitter1.MW variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp437),tmp438);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",5080,7,5080,800,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.MW >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp439 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2240
type: ALGORITHM

  assert(Splitter1.outMixMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= Splitter1.outMixMasFlo[2], has value: " + String(Splitter1.outMixMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2240};
  modelica_boolean tmp440;
  static const MMC_DEFSTRINGLIT(tmp441,80,"Variable violating min constraint: 0.0 <= Splitter1.outMixMasFlo[2], has value: ");
  modelica_string tmp442;
  static int tmp443 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp443)
  {
    tmp440 = GreaterEq(data->localData[0]->realVars[464] /* Splitter1.outMixMasFlo[2] variable */,0.0);
    if(!tmp440)
    {
      tmp442 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[464] /* Splitter1.outMixMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp441),tmp442);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",5080,7,5080,800,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.outMixMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp443 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2241
type: ALGORITHM

  assert(MatStm4.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.Pbubl, has value: " + String(MatStm4.Pbubl, "g"));
*/
void Flowsheet_eqFunction_2241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2241};
  modelica_boolean tmp444;
  static const MMC_DEFSTRINGLIT(tmp445,68,"Variable violating min constraint: 0.0 <= MatStm4.Pbubl, has value: ");
  modelica_string tmp446;
  static int tmp447 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp447)
  {
    tmp444 = GreaterEq(data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */,0.0);
    if(!tmp444)
    {
      tmp446 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[287] /* MatStm4.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp445),tmp446);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp447 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2242
type: ALGORITHM

  assert(MatStm4.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.Pdew, has value: " + String(MatStm4.Pdew, "g"));
*/
void Flowsheet_eqFunction_2242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2242};
  modelica_boolean tmp448;
  static const MMC_DEFSTRINGLIT(tmp449,67,"Variable violating min constraint: 0.0 <= MatStm4.Pdew, has value: ");
  modelica_string tmp450;
  static int tmp451 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp451)
  {
    tmp448 = GreaterEq(data->localData[0]->realVars[288] /* MatStm4.Pdew variable */,0.0);
    if(!tmp448)
    {
      tmp450 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[288] /* MatStm4.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp449),tmp450);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp451 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2243
type: ALGORITHM

  assert(MatStm4.liqPhasMolFrac >= 0.0 and MatStm4.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.liqPhasMolFrac <= 1.0, has value: " + String(MatStm4.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2243};
  modelica_boolean tmp452;
  modelica_boolean tmp453;
  static const MMC_DEFSTRINGLIT(tmp454,88,"Variable violating min/max constraint: 0.0 <= MatStm4.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp455;
  static int tmp456 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp456)
  {
    tmp452 = GreaterEq(data->localData[0]->realVars[340] /* MatStm4.liqPhasMolFrac variable */,0.0);
    tmp453 = LessEq(data->localData[0]->realVars[340] /* MatStm4.liqPhasMolFrac variable */,1.0);
    if(!(tmp452 && tmp453))
    {
      tmp455 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[340] /* MatStm4.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp454),tmp455);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.liqPhasMolFrac >= 0.0 and MatStm4.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp456 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2244
type: ALGORITHM

  assert(MatStm4.vapPhasMolFrac >= 0.0 and MatStm4.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.vapPhasMolFrac <= 1.0, has value: " + String(MatStm4.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2244};
  modelica_boolean tmp457;
  modelica_boolean tmp458;
  static const MMC_DEFSTRINGLIT(tmp459,88,"Variable violating min/max constraint: 0.0 <= MatStm4.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp460;
  static int tmp461 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp461)
  {
    tmp457 = GreaterEq(data->localData[0]->realVars[367] /* MatStm4.vapPhasMolFrac variable */,0.0);
    tmp458 = LessEq(data->localData[0]->realVars[367] /* MatStm4.vapPhasMolFrac variable */,1.0);
    if(!(tmp457 && tmp458))
    {
      tmp460 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[367] /* MatStm4.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp459),tmp460);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.vapPhasMolFrac >= 0.0 and MatStm4.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp461 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2245
type: ALGORITHM

  assert(MatStm4.liqPhasMasFrac >= 0.0 and MatStm4.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.liqPhasMasFrac <= 1.0, has value: " + String(MatStm4.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2245};
  modelica_boolean tmp462;
  modelica_boolean tmp463;
  static const MMC_DEFSTRINGLIT(tmp464,88,"Variable violating min/max constraint: 0.0 <= MatStm4.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp465;
  static int tmp466 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp466)
  {
    tmp462 = GreaterEq(data->localData[0]->realVars[339] /* MatStm4.liqPhasMasFrac variable */,0.0);
    tmp463 = LessEq(data->localData[0]->realVars[339] /* MatStm4.liqPhasMasFrac variable */,1.0);
    if(!(tmp462 && tmp463))
    {
      tmp465 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[339] /* MatStm4.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp464),tmp465);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.liqPhasMasFrac >= 0.0 and MatStm4.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp466 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2246
type: ALGORITHM

  assert(MatStm4.vapPhasMasFrac >= 0.0 and MatStm4.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.vapPhasMasFrac <= 1.0, has value: " + String(MatStm4.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2246};
  modelica_boolean tmp467;
  modelica_boolean tmp468;
  static const MMC_DEFSTRINGLIT(tmp469,88,"Variable violating min/max constraint: 0.0 <= MatStm4.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp470;
  static int tmp471 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp471)
  {
    tmp467 = GreaterEq(data->localData[0]->realVars[366] /* MatStm4.vapPhasMasFrac variable */,0.0);
    tmp468 = LessEq(data->localData[0]->realVars[366] /* MatStm4.vapPhasMasFrac variable */,1.0);
    if(!(tmp467 && tmp468))
    {
      tmp470 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[366] /* MatStm4.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp469),tmp470);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.vapPhasMasFrac >= 0.0 and MatStm4.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm4.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMolFlo[2], has value: " + String(MatStm4.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2247};
  modelica_boolean tmp472;
  static const MMC_DEFSTRINGLIT(tmp473,75,"Variable violating min constraint: 0.0 <= MatStm4.totMolFlo[2], has value: ");
  modelica_string tmp474;
  static int tmp475 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp475)
  {
    tmp472 = GreaterEq(data->localData[0]->realVars[364] /* MatStm4.totMolFlo[2] variable */,0.0);
    if(!tmp472)
    {
      tmp474 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[364] /* MatStm4.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp473),tmp474);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm4.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMolFlo[3], has value: " + String(MatStm4.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2248};
  modelica_boolean tmp476;
  static const MMC_DEFSTRINGLIT(tmp477,75,"Variable violating min constraint: 0.0 <= MatStm4.totMolFlo[3], has value: ");
  modelica_string tmp478;
  static int tmp479 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp479)
  {
    tmp476 = GreaterEq(data->localData[0]->realVars[365] /* MatStm4.totMolFlo[3] variable */,0.0);
    if(!tmp476)
    {
      tmp478 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[365] /* MatStm4.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp477),tmp478);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm4.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[1], has value: " + String(MatStm4.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2249};
  modelica_boolean tmp480;
  static const MMC_DEFSTRINGLIT(tmp481,75,"Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[1], has value: ");
  modelica_string tmp482;
  static int tmp483 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp483)
  {
    tmp480 = GreaterEq(data->localData[0]->realVars[361] /* MatStm4.totMasFlo[1] variable */,0.0);
    if(!tmp480)
    {
      tmp482 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[361] /* MatStm4.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp481),tmp482);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm4.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[2], has value: " + String(MatStm4.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2250};
  modelica_boolean tmp484;
  static const MMC_DEFSTRINGLIT(tmp485,75,"Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[2], has value: ");
  modelica_string tmp486;
  static int tmp487 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp487)
  {
    tmp484 = GreaterEq(data->localData[0]->realVars[362] /* MatStm4.totMasFlo[2] variable */,0.0);
    if(!tmp484)
    {
      tmp486 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[362] /* MatStm4.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp485),tmp486);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm4.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[3], has value: " + String(MatStm4.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2251};
  modelica_boolean tmp488;
  static const MMC_DEFSTRINGLIT(tmp489,75,"Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[3], has value: ");
  modelica_string tmp490;
  static int tmp491 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp491)
  {
    tmp488 = GreaterEq(data->localData[0]->realVars[363] /* MatStm4.totMasFlo[3] variable */,0.0);
    if(!tmp488)
    {
      tmp490 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[363] /* MatStm4.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp489),tmp490);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm4.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.MW[1], has value: " + String(MatStm4.MW[1], "g"));
*/
void Flowsheet_eqFunction_2252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2252};
  modelica_boolean tmp492;
  static const MMC_DEFSTRINGLIT(tmp493,68,"Variable violating min constraint: 0.0 <= MatStm4.MW[1], has value: ");
  modelica_string tmp494;
  static int tmp495 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp495)
  {
    tmp492 = GreaterEq(data->localData[0]->realVars[284] /* MatStm4.MW[1] variable */,0.0);
    if(!tmp492)
    {
      tmp494 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[284] /* MatStm4.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp493),tmp494);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm4.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.MW[2], has value: " + String(MatStm4.MW[2], "g"));
*/
void Flowsheet_eqFunction_2253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2253};
  modelica_boolean tmp496;
  static const MMC_DEFSTRINGLIT(tmp497,68,"Variable violating min constraint: 0.0 <= MatStm4.MW[2], has value: ");
  modelica_string tmp498;
  static int tmp499 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp499)
  {
    tmp496 = GreaterEq(data->localData[0]->realVars[285] /* MatStm4.MW[2] variable */,0.0);
    if(!tmp496)
    {
      tmp498 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[285] /* MatStm4.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp497),tmp498);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm4.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.MW[3], has value: " + String(MatStm4.MW[3], "g"));
*/
void Flowsheet_eqFunction_2254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2254};
  modelica_boolean tmp500;
  static const MMC_DEFSTRINGLIT(tmp501,68,"Variable violating min constraint: 0.0 <= MatStm4.MW[3], has value: ");
  modelica_string tmp502;
  static int tmp503 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp503)
  {
    tmp500 = GreaterEq(data->localData[0]->realVars[286] /* MatStm4.MW[3] variable */,0.0);
    if(!tmp500)
    {
      tmp502 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[286] /* MatStm4.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp501),tmp502);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm4.compMolFrac[1,1] >= 0.0 and MatStm4.compMolFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[1,1] <= 1.0, has value: " + String(MatStm4.compMolFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2255};
  modelica_boolean tmp504;
  modelica_boolean tmp505;
  static const MMC_DEFSTRINGLIT(tmp506,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp507;
  static int tmp508 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp508)
  {
    tmp504 = GreaterEq(data->localData[0]->realVars[321] /* MatStm4.compMolFrac[1,1] variable */,0.0);
    tmp505 = LessEq(data->localData[0]->realVars[321] /* MatStm4.compMolFrac[1,1] variable */,1.0);
    if(!(tmp504 && tmp505))
    {
      tmp507 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[321] /* MatStm4.compMolFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp506),tmp507);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[1,1] >= 0.0 and MatStm4.compMolFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp508 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2256
type: ALGORITHM

  assert(MatStm4.compMolFrac[1,2] >= 0.0 and MatStm4.compMolFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[1,2] <= 1.0, has value: " + String(MatStm4.compMolFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2256};
  modelica_boolean tmp509;
  modelica_boolean tmp510;
  static const MMC_DEFSTRINGLIT(tmp511,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp512;
  static int tmp513 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp513)
  {
    tmp509 = GreaterEq(data->localData[0]->realVars[322] /* MatStm4.compMolFrac[1,2] variable */,0.0);
    tmp510 = LessEq(data->localData[0]->realVars[322] /* MatStm4.compMolFrac[1,2] variable */,1.0);
    if(!(tmp509 && tmp510))
    {
      tmp512 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[322] /* MatStm4.compMolFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp511),tmp512);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[1,2] >= 0.0 and MatStm4.compMolFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp513 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2257
type: ALGORITHM

  assert(MatStm4.compMolFrac[2,1] >= 0.0 and MatStm4.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm4.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2257};
  modelica_boolean tmp514;
  modelica_boolean tmp515;
  static const MMC_DEFSTRINGLIT(tmp516,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp517;
  static int tmp518 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp518)
  {
    tmp514 = GreaterEq(data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */,0.0);
    tmp515 = LessEq(data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */,1.0);
    if(!(tmp514 && tmp515))
    {
      tmp517 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[323] /* MatStm4.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp516),tmp517);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[2,1] >= 0.0 and MatStm4.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp518 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2258
type: ALGORITHM

  assert(MatStm4.compMolFrac[2,2] >= 0.0 and MatStm4.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm4.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2258};
  modelica_boolean tmp519;
  modelica_boolean tmp520;
  static const MMC_DEFSTRINGLIT(tmp521,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp522;
  static int tmp523 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp523)
  {
    tmp519 = GreaterEq(data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */,0.0);
    tmp520 = LessEq(data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */,1.0);
    if(!(tmp519 && tmp520))
    {
      tmp522 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[324] /* MatStm4.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp521),tmp522);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[2,2] >= 0.0 and MatStm4.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp523 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2259
type: ALGORITHM

  assert(MatStm4.compMolFrac[3,1] >= 0.0 and MatStm4.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm4.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2259};
  modelica_boolean tmp524;
  modelica_boolean tmp525;
  static const MMC_DEFSTRINGLIT(tmp526,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp527;
  static int tmp528 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp528)
  {
    tmp524 = GreaterEq(data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */,0.0);
    tmp525 = LessEq(data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */,1.0);
    if(!(tmp524 && tmp525))
    {
      tmp527 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[325] /* MatStm4.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp526),tmp527);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[3,1] >= 0.0 and MatStm4.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp528 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2260
type: ALGORITHM

  assert(MatStm4.compMolFrac[3,2] >= 0.0 and MatStm4.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm4.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2260};
  modelica_boolean tmp529;
  modelica_boolean tmp530;
  static const MMC_DEFSTRINGLIT(tmp531,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp532;
  static int tmp533 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp533)
  {
    tmp529 = GreaterEq(data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */,0.0);
    tmp530 = LessEq(data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */,1.0);
    if(!(tmp529 && tmp530))
    {
      tmp532 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[326] /* MatStm4.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp531),tmp532);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[3,2] >= 0.0 and MatStm4.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp533 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2261
type: ALGORITHM

  assert(MatStm4.compMasFrac[1,1] >= 0.0 and MatStm4.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm4.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2261};
  modelica_boolean tmp534;
  modelica_boolean tmp535;
  static const MMC_DEFSTRINGLIT(tmp536,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp537;
  static int tmp538 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp538)
  {
    tmp534 = GreaterEq(data->localData[0]->realVars[297] /* MatStm4.compMasFrac[1,1] variable */,0.0);
    tmp535 = LessEq(data->localData[0]->realVars[297] /* MatStm4.compMasFrac[1,1] variable */,1.0);
    if(!(tmp534 && tmp535))
    {
      tmp537 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[297] /* MatStm4.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp536),tmp537);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[1,1] >= 0.0 and MatStm4.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp538 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2262
type: ALGORITHM

  assert(MatStm4.compMasFrac[1,2] >= 0.0 and MatStm4.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm4.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2262};
  modelica_boolean tmp539;
  modelica_boolean tmp540;
  static const MMC_DEFSTRINGLIT(tmp541,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp542;
  static int tmp543 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp543)
  {
    tmp539 = GreaterEq(data->localData[0]->realVars[298] /* MatStm4.compMasFrac[1,2] variable */,0.0);
    tmp540 = LessEq(data->localData[0]->realVars[298] /* MatStm4.compMasFrac[1,2] variable */,1.0);
    if(!(tmp539 && tmp540))
    {
      tmp542 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[298] /* MatStm4.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp541),tmp542);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[1,2] >= 0.0 and MatStm4.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp543 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2263
type: ALGORITHM

  assert(MatStm4.compMasFrac[2,1] >= 0.0 and MatStm4.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm4.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2263};
  modelica_boolean tmp544;
  modelica_boolean tmp545;
  static const MMC_DEFSTRINGLIT(tmp546,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp547;
  static int tmp548 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp548)
  {
    tmp544 = GreaterEq(data->localData[0]->realVars[299] /* MatStm4.compMasFrac[2,1] variable */,0.0);
    tmp545 = LessEq(data->localData[0]->realVars[299] /* MatStm4.compMasFrac[2,1] variable */,1.0);
    if(!(tmp544 && tmp545))
    {
      tmp547 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[299] /* MatStm4.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp546),tmp547);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[2,1] >= 0.0 and MatStm4.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp548 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2264
type: ALGORITHM

  assert(MatStm4.compMasFrac[2,2] >= 0.0 and MatStm4.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm4.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2264};
  modelica_boolean tmp549;
  modelica_boolean tmp550;
  static const MMC_DEFSTRINGLIT(tmp551,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp552;
  static int tmp553 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp553)
  {
    tmp549 = GreaterEq(data->localData[0]->realVars[300] /* MatStm4.compMasFrac[2,2] variable */,0.0);
    tmp550 = LessEq(data->localData[0]->realVars[300] /* MatStm4.compMasFrac[2,2] variable */,1.0);
    if(!(tmp549 && tmp550))
    {
      tmp552 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[300] /* MatStm4.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp551),tmp552);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[2,2] >= 0.0 and MatStm4.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp553 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2265
type: ALGORITHM

  assert(MatStm4.compMasFrac[3,1] >= 0.0 and MatStm4.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm4.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2265};
  modelica_boolean tmp554;
  modelica_boolean tmp555;
  static const MMC_DEFSTRINGLIT(tmp556,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp557;
  static int tmp558 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp558)
  {
    tmp554 = GreaterEq(data->localData[0]->realVars[301] /* MatStm4.compMasFrac[3,1] variable */,0.0);
    tmp555 = LessEq(data->localData[0]->realVars[301] /* MatStm4.compMasFrac[3,1] variable */,1.0);
    if(!(tmp554 && tmp555))
    {
      tmp557 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[301] /* MatStm4.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp556),tmp557);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[3,1] >= 0.0 and MatStm4.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp558 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2266
type: ALGORITHM

  assert(MatStm4.compMasFrac[3,2] >= 0.0 and MatStm4.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm4.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2266};
  modelica_boolean tmp559;
  modelica_boolean tmp560;
  static const MMC_DEFSTRINGLIT(tmp561,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp562;
  static int tmp563 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp563)
  {
    tmp559 = GreaterEq(data->localData[0]->realVars[302] /* MatStm4.compMasFrac[3,2] variable */,0.0);
    tmp560 = LessEq(data->localData[0]->realVars[302] /* MatStm4.compMasFrac[3,2] variable */,1.0);
    if(!(tmp559 && tmp560))
    {
      tmp562 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[302] /* MatStm4.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp561),tmp562);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[3,2] >= 0.0 and MatStm4.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp563 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2267
type: ALGORITHM

  assert(MatStm4.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[1,1], has value: " + String(MatStm4.compMolFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2267};
  modelica_boolean tmp564;
  static const MMC_DEFSTRINGLIT(tmp565,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[1,1], has value: ");
  modelica_string tmp566;
  static int tmp567 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp567)
  {
    tmp564 = GreaterEq(data->localData[0]->realVars[315] /* MatStm4.compMolFlo[1,1] variable */,0.0);
    if(!tmp564)
    {
      tmp566 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[315] /* MatStm4.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp565),tmp566);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp567 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2268
type: ALGORITHM

  assert(MatStm4.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[1,2], has value: " + String(MatStm4.compMolFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2268};
  modelica_boolean tmp568;
  static const MMC_DEFSTRINGLIT(tmp569,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[1,2], has value: ");
  modelica_string tmp570;
  static int tmp571 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp571)
  {
    tmp568 = GreaterEq(data->localData[0]->realVars[316] /* MatStm4.compMolFlo[1,2] variable */,0.0);
    if(!tmp568)
    {
      tmp570 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[316] /* MatStm4.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp569),tmp570);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp571 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2269
type: ALGORITHM

  assert(MatStm4.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[2,1], has value: " + String(MatStm4.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2269};
  modelica_boolean tmp572;
  static const MMC_DEFSTRINGLIT(tmp573,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[2,1], has value: ");
  modelica_string tmp574;
  static int tmp575 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp575)
  {
    tmp572 = GreaterEq(data->localData[0]->realVars[317] /* MatStm4.compMolFlo[2,1] variable */,0.0);
    if(!tmp572)
    {
      tmp574 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[317] /* MatStm4.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp573),tmp574);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp575 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2270
type: ALGORITHM

  assert(MatStm4.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[2,2], has value: " + String(MatStm4.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2270};
  modelica_boolean tmp576;
  static const MMC_DEFSTRINGLIT(tmp577,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[2,2], has value: ");
  modelica_string tmp578;
  static int tmp579 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp579)
  {
    tmp576 = GreaterEq(data->localData[0]->realVars[318] /* MatStm4.compMolFlo[2,2] variable */,0.0);
    if(!tmp576)
    {
      tmp578 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[318] /* MatStm4.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp577),tmp578);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp579 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2271
type: ALGORITHM

  assert(MatStm4.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[3,1], has value: " + String(MatStm4.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2271};
  modelica_boolean tmp580;
  static const MMC_DEFSTRINGLIT(tmp581,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[3,1], has value: ");
  modelica_string tmp582;
  static int tmp583 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp583)
  {
    tmp580 = GreaterEq(data->localData[0]->realVars[319] /* MatStm4.compMolFlo[3,1] variable */,0.0);
    if(!tmp580)
    {
      tmp582 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[319] /* MatStm4.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp581),tmp582);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp583 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2272
type: ALGORITHM

  assert(MatStm4.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[3,2], has value: " + String(MatStm4.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2272};
  modelica_boolean tmp584;
  static const MMC_DEFSTRINGLIT(tmp585,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[3,2], has value: ");
  modelica_string tmp586;
  static int tmp587 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp587)
  {
    tmp584 = GreaterEq(data->localData[0]->realVars[320] /* MatStm4.compMolFlo[3,2] variable */,0.0);
    if(!tmp584)
    {
      tmp586 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[320] /* MatStm4.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp585),tmp586);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp587 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2273
type: ALGORITHM

  assert(MatStm4.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[1,1], has value: " + String(MatStm4.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2273};
  modelica_boolean tmp588;
  static const MMC_DEFSTRINGLIT(tmp589,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[1,1], has value: ");
  modelica_string tmp590;
  static int tmp591 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp591)
  {
    tmp588 = GreaterEq(data->localData[0]->realVars[291] /* MatStm4.compMasFlo[1,1] variable */,0.0);
    if(!tmp588)
    {
      tmp590 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[291] /* MatStm4.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp589),tmp590);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp591 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2274
type: ALGORITHM

  assert(MatStm4.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[1,2], has value: " + String(MatStm4.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2274};
  modelica_boolean tmp592;
  static const MMC_DEFSTRINGLIT(tmp593,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[1,2], has value: ");
  modelica_string tmp594;
  static int tmp595 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp595)
  {
    tmp592 = GreaterEq(data->localData[0]->realVars[292] /* MatStm4.compMasFlo[1,2] variable */,0.0);
    if(!tmp592)
    {
      tmp594 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[292] /* MatStm4.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp593),tmp594);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp595 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2275
type: ALGORITHM

  assert(MatStm4.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[2,1], has value: " + String(MatStm4.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2275};
  modelica_boolean tmp596;
  static const MMC_DEFSTRINGLIT(tmp597,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[2,1], has value: ");
  modelica_string tmp598;
  static int tmp599 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp599)
  {
    tmp596 = GreaterEq(data->localData[0]->realVars[293] /* MatStm4.compMasFlo[2,1] variable */,0.0);
    if(!tmp596)
    {
      tmp598 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[293] /* MatStm4.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp597),tmp598);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm4.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[2,2], has value: " + String(MatStm4.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2276};
  modelica_boolean tmp600;
  static const MMC_DEFSTRINGLIT(tmp601,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[2,2], has value: ");
  modelica_string tmp602;
  static int tmp603 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp603)
  {
    tmp600 = GreaterEq(data->localData[0]->realVars[294] /* MatStm4.compMasFlo[2,2] variable */,0.0);
    if(!tmp600)
    {
      tmp602 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[294] /* MatStm4.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp601),tmp602);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp603 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2277
type: ALGORITHM

  assert(MatStm4.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[3,1], has value: " + String(MatStm4.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2277};
  modelica_boolean tmp604;
  static const MMC_DEFSTRINGLIT(tmp605,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[3,1], has value: ");
  modelica_string tmp606;
  static int tmp607 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp607)
  {
    tmp604 = GreaterEq(data->localData[0]->realVars[295] /* MatStm4.compMasFlo[3,1] variable */,0.0);
    if(!tmp604)
    {
      tmp606 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[295] /* MatStm4.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp605),tmp606);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp607 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2278
type: ALGORITHM

  assert(MatStm4.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[3,2], has value: " + String(MatStm4.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2278};
  modelica_boolean tmp608;
  static const MMC_DEFSTRINGLIT(tmp609,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[3,2], has value: ");
  modelica_string tmp610;
  static int tmp611 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp611)
  {
    tmp608 = GreaterEq(data->localData[0]->realVars[296] /* MatStm4.compMasFlo[3,2] variable */,0.0);
    if(!tmp608)
    {
      tmp610 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[296] /* MatStm4.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp609),tmp610);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp611 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2279
type: ALGORITHM

  assert(MatStm4.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.K[1], has value: " + String(MatStm4.K[1], "g"));
*/
void Flowsheet_eqFunction_2279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2279};
  modelica_boolean tmp612;
  static const MMC_DEFSTRINGLIT(tmp613,67,"Variable violating min constraint: 0.0 <= MatStm4.K[1], has value: ");
  modelica_string tmp614;
  static int tmp615 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp615)
  {
    tmp612 = GreaterEq(data->localData[0]->realVars[282] /* MatStm4.K[1] variable */,0.0);
    if(!tmp612)
    {
      tmp614 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[282] /* MatStm4.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp613),tmp614);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp615 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2280
type: ALGORITHM

  assert(MatStm4.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.K[2], has value: " + String(MatStm4.K[2], "g"));
*/
void Flowsheet_eqFunction_2280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2280};
  modelica_boolean tmp616;
  static const MMC_DEFSTRINGLIT(tmp617,67,"Variable violating min constraint: 0.0 <= MatStm4.K[2], has value: ");
  modelica_string tmp618;
  static int tmp619 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp619)
  {
    tmp616 = GreaterEq(data->localData[0]->realVars[283] /* MatStm4.K[2] variable */,0.0);
    if(!tmp616)
    {
      tmp618 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[283] /* MatStm4.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp617),tmp618);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp619 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2281
type: ALGORITHM

  assert(MatStm5.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.Pbubl, has value: " + String(MatStm5.Pbubl, "g"));
*/
void Flowsheet_eqFunction_2281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2281};
  modelica_boolean tmp620;
  static const MMC_DEFSTRINGLIT(tmp621,68,"Variable violating min constraint: 0.0 <= MatStm5.Pbubl, has value: ");
  modelica_string tmp622;
  static int tmp623 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp623)
  {
    tmp620 = GreaterEq(data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */,0.0);
    if(!tmp620)
    {
      tmp622 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[375] /* MatStm5.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp621),tmp622);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp623 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2282
type: ALGORITHM

  assert(MatStm5.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.Pdew, has value: " + String(MatStm5.Pdew, "g"));
*/
void Flowsheet_eqFunction_2282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2282};
  modelica_boolean tmp624;
  static const MMC_DEFSTRINGLIT(tmp625,67,"Variable violating min constraint: 0.0 <= MatStm5.Pdew, has value: ");
  modelica_string tmp626;
  static int tmp627 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp627)
  {
    tmp624 = GreaterEq(data->localData[0]->realVars[376] /* MatStm5.Pdew variable */,0.0);
    if(!tmp624)
    {
      tmp626 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[376] /* MatStm5.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp625),tmp626);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp627 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2283
type: ALGORITHM

  assert(MatStm5.liqPhasMolFrac >= 0.0 and MatStm5.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.liqPhasMolFrac <= 1.0, has value: " + String(MatStm5.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2283};
  modelica_boolean tmp628;
  modelica_boolean tmp629;
  static const MMC_DEFSTRINGLIT(tmp630,88,"Variable violating min/max constraint: 0.0 <= MatStm5.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp631;
  static int tmp632 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp632)
  {
    tmp628 = GreaterEq(data->localData[0]->realVars[428] /* MatStm5.liqPhasMolFrac variable */,0.0);
    tmp629 = LessEq(data->localData[0]->realVars[428] /* MatStm5.liqPhasMolFrac variable */,1.0);
    if(!(tmp628 && tmp629))
    {
      tmp631 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[428] /* MatStm5.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp630),tmp631);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.liqPhasMolFrac >= 0.0 and MatStm5.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.vapPhasMolFrac >= 0.0 and MatStm5.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.vapPhasMolFrac <= 1.0, has value: " + String(MatStm5.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2284};
  modelica_boolean tmp633;
  modelica_boolean tmp634;
  static const MMC_DEFSTRINGLIT(tmp635,88,"Variable violating min/max constraint: 0.0 <= MatStm5.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp636;
  static int tmp637 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp637)
  {
    tmp633 = GreaterEq(data->localData[0]->realVars[455] /* MatStm5.vapPhasMolFrac variable */,0.0);
    tmp634 = LessEq(data->localData[0]->realVars[455] /* MatStm5.vapPhasMolFrac variable */,1.0);
    if(!(tmp633 && tmp634))
    {
      tmp636 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[455] /* MatStm5.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp635),tmp636);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.vapPhasMolFrac >= 0.0 and MatStm5.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp637 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2285
type: ALGORITHM

  assert(MatStm5.liqPhasMasFrac >= 0.0 and MatStm5.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.liqPhasMasFrac <= 1.0, has value: " + String(MatStm5.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2285};
  modelica_boolean tmp638;
  modelica_boolean tmp639;
  static const MMC_DEFSTRINGLIT(tmp640,88,"Variable violating min/max constraint: 0.0 <= MatStm5.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp641;
  static int tmp642 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp642)
  {
    tmp638 = GreaterEq(data->localData[0]->realVars[427] /* MatStm5.liqPhasMasFrac variable */,0.0);
    tmp639 = LessEq(data->localData[0]->realVars[427] /* MatStm5.liqPhasMasFrac variable */,1.0);
    if(!(tmp638 && tmp639))
    {
      tmp641 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[427] /* MatStm5.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp640),tmp641);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.liqPhasMasFrac >= 0.0 and MatStm5.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp642 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2286
type: ALGORITHM

  assert(MatStm5.vapPhasMasFrac >= 0.0 and MatStm5.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.vapPhasMasFrac <= 1.0, has value: " + String(MatStm5.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2286};
  modelica_boolean tmp643;
  modelica_boolean tmp644;
  static const MMC_DEFSTRINGLIT(tmp645,88,"Variable violating min/max constraint: 0.0 <= MatStm5.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp646;
  static int tmp647 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp647)
  {
    tmp643 = GreaterEq(data->localData[0]->realVars[454] /* MatStm5.vapPhasMasFrac variable */,0.0);
    tmp644 = LessEq(data->localData[0]->realVars[454] /* MatStm5.vapPhasMasFrac variable */,1.0);
    if(!(tmp643 && tmp644))
    {
      tmp646 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[454] /* MatStm5.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp645),tmp646);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.vapPhasMasFrac >= 0.0 and MatStm5.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp647 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2287
type: ALGORITHM

  assert(MatStm5.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMolFlo[2], has value: " + String(MatStm5.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2287};
  modelica_boolean tmp648;
  static const MMC_DEFSTRINGLIT(tmp649,75,"Variable violating min constraint: 0.0 <= MatStm5.totMolFlo[2], has value: ");
  modelica_string tmp650;
  static int tmp651 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp651)
  {
    tmp648 = GreaterEq(data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */,0.0);
    if(!tmp648)
    {
      tmp650 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[452] /* MatStm5.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp649),tmp650);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMolFlo[3], has value: " + String(MatStm5.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2288};
  modelica_boolean tmp652;
  static const MMC_DEFSTRINGLIT(tmp653,75,"Variable violating min constraint: 0.0 <= MatStm5.totMolFlo[3], has value: ");
  modelica_string tmp654;
  static int tmp655 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp655)
  {
    tmp652 = GreaterEq(data->localData[0]->realVars[453] /* MatStm5.totMolFlo[3] variable */,0.0);
    if(!tmp652)
    {
      tmp654 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[453] /* MatStm5.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp653),tmp654);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[1], has value: " + String(MatStm5.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2289};
  modelica_boolean tmp656;
  static const MMC_DEFSTRINGLIT(tmp657,75,"Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[1], has value: ");
  modelica_string tmp658;
  static int tmp659 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp659)
  {
    tmp656 = GreaterEq(data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */,0.0);
    if(!tmp656)
    {
      tmp658 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp657),tmp658);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[2], has value: " + String(MatStm5.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2290};
  modelica_boolean tmp660;
  static const MMC_DEFSTRINGLIT(tmp661,75,"Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[2], has value: ");
  modelica_string tmp662;
  static int tmp663 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp663)
  {
    tmp660 = GreaterEq(data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */,0.0);
    if(!tmp660)
    {
      tmp662 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp661),tmp662);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[3], has value: " + String(MatStm5.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2291};
  modelica_boolean tmp664;
  static const MMC_DEFSTRINGLIT(tmp665,75,"Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[3], has value: ");
  modelica_string tmp666;
  static int tmp667 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp667)
  {
    tmp664 = GreaterEq(data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */,0.0);
    if(!tmp664)
    {
      tmp666 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp665),tmp666);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.MW[1], has value: " + String(MatStm5.MW[1], "g"));
*/
void Flowsheet_eqFunction_2292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2292};
  modelica_boolean tmp668;
  static const MMC_DEFSTRINGLIT(tmp669,68,"Variable violating min constraint: 0.0 <= MatStm5.MW[1], has value: ");
  modelica_string tmp670;
  static int tmp671 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp671)
  {
    tmp668 = GreaterEq(data->localData[0]->realVars[372] /* MatStm5.MW[1] variable */,0.0);
    if(!tmp668)
    {
      tmp670 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[372] /* MatStm5.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp669),tmp670);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.MW[2], has value: " + String(MatStm5.MW[2], "g"));
*/
void Flowsheet_eqFunction_2293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2293};
  modelica_boolean tmp672;
  static const MMC_DEFSTRINGLIT(tmp673,68,"Variable violating min constraint: 0.0 <= MatStm5.MW[2], has value: ");
  modelica_string tmp674;
  static int tmp675 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp675)
  {
    tmp672 = GreaterEq(data->localData[0]->realVars[373] /* MatStm5.MW[2] variable */,0.0);
    if(!tmp672)
    {
      tmp674 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[373] /* MatStm5.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp673),tmp674);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.MW[3], has value: " + String(MatStm5.MW[3], "g"));
*/
void Flowsheet_eqFunction_2294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2294};
  modelica_boolean tmp676;
  static const MMC_DEFSTRINGLIT(tmp677,68,"Variable violating min constraint: 0.0 <= MatStm5.MW[3], has value: ");
  modelica_string tmp678;
  static int tmp679 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp679)
  {
    tmp676 = GreaterEq(data->localData[0]->realVars[374] /* MatStm5.MW[3] variable */,0.0);
    if(!tmp676)
    {
      tmp678 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[374] /* MatStm5.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp677),tmp678);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.compMolFrac[1,1] >= 0.0 and MatStm5.compMolFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[1,1] <= 1.0, has value: " + String(MatStm5.compMolFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2295};
  modelica_boolean tmp680;
  modelica_boolean tmp681;
  static const MMC_DEFSTRINGLIT(tmp682,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp683;
  static int tmp684 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp684)
  {
    tmp680 = GreaterEq(data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */,0.0);
    tmp681 = LessEq(data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */,1.0);
    if(!(tmp680 && tmp681))
    {
      tmp683 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[409] /* MatStm5.compMolFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp682),tmp683);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[1,1] >= 0.0 and MatStm5.compMolFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp684 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2296
type: ALGORITHM

  assert(MatStm5.compMolFrac[1,2] >= 0.0 and MatStm5.compMolFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[1,2] <= 1.0, has value: " + String(MatStm5.compMolFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2296};
  modelica_boolean tmp685;
  modelica_boolean tmp686;
  static const MMC_DEFSTRINGLIT(tmp687,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp688;
  static int tmp689 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp689)
  {
    tmp685 = GreaterEq(data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */,0.0);
    tmp686 = LessEq(data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */,1.0);
    if(!(tmp685 && tmp686))
    {
      tmp688 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[410] /* MatStm5.compMolFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp687),tmp688);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[1,2] >= 0.0 and MatStm5.compMolFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp689 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2297
type: ALGORITHM

  assert(MatStm5.compMolFrac[2,1] >= 0.0 and MatStm5.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm5.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2297};
  modelica_boolean tmp690;
  modelica_boolean tmp691;
  static const MMC_DEFSTRINGLIT(tmp692,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp693;
  static int tmp694 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp694)
  {
    tmp690 = GreaterEq(data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */,0.0);
    tmp691 = LessEq(data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */,1.0);
    if(!(tmp690 && tmp691))
    {
      tmp693 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp692),tmp693);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[2,1] >= 0.0 and MatStm5.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp694 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2298
type: ALGORITHM

  assert(MatStm5.compMolFrac[2,2] >= 0.0 and MatStm5.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm5.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2298};
  modelica_boolean tmp695;
  modelica_boolean tmp696;
  static const MMC_DEFSTRINGLIT(tmp697,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp698;
  static int tmp699 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp699)
  {
    tmp695 = GreaterEq(data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */,0.0);
    tmp696 = LessEq(data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */,1.0);
    if(!(tmp695 && tmp696))
    {
      tmp698 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp697),tmp698);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[2,2] >= 0.0 and MatStm5.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp699 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2299
type: ALGORITHM

  assert(MatStm5.compMolFrac[3,1] >= 0.0 and MatStm5.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm5.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2299};
  modelica_boolean tmp700;
  modelica_boolean tmp701;
  static const MMC_DEFSTRINGLIT(tmp702,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp703;
  static int tmp704 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp704)
  {
    tmp700 = GreaterEq(data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */,0.0);
    tmp701 = LessEq(data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */,1.0);
    if(!(tmp700 && tmp701))
    {
      tmp703 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp702),tmp703);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[3,1] >= 0.0 and MatStm5.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp704 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2300
type: ALGORITHM

  assert(MatStm5.compMolFrac[3,2] >= 0.0 and MatStm5.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm5.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2300};
  modelica_boolean tmp705;
  modelica_boolean tmp706;
  static const MMC_DEFSTRINGLIT(tmp707,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp708;
  static int tmp709 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp709)
  {
    tmp705 = GreaterEq(data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */,0.0);
    tmp706 = LessEq(data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */,1.0);
    if(!(tmp705 && tmp706))
    {
      tmp708 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp707),tmp708);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[3,2] >= 0.0 and MatStm5.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp709 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2301
type: ALGORITHM

  assert(MatStm5.compMasFrac[1,1] >= 0.0 and MatStm5.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm5.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2301};
  modelica_boolean tmp710;
  modelica_boolean tmp711;
  static const MMC_DEFSTRINGLIT(tmp712,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp713;
  static int tmp714 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp714)
  {
    tmp710 = GreaterEq(data->localData[0]->realVars[385] /* MatStm5.compMasFrac[1,1] variable */,0.0);
    tmp711 = LessEq(data->localData[0]->realVars[385] /* MatStm5.compMasFrac[1,1] variable */,1.0);
    if(!(tmp710 && tmp711))
    {
      tmp713 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[385] /* MatStm5.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp712),tmp713);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[1,1] >= 0.0 and MatStm5.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp714 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2302
type: ALGORITHM

  assert(MatStm5.compMasFrac[1,2] >= 0.0 and MatStm5.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm5.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2302};
  modelica_boolean tmp715;
  modelica_boolean tmp716;
  static const MMC_DEFSTRINGLIT(tmp717,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp718;
  static int tmp719 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp719)
  {
    tmp715 = GreaterEq(data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */,0.0);
    tmp716 = LessEq(data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */,1.0);
    if(!(tmp715 && tmp716))
    {
      tmp718 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp717),tmp718);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[1,2] >= 0.0 and MatStm5.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp719 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2303
type: ALGORITHM

  assert(MatStm5.compMasFrac[2,1] >= 0.0 and MatStm5.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm5.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2303};
  modelica_boolean tmp720;
  modelica_boolean tmp721;
  static const MMC_DEFSTRINGLIT(tmp722,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp723;
  static int tmp724 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp724)
  {
    tmp720 = GreaterEq(data->localData[0]->realVars[387] /* MatStm5.compMasFrac[2,1] variable */,0.0);
    tmp721 = LessEq(data->localData[0]->realVars[387] /* MatStm5.compMasFrac[2,1] variable */,1.0);
    if(!(tmp720 && tmp721))
    {
      tmp723 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[387] /* MatStm5.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp722),tmp723);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[2,1] >= 0.0 and MatStm5.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp724 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2304
type: ALGORITHM

  assert(MatStm5.compMasFrac[2,2] >= 0.0 and MatStm5.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm5.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2304};
  modelica_boolean tmp725;
  modelica_boolean tmp726;
  static const MMC_DEFSTRINGLIT(tmp727,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp728;
  static int tmp729 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp729)
  {
    tmp725 = GreaterEq(data->localData[0]->realVars[388] /* MatStm5.compMasFrac[2,2] variable */,0.0);
    tmp726 = LessEq(data->localData[0]->realVars[388] /* MatStm5.compMasFrac[2,2] variable */,1.0);
    if(!(tmp725 && tmp726))
    {
      tmp728 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[388] /* MatStm5.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp727),tmp728);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[2,2] >= 0.0 and MatStm5.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp729 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2305
type: ALGORITHM

  assert(MatStm5.compMasFrac[3,1] >= 0.0 and MatStm5.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm5.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2305};
  modelica_boolean tmp730;
  modelica_boolean tmp731;
  static const MMC_DEFSTRINGLIT(tmp732,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp733;
  static int tmp734 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp734)
  {
    tmp730 = GreaterEq(data->localData[0]->realVars[389] /* MatStm5.compMasFrac[3,1] variable */,0.0);
    tmp731 = LessEq(data->localData[0]->realVars[389] /* MatStm5.compMasFrac[3,1] variable */,1.0);
    if(!(tmp730 && tmp731))
    {
      tmp733 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[389] /* MatStm5.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp732),tmp733);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[3,1] >= 0.0 and MatStm5.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp734 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2306
type: ALGORITHM

  assert(MatStm5.compMasFrac[3,2] >= 0.0 and MatStm5.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm5.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2306};
  modelica_boolean tmp735;
  modelica_boolean tmp736;
  static const MMC_DEFSTRINGLIT(tmp737,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp738;
  static int tmp739 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp739)
  {
    tmp735 = GreaterEq(data->localData[0]->realVars[390] /* MatStm5.compMasFrac[3,2] variable */,0.0);
    tmp736 = LessEq(data->localData[0]->realVars[390] /* MatStm5.compMasFrac[3,2] variable */,1.0);
    if(!(tmp735 && tmp736))
    {
      tmp738 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[390] /* MatStm5.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp737),tmp738);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[3,2] >= 0.0 and MatStm5.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp739 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2307
type: ALGORITHM

  assert(MatStm5.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[1,1], has value: " + String(MatStm5.compMolFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2307};
  modelica_boolean tmp740;
  static const MMC_DEFSTRINGLIT(tmp741,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[1,1], has value: ");
  modelica_string tmp742;
  static int tmp743 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp743)
  {
    tmp740 = GreaterEq(data->localData[0]->realVars[403] /* MatStm5.compMolFlo[1,1] variable */,0.0);
    if(!tmp740)
    {
      tmp742 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[403] /* MatStm5.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp741),tmp742);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp743 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2308
type: ALGORITHM

  assert(MatStm5.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[1,2], has value: " + String(MatStm5.compMolFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2308};
  modelica_boolean tmp744;
  static const MMC_DEFSTRINGLIT(tmp745,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[1,2], has value: ");
  modelica_string tmp746;
  static int tmp747 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp747)
  {
    tmp744 = GreaterEq(data->localData[0]->realVars[404] /* MatStm5.compMolFlo[1,2] variable */,0.0);
    if(!tmp744)
    {
      tmp746 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[404] /* MatStm5.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp745),tmp746);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp747 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2309
type: ALGORITHM

  assert(MatStm5.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[2,1], has value: " + String(MatStm5.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2309};
  modelica_boolean tmp748;
  static const MMC_DEFSTRINGLIT(tmp749,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[2,1], has value: ");
  modelica_string tmp750;
  static int tmp751 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp751)
  {
    tmp748 = GreaterEq(data->localData[0]->realVars[405] /* MatStm5.compMolFlo[2,1] variable */,0.0);
    if(!tmp748)
    {
      tmp750 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[405] /* MatStm5.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp749),tmp750);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp751 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2310
type: ALGORITHM

  assert(MatStm5.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[2,2], has value: " + String(MatStm5.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2310};
  modelica_boolean tmp752;
  static const MMC_DEFSTRINGLIT(tmp753,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[2,2], has value: ");
  modelica_string tmp754;
  static int tmp755 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp755)
  {
    tmp752 = GreaterEq(data->localData[0]->realVars[406] /* MatStm5.compMolFlo[2,2] variable */,0.0);
    if(!tmp752)
    {
      tmp754 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[406] /* MatStm5.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp753),tmp754);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp755 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2311
type: ALGORITHM

  assert(MatStm5.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[3,1], has value: " + String(MatStm5.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2311};
  modelica_boolean tmp756;
  static const MMC_DEFSTRINGLIT(tmp757,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[3,1], has value: ");
  modelica_string tmp758;
  static int tmp759 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp759)
  {
    tmp756 = GreaterEq(data->localData[0]->realVars[407] /* MatStm5.compMolFlo[3,1] variable */,0.0);
    if(!tmp756)
    {
      tmp758 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[407] /* MatStm5.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp757),tmp758);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp759 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2312
type: ALGORITHM

  assert(MatStm5.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[3,2], has value: " + String(MatStm5.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2312};
  modelica_boolean tmp760;
  static const MMC_DEFSTRINGLIT(tmp761,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[3,2], has value: ");
  modelica_string tmp762;
  static int tmp763 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp763)
  {
    tmp760 = GreaterEq(data->localData[0]->realVars[408] /* MatStm5.compMolFlo[3,2] variable */,0.0);
    if(!tmp760)
    {
      tmp762 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[408] /* MatStm5.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp761),tmp762);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp763 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2313
type: ALGORITHM

  assert(MatStm5.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[1,1], has value: " + String(MatStm5.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2313};
  modelica_boolean tmp764;
  static const MMC_DEFSTRINGLIT(tmp765,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[1,1], has value: ");
  modelica_string tmp766;
  static int tmp767 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp767)
  {
    tmp764 = GreaterEq(data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */,0.0);
    if(!tmp764)
    {
      tmp766 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[379] /* MatStm5.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp765),tmp766);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp767 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2314
type: ALGORITHM

  assert(MatStm5.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[1,2], has value: " + String(MatStm5.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2314};
  modelica_boolean tmp768;
  static const MMC_DEFSTRINGLIT(tmp769,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[1,2], has value: ");
  modelica_string tmp770;
  static int tmp771 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp771)
  {
    tmp768 = GreaterEq(data->localData[0]->realVars[380] /* MatStm5.compMasFlo[1,2] variable */,0.0);
    if(!tmp768)
    {
      tmp770 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[380] /* MatStm5.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp769),tmp770);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp771 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2315
type: ALGORITHM

  assert(MatStm5.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[2,1], has value: " + String(MatStm5.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2315};
  modelica_boolean tmp772;
  static const MMC_DEFSTRINGLIT(tmp773,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[2,1], has value: ");
  modelica_string tmp774;
  static int tmp775 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp775)
  {
    tmp772 = GreaterEq(data->localData[0]->realVars[381] /* MatStm5.compMasFlo[2,1] variable */,0.0);
    if(!tmp772)
    {
      tmp774 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[381] /* MatStm5.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp773),tmp774);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[2,2], has value: " + String(MatStm5.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2316};
  modelica_boolean tmp776;
  static const MMC_DEFSTRINGLIT(tmp777,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[2,2], has value: ");
  modelica_string tmp778;
  static int tmp779 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp779)
  {
    tmp776 = GreaterEq(data->localData[0]->realVars[382] /* MatStm5.compMasFlo[2,2] variable */,0.0);
    if(!tmp776)
    {
      tmp778 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[382] /* MatStm5.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp777),tmp778);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[3,1], has value: " + String(MatStm5.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2317};
  modelica_boolean tmp780;
  static const MMC_DEFSTRINGLIT(tmp781,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[3,1], has value: ");
  modelica_string tmp782;
  static int tmp783 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp783)
  {
    tmp780 = GreaterEq(data->localData[0]->realVars[383] /* MatStm5.compMasFlo[3,1] variable */,0.0);
    if(!tmp780)
    {
      tmp782 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[383] /* MatStm5.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp781),tmp782);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp783 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2318
type: ALGORITHM

  assert(MatStm5.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[3,2], has value: " + String(MatStm5.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2318};
  modelica_boolean tmp784;
  static const MMC_DEFSTRINGLIT(tmp785,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[3,2], has value: ");
  modelica_string tmp786;
  static int tmp787 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp787)
  {
    tmp784 = GreaterEq(data->localData[0]->realVars[384] /* MatStm5.compMasFlo[3,2] variable */,0.0);
    if(!tmp784)
    {
      tmp786 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[384] /* MatStm5.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp785),tmp786);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp787 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2319
type: ALGORITHM

  assert(MatStm5.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.K[1], has value: " + String(MatStm5.K[1], "g"));
*/
void Flowsheet_eqFunction_2319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2319};
  modelica_boolean tmp788;
  static const MMC_DEFSTRINGLIT(tmp789,67,"Variable violating min constraint: 0.0 <= MatStm5.K[1], has value: ");
  modelica_string tmp790;
  static int tmp791 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp791)
  {
    tmp788 = GreaterEq(data->localData[0]->realVars[370] /* MatStm5.K[1] variable */,0.0);
    if(!tmp788)
    {
      tmp790 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[370] /* MatStm5.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp789),tmp790);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp791 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2320
type: ALGORITHM

  assert(MatStm5.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.K[2], has value: " + String(MatStm5.K[2], "g"));
*/
void Flowsheet_eqFunction_2320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2320};
  modelica_boolean tmp792;
  static const MMC_DEFSTRINGLIT(tmp793,67,"Variable violating min constraint: 0.0 <= MatStm5.K[2], has value: ");
  modelica_string tmp794;
  static int tmp795 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp795)
  {
    tmp792 = GreaterEq(data->localData[0]->realVars[371] /* MatStm5.K[2] variable */,0.0);
    if(!tmp792)
    {
      tmp794 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[371] /* MatStm5.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp793),tmp794);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp795 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2140
type: ALGORITHM

  assert(MatStm3.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,1], has value: " + String(MatStm3.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2140};
  modelica_boolean tmp796;
  static const MMC_DEFSTRINGLIT(tmp797,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,1], has value: ");
  modelica_string tmp798;
  static int tmp799 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp799)
  {
    tmp796 = GreaterEq(data->localData[0]->realVars[202] /* MatStm3.compMasFlo[1,1] variable */,0.0);
    if(!tmp796)
    {
      tmp798 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[202] /* MatStm3.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp797),tmp798);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp799 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2139
type: ALGORITHM

  assert(MatStm3.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,1], has value: " + String(MatStm3.compMolFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2139};
  modelica_boolean tmp800;
  static const MMC_DEFSTRINGLIT(tmp801,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,1], has value: ");
  modelica_string tmp802;
  static int tmp803 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp803)
  {
    tmp800 = GreaterEq(data->localData[0]->realVars[226] /* MatStm3.compMolFlo[1,1] variable */,0.0);
    if(!tmp800)
    {
      tmp802 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[226] /* MatStm3.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp801),tmp802);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp803 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2138
type: ALGORITHM

  assert(MatStm3.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,2], has value: " + String(MatStm3.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2138};
  modelica_boolean tmp804;
  static const MMC_DEFSTRINGLIT(tmp805,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,2], has value: ");
  modelica_string tmp806;
  static int tmp807 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp807)
  {
    tmp804 = GreaterEq(data->localData[0]->realVars[203] /* MatStm3.compMasFlo[1,2] variable */,0.0);
    if(!tmp804)
    {
      tmp806 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[203] /* MatStm3.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp805),tmp806);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp807 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2137
type: ALGORITHM

  assert(MatStm3.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,2], has value: " + String(MatStm3.compMolFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2137};
  modelica_boolean tmp808;
  static const MMC_DEFSTRINGLIT(tmp809,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,2], has value: ");
  modelica_string tmp810;
  static int tmp811 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp811)
  {
    tmp808 = GreaterEq(data->localData[0]->realVars[227] /* MatStm3.compMolFlo[1,2] variable */,0.0);
    if(!tmp808)
    {
      tmp810 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[227] /* MatStm3.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp809),tmp810);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp811 = 1;
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

