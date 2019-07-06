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
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,364};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq(data->localData[0]->realVars[60] /* MatStm1.liqPhasMolFrac variable */,0.0);
    tmp1 = LessEq(data->localData[0]->realVars[60] /* MatStm1.liqPhasMolFrac variable */,1.0);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[60] /* MatStm1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp6 = 1;
=======
      tmp4 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
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
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,365};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp9)
  {
    tmp5 = GreaterEq(data->localData[0]->realVars[88] /* MatStm1.vapPhasMolFrac variable */,0.0);
    tmp6 = LessEq(data->localData[0]->realVars[88] /* MatStm1.vapPhasMolFrac variable */,1.0);
    if(!(tmp5 && tmp6))
    {
      tmp8 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[88] /* MatStm1.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp11 = 1;
=======
      tmp9 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
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
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,366};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp13;
  static int tmp14 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp14)
  {
    tmp10 = GreaterEq(data->localData[0]->realVars[59] /* MatStm1.liqPhasMasFrac variable */,0.0);
    tmp11 = LessEq(data->localData[0]->realVars[59] /* MatStm1.liqPhasMasFrac variable */,1.0);
    if(!(tmp10 && tmp11))
    {
      tmp13 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[59] /* MatStm1.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp12),tmp13);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp16 = 1;
=======
      tmp14 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
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
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,367};
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp19)
  {
    tmp15 = GreaterEq(data->localData[0]->realVars[87] /* MatStm1.vapPhasMasFrac variable */,0.0);
    tmp16 = LessEq(data->localData[0]->realVars[87] /* MatStm1.vapPhasMasFrac variable */,1.0);
    if(!(tmp15 && tmp16))
    {
      tmp18 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[87] /* MatStm1.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp21 = 1;
=======
      tmp19 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
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
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,368};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: ");
  modelica_string tmp22;
  static int tmp23 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp23)
  {
    tmp20 = GreaterEq(data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */,0.0);
    if(!tmp20)
    {
      tmp22 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[85] /* MatStm1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp25 = 1;
=======
      tmp23 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
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
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,369};
  modelica_boolean tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: ");
  modelica_string tmp26;
  static int tmp27 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp27)
  {
    tmp24 = GreaterEq(data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */,0.0);
    if(!tmp24)
    {
      tmp26 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[86] /* MatStm1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp25),tmp26);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp29 = 1;
=======
      tmp27 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
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
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,370};
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: ");
  modelica_string tmp30;
  static int tmp31 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp31)
  {
    tmp28 = GreaterEq(data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */,0.0);
    if(!tmp28)
    {
      tmp30 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[81] /* MatStm1.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp33 = 1;
=======
      tmp31 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
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
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,371};
  modelica_boolean tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: ");
  modelica_string tmp34;
  static int tmp35 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp35)
  {
    tmp32 = GreaterEq(data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */,0.0);
    if(!tmp32)
    {
      tmp34 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[82] /* MatStm1.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp33),tmp34);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp37 = 1;
=======
      tmp35 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
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
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,372};
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: ");
  modelica_string tmp38;
  static int tmp39 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp39)
  {
    tmp36 = GreaterEq(data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */,0.0);
    if(!tmp36)
    {
      tmp38 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[83] /* MatStm1.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp41 = 1;
=======
      tmp39 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
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
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,373};
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: ");
  modelica_string tmp42;
  static int tmp43 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp43)
  {
    tmp40 = GreaterEq(data->localData[0]->realVars[2] /* MatStm1.MW[1] variable */,0.0);
    if(!tmp40)
    {
      tmp42 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[2] /* MatStm1.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp45 = 1;
=======
      tmp43 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
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
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,374};
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: ");
  modelica_string tmp46;
  static int tmp47 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp47)
  {
    tmp44 = GreaterEq(data->localData[0]->realVars[3] /* MatStm1.MW[2] variable */,0.0);
    if(!tmp44)
    {
      tmp46 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[3] /* MatStm1.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp49 = 1;
=======
      tmp47 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
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
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,375};
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: ");
  modelica_string tmp50;
  static int tmp51 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp51)
  {
    tmp48 = GreaterEq(data->localData[0]->realVars[4] /* MatStm1.MW[3] variable */,0.0);
    if(!tmp48)
    {
      tmp50 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[4] /* MatStm1.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp49),tmp50);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp53 = 1;
=======
      tmp51 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
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
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,376};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  static const MMC_DEFSTRINGLIT(tmp54,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp55;
  static int tmp56 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp56)
  {
    tmp52 = GreaterEq(data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */,0.0);
    tmp53 = LessEq(data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */,1.0);
    if(!(tmp52 && tmp53))
    {
      tmp55 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[43] /* MatStm1.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp54),tmp55);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp58 = 1;
=======
      tmp56 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 377
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  static const MMC_DEFSTRINGLIT(tmp59,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp60;
  static int tmp61 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp61)
  {
    tmp57 = GreaterEq(data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */,0.0);
    tmp58 = LessEq(data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */,1.0);
    if(!(tmp57 && tmp58))
    {
      tmp60 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[44] /* MatStm1.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp59),tmp60);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp61 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
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
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,378};
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp65;
  static int tmp66 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp66)
  {
    tmp62 = GreaterEq(data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */,0.0);
    tmp63 = LessEq(data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */,1.0);
    if(!(tmp62 && tmp63))
    {
      tmp65 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[45] /* MatStm1.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp64),tmp65);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp63 = 1;
=======
      tmp66 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 236
=======
equation index: 379
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  static const MMC_DEFSTRINGLIT(tmp69,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp70;
  static int tmp71 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp71)
  {
    tmp67 = GreaterEq(data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */,0.0);
    tmp68 = LessEq(data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */,1.0);
    if(!(tmp67 && tmp68))
    {
      tmp70 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[46] /* MatStm1.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp69),tmp70);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp71 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 380
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,380};
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  static const MMC_DEFSTRINGLIT(tmp74,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp75;
  static int tmp76 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp76)
  {
    tmp72 = GreaterEq(data->localData[0]->realVars[17] /* MatStm1.compMasFrac[1,1] variable */,0.0);
    tmp73 = LessEq(data->localData[0]->realVars[17] /* MatStm1.compMasFrac[1,1] variable */,1.0);
    if(!(tmp72 && tmp73))
    {
      tmp75 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[17] /* MatStm1.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp74),tmp75);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp68 = 1;
=======
      tmp76 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 237
=======
equation index: 381
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  static const MMC_DEFSTRINGLIT(tmp79,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp80;
  static int tmp81 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp81)
  {
    tmp77 = GreaterEq(data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */,0.0);
    tmp78 = LessEq(data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */,1.0);
    if(!(tmp77 && tmp78))
    {
      tmp80 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[18] /* MatStm1.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp79),tmp80);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp81 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 382
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,382};
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  static const MMC_DEFSTRINGLIT(tmp84,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp85;
  static int tmp86 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp86)
  {
    tmp82 = GreaterEq(data->localData[0]->realVars[19] /* MatStm1.compMasFrac[2,1] variable */,0.0);
    tmp83 = LessEq(data->localData[0]->realVars[19] /* MatStm1.compMasFrac[2,1] variable */,1.0);
    if(!(tmp82 && tmp83))
    {
      tmp85 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[19] /* MatStm1.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp84),tmp85);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp73 = 1;
=======
      tmp86 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 383
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  static const MMC_DEFSTRINGLIT(tmp89,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp90;
  static int tmp91 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp91)
  {
    tmp87 = GreaterEq(data->localData[0]->realVars[20] /* MatStm1.compMasFrac[2,2] variable */,0.0);
    tmp88 = LessEq(data->localData[0]->realVars[20] /* MatStm1.compMasFrac[2,2] variable */,1.0);
    if(!(tmp87 && tmp88))
    {
      tmp90 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[20] /* MatStm1.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp89),tmp90);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp91 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
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
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,384};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  static const MMC_DEFSTRINGLIT(tmp94,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp95;
  static int tmp96 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp96)
  {
    tmp92 = GreaterEq(data->localData[0]->realVars[21] /* MatStm1.compMasFrac[3,1] variable */,0.0);
    tmp93 = LessEq(data->localData[0]->realVars[21] /* MatStm1.compMasFrac[3,1] variable */,1.0);
    if(!(tmp92 && tmp93))
    {
      tmp95 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[21] /* MatStm1.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp94),tmp95);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp78 = 1;
=======
      tmp96 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 385
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  static const MMC_DEFSTRINGLIT(tmp99,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp100;
  static int tmp101 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp101)
  {
    tmp97 = GreaterEq(data->localData[0]->realVars[22] /* MatStm1.compMasFrac[3,2] variable */,0.0);
    tmp98 = LessEq(data->localData[0]->realVars[22] /* MatStm1.compMasFrac[3,2] variable */,1.0);
    if(!(tmp97 && tmp98))
    {
      tmp100 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[22] /* MatStm1.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp99),tmp100);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp101 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
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
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,386};
  modelica_boolean tmp102;
  static const MMC_DEFSTRINGLIT(tmp103,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: ");
  modelica_string tmp104;
  static int tmp105 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp105)
  {
    tmp102 = GreaterEq(data->localData[0]->realVars[37] /* MatStm1.compMolFlo[2,1] variable */,0.0);
    if(!tmp102)
    {
      tmp104 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[37] /* MatStm1.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp103),tmp104);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp82 = 1;
=======
      tmp105 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 387
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: " + String(MatStm1.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  modelica_boolean tmp106;
  static const MMC_DEFSTRINGLIT(tmp107,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: ");
  modelica_string tmp108;
  static int tmp109 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp109)
  {
    tmp106 = GreaterEq(data->localData[0]->realVars[38] /* MatStm1.compMolFlo[2,2] variable */,0.0);
    if(!tmp106)
    {
      tmp108 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[38] /* MatStm1.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp107),tmp108);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp109 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
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
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,388};
  modelica_boolean tmp110;
  static const MMC_DEFSTRINGLIT(tmp111,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: ");
  modelica_string tmp112;
  static int tmp113 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp113)
  {
    tmp110 = GreaterEq(data->localData[0]->realVars[39] /* MatStm1.compMolFlo[3,1] variable */,0.0);
    if(!tmp110)
    {
      tmp112 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[39] /* MatStm1.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp111),tmp112);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp86 = 1;
=======
      tmp113 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 389
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: " + String(MatStm1.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  modelica_boolean tmp114;
  static const MMC_DEFSTRINGLIT(tmp115,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: ");
  modelica_string tmp116;
  static int tmp117 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp117)
  {
    tmp114 = GreaterEq(data->localData[0]->realVars[40] /* MatStm1.compMolFlo[3,2] variable */,0.0);
    if(!tmp114)
    {
      tmp116 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[40] /* MatStm1.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp115),tmp116);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp117 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
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
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,390};
  modelica_boolean tmp118;
  static const MMC_DEFSTRINGLIT(tmp119,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: ");
  modelica_string tmp120;
  static int tmp121 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp121)
  {
    tmp118 = GreaterEq(data->localData[0]->realVars[13] /* MatStm1.compMasFlo[2,1] variable */,0.0);
    if(!tmp118)
    {
      tmp120 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[13] /* MatStm1.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp119),tmp120);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp90 = 1;
=======
      tmp121 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 242
=======
equation index: 391
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: " + String(MatStm1.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  modelica_boolean tmp122;
  static const MMC_DEFSTRINGLIT(tmp123,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: ");
  modelica_string tmp124;
  static int tmp125 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp125)
  {
    tmp122 = GreaterEq(data->localData[0]->realVars[14] /* MatStm1.compMasFlo[2,2] variable */,0.0);
    if(!tmp122)
    {
      tmp124 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[14] /* MatStm1.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp123),tmp124);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp125 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 392
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: " + String(MatStm1.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,392};
  modelica_boolean tmp126;
  static const MMC_DEFSTRINGLIT(tmp127,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: ");
  modelica_string tmp128;
  static int tmp129 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp129)
  {
    tmp126 = GreaterEq(data->localData[0]->realVars[15] /* MatStm1.compMasFlo[3,1] variable */,0.0);
    if(!tmp126)
    {
      tmp128 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[15] /* MatStm1.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp127),tmp128);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp94 = 1;
=======
      tmp129 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 393
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: " + String(MatStm1.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  modelica_boolean tmp130;
  static const MMC_DEFSTRINGLIT(tmp131,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: ");
  modelica_string tmp132;
  static int tmp133 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp133)
  {
    tmp130 = GreaterEq(data->localData[0]->realVars[16] /* MatStm1.compMasFlo[3,2] variable */,0.0);
    if(!tmp130)
    {
      tmp132 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[16] /* MatStm1.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp131),tmp132);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp133 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 363
type: ALGORITHM

  assert(MatStm1.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: " + String(MatStm1.K[2], "g"));
*/
void Flowsheet_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  modelica_boolean tmp134;
  static const MMC_DEFSTRINGLIT(tmp135,67,"Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: ");
  modelica_string tmp136;
  static int tmp137 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp137)
  {
    tmp134 = GreaterEq(data->localData[0]->realVars[1] /* MatStm1.K[2] variable */,0.0);
    if(!tmp134)
    {
      tmp136 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1] /* MatStm1.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp135),tmp136);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Files/Thermodynamic_Packages/package.mo",6,5,6,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp137 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
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
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,362};
  modelica_boolean tmp138;
  static const MMC_DEFSTRINGLIT(tmp139,67,"Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: ");
  modelica_string tmp140;
  static int tmp141 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp141)
  {
    tmp138 = GreaterEq(data->localData[0]->realVars[0] /* MatStm1.K[1] variable */,0.0);
    if(!tmp138)
    {
      tmp140 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[0] /* MatStm1.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp139),tmp140);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Files/Thermodynamic_Packages/package.mo",6,5,6,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp98 = 1;
=======
      tmp141 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
    }
  }
  TRACE_POP
}

/*
<<<<<<< HEAD
equation index: 220
=======
equation index: 361
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: " + String(MatStm1.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  modelica_boolean tmp142;
  static const MMC_DEFSTRINGLIT(tmp143,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: ");
  modelica_string tmp144;
  static int tmp145 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp145)
  {
    tmp142 = GreaterEq(data->localData[0]->realVars[12] /* MatStm1.compMasFlo[1,2] variable */,0.0);
    if(!tmp142)
    {
      tmp144 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[12] /* MatStm1.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp143),tmp144);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp145 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 360
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: " + String(MatStm1.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
<<<<<<< HEAD
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
=======
  const int equationIndexes[2] = {1,360};
  modelica_boolean tmp146;
  static const MMC_DEFSTRINGLIT(tmp147,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: ");
  modelica_string tmp148;
  static int tmp149 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp149)
  {
    tmp146 = GreaterEq(data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */,0.0);
    if(!tmp146)
    {
      tmp148 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[11] /* MatStm1.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp147),tmp148);
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
<<<<<<< HEAD
      tmp102 = 1;
=======
      tmp149 = 1;
>>>>>>> 0695df14fae81e01ecea6ef7650d1361f8ed3b25
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

