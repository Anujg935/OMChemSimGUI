/* Asserts */
#include "mixer1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 1235
type: ALGORITHM

  assert(Mixer1.inVapPhasMolFrac[1] >= 0.0 and Mixer1.inVapPhasMolFrac[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[1] <= 1.0, has value: " + String(Mixer1.inVapPhasMolFrac[1], "g"));
*/
void mixer1_eqFunction_1235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1235};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,92,"Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[1] <= 1.0, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq(data->localData[0]->realVars[276] /* Mixer1.inVapPhasMolFrac[1] variable */,0.0);
    tmp1 = LessEq(data->localData[0]->realVars[276] /* Mixer1.inVapPhasMolFrac[1] variable */,1.0);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[276] /* Mixer1.inVapPhasMolFrac[1] variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1236
type: ALGORITHM

  assert(Mixer1.inVapPhasMolFrac[2] >= 0.0 and Mixer1.inVapPhasMolFrac[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[2] <= 1.0, has value: " + String(Mixer1.inVapPhasMolFrac[2], "g"));
*/
void mixer1_eqFunction_1236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1236};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,92,"Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[2] <= 1.0, has value: ");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp9)
  {
    tmp5 = GreaterEq(data->localData[0]->realVars[277] /* Mixer1.inVapPhasMolFrac[2] variable */,0.0);
    tmp6 = LessEq(data->localData[0]->realVars[277] /* Mixer1.inVapPhasMolFrac[2] variable */,1.0);
    if(!(tmp5 && tmp6))
    {
      tmp8 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[277] /* Mixer1.inVapPhasMolFrac[2] variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1237
type: ALGORITHM

  assert(MatStm1.T >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.T, has value: " + String(MatStm1.T, "g"));
*/
void mixer1_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1237};
  modelica_boolean tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,64,"Variable violating min constraint: 0.0 <= MatStm1.T, has value: ");
  modelica_string tmp12;
  static int tmp13 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp13)
  {
    tmp10 = GreaterEq(data->localData[0]->realVars[15] /* MatStm1.T variable */,0.0);
    if(!tmp10)
    {
      tmp12 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[15] /* MatStm1.T variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1238
type: ALGORITHM

  assert(MatStm1.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.Pbubl, has value: " + String(MatStm1.Pbubl, "g"));
*/
void mixer1_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1238};
  modelica_boolean tmp14;
  static const MMC_DEFSTRINGLIT(tmp15,68,"Variable violating min constraint: 0.0 <= MatStm1.Pbubl, has value: ");
  modelica_string tmp16;
  static int tmp17 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp17)
  {
    tmp14 = GreaterEq(data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */,0.0);
    if(!tmp14)
    {
      tmp16 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[11] /* MatStm1.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1239
type: ALGORITHM

  assert(MatStm1.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.Pdew, has value: " + String(MatStm1.Pdew, "g"));
*/
void mixer1_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1239};
  modelica_boolean tmp18;
  static const MMC_DEFSTRINGLIT(tmp19,67,"Variable violating min constraint: 0.0 <= MatStm1.Pdew, has value: ");
  modelica_string tmp20;
  static int tmp21 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp21)
  {
    tmp18 = GreaterEq(data->localData[0]->realVars[12] /* MatStm1.Pdew variable */,0.0);
    if(!tmp18)
    {
      tmp20 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[12] /* MatStm1.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1240
type: ALGORITHM

  assert(MatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: " + String(MatStm1.liqPhasMolFrac, "g"));
*/
void mixer1_eqFunction_1240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1240};
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp25;
  static int tmp26 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp26)
  {
    tmp22 = GreaterEq(data->localData[0]->realVars[65] /* MatStm1.liqPhasMolFrac variable */,0.0);
    tmp23 = LessEq(data->localData[0]->realVars[65] /* MatStm1.liqPhasMolFrac variable */,1.0);
    if(!(tmp22 && tmp23))
    {
      tmp25 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[65] /* MatStm1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1241
type: ALGORITHM

  assert(MatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: " + String(MatStm1.vapPhasMolFrac, "g"));
*/
void mixer1_eqFunction_1241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1241};
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp30;
  static int tmp31 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp31)
  {
    tmp27 = GreaterEq(data->localData[0]->realVars[93] /* MatStm1.vapPhasMolFrac variable */,0.0);
    tmp28 = LessEq(data->localData[0]->realVars[93] /* MatStm1.vapPhasMolFrac variable */,1.0);
    if(!(tmp27 && tmp28))
    {
      tmp30 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[93] /* MatStm1.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1242
type: ALGORITHM

  assert(MatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: " + String(MatStm1.liqPhasMasFrac, "g"));
*/
void mixer1_eqFunction_1242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1242};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp35;
  static int tmp36 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp36)
  {
    tmp32 = GreaterEq(data->localData[0]->realVars[64] /* MatStm1.liqPhasMasFrac variable */,0.0);
    tmp33 = LessEq(data->localData[0]->realVars[64] /* MatStm1.liqPhasMasFrac variable */,1.0);
    if(!(tmp32 && tmp33))
    {
      tmp35 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[64] /* MatStm1.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1243
type: ALGORITHM

  assert(MatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: " + String(MatStm1.vapPhasMasFrac, "g"));
*/
void mixer1_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1243};
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  static const MMC_DEFSTRINGLIT(tmp39,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp40;
  static int tmp41 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp41)
  {
    tmp37 = GreaterEq(data->localData[0]->realVars[92] /* MatStm1.vapPhasMasFrac variable */,0.0);
    tmp38 = LessEq(data->localData[0]->realVars[92] /* MatStm1.vapPhasMasFrac variable */,1.0);
    if(!(tmp37 && tmp38))
    {
      tmp40 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[92] /* MatStm1.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1244
type: ALGORITHM

  assert(MatStm1.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: " + String(MatStm1.totMolFlo[2], "g"));
*/
void mixer1_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1244};
  modelica_boolean tmp42;
  static const MMC_DEFSTRINGLIT(tmp43,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: ");
  modelica_string tmp44;
  static int tmp45 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp45)
  {
    tmp42 = GreaterEq(data->localData[0]->realVars[90] /* MatStm1.totMolFlo[2] variable */,0.0);
    if(!tmp42)
    {
      tmp44 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[90] /* MatStm1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1245
type: ALGORITHM

  assert(MatStm1.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: " + String(MatStm1.totMolFlo[3], "g"));
*/
void mixer1_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1245};
  modelica_boolean tmp46;
  static const MMC_DEFSTRINGLIT(tmp47,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: ");
  modelica_string tmp48;
  static int tmp49 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp49)
  {
    tmp46 = GreaterEq(data->localData[0]->realVars[91] /* MatStm1.totMolFlo[3] variable */,0.0);
    if(!tmp46)
    {
      tmp48 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[91] /* MatStm1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1246
type: ALGORITHM

  assert(MatStm1.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: " + String(MatStm1.totMasFlo[1], "g"));
*/
void mixer1_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1246};
  modelica_boolean tmp50;
  static const MMC_DEFSTRINGLIT(tmp51,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: ");
  modelica_string tmp52;
  static int tmp53 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp53)
  {
    tmp50 = GreaterEq(data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */,0.0);
    if(!tmp50)
    {
      tmp52 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[86] /* MatStm1.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1247
type: ALGORITHM

  assert(MatStm1.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: " + String(MatStm1.totMasFlo[2], "g"));
*/
void mixer1_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1247};
  modelica_boolean tmp54;
  static const MMC_DEFSTRINGLIT(tmp55,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: ");
  modelica_string tmp56;
  static int tmp57 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp57)
  {
    tmp54 = GreaterEq(data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */,0.0);
    if(!tmp54)
    {
      tmp56 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[87] /* MatStm1.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1248
type: ALGORITHM

  assert(MatStm1.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: " + String(MatStm1.totMasFlo[3], "g"));
*/
void mixer1_eqFunction_1248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1248};
  modelica_boolean tmp58;
  static const MMC_DEFSTRINGLIT(tmp59,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: ");
  modelica_string tmp60;
  static int tmp61 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp61)
  {
    tmp58 = GreaterEq(data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */,0.0);
    if(!tmp58)
    {
      tmp60 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[88] /* MatStm1.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1249
type: ALGORITHM

  assert(MatStm1.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: " + String(MatStm1.MW[1], "g"));
*/
void mixer1_eqFunction_1249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1249};
  modelica_boolean tmp62;
  static const MMC_DEFSTRINGLIT(tmp63,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: ");
  modelica_string tmp64;
  static int tmp65 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp65)
  {
    tmp62 = GreaterEq(data->localData[0]->realVars[7] /* MatStm1.MW[1] variable */,0.0);
    if(!tmp62)
    {
      tmp64 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[7] /* MatStm1.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1250
type: ALGORITHM

  assert(MatStm1.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: " + String(MatStm1.MW[2], "g"));
*/
void mixer1_eqFunction_1250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1250};
  modelica_boolean tmp66;
  static const MMC_DEFSTRINGLIT(tmp67,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: ");
  modelica_string tmp68;
  static int tmp69 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp69)
  {
    tmp66 = GreaterEq(data->localData[0]->realVars[8] /* MatStm1.MW[2] variable */,0.0);
    if(!tmp66)
    {
      tmp68 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[8] /* MatStm1.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1251
type: ALGORITHM

  assert(MatStm1.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: " + String(MatStm1.MW[3], "g"));
*/
void mixer1_eqFunction_1251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1251};
  modelica_boolean tmp70;
  static const MMC_DEFSTRINGLIT(tmp71,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: ");
  modelica_string tmp72;
  static int tmp73 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp73)
  {
    tmp70 = GreaterEq(data->localData[0]->realVars[9] /* MatStm1.MW[3] variable */,0.0);
    if(!tmp70)
    {
      tmp72 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[9] /* MatStm1.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1252
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,1], "g"));
*/
void mixer1_eqFunction_1252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1252};
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  static const MMC_DEFSTRINGLIT(tmp76,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp77;
  static int tmp78 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp78)
  {
    tmp74 = GreaterEq(data->localData[0]->realVars[48] /* MatStm1.compMolFrac[2,1] variable */,0.0);
    tmp75 = LessEq(data->localData[0]->realVars[48] /* MatStm1.compMolFrac[2,1] variable */,1.0);
    if(!(tmp74 && tmp75))
    {
      tmp77 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[48] /* MatStm1.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1253
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,2], "g"));
*/
void mixer1_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1253};
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  static const MMC_DEFSTRINGLIT(tmp81,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp82;
  static int tmp83 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp83)
  {
    tmp79 = GreaterEq(data->localData[0]->realVars[49] /* MatStm1.compMolFrac[2,2] variable */,0.0);
    tmp80 = LessEq(data->localData[0]->realVars[49] /* MatStm1.compMolFrac[2,2] variable */,1.0);
    if(!(tmp79 && tmp80))
    {
      tmp82 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[49] /* MatStm1.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1254
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,1], "g"));
*/
void mixer1_eqFunction_1254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1254};
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  static const MMC_DEFSTRINGLIT(tmp86,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp87;
  static int tmp88 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp88)
  {
    tmp84 = GreaterEq(data->localData[0]->realVars[50] /* MatStm1.compMolFrac[3,1] variable */,0.0);
    tmp85 = LessEq(data->localData[0]->realVars[50] /* MatStm1.compMolFrac[3,1] variable */,1.0);
    if(!(tmp84 && tmp85))
    {
      tmp87 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[50] /* MatStm1.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp86),tmp87);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp88 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1255
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,2], "g"));
*/
void mixer1_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1255};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  static const MMC_DEFSTRINGLIT(tmp91,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp92;
  static int tmp93 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp93)
  {
    tmp89 = GreaterEq(data->localData[0]->realVars[51] /* MatStm1.compMolFrac[3,2] variable */,0.0);
    tmp90 = LessEq(data->localData[0]->realVars[51] /* MatStm1.compMolFrac[3,2] variable */,1.0);
    if(!(tmp89 && tmp90))
    {
      tmp92 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[51] /* MatStm1.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp91),tmp92);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp93 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1256
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,1], "g"));
*/
void mixer1_eqFunction_1256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1256};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  static const MMC_DEFSTRINGLIT(tmp96,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp97;
  static int tmp98 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp98)
  {
    tmp94 = GreaterEq(data->localData[0]->realVars[22] /* MatStm1.compMasFrac[1,1] variable */,0.0);
    tmp95 = LessEq(data->localData[0]->realVars[22] /* MatStm1.compMasFrac[1,1] variable */,1.0);
    if(!(tmp94 && tmp95))
    {
      tmp97 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[22] /* MatStm1.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp96),tmp97);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp98 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1257
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,2], "g"));
*/
void mixer1_eqFunction_1257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1257};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  static const MMC_DEFSTRINGLIT(tmp101,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp102;
  static int tmp103 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp103)
  {
    tmp99 = GreaterEq(data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */,0.0);
    tmp100 = LessEq(data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */,1.0);
    if(!(tmp99 && tmp100))
    {
      tmp102 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[23] /* MatStm1.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp101),tmp102);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp103 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1258
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,1], "g"));
*/
void mixer1_eqFunction_1258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1258};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  static const MMC_DEFSTRINGLIT(tmp106,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp107;
  static int tmp108 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp108)
  {
    tmp104 = GreaterEq(data->localData[0]->realVars[24] /* MatStm1.compMasFrac[2,1] variable */,0.0);
    tmp105 = LessEq(data->localData[0]->realVars[24] /* MatStm1.compMasFrac[2,1] variable */,1.0);
    if(!(tmp104 && tmp105))
    {
      tmp107 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[24] /* MatStm1.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp106),tmp107);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp108 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1259
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,2], "g"));
*/
void mixer1_eqFunction_1259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1259};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  static const MMC_DEFSTRINGLIT(tmp111,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp112;
  static int tmp113 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp113)
  {
    tmp109 = GreaterEq(data->localData[0]->realVars[25] /* MatStm1.compMasFrac[2,2] variable */,0.0);
    tmp110 = LessEq(data->localData[0]->realVars[25] /* MatStm1.compMasFrac[2,2] variable */,1.0);
    if(!(tmp109 && tmp110))
    {
      tmp112 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[25] /* MatStm1.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp111),tmp112);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp113 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1260
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,1], "g"));
*/
void mixer1_eqFunction_1260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1260};
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  static const MMC_DEFSTRINGLIT(tmp116,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp117;
  static int tmp118 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp118)
  {
    tmp114 = GreaterEq(data->localData[0]->realVars[26] /* MatStm1.compMasFrac[3,1] variable */,0.0);
    tmp115 = LessEq(data->localData[0]->realVars[26] /* MatStm1.compMasFrac[3,1] variable */,1.0);
    if(!(tmp114 && tmp115))
    {
      tmp117 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[26] /* MatStm1.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp116),tmp117);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp118 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1261
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,2], "g"));
*/
void mixer1_eqFunction_1261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1261};
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  static const MMC_DEFSTRINGLIT(tmp121,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp122;
  static int tmp123 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp123)
  {
    tmp119 = GreaterEq(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[3,2] variable */,0.0);
    tmp120 = LessEq(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[3,2] variable */,1.0);
    if(!(tmp119 && tmp120))
    {
      tmp122 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp121),tmp122);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp123 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1262
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: " + String(MatStm1.compMolFlo[2,1], "g"));
*/
void mixer1_eqFunction_1262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1262};
  modelica_boolean tmp124;
  static const MMC_DEFSTRINGLIT(tmp125,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: ");
  modelica_string tmp126;
  static int tmp127 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp127)
  {
    tmp124 = GreaterEq(data->localData[0]->realVars[42] /* MatStm1.compMolFlo[2,1] variable */,0.0);
    if(!tmp124)
    {
      tmp126 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[42] /* MatStm1.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp125),tmp126);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp127 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1263
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: " + String(MatStm1.compMolFlo[2,2], "g"));
*/
void mixer1_eqFunction_1263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1263};
  modelica_boolean tmp128;
  static const MMC_DEFSTRINGLIT(tmp129,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: ");
  modelica_string tmp130;
  static int tmp131 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp131)
  {
    tmp128 = GreaterEq(data->localData[0]->realVars[43] /* MatStm1.compMolFlo[2,2] variable */,0.0);
    if(!tmp128)
    {
      tmp130 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[43] /* MatStm1.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp129),tmp130);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp131 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1264
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: " + String(MatStm1.compMolFlo[3,1], "g"));
*/
void mixer1_eqFunction_1264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1264};
  modelica_boolean tmp132;
  static const MMC_DEFSTRINGLIT(tmp133,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: ");
  modelica_string tmp134;
  static int tmp135 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp135)
  {
    tmp132 = GreaterEq(data->localData[0]->realVars[44] /* MatStm1.compMolFlo[3,1] variable */,0.0);
    if(!tmp132)
    {
      tmp134 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[44] /* MatStm1.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp133),tmp134);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp135 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1265
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: " + String(MatStm1.compMolFlo[3,2], "g"));
*/
void mixer1_eqFunction_1265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1265};
  modelica_boolean tmp136;
  static const MMC_DEFSTRINGLIT(tmp137,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: ");
  modelica_string tmp138;
  static int tmp139 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp139)
  {
    tmp136 = GreaterEq(data->localData[0]->realVars[45] /* MatStm1.compMolFlo[3,2] variable */,0.0);
    if(!tmp136)
    {
      tmp138 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[45] /* MatStm1.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp137),tmp138);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp139 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1266
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: " + String(MatStm1.compMasFlo[2,1], "g"));
*/
void mixer1_eqFunction_1266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1266};
  modelica_boolean tmp140;
  static const MMC_DEFSTRINGLIT(tmp141,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: ");
  modelica_string tmp142;
  static int tmp143 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp143)
  {
    tmp140 = GreaterEq(data->localData[0]->realVars[18] /* MatStm1.compMasFlo[2,1] variable */,0.0);
    if(!tmp140)
    {
      tmp142 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[18] /* MatStm1.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp141),tmp142);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp143 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1267
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: " + String(MatStm1.compMasFlo[2,2], "g"));
*/
void mixer1_eqFunction_1267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1267};
  modelica_boolean tmp144;
  static const MMC_DEFSTRINGLIT(tmp145,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: ");
  modelica_string tmp146;
  static int tmp147 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp147)
  {
    tmp144 = GreaterEq(data->localData[0]->realVars[19] /* MatStm1.compMasFlo[2,2] variable */,0.0);
    if(!tmp144)
    {
      tmp146 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[19] /* MatStm1.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp145),tmp146);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp147 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1268
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: " + String(MatStm1.compMasFlo[3,1], "g"));
*/
void mixer1_eqFunction_1268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1268};
  modelica_boolean tmp148;
  static const MMC_DEFSTRINGLIT(tmp149,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: ");
  modelica_string tmp150;
  static int tmp151 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp151)
  {
    tmp148 = GreaterEq(data->localData[0]->realVars[20] /* MatStm1.compMasFlo[3,1] variable */,0.0);
    if(!tmp148)
    {
      tmp150 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[20] /* MatStm1.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp149),tmp150);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp151 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1269
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: " + String(MatStm1.compMasFlo[3,2], "g"));
*/
void mixer1_eqFunction_1269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1269};
  modelica_boolean tmp152;
  static const MMC_DEFSTRINGLIT(tmp153,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: ");
  modelica_string tmp154;
  static int tmp155 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp155)
  {
    tmp152 = GreaterEq(data->localData[0]->realVars[21] /* MatStm1.compMasFlo[3,2] variable */,0.0);
    if(!tmp152)
    {
      tmp154 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[21] /* MatStm1.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp153),tmp154);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp155 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1270
type: ALGORITHM

  assert(MatStm1.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: " + String(MatStm1.K[1], "g"));
*/
void mixer1_eqFunction_1270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1270};
  modelica_boolean tmp156;
  static const MMC_DEFSTRINGLIT(tmp157,67,"Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: ");
  modelica_string tmp158;
  static int tmp159 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp159)
  {
    tmp156 = GreaterEq(data->localData[0]->realVars[5] /* MatStm1.K[1] variable */,0.0);
    if(!tmp156)
    {
      tmp158 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[5] /* MatStm1.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp157),tmp158);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp159 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1271
type: ALGORITHM

  assert(MatStm1.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: " + String(MatStm1.K[2], "g"));
*/
void mixer1_eqFunction_1271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1271};
  modelica_boolean tmp160;
  static const MMC_DEFSTRINGLIT(tmp161,67,"Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: ");
  modelica_string tmp162;
  static int tmp163 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp163)
  {
    tmp160 = GreaterEq(data->localData[0]->realVars[6] /* MatStm1.K[2] variable */,0.0);
    if(!tmp160)
    {
      tmp162 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[6] /* MatStm1.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp161),tmp162);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp163 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1272
type: ALGORITHM

  assert(MatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: " + String(MatStm2.liqPhasMolFrac, "g"));
*/
void mixer1_eqFunction_1272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1272};
  modelica_boolean tmp164;
  modelica_boolean tmp165;
  static const MMC_DEFSTRINGLIT(tmp166,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp167;
  static int tmp168 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp168)
  {
    tmp164 = GreaterEq(data->localData[0]->realVars[156] /* MatStm2.liqPhasMolFrac variable */,0.0);
    tmp165 = LessEq(data->localData[0]->realVars[156] /* MatStm2.liqPhasMolFrac variable */,1.0);
    if(!(tmp164 && tmp165))
    {
      tmp167 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[156] /* MatStm2.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 1273
type: ALGORITHM

  assert(MatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: " + String(MatStm2.liqPhasMasFrac, "g"));
*/
void mixer1_eqFunction_1273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1273};
  modelica_boolean tmp169;
  modelica_boolean tmp170;
  static const MMC_DEFSTRINGLIT(tmp171,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp172;
  static int tmp173 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp173)
  {
    tmp169 = GreaterEq(data->localData[0]->realVars[155] /* MatStm2.liqPhasMasFrac variable */,0.0);
    tmp170 = LessEq(data->localData[0]->realVars[155] /* MatStm2.liqPhasMasFrac variable */,1.0);
    if(!(tmp169 && tmp170))
    {
      tmp172 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[155] /* MatStm2.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp171),tmp172);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp173 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1274
type: ALGORITHM

  assert(MatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: " + String(MatStm2.vapPhasMasFrac, "g"));
*/
void mixer1_eqFunction_1274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1274};
  modelica_boolean tmp174;
  modelica_boolean tmp175;
  static const MMC_DEFSTRINGLIT(tmp176,88,"Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp177;
  static int tmp178 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp178)
  {
    tmp174 = GreaterEq(data->localData[0]->realVars[183] /* MatStm2.vapPhasMasFrac variable */,0.0);
    tmp175 = LessEq(data->localData[0]->realVars[183] /* MatStm2.vapPhasMasFrac variable */,1.0);
    if(!(tmp174 && tmp175))
    {
      tmp177 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[183] /* MatStm2.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp176),tmp177);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp178 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1275
type: ALGORITHM

  assert(MatStm2.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: " + String(MatStm2.totMolFlo[2], "g"));
*/
void mixer1_eqFunction_1275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1275};
  modelica_boolean tmp179;
  static const MMC_DEFSTRINGLIT(tmp180,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: ");
  modelica_string tmp181;
  static int tmp182 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp182)
  {
    tmp179 = GreaterEq(data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */,0.0);
    if(!tmp179)
    {
      tmp181 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[181] /* MatStm2.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp180),tmp181);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp182 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1276
type: ALGORITHM

  assert(MatStm2.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: " + String(MatStm2.totMolFlo[3], "g"));
*/
void mixer1_eqFunction_1276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1276};
  modelica_boolean tmp183;
  static const MMC_DEFSTRINGLIT(tmp184,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: ");
  modelica_string tmp185;
  static int tmp186 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp186)
  {
    tmp183 = GreaterEq(data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */,0.0);
    if(!tmp183)
    {
      tmp185 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[182] /* MatStm2.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp184),tmp185);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp186 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1277
type: ALGORITHM

  assert(MatStm2.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: " + String(MatStm2.totMasFlo[1], "g"));
*/
void mixer1_eqFunction_1277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1277};
  modelica_boolean tmp187;
  static const MMC_DEFSTRINGLIT(tmp188,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: ");
  modelica_string tmp189;
  static int tmp190 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp190)
  {
    tmp187 = GreaterEq(data->localData[0]->realVars[177] /* MatStm2.totMasFlo[1] variable */,0.0);
    if(!tmp187)
    {
      tmp189 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[177] /* MatStm2.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp188),tmp189);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp190 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1278
type: ALGORITHM

  assert(MatStm2.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: " + String(MatStm2.totMasFlo[2], "g"));
*/
void mixer1_eqFunction_1278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1278};
  modelica_boolean tmp191;
  static const MMC_DEFSTRINGLIT(tmp192,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: ");
  modelica_string tmp193;
  static int tmp194 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp194)
  {
    tmp191 = GreaterEq(data->localData[0]->realVars[178] /* MatStm2.totMasFlo[2] variable */,0.0);
    if(!tmp191)
    {
      tmp193 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[178] /* MatStm2.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp192),tmp193);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp194 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1279
type: ALGORITHM

  assert(MatStm2.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: " + String(MatStm2.totMasFlo[3], "g"));
*/
void mixer1_eqFunction_1279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1279};
  modelica_boolean tmp195;
  static const MMC_DEFSTRINGLIT(tmp196,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: ");
  modelica_string tmp197;
  static int tmp198 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp198)
  {
    tmp195 = GreaterEq(data->localData[0]->realVars[179] /* MatStm2.totMasFlo[3] variable */,0.0);
    if(!tmp195)
    {
      tmp197 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[179] /* MatStm2.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp196),tmp197);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp198 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1280
type: ALGORITHM

  assert(MatStm2.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: " + String(MatStm2.MW[1], "g"));
*/
void mixer1_eqFunction_1280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1280};
  modelica_boolean tmp199;
  static const MMC_DEFSTRINGLIT(tmp200,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: ");
  modelica_string tmp201;
  static int tmp202 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp202)
  {
    tmp199 = GreaterEq(data->localData[0]->realVars[98] /* MatStm2.MW[1] variable */,0.0);
    if(!tmp199)
    {
      tmp201 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[98] /* MatStm2.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp200),tmp201);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp202 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1281
type: ALGORITHM

  assert(MatStm2.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: " + String(MatStm2.MW[2], "g"));
*/
void mixer1_eqFunction_1281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1281};
  modelica_boolean tmp203;
  static const MMC_DEFSTRINGLIT(tmp204,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: ");
  modelica_string tmp205;
  static int tmp206 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp206)
  {
    tmp203 = GreaterEq(data->localData[0]->realVars[99] /* MatStm2.MW[2] variable */,0.0);
    if(!tmp203)
    {
      tmp205 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[99] /* MatStm2.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp204),tmp205);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp206 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1282
type: ALGORITHM

  assert(MatStm2.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: " + String(MatStm2.MW[3], "g"));
*/
void mixer1_eqFunction_1282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1282};
  modelica_boolean tmp207;
  static const MMC_DEFSTRINGLIT(tmp208,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: ");
  modelica_string tmp209;
  static int tmp210 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp210)
  {
    tmp207 = GreaterEq(data->localData[0]->realVars[100] /* MatStm2.MW[3] variable */,0.0);
    if(!tmp207)
    {
      tmp209 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[100] /* MatStm2.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp208),tmp209);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp210 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1283
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,1], "g"));
*/
void mixer1_eqFunction_1283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1283};
  modelica_boolean tmp211;
  modelica_boolean tmp212;
  static const MMC_DEFSTRINGLIT(tmp213,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp214;
  static int tmp215 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp215)
  {
    tmp211 = GreaterEq(data->localData[0]->realVars[139] /* MatStm2.compMolFrac[2,1] variable */,0.0);
    tmp212 = LessEq(data->localData[0]->realVars[139] /* MatStm2.compMolFrac[2,1] variable */,1.0);
    if(!(tmp211 && tmp212))
    {
      tmp214 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[139] /* MatStm2.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp213),tmp214);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp215 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1284
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,2], "g"));
*/
void mixer1_eqFunction_1284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1284};
  modelica_boolean tmp216;
  modelica_boolean tmp217;
  static const MMC_DEFSTRINGLIT(tmp218,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp219;
  static int tmp220 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp220)
  {
    tmp216 = GreaterEq(data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,2] variable */,0.0);
    tmp217 = LessEq(data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,2] variable */,1.0);
    if(!(tmp216 && tmp217))
    {
      tmp219 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[140] /* MatStm2.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp218),tmp219);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp220 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1285
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,1], "g"));
*/
void mixer1_eqFunction_1285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1285};
  modelica_boolean tmp221;
  modelica_boolean tmp222;
  static const MMC_DEFSTRINGLIT(tmp223,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp224;
  static int tmp225 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp225)
  {
    tmp221 = GreaterEq(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[3,1] variable */,0.0);
    tmp222 = LessEq(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[3,1] variable */,1.0);
    if(!(tmp221 && tmp222))
    {
      tmp224 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp223),tmp224);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp225 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1286
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,2], "g"));
*/
void mixer1_eqFunction_1286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1286};
  modelica_boolean tmp226;
  modelica_boolean tmp227;
  static const MMC_DEFSTRINGLIT(tmp228,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp229;
  static int tmp230 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp230)
  {
    tmp226 = GreaterEq(data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,2] variable */,0.0);
    tmp227 = LessEq(data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,2] variable */,1.0);
    if(!(tmp226 && tmp227))
    {
      tmp229 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[142] /* MatStm2.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp228),tmp229);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp230 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1287
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,1], "g"));
*/
void mixer1_eqFunction_1287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1287};
  modelica_boolean tmp231;
  modelica_boolean tmp232;
  static const MMC_DEFSTRINGLIT(tmp233,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp234;
  static int tmp235 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp235)
  {
    tmp231 = GreaterEq(data->localData[0]->realVars[113] /* MatStm2.compMasFrac[1,1] variable */,0.0);
    tmp232 = LessEq(data->localData[0]->realVars[113] /* MatStm2.compMasFrac[1,1] variable */,1.0);
    if(!(tmp231 && tmp232))
    {
      tmp234 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[113] /* MatStm2.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp233),tmp234);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp235 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1288
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,2], "g"));
*/
void mixer1_eqFunction_1288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1288};
  modelica_boolean tmp236;
  modelica_boolean tmp237;
  static const MMC_DEFSTRINGLIT(tmp238,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp239;
  static int tmp240 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp240)
  {
    tmp236 = GreaterEq(data->localData[0]->realVars[114] /* MatStm2.compMasFrac[1,2] variable */,0.0);
    tmp237 = LessEq(data->localData[0]->realVars[114] /* MatStm2.compMasFrac[1,2] variable */,1.0);
    if(!(tmp236 && tmp237))
    {
      tmp239 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[114] /* MatStm2.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp238),tmp239);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp240 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1289
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,1], "g"));
*/
void mixer1_eqFunction_1289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1289};
  modelica_boolean tmp241;
  modelica_boolean tmp242;
  static const MMC_DEFSTRINGLIT(tmp243,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp244;
  static int tmp245 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp245)
  {
    tmp241 = GreaterEq(data->localData[0]->realVars[115] /* MatStm2.compMasFrac[2,1] variable */,0.0);
    tmp242 = LessEq(data->localData[0]->realVars[115] /* MatStm2.compMasFrac[2,1] variable */,1.0);
    if(!(tmp241 && tmp242))
    {
      tmp244 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[115] /* MatStm2.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp243),tmp244);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp245 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1290
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,2], "g"));
*/
void mixer1_eqFunction_1290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1290};
  modelica_boolean tmp246;
  modelica_boolean tmp247;
  static const MMC_DEFSTRINGLIT(tmp248,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp249;
  static int tmp250 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp250)
  {
    tmp246 = GreaterEq(data->localData[0]->realVars[116] /* MatStm2.compMasFrac[2,2] variable */,0.0);
    tmp247 = LessEq(data->localData[0]->realVars[116] /* MatStm2.compMasFrac[2,2] variable */,1.0);
    if(!(tmp246 && tmp247))
    {
      tmp249 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[116] /* MatStm2.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp248),tmp249);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp250 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1291
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,1], "g"));
*/
void mixer1_eqFunction_1291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1291};
  modelica_boolean tmp251;
  modelica_boolean tmp252;
  static const MMC_DEFSTRINGLIT(tmp253,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp254;
  static int tmp255 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp255)
  {
    tmp251 = GreaterEq(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[3,1] variable */,0.0);
    tmp252 = LessEq(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[3,1] variable */,1.0);
    if(!(tmp251 && tmp252))
    {
      tmp254 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp253),tmp254);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp255 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1292
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,2], "g"));
*/
void mixer1_eqFunction_1292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1292};
  modelica_boolean tmp256;
  modelica_boolean tmp257;
  static const MMC_DEFSTRINGLIT(tmp258,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp259;
  static int tmp260 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp260)
  {
    tmp256 = GreaterEq(data->localData[0]->realVars[118] /* MatStm2.compMasFrac[3,2] variable */,0.0);
    tmp257 = LessEq(data->localData[0]->realVars[118] /* MatStm2.compMasFrac[3,2] variable */,1.0);
    if(!(tmp256 && tmp257))
    {
      tmp259 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[118] /* MatStm2.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp258),tmp259);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp260 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1293
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: " + String(MatStm2.compMolFlo[2,1], "g"));
*/
void mixer1_eqFunction_1293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1293};
  modelica_boolean tmp261;
  static const MMC_DEFSTRINGLIT(tmp262,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: ");
  modelica_string tmp263;
  static int tmp264 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp264)
  {
    tmp261 = GreaterEq(data->localData[0]->realVars[133] /* MatStm2.compMolFlo[2,1] variable */,0.0);
    if(!tmp261)
    {
      tmp263 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[133] /* MatStm2.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp262),tmp263);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp264 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1294
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: " + String(MatStm2.compMolFlo[2,2], "g"));
*/
void mixer1_eqFunction_1294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1294};
  modelica_boolean tmp265;
  static const MMC_DEFSTRINGLIT(tmp266,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: ");
  modelica_string tmp267;
  static int tmp268 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp268)
  {
    tmp265 = GreaterEq(data->localData[0]->realVars[134] /* MatStm2.compMolFlo[2,2] variable */,0.0);
    if(!tmp265)
    {
      tmp267 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[134] /* MatStm2.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp266),tmp267);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp268 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1295
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: " + String(MatStm2.compMolFlo[3,1], "g"));
*/
void mixer1_eqFunction_1295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1295};
  modelica_boolean tmp269;
  static const MMC_DEFSTRINGLIT(tmp270,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: ");
  modelica_string tmp271;
  static int tmp272 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp272)
  {
    tmp269 = GreaterEq(data->localData[0]->realVars[135] /* MatStm2.compMolFlo[3,1] variable */,0.0);
    if(!tmp269)
    {
      tmp271 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[135] /* MatStm2.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp270),tmp271);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp272 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1296
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: " + String(MatStm2.compMolFlo[3,2], "g"));
*/
void mixer1_eqFunction_1296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1296};
  modelica_boolean tmp273;
  static const MMC_DEFSTRINGLIT(tmp274,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: ");
  modelica_string tmp275;
  static int tmp276 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp276)
  {
    tmp273 = GreaterEq(data->localData[0]->realVars[136] /* MatStm2.compMolFlo[3,2] variable */,0.0);
    if(!tmp273)
    {
      tmp275 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[136] /* MatStm2.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp274),tmp275);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp276 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1297
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: " + String(MatStm2.compMasFlo[2,1], "g"));
*/
void mixer1_eqFunction_1297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1297};
  modelica_boolean tmp277;
  static const MMC_DEFSTRINGLIT(tmp278,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: ");
  modelica_string tmp279;
  static int tmp280 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp280)
  {
    tmp277 = GreaterEq(data->localData[0]->realVars[109] /* MatStm2.compMasFlo[2,1] variable */,0.0);
    if(!tmp277)
    {
      tmp279 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[109] /* MatStm2.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp278),tmp279);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp280 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1298
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: " + String(MatStm2.compMasFlo[2,2], "g"));
*/
void mixer1_eqFunction_1298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1298};
  modelica_boolean tmp281;
  static const MMC_DEFSTRINGLIT(tmp282,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: ");
  modelica_string tmp283;
  static int tmp284 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp284)
  {
    tmp281 = GreaterEq(data->localData[0]->realVars[110] /* MatStm2.compMasFlo[2,2] variable */,0.0);
    if(!tmp281)
    {
      tmp283 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[110] /* MatStm2.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp282),tmp283);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp284 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1299
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: " + String(MatStm2.compMasFlo[3,1], "g"));
*/
void mixer1_eqFunction_1299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1299};
  modelica_boolean tmp285;
  static const MMC_DEFSTRINGLIT(tmp286,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: ");
  modelica_string tmp287;
  static int tmp288 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp288)
  {
    tmp285 = GreaterEq(data->localData[0]->realVars[111] /* MatStm2.compMasFlo[3,1] variable */,0.0);
    if(!tmp285)
    {
      tmp287 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[111] /* MatStm2.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp286),tmp287);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp288 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1300
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: " + String(MatStm2.compMasFlo[3,2], "g"));
*/
void mixer1_eqFunction_1300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1300};
  modelica_boolean tmp289;
  static const MMC_DEFSTRINGLIT(tmp290,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: ");
  modelica_string tmp291;
  static int tmp292 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp292)
  {
    tmp289 = GreaterEq(data->localData[0]->realVars[112] /* MatStm2.compMasFlo[3,2] variable */,0.0);
    if(!tmp289)
    {
      tmp291 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[112] /* MatStm2.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp290),tmp291);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp292 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1301
type: ALGORITHM

  assert(MatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: " + String(MatStm3.liqPhasMolFrac, "g"));
*/
void mixer1_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1301};
  modelica_boolean tmp293;
  modelica_boolean tmp294;
  static const MMC_DEFSTRINGLIT(tmp295,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp296;
  static int tmp297 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp297)
  {
    tmp293 = GreaterEq(data->localData[0]->realVars[246] /* MatStm3.liqPhasMolFrac variable */,0.0);
    tmp294 = LessEq(data->localData[0]->realVars[246] /* MatStm3.liqPhasMolFrac variable */,1.0);
    if(!(tmp293 && tmp294))
    {
      tmp296 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[246] /* MatStm3.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp295),tmp296);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp297 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1302
type: ALGORITHM

  assert(MatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: " + String(MatStm3.liqPhasMasFrac, "g"));
*/
void mixer1_eqFunction_1302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1302};
  modelica_boolean tmp298;
  modelica_boolean tmp299;
  static const MMC_DEFSTRINGLIT(tmp300,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp301;
  static int tmp302 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp302)
  {
    tmp298 = GreaterEq(data->localData[0]->realVars[245] /* MatStm3.liqPhasMasFrac variable */,0.0);
    tmp299 = LessEq(data->localData[0]->realVars[245] /* MatStm3.liqPhasMasFrac variable */,1.0);
    if(!(tmp298 && tmp299))
    {
      tmp301 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[245] /* MatStm3.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp300),tmp301);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp302 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1303
type: ALGORITHM

  assert(MatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: " + String(MatStm3.vapPhasMasFrac, "g"));
*/
void mixer1_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1303};
  modelica_boolean tmp303;
  modelica_boolean tmp304;
  static const MMC_DEFSTRINGLIT(tmp305,88,"Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp306;
  static int tmp307 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp307)
  {
    tmp303 = GreaterEq(data->localData[0]->realVars[273] /* MatStm3.vapPhasMasFrac variable */,0.0);
    tmp304 = LessEq(data->localData[0]->realVars[273] /* MatStm3.vapPhasMasFrac variable */,1.0);
    if(!(tmp303 && tmp304))
    {
      tmp306 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[273] /* MatStm3.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp305),tmp306);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp307 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1304
type: ALGORITHM

  assert(MatStm3.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: " + String(MatStm3.totMolFlo[2], "g"));
*/
void mixer1_eqFunction_1304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1304};
  modelica_boolean tmp308;
  static const MMC_DEFSTRINGLIT(tmp309,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: ");
  modelica_string tmp310;
  static int tmp311 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp311)
  {
    tmp308 = GreaterEq(data->localData[0]->realVars[271] /* MatStm3.totMolFlo[2] variable */,0.0);
    if(!tmp308)
    {
      tmp310 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[271] /* MatStm3.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp309),tmp310);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp311 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1305
type: ALGORITHM

  assert(MatStm3.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: " + String(MatStm3.totMolFlo[3], "g"));
*/
void mixer1_eqFunction_1305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1305};
  modelica_boolean tmp312;
  static const MMC_DEFSTRINGLIT(tmp313,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: ");
  modelica_string tmp314;
  static int tmp315 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp315)
  {
    tmp312 = GreaterEq(data->localData[0]->realVars[272] /* MatStm3.totMolFlo[3] variable */,0.0);
    if(!tmp312)
    {
      tmp314 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[272] /* MatStm3.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp313),tmp314);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp315 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1306
type: ALGORITHM

  assert(MatStm3.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: " + String(MatStm3.totMasFlo[1], "g"));
*/
void mixer1_eqFunction_1306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1306};
  modelica_boolean tmp316;
  static const MMC_DEFSTRINGLIT(tmp317,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: ");
  modelica_string tmp318;
  static int tmp319 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp319)
  {
    tmp316 = GreaterEq(data->localData[0]->realVars[267] /* MatStm3.totMasFlo[1] variable */,0.0);
    if(!tmp316)
    {
      tmp318 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[267] /* MatStm3.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp317),tmp318);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp319 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1307
type: ALGORITHM

  assert(MatStm3.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: " + String(MatStm3.totMasFlo[2], "g"));
*/
void mixer1_eqFunction_1307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1307};
  modelica_boolean tmp320;
  static const MMC_DEFSTRINGLIT(tmp321,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: ");
  modelica_string tmp322;
  static int tmp323 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp323)
  {
    tmp320 = GreaterEq(data->localData[0]->realVars[268] /* MatStm3.totMasFlo[2] variable */,0.0);
    if(!tmp320)
    {
      tmp322 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[268] /* MatStm3.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp321),tmp322);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp323 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1308
type: ALGORITHM

  assert(MatStm3.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: " + String(MatStm3.totMasFlo[3], "g"));
*/
void mixer1_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1308};
  modelica_boolean tmp324;
  static const MMC_DEFSTRINGLIT(tmp325,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: ");
  modelica_string tmp326;
  static int tmp327 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp327)
  {
    tmp324 = GreaterEq(data->localData[0]->realVars[269] /* MatStm3.totMasFlo[3] variable */,0.0);
    if(!tmp324)
    {
      tmp326 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[269] /* MatStm3.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp325),tmp326);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp327 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1309
type: ALGORITHM

  assert(MatStm3.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: " + String(MatStm3.MW[1], "g"));
*/
void mixer1_eqFunction_1309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1309};
  modelica_boolean tmp328;
  static const MMC_DEFSTRINGLIT(tmp329,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: ");
  modelica_string tmp330;
  static int tmp331 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp331)
  {
    tmp328 = GreaterEq(data->localData[0]->realVars[188] /* MatStm3.MW[1] variable */,0.0);
    if(!tmp328)
    {
      tmp330 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[188] /* MatStm3.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp329),tmp330);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp331 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1310
type: ALGORITHM

  assert(MatStm3.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: " + String(MatStm3.MW[2], "g"));
*/
void mixer1_eqFunction_1310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1310};
  modelica_boolean tmp332;
  static const MMC_DEFSTRINGLIT(tmp333,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: ");
  modelica_string tmp334;
  static int tmp335 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp335)
  {
    tmp332 = GreaterEq(data->localData[0]->realVars[189] /* MatStm3.MW[2] variable */,0.0);
    if(!tmp332)
    {
      tmp334 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[189] /* MatStm3.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp333),tmp334);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp335 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1311
type: ALGORITHM

  assert(MatStm3.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: " + String(MatStm3.MW[3], "g"));
*/
void mixer1_eqFunction_1311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1311};
  modelica_boolean tmp336;
  static const MMC_DEFSTRINGLIT(tmp337,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: ");
  modelica_string tmp338;
  static int tmp339 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp339)
  {
    tmp336 = GreaterEq(data->localData[0]->realVars[190] /* MatStm3.MW[3] variable */,0.0);
    if(!tmp336)
    {
      tmp338 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[190] /* MatStm3.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp337),tmp338);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp339 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1312
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,1], "g"));
*/
void mixer1_eqFunction_1312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1312};
  modelica_boolean tmp340;
  modelica_boolean tmp341;
  static const MMC_DEFSTRINGLIT(tmp342,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp343;
  static int tmp344 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp344)
  {
    tmp340 = GreaterEq(data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,1] variable */,0.0);
    tmp341 = LessEq(data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,1] variable */,1.0);
    if(!(tmp340 && tmp341))
    {
      tmp343 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[229] /* MatStm3.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp342),tmp343);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp344 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1313
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,2], "g"));
*/
void mixer1_eqFunction_1313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1313};
  modelica_boolean tmp345;
  modelica_boolean tmp346;
  static const MMC_DEFSTRINGLIT(tmp347,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp348;
  static int tmp349 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp349)
  {
    tmp345 = GreaterEq(data->localData[0]->realVars[230] /* MatStm3.compMolFrac[2,2] variable */,0.0);
    tmp346 = LessEq(data->localData[0]->realVars[230] /* MatStm3.compMolFrac[2,2] variable */,1.0);
    if(!(tmp345 && tmp346))
    {
      tmp348 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[230] /* MatStm3.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp347),tmp348);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp349 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1314
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,1], "g"));
*/
void mixer1_eqFunction_1314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1314};
  modelica_boolean tmp350;
  modelica_boolean tmp351;
  static const MMC_DEFSTRINGLIT(tmp352,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp353;
  static int tmp354 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp354)
  {
    tmp350 = GreaterEq(data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,1] variable */,0.0);
    tmp351 = LessEq(data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,1] variable */,1.0);
    if(!(tmp350 && tmp351))
    {
      tmp353 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[231] /* MatStm3.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp352),tmp353);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp354 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1315
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,2], "g"));
*/
void mixer1_eqFunction_1315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1315};
  modelica_boolean tmp355;
  modelica_boolean tmp356;
  static const MMC_DEFSTRINGLIT(tmp357,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp358;
  static int tmp359 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp359)
  {
    tmp355 = GreaterEq(data->localData[0]->realVars[232] /* MatStm3.compMolFrac[3,2] variable */,0.0);
    tmp356 = LessEq(data->localData[0]->realVars[232] /* MatStm3.compMolFrac[3,2] variable */,1.0);
    if(!(tmp355 && tmp356))
    {
      tmp358 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[232] /* MatStm3.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp357),tmp358);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp359 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1316
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,1], "g"));
*/
void mixer1_eqFunction_1316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1316};
  modelica_boolean tmp360;
  modelica_boolean tmp361;
  static const MMC_DEFSTRINGLIT(tmp362,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp363;
  static int tmp364 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp364)
  {
    tmp360 = GreaterEq(data->localData[0]->realVars[203] /* MatStm3.compMasFrac[1,1] variable */,0.0);
    tmp361 = LessEq(data->localData[0]->realVars[203] /* MatStm3.compMasFrac[1,1] variable */,1.0);
    if(!(tmp360 && tmp361))
    {
      tmp363 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[203] /* MatStm3.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp362),tmp363);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp364 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1317
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,2], "g"));
*/
void mixer1_eqFunction_1317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1317};
  modelica_boolean tmp365;
  modelica_boolean tmp366;
  static const MMC_DEFSTRINGLIT(tmp367,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp368;
  static int tmp369 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp369)
  {
    tmp365 = GreaterEq(data->localData[0]->realVars[204] /* MatStm3.compMasFrac[1,2] variable */,0.0);
    tmp366 = LessEq(data->localData[0]->realVars[204] /* MatStm3.compMasFrac[1,2] variable */,1.0);
    if(!(tmp365 && tmp366))
    {
      tmp368 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[204] /* MatStm3.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp367),tmp368);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp369 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1318
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,1], "g"));
*/
void mixer1_eqFunction_1318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1318};
  modelica_boolean tmp370;
  modelica_boolean tmp371;
  static const MMC_DEFSTRINGLIT(tmp372,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp373;
  static int tmp374 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp374)
  {
    tmp370 = GreaterEq(data->localData[0]->realVars[205] /* MatStm3.compMasFrac[2,1] variable */,0.0);
    tmp371 = LessEq(data->localData[0]->realVars[205] /* MatStm3.compMasFrac[2,1] variable */,1.0);
    if(!(tmp370 && tmp371))
    {
      tmp373 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[205] /* MatStm3.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp372),tmp373);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp374 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1319
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,2], "g"));
*/
void mixer1_eqFunction_1319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1319};
  modelica_boolean tmp375;
  modelica_boolean tmp376;
  static const MMC_DEFSTRINGLIT(tmp377,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp378;
  static int tmp379 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp379)
  {
    tmp375 = GreaterEq(data->localData[0]->realVars[206] /* MatStm3.compMasFrac[2,2] variable */,0.0);
    tmp376 = LessEq(data->localData[0]->realVars[206] /* MatStm3.compMasFrac[2,2] variable */,1.0);
    if(!(tmp375 && tmp376))
    {
      tmp378 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[206] /* MatStm3.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp377),tmp378);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp379 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1320
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,1], "g"));
*/
void mixer1_eqFunction_1320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1320};
  modelica_boolean tmp380;
  modelica_boolean tmp381;
  static const MMC_DEFSTRINGLIT(tmp382,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp383;
  static int tmp384 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp384)
  {
    tmp380 = GreaterEq(data->localData[0]->realVars[207] /* MatStm3.compMasFrac[3,1] variable */,0.0);
    tmp381 = LessEq(data->localData[0]->realVars[207] /* MatStm3.compMasFrac[3,1] variable */,1.0);
    if(!(tmp380 && tmp381))
    {
      tmp383 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[207] /* MatStm3.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp382),tmp383);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp384 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1321
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,2], "g"));
*/
void mixer1_eqFunction_1321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1321};
  modelica_boolean tmp385;
  modelica_boolean tmp386;
  static const MMC_DEFSTRINGLIT(tmp387,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp388;
  static int tmp389 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp389)
  {
    tmp385 = GreaterEq(data->localData[0]->realVars[208] /* MatStm3.compMasFrac[3,2] variable */,0.0);
    tmp386 = LessEq(data->localData[0]->realVars[208] /* MatStm3.compMasFrac[3,2] variable */,1.0);
    if(!(tmp385 && tmp386))
    {
      tmp388 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[208] /* MatStm3.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp387),tmp388);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp389 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1322
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: " + String(MatStm3.compMolFlo[2,1], "g"));
*/
void mixer1_eqFunction_1322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1322};
  modelica_boolean tmp390;
  static const MMC_DEFSTRINGLIT(tmp391,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: ");
  modelica_string tmp392;
  static int tmp393 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp393)
  {
    tmp390 = GreaterEq(data->localData[0]->realVars[223] /* MatStm3.compMolFlo[2,1] variable */,0.0);
    if(!tmp390)
    {
      tmp392 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[223] /* MatStm3.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp391),tmp392);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp393 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1323
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: " + String(MatStm3.compMolFlo[2,2], "g"));
*/
void mixer1_eqFunction_1323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1323};
  modelica_boolean tmp394;
  static const MMC_DEFSTRINGLIT(tmp395,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: ");
  modelica_string tmp396;
  static int tmp397 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp397)
  {
    tmp394 = GreaterEq(data->localData[0]->realVars[224] /* MatStm3.compMolFlo[2,2] variable */,0.0);
    if(!tmp394)
    {
      tmp396 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[224] /* MatStm3.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp395),tmp396);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp397 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1324
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: " + String(MatStm3.compMolFlo[3,1], "g"));
*/
void mixer1_eqFunction_1324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1324};
  modelica_boolean tmp398;
  static const MMC_DEFSTRINGLIT(tmp399,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: ");
  modelica_string tmp400;
  static int tmp401 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp401)
  {
    tmp398 = GreaterEq(data->localData[0]->realVars[225] /* MatStm3.compMolFlo[3,1] variable */,0.0);
    if(!tmp398)
    {
      tmp400 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[225] /* MatStm3.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp399),tmp400);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp401 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1325
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: " + String(MatStm3.compMolFlo[3,2], "g"));
*/
void mixer1_eqFunction_1325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1325};
  modelica_boolean tmp402;
  static const MMC_DEFSTRINGLIT(tmp403,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: ");
  modelica_string tmp404;
  static int tmp405 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp405)
  {
    tmp402 = GreaterEq(data->localData[0]->realVars[226] /* MatStm3.compMolFlo[3,2] variable */,0.0);
    if(!tmp402)
    {
      tmp404 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[226] /* MatStm3.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp403),tmp404);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp405 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1326
type: ALGORITHM

  assert(MatStm3.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: " + String(MatStm3.compMasFlo[2,1], "g"));
*/
void mixer1_eqFunction_1326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1326};
  modelica_boolean tmp406;
  static const MMC_DEFSTRINGLIT(tmp407,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: ");
  modelica_string tmp408;
  static int tmp409 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp409)
  {
    tmp406 = GreaterEq(data->localData[0]->realVars[199] /* MatStm3.compMasFlo[2,1] variable */,0.0);
    if(!tmp406)
    {
      tmp408 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[199] /* MatStm3.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp407),tmp408);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp409 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1327
type: ALGORITHM

  assert(MatStm3.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: " + String(MatStm3.compMasFlo[2,2], "g"));
*/
void mixer1_eqFunction_1327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1327};
  modelica_boolean tmp410;
  static const MMC_DEFSTRINGLIT(tmp411,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: ");
  modelica_string tmp412;
  static int tmp413 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp413)
  {
    tmp410 = GreaterEq(data->localData[0]->realVars[200] /* MatStm3.compMasFlo[2,2] variable */,0.0);
    if(!tmp410)
    {
      tmp412 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[200] /* MatStm3.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp411),tmp412);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp413 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1328
type: ALGORITHM

  assert(MatStm3.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: " + String(MatStm3.compMasFlo[3,1], "g"));
*/
void mixer1_eqFunction_1328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1328};
  modelica_boolean tmp414;
  static const MMC_DEFSTRINGLIT(tmp415,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: ");
  modelica_string tmp416;
  static int tmp417 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp417)
  {
    tmp414 = GreaterEq(data->localData[0]->realVars[201] /* MatStm3.compMasFlo[3,1] variable */,0.0);
    if(!tmp414)
    {
      tmp416 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[201] /* MatStm3.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp415),tmp416);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp417 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1329
type: ALGORITHM

  assert(MatStm3.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: " + String(MatStm3.compMasFlo[3,2], "g"));
*/
void mixer1_eqFunction_1329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1329};
  modelica_boolean tmp418;
  static const MMC_DEFSTRINGLIT(tmp419,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: ");
  modelica_string tmp420;
  static int tmp421 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp421)
  {
    tmp418 = GreaterEq(data->localData[0]->realVars[202] /* MatStm3.compMasFlo[3,2] variable */,0.0);
    if(!tmp418)
    {
      tmp420 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[202] /* MatStm3.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp419),tmp420);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp421 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1234
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: " + String(MatStm1.compMasFlo[1,1], "g"));
*/
void mixer1_eqFunction_1234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1234};
  modelica_boolean tmp422;
  static const MMC_DEFSTRINGLIT(tmp423,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: ");
  modelica_string tmp424;
  static int tmp425 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp425)
  {
    tmp422 = GreaterEq(data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */,0.0);
    if(!tmp422)
    {
      tmp424 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[16] /* MatStm1.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp423),tmp424);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp425 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1233
type: ALGORITHM

  assert(MatStm1.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,1], has value: " + String(MatStm1.compMolFlo[1,1], "g"));
*/
void mixer1_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1233};
  modelica_boolean tmp426;
  static const MMC_DEFSTRINGLIT(tmp427,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,1], has value: ");
  modelica_string tmp428;
  static int tmp429 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp429)
  {
    tmp426 = GreaterEq(data->localData[0]->realVars[40] /* MatStm1.compMolFlo[1,1] variable */,0.0);
    if(!tmp426)
    {
      tmp428 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[40] /* MatStm1.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp427),tmp428);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp429 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1232
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: " + String(MatStm1.compMasFlo[1,2], "g"));
*/
void mixer1_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1232};
  modelica_boolean tmp430;
  static const MMC_DEFSTRINGLIT(tmp431,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: ");
  modelica_string tmp432;
  static int tmp433 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp433)
  {
    tmp430 = GreaterEq(data->localData[0]->realVars[17] /* MatStm1.compMasFlo[1,2] variable */,0.0);
    if(!tmp430)
    {
      tmp432 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[17] /* MatStm1.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp431),tmp432);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp433 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1231
type: ALGORITHM

  assert(MatStm1.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,2], has value: " + String(MatStm1.compMolFlo[1,2], "g"));
*/
void mixer1_eqFunction_1231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1231};
  modelica_boolean tmp434;
  static const MMC_DEFSTRINGLIT(tmp435,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,2], has value: ");
  modelica_string tmp436;
  static int tmp437 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp437)
  {
    tmp434 = GreaterEq(data->localData[0]->realVars[41] /* MatStm1.compMolFlo[1,2] variable */,0.0);
    if(!tmp434)
    {
      tmp436 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[41] /* MatStm1.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp435),tmp436);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp437 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int mixer1_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  mixer1_eqFunction_1235(data, threadData);

  mixer1_eqFunction_1236(data, threadData);

  mixer1_eqFunction_1237(data, threadData);

  mixer1_eqFunction_1238(data, threadData);

  mixer1_eqFunction_1239(data, threadData);

  mixer1_eqFunction_1240(data, threadData);

  mixer1_eqFunction_1241(data, threadData);

  mixer1_eqFunction_1242(data, threadData);

  mixer1_eqFunction_1243(data, threadData);

  mixer1_eqFunction_1244(data, threadData);

  mixer1_eqFunction_1245(data, threadData);

  mixer1_eqFunction_1246(data, threadData);

  mixer1_eqFunction_1247(data, threadData);

  mixer1_eqFunction_1248(data, threadData);

  mixer1_eqFunction_1249(data, threadData);

  mixer1_eqFunction_1250(data, threadData);

  mixer1_eqFunction_1251(data, threadData);

  mixer1_eqFunction_1252(data, threadData);

  mixer1_eqFunction_1253(data, threadData);

  mixer1_eqFunction_1254(data, threadData);

  mixer1_eqFunction_1255(data, threadData);

  mixer1_eqFunction_1256(data, threadData);

  mixer1_eqFunction_1257(data, threadData);

  mixer1_eqFunction_1258(data, threadData);

  mixer1_eqFunction_1259(data, threadData);

  mixer1_eqFunction_1260(data, threadData);

  mixer1_eqFunction_1261(data, threadData);

  mixer1_eqFunction_1262(data, threadData);

  mixer1_eqFunction_1263(data, threadData);

  mixer1_eqFunction_1264(data, threadData);

  mixer1_eqFunction_1265(data, threadData);

  mixer1_eqFunction_1266(data, threadData);

  mixer1_eqFunction_1267(data, threadData);

  mixer1_eqFunction_1268(data, threadData);

  mixer1_eqFunction_1269(data, threadData);

  mixer1_eqFunction_1270(data, threadData);

  mixer1_eqFunction_1271(data, threadData);

  mixer1_eqFunction_1272(data, threadData);

  mixer1_eqFunction_1273(data, threadData);

  mixer1_eqFunction_1274(data, threadData);

  mixer1_eqFunction_1275(data, threadData);

  mixer1_eqFunction_1276(data, threadData);

  mixer1_eqFunction_1277(data, threadData);

  mixer1_eqFunction_1278(data, threadData);

  mixer1_eqFunction_1279(data, threadData);

  mixer1_eqFunction_1280(data, threadData);

  mixer1_eqFunction_1281(data, threadData);

  mixer1_eqFunction_1282(data, threadData);

  mixer1_eqFunction_1283(data, threadData);

  mixer1_eqFunction_1284(data, threadData);

  mixer1_eqFunction_1285(data, threadData);

  mixer1_eqFunction_1286(data, threadData);

  mixer1_eqFunction_1287(data, threadData);

  mixer1_eqFunction_1288(data, threadData);

  mixer1_eqFunction_1289(data, threadData);

  mixer1_eqFunction_1290(data, threadData);

  mixer1_eqFunction_1291(data, threadData);

  mixer1_eqFunction_1292(data, threadData);

  mixer1_eqFunction_1293(data, threadData);

  mixer1_eqFunction_1294(data, threadData);

  mixer1_eqFunction_1295(data, threadData);

  mixer1_eqFunction_1296(data, threadData);

  mixer1_eqFunction_1297(data, threadData);

  mixer1_eqFunction_1298(data, threadData);

  mixer1_eqFunction_1299(data, threadData);

  mixer1_eqFunction_1300(data, threadData);

  mixer1_eqFunction_1301(data, threadData);

  mixer1_eqFunction_1302(data, threadData);

  mixer1_eqFunction_1303(data, threadData);

  mixer1_eqFunction_1304(data, threadData);

  mixer1_eqFunction_1305(data, threadData);

  mixer1_eqFunction_1306(data, threadData);

  mixer1_eqFunction_1307(data, threadData);

  mixer1_eqFunction_1308(data, threadData);

  mixer1_eqFunction_1309(data, threadData);

  mixer1_eqFunction_1310(data, threadData);

  mixer1_eqFunction_1311(data, threadData);

  mixer1_eqFunction_1312(data, threadData);

  mixer1_eqFunction_1313(data, threadData);

  mixer1_eqFunction_1314(data, threadData);

  mixer1_eqFunction_1315(data, threadData);

  mixer1_eqFunction_1316(data, threadData);

  mixer1_eqFunction_1317(data, threadData);

  mixer1_eqFunction_1318(data, threadData);

  mixer1_eqFunction_1319(data, threadData);

  mixer1_eqFunction_1320(data, threadData);

  mixer1_eqFunction_1321(data, threadData);

  mixer1_eqFunction_1322(data, threadData);

  mixer1_eqFunction_1323(data, threadData);

  mixer1_eqFunction_1324(data, threadData);

  mixer1_eqFunction_1325(data, threadData);

  mixer1_eqFunction_1326(data, threadData);

  mixer1_eqFunction_1327(data, threadData);

  mixer1_eqFunction_1328(data, threadData);

  mixer1_eqFunction_1329(data, threadData);

  mixer1_eqFunction_1234(data, threadData);

  mixer1_eqFunction_1233(data, threadData);

  mixer1_eqFunction_1232(data, threadData);

  mixer1_eqFunction_1231(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

