/* Asserts */
#include "Flowsheet_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 222
type: ALGORITHM

  assert(MatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: " + String(MatStm1.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  static const MMC_DEFSTRINGLIT(tmp4,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp5;
  static int tmp6 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp6)
  {
    tmp2 = GreaterEq(data->localData[0]->realVars[34] /* MatStm1.liqPhasMolFrac variable */,0.0);
    tmp3 = LessEq(data->localData[0]->realVars[34] /* MatStm1.liqPhasMolFrac variable */,1.0);
    if(!(tmp2 && tmp3))
    {
      tmp5 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[34] /* MatStm1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp4),tmp5);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp6 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 223
type: ALGORITHM

  assert(MatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: " + String(MatStm1.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  static const MMC_DEFSTRINGLIT(tmp9,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp10;
  static int tmp11 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp11)
  {
    tmp7 = GreaterEq(data->localData[0]->realVars[61] /* MatStm1.vapPhasMolFrac variable */,0.0);
    tmp8 = LessEq(data->localData[0]->realVars[61] /* MatStm1.vapPhasMolFrac variable */,1.0);
    if(!(tmp7 && tmp8))
    {
      tmp10 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[61] /* MatStm1.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp9),tmp10);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp11 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 224
type: ALGORITHM

  assert(MatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: " + String(MatStm1.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  static const MMC_DEFSTRINGLIT(tmp14,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp15;
  static int tmp16 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp16)
  {
    tmp12 = GreaterEq(data->localData[0]->realVars[33] /* MatStm1.liqPhasMasFrac variable */,0.0);
    tmp13 = LessEq(data->localData[0]->realVars[33] /* MatStm1.liqPhasMasFrac variable */,1.0);
    if(!(tmp12 && tmp13))
    {
      tmp15 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[33] /* MatStm1.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp14),tmp15);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp16 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 225
type: ALGORITHM

  assert(MatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: " + String(MatStm1.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  static const MMC_DEFSTRINGLIT(tmp19,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp20;
  static int tmp21 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp21)
  {
    tmp17 = GreaterEq(data->localData[0]->realVars[60] /* MatStm1.vapPhasMasFrac variable */,0.0);
    tmp18 = LessEq(data->localData[0]->realVars[60] /* MatStm1.vapPhasMasFrac variable */,1.0);
    if(!(tmp17 && tmp18))
    {
      tmp20 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[60] /* MatStm1.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp19),tmp20);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp21 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 226
type: ALGORITHM

  assert(MatStm1.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: " + String(MatStm1.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  modelica_boolean tmp22;
  static const MMC_DEFSTRINGLIT(tmp23,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: ");
  modelica_string tmp24;
  static int tmp25 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp25)
  {
    tmp22 = GreaterEq(data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */,0.0);
    if(!tmp22)
    {
      tmp24 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[58] /* MatStm1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp23),tmp24);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp25 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 227
type: ALGORITHM

  assert(MatStm1.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: " + String(MatStm1.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  modelica_boolean tmp26;
  static const MMC_DEFSTRINGLIT(tmp27,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: ");
  modelica_string tmp28;
  static int tmp29 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp29)
  {
    tmp26 = GreaterEq(data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */,0.0);
    if(!tmp26)
    {
      tmp28 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[59] /* MatStm1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp27),tmp28);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp29 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 228
type: ALGORITHM

  assert(MatStm1.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: " + String(MatStm1.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  modelica_boolean tmp30;
  static const MMC_DEFSTRINGLIT(tmp31,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: ");
  modelica_string tmp32;
  static int tmp33 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp33)
  {
    tmp30 = GreaterEq(data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */,0.0);
    if(!tmp30)
    {
      tmp32 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[54] /* MatStm1.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp31),tmp32);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp33 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 229
type: ALGORITHM

  assert(MatStm1.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: " + String(MatStm1.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  modelica_boolean tmp34;
  static const MMC_DEFSTRINGLIT(tmp35,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: ");
  modelica_string tmp36;
  static int tmp37 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp37)
  {
    tmp34 = GreaterEq(data->localData[0]->realVars[55] /* MatStm1.totMasFlo[2] variable */,0.0);
    if(!tmp34)
    {
      tmp36 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[55] /* MatStm1.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp35),tmp36);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp37 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 230
type: ALGORITHM

  assert(MatStm1.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: " + String(MatStm1.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  modelica_boolean tmp38;
  static const MMC_DEFSTRINGLIT(tmp39,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: ");
  modelica_string tmp40;
  static int tmp41 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp41)
  {
    tmp38 = GreaterEq(data->localData[0]->realVars[56] /* MatStm1.totMasFlo[3] variable */,0.0);
    if(!tmp38)
    {
      tmp40 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[56] /* MatStm1.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp39),tmp40);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp41 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 231
type: ALGORITHM

  assert(MatStm1.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: " + String(MatStm1.MW[1], "g"));
*/
void Flowsheet_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  modelica_boolean tmp42;
  static const MMC_DEFSTRINGLIT(tmp43,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: ");
  modelica_string tmp44;
  static int tmp45 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp45)
  {
    tmp42 = GreaterEq(data->localData[0]->realVars[1] /* MatStm1.MW[1] variable */,0.0);
    if(!tmp42)
    {
      tmp44 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1] /* MatStm1.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp43),tmp44);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp45 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 232
type: ALGORITHM

  assert(MatStm1.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: " + String(MatStm1.MW[2], "g"));
*/
void Flowsheet_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  modelica_boolean tmp46;
  static const MMC_DEFSTRINGLIT(tmp47,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: ");
  modelica_string tmp48;
  static int tmp49 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp49)
  {
    tmp46 = GreaterEq(data->localData[0]->realVars[2] /* MatStm1.MW[2] variable */,0.0);
    if(!tmp46)
    {
      tmp48 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[2] /* MatStm1.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp47),tmp48);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp49 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 233
type: ALGORITHM

  assert(MatStm1.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: " + String(MatStm1.MW[3], "g"));
*/
void Flowsheet_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  modelica_boolean tmp50;
  static const MMC_DEFSTRINGLIT(tmp51,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: ");
  modelica_string tmp52;
  static int tmp53 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp53)
  {
    tmp50 = GreaterEq(data->localData[0]->realVars[3] /* MatStm1.MW[3] variable */,0.0);
    if(!tmp50)
    {
      tmp52 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[3] /* MatStm1.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp51),tmp52);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp53 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 234
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  static const MMC_DEFSTRINGLIT(tmp56,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp57;
  static int tmp58 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp58)
  {
    tmp54 = GreaterEq(data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */,0.0);
    tmp55 = LessEq(data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */,1.0);
    if(!(tmp54 && tmp55))
    {
      tmp57 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[25] /* MatStm1.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp56),tmp57);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp58 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 235
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  static const MMC_DEFSTRINGLIT(tmp61,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp62;
  static int tmp63 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp63)
  {
    tmp59 = GreaterEq(data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */,0.0);
    tmp60 = LessEq(data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */,1.0);
    if(!(tmp59 && tmp60))
    {
      tmp62 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[26] /* MatStm1.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp61),tmp62);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp63 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 236
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  static const MMC_DEFSTRINGLIT(tmp66,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp67;
  static int tmp68 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp68)
  {
    tmp64 = GreaterEq(data->localData[0]->realVars[12] /* MatStm1.compMasFrac[1,1] variable */,0.0);
    tmp65 = LessEq(data->localData[0]->realVars[12] /* MatStm1.compMasFrac[1,1] variable */,1.0);
    if(!(tmp64 && tmp65))
    {
      tmp67 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[12] /* MatStm1.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp66),tmp67);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp68 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 237
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  static const MMC_DEFSTRINGLIT(tmp71,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp72;
  static int tmp73 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp73)
  {
    tmp69 = GreaterEq(data->localData[0]->realVars[13] /* MatStm1.compMasFrac[2,1] variable */,0.0);
    tmp70 = LessEq(data->localData[0]->realVars[13] /* MatStm1.compMasFrac[2,1] variable */,1.0);
    if(!(tmp69 && tmp70))
    {
      tmp72 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[13] /* MatStm1.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp71),tmp72);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp73 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 238
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  static const MMC_DEFSTRINGLIT(tmp76,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp77;
  static int tmp78 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp78)
  {
    tmp74 = GreaterEq(data->localData[0]->realVars[14] /* MatStm1.compMasFrac[3,1] variable */,0.0);
    tmp75 = LessEq(data->localData[0]->realVars[14] /* MatStm1.compMasFrac[3,1] variable */,1.0);
    if(!(tmp74 && tmp75))
    {
      tmp77 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[14] /* MatStm1.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp76),tmp77);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp78 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 239
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: " + String(MatStm1.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  modelica_boolean tmp79;
  static const MMC_DEFSTRINGLIT(tmp80,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: ");
  modelica_string tmp81;
  static int tmp82 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp82)
  {
    tmp79 = GreaterEq(data->localData[0]->realVars[22] /* MatStm1.compMolFlo[2,1] variable */,0.0);
    if(!tmp79)
    {
      tmp81 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[22] /* MatStm1.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp80),tmp81);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp82 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 240
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: " + String(MatStm1.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  modelica_boolean tmp83;
  static const MMC_DEFSTRINGLIT(tmp84,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: ");
  modelica_string tmp85;
  static int tmp86 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp86)
  {
    tmp83 = GreaterEq(data->localData[0]->realVars[23] /* MatStm1.compMolFlo[3,1] variable */,0.0);
    if(!tmp83)
    {
      tmp85 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[23] /* MatStm1.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp84),tmp85);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp86 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 241
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: " + String(MatStm1.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  modelica_boolean tmp87;
  static const MMC_DEFSTRINGLIT(tmp88,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: ");
  modelica_string tmp89;
  static int tmp90 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp90)
  {
    tmp87 = GreaterEq(data->localData[0]->realVars[10] /* MatStm1.compMasFlo[2,1] variable */,0.0);
    if(!tmp87)
    {
      tmp89 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[10] /* MatStm1.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp88),tmp89);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp90 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 242
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: " + String(MatStm1.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  modelica_boolean tmp91;
  static const MMC_DEFSTRINGLIT(tmp92,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: ");
  modelica_string tmp93;
  static int tmp94 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp94)
  {
    tmp91 = GreaterEq(data->localData[0]->realVars[11] /* MatStm1.compMasFlo[3,1] variable */,0.0);
    if(!tmp91)
    {
      tmp93 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[11] /* MatStm1.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp92),tmp93);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp94 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 221
type: ALGORITHM

  assert(MatStm1.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: " + String(MatStm1.K[1], "g"));
*/
void Flowsheet_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  modelica_boolean tmp95;
  static const MMC_DEFSTRINGLIT(tmp96,67,"Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: ");
  modelica_string tmp97;
  static int tmp98 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp98)
  {
    tmp95 = GreaterEq(data->localData[0]->realVars[0] /* MatStm1.K[1] variable */,0.0);
    if(!tmp95)
    {
      tmp97 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[0] /* MatStm1.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp96),tmp97);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Files/Thermodynamic_Packages/package.mo",6,5,6,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp98 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 220
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: " + String(MatStm1.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  modelica_boolean tmp99;
  static const MMC_DEFSTRINGLIT(tmp100,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: ");
  modelica_string tmp101;
  static int tmp102 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp102)
  {
    tmp99 = GreaterEq(data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */,0.0);
    if(!tmp99)
    {
      tmp101 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[9] /* MatStm1.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp100),tmp101);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp102 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int Flowsheet_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

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

  Flowsheet_eqFunction_237(data, threadData);

  Flowsheet_eqFunction_238(data, threadData);

  Flowsheet_eqFunction_239(data, threadData);

  Flowsheet_eqFunction_240(data, threadData);

  Flowsheet_eqFunction_241(data, threadData);

  Flowsheet_eqFunction_242(data, threadData);

  Flowsheet_eqFunction_221(data, threadData);

  Flowsheet_eqFunction_220(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

