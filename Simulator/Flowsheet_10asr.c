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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Unit_Operations/Splitter.mo",7,3,7,799,0};
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

  assert(Mixer1.inVapPhasMolFrac[1] >= 0.0 and Mixer1.inVapPhasMolFrac[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[1] <= 1.0, has value: " + String(Mixer1.inVapPhasMolFrac[1], "g"));
*/
void Flowsheet_eqFunction_2142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2142};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  static const MMC_DEFSTRINGLIT(tmp6,92,"Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[1] <= 1.0, has value: ");
  modelica_string tmp7;
  static int tmp8 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp8)
  {
    tmp4 = GreaterEq(data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */,0.0);
    tmp5 = LessEq(data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */,1.0);
    if(!(tmp4 && tmp5))
    {
      tmp7 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[458] /* Mixer1.inVapPhasMolFrac[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp6),tmp7);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Unit_Operations/Mixer.mo",13,3,13,430,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMixer1.inVapPhasMolFrac[1] >= 0.0 and Mixer1.inVapPhasMolFrac[1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(Mixer1.inVapPhasMolFrac[2] >= 0.0 and Mixer1.inVapPhasMolFrac[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[2] <= 1.0, has value: " + String(Mixer1.inVapPhasMolFrac[2], "g"));
*/
void Flowsheet_eqFunction_2143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2143};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,92,"Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[2] <= 1.0, has value: ");
  modelica_string tmp12;
  static int tmp13 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp13)
  {
    tmp9 = GreaterEq(data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */,0.0);
    tmp10 = LessEq(data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */,1.0);
    if(!(tmp9 && tmp10))
    {
      tmp12 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[459] /* Mixer1.inVapPhasMolFrac[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp11),tmp12);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Unit_Operations/Mixer.mo",13,3,13,430,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMixer1.inVapPhasMolFrac[2] >= 0.0 and Mixer1.inVapPhasMolFrac[2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(Splitter1.outT[2] >= 0.0, "Variable violating min constraint: 0.0 <= Splitter1.outT[2], has value: " + String(Splitter1.outT[2], "g"));
*/
void Flowsheet_eqFunction_2144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2144};
  modelica_boolean tmp14;
  static const MMC_DEFSTRINGLIT(tmp15,72,"Variable violating min constraint: 0.0 <= Splitter1.outT[2], has value: ");
  modelica_string tmp16;
  static int tmp17 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp17)
  {
    tmp14 = GreaterEq(data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */,0.0);
    if(!tmp14)
    {
      tmp16 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[466] /* Splitter1.outT[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp15),tmp16);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Unit_Operations/Splitter.mo",7,3,7,799,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.outT[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp17 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2145
type: ALGORITHM

  assert(Splitter1.inMixMolFrac[1] >= 0.0 and Splitter1.inMixMolFrac[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= Splitter1.inMixMolFrac[1] <= 1.0, has value: " + String(Splitter1.inMixMolFrac[1], "g"));
*/
void Flowsheet_eqFunction_2145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2145};
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  static const MMC_DEFSTRINGLIT(tmp20,91,"Variable violating min/max constraint: 0.0 <= Splitter1.inMixMolFrac[1] <= 1.0, has value: ");
  modelica_string tmp21;
  static int tmp22 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp22)
  {
    tmp18 = GreaterEq(data->localData[0]->realVars[461] /* Splitter1.inMixMolFrac[1] variable */,0.0);
    tmp19 = LessEq(data->localData[0]->realVars[461] /* Splitter1.inMixMolFrac[1] variable */,1.0);
    if(!(tmp18 && tmp19))
    {
      tmp21 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[461] /* Splitter1.inMixMolFrac[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp20),tmp21);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Unit_Operations/Splitter.mo",7,3,7,799,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.inMixMolFrac[1] >= 0.0 and Splitter1.inMixMolFrac[1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(Splitter1.inMixMolFrac[2] >= 0.0 and Splitter1.inMixMolFrac[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= Splitter1.inMixMolFrac[2] <= 1.0, has value: " + String(Splitter1.inMixMolFrac[2], "g"));
*/
void Flowsheet_eqFunction_2146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2146};
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,91,"Variable violating min/max constraint: 0.0 <= Splitter1.inMixMolFrac[2] <= 1.0, has value: ");
  modelica_string tmp26;
  static int tmp27 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp27)
  {
    tmp23 = GreaterEq(data->localData[0]->realVars[462] /* Splitter1.inMixMolFrac[2] variable */,0.0);
    tmp24 = LessEq(data->localData[0]->realVars[462] /* Splitter1.inMixMolFrac[2] variable */,1.0);
    if(!(tmp23 && tmp24))
    {
      tmp26 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[462] /* Splitter1.inMixMolFrac[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp25),tmp26);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Unit_Operations/Splitter.mo",7,3,7,799,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.inMixMolFrac[2] >= 0.0 and Splitter1.inMixMolFrac[2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp27 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2147
type: ALGORITHM

  assert(Splitter1.MW >= 0.0, "Variable violating min constraint: 0.0 <= Splitter1.MW, has value: " + String(Splitter1.MW, "g"));
*/
void Flowsheet_eqFunction_2147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2147};
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,67,"Variable violating min constraint: 0.0 <= Splitter1.MW, has value: ");
  modelica_string tmp30;
  static int tmp31 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp31)
  {
    tmp28 = GreaterEq(data->localData[0]->realVars[460] /* Splitter1.MW variable */,0.0);
    if(!tmp28)
    {
      tmp30 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[460] /* Splitter1.MW variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Unit_Operations/Splitter.mo",7,3,7,799,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.MW >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp31 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2148
type: ALGORITHM

  assert(Splitter1.outMixMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= Splitter1.outMixMasFlo[2], has value: " + String(Splitter1.outMixMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2148};
  modelica_boolean tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,80,"Variable violating min constraint: 0.0 <= Splitter1.outMixMasFlo[2], has value: ");
  modelica_string tmp34;
  static int tmp35 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp35)
  {
    tmp32 = GreaterEq(data->localData[0]->realVars[464] /* Splitter1.outMixMasFlo[2] variable */,0.0);
    if(!tmp32)
    {
      tmp34 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[464] /* Splitter1.outMixMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp33),tmp34);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Unit_Operations/Splitter.mo",7,3,7,799,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSplitter1.outMixMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp35 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2149
type: ALGORITHM

  assert(MatStm1.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.Pbubl, has value: " + String(MatStm1.Pbubl, "g"));
*/
void Flowsheet_eqFunction_2149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2149};
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,68,"Variable violating min constraint: 0.0 <= MatStm1.Pbubl, has value: ");
  modelica_string tmp38;
  static int tmp39 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp39)
  {
    tmp36 = GreaterEq(data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */,0.0);
    if(!tmp36)
    {
      tmp38 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[18] /* MatStm1.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",11,3,11,144,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp39 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2150
type: ALGORITHM

  assert(MatStm1.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.Pdew, has value: " + String(MatStm1.Pdew, "g"));
*/
void Flowsheet_eqFunction_2150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2150};
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,67,"Variable violating min constraint: 0.0 <= MatStm1.Pdew, has value: ");
  modelica_string tmp42;
  static int tmp43 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp43)
  {
    tmp40 = GreaterEq(data->localData[0]->realVars[19] /* MatStm1.Pdew variable */,0.0);
    if(!tmp40)
    {
      tmp42 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[19] /* MatStm1.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",11,3,11,144,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp43 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2151
type: ALGORITHM

  assert(MatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: " + String(MatStm1.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2151};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp47;
  static int tmp48 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp48)
  {
    tmp44 = GreaterEq(data->localData[0]->realVars[71] /* MatStm1.liqPhasMolFrac variable */,0.0);
    tmp45 = LessEq(data->localData[0]->realVars[71] /* MatStm1.liqPhasMolFrac variable */,1.0);
    if(!(tmp44 && tmp45))
    {
      tmp47 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[71] /* MatStm1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp46),tmp47);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp48 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2152
type: ALGORITHM

  assert(MatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: " + String(MatStm1.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2152};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  static const MMC_DEFSTRINGLIT(tmp51,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp52;
  static int tmp53 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp53)
  {
    tmp49 = GreaterEq(data->localData[0]->realVars[99] /* MatStm1.vapPhasMolFrac variable */,0.0);
    tmp50 = LessEq(data->localData[0]->realVars[99] /* MatStm1.vapPhasMolFrac variable */,1.0);
    if(!(tmp49 && tmp50))
    {
      tmp52 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[99] /* MatStm1.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp51),tmp52);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: " + String(MatStm1.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2153};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  static const MMC_DEFSTRINGLIT(tmp56,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp57;
  static int tmp58 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp58)
  {
    tmp54 = GreaterEq(data->localData[0]->realVars[70] /* MatStm1.liqPhasMasFrac variable */,0.0);
    tmp55 = LessEq(data->localData[0]->realVars[70] /* MatStm1.liqPhasMasFrac variable */,1.0);
    if(!(tmp54 && tmp55))
    {
      tmp57 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[70] /* MatStm1.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp56),tmp57);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp58 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2154
type: ALGORITHM

  assert(MatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: " + String(MatStm1.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2154};
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  static const MMC_DEFSTRINGLIT(tmp61,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp62;
  static int tmp63 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp63)
  {
    tmp59 = GreaterEq(data->localData[0]->realVars[98] /* MatStm1.vapPhasMasFrac variable */,0.0);
    tmp60 = LessEq(data->localData[0]->realVars[98] /* MatStm1.vapPhasMasFrac variable */,1.0);
    if(!(tmp59 && tmp60))
    {
      tmp62 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[98] /* MatStm1.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp61),tmp62);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp63 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2155
type: ALGORITHM

  assert(MatStm1.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: " + String(MatStm1.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2155};
  modelica_boolean tmp64;
  static const MMC_DEFSTRINGLIT(tmp65,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: ");
  modelica_string tmp66;
  static int tmp67 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp67)
  {
    tmp64 = GreaterEq(data->localData[0]->realVars[96] /* MatStm1.totMolFlo[2] variable */,0.0);
    if(!tmp64)
    {
      tmp66 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[96] /* MatStm1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp65),tmp66);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp67 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2156
type: ALGORITHM

  assert(MatStm1.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: " + String(MatStm1.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2156};
  modelica_boolean tmp68;
  static const MMC_DEFSTRINGLIT(tmp69,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: ");
  modelica_string tmp70;
  static int tmp71 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp71)
  {
    tmp68 = GreaterEq(data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */,0.0);
    if(!tmp68)
    {
      tmp70 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp69),tmp70);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp71 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2157
