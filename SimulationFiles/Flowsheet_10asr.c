/* Asserts */
#include "Flowsheet_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 218
type: ALGORITHM

  assert(MatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: " + String(MatStm1.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq(data->localData[0]->realVars[34] /* MatStm1.liqPhasMolFrac variable */,0.0);
    tmp1 = LessEq(data->localData[0]->realVars[34] /* MatStm1.liqPhasMolFrac variable */,1.0);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[34] /* MatStm1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 219
type: ALGORITHM

  assert(MatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: " + String(MatStm1.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp9)
  {
    tmp5 = GreaterEq(data->localData[0]->realVars[61] /* MatStm1.vapPhasMolFrac variable */,0.0);
    tmp6 = LessEq(data->localData[0]->realVars[61] /* MatStm1.vapPhasMolFrac variable */,1.0);
    if(!(tmp5 && tmp6))
    {
      tmp8 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[61] /* MatStm1.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp9 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 220
type: ALGORITHM

  assert(MatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: " + String(MatStm1.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp13;
  static int tmp14 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp14)
  {
    tmp10 = GreaterEq(data->localData[0]->realVars[33] /* MatStm1.liqPhasMasFrac variable */,0.0);
    tmp11 = LessEq(data->localData[0]->realVars[33] /* MatStm1.liqPhasMasFrac variable */,1.0);
    if(!(tmp10 && tmp11))
    {
      tmp13 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[33] /* MatStm1.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp12),tmp13);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp14 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 221
type: ALGORITHM

  assert(MatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: " + String(MatStm1.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp19)
  {
    tmp15 = GreaterEq(data->localData[0]->realVars[60] /* MatStm1.vapPhasMasFrac variable */,0.0);
    tmp16 = LessEq(data->localData[0]->realVars[60] /* MatStm1.vapPhasMasFrac variable */,1.0);
    if(!(tmp15 && tmp16))
    {
      tmp18 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[60] /* MatStm1.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp19 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 222
type: ALGORITHM

  assert(MatStm1.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: " + String(MatStm1.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: ");
  modelica_string tmp22;
  static int tmp23 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp23)
  {
    tmp20 = GreaterEq(data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */,0.0);
    if(!tmp20)
    {
      tmp22 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp23 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 223
type: ALGORITHM

  assert(MatStm1.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: " + String(MatStm1.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  modelica_boolean tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: ");
  modelica_string tmp26;
  static int tmp27 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp27)
  {
    tmp24 = GreaterEq(data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */,0.0);
    if(!tmp24)
    {
      tmp26 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp25),tmp26);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp27 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 224
