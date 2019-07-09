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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Unit_Operations/Splitter.mo",7,3,7,799,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Unit_Operations/Mixer.mo",13,3,13,430,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Unit_Operations/Mixer.mo",13,3,13,430,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Unit_Operations/Splitter.mo",7,3,7,799,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Unit_Operations/Splitter.mo",7,3,7,799,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Unit_Operations/Splitter.mo",7,3,7,799,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Unit_Operations/Splitter.mo",7,3,7,799,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Unit_Operations/Splitter.mo",7,3,7,799,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",11,3,11,144,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",11,3,11,144,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Files/Thermodynamic_Packages/package.mo",6,5,6,77,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Files/Thermodynamic_Packages/package.mo",6,5,6,77,0};
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

  assert(MatStm2.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.Pbubl, has value: " + String(MatStm2.Pbubl, "g"));
*/
void Flowsheet_eqFunction_2183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2183};
  modelica_boolean tmp186;
  static const MMC_DEFSTRINGLIT(tmp187,68,"Variable violating min constraint: 0.0 <= MatStm2.Pbubl, has value: ");
  modelica_string tmp188;
  static int tmp189 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp189)
  {
    tmp186 = GreaterEq(data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */,0.0);
    if(!tmp186)
    {
      tmp188 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[107] /* MatStm2.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp187),tmp188);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",11,3,11,144,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.Pdew, has value: " + String(MatStm2.Pdew, "g"));
*/
void Flowsheet_eqFunction_2184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2184};
  modelica_boolean tmp190;
  static const MMC_DEFSTRINGLIT(tmp191,67,"Variable violating min constraint: 0.0 <= MatStm2.Pdew, has value: ");
  modelica_string tmp192;
  static int tmp193 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp193)
  {
    tmp190 = GreaterEq(data->localData[0]->realVars[108] /* MatStm2.Pdew variable */,0.0);
    if(!tmp190)
    {
      tmp192 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[108] /* MatStm2.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp191),tmp192);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",11,3,11,144,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp193 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2185
type: ALGORITHM

  assert(MatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: " + String(MatStm2.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2185};
  modelica_boolean tmp194;
  modelica_boolean tmp195;
  static const MMC_DEFSTRINGLIT(tmp196,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp197;
  static int tmp198 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp198)
  {
    tmp194 = GreaterEq(data->localData[0]->realVars[160] /* MatStm2.liqPhasMolFrac variable */,0.0);
    tmp195 = LessEq(data->localData[0]->realVars[160] /* MatStm2.liqPhasMolFrac variable */,1.0);
    if(!(tmp194 && tmp195))
    {
      tmp197 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[160] /* MatStm2.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp196),tmp197);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp198 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2186
type: ALGORITHM

  assert(MatStm2.vapPhasMolFrac >= 0.0 and MatStm2.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMolFrac <= 1.0, has value: " + String(MatStm2.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2186};
  modelica_boolean tmp199;
  modelica_boolean tmp200;
  static const MMC_DEFSTRINGLIT(tmp201,88,"Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp202;
  static int tmp203 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp203)
  {
    tmp199 = GreaterEq(data->localData[0]->realVars[187] /* MatStm2.vapPhasMolFrac variable */,0.0);
    tmp200 = LessEq(data->localData[0]->realVars[187] /* MatStm2.vapPhasMolFrac variable */,1.0);
    if(!(tmp199 && tmp200))
    {
      tmp202 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[187] /* MatStm2.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp201),tmp202);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.vapPhasMolFrac >= 0.0 and MatStm2.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: " + String(MatStm2.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2187};
  modelica_boolean tmp204;
  modelica_boolean tmp205;
  static const MMC_DEFSTRINGLIT(tmp206,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp207;
  static int tmp208 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp208)
  {
    tmp204 = GreaterEq(data->localData[0]->realVars[159] /* MatStm2.liqPhasMasFrac variable */,0.0);
    tmp205 = LessEq(data->localData[0]->realVars[159] /* MatStm2.liqPhasMasFrac variable */,1.0);
    if(!(tmp204 && tmp205))
    {
      tmp207 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[159] /* MatStm2.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp206),tmp207);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: " + String(MatStm2.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2188};
  modelica_boolean tmp209;
  modelica_boolean tmp210;
  static const MMC_DEFSTRINGLIT(tmp211,88,"Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp212;
  static int tmp213 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp213)
  {
    tmp209 = GreaterEq(data->localData[0]->realVars[186] /* MatStm2.vapPhasMasFrac variable */,0.0);
    tmp210 = LessEq(data->localData[0]->realVars[186] /* MatStm2.vapPhasMasFrac variable */,1.0);
    if(!(tmp209 && tmp210))
    {
      tmp212 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[186] /* MatStm2.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp211),tmp212);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp213 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2189
type: ALGORITHM

  assert(MatStm2.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: " + String(MatStm2.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2189};
  modelica_boolean tmp214;
  static const MMC_DEFSTRINGLIT(tmp215,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: ");
  modelica_string tmp216;
  static int tmp217 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp217)
  {
    tmp214 = GreaterEq(data->localData[0]->realVars[184] /* MatStm2.totMolFlo[2] variable */,0.0);
    if(!tmp214)
    {
      tmp216 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[184] /* MatStm2.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp215),tmp216);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp217 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2190
type: ALGORITHM

  assert(MatStm2.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: " + String(MatStm2.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2190};
  modelica_boolean tmp218;
  static const MMC_DEFSTRINGLIT(tmp219,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: ");
  modelica_string tmp220;
  static int tmp221 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp221)
  {
    tmp218 = GreaterEq(data->localData[0]->realVars[185] /* MatStm2.totMolFlo[3] variable */,0.0);
    if(!tmp218)
    {
      tmp220 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[185] /* MatStm2.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp219),tmp220);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp221 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2191
type: ALGORITHM

  assert(MatStm2.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: " + String(MatStm2.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2191};
  modelica_boolean tmp222;
  static const MMC_DEFSTRINGLIT(tmp223,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: ");
  modelica_string tmp224;
  static int tmp225 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp225)
  {
    tmp222 = GreaterEq(data->localData[0]->realVars[181] /* MatStm2.totMasFlo[1] variable */,0.0);
    if(!tmp222)
    {
      tmp224 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[181] /* MatStm2.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp223),tmp224);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: " + String(MatStm2.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2192};
  modelica_boolean tmp226;
  static const MMC_DEFSTRINGLIT(tmp227,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: ");
  modelica_string tmp228;
  static int tmp229 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp229)
  {
    tmp226 = GreaterEq(data->localData[0]->realVars[182] /* MatStm2.totMasFlo[2] variable */,0.0);
    if(!tmp226)
    {
      tmp228 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[182] /* MatStm2.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp227),tmp228);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp229 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2193
type: ALGORITHM

  assert(MatStm2.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: " + String(MatStm2.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2193};
  modelica_boolean tmp230;
  static const MMC_DEFSTRINGLIT(tmp231,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: ");
  modelica_string tmp232;
  static int tmp233 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp233)
  {
    tmp230 = GreaterEq(data->localData[0]->realVars[183] /* MatStm2.totMasFlo[3] variable */,0.0);
    if(!tmp230)
    {
      tmp232 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[183] /* MatStm2.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp231),tmp232);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp233 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2194
type: ALGORITHM

  assert(MatStm2.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: " + String(MatStm2.MW[1], "g"));
*/
void Flowsheet_eqFunction_2194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2194};
  modelica_boolean tmp234;
  static const MMC_DEFSTRINGLIT(tmp235,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: ");
  modelica_string tmp236;
  static int tmp237 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp237)
  {
    tmp234 = GreaterEq(data->localData[0]->realVars[104] /* MatStm2.MW[1] variable */,0.0);
    if(!tmp234)
    {
      tmp236 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[104] /* MatStm2.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp235),tmp236);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: " + String(MatStm2.MW[2], "g"));
*/
void Flowsheet_eqFunction_2195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2195};
  modelica_boolean tmp238;
  static const MMC_DEFSTRINGLIT(tmp239,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: ");
  modelica_string tmp240;
  static int tmp241 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp241)
  {
    tmp238 = GreaterEq(data->localData[0]->realVars[105] /* MatStm2.MW[2] variable */,0.0);
    if(!tmp238)
    {
      tmp240 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[105] /* MatStm2.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp239),tmp240);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp241 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2196
type: ALGORITHM

  assert(MatStm2.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: " + String(MatStm2.MW[3], "g"));
*/
void Flowsheet_eqFunction_2196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2196};
  modelica_boolean tmp242;
  static const MMC_DEFSTRINGLIT(tmp243,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: ");
  modelica_string tmp244;
  static int tmp245 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp245)
  {
    tmp242 = GreaterEq(data->localData[0]->realVars[106] /* MatStm2.MW[3] variable */,0.0);
    if(!tmp242)
    {
      tmp244 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[106] /* MatStm2.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp243),tmp244);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp245 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2197
type: ALGORITHM

  assert(MatStm2.compMolFrac[1,1] >= 0.0 and MatStm2.compMolFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2197};
  modelica_boolean tmp246;
  modelica_boolean tmp247;
  static const MMC_DEFSTRINGLIT(tmp248,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp249;
  static int tmp250 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp250)
  {
    tmp246 = GreaterEq(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[1,1] variable */,0.0);
    tmp247 = LessEq(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[1,1] variable */,1.0);
    if(!(tmp246 && tmp247))
    {
      tmp249 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp248),tmp249);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[1,1] >= 0.0 and MatStm2.compMolFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp250 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2198
type: ALGORITHM

  assert(MatStm2.compMolFrac[1,2] >= 0.0 and MatStm2.compMolFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2198};
  modelica_boolean tmp251;
  modelica_boolean tmp252;
  static const MMC_DEFSTRINGLIT(tmp253,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp254;
  static int tmp255 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp255)
  {
    tmp251 = GreaterEq(data->localData[0]->realVars[142] /* MatStm2.compMolFrac[1,2] variable */,0.0);
    tmp252 = LessEq(data->localData[0]->realVars[142] /* MatStm2.compMolFrac[1,2] variable */,1.0);
    if(!(tmp251 && tmp252))
    {
      tmp254 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[142] /* MatStm2.compMolFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp253),tmp254);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[1,2] >= 0.0 and MatStm2.compMolFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp255 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2199
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2199};
  modelica_boolean tmp256;
  modelica_boolean tmp257;
  static const MMC_DEFSTRINGLIT(tmp258,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp259;
  static int tmp260 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp260)
  {
    tmp256 = GreaterEq(data->localData[0]->realVars[143] /* MatStm2.compMolFrac[2,1] variable */,0.0);
    tmp257 = LessEq(data->localData[0]->realVars[143] /* MatStm2.compMolFrac[2,1] variable */,1.0);
    if(!(tmp256 && tmp257))
    {
      tmp259 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[143] /* MatStm2.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp258),tmp259);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp260 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2200
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2200};
  modelica_boolean tmp261;
  modelica_boolean tmp262;
  static const MMC_DEFSTRINGLIT(tmp263,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp264;
  static int tmp265 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp265)
  {
    tmp261 = GreaterEq(data->localData[0]->realVars[144] /* MatStm2.compMolFrac[2,2] variable */,0.0);
    tmp262 = LessEq(data->localData[0]->realVars[144] /* MatStm2.compMolFrac[2,2] variable */,1.0);
    if(!(tmp261 && tmp262))
    {
      tmp264 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[144] /* MatStm2.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp263),tmp264);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp265 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2201
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2201};
  modelica_boolean tmp266;
  modelica_boolean tmp267;
  static const MMC_DEFSTRINGLIT(tmp268,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp269;
  static int tmp270 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp270)
  {
    tmp266 = GreaterEq(data->localData[0]->realVars[145] /* MatStm2.compMolFrac[3,1] variable */,0.0);
    tmp267 = LessEq(data->localData[0]->realVars[145] /* MatStm2.compMolFrac[3,1] variable */,1.0);
    if(!(tmp266 && tmp267))
    {
      tmp269 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[145] /* MatStm2.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp268),tmp269);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp270 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2202
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2202};
  modelica_boolean tmp271;
  modelica_boolean tmp272;
  static const MMC_DEFSTRINGLIT(tmp273,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp274;
  static int tmp275 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp275)
  {
    tmp271 = GreaterEq(data->localData[0]->realVars[146] /* MatStm2.compMolFrac[3,2] variable */,0.0);
    tmp272 = LessEq(data->localData[0]->realVars[146] /* MatStm2.compMolFrac[3,2] variable */,1.0);
    if(!(tmp271 && tmp272))
    {
      tmp274 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[146] /* MatStm2.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp273),tmp274);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2203};
  modelica_boolean tmp276;
  modelica_boolean tmp277;
  static const MMC_DEFSTRINGLIT(tmp278,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp279;
  static int tmp280 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp280)
  {
    tmp276 = GreaterEq(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[1,1] variable */,0.0);
    tmp277 = LessEq(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[1,1] variable */,1.0);
    if(!(tmp276 && tmp277))
    {
      tmp279 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp278),tmp279);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp280 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2204
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2204};
  modelica_boolean tmp281;
  modelica_boolean tmp282;
  static const MMC_DEFSTRINGLIT(tmp283,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp284;
  static int tmp285 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp285)
  {
    tmp281 = GreaterEq(data->localData[0]->realVars[118] /* MatStm2.compMasFrac[1,2] variable */,0.0);
    tmp282 = LessEq(data->localData[0]->realVars[118] /* MatStm2.compMasFrac[1,2] variable */,1.0);
    if(!(tmp281 && tmp282))
    {
      tmp284 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[118] /* MatStm2.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp283),tmp284);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp285 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2205
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2205};
  modelica_boolean tmp286;
  modelica_boolean tmp287;
  static const MMC_DEFSTRINGLIT(tmp288,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp289;
  static int tmp290 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp290)
  {
    tmp286 = GreaterEq(data->localData[0]->realVars[119] /* MatStm2.compMasFrac[2,1] variable */,0.0);
    tmp287 = LessEq(data->localData[0]->realVars[119] /* MatStm2.compMasFrac[2,1] variable */,1.0);
    if(!(tmp286 && tmp287))
    {
      tmp289 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[119] /* MatStm2.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp288),tmp289);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2206};
  modelica_boolean tmp291;
  modelica_boolean tmp292;
  static const MMC_DEFSTRINGLIT(tmp293,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp294;
  static int tmp295 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp295)
  {
    tmp291 = GreaterEq(data->localData[0]->realVars[120] /* MatStm2.compMasFrac[2,2] variable */,0.0);
    tmp292 = LessEq(data->localData[0]->realVars[120] /* MatStm2.compMasFrac[2,2] variable */,1.0);
    if(!(tmp291 && tmp292))
    {
      tmp294 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[120] /* MatStm2.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp293),tmp294);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2207};
  modelica_boolean tmp296;
  modelica_boolean tmp297;
  static const MMC_DEFSTRINGLIT(tmp298,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp299;
  static int tmp300 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp300)
  {
    tmp296 = GreaterEq(data->localData[0]->realVars[121] /* MatStm2.compMasFrac[3,1] variable */,0.0);
    tmp297 = LessEq(data->localData[0]->realVars[121] /* MatStm2.compMasFrac[3,1] variable */,1.0);
    if(!(tmp296 && tmp297))
    {
      tmp299 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[121] /* MatStm2.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp298),tmp299);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp300 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2208
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2208};
  modelica_boolean tmp301;
  modelica_boolean tmp302;
  static const MMC_DEFSTRINGLIT(tmp303,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp304;
  static int tmp305 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp305)
  {
    tmp301 = GreaterEq(data->localData[0]->realVars[122] /* MatStm2.compMasFrac[3,2] variable */,0.0);
    tmp302 = LessEq(data->localData[0]->realVars[122] /* MatStm2.compMasFrac[3,2] variable */,1.0);
    if(!(tmp301 && tmp302))
    {
      tmp304 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[122] /* MatStm2.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp303),tmp304);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp305 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2209
type: ALGORITHM

  assert(MatStm2.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,1], has value: " + String(MatStm2.compMolFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2209};
  modelica_boolean tmp306;
  static const MMC_DEFSTRINGLIT(tmp307,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,1], has value: ");
  modelica_string tmp308;
  static int tmp309 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp309)
  {
    tmp306 = GreaterEq(data->localData[0]->realVars[135] /* MatStm2.compMolFlo[1,1] variable */,0.0);
    if(!tmp306)
    {
      tmp308 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[135] /* MatStm2.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp307),tmp308);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp309 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2210
type: ALGORITHM

  assert(MatStm2.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,2], has value: " + String(MatStm2.compMolFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2210};
  modelica_boolean tmp310;
  static const MMC_DEFSTRINGLIT(tmp311,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,2], has value: ");
  modelica_string tmp312;
  static int tmp313 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp313)
  {
    tmp310 = GreaterEq(data->localData[0]->realVars[136] /* MatStm2.compMolFlo[1,2] variable */,0.0);
    if(!tmp310)
    {
      tmp312 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[136] /* MatStm2.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp311),tmp312);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp313 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2211
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: " + String(MatStm2.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2211};
  modelica_boolean tmp314;
  static const MMC_DEFSTRINGLIT(tmp315,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: ");
  modelica_string tmp316;
  static int tmp317 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp317)
  {
    tmp314 = GreaterEq(data->localData[0]->realVars[137] /* MatStm2.compMolFlo[2,1] variable */,0.0);
    if(!tmp314)
    {
      tmp316 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[137] /* MatStm2.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp315),tmp316);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp317 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2212
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: " + String(MatStm2.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2212};
  modelica_boolean tmp318;
  static const MMC_DEFSTRINGLIT(tmp319,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: ");
  modelica_string tmp320;
  static int tmp321 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp321)
  {
    tmp318 = GreaterEq(data->localData[0]->realVars[138] /* MatStm2.compMolFlo[2,2] variable */,0.0);
    if(!tmp318)
    {
      tmp320 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[138] /* MatStm2.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp319),tmp320);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp321 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2213
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: " + String(MatStm2.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2213};
  modelica_boolean tmp322;
  static const MMC_DEFSTRINGLIT(tmp323,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: ");
  modelica_string tmp324;
  static int tmp325 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp325)
  {
    tmp322 = GreaterEq(data->localData[0]->realVars[139] /* MatStm2.compMolFlo[3,1] variable */,0.0);
    if(!tmp322)
    {
      tmp324 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[139] /* MatStm2.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp323),tmp324);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp325 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2214
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: " + String(MatStm2.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2214};
  modelica_boolean tmp326;
  static const MMC_DEFSTRINGLIT(tmp327,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: ");
  modelica_string tmp328;
  static int tmp329 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp329)
  {
    tmp326 = GreaterEq(data->localData[0]->realVars[140] /* MatStm2.compMolFlo[3,2] variable */,0.0);
    if(!tmp326)
    {
      tmp328 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[140] /* MatStm2.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp327),tmp328);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,1], has value: " + String(MatStm2.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2215};
  modelica_boolean tmp330;
  static const MMC_DEFSTRINGLIT(tmp331,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,1], has value: ");
  modelica_string tmp332;
  static int tmp333 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp333)
  {
    tmp330 = GreaterEq(data->localData[0]->realVars[111] /* MatStm2.compMasFlo[1,1] variable */,0.0);
    if(!tmp330)
    {
      tmp332 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[111] /* MatStm2.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp331),tmp332);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,2], has value: " + String(MatStm2.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2216};
  modelica_boolean tmp334;
  static const MMC_DEFSTRINGLIT(tmp335,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,2], has value: ");
  modelica_string tmp336;
  static int tmp337 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp337)
  {
    tmp334 = GreaterEq(data->localData[0]->realVars[112] /* MatStm2.compMasFlo[1,2] variable */,0.0);
    if(!tmp334)
    {
      tmp336 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[112] /* MatStm2.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp335),tmp336);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: " + String(MatStm2.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2217};
  modelica_boolean tmp338;
  static const MMC_DEFSTRINGLIT(tmp339,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: ");
  modelica_string tmp340;
  static int tmp341 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp341)
  {
    tmp338 = GreaterEq(data->localData[0]->realVars[113] /* MatStm2.compMasFlo[2,1] variable */,0.0);
    if(!tmp338)
    {
      tmp340 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[113] /* MatStm2.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp339),tmp340);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: " + String(MatStm2.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2218};
  modelica_boolean tmp342;
  static const MMC_DEFSTRINGLIT(tmp343,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: ");
  modelica_string tmp344;
  static int tmp345 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp345)
  {
    tmp342 = GreaterEq(data->localData[0]->realVars[114] /* MatStm2.compMasFlo[2,2] variable */,0.0);
    if(!tmp342)
    {
      tmp344 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[114] /* MatStm2.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp343),tmp344);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: " + String(MatStm2.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2219};
  modelica_boolean tmp346;
  static const MMC_DEFSTRINGLIT(tmp347,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: ");
  modelica_string tmp348;
  static int tmp349 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp349)
  {
    tmp346 = GreaterEq(data->localData[0]->realVars[115] /* MatStm2.compMasFlo[3,1] variable */,0.0);
    if(!tmp346)
    {
      tmp348 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[115] /* MatStm2.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp347),tmp348);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: " + String(MatStm2.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2220};
  modelica_boolean tmp350;
  static const MMC_DEFSTRINGLIT(tmp351,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: ");
  modelica_string tmp352;
  static int tmp353 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp353)
  {
    tmp350 = GreaterEq(data->localData[0]->realVars[116] /* MatStm2.compMasFlo[3,2] variable */,0.0);
    if(!tmp350)
    {
      tmp352 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[116] /* MatStm2.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp351),tmp352);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.K[1], has value: " + String(MatStm2.K[1], "g"));
*/
void Flowsheet_eqFunction_2221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2221};
  modelica_boolean tmp354;
  static const MMC_DEFSTRINGLIT(tmp355,67,"Variable violating min constraint: 0.0 <= MatStm2.K[1], has value: ");
  modelica_string tmp356;
  static int tmp357 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp357)
  {
    tmp354 = GreaterEq(data->localData[0]->realVars[102] /* MatStm2.K[1] variable */,0.0);
    if(!tmp354)
    {
      tmp356 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[102] /* MatStm2.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp355),tmp356);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Files/Thermodynamic_Packages/package.mo",6,5,6,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.K[2], has value: " + String(MatStm2.K[2], "g"));
*/
void Flowsheet_eqFunction_2222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2222};
  modelica_boolean tmp358;
  static const MMC_DEFSTRINGLIT(tmp359,67,"Variable violating min constraint: 0.0 <= MatStm2.K[2], has value: ");
  modelica_string tmp360;
  static int tmp361 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp361)
  {
    tmp358 = GreaterEq(data->localData[0]->realVars[103] /* MatStm2.K[2] variable */,0.0);
    if(!tmp358)
    {
      tmp360 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[103] /* MatStm2.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp359),tmp360);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Files/Thermodynamic_Packages/package.mo",6,5,6,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.Pbubl, has value: " + String(MatStm3.Pbubl, "g"));
*/
void Flowsheet_eqFunction_2223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2223};
  modelica_boolean tmp362;
  static const MMC_DEFSTRINGLIT(tmp363,68,"Variable violating min constraint: 0.0 <= MatStm3.Pbubl, has value: ");
  modelica_string tmp364;
  static int tmp365 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp365)
  {
    tmp362 = GreaterEq(data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */,0.0);
    if(!tmp362)
    {
      tmp364 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[195] /* MatStm3.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp363),tmp364);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",11,3,11,144,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp365 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2224
type: ALGORITHM

  assert(MatStm3.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.Pdew, has value: " + String(MatStm3.Pdew, "g"));
*/
void Flowsheet_eqFunction_2224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2224};
  modelica_boolean tmp366;
  static const MMC_DEFSTRINGLIT(tmp367,67,"Variable violating min constraint: 0.0 <= MatStm3.Pdew, has value: ");
  modelica_string tmp368;
  static int tmp369 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp369)
  {
    tmp366 = GreaterEq(data->localData[0]->realVars[196] /* MatStm3.Pdew variable */,0.0);
    if(!tmp366)
    {
      tmp368 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[196] /* MatStm3.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp367),tmp368);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",11,3,11,144,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp369 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2225
type: ALGORITHM

  assert(MatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: " + String(MatStm3.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2225};
  modelica_boolean tmp370;
  modelica_boolean tmp371;
  static const MMC_DEFSTRINGLIT(tmp372,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp373;
  static int tmp374 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp374)
  {
    tmp370 = GreaterEq(data->localData[0]->realVars[248] /* MatStm3.liqPhasMolFrac variable */,0.0);
    tmp371 = LessEq(data->localData[0]->realVars[248] /* MatStm3.liqPhasMolFrac variable */,1.0);
    if(!(tmp370 && tmp371))
    {
      tmp373 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[248] /* MatStm3.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp372),tmp373);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp374 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2226
type: ALGORITHM

  assert(MatStm3.vapPhasMolFrac >= 0.0 and MatStm3.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMolFrac <= 1.0, has value: " + String(MatStm3.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2226};
  modelica_boolean tmp375;
  modelica_boolean tmp376;
  static const MMC_DEFSTRINGLIT(tmp377,88,"Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp378;
  static int tmp379 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp379)
  {
    tmp375 = GreaterEq(data->localData[0]->realVars[275] /* MatStm3.vapPhasMolFrac variable */,0.0);
    tmp376 = LessEq(data->localData[0]->realVars[275] /* MatStm3.vapPhasMolFrac variable */,1.0);
    if(!(tmp375 && tmp376))
    {
      tmp378 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[275] /* MatStm3.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp377),tmp378);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.vapPhasMolFrac >= 0.0 and MatStm3.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: " + String(MatStm3.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2227};
  modelica_boolean tmp380;
  modelica_boolean tmp381;
  static const MMC_DEFSTRINGLIT(tmp382,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp383;
  static int tmp384 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp384)
  {
    tmp380 = GreaterEq(data->localData[0]->realVars[247] /* MatStm3.liqPhasMasFrac variable */,0.0);
    tmp381 = LessEq(data->localData[0]->realVars[247] /* MatStm3.liqPhasMasFrac variable */,1.0);
    if(!(tmp380 && tmp381))
    {
      tmp383 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[247] /* MatStm3.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp382),tmp383);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp384 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2228
type: ALGORITHM

  assert(MatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: " + String(MatStm3.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2228};
  modelica_boolean tmp385;
  modelica_boolean tmp386;
  static const MMC_DEFSTRINGLIT(tmp387,88,"Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp388;
  static int tmp389 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp389)
  {
    tmp385 = GreaterEq(data->localData[0]->realVars[274] /* MatStm3.vapPhasMasFrac variable */,0.0);
    tmp386 = LessEq(data->localData[0]->realVars[274] /* MatStm3.vapPhasMasFrac variable */,1.0);
    if(!(tmp385 && tmp386))
    {
      tmp388 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[274] /* MatStm3.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp387),tmp388);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp389 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2229
type: ALGORITHM

  assert(MatStm3.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: " + String(MatStm3.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2229};
  modelica_boolean tmp390;
  static const MMC_DEFSTRINGLIT(tmp391,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: ");
  modelica_string tmp392;
  static int tmp393 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp393)
  {
    tmp390 = GreaterEq(data->localData[0]->realVars[272] /* MatStm3.totMolFlo[2] variable */,0.0);
    if(!tmp390)
    {
      tmp392 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[272] /* MatStm3.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp391),tmp392);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp393 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2230
type: ALGORITHM

  assert(MatStm3.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: " + String(MatStm3.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2230};
  modelica_boolean tmp394;
  static const MMC_DEFSTRINGLIT(tmp395,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: ");
  modelica_string tmp396;
  static int tmp397 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp397)
  {
    tmp394 = GreaterEq(data->localData[0]->realVars[273] /* MatStm3.totMolFlo[3] variable */,0.0);
    if(!tmp394)
    {
      tmp396 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[273] /* MatStm3.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp395),tmp396);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp397 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2231
type: ALGORITHM

  assert(MatStm3.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: " + String(MatStm3.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2231};
  modelica_boolean tmp398;
  static const MMC_DEFSTRINGLIT(tmp399,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: ");
  modelica_string tmp400;
  static int tmp401 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp401)
  {
    tmp398 = GreaterEq(data->localData[0]->realVars[269] /* MatStm3.totMasFlo[1] variable */,0.0);
    if(!tmp398)
    {
      tmp400 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[269] /* MatStm3.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp399),tmp400);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: " + String(MatStm3.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2232};
  modelica_boolean tmp402;
  static const MMC_DEFSTRINGLIT(tmp403,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: ");
  modelica_string tmp404;
  static int tmp405 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp405)
  {
    tmp402 = GreaterEq(data->localData[0]->realVars[270] /* MatStm3.totMasFlo[2] variable */,0.0);
    if(!tmp402)
    {
      tmp404 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[270] /* MatStm3.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp403),tmp404);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp405 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2233
type: ALGORITHM

  assert(MatStm3.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: " + String(MatStm3.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2233};
  modelica_boolean tmp406;
  static const MMC_DEFSTRINGLIT(tmp407,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: ");
  modelica_string tmp408;
  static int tmp409 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp409)
  {
    tmp406 = GreaterEq(data->localData[0]->realVars[271] /* MatStm3.totMasFlo[3] variable */,0.0);
    if(!tmp406)
    {
      tmp408 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[271] /* MatStm3.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp407),tmp408);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp409 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2234
type: ALGORITHM

  assert(MatStm3.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: " + String(MatStm3.MW[1], "g"));
*/
void Flowsheet_eqFunction_2234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2234};
  modelica_boolean tmp410;
  static const MMC_DEFSTRINGLIT(tmp411,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: ");
  modelica_string tmp412;
  static int tmp413 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp413)
  {
    tmp410 = GreaterEq(data->localData[0]->realVars[192] /* MatStm3.MW[1] variable */,0.0);
    if(!tmp410)
    {
      tmp412 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[192] /* MatStm3.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp411),tmp412);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp413 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2235
type: ALGORITHM

  assert(MatStm3.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: " + String(MatStm3.MW[2], "g"));
*/
void Flowsheet_eqFunction_2235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2235};
  modelica_boolean tmp414;
  static const MMC_DEFSTRINGLIT(tmp415,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: ");
  modelica_string tmp416;
  static int tmp417 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp417)
  {
    tmp414 = GreaterEq(data->localData[0]->realVars[193] /* MatStm3.MW[2] variable */,0.0);
    if(!tmp414)
    {
      tmp416 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[193] /* MatStm3.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp415),tmp416);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp417 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2236
type: ALGORITHM

  assert(MatStm3.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: " + String(MatStm3.MW[3], "g"));
*/
void Flowsheet_eqFunction_2236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2236};
  modelica_boolean tmp418;
  static const MMC_DEFSTRINGLIT(tmp419,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: ");
  modelica_string tmp420;
  static int tmp421 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp421)
  {
    tmp418 = GreaterEq(data->localData[0]->realVars[194] /* MatStm3.MW[3] variable */,0.0);
    if(!tmp418)
    {
      tmp420 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[194] /* MatStm3.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp419),tmp420);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp421 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2237
type: ALGORITHM

  assert(MatStm3.compMolFrac[1,1] >= 0.0 and MatStm3.compMolFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[1,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2237};
  modelica_boolean tmp422;
  modelica_boolean tmp423;
  static const MMC_DEFSTRINGLIT(tmp424,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp425;
  static int tmp426 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp426)
  {
    tmp422 = GreaterEq(data->localData[0]->realVars[229] /* MatStm3.compMolFrac[1,1] variable */,0.0);
    tmp423 = LessEq(data->localData[0]->realVars[229] /* MatStm3.compMolFrac[1,1] variable */,1.0);
    if(!(tmp422 && tmp423))
    {
      tmp425 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[229] /* MatStm3.compMolFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp424),tmp425);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[1,1] >= 0.0 and MatStm3.compMolFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp426 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2238
type: ALGORITHM

  assert(MatStm3.compMolFrac[1,2] >= 0.0 and MatStm3.compMolFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[1,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2238};
  modelica_boolean tmp427;
  modelica_boolean tmp428;
  static const MMC_DEFSTRINGLIT(tmp429,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp430;
  static int tmp431 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp431)
  {
    tmp427 = GreaterEq(data->localData[0]->realVars[230] /* MatStm3.compMolFrac[1,2] variable */,0.0);
    tmp428 = LessEq(data->localData[0]->realVars[230] /* MatStm3.compMolFrac[1,2] variable */,1.0);
    if(!(tmp427 && tmp428))
    {
      tmp430 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[230] /* MatStm3.compMolFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp429),tmp430);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[1,2] >= 0.0 and MatStm3.compMolFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp431 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2239
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2239};
  modelica_boolean tmp432;
  modelica_boolean tmp433;
  static const MMC_DEFSTRINGLIT(tmp434,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp435;
  static int tmp436 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp436)
  {
    tmp432 = GreaterEq(data->localData[0]->realVars[231] /* MatStm3.compMolFrac[2,1] variable */,0.0);
    tmp433 = LessEq(data->localData[0]->realVars[231] /* MatStm3.compMolFrac[2,1] variable */,1.0);
    if(!(tmp432 && tmp433))
    {
      tmp435 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[231] /* MatStm3.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp434),tmp435);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp436 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2240
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2240};
  modelica_boolean tmp437;
  modelica_boolean tmp438;
  static const MMC_DEFSTRINGLIT(tmp439,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp440;
  static int tmp441 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp441)
  {
    tmp437 = GreaterEq(data->localData[0]->realVars[232] /* MatStm3.compMolFrac[2,2] variable */,0.0);
    tmp438 = LessEq(data->localData[0]->realVars[232] /* MatStm3.compMolFrac[2,2] variable */,1.0);
    if(!(tmp437 && tmp438))
    {
      tmp440 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[232] /* MatStm3.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp439),tmp440);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp441 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2241
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2241};
  modelica_boolean tmp442;
  modelica_boolean tmp443;
  static const MMC_DEFSTRINGLIT(tmp444,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp445;
  static int tmp446 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp446)
  {
    tmp442 = GreaterEq(data->localData[0]->realVars[233] /* MatStm3.compMolFrac[3,1] variable */,0.0);
    tmp443 = LessEq(data->localData[0]->realVars[233] /* MatStm3.compMolFrac[3,1] variable */,1.0);
    if(!(tmp442 && tmp443))
    {
      tmp445 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[233] /* MatStm3.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp444),tmp445);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp446 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2242
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2242};
  modelica_boolean tmp447;
  modelica_boolean tmp448;
  static const MMC_DEFSTRINGLIT(tmp449,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp450;
  static int tmp451 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp451)
  {
    tmp447 = GreaterEq(data->localData[0]->realVars[234] /* MatStm3.compMolFrac[3,2] variable */,0.0);
    tmp448 = LessEq(data->localData[0]->realVars[234] /* MatStm3.compMolFrac[3,2] variable */,1.0);
    if(!(tmp447 && tmp448))
    {
      tmp450 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[234] /* MatStm3.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp449),tmp450);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2243};
  modelica_boolean tmp452;
  modelica_boolean tmp453;
  static const MMC_DEFSTRINGLIT(tmp454,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp455;
  static int tmp456 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp456)
  {
    tmp452 = GreaterEq(data->localData[0]->realVars[205] /* MatStm3.compMasFrac[1,1] variable */,0.0);
    tmp453 = LessEq(data->localData[0]->realVars[205] /* MatStm3.compMasFrac[1,1] variable */,1.0);
    if(!(tmp452 && tmp453))
    {
      tmp455 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[205] /* MatStm3.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp454),tmp455);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2244};
  modelica_boolean tmp457;
  modelica_boolean tmp458;
  static const MMC_DEFSTRINGLIT(tmp459,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp460;
  static int tmp461 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp461)
  {
    tmp457 = GreaterEq(data->localData[0]->realVars[206] /* MatStm3.compMasFrac[1,2] variable */,0.0);
    tmp458 = LessEq(data->localData[0]->realVars[206] /* MatStm3.compMasFrac[1,2] variable */,1.0);
    if(!(tmp457 && tmp458))
    {
      tmp460 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[206] /* MatStm3.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp459),tmp460);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2245};
  modelica_boolean tmp462;
  modelica_boolean tmp463;
  static const MMC_DEFSTRINGLIT(tmp464,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp465;
  static int tmp466 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp466)
  {
    tmp462 = GreaterEq(data->localData[0]->realVars[207] /* MatStm3.compMasFrac[2,1] variable */,0.0);
    tmp463 = LessEq(data->localData[0]->realVars[207] /* MatStm3.compMasFrac[2,1] variable */,1.0);
    if(!(tmp462 && tmp463))
    {
      tmp465 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[207] /* MatStm3.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp464),tmp465);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2246};
  modelica_boolean tmp467;
  modelica_boolean tmp468;
  static const MMC_DEFSTRINGLIT(tmp469,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp470;
  static int tmp471 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp471)
  {
    tmp467 = GreaterEq(data->localData[0]->realVars[208] /* MatStm3.compMasFrac[2,2] variable */,0.0);
    tmp468 = LessEq(data->localData[0]->realVars[208] /* MatStm3.compMasFrac[2,2] variable */,1.0);
    if(!(tmp467 && tmp468))
    {
      tmp470 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[208] /* MatStm3.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp469),tmp470);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2247};
  modelica_boolean tmp472;
  modelica_boolean tmp473;
  static const MMC_DEFSTRINGLIT(tmp474,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp475;
  static int tmp476 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp476)
  {
    tmp472 = GreaterEq(data->localData[0]->realVars[209] /* MatStm3.compMasFrac[3,1] variable */,0.0);
    tmp473 = LessEq(data->localData[0]->realVars[209] /* MatStm3.compMasFrac[3,1] variable */,1.0);
    if(!(tmp472 && tmp473))
    {
      tmp475 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[209] /* MatStm3.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp474),tmp475);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp476 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2248
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2248};
  modelica_boolean tmp477;
  modelica_boolean tmp478;
  static const MMC_DEFSTRINGLIT(tmp479,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp480;
  static int tmp481 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp481)
  {
    tmp477 = GreaterEq(data->localData[0]->realVars[210] /* MatStm3.compMasFrac[3,2] variable */,0.0);
    tmp478 = LessEq(data->localData[0]->realVars[210] /* MatStm3.compMasFrac[3,2] variable */,1.0);
    if(!(tmp477 && tmp478))
    {
      tmp480 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[210] /* MatStm3.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp479),tmp480);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp481 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2249
type: ALGORITHM

  assert(MatStm3.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,1], has value: " + String(MatStm3.compMolFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2249};
  modelica_boolean tmp482;
  static const MMC_DEFSTRINGLIT(tmp483,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,1], has value: ");
  modelica_string tmp484;
  static int tmp485 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp485)
  {
    tmp482 = GreaterEq(data->localData[0]->realVars[223] /* MatStm3.compMolFlo[1,1] variable */,0.0);
    if(!tmp482)
    {
      tmp484 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[223] /* MatStm3.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp483),tmp484);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp485 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2250
type: ALGORITHM

  assert(MatStm3.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,2], has value: " + String(MatStm3.compMolFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2250};
  modelica_boolean tmp486;
  static const MMC_DEFSTRINGLIT(tmp487,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,2], has value: ");
  modelica_string tmp488;
  static int tmp489 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp489)
  {
    tmp486 = GreaterEq(data->localData[0]->realVars[224] /* MatStm3.compMolFlo[1,2] variable */,0.0);
    if(!tmp486)
    {
      tmp488 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[224] /* MatStm3.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp487),tmp488);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp489 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2251
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: " + String(MatStm3.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2251};
  modelica_boolean tmp490;
  static const MMC_DEFSTRINGLIT(tmp491,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: ");
  modelica_string tmp492;
  static int tmp493 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp493)
  {
    tmp490 = GreaterEq(data->localData[0]->realVars[225] /* MatStm3.compMolFlo[2,1] variable */,0.0);
    if(!tmp490)
    {
      tmp492 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[225] /* MatStm3.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp491),tmp492);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp493 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2252
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: " + String(MatStm3.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2252};
  modelica_boolean tmp494;
  static const MMC_DEFSTRINGLIT(tmp495,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: ");
  modelica_string tmp496;
  static int tmp497 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp497)
  {
    tmp494 = GreaterEq(data->localData[0]->realVars[226] /* MatStm3.compMolFlo[2,2] variable */,0.0);
    if(!tmp494)
    {
      tmp496 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[226] /* MatStm3.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp495),tmp496);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp497 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2253
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: " + String(MatStm3.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2253};
  modelica_boolean tmp498;
  static const MMC_DEFSTRINGLIT(tmp499,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: ");
  modelica_string tmp500;
  static int tmp501 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp501)
  {
    tmp498 = GreaterEq(data->localData[0]->realVars[227] /* MatStm3.compMolFlo[3,1] variable */,0.0);
    if(!tmp498)
    {
      tmp500 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[227] /* MatStm3.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp499),tmp500);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp501 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2254
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: " + String(MatStm3.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2254};
  modelica_boolean tmp502;
  static const MMC_DEFSTRINGLIT(tmp503,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: ");
  modelica_string tmp504;
  static int tmp505 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp505)
  {
    tmp502 = GreaterEq(data->localData[0]->realVars[228] /* MatStm3.compMolFlo[3,2] variable */,0.0);
    if(!tmp502)
    {
      tmp504 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[228] /* MatStm3.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp503),tmp504);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp505 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2255
type: ALGORITHM

  assert(MatStm3.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,1], has value: " + String(MatStm3.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2255};
  modelica_boolean tmp506;
  static const MMC_DEFSTRINGLIT(tmp507,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,1], has value: ");
  modelica_string tmp508;
  static int tmp509 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp509)
  {
    tmp506 = GreaterEq(data->localData[0]->realVars[199] /* MatStm3.compMasFlo[1,1] variable */,0.0);
    if(!tmp506)
    {
      tmp508 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[199] /* MatStm3.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp507),tmp508);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp509 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2256
type: ALGORITHM

  assert(MatStm3.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,2], has value: " + String(MatStm3.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2256};
  modelica_boolean tmp510;
  static const MMC_DEFSTRINGLIT(tmp511,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,2], has value: ");
  modelica_string tmp512;
  static int tmp513 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp513)
  {
    tmp510 = GreaterEq(data->localData[0]->realVars[200] /* MatStm3.compMasFlo[1,2] variable */,0.0);
    if(!tmp510)
    {
      tmp512 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[200] /* MatStm3.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp511),tmp512);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: " + String(MatStm3.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2257};
  modelica_boolean tmp514;
  static const MMC_DEFSTRINGLIT(tmp515,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: ");
  modelica_string tmp516;
  static int tmp517 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp517)
  {
    tmp514 = GreaterEq(data->localData[0]->realVars[201] /* MatStm3.compMasFlo[2,1] variable */,0.0);
    if(!tmp514)
    {
      tmp516 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[201] /* MatStm3.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp515),tmp516);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: " + String(MatStm3.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2258};
  modelica_boolean tmp518;
  static const MMC_DEFSTRINGLIT(tmp519,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: ");
  modelica_string tmp520;
  static int tmp521 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp521)
  {
    tmp518 = GreaterEq(data->localData[0]->realVars[202] /* MatStm3.compMasFlo[2,2] variable */,0.0);
    if(!tmp518)
    {
      tmp520 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[202] /* MatStm3.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp519),tmp520);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp521 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2259
type: ALGORITHM

  assert(MatStm3.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: " + String(MatStm3.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2259};
  modelica_boolean tmp522;
  static const MMC_DEFSTRINGLIT(tmp523,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: ");
  modelica_string tmp524;
  static int tmp525 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp525)
  {
    tmp522 = GreaterEq(data->localData[0]->realVars[203] /* MatStm3.compMasFlo[3,1] variable */,0.0);
    if(!tmp522)
    {
      tmp524 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[203] /* MatStm3.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp523),tmp524);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp525 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2260
type: ALGORITHM

  assert(MatStm3.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: " + String(MatStm3.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2260};
  modelica_boolean tmp526;
  static const MMC_DEFSTRINGLIT(tmp527,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: ");
  modelica_string tmp528;
  static int tmp529 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp529)
  {
    tmp526 = GreaterEq(data->localData[0]->realVars[204] /* MatStm3.compMasFlo[3,2] variable */,0.0);
    if(!tmp526)
    {
      tmp528 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[204] /* MatStm3.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp527),tmp528);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp529 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2261
type: ALGORITHM

  assert(MatStm3.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.K[1], has value: " + String(MatStm3.K[1], "g"));
*/
void Flowsheet_eqFunction_2261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2261};
  modelica_boolean tmp530;
  static const MMC_DEFSTRINGLIT(tmp531,67,"Variable violating min constraint: 0.0 <= MatStm3.K[1], has value: ");
  modelica_string tmp532;
  static int tmp533 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp533)
  {
    tmp530 = GreaterEq(data->localData[0]->realVars[190] /* MatStm3.K[1] variable */,0.0);
    if(!tmp530)
    {
      tmp532 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[190] /* MatStm3.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp531),tmp532);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Files/Thermodynamic_Packages/package.mo",6,5,6,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp533 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2262
type: ALGORITHM

  assert(MatStm3.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.K[2], has value: " + String(MatStm3.K[2], "g"));
*/
void Flowsheet_eqFunction_2262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2262};
  modelica_boolean tmp534;
  static const MMC_DEFSTRINGLIT(tmp535,67,"Variable violating min constraint: 0.0 <= MatStm3.K[2], has value: ");
  modelica_string tmp536;
  static int tmp537 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp537)
  {
    tmp534 = GreaterEq(data->localData[0]->realVars[191] /* MatStm3.K[2] variable */,0.0);
    if(!tmp534)
    {
      tmp536 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[191] /* MatStm3.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp535),tmp536);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Files/Thermodynamic_Packages/package.mo",6,5,6,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp537 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2263
type: ALGORITHM

  assert(MatStm4.liqPhasMolFrac >= 0.0 and MatStm4.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.liqPhasMolFrac <= 1.0, has value: " + String(MatStm4.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2263};
  modelica_boolean tmp538;
  modelica_boolean tmp539;
  static const MMC_DEFSTRINGLIT(tmp540,88,"Variable violating min/max constraint: 0.0 <= MatStm4.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp541;
  static int tmp542 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp542)
  {
    tmp538 = GreaterEq(data->localData[0]->realVars[338] /* MatStm4.liqPhasMolFrac variable */,0.0);
    tmp539 = LessEq(data->localData[0]->realVars[338] /* MatStm4.liqPhasMolFrac variable */,1.0);
    if(!(tmp538 && tmp539))
    {
      tmp541 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[338] /* MatStm4.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp540),tmp541);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.liqPhasMolFrac >= 0.0 and MatStm4.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm4.liqPhasMasFrac >= 0.0 and MatStm4.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.liqPhasMasFrac <= 1.0, has value: " + String(MatStm4.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2264};
  modelica_boolean tmp543;
  modelica_boolean tmp544;
  static const MMC_DEFSTRINGLIT(tmp545,88,"Variable violating min/max constraint: 0.0 <= MatStm4.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp546;
  static int tmp547 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp547)
  {
    tmp543 = GreaterEq(data->localData[0]->realVars[337] /* MatStm4.liqPhasMasFrac variable */,0.0);
    tmp544 = LessEq(data->localData[0]->realVars[337] /* MatStm4.liqPhasMasFrac variable */,1.0);
    if(!(tmp543 && tmp544))
    {
      tmp546 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[337] /* MatStm4.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp545),tmp546);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.liqPhasMasFrac >= 0.0 and MatStm4.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp547 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2265
type: ALGORITHM

  assert(MatStm4.vapPhasMasFrac >= 0.0 and MatStm4.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.vapPhasMasFrac <= 1.0, has value: " + String(MatStm4.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2265};
  modelica_boolean tmp548;
  modelica_boolean tmp549;
  static const MMC_DEFSTRINGLIT(tmp550,88,"Variable violating min/max constraint: 0.0 <= MatStm4.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp551;
  static int tmp552 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp552)
  {
    tmp548 = GreaterEq(data->localData[0]->realVars[365] /* MatStm4.vapPhasMasFrac variable */,0.0);
    tmp549 = LessEq(data->localData[0]->realVars[365] /* MatStm4.vapPhasMasFrac variable */,1.0);
    if(!(tmp548 && tmp549))
    {
      tmp551 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[365] /* MatStm4.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp550),tmp551);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.vapPhasMasFrac >= 0.0 and MatStm4.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp552 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2266
type: ALGORITHM

  assert(MatStm4.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMolFlo[2], has value: " + String(MatStm4.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2266};
  modelica_boolean tmp553;
  static const MMC_DEFSTRINGLIT(tmp554,75,"Variable violating min constraint: 0.0 <= MatStm4.totMolFlo[2], has value: ");
  modelica_string tmp555;
  static int tmp556 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp556)
  {
    tmp553 = GreaterEq(data->localData[0]->realVars[363] /* MatStm4.totMolFlo[2] variable */,0.0);
    if(!tmp553)
    {
      tmp555 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[363] /* MatStm4.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp554),tmp555);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp556 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2267
type: ALGORITHM

  assert(MatStm4.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMolFlo[3], has value: " + String(MatStm4.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2267};
  modelica_boolean tmp557;
  static const MMC_DEFSTRINGLIT(tmp558,75,"Variable violating min constraint: 0.0 <= MatStm4.totMolFlo[3], has value: ");
  modelica_string tmp559;
  static int tmp560 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp560)
  {
    tmp557 = GreaterEq(data->localData[0]->realVars[364] /* MatStm4.totMolFlo[3] variable */,0.0);
    if(!tmp557)
    {
      tmp559 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[364] /* MatStm4.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp558),tmp559);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp560 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2268
type: ALGORITHM

  assert(MatStm4.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[1], has value: " + String(MatStm4.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2268};
  modelica_boolean tmp561;
  static const MMC_DEFSTRINGLIT(tmp562,75,"Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[1], has value: ");
  modelica_string tmp563;
  static int tmp564 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp564)
  {
    tmp561 = GreaterEq(data->localData[0]->realVars[359] /* MatStm4.totMasFlo[1] variable */,0.0);
    if(!tmp561)
    {
      tmp563 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[359] /* MatStm4.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp562),tmp563);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm4.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[2], has value: " + String(MatStm4.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2269};
  modelica_boolean tmp565;
  static const MMC_DEFSTRINGLIT(tmp566,75,"Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[2], has value: ");
  modelica_string tmp567;
  static int tmp568 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp568)
  {
    tmp565 = GreaterEq(data->localData[0]->realVars[360] /* MatStm4.totMasFlo[2] variable */,0.0);
    if(!tmp565)
    {
      tmp567 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[360] /* MatStm4.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp566),tmp567);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp568 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2270
type: ALGORITHM

  assert(MatStm4.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[3], has value: " + String(MatStm4.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2270};
  modelica_boolean tmp569;
  static const MMC_DEFSTRINGLIT(tmp570,75,"Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[3], has value: ");
  modelica_string tmp571;
  static int tmp572 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp572)
  {
    tmp569 = GreaterEq(data->localData[0]->realVars[361] /* MatStm4.totMasFlo[3] variable */,0.0);
    if(!tmp569)
    {
      tmp571 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[361] /* MatStm4.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp570),tmp571);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp572 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2271
type: ALGORITHM

  assert(MatStm4.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.MW[1], has value: " + String(MatStm4.MW[1], "g"));
*/
void Flowsheet_eqFunction_2271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2271};
  modelica_boolean tmp573;
  static const MMC_DEFSTRINGLIT(tmp574,68,"Variable violating min constraint: 0.0 <= MatStm4.MW[1], has value: ");
  modelica_string tmp575;
  static int tmp576 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp576)
  {
    tmp573 = GreaterEq(data->localData[0]->realVars[280] /* MatStm4.MW[1] variable */,0.0);
    if(!tmp573)
    {
      tmp575 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[280] /* MatStm4.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp574),tmp575);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp576 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2272
type: ALGORITHM

  assert(MatStm4.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.MW[2], has value: " + String(MatStm4.MW[2], "g"));
*/
void Flowsheet_eqFunction_2272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2272};
  modelica_boolean tmp577;
  static const MMC_DEFSTRINGLIT(tmp578,68,"Variable violating min constraint: 0.0 <= MatStm4.MW[2], has value: ");
  modelica_string tmp579;
  static int tmp580 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp580)
  {
    tmp577 = GreaterEq(data->localData[0]->realVars[281] /* MatStm4.MW[2] variable */,0.0);
    if(!tmp577)
    {
      tmp579 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[281] /* MatStm4.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp578),tmp579);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp580 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2273
type: ALGORITHM

  assert(MatStm4.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.MW[3], has value: " + String(MatStm4.MW[3], "g"));
*/
void Flowsheet_eqFunction_2273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2273};
  modelica_boolean tmp581;
  static const MMC_DEFSTRINGLIT(tmp582,68,"Variable violating min constraint: 0.0 <= MatStm4.MW[3], has value: ");
  modelica_string tmp583;
  static int tmp584 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp584)
  {
    tmp581 = GreaterEq(data->localData[0]->realVars[282] /* MatStm4.MW[3] variable */,0.0);
    if(!tmp581)
    {
      tmp583 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[282] /* MatStm4.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp582),tmp583);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp584 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2274
type: ALGORITHM

  assert(MatStm4.compMolFrac[2,1] >= 0.0 and MatStm4.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm4.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2274};
  modelica_boolean tmp585;
  modelica_boolean tmp586;
  static const MMC_DEFSTRINGLIT(tmp587,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp588;
  static int tmp589 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp589)
  {
    tmp585 = GreaterEq(data->localData[0]->realVars[321] /* MatStm4.compMolFrac[2,1] variable */,0.0);
    tmp586 = LessEq(data->localData[0]->realVars[321] /* MatStm4.compMolFrac[2,1] variable */,1.0);
    if(!(tmp585 && tmp586))
    {
      tmp588 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[321] /* MatStm4.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp587),tmp588);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[2,1] >= 0.0 and MatStm4.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp589 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2275
type: ALGORITHM

  assert(MatStm4.compMolFrac[2,2] >= 0.0 and MatStm4.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm4.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2275};
  modelica_boolean tmp590;
  modelica_boolean tmp591;
  static const MMC_DEFSTRINGLIT(tmp592,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp593;
  static int tmp594 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp594)
  {
    tmp590 = GreaterEq(data->localData[0]->realVars[322] /* MatStm4.compMolFrac[2,2] variable */,0.0);
    tmp591 = LessEq(data->localData[0]->realVars[322] /* MatStm4.compMolFrac[2,2] variable */,1.0);
    if(!(tmp590 && tmp591))
    {
      tmp593 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[322] /* MatStm4.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp592),tmp593);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[2,2] >= 0.0 and MatStm4.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp594 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2276
type: ALGORITHM

  assert(MatStm4.compMolFrac[3,1] >= 0.0 and MatStm4.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm4.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2276};
  modelica_boolean tmp595;
  modelica_boolean tmp596;
  static const MMC_DEFSTRINGLIT(tmp597,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp598;
  static int tmp599 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp599)
  {
    tmp595 = GreaterEq(data->localData[0]->realVars[323] /* MatStm4.compMolFrac[3,1] variable */,0.0);
    tmp596 = LessEq(data->localData[0]->realVars[323] /* MatStm4.compMolFrac[3,1] variable */,1.0);
    if(!(tmp595 && tmp596))
    {
      tmp598 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[323] /* MatStm4.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp597),tmp598);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[3,1] >= 0.0 and MatStm4.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp599 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2277
type: ALGORITHM

  assert(MatStm4.compMolFrac[3,2] >= 0.0 and MatStm4.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm4.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2277};
  modelica_boolean tmp600;
  modelica_boolean tmp601;
  static const MMC_DEFSTRINGLIT(tmp602,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp603;
  static int tmp604 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp604)
  {
    tmp600 = GreaterEq(data->localData[0]->realVars[324] /* MatStm4.compMolFrac[3,2] variable */,0.0);
    tmp601 = LessEq(data->localData[0]->realVars[324] /* MatStm4.compMolFrac[3,2] variable */,1.0);
    if(!(tmp600 && tmp601))
    {
      tmp603 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[324] /* MatStm4.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp602),tmp603);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[3,2] >= 0.0 and MatStm4.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp604 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2278
type: ALGORITHM

  assert(MatStm4.compMasFrac[1,1] >= 0.0 and MatStm4.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm4.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2278};
  modelica_boolean tmp605;
  modelica_boolean tmp606;
  static const MMC_DEFSTRINGLIT(tmp607,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp608;
  static int tmp609 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp609)
  {
    tmp605 = GreaterEq(data->localData[0]->realVars[295] /* MatStm4.compMasFrac[1,1] variable */,0.0);
    tmp606 = LessEq(data->localData[0]->realVars[295] /* MatStm4.compMasFrac[1,1] variable */,1.0);
    if(!(tmp605 && tmp606))
    {
      tmp608 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[295] /* MatStm4.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp607),tmp608);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[1,1] >= 0.0 and MatStm4.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp609 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2279
type: ALGORITHM

  assert(MatStm4.compMasFrac[1,2] >= 0.0 and MatStm4.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm4.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2279};
  modelica_boolean tmp610;
  modelica_boolean tmp611;
  static const MMC_DEFSTRINGLIT(tmp612,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp613;
  static int tmp614 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp614)
  {
    tmp610 = GreaterEq(data->localData[0]->realVars[296] /* MatStm4.compMasFrac[1,2] variable */,0.0);
    tmp611 = LessEq(data->localData[0]->realVars[296] /* MatStm4.compMasFrac[1,2] variable */,1.0);
    if(!(tmp610 && tmp611))
    {
      tmp613 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[296] /* MatStm4.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp612),tmp613);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[1,2] >= 0.0 and MatStm4.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp614 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2280
type: ALGORITHM

  assert(MatStm4.compMasFrac[2,1] >= 0.0 and MatStm4.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm4.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2280};
  modelica_boolean tmp615;
  modelica_boolean tmp616;
  static const MMC_DEFSTRINGLIT(tmp617,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp618;
  static int tmp619 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp619)
  {
    tmp615 = GreaterEq(data->localData[0]->realVars[297] /* MatStm4.compMasFrac[2,1] variable */,0.0);
    tmp616 = LessEq(data->localData[0]->realVars[297] /* MatStm4.compMasFrac[2,1] variable */,1.0);
    if(!(tmp615 && tmp616))
    {
      tmp618 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[297] /* MatStm4.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp617),tmp618);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[2,1] >= 0.0 and MatStm4.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm4.compMasFrac[2,2] >= 0.0 and MatStm4.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm4.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2281};
  modelica_boolean tmp620;
  modelica_boolean tmp621;
  static const MMC_DEFSTRINGLIT(tmp622,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp623;
  static int tmp624 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp624)
  {
    tmp620 = GreaterEq(data->localData[0]->realVars[298] /* MatStm4.compMasFrac[2,2] variable */,0.0);
    tmp621 = LessEq(data->localData[0]->realVars[298] /* MatStm4.compMasFrac[2,2] variable */,1.0);
    if(!(tmp620 && tmp621))
    {
      tmp623 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[298] /* MatStm4.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp622),tmp623);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[2,2] >= 0.0 and MatStm4.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm4.compMasFrac[3,1] >= 0.0 and MatStm4.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm4.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2282};
  modelica_boolean tmp625;
  modelica_boolean tmp626;
  static const MMC_DEFSTRINGLIT(tmp627,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp628;
  static int tmp629 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp629)
  {
    tmp625 = GreaterEq(data->localData[0]->realVars[299] /* MatStm4.compMasFrac[3,1] variable */,0.0);
    tmp626 = LessEq(data->localData[0]->realVars[299] /* MatStm4.compMasFrac[3,1] variable */,1.0);
    if(!(tmp625 && tmp626))
    {
      tmp628 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[299] /* MatStm4.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp627),tmp628);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[3,1] >= 0.0 and MatStm4.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp629 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2283
type: ALGORITHM

  assert(MatStm4.compMasFrac[3,2] >= 0.0 and MatStm4.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm4.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2283};
  modelica_boolean tmp630;
  modelica_boolean tmp631;
  static const MMC_DEFSTRINGLIT(tmp632,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp633;
  static int tmp634 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp634)
  {
    tmp630 = GreaterEq(data->localData[0]->realVars[300] /* MatStm4.compMasFrac[3,2] variable */,0.0);
    tmp631 = LessEq(data->localData[0]->realVars[300] /* MatStm4.compMasFrac[3,2] variable */,1.0);
    if(!(tmp630 && tmp631))
    {
      tmp633 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[300] /* MatStm4.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp632),tmp633);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[3,2] >= 0.0 and MatStm4.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp634 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2284
type: ALGORITHM

  assert(MatStm4.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[2,1], has value: " + String(MatStm4.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2284};
  modelica_boolean tmp635;
  static const MMC_DEFSTRINGLIT(tmp636,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[2,1], has value: ");
  modelica_string tmp637;
  static int tmp638 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp638)
  {
    tmp635 = GreaterEq(data->localData[0]->realVars[315] /* MatStm4.compMolFlo[2,1] variable */,0.0);
    if(!tmp635)
    {
      tmp637 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[315] /* MatStm4.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp636),tmp637);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp638 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2285
type: ALGORITHM

  assert(MatStm4.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[2,2], has value: " + String(MatStm4.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2285};
  modelica_boolean tmp639;
  static const MMC_DEFSTRINGLIT(tmp640,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[2,2], has value: ");
  modelica_string tmp641;
  static int tmp642 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp642)
  {
    tmp639 = GreaterEq(data->localData[0]->realVars[316] /* MatStm4.compMolFlo[2,2] variable */,0.0);
    if(!tmp639)
    {
      tmp641 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[316] /* MatStm4.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp640),tmp641);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm4.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[3,1], has value: " + String(MatStm4.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2286};
  modelica_boolean tmp643;
  static const MMC_DEFSTRINGLIT(tmp644,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[3,1], has value: ");
  modelica_string tmp645;
  static int tmp646 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp646)
  {
    tmp643 = GreaterEq(data->localData[0]->realVars[317] /* MatStm4.compMolFlo[3,1] variable */,0.0);
    if(!tmp643)
    {
      tmp645 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[317] /* MatStm4.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp644),tmp645);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm4.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[3,2], has value: " + String(MatStm4.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2287};
  modelica_boolean tmp647;
  static const MMC_DEFSTRINGLIT(tmp648,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[3,2], has value: ");
  modelica_string tmp649;
  static int tmp650 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp650)
  {
    tmp647 = GreaterEq(data->localData[0]->realVars[318] /* MatStm4.compMolFlo[3,2] variable */,0.0);
    if(!tmp647)
    {
      tmp649 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[318] /* MatStm4.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp648),tmp649);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp650 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2288
type: ALGORITHM

  assert(MatStm4.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[2,1], has value: " + String(MatStm4.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2288};
  modelica_boolean tmp651;
  static const MMC_DEFSTRINGLIT(tmp652,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[2,1], has value: ");
  modelica_string tmp653;
  static int tmp654 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp654)
  {
    tmp651 = GreaterEq(data->localData[0]->realVars[291] /* MatStm4.compMasFlo[2,1] variable */,0.0);
    if(!tmp651)
    {
      tmp653 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[291] /* MatStm4.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp652),tmp653);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp654 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2289
type: ALGORITHM

  assert(MatStm4.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[2,2], has value: " + String(MatStm4.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2289};
  modelica_boolean tmp655;
  static const MMC_DEFSTRINGLIT(tmp656,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[2,2], has value: ");
  modelica_string tmp657;
  static int tmp658 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp658)
  {
    tmp655 = GreaterEq(data->localData[0]->realVars[292] /* MatStm4.compMasFlo[2,2] variable */,0.0);
    if(!tmp655)
    {
      tmp657 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[292] /* MatStm4.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp656),tmp657);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp658 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2290
type: ALGORITHM

  assert(MatStm4.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[3,1], has value: " + String(MatStm4.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2290};
  modelica_boolean tmp659;
  static const MMC_DEFSTRINGLIT(tmp660,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[3,1], has value: ");
  modelica_string tmp661;
  static int tmp662 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp662)
  {
    tmp659 = GreaterEq(data->localData[0]->realVars[293] /* MatStm4.compMasFlo[3,1] variable */,0.0);
    if(!tmp659)
    {
      tmp661 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[293] /* MatStm4.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp660),tmp661);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp662 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2291
type: ALGORITHM

  assert(MatStm4.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[3,2], has value: " + String(MatStm4.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2291};
  modelica_boolean tmp663;
  static const MMC_DEFSTRINGLIT(tmp664,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[3,2], has value: ");
  modelica_string tmp665;
  static int tmp666 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp666)
  {
    tmp663 = GreaterEq(data->localData[0]->realVars[294] /* MatStm4.compMasFlo[3,2] variable */,0.0);
    if(!tmp663)
    {
      tmp665 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[294] /* MatStm4.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp664),tmp665);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp666 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2292
type: ALGORITHM

  assert(MatStm5.liqPhasMolFrac >= 0.0 and MatStm5.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.liqPhasMolFrac <= 1.0, has value: " + String(MatStm5.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2292};
  modelica_boolean tmp667;
  modelica_boolean tmp668;
  static const MMC_DEFSTRINGLIT(tmp669,88,"Variable violating min/max constraint: 0.0 <= MatStm5.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp670;
  static int tmp671 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp671)
  {
    tmp667 = GreaterEq(data->localData[0]->realVars[428] /* MatStm5.liqPhasMolFrac variable */,0.0);
    tmp668 = LessEq(data->localData[0]->realVars[428] /* MatStm5.liqPhasMolFrac variable */,1.0);
    if(!(tmp667 && tmp668))
    {
      tmp670 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[428] /* MatStm5.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp669),tmp670);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.liqPhasMolFrac >= 0.0 and MatStm5.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.liqPhasMasFrac >= 0.0 and MatStm5.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.liqPhasMasFrac <= 1.0, has value: " + String(MatStm5.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2293};
  modelica_boolean tmp672;
  modelica_boolean tmp673;
  static const MMC_DEFSTRINGLIT(tmp674,88,"Variable violating min/max constraint: 0.0 <= MatStm5.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp675;
  static int tmp676 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp676)
  {
    tmp672 = GreaterEq(data->localData[0]->realVars[427] /* MatStm5.liqPhasMasFrac variable */,0.0);
    tmp673 = LessEq(data->localData[0]->realVars[427] /* MatStm5.liqPhasMasFrac variable */,1.0);
    if(!(tmp672 && tmp673))
    {
      tmp675 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[427] /* MatStm5.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp674),tmp675);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.liqPhasMasFrac >= 0.0 and MatStm5.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp676 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2294
type: ALGORITHM

  assert(MatStm5.vapPhasMasFrac >= 0.0 and MatStm5.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.vapPhasMasFrac <= 1.0, has value: " + String(MatStm5.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2294};
  modelica_boolean tmp677;
  modelica_boolean tmp678;
  static const MMC_DEFSTRINGLIT(tmp679,88,"Variable violating min/max constraint: 0.0 <= MatStm5.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp680;
  static int tmp681 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp681)
  {
    tmp677 = GreaterEq(data->localData[0]->realVars[455] /* MatStm5.vapPhasMasFrac variable */,0.0);
    tmp678 = LessEq(data->localData[0]->realVars[455] /* MatStm5.vapPhasMasFrac variable */,1.0);
    if(!(tmp677 && tmp678))
    {
      tmp680 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[455] /* MatStm5.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp679),tmp680);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",12,3,12,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.vapPhasMasFrac >= 0.0 and MatStm5.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp681 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2295
type: ALGORITHM

  assert(MatStm5.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMolFlo[2], has value: " + String(MatStm5.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2295};
  modelica_boolean tmp682;
  static const MMC_DEFSTRINGLIT(tmp683,75,"Variable violating min constraint: 0.0 <= MatStm5.totMolFlo[2], has value: ");
  modelica_string tmp684;
  static int tmp685 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp685)
  {
    tmp682 = GreaterEq(data->localData[0]->realVars[453] /* MatStm5.totMolFlo[2] variable */,0.0);
    if(!tmp682)
    {
      tmp684 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[453] /* MatStm5.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp683),tmp684);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp685 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2296
type: ALGORITHM

  assert(MatStm5.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMolFlo[3], has value: " + String(MatStm5.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2296};
  modelica_boolean tmp686;
  static const MMC_DEFSTRINGLIT(tmp687,75,"Variable violating min constraint: 0.0 <= MatStm5.totMolFlo[3], has value: ");
  modelica_string tmp688;
  static int tmp689 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp689)
  {
    tmp686 = GreaterEq(data->localData[0]->realVars[454] /* MatStm5.totMolFlo[3] variable */,0.0);
    if(!tmp686)
    {
      tmp688 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[454] /* MatStm5.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp687),tmp688);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[1], has value: " + String(MatStm5.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2297};
  modelica_boolean tmp690;
  static const MMC_DEFSTRINGLIT(tmp691,75,"Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[1], has value: ");
  modelica_string tmp692;
  static int tmp693 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp693)
  {
    tmp690 = GreaterEq(data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */,0.0);
    if(!tmp690)
    {
      tmp692 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[449] /* MatStm5.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp691),tmp692);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[2], has value: " + String(MatStm5.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2298};
  modelica_boolean tmp694;
  static const MMC_DEFSTRINGLIT(tmp695,75,"Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[2], has value: ");
  modelica_string tmp696;
  static int tmp697 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp697)
  {
    tmp694 = GreaterEq(data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */,0.0);
    if(!tmp694)
    {
      tmp696 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[450] /* MatStm5.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp695),tmp696);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp697 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2299
type: ALGORITHM

  assert(MatStm5.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[3], has value: " + String(MatStm5.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2299};
  modelica_boolean tmp698;
  static const MMC_DEFSTRINGLIT(tmp699,75,"Variable violating min constraint: 0.0 <= MatStm5.totMasFlo[3], has value: ");
  modelica_string tmp700;
  static int tmp701 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp701)
  {
    tmp698 = GreaterEq(data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */,0.0);
    if(!tmp698)
    {
      tmp700 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[451] /* MatStm5.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp699),tmp700);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp701 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2300
type: ALGORITHM

  assert(MatStm5.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.MW[1], has value: " + String(MatStm5.MW[1], "g"));
*/
void Flowsheet_eqFunction_2300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2300};
  modelica_boolean tmp702;
  static const MMC_DEFSTRINGLIT(tmp703,68,"Variable violating min constraint: 0.0 <= MatStm5.MW[1], has value: ");
  modelica_string tmp704;
  static int tmp705 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp705)
  {
    tmp702 = GreaterEq(data->localData[0]->realVars[370] /* MatStm5.MW[1] variable */,0.0);
    if(!tmp702)
    {
      tmp704 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[370] /* MatStm5.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp703),tmp704);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp705 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2301
type: ALGORITHM

  assert(MatStm5.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.MW[2], has value: " + String(MatStm5.MW[2], "g"));
*/
void Flowsheet_eqFunction_2301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2301};
  modelica_boolean tmp706;
  static const MMC_DEFSTRINGLIT(tmp707,68,"Variable violating min constraint: 0.0 <= MatStm5.MW[2], has value: ");
  modelica_string tmp708;
  static int tmp709 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp709)
  {
    tmp706 = GreaterEq(data->localData[0]->realVars[371] /* MatStm5.MW[2] variable */,0.0);
    if(!tmp706)
    {
      tmp708 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[371] /* MatStm5.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp707),tmp708);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp709 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2302
type: ALGORITHM

  assert(MatStm5.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.MW[3], has value: " + String(MatStm5.MW[3], "g"));
*/
void Flowsheet_eqFunction_2302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2302};
  modelica_boolean tmp710;
  static const MMC_DEFSTRINGLIT(tmp711,68,"Variable violating min constraint: 0.0 <= MatStm5.MW[3], has value: ");
  modelica_string tmp712;
  static int tmp713 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp713)
  {
    tmp710 = GreaterEq(data->localData[0]->realVars[372] /* MatStm5.MW[3] variable */,0.0);
    if(!tmp710)
    {
      tmp712 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[372] /* MatStm5.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp711),tmp712);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",13,3,13,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp713 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2303
type: ALGORITHM

  assert(MatStm5.compMolFrac[2,1] >= 0.0 and MatStm5.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm5.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2303};
  modelica_boolean tmp714;
  modelica_boolean tmp715;
  static const MMC_DEFSTRINGLIT(tmp716,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp717;
  static int tmp718 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp718)
  {
    tmp714 = GreaterEq(data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */,0.0);
    tmp715 = LessEq(data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */,1.0);
    if(!(tmp714 && tmp715))
    {
      tmp717 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[411] /* MatStm5.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp716),tmp717);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[2,1] >= 0.0 and MatStm5.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp718 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2304
type: ALGORITHM

  assert(MatStm5.compMolFrac[2,2] >= 0.0 and MatStm5.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm5.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2304};
  modelica_boolean tmp719;
  modelica_boolean tmp720;
  static const MMC_DEFSTRINGLIT(tmp721,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp722;
  static int tmp723 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp723)
  {
    tmp719 = GreaterEq(data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */,0.0);
    tmp720 = LessEq(data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */,1.0);
    if(!(tmp719 && tmp720))
    {
      tmp722 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[412] /* MatStm5.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp721),tmp722);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[2,2] >= 0.0 and MatStm5.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp723 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2305
type: ALGORITHM

  assert(MatStm5.compMolFrac[3,1] >= 0.0 and MatStm5.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm5.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2305};
  modelica_boolean tmp724;
  modelica_boolean tmp725;
  static const MMC_DEFSTRINGLIT(tmp726,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp727;
  static int tmp728 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp728)
  {
    tmp724 = GreaterEq(data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */,0.0);
    tmp725 = LessEq(data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */,1.0);
    if(!(tmp724 && tmp725))
    {
      tmp727 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[413] /* MatStm5.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp726),tmp727);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[3,1] >= 0.0 and MatStm5.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp728 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2306
type: ALGORITHM

  assert(MatStm5.compMolFrac[3,2] >= 0.0 and MatStm5.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm5.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2306};
  modelica_boolean tmp729;
  modelica_boolean tmp730;
  static const MMC_DEFSTRINGLIT(tmp731,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp732;
  static int tmp733 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp733)
  {
    tmp729 = GreaterEq(data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */,0.0);
    tmp730 = LessEq(data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */,1.0);
    if(!(tmp729 && tmp730))
    {
      tmp732 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[414] /* MatStm5.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp731),tmp732);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFrac[3,2] >= 0.0 and MatStm5.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp733 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2307
type: ALGORITHM

  assert(MatStm5.compMasFrac[1,1] >= 0.0 and MatStm5.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm5.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2307};
  modelica_boolean tmp734;
  modelica_boolean tmp735;
  static const MMC_DEFSTRINGLIT(tmp736,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp737;
  static int tmp738 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp738)
  {
    tmp734 = GreaterEq(data->localData[0]->realVars[385] /* MatStm5.compMasFrac[1,1] variable */,0.0);
    tmp735 = LessEq(data->localData[0]->realVars[385] /* MatStm5.compMasFrac[1,1] variable */,1.0);
    if(!(tmp734 && tmp735))
    {
      tmp737 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[385] /* MatStm5.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp736),tmp737);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[1,1] >= 0.0 and MatStm5.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp738 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2308
type: ALGORITHM

  assert(MatStm5.compMasFrac[1,2] >= 0.0 and MatStm5.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm5.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2308};
  modelica_boolean tmp739;
  modelica_boolean tmp740;
  static const MMC_DEFSTRINGLIT(tmp741,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp742;
  static int tmp743 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp743)
  {
    tmp739 = GreaterEq(data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */,0.0);
    tmp740 = LessEq(data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */,1.0);
    if(!(tmp739 && tmp740))
    {
      tmp742 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[386] /* MatStm5.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp741),tmp742);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[1,2] >= 0.0 and MatStm5.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp743 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2309
type: ALGORITHM

  assert(MatStm5.compMasFrac[2,1] >= 0.0 and MatStm5.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm5.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2309};
  modelica_boolean tmp744;
  modelica_boolean tmp745;
  static const MMC_DEFSTRINGLIT(tmp746,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp747;
  static int tmp748 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp748)
  {
    tmp744 = GreaterEq(data->localData[0]->realVars[387] /* MatStm5.compMasFrac[2,1] variable */,0.0);
    tmp745 = LessEq(data->localData[0]->realVars[387] /* MatStm5.compMasFrac[2,1] variable */,1.0);
    if(!(tmp744 && tmp745))
    {
      tmp747 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[387] /* MatStm5.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp746),tmp747);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[2,1] >= 0.0 and MatStm5.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp748 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2310
type: ALGORITHM

  assert(MatStm5.compMasFrac[2,2] >= 0.0 and MatStm5.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm5.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2310};
  modelica_boolean tmp749;
  modelica_boolean tmp750;
  static const MMC_DEFSTRINGLIT(tmp751,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp752;
  static int tmp753 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp753)
  {
    tmp749 = GreaterEq(data->localData[0]->realVars[388] /* MatStm5.compMasFrac[2,2] variable */,0.0);
    tmp750 = LessEq(data->localData[0]->realVars[388] /* MatStm5.compMasFrac[2,2] variable */,1.0);
    if(!(tmp749 && tmp750))
    {
      tmp752 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[388] /* MatStm5.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp751),tmp752);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[2,2] >= 0.0 and MatStm5.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.compMasFrac[3,1] >= 0.0 and MatStm5.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm5.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2311};
  modelica_boolean tmp754;
  modelica_boolean tmp755;
  static const MMC_DEFSTRINGLIT(tmp756,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp757;
  static int tmp758 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp758)
  {
    tmp754 = GreaterEq(data->localData[0]->realVars[389] /* MatStm5.compMasFrac[3,1] variable */,0.0);
    tmp755 = LessEq(data->localData[0]->realVars[389] /* MatStm5.compMasFrac[3,1] variable */,1.0);
    if(!(tmp754 && tmp755))
    {
      tmp757 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[389] /* MatStm5.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp756),tmp757);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[3,1] >= 0.0 and MatStm5.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp758 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2312
type: ALGORITHM

  assert(MatStm5.compMasFrac[3,2] >= 0.0 and MatStm5.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm5.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2312};
  modelica_boolean tmp759;
  modelica_boolean tmp760;
  static const MMC_DEFSTRINGLIT(tmp761,90,"Variable violating min/max constraint: 0.0 <= MatStm5.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp762;
  static int tmp763 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp763)
  {
    tmp759 = GreaterEq(data->localData[0]->realVars[390] /* MatStm5.compMasFrac[3,2] variable */,0.0);
    tmp760 = LessEq(data->localData[0]->realVars[390] /* MatStm5.compMasFrac[3,2] variable */,1.0);
    if(!(tmp759 && tmp760))
    {
      tmp762 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[390] /* MatStm5.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp761),tmp762);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFrac[3,2] >= 0.0 and MatStm5.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[2,1], has value: " + String(MatStm5.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2313};
  modelica_boolean tmp764;
  static const MMC_DEFSTRINGLIT(tmp765,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[2,1], has value: ");
  modelica_string tmp766;
  static int tmp767 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp767)
  {
    tmp764 = GreaterEq(data->localData[0]->realVars[405] /* MatStm5.compMolFlo[2,1] variable */,0.0);
    if(!tmp764)
    {
      tmp766 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[405] /* MatStm5.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp765),tmp766);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[2,2], has value: " + String(MatStm5.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2314};
  modelica_boolean tmp768;
  static const MMC_DEFSTRINGLIT(tmp769,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[2,2], has value: ");
  modelica_string tmp770;
  static int tmp771 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp771)
  {
    tmp768 = GreaterEq(data->localData[0]->realVars[406] /* MatStm5.compMolFlo[2,2] variable */,0.0);
    if(!tmp768)
    {
      tmp770 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[406] /* MatStm5.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp769),tmp770);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[3,1], has value: " + String(MatStm5.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2315};
  modelica_boolean tmp772;
  static const MMC_DEFSTRINGLIT(tmp773,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[3,1], has value: ");
  modelica_string tmp774;
  static int tmp775 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp775)
  {
    tmp772 = GreaterEq(data->localData[0]->realVars[407] /* MatStm5.compMolFlo[3,1] variable */,0.0);
    if(!tmp772)
    {
      tmp774 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[407] /* MatStm5.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp773),tmp774);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[3,2], has value: " + String(MatStm5.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2316};
  modelica_boolean tmp776;
  static const MMC_DEFSTRINGLIT(tmp777,78,"Variable violating min constraint: 0.0 <= MatStm5.compMolFlo[3,2], has value: ");
  modelica_string tmp778;
  static int tmp779 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp779)
  {
    tmp776 = GreaterEq(data->localData[0]->realVars[408] /* MatStm5.compMolFlo[3,2] variable */,0.0);
    if(!tmp776)
    {
      tmp778 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[408] /* MatStm5.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp777),tmp778);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[2,1], has value: " + String(MatStm5.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2317};
  modelica_boolean tmp780;
  static const MMC_DEFSTRINGLIT(tmp781,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[2,1], has value: ");
  modelica_string tmp782;
  static int tmp783 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp783)
  {
    tmp780 = GreaterEq(data->localData[0]->realVars[381] /* MatStm5.compMasFlo[2,1] variable */,0.0);
    if(!tmp780)
    {
      tmp782 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[381] /* MatStm5.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp781),tmp782);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[2,2], has value: " + String(MatStm5.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2318};
  modelica_boolean tmp784;
  static const MMC_DEFSTRINGLIT(tmp785,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[2,2], has value: ");
  modelica_string tmp786;
  static int tmp787 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp787)
  {
    tmp784 = GreaterEq(data->localData[0]->realVars[382] /* MatStm5.compMasFlo[2,2] variable */,0.0);
    if(!tmp784)
    {
      tmp786 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[382] /* MatStm5.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp785),tmp786);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[3,1], has value: " + String(MatStm5.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2319};
  modelica_boolean tmp788;
  static const MMC_DEFSTRINGLIT(tmp789,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[3,1], has value: ");
  modelica_string tmp790;
  static int tmp791 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp791)
  {
    tmp788 = GreaterEq(data->localData[0]->realVars[383] /* MatStm5.compMasFlo[3,1] variable */,0.0);
    if(!tmp788)
    {
      tmp790 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[383] /* MatStm5.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp789),tmp790);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm5.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[3,2], has value: " + String(MatStm5.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2320};
  modelica_boolean tmp792;
  static const MMC_DEFSTRINGLIT(tmp793,78,"Variable violating min constraint: 0.0 <= MatStm5.compMasFlo[3,2], has value: ");
  modelica_string tmp794;
  static int tmp795 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp795)
  {
    tmp792 = GreaterEq(data->localData[0]->realVars[384] /* MatStm5.compMasFlo[3,2] variable */,0.0);
    if(!tmp792)
    {
      tmp794 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[384] /* MatStm5.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp793),tmp794);
      {
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm5.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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
        FILE_INFO info = {"C:/Users/anbil/Desktop/FOSSEE/Fellowship2019/workspace/OMChemSimGUI/Simulator/Simulator/Streams/Material_Stream.mo",14,3,14,365,0};
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