type: ALGORITHM

  assert(MatStm1.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: " + String(MatStm1.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2157};
  modelica_boolean tmp72;
  static const MMC_DEFSTRINGLIT(tmp73,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: ");
  modelica_string tmp74;
  static int tmp75 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp75)
  {
    tmp72 = GreaterEq(data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */,0.0);
    if(!tmp72)
    {
      tmp74 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp73),tmp74);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: " + String(MatStm1.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2158};
  modelica_boolean tmp76;
  static const MMC_DEFSTRINGLIT(tmp77,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: ");
  modelica_string tmp78;
  static int tmp79 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp79)
  {
    tmp76 = GreaterEq(data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */,0.0);
    if(!tmp76)
    {
      tmp78 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp77),tmp78);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp79 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2159
type: ALGORITHM

  assert(MatStm1.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: " + String(MatStm1.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2159};
  modelica_boolean tmp80;
  static const MMC_DEFSTRINGLIT(tmp81,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: ");
  modelica_string tmp82;
  static int tmp83 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp83)
  {
    tmp80 = GreaterEq(data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */,0.0);
    if(!tmp80)
    {
      tmp82 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp81),tmp82);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp83 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2160
type: ALGORITHM

  assert(MatStm1.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: " + String(MatStm1.MW[1], "g"));
*/
void Flowsheet_eqFunction_2160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2160};
  modelica_boolean tmp84;
  static const MMC_DEFSTRINGLIT(tmp85,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: ");
  modelica_string tmp86;
  static int tmp87 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp87)
  {
    tmp84 = GreaterEq(data->localData[0]->realVars[15] /* MatStm1.MW[1] variable */,0.0);
    if(!tmp84)
    {
      tmp86 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[15] /* MatStm1.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp85),tmp86);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp87 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2161
type: ALGORITHM

  assert(MatStm1.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: " + String(MatStm1.MW[2], "g"));
*/
void Flowsheet_eqFunction_2161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2161};
  modelica_boolean tmp88;
  static const MMC_DEFSTRINGLIT(tmp89,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: ");
  modelica_string tmp90;
  static int tmp91 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp91)
  {
    tmp88 = GreaterEq(data->localData[0]->realVars[16] /* MatStm1.MW[2] variable */,0.0);
    if(!tmp88)
    {
      tmp90 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[16] /* MatStm1.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp89),tmp90);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp91 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2162
type: ALGORITHM

  assert(MatStm1.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: " + String(MatStm1.MW[3], "g"));
*/
void Flowsheet_eqFunction_2162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2162};
  modelica_boolean tmp92;
  static const MMC_DEFSTRINGLIT(tmp93,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: ");
  modelica_string tmp94;
  static int tmp95 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp95)
  {
    tmp92 = GreaterEq(data->localData[0]->realVars[17] /* MatStm1.MW[3] variable */,0.0);
    if(!tmp92)
    {
      tmp94 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[17] /* MatStm1.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp93),tmp94);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp95 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2163
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2163};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  static const MMC_DEFSTRINGLIT(tmp98,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp99;
  static int tmp100 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp100)
  {
    tmp96 = GreaterEq(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */,0.0);
    tmp97 = LessEq(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */,1.0);
    if(!(tmp96 && tmp97))
    {
      tmp99 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp98),tmp99);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp100 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2164
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2164};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  static const MMC_DEFSTRINGLIT(tmp103,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp104;
  static int tmp105 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp105)
  {
    tmp101 = GreaterEq(data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */,0.0);
    tmp102 = LessEq(data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */,1.0);
    if(!(tmp101 && tmp102))
    {
      tmp104 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp103),tmp104);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp105 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2165
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2165};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  static const MMC_DEFSTRINGLIT(tmp108,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp109;
  static int tmp110 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp110)
  {
    tmp106 = GreaterEq(data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */,0.0);
    tmp107 = LessEq(data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */,1.0);
    if(!(tmp106 && tmp107))
    {
      tmp109 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp108),tmp109);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp110 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2166
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2166};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  static const MMC_DEFSTRINGLIT(tmp113,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp114;
  static int tmp115 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp115)
  {
    tmp111 = GreaterEq(data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */,0.0);
    tmp112 = LessEq(data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */,1.0);
    if(!(tmp111 && tmp112))
    {
      tmp114 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp113),tmp114);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp115 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2167
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2167};
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  static const MMC_DEFSTRINGLIT(tmp118,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp119;
  static int tmp120 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp120)
  {
    tmp116 = GreaterEq(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[1,1] variable */,0.0);
    tmp117 = LessEq(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[1,1] variable */,1.0);
    if(!(tmp116 && tmp117))
    {
      tmp119 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp118),tmp119);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2168};
  modelica_boolean tmp121;
  modelica_boolean tmp122;
  static const MMC_DEFSTRINGLIT(tmp123,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp124;
  static int tmp125 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp125)
  {
    tmp121 = GreaterEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */,0.0);
    tmp122 = LessEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */,1.0);
    if(!(tmp121 && tmp122))
    {
      tmp124 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp123),tmp124);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp125 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2169
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2169};
  modelica_boolean tmp126;
  modelica_boolean tmp127;
  static const MMC_DEFSTRINGLIT(tmp128,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp129;
  static int tmp130 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp130)
  {
    tmp126 = GreaterEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */,0.0);
    tmp127 = LessEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */,1.0);
    if(!(tmp126 && tmp127))
    {
      tmp129 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp128),tmp129);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp130 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2170
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2170};
  modelica_boolean tmp131;
  modelica_boolean tmp132;
  static const MMC_DEFSTRINGLIT(tmp133,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp134;
  static int tmp135 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp135)
  {
    tmp131 = GreaterEq(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */,0.0);
    tmp132 = LessEq(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */,1.0);
    if(!(tmp131 && tmp132))
    {
      tmp134 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp133),tmp134);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2171};
  modelica_boolean tmp136;
  modelica_boolean tmp137;
  static const MMC_DEFSTRINGLIT(tmp138,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp139;
  static int tmp140 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp140)
  {
    tmp136 = GreaterEq(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[3,1] variable */,0.0);
    tmp137 = LessEq(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[3,1] variable */,1.0);
    if(!(tmp136 && tmp137))
    {
      tmp139 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp138),tmp139);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp140 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2172
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2172};
  modelica_boolean tmp141;
  modelica_boolean tmp142;
  static const MMC_DEFSTRINGLIT(tmp143,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp144;
  static int tmp145 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp145)
  {
    tmp141 = GreaterEq(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[3,2] variable */,0.0);
    tmp142 = LessEq(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[3,2] variable */,1.0);
    if(!(tmp141 && tmp142))
    {
      tmp144 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp143),tmp144);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp145 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2173
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: " + String(MatStm1.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2173};
  modelica_boolean tmp146;
  static const MMC_DEFSTRINGLIT(tmp147,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: ");
  modelica_string tmp148;
  static int tmp149 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp149)
  {
    tmp146 = GreaterEq(data->localData[0]->realVars[48] /* MatStm1.compMolFlo[2,1] variable */,0.0);
    if(!tmp146)
    {
      tmp148 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[48] /* MatStm1.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp147),tmp148);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp149 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2174
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: " + String(MatStm1.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2174};
  modelica_boolean tmp150;
  static const MMC_DEFSTRINGLIT(tmp151,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: ");
  modelica_string tmp152;
  static int tmp153 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp153)
  {
    tmp150 = GreaterEq(data->localData[0]->realVars[49] /* MatStm1.compMolFlo[2,2] variable */,0.0);
    if(!tmp150)
    {
      tmp152 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[49] /* MatStm1.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp151),tmp152);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp153 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2175
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: " + String(MatStm1.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2175};
  modelica_boolean tmp154;
  static const MMC_DEFSTRINGLIT(tmp155,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: ");
  modelica_string tmp156;
  static int tmp157 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp157)
  {
    tmp154 = GreaterEq(data->localData[0]->realVars[50] /* MatStm1.compMolFlo[3,1] variable */,0.0);
    if(!tmp154)
    {
      tmp156 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[50] /* MatStm1.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp155),tmp156);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp157 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2176
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: " + String(MatStm1.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2176};
  modelica_boolean tmp158;
  static const MMC_DEFSTRINGLIT(tmp159,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: ");
  modelica_string tmp160;
  static int tmp161 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp161)
  {
    tmp158 = GreaterEq(data->localData[0]->realVars[51] /* MatStm1.compMolFlo[3,2] variable */,0.0);
    if(!tmp158)
    {
      tmp160 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[51] /* MatStm1.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp159),tmp160);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp161 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2177
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: " + String(MatStm1.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2177};
  modelica_boolean tmp162;
  static const MMC_DEFSTRINGLIT(tmp163,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: ");
  modelica_string tmp164;
  static int tmp165 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp165)
  {
    tmp162 = GreaterEq(data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,1] variable */,0.0);
    if(!tmp162)
    {
      tmp164 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp163),tmp164);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp165 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2178
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: " + String(MatStm1.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2178};
  modelica_boolean tmp166;
  static const MMC_DEFSTRINGLIT(tmp167,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: ");
  modelica_string tmp168;
  static int tmp169 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp169)
  {
    tmp166 = GreaterEq(data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,2] variable */,0.0);
    if(!tmp166)
    {
      tmp168 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp167),tmp168);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp169 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2179
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: " + String(MatStm1.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2179};
  modelica_boolean tmp170;
  static const MMC_DEFSTRINGLIT(tmp171,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: ");
  modelica_string tmp172;
  static int tmp173 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp173)
  {
    tmp170 = GreaterEq(data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */,0.0);
    if(!tmp170)
    {
      tmp172 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp171),tmp172);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: " + String(MatStm1.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2180};
  modelica_boolean tmp174;
  static const MMC_DEFSTRINGLIT(tmp175,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: ");
  modelica_string tmp176;
  static int tmp177 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp177)
  {
    tmp174 = GreaterEq(data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */,0.0);
    if(!tmp174)
    {
      tmp176 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp175),tmp176);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp177 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2181