type: ALGORITHM

  assert(MatStm1.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: " + String(MatStm1.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: ");
  modelica_string tmp30;
  static int tmp31 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp31)
  {
    tmp28 = GreaterEq(data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */,0.0);
    if(!tmp28)
    {
      tmp30 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp31 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 225
type: ALGORITHM

  assert(MatStm1.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: " + String(MatStm1.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  modelica_boolean tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: ");
  modelica_string tmp34;
  static int tmp35 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp35)
  {
    tmp32 = GreaterEq(data->localData[0]->realVars[55] /* MatStm1.totMasFlo[2] variable */,0.0);
    if(!tmp32)
    {
      tmp34 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[55] /* MatStm1.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp33),tmp34);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp35 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 226
type: ALGORITHM

  assert(MatStm1.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: " + String(MatStm1.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: ");
  modelica_string tmp38;
  static int tmp39 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp39)
  {
    tmp36 = GreaterEq(data->localData[0]->realVars[56] /* MatStm1.totMasFlo[3] variable */,0.0);
    if(!tmp36)
    {
      tmp38 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[56] /* MatStm1.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp39 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 227
type: ALGORITHM

  assert(MatStm1.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: " + String(MatStm1.MW[1], "g"));
*/
void Flowsheet_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: ");
  modelica_string tmp42;
  static int tmp43 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp43)
  {
    tmp40 = GreaterEq(data->localData[0]->realVars[1] /* MatStm1.MW[1] variable */,0.0);
    if(!tmp40)
    {
      tmp42 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1] /* MatStm1.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp43 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 228
type: ALGORITHM

  assert(MatStm1.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: " + String(MatStm1.MW[2], "g"));
*/
void Flowsheet_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: ");
  modelica_string tmp46;
  static int tmp47 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp47)
  {
    tmp44 = GreaterEq(data->localData[0]->realVars[2] /* MatStm1.MW[2] variable */,0.0);
    if(!tmp44)
    {
      tmp46 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[2] /* MatStm1.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp47 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 229
type: ALGORITHM

  assert(MatStm1.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: " + String(MatStm1.MW[3], "g"));
*/
void Flowsheet_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: ");
  modelica_string tmp50;
  static int tmp51 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp51)
  {
    tmp48 = GreaterEq(data->localData[0]->realVars[3] /* MatStm1.MW[3] variable */,0.0);
    if(!tmp48)
    {
      tmp50 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[3] /* MatStm1.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp49),tmp50);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp51 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 230
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  static const MMC_DEFSTRINGLIT(tmp54,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp55;
  static int tmp56 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp56)
  {
    tmp52 = GreaterEq(data->localData[0]->realVars[12] /* MatStm1.compMasFrac[1,1] variable */,0.0);
    tmp53 = LessEq(data->localData[0]->realVars[12] /* MatStm1.compMasFrac[1,1] variable */,1.0);
    if(!(tmp52 && tmp53))
    {
      tmp55 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[12] /* MatStm1.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp54),tmp55);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp56 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 231
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  static const MMC_DEFSTRINGLIT(tmp59,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp60;
  static int tmp61 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp61)
  {
    tmp57 = GreaterEq(data->localData[0]->realVars[13] /* MatStm1.compMasFrac[2,1] variable */,0.0);
    tmp58 = LessEq(data->localData[0]->realVars[13] /* MatStm1.compMasFrac[2,1] variable */,1.0);
    if(!(tmp57 && tmp58))
    {
      tmp60 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[13] /* MatStm1.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp59),tmp60);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp61 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 232
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp65;
  static int tmp66 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp66)
  {
    tmp62 = GreaterEq(data->localData[0]->realVars[14] /* MatStm1.compMasFrac[3,1] variable */,0.0);
    tmp63 = LessEq(data->localData[0]->realVars[14] /* MatStm1.compMasFrac[3,1] variable */,1.0);
    if(!(tmp62 && tmp63))
    {
      tmp65 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[14] /* MatStm1.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp64),tmp65);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp66 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 233
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: " + String(MatStm1.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  modelica_boolean tmp67;
  static const MMC_DEFSTRINGLIT(tmp68,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: ");
  modelica_string tmp69;
  static int tmp70 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp70)
  {
    tmp67 = GreaterEq(data->localData[0]->realVars[22] /* MatStm1.compMolFlo[2,1] variable */,0.0);
    if(!tmp67)
    {
      tmp69 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[22] /* MatStm1.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp68),tmp69);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp70 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 234
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: " + String(MatStm1.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  modelica_boolean tmp71;
  static const MMC_DEFSTRINGLIT(tmp72,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: ");
  modelica_string tmp73;
  static int tmp74 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp74)
  {
    tmp71 = GreaterEq(data->localData[0]->realVars[23] /* MatStm1.compMolFlo[3,1] variable */,0.0);
    if(!tmp71)
    {
      tmp73 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[23] /* MatStm1.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp72),tmp73);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp74 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 235
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: " + String(MatStm1.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  modelica_boolean tmp75;
  static const MMC_DEFSTRINGLIT(tmp76,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: ");
  modelica_string tmp77;
  static int tmp78 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp78)
  {
    tmp75 = GreaterEq(data->localData[0]->realVars[10] /* MatStm1.compMasFlo[2,1] variable */,0.0);
    if(!tmp75)
    {
      tmp77 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[10] /* MatStm1.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp76),tmp77);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp78 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 236
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: " + String(MatStm1.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  modelica_boolean tmp79;
  static const MMC_DEFSTRINGLIT(tmp80,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: ");
  modelica_string tmp81;
  static int tmp82 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp82)
  {
    tmp79 = GreaterEq(data->localData[0]->realVars[11] /* MatStm1.compMasFlo[3,1] variable */,0.0);
    if(!tmp79)
    {
      tmp81 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[11] /* MatStm1.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp80),tmp81);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp82 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 217
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  static const MMC_DEFSTRINGLIT(tmp85,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp86;
  static int tmp87 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp87)
  {
    tmp83 = GreaterEq(data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */,0.0);
    tmp84 = LessEq(data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */,1.0);
    if(!(tmp83 && tmp84))
    {
      tmp86 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp85),tmp86);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp87 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 216
type: ALGORITHM

  assert(MatStm1.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: " + String(MatStm1.K[1], "g"));
*/
void Flowsheet_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  modelica_boolean tmp88;
  static const MMC_DEFSTRINGLIT(tmp89,67,"Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: ");
  modelica_string tmp90;
  static int tmp91 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp91)
  {
    tmp88 = GreaterEq(data->localData[0]->realVars[0] /* MatStm1.K[1] variable */,0.0);
    if(!tmp88)
    {
      tmp90 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[0] /* MatStm1.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp89),tmp90);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp91 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 215
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  static const MMC_DEFSTRINGLIT(tmp94,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp95;
  static int tmp96 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp96)
  {
    tmp92 = GreaterEq(data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */,0.0);
    tmp93 = LessEq(data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */,1.0);
    if(!(tmp92 && tmp93))
    {
      tmp95 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp94),tmp95);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp96 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 214
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: " + String(MatStm1.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  modelica_boolean tmp97;
  static const MMC_DEFSTRINGLIT(tmp98,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: ");
  modelica_string tmp99;
  static int tmp100 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp100)
  {
    tmp97 = GreaterEq(data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */,0.0);
    if(!tmp97)
    {
      tmp99 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp98),tmp99);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship 2019/workspace/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp100 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int Flowsheet_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  Flowsheet_eqFunction_218(data, threadData);

  Flowsheet_eqFunction_219(data, threadData);

  Flowsheet_eqFunction_220(data, threadData);

  Flowsheet_eqFunction_221(data, threadData);

  Flowsheet_eqFunction_222(data, threadData);

  Flowsheet_eqFunction_223(data, threadData);

  Flowsheet_eqFunction_224(data, threadData);

  Flowsheet_eqFunction_225(data, threadData);

  Flowsheet_eqFunction_226(data, threadData);

  Flowsheet_eqFunction_227(data, threadData);

  Flowsheet_eqFunction_228(data, threadData);

  Flowsheet_eqFunction_229(data, threadData);

  Flowsheet_eqFunction_230(data, threadData);

  Flowsheet_eqFunction_231(data, threadData);

  Flowsheet_eqFunction_232(data, threadData);

  Flowsheet_eqFunction_233(data, threadData);

  Flowsheet_eqFunction_234(data, threadData);

  Flowsheet_eqFunction_235(data, threadData);

  Flowsheet_eqFunction_236(data, threadData);

  Flowsheet_eqFunction_217(data, threadData);

  Flowsheet_eqFunction_216(data, threadData);

  Flowsheet_eqFunction_215(data, threadData);

  Flowsheet_eqFunction_214(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