type: ALGORITHM

  assert(MatStm1.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: " + String(MatStm1.K[1], "g"));
*/
void Flowsheet_eqFunction_2181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2181};
  modelica_boolean tmp178;
  static const MMC_DEFSTRINGLIT(tmp179,67,"Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: ");
  modelica_string tmp180;
  static int tmp181 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp181)
  {
    tmp178 = GreaterEq(data->localData[0]->realVars[13] /* MatStm1.K[1] variable */,0.0);
    if(!tmp178)
    {
      tmp180 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[13] /* MatStm1.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp179),tmp180);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Files/Thermodynamic_Packages/package.mo",6,5,6,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp181 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2182
type: ALGORITHM

  assert(MatStm1.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: " + String(MatStm1.K[2], "g"));
*/
void Flowsheet_eqFunction_2182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2182};
  modelica_boolean tmp182;
  static const MMC_DEFSTRINGLIT(tmp183,67,"Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: ");
  modelica_string tmp184;
  static int tmp185 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp185)
  {
    tmp182 = GreaterEq(data->localData[0]->realVars[14] /* MatStm1.K[2] variable */,0.0);
    if(!tmp182)
    {
      tmp184 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[14] /* MatStm1.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp183),tmp184);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Files/Thermodynamic_Packages/package.mo",6,5,6,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp185 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2183
type: ALGORITHM

  assert(MatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: " + String(MatStm2.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2183};
  modelica_boolean tmp186;
  modelica_boolean tmp187;
  static const MMC_DEFSTRINGLIT(tmp188,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp189;
  static int tmp190 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp190)
  {
    tmp186 = GreaterEq(data->localData[0]->realVars[162] /* MatStm2.liqPhasMolFrac variable */,0.0);
    tmp187 = LessEq(data->localData[0]->realVars[162] /* MatStm2.liqPhasMolFrac variable */,1.0);
    if(!(tmp186 && tmp187))
    {
      tmp189 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[162] /* MatStm2.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp188),tmp189);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp190 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2184
type: ALGORITHM

  assert(MatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: " + String(MatStm2.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2184};
  modelica_boolean tmp191;
  modelica_boolean tmp192;
  static const MMC_DEFSTRINGLIT(tmp193,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp194;
  static int tmp195 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp195)
  {
    tmp191 = GreaterEq(data->localData[0]->realVars[161] /* MatStm2.liqPhasMasFrac variable */,0.0);
    tmp192 = LessEq(data->localData[0]->realVars[161] /* MatStm2.liqPhasMasFrac variable */,1.0);
    if(!(tmp191 && tmp192))
    {
      tmp194 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[161] /* MatStm2.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp193),tmp194);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: " + String(MatStm2.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2185};
  modelica_boolean tmp196;
  modelica_boolean tmp197;
  static const MMC_DEFSTRINGLIT(tmp198,88,"Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp199;
  static int tmp200 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp200)
  {
    tmp196 = GreaterEq(data->localData[0]->realVars[189] /* MatStm2.vapPhasMasFrac variable */,0.0);
    tmp197 = LessEq(data->localData[0]->realVars[189] /* MatStm2.vapPhasMasFrac variable */,1.0);
    if(!(tmp196 && tmp197))
    {
      tmp199 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[189] /* MatStm2.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp198),tmp199);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp200 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2186
type: ALGORITHM

  assert(MatStm2.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: " + String(MatStm2.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2186};
  modelica_boolean tmp201;
  static const MMC_DEFSTRINGLIT(tmp202,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: ");
  modelica_string tmp203;
  static int tmp204 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp204)
  {
    tmp201 = GreaterEq(data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */,0.0);
    if(!tmp201)
    {
      tmp203 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[187] /* MatStm2.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp202),tmp203);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: " + String(MatStm2.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2187};
  modelica_boolean tmp205;
  static const MMC_DEFSTRINGLIT(tmp206,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: ");
  modelica_string tmp207;
  static int tmp208 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp208)
  {
    tmp205 = GreaterEq(data->localData[0]->realVars[188] /* MatStm2.totMolFlo[3] variable */,0.0);
    if(!tmp205)
    {
      tmp207 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[188] /* MatStm2.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp206),tmp207);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp208 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2188
type: ALGORITHM

  assert(MatStm2.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: " + String(MatStm2.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2188};
  modelica_boolean tmp209;
  static const MMC_DEFSTRINGLIT(tmp210,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: ");
  modelica_string tmp211;
  static int tmp212 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp212)
  {
    tmp209 = GreaterEq(data->localData[0]->realVars[183] /* MatStm2.totMasFlo[1] variable */,0.0);
    if(!tmp209)
    {
      tmp211 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[183] /* MatStm2.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp210),tmp211);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp212 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2189
type: ALGORITHM

  assert(MatStm2.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: " + String(MatStm2.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2189};
  modelica_boolean tmp213;
  static const MMC_DEFSTRINGLIT(tmp214,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: ");
  modelica_string tmp215;
  static int tmp216 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp216)
  {
    tmp213 = GreaterEq(data->localData[0]->realVars[184] /* MatStm2.totMasFlo[2] variable */,0.0);
    if(!tmp213)
    {
      tmp215 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[184] /* MatStm2.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp214),tmp215);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp216 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2190
type: ALGORITHM

  assert(MatStm2.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: " + String(MatStm2.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2190};
  modelica_boolean tmp217;
  static const MMC_DEFSTRINGLIT(tmp218,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: ");
  modelica_string tmp219;
  static int tmp220 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp220)
  {
    tmp217 = GreaterEq(data->localData[0]->realVars[185] /* MatStm2.totMasFlo[3] variable */,0.0);
    if(!tmp217)
    {
      tmp219 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[185] /* MatStm2.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp218),tmp219);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: " + String(MatStm2.MW[1], "g"));
*/
void Flowsheet_eqFunction_2191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2191};
  modelica_boolean tmp221;
  static const MMC_DEFSTRINGLIT(tmp222,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: ");
  modelica_string tmp223;
  static int tmp224 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp224)
  {
    tmp221 = GreaterEq(data->localData[0]->realVars[104] /* MatStm2.MW[1] variable */,0.0);
    if(!tmp221)
    {
      tmp223 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[104] /* MatStm2.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp222),tmp223);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp224 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2192
type: ALGORITHM

  assert(MatStm2.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: " + String(MatStm2.MW[2], "g"));
*/
void Flowsheet_eqFunction_2192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2192};
  modelica_boolean tmp225;
  static const MMC_DEFSTRINGLIT(tmp226,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: ");
  modelica_string tmp227;
  static int tmp228 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp228)
  {
    tmp225 = GreaterEq(data->localData[0]->realVars[105] /* MatStm2.MW[2] variable */,0.0);
    if(!tmp225)
    {
      tmp227 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[105] /* MatStm2.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp226),tmp227);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp228 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2193
type: ALGORITHM

  assert(MatStm2.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: " + String(MatStm2.MW[3], "g"));
*/
void Flowsheet_eqFunction_2193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2193};
  modelica_boolean tmp229;
  static const MMC_DEFSTRINGLIT(tmp230,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: ");
  modelica_string tmp231;
  static int tmp232 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp232)
  {
    tmp229 = GreaterEq(data->localData[0]->realVars[106] /* MatStm2.MW[3] variable */,0.0);
    if(!tmp229)
    {
      tmp231 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[106] /* MatStm2.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp230),tmp231);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp232 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2194
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2194};
  modelica_boolean tmp233;
  modelica_boolean tmp234;
  static const MMC_DEFSTRINGLIT(tmp235,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp236;
  static int tmp237 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp237)
  {
    tmp233 = GreaterEq(data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */,0.0);
    tmp234 = LessEq(data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */,1.0);
    if(!(tmp233 && tmp234))
    {
      tmp236 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[145] /* MatStm2.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp235),tmp236);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp237 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2195
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2195};
  modelica_boolean tmp238;
  modelica_boolean tmp239;
  static const MMC_DEFSTRINGLIT(tmp240,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp241;
  static int tmp242 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp242)
  {
    tmp238 = GreaterEq(data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */,0.0);
    tmp239 = LessEq(data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */,1.0);
    if(!(tmp238 && tmp239))
    {
      tmp241 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[146] /* MatStm2.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp240),tmp241);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp242 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2196
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2196};
  modelica_boolean tmp243;
  modelica_boolean tmp244;
  static const MMC_DEFSTRINGLIT(tmp245,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp246;
  static int tmp247 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp247)
  {
    tmp243 = GreaterEq(data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */,0.0);
    tmp244 = LessEq(data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */,1.0);
    if(!(tmp243 && tmp244))
    {
      tmp246 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[147] /* MatStm2.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp245),tmp246);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp247 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2197
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2197};
  modelica_boolean tmp248;
  modelica_boolean tmp249;
  static const MMC_DEFSTRINGLIT(tmp250,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp251;
  static int tmp252 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp252)
  {
    tmp248 = GreaterEq(data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */,0.0);
    tmp249 = LessEq(data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */,1.0);
    if(!(tmp248 && tmp249))
    {
      tmp251 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[148] /* MatStm2.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp250),tmp251);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp252 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2198
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2198};
  modelica_boolean tmp253;
  modelica_boolean tmp254;
  static const MMC_DEFSTRINGLIT(tmp255,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp256;
  static int tmp257 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp257)
  {
    tmp253 = GreaterEq(data->localData[0]->realVars[119] /* MatStm2.compMasFrac[1,1] variable */,0.0);
    tmp254 = LessEq(data->localData[0]->realVars[119] /* MatStm2.compMasFrac[1,1] variable */,1.0);
    if(!(tmp253 && tmp254))
    {
      tmp256 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[119] /* MatStm2.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp255),tmp256);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2199};
  modelica_boolean tmp258;
  modelica_boolean tmp259;
  static const MMC_DEFSTRINGLIT(tmp260,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp261;
  static int tmp262 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp262)
  {
    tmp258 = GreaterEq(data->localData[0]->realVars[120] /* MatStm2.compMasFrac[1,2] variable */,0.0);
    tmp259 = LessEq(data->localData[0]->realVars[120] /* MatStm2.compMasFrac[1,2] variable */,1.0);
    if(!(tmp258 && tmp259))
    {
      tmp261 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[120] /* MatStm2.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp260),tmp261);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp262 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2200
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2200};
  modelica_boolean tmp263;
  modelica_boolean tmp264;
  static const MMC_DEFSTRINGLIT(tmp265,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp266;
  static int tmp267 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp267)
  {
    tmp263 = GreaterEq(data->localData[0]->realVars[121] /* MatStm2.compMasFrac[2,1] variable */,0.0);
    tmp264 = LessEq(data->localData[0]->realVars[121] /* MatStm2.compMasFrac[2,1] variable */,1.0);
    if(!(tmp263 && tmp264))
    {
      tmp266 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[121] /* MatStm2.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp265),tmp266);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp267 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2201
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2201};
  modelica_boolean tmp268;
  modelica_boolean tmp269;
  static const MMC_DEFSTRINGLIT(tmp270,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp271;
  static int tmp272 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp272)
  {
    tmp268 = GreaterEq(data->localData[0]->realVars[122] /* MatStm2.compMasFrac[2,2] variable */,0.0);
    tmp269 = LessEq(data->localData[0]->realVars[122] /* MatStm2.compMasFrac[2,2] variable */,1.0);
    if(!(tmp268 && tmp269))
    {
      tmp271 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[122] /* MatStm2.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp270),tmp271);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp272 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2202
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2202};
  modelica_boolean tmp273;
  modelica_boolean tmp274;
  static const MMC_DEFSTRINGLIT(tmp275,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp276;
  static int tmp277 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp277)
  {
    tmp273 = GreaterEq(data->localData[0]->realVars[123] /* MatStm2.compMasFrac[3,1] variable */,0.0);
    tmp274 = LessEq(data->localData[0]->realVars[123] /* MatStm2.compMasFrac[3,1] variable */,1.0);
    if(!(tmp273 && tmp274))
    {
      tmp276 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[123] /* MatStm2.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp275),tmp276);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp277 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2203
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2203};
  modelica_boolean tmp278;
  modelica_boolean tmp279;
  static const MMC_DEFSTRINGLIT(tmp280,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp281;
  static int tmp282 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp282)
  {
    tmp278 = GreaterEq(data->localData[0]->realVars[124] /* MatStm2.compMasFrac[3,2] variable */,0.0);
    tmp279 = LessEq(data->localData[0]->realVars[124] /* MatStm2.compMasFrac[3,2] variable */,1.0);
    if(!(tmp278 && tmp279))
    {
      tmp281 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[124] /* MatStm2.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp280),tmp281);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp282 = 1;
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
  modelica_boolean tmp283;
  static const MMC_DEFSTRINGLIT(tmp284,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: ");
  modelica_string tmp285;
  static int tmp286 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp286)
  {
    tmp283 = GreaterEq(data->localData[0]->realVars[139] /* MatStm2.compMolFlo[2,1] variable */,0.0);
    if(!tmp283)
    {
      tmp285 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[139] /* MatStm2.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp284),tmp285);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp286 = 1;
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
  modelica_boolean tmp287;
  static const MMC_DEFSTRINGLIT(tmp288,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: ");
  modelica_string tmp289;
  static int tmp290 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp290)
  {
    tmp287 = GreaterEq(data->localData[0]->realVars[140] /* MatStm2.compMolFlo[2,2] variable */,0.0);
    if(!tmp287)
    {
      tmp289 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[140] /* MatStm2.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp288),tmp289);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp290 = 1;
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
  modelica_boolean tmp291;
  static const MMC_DEFSTRINGLIT(tmp292,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: ");
  modelica_string tmp293;
  static int tmp294 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp294)
  {
    tmp291 = GreaterEq(data->localData[0]->realVars[141] /* MatStm2.compMolFlo[3,1] variable */,0.0);
    if(!tmp291)
    {
      tmp293 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[141] /* MatStm2.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp292),tmp293);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: " + String(MatStm2.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2207};
  modelica_boolean tmp295;
  static const MMC_DEFSTRINGLIT(tmp296,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: ");
  modelica_string tmp297;
  static int tmp298 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp298)
  {
    tmp295 = GreaterEq(data->localData[0]->realVars[142] /* MatStm2.compMolFlo[3,2] variable */,0.0);
    if(!tmp295)
    {
      tmp297 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[142] /* MatStm2.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp296),tmp297);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp298 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2208
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: " + String(MatStm2.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2208};
  modelica_boolean tmp299;
  static const MMC_DEFSTRINGLIT(tmp300,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: ");
  modelica_string tmp301;
  static int tmp302 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp302)
  {
    tmp299 = GreaterEq(data->localData[0]->realVars[115] /* MatStm2.compMasFlo[2,1] variable */,0.0);
    if(!tmp299)
    {
      tmp301 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[115] /* MatStm2.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp300),tmp301);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp302 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2209
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: " + String(MatStm2.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2209};
  modelica_boolean tmp303;
  static const MMC_DEFSTRINGLIT(tmp304,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: ");
  modelica_string tmp305;
  static int tmp306 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp306)
  {
    tmp303 = GreaterEq(data->localData[0]->realVars[116] /* MatStm2.compMasFlo[2,2] variable */,0.0);
    if(!tmp303)
    {
      tmp305 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[116] /* MatStm2.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp304),tmp305);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp306 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2210
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: " + String(MatStm2.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2210};
  modelica_boolean tmp307;
  static const MMC_DEFSTRINGLIT(tmp308,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: ");
  modelica_string tmp309;
  static int tmp310 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp310)
  {
    tmp307 = GreaterEq(data->localData[0]->realVars[117] /* MatStm2.compMasFlo[3,1] variable */,0.0);
    if(!tmp307)
    {
      tmp309 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[117] /* MatStm2.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp308),tmp309);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp310 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2211
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: " + String(MatStm2.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2211};
  modelica_boolean tmp311;
  static const MMC_DEFSTRINGLIT(tmp312,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: ");
  modelica_string tmp313;
  static int tmp314 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp314)
  {
    tmp311 = GreaterEq(data->localData[0]->realVars[118] /* MatStm2.compMasFlo[3,2] variable */,0.0);
    if(!tmp311)
    {
      tmp313 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[118] /* MatStm2.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp312),tmp313);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp314 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2212
type: ALGORITHM

  assert(MatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: " + String(MatStm3.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2212};
  modelica_boolean tmp315;
  modelica_boolean tmp316;
  static const MMC_DEFSTRINGLIT(tmp317,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp318;
  static int tmp319 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp319)
  {
    tmp315 = GreaterEq(data->localData[0]->realVars[252] /* MatStm3.liqPhasMolFrac variable */,0.0);
    tmp316 = LessEq(data->localData[0]->realVars[252] /* MatStm3.liqPhasMolFrac variable */,1.0);
    if(!(tmp315 && tmp316))
    {
      tmp318 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[252] /* MatStm3.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp317),tmp318);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: " + String(MatStm3.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2213};
  modelica_boolean tmp320;
  modelica_boolean tmp321;
  static const MMC_DEFSTRINGLIT(tmp322,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp323;
  static int tmp324 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp324)
  {
    tmp320 = GreaterEq(data->localData[0]->realVars[251] /* MatStm3.liqPhasMasFrac variable */,0.0);
    tmp321 = LessEq(data->localData[0]->realVars[251] /* MatStm3.liqPhasMasFrac variable */,1.0);
    if(!(tmp320 && tmp321))
    {
      tmp323 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[251] /* MatStm3.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp322),tmp323);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp324 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2214
type: ALGORITHM

  assert(MatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: " + String(MatStm3.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2214};
  modelica_boolean tmp325;
  modelica_boolean tmp326;
  static const MMC_DEFSTRINGLIT(tmp327,88,"Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp328;
  static int tmp329 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp329)
  {
    tmp325 = GreaterEq(data->localData[0]->realVars[279] /* MatStm3.vapPhasMasFrac variable */,0.0);
    tmp326 = LessEq(data->localData[0]->realVars[279] /* MatStm3.vapPhasMasFrac variable */,1.0);
    if(!(tmp325 && tmp326))
    {
      tmp328 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[279] /* MatStm3.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp327),tmp328);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp329 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2215
type: ALGORITHM

  assert(MatStm3.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: " + String(MatStm3.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2215};
  modelica_boolean tmp330;
  static const MMC_DEFSTRINGLIT(tmp331,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: ");
  modelica_string tmp332;
  static int tmp333 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp333)
  {
    tmp330 = GreaterEq(data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */,0.0);
    if(!tmp330)
    {
      tmp332 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[277] /* MatStm3.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp331),tmp332);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp333 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2216
type: ALGORITHM

  assert(MatStm3.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: " + String(MatStm3.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2216};
  modelica_boolean tmp334;
  static const MMC_DEFSTRINGLIT(tmp335,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: ");
  modelica_string tmp336;
  static int tmp337 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp337)
  {
    tmp334 = GreaterEq(data->localData[0]->realVars[278] /* MatStm3.totMolFlo[3] variable */,0.0);
    if(!tmp334)
    {
      tmp336 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[278] /* MatStm3.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp335),tmp336);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp337 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2217
type: ALGORITHM

  assert(MatStm3.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: " + String(MatStm3.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2217};
  modelica_boolean tmp338;
  static const MMC_DEFSTRINGLIT(tmp339,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: ");
  modelica_string tmp340;
  static int tmp341 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp341)
  {
    tmp338 = GreaterEq(data->localData[0]->realVars[273] /* MatStm3.totMasFlo[1] variable */,0.0);
    if(!tmp338)
    {
      tmp340 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[273] /* MatStm3.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp339),tmp340);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: " + String(MatStm3.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2218};
  modelica_boolean tmp342;
  static const MMC_DEFSTRINGLIT(tmp343,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: ");
  modelica_string tmp344;
  static int tmp345 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp345)
  {
    tmp342 = GreaterEq(data->localData[0]->realVars[274] /* MatStm3.totMasFlo[2] variable */,0.0);
    if(!tmp342)
    {
      tmp344 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[274] /* MatStm3.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp343),tmp344);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp345 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2219
type: ALGORITHM

  assert(MatStm3.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: " + String(MatStm3.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2219};
  modelica_boolean tmp346;
  static const MMC_DEFSTRINGLIT(tmp347,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: ");
  modelica_string tmp348;
  static int tmp349 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp349)
  {
    tmp346 = GreaterEq(data->localData[0]->realVars[275] /* MatStm3.totMasFlo[3] variable */,0.0);
    if(!tmp346)
    {
      tmp348 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[275] /* MatStm3.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp347),tmp348);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: " + String(MatStm3.MW[1], "g"));
*/
void Flowsheet_eqFunction_2220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2220};
  modelica_boolean tmp350;
  static const MMC_DEFSTRINGLIT(tmp351,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: ");
  modelica_string tmp352;
  static int tmp353 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp353)
  {
    tmp350 = GreaterEq(data->localData[0]->realVars[194] /* MatStm3.MW[1] variable */,0.0);
    if(!tmp350)
    {
      tmp352 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[194] /* MatStm3.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp351),tmp352);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp353 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2221
type: ALGORITHM

  assert(MatStm3.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: " + String(MatStm3.MW[2], "g"));
*/
void Flowsheet_eqFunction_2221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2221};
  modelica_boolean tmp354;
  static const MMC_DEFSTRINGLIT(tmp355,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: ");
  modelica_string tmp356;
  static int tmp357 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp357)
  {
    tmp354 = GreaterEq(data->localData[0]->realVars[195] /* MatStm3.MW[2] variable */,0.0);
    if(!tmp354)
    {
      tmp356 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[195] /* MatStm3.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp355),tmp356);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp357 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2222
type: ALGORITHM

  assert(MatStm3.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: " + String(MatStm3.MW[3], "g"));
*/
void Flowsheet_eqFunction_2222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2222};
  modelica_boolean tmp358;
  static const MMC_DEFSTRINGLIT(tmp359,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: ");
  modelica_string tmp360;
  static int tmp361 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp361)
  {
    tmp358 = GreaterEq(data->localData[0]->realVars[196] /* MatStm3.MW[3] variable */,0.0);
    if(!tmp358)
    {
      tmp360 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[196] /* MatStm3.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp359),tmp360);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp361 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2223
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2223};
  modelica_boolean tmp362;
  modelica_boolean tmp363;
  static const MMC_DEFSTRINGLIT(tmp364,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp365;
  static int tmp366 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp366)
  {
    tmp362 = GreaterEq(data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */,0.0);
    tmp363 = LessEq(data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */,1.0);
    if(!(tmp362 && tmp363))
    {
      tmp365 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[235] /* MatStm3.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp364),tmp365);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp366 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2224
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2224};
  modelica_boolean tmp367;
  modelica_boolean tmp368;
  static const MMC_DEFSTRINGLIT(tmp369,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp370;
  static int tmp371 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp371)
  {
    tmp367 = GreaterEq(data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */,0.0);
    tmp368 = LessEq(data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */,1.0);
    if(!(tmp367 && tmp368))
    {
      tmp370 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[236] /* MatStm3.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp369),tmp370);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2225};
  modelica_boolean tmp372;
  modelica_boolean tmp373;
  static const MMC_DEFSTRINGLIT(tmp374,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp375;
  static int tmp376 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp376)
  {
    tmp372 = GreaterEq(data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */,0.0);
    tmp373 = LessEq(data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */,1.0);
    if(!(tmp372 && tmp373))
    {
      tmp375 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[237] /* MatStm3.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp374),tmp375);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp376 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2226
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2226};
  modelica_boolean tmp377;
  modelica_boolean tmp378;
  static const MMC_DEFSTRINGLIT(tmp379,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp380;
  static int tmp381 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp381)
  {
    tmp377 = GreaterEq(data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */,0.0);
    tmp378 = LessEq(data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */,1.0);
    if(!(tmp377 && tmp378))
    {
      tmp380 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[238] /* MatStm3.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp379),tmp380);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp381 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2227
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2227};
  modelica_boolean tmp382;
  modelica_boolean tmp383;
  static const MMC_DEFSTRINGLIT(tmp384,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp385;
  static int tmp386 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp386)
  {
    tmp382 = GreaterEq(data->localData[0]->realVars[209] /* MatStm3.compMasFrac[1,1] variable */,0.0);
    tmp383 = LessEq(data->localData[0]->realVars[209] /* MatStm3.compMasFrac[1,1] variable */,1.0);
    if(!(tmp382 && tmp383))
    {
      tmp385 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[209] /* MatStm3.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp384),tmp385);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp386 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2228
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2228};
  modelica_boolean tmp387;
  modelica_boolean tmp388;
  static const MMC_DEFSTRINGLIT(tmp389,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp390;
  static int tmp391 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp391)
  {
    tmp387 = GreaterEq(data->localData[0]->realVars[210] /* MatStm3.compMasFrac[1,2] variable */,0.0);
    tmp388 = LessEq(data->localData[0]->realVars[210] /* MatStm3.compMasFrac[1,2] variable */,1.0);
    if(!(tmp387 && tmp388))
    {
      tmp390 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[210] /* MatStm3.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp389),tmp390);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp391 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2229
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2229};
  modelica_boolean tmp392;
  modelica_boolean tmp393;
  static const MMC_DEFSTRINGLIT(tmp394,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp395;
  static int tmp396 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp396)
  {
    tmp392 = GreaterEq(data->localData[0]->realVars[211] /* MatStm3.compMasFrac[2,1] variable */,0.0);
    tmp393 = LessEq(data->localData[0]->realVars[211] /* MatStm3.compMasFrac[2,1] variable */,1.0);
    if(!(tmp392 && tmp393))
    {
      tmp395 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[211] /* MatStm3.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp394),tmp395);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp396 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2230
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2230};
  modelica_boolean tmp397;
  modelica_boolean tmp398;
  static const MMC_DEFSTRINGLIT(tmp399,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp400;
  static int tmp401 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp401)
  {
    tmp397 = GreaterEq(data->localData[0]->realVars[212] /* MatStm3.compMasFrac[2,2] variable */,0.0);
    tmp398 = LessEq(data->localData[0]->realVars[212] /* MatStm3.compMasFrac[2,2] variable */,1.0);
    if(!(tmp397 && tmp398))
    {
      tmp400 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[212] /* MatStm3.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp399),tmp400);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2231};
  modelica_boolean tmp402;
  modelica_boolean tmp403;
  static const MMC_DEFSTRINGLIT(tmp404,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp405;
  static int tmp406 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp406)
  {
    tmp402 = GreaterEq(data->localData[0]->realVars[213] /* MatStm3.compMasFrac[3,1] variable */,0.0);
    tmp403 = LessEq(data->localData[0]->realVars[213] /* MatStm3.compMasFrac[3,1] variable */,1.0);
    if(!(tmp402 && tmp403))
    {
      tmp405 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[213] /* MatStm3.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp404),tmp405);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp406 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2232
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2232};
  modelica_boolean tmp407;
  modelica_boolean tmp408;
  static const MMC_DEFSTRINGLIT(tmp409,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp410;
  static int tmp411 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp411)
  {
    tmp407 = GreaterEq(data->localData[0]->realVars[214] /* MatStm3.compMasFrac[3,2] variable */,0.0);
    tmp408 = LessEq(data->localData[0]->realVars[214] /* MatStm3.compMasFrac[3,2] variable */,1.0);
    if(!(tmp407 && tmp408))
    {
      tmp410 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[214] /* MatStm3.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp409),tmp410);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp411 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2233
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: " + String(MatStm3.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2233};
  modelica_boolean tmp412;
  static const MMC_DEFSTRINGLIT(tmp413,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: ");
  modelica_string tmp414;
  static int tmp415 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp415)
  {
    tmp412 = GreaterEq(data->localData[0]->realVars[229] /* MatStm3.compMolFlo[2,1] variable */,0.0);
    if(!tmp412)
    {
      tmp414 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[229] /* MatStm3.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp413),tmp414);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp415 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2234
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: " + String(MatStm3.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2234};
  modelica_boolean tmp416;
  static const MMC_DEFSTRINGLIT(tmp417,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: ");
  modelica_string tmp418;
  static int tmp419 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp419)
  {
    tmp416 = GreaterEq(data->localData[0]->realVars[230] /* MatStm3.compMolFlo[2,2] variable */,0.0);
    if(!tmp416)
    {
      tmp418 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[230] /* MatStm3.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp417),tmp418);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp419 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2235
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: " + String(MatStm3.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2235};
  modelica_boolean tmp420;
  static const MMC_DEFSTRINGLIT(tmp421,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: ");
  modelica_string tmp422;
  static int tmp423 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp423)
  {
    tmp420 = GreaterEq(data->localData[0]->realVars[231] /* MatStm3.compMolFlo[3,1] variable */,0.0);
    if(!tmp420)
    {
      tmp422 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[231] /* MatStm3.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp421),tmp422);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp423 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2236
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: " + String(MatStm3.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2236};
  modelica_boolean tmp424;
  static const MMC_DEFSTRINGLIT(tmp425,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: ");
  modelica_string tmp426;
  static int tmp427 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp427)
  {
    tmp424 = GreaterEq(data->localData[0]->realVars[232] /* MatStm3.compMolFlo[3,2] variable */,0.0);
    if(!tmp424)
    {
      tmp426 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[232] /* MatStm3.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp425),tmp426);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp427 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2237
type: ALGORITHM

  assert(MatStm3.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: " + String(MatStm3.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2237};
  modelica_boolean tmp428;
  static const MMC_DEFSTRINGLIT(tmp429,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: ");
  modelica_string tmp430;
  static int tmp431 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp431)
  {
    tmp428 = GreaterEq(data->localData[0]->realVars[205] /* MatStm3.compMasFlo[2,1] variable */,0.0);
    if(!tmp428)
    {
      tmp430 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[205] /* MatStm3.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp429),tmp430);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: " + String(MatStm3.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2238};
  modelica_boolean tmp432;
  static const MMC_DEFSTRINGLIT(tmp433,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: ");
  modelica_string tmp434;
  static int tmp435 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp435)
  {
    tmp432 = GreaterEq(data->localData[0]->realVars[206] /* MatStm3.compMasFlo[2,2] variable */,0.0);
    if(!tmp432)
    {
      tmp434 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[206] /* MatStm3.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp433),tmp434);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: " + String(MatStm3.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2239};
  modelica_boolean tmp436;
  static const MMC_DEFSTRINGLIT(tmp437,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: ");
  modelica_string tmp438;
  static int tmp439 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp439)
  {
    tmp436 = GreaterEq(data->localData[0]->realVars[207] /* MatStm3.compMasFlo[3,1] variable */,0.0);
    if(!tmp436)
    {
      tmp438 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[207] /* MatStm3.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp437),tmp438);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: " + String(MatStm3.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2240};
  modelica_boolean tmp440;
  static const MMC_DEFSTRINGLIT(tmp441,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: ");
  modelica_string tmp442;
  static int tmp443 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp443)
  {
    tmp440 = GreaterEq(data->localData[0]->realVars[208] /* MatStm3.compMasFlo[3,2] variable */,0.0);
    if(!tmp440)
    {
      tmp442 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[208] /* MatStm3.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp441),tmp442);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",11,3,11,144,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",11,3,11,144,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Files/Thermodynamic_Packages/package.mo",6,5,6,77,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Files/Thermodynamic_Packages/package.mo",6,5,6,77,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",11,3,11,144,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",11,3,11,144,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Files/Thermodynamic_Packages/package.mo",6,5,6,77,0};
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
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Files/Thermodynamic_Packages/package.mo",6,5,6,77,0};
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

  assert(MatStm1.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: " + String(MatStm1.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2140};
  modelica_boolean tmp796;
  static const MMC_DEFSTRINGLIT(tmp797,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: ");
  modelica_string tmp798;
  static int tmp799 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp799)
  {
    tmp796 = GreaterEq(data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */,0.0);
    if(!tmp796)
    {
      tmp798 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp797),tmp798);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,1], has value: " + String(MatStm1.compMolFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2139};
  modelica_boolean tmp800;
  static const MMC_DEFSTRINGLIT(tmp801,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,1], has value: ");
  modelica_string tmp802;
  static int tmp803 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp803)
  {
    tmp800 = GreaterEq(data->localData[0]->realVars[46] /* MatStm1.compMolFlo[1,1] variable */,0.0);
    if(!tmp800)
    {
      tmp802 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[46] /* MatStm1.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp801),tmp802);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: " + String(MatStm1.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2138};
  modelica_boolean tmp804;
  static const MMC_DEFSTRINGLIT(tmp805,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: ");
  modelica_string tmp806;
  static int tmp807 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp807)
  {
    tmp804 = GreaterEq(data->localData[0]->realVars[23] /* MatStm1.compMasFlo[1,2] variable */,0.0);
    if(!tmp804)
    {
      tmp806 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[23] /* MatStm1.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp805),tmp806);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,2], has value: " + String(MatStm1.compMolFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2137};
  modelica_boolean tmp808;
  static const MMC_DEFSTRINGLIT(tmp809,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,2], has value: ");
  modelica_string tmp810;
  static int tmp811 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp811)
  {
    tmp808 = GreaterEq(data->localData[0]->realVars[47] /* MatStm1.compMolFlo[1,2] variable */,0.0);
    if(!tmp808)
    {
      tmp810 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[47] /* MatStm1.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp809),tmp810);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

