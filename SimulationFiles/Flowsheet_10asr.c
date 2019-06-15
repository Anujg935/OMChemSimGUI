/* Asserts */
#include "Flowsheet_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 2217
type: ALGORITHM

  assert(Mixer1.inVapPhasMolFrac[1] >= 0.0 and Mixer1.inVapPhasMolFrac[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[1] <= 1.0, has value: " + String(Mixer1.inVapPhasMolFrac[1], "g"));
*/
void Flowsheet_eqFunction_2217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2217};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,92,"Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[1] <= 1.0, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq(data->localData[0]->realVars[480] /* Mixer1.inVapPhasMolFrac[1] variable */,0.0);
    tmp1 = LessEq(data->localData[0]->realVars[480] /* Mixer1.inVapPhasMolFrac[1] variable */,1.0);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[480] /* Mixer1.inVapPhasMolFrac[1] variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 2218
type: ALGORITHM

  assert(Mixer1.inVapPhasMolFrac[2] >= 0.0 and Mixer1.inVapPhasMolFrac[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[2] <= 1.0, has value: " + String(Mixer1.inVapPhasMolFrac[2], "g"));
*/
void Flowsheet_eqFunction_2218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2218};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,92,"Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[2] <= 1.0, has value: ");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp9)
  {
    tmp5 = GreaterEq(data->localData[0]->realVars[481] /* Mixer1.inVapPhasMolFrac[2] variable */,0.0);
    tmp6 = LessEq(data->localData[0]->realVars[481] /* Mixer1.inVapPhasMolFrac[2] variable */,1.0);
    if(!(tmp5 && tmp6))
    {
      tmp8 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[481] /* Mixer1.inVapPhasMolFrac[2] variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 2219
type: ALGORITHM

  assert(Mixer1.inVapPhasMolFrac[3] >= 0.0 and Mixer1.inVapPhasMolFrac[3] <= 1.0, "Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[3] <= 1.0, has value: " + String(Mixer1.inVapPhasMolFrac[3], "g"));
*/
void Flowsheet_eqFunction_2219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2219};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,92,"Variable violating min/max constraint: 0.0 <= Mixer1.inVapPhasMolFrac[3] <= 1.0, has value: ");
  modelica_string tmp13;
  static int tmp14 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp14)
  {
    tmp10 = GreaterEq(data->localData[0]->realVars[482] /* Mixer1.inVapPhasMolFrac[3] variable */,0.0);
    tmp11 = LessEq(data->localData[0]->realVars[482] /* Mixer1.inVapPhasMolFrac[3] variable */,1.0);
    if(!(tmp10 && tmp11))
    {
      tmp13 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[482] /* Mixer1.inVapPhasMolFrac[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp12),tmp13);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4319,7,4319,434,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMixer1.inVapPhasMolFrac[3] >= 0.0 and Mixer1.inVapPhasMolFrac[3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp14 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2220
type: ALGORITHM

  assert(MatStm1.T >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.T, has value: " + String(MatStm1.T, "g"));
*/
void Flowsheet_eqFunction_2220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2220};
  modelica_boolean tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,64,"Variable violating min constraint: 0.0 <= MatStm1.T, has value: ");
  modelica_string tmp17;
  static int tmp18 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp18)
  {
    tmp15 = GreaterEq(data->localData[0]->realVars[19] /* MatStm1.T variable */,0.0);
    if(!tmp15)
    {
      tmp17 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[19] /* MatStm1.T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp16),tmp17);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4168,3,4168,75,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp18 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2221
type: ALGORITHM

  assert(MatStm1.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.Pbubl, has value: " + String(MatStm1.Pbubl, "g"));
*/
void Flowsheet_eqFunction_2221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2221};
  modelica_boolean tmp19;
  static const MMC_DEFSTRINGLIT(tmp20,68,"Variable violating min constraint: 0.0 <= MatStm1.Pbubl, has value: ");
  modelica_string tmp21;
  static int tmp22 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp22)
  {
    tmp19 = GreaterEq(data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */,0.0);
    if(!tmp19)
    {
      tmp21 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[14] /* MatStm1.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp20),tmp21);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp22 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2222
type: ALGORITHM

  assert(MatStm1.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.Pdew, has value: " + String(MatStm1.Pdew, "g"));
*/
void Flowsheet_eqFunction_2222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2222};
  modelica_boolean tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,67,"Variable violating min constraint: 0.0 <= MatStm1.Pdew, has value: ");
  modelica_string tmp25;
  static int tmp26 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp26)
  {
    tmp23 = GreaterEq(data->localData[0]->realVars[15] /* MatStm1.Pdew variable */,0.0);
    if(!tmp23)
    {
      tmp25 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[15] /* MatStm1.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp24),tmp25);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp26 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2223
type: ALGORITHM

  assert(MatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: " + String(MatStm1.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2223};
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp30;
  static int tmp31 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp31)
  {
    tmp27 = GreaterEq(data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */,0.0);
    tmp28 = LessEq(data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */,1.0);
    if(!(tmp27 && tmp28))
    {
      tmp30 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[93] /* MatStm1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp31 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2224
type: ALGORITHM

  assert(MatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: " + String(MatStm1.vapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2224};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp35;
  static int tmp36 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp36)
  {
    tmp32 = GreaterEq(data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */,0.0);
    tmp33 = LessEq(data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */,1.0);
    if(!(tmp32 && tmp33))
    {
      tmp35 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[122] /* MatStm1.vapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp34),tmp35);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMolFrac >= 0.0 and MatStm1.vapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp36 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2225
type: ALGORITHM

  assert(MatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: " + String(MatStm1.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2225};
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  static const MMC_DEFSTRINGLIT(tmp39,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp40;
  static int tmp41 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp41)
  {
    tmp37 = GreaterEq(data->localData[0]->realVars[92] /* MatStm1.liqPhasMasFrac variable */,0.0);
    tmp38 = LessEq(data->localData[0]->realVars[92] /* MatStm1.liqPhasMasFrac variable */,1.0);
    if(!(tmp37 && tmp38))
    {
      tmp40 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[92] /* MatStm1.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp39),tmp40);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp41 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2226
type: ALGORITHM

  assert(MatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: " + String(MatStm1.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2226};
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  static const MMC_DEFSTRINGLIT(tmp44,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp45;
  static int tmp46 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp46)
  {
    tmp42 = GreaterEq(data->localData[0]->realVars[121] /* MatStm1.vapPhasMasFrac variable */,0.0);
    tmp43 = LessEq(data->localData[0]->realVars[121] /* MatStm1.vapPhasMasFrac variable */,1.0);
    if(!(tmp42 && tmp43))
    {
      tmp45 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[121] /* MatStm1.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp44),tmp45);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp46 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2227
type: ALGORITHM

  assert(MatStm1.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: " + String(MatStm1.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2227};
  modelica_boolean tmp47;
  static const MMC_DEFSTRINGLIT(tmp48,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: ");
  modelica_string tmp49;
  static int tmp50 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp50)
  {
    tmp47 = GreaterEq(data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */,0.0);
    if(!tmp47)
    {
      tmp49 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[119] /* MatStm1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp48),tmp49);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp50 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2228
type: ALGORITHM

  assert(MatStm1.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: " + String(MatStm1.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2228};
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: ");
  modelica_string tmp53;
  static int tmp54 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp54)
  {
    tmp51 = GreaterEq(data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */,0.0);
    if(!tmp51)
    {
      tmp53 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[120] /* MatStm1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp52),tmp53);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp54 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2229
type: ALGORITHM

  assert(MatStm1.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: " + String(MatStm1.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2229};
  modelica_boolean tmp55;
  static const MMC_DEFSTRINGLIT(tmp56,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: ");
  modelica_string tmp57;
  static int tmp58 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp58)
  {
    tmp55 = GreaterEq(data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */,0.0);
    if(!tmp55)
    {
      tmp57 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[115] /* MatStm1.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp56),tmp57);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp58 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2230
type: ALGORITHM

  assert(MatStm1.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: " + String(MatStm1.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2230};
  modelica_boolean tmp59;
  static const MMC_DEFSTRINGLIT(tmp60,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: ");
  modelica_string tmp61;
  static int tmp62 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp62)
  {
    tmp59 = GreaterEq(data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */,0.0);
    if(!tmp59)
    {
      tmp61 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[116] /* MatStm1.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp60),tmp61);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp62 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2231
type: ALGORITHM

  assert(MatStm1.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: " + String(MatStm1.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2231};
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: ");
  modelica_string tmp65;
  static int tmp66 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp66)
  {
    tmp63 = GreaterEq(data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */,0.0);
    if(!tmp63)
    {
      tmp65 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[117] /* MatStm1.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp64),tmp65);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp66 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2232
type: ALGORITHM

  assert(MatStm1.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: " + String(MatStm1.MW[1], "g"));
*/
void Flowsheet_eqFunction_2232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2232};
  modelica_boolean tmp67;
  static const MMC_DEFSTRINGLIT(tmp68,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: ");
  modelica_string tmp69;
  static int tmp70 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp70)
  {
    tmp67 = GreaterEq(data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */,0.0);
    if(!tmp67)
    {
      tmp69 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[10] /* MatStm1.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp68),tmp69);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp70 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2233
type: ALGORITHM

  assert(MatStm1.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: " + String(MatStm1.MW[2], "g"));
*/
void Flowsheet_eqFunction_2233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2233};
  modelica_boolean tmp71;
  static const MMC_DEFSTRINGLIT(tmp72,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: ");
  modelica_string tmp73;
  static int tmp74 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp74)
  {
    tmp71 = GreaterEq(data->localData[0]->realVars[11] /* MatStm1.MW[2] variable */,0.0);
    if(!tmp71)
    {
      tmp73 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[11] /* MatStm1.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp72),tmp73);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp74 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2234
type: ALGORITHM

  assert(MatStm1.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: " + String(MatStm1.MW[3], "g"));
*/
void Flowsheet_eqFunction_2234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2234};
  modelica_boolean tmp75;
  static const MMC_DEFSTRINGLIT(tmp76,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: ");
  modelica_string tmp77;
  static int tmp78 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp78)
  {
    tmp75 = GreaterEq(data->localData[0]->realVars[12] /* MatStm1.MW[3] variable */,0.0);
    if(!tmp75)
    {
      tmp77 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[12] /* MatStm1.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp76),tmp77);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp78 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2235
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2235};
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  static const MMC_DEFSTRINGLIT(tmp81,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp82;
  static int tmp83 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp83)
  {
    tmp79 = GreaterEq(data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */,0.0);
    tmp80 = LessEq(data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */,1.0);
    if(!(tmp79 && tmp80))
    {
      tmp82 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[68] /* MatStm1.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp81),tmp82);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp83 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2236
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2236};
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  static const MMC_DEFSTRINGLIT(tmp86,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp87;
  static int tmp88 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp88)
  {
    tmp84 = GreaterEq(data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */,0.0);
    tmp85 = LessEq(data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */,1.0);
    if(!(tmp84 && tmp85))
    {
      tmp87 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[69] /* MatStm1.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp86),tmp87);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp88 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2237
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,3] >= 0.0 and MatStm1.compMolFrac[2,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,3] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,3], "g"));
*/
void Flowsheet_eqFunction_2237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2237};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  static const MMC_DEFSTRINGLIT(tmp91,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,3] <= 1.0, has value: ");
  modelica_string tmp92;
  static int tmp93 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp93)
  {
    tmp89 = GreaterEq(data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */,0.0);
    tmp90 = LessEq(data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */,1.0);
    if(!(tmp89 && tmp90))
    {
      tmp92 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[70] /* MatStm1.compMolFrac[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp91),tmp92);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,3] >= 0.0 and MatStm1.compMolFrac[2,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp93 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2238
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2238};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  static const MMC_DEFSTRINGLIT(tmp96,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp97;
  static int tmp98 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp98)
  {
    tmp94 = GreaterEq(data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */,0.0);
    tmp95 = LessEq(data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */,1.0);
    if(!(tmp94 && tmp95))
    {
      tmp97 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[71] /* MatStm1.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp96),tmp97);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp98 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2239
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2239};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  static const MMC_DEFSTRINGLIT(tmp101,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp102;
  static int tmp103 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp103)
  {
    tmp99 = GreaterEq(data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */,0.0);
    tmp100 = LessEq(data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */,1.0);
    if(!(tmp99 && tmp100))
    {
      tmp102 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[72] /* MatStm1.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp101),tmp102);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp103 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2240
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,3] >= 0.0 and MatStm1.compMolFrac[3,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,3] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,3], "g"));
*/
void Flowsheet_eqFunction_2240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2240};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  static const MMC_DEFSTRINGLIT(tmp106,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,3] <= 1.0, has value: ");
  modelica_string tmp107;
  static int tmp108 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp108)
  {
    tmp104 = GreaterEq(data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */,0.0);
    tmp105 = LessEq(data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */,1.0);
    if(!(tmp104 && tmp105))
    {
      tmp107 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[73] /* MatStm1.compMolFrac[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp106),tmp107);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,3] >= 0.0 and MatStm1.compMolFrac[3,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp108 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2241
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2241};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  static const MMC_DEFSTRINGLIT(tmp111,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp112;
  static int tmp113 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp113)
  {
    tmp109 = GreaterEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,1] variable */,0.0);
    tmp110 = LessEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,1] variable */,1.0);
    if(!(tmp109 && tmp110))
    {
      tmp112 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp111),tmp112);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp113 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2242
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2242};
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  static const MMC_DEFSTRINGLIT(tmp116,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp117;
  static int tmp118 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp118)
  {
    tmp114 = GreaterEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[1,2] variable */,0.0);
    tmp115 = LessEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[1,2] variable */,1.0);
    if(!(tmp114 && tmp115))
    {
      tmp117 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp116),tmp117);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp118 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2243
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,3] >= 0.0 and MatStm1.compMasFrac[1,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,3] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,3], "g"));
*/
void Flowsheet_eqFunction_2243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2243};
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  static const MMC_DEFSTRINGLIT(tmp121,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,3] <= 1.0, has value: ");
  modelica_string tmp122;
  static int tmp123 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp123)
  {
    tmp119 = GreaterEq(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[1,3] variable */,0.0);
    tmp120 = LessEq(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[1,3] variable */,1.0);
    if(!(tmp119 && tmp120))
    {
      tmp122 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[1,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp121),tmp122);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,3] >= 0.0 and MatStm1.compMasFrac[1,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp123 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2244
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2244};
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  static const MMC_DEFSTRINGLIT(tmp126,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp127;
  static int tmp128 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp128)
  {
    tmp124 = GreaterEq(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[2,1] variable */,0.0);
    tmp125 = LessEq(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[2,1] variable */,1.0);
    if(!(tmp124 && tmp125))
    {
      tmp127 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp126),tmp127);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp128 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2245
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2245};
  modelica_boolean tmp129;
  modelica_boolean tmp130;
  static const MMC_DEFSTRINGLIT(tmp131,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp132;
  static int tmp133 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp133)
  {
    tmp129 = GreaterEq(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[2,2] variable */,0.0);
    tmp130 = LessEq(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[2,2] variable */,1.0);
    if(!(tmp129 && tmp130))
    {
      tmp132 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp131),tmp132);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp133 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2246
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,3] >= 0.0 and MatStm1.compMasFrac[2,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,3] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,3], "g"));
*/
void Flowsheet_eqFunction_2246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2246};
  modelica_boolean tmp134;
  modelica_boolean tmp135;
  static const MMC_DEFSTRINGLIT(tmp136,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,3] <= 1.0, has value: ");
  modelica_string tmp137;
  static int tmp138 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp138)
  {
    tmp134 = GreaterEq(data->localData[0]->realVars[34] /* MatStm1.compMasFrac[2,3] variable */,0.0);
    tmp135 = LessEq(data->localData[0]->realVars[34] /* MatStm1.compMasFrac[2,3] variable */,1.0);
    if(!(tmp134 && tmp135))
    {
      tmp137 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[34] /* MatStm1.compMasFrac[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp136),tmp137);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,3] >= 0.0 and MatStm1.compMasFrac[2,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp138 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2247
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2247};
  modelica_boolean tmp139;
  modelica_boolean tmp140;
  static const MMC_DEFSTRINGLIT(tmp141,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp142;
  static int tmp143 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp143)
  {
    tmp139 = GreaterEq(data->localData[0]->realVars[35] /* MatStm1.compMasFrac[3,1] variable */,0.0);
    tmp140 = LessEq(data->localData[0]->realVars[35] /* MatStm1.compMasFrac[3,1] variable */,1.0);
    if(!(tmp139 && tmp140))
    {
      tmp142 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[35] /* MatStm1.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp141),tmp142);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp143 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2248
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2248};
  modelica_boolean tmp144;
  modelica_boolean tmp145;
  static const MMC_DEFSTRINGLIT(tmp146,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp147;
  static int tmp148 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp148)
  {
    tmp144 = GreaterEq(data->localData[0]->realVars[36] /* MatStm1.compMasFrac[3,2] variable */,0.0);
    tmp145 = LessEq(data->localData[0]->realVars[36] /* MatStm1.compMasFrac[3,2] variable */,1.0);
    if(!(tmp144 && tmp145))
    {
      tmp147 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[36] /* MatStm1.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp146),tmp147);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp148 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2249
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,3] >= 0.0 and MatStm1.compMasFrac[3,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,3] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,3], "g"));
*/
void Flowsheet_eqFunction_2249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2249};
  modelica_boolean tmp149;
  modelica_boolean tmp150;
  static const MMC_DEFSTRINGLIT(tmp151,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,3] <= 1.0, has value: ");
  modelica_string tmp152;
  static int tmp153 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp153)
  {
    tmp149 = GreaterEq(data->localData[0]->realVars[37] /* MatStm1.compMasFrac[3,3] variable */,0.0);
    tmp150 = LessEq(data->localData[0]->realVars[37] /* MatStm1.compMasFrac[3,3] variable */,1.0);
    if(!(tmp149 && tmp150))
    {
      tmp152 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[37] /* MatStm1.compMasFrac[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp151),tmp152);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,3] >= 0.0 and MatStm1.compMasFrac[3,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp153 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2250
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: " + String(MatStm1.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2250};
  modelica_boolean tmp154;
  static const MMC_DEFSTRINGLIT(tmp155,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: ");
  modelica_string tmp156;
  static int tmp157 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp157)
  {
    tmp154 = GreaterEq(data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,1] variable */,0.0);
    if(!tmp154)
    {
      tmp156 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[59] /* MatStm1.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp155),tmp156);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp157 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2251
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: " + String(MatStm1.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2251};
  modelica_boolean tmp158;
  static const MMC_DEFSTRINGLIT(tmp159,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: ");
  modelica_string tmp160;
  static int tmp161 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp161)
  {
    tmp158 = GreaterEq(data->localData[0]->realVars[60] /* MatStm1.compMolFlo[2,2] variable */,0.0);
    if(!tmp158)
    {
      tmp160 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[60] /* MatStm1.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp159),tmp160);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp161 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2252
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,3], has value: " + String(MatStm1.compMolFlo[2,3], "g"));
*/
void Flowsheet_eqFunction_2252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2252};
  modelica_boolean tmp162;
  static const MMC_DEFSTRINGLIT(tmp163,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,3], has value: ");
  modelica_string tmp164;
  static int tmp165 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp165)
  {
    tmp162 = GreaterEq(data->localData[0]->realVars[61] /* MatStm1.compMolFlo[2,3] variable */,0.0);
    if(!tmp162)
    {
      tmp164 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[61] /* MatStm1.compMolFlo[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp163),tmp164);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp165 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2253
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: " + String(MatStm1.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2253};
  modelica_boolean tmp166;
  static const MMC_DEFSTRINGLIT(tmp167,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: ");
  modelica_string tmp168;
  static int tmp169 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp169)
  {
    tmp166 = GreaterEq(data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,1] variable */,0.0);
    if(!tmp166)
    {
      tmp168 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[62] /* MatStm1.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp167),tmp168);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp169 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2254
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: " + String(MatStm1.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2254};
  modelica_boolean tmp170;
  static const MMC_DEFSTRINGLIT(tmp171,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: ");
  modelica_string tmp172;
  static int tmp173 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp173)
  {
    tmp170 = GreaterEq(data->localData[0]->realVars[63] /* MatStm1.compMolFlo[3,2] variable */,0.0);
    if(!tmp170)
    {
      tmp172 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[63] /* MatStm1.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp171),tmp172);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp173 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2255
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,3], has value: " + String(MatStm1.compMolFlo[3,3], "g"));
*/
void Flowsheet_eqFunction_2255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2255};
  modelica_boolean tmp174;
  static const MMC_DEFSTRINGLIT(tmp175,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,3], has value: ");
  modelica_string tmp176;
  static int tmp177 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp177)
  {
    tmp174 = GreaterEq(data->localData[0]->realVars[64] /* MatStm1.compMolFlo[3,3] variable */,0.0);
    if(!tmp174)
    {
      tmp176 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[64] /* MatStm1.compMolFlo[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp175),tmp176);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp177 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2256
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: " + String(MatStm1.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2256};
  modelica_boolean tmp178;
  static const MMC_DEFSTRINGLIT(tmp179,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: ");
  modelica_string tmp180;
  static int tmp181 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp181)
  {
    tmp178 = GreaterEq(data->localData[0]->realVars[23] /* MatStm1.compMasFlo[2,1] variable */,0.0);
    if(!tmp178)
    {
      tmp180 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[23] /* MatStm1.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp179),tmp180);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp181 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2257
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: " + String(MatStm1.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2257};
  modelica_boolean tmp182;
  static const MMC_DEFSTRINGLIT(tmp183,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: ");
  modelica_string tmp184;
  static int tmp185 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp185)
  {
    tmp182 = GreaterEq(data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,2] variable */,0.0);
    if(!tmp182)
    {
      tmp184 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp183),tmp184);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp185 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2258
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,3], has value: " + String(MatStm1.compMasFlo[2,3], "g"));
*/
void Flowsheet_eqFunction_2258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2258};
  modelica_boolean tmp186;
  static const MMC_DEFSTRINGLIT(tmp187,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,3], has value: ");
  modelica_string tmp188;
  static int tmp189 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp189)
  {
    tmp186 = GreaterEq(data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,3] variable */,0.0);
    if(!tmp186)
    {
      tmp188 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp187),tmp188);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp189 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2259
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: " + String(MatStm1.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2259};
  modelica_boolean tmp190;
  static const MMC_DEFSTRINGLIT(tmp191,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: ");
  modelica_string tmp192;
  static int tmp193 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp193)
  {
    tmp190 = GreaterEq(data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */,0.0);
    if(!tmp190)
    {
      tmp192 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp191),tmp192);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp193 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2260
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: " + String(MatStm1.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2260};
  modelica_boolean tmp194;
  static const MMC_DEFSTRINGLIT(tmp195,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: ");
  modelica_string tmp196;
  static int tmp197 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp197)
  {
    tmp194 = GreaterEq(data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */,0.0);
    if(!tmp194)
    {
      tmp196 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp195),tmp196);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp197 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2261
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,3], has value: " + String(MatStm1.compMasFlo[3,3], "g"));
*/
void Flowsheet_eqFunction_2261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2261};
  modelica_boolean tmp198;
  static const MMC_DEFSTRINGLIT(tmp199,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,3], has value: ");
  modelica_string tmp200;
  static int tmp201 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp201)
  {
    tmp198 = GreaterEq(data->localData[0]->realVars[28] /* MatStm1.compMasFlo[3,3] variable */,0.0);
    if(!tmp198)
    {
      tmp200 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[28] /* MatStm1.compMasFlo[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp199),tmp200);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp201 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2262
type: ALGORITHM

  assert(MatStm1.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: " + String(MatStm1.K[1], "g"));
*/
void Flowsheet_eqFunction_2262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2262};
  modelica_boolean tmp202;
  static const MMC_DEFSTRINGLIT(tmp203,67,"Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: ");
  modelica_string tmp204;
  static int tmp205 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp205)
  {
    tmp202 = GreaterEq(data->localData[0]->realVars[7] /* MatStm1.K[1] variable */,0.0);
    if(!tmp202)
    {
      tmp204 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[7] /* MatStm1.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp203),tmp204);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp205 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2263
type: ALGORITHM

  assert(MatStm1.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: " + String(MatStm1.K[2], "g"));
*/
void Flowsheet_eqFunction_2263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2263};
  modelica_boolean tmp206;
  static const MMC_DEFSTRINGLIT(tmp207,67,"Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: ");
  modelica_string tmp208;
  static int tmp209 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp209)
  {
    tmp206 = GreaterEq(data->localData[0]->realVars[8] /* MatStm1.K[2] variable */,0.0);
    if(!tmp206)
    {
      tmp208 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[8] /* MatStm1.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp207),tmp208);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp209 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2264
type: ALGORITHM

  assert(MatStm1.K[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[3], has value: " + String(MatStm1.K[3], "g"));
*/
void Flowsheet_eqFunction_2264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2264};
  modelica_boolean tmp210;
  static const MMC_DEFSTRINGLIT(tmp211,67,"Variable violating min constraint: 0.0 <= MatStm1.K[3], has value: ");
  modelica_string tmp212;
  static int tmp213 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp213)
  {
    tmp210 = GreaterEq(data->localData[0]->realVars[9] /* MatStm1.K[3] variable */,0.0);
    if(!tmp210)
    {
      tmp212 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[9] /* MatStm1.K[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp211),tmp212);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp213 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2265
type: ALGORITHM

  assert(MatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: " + String(MatStm2.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2265};
  modelica_boolean tmp214;
  modelica_boolean tmp215;
  static const MMC_DEFSTRINGLIT(tmp216,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp217;
  static int tmp218 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp218)
  {
    tmp214 = GreaterEq(data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */,0.0);
    tmp215 = LessEq(data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */,1.0);
    if(!(tmp214 && tmp215))
    {
      tmp217 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[212] /* MatStm2.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp216),tmp217);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp218 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2266
type: ALGORITHM

  assert(MatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: " + String(MatStm2.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2266};
  modelica_boolean tmp219;
  modelica_boolean tmp220;
  static const MMC_DEFSTRINGLIT(tmp221,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp222;
  static int tmp223 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp223)
  {
    tmp219 = GreaterEq(data->localData[0]->realVars[211] /* MatStm2.liqPhasMasFrac variable */,0.0);
    tmp220 = LessEq(data->localData[0]->realVars[211] /* MatStm2.liqPhasMasFrac variable */,1.0);
    if(!(tmp219 && tmp220))
    {
      tmp222 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[211] /* MatStm2.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp221),tmp222);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp223 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2267
type: ALGORITHM

  assert(MatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: " + String(MatStm2.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2267};
  modelica_boolean tmp224;
  modelica_boolean tmp225;
  static const MMC_DEFSTRINGLIT(tmp226,88,"Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp227;
  static int tmp228 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp228)
  {
    tmp224 = GreaterEq(data->localData[0]->realVars[240] /* MatStm2.vapPhasMasFrac variable */,0.0);
    tmp225 = LessEq(data->localData[0]->realVars[240] /* MatStm2.vapPhasMasFrac variable */,1.0);
    if(!(tmp224 && tmp225))
    {
      tmp227 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[240] /* MatStm2.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp226),tmp227);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp228 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2268
type: ALGORITHM

  assert(MatStm2.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: " + String(MatStm2.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2268};
  modelica_boolean tmp229;
  static const MMC_DEFSTRINGLIT(tmp230,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: ");
  modelica_string tmp231;
  static int tmp232 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp232)
  {
    tmp229 = GreaterEq(data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */,0.0);
    if(!tmp229)
    {
      tmp231 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[238] /* MatStm2.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp230),tmp231);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp232 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2269
type: ALGORITHM

  assert(MatStm2.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: " + String(MatStm2.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2269};
  modelica_boolean tmp233;
  static const MMC_DEFSTRINGLIT(tmp234,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: ");
  modelica_string tmp235;
  static int tmp236 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp236)
  {
    tmp233 = GreaterEq(data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */,0.0);
    if(!tmp233)
    {
      tmp235 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[239] /* MatStm2.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp234),tmp235);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp236 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2270
type: ALGORITHM

  assert(MatStm2.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: " + String(MatStm2.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2270};
  modelica_boolean tmp237;
  static const MMC_DEFSTRINGLIT(tmp238,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: ");
  modelica_string tmp239;
  static int tmp240 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp240)
  {
    tmp237 = GreaterEq(data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */,0.0);
    if(!tmp237)
    {
      tmp239 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[234] /* MatStm2.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp238),tmp239);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp240 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2271
type: ALGORITHM

  assert(MatStm2.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: " + String(MatStm2.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2271};
  modelica_boolean tmp241;
  static const MMC_DEFSTRINGLIT(tmp242,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: ");
  modelica_string tmp243;
  static int tmp244 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp244)
  {
    tmp241 = GreaterEq(data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */,0.0);
    if(!tmp241)
    {
      tmp243 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[235] /* MatStm2.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp242),tmp243);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp244 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2272
type: ALGORITHM

  assert(MatStm2.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: " + String(MatStm2.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2272};
  modelica_boolean tmp245;
  static const MMC_DEFSTRINGLIT(tmp246,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: ");
  modelica_string tmp247;
  static int tmp248 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp248)
  {
    tmp245 = GreaterEq(data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */,0.0);
    if(!tmp245)
    {
      tmp247 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[236] /* MatStm2.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp246),tmp247);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp248 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2273
type: ALGORITHM

  assert(MatStm2.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: " + String(MatStm2.MW[1], "g"));
*/
void Flowsheet_eqFunction_2273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2273};
  modelica_boolean tmp249;
  static const MMC_DEFSTRINGLIT(tmp250,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: ");
  modelica_string tmp251;
  static int tmp252 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp252)
  {
    tmp249 = GreaterEq(data->localData[0]->realVars[129] /* MatStm2.MW[1] variable */,0.0);
    if(!tmp249)
    {
      tmp251 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[129] /* MatStm2.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp250),tmp251);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp252 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2274
type: ALGORITHM

  assert(MatStm2.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: " + String(MatStm2.MW[2], "g"));
*/
void Flowsheet_eqFunction_2274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2274};
  modelica_boolean tmp253;
  static const MMC_DEFSTRINGLIT(tmp254,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: ");
  modelica_string tmp255;
  static int tmp256 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp256)
  {
    tmp253 = GreaterEq(data->localData[0]->realVars[130] /* MatStm2.MW[2] variable */,0.0);
    if(!tmp253)
    {
      tmp255 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[130] /* MatStm2.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp254),tmp255);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp256 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2275
type: ALGORITHM

  assert(MatStm2.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: " + String(MatStm2.MW[3], "g"));
*/
void Flowsheet_eqFunction_2275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2275};
  modelica_boolean tmp257;
  static const MMC_DEFSTRINGLIT(tmp258,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: ");
  modelica_string tmp259;
  static int tmp260 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp260)
  {
    tmp257 = GreaterEq(data->localData[0]->realVars[131] /* MatStm2.MW[3] variable */,0.0);
    if(!tmp257)
    {
      tmp259 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[131] /* MatStm2.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp258),tmp259);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp260 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2276
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2276};
  modelica_boolean tmp261;
  modelica_boolean tmp262;
  static const MMC_DEFSTRINGLIT(tmp263,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp264;
  static int tmp265 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp265)
  {
    tmp261 = GreaterEq(data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */,0.0);
    tmp262 = LessEq(data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */,1.0);
    if(!(tmp261 && tmp262))
    {
      tmp264 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[187] /* MatStm2.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp263),tmp264);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp265 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2277
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2277};
  modelica_boolean tmp266;
  modelica_boolean tmp267;
  static const MMC_DEFSTRINGLIT(tmp268,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp269;
  static int tmp270 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp270)
  {
    tmp266 = GreaterEq(data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */,0.0);
    tmp267 = LessEq(data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */,1.0);
    if(!(tmp266 && tmp267))
    {
      tmp269 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[188] /* MatStm2.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp268),tmp269);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp270 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2278
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,3] >= 0.0 and MatStm2.compMolFrac[2,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,3] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,3], "g"));
*/
void Flowsheet_eqFunction_2278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2278};
  modelica_boolean tmp271;
  modelica_boolean tmp272;
  static const MMC_DEFSTRINGLIT(tmp273,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,3] <= 1.0, has value: ");
  modelica_string tmp274;
  static int tmp275 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp275)
  {
    tmp271 = GreaterEq(data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */,0.0);
    tmp272 = LessEq(data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */,1.0);
    if(!(tmp271 && tmp272))
    {
      tmp274 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[189] /* MatStm2.compMolFrac[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp273),tmp274);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,3] >= 0.0 and MatStm2.compMolFrac[2,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp275 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2279
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2279};
  modelica_boolean tmp276;
  modelica_boolean tmp277;
  static const MMC_DEFSTRINGLIT(tmp278,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp279;
  static int tmp280 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp280)
  {
    tmp276 = GreaterEq(data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */,0.0);
    tmp277 = LessEq(data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */,1.0);
    if(!(tmp276 && tmp277))
    {
      tmp279 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[190] /* MatStm2.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp278),tmp279);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp280 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2280
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2280};
  modelica_boolean tmp281;
  modelica_boolean tmp282;
  static const MMC_DEFSTRINGLIT(tmp283,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp284;
  static int tmp285 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp285)
  {
    tmp281 = GreaterEq(data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */,0.0);
    tmp282 = LessEq(data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */,1.0);
    if(!(tmp281 && tmp282))
    {
      tmp284 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[191] /* MatStm2.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp283),tmp284);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp285 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2281
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,3] >= 0.0 and MatStm2.compMolFrac[3,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,3] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,3], "g"));
*/
void Flowsheet_eqFunction_2281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2281};
  modelica_boolean tmp286;
  modelica_boolean tmp287;
  static const MMC_DEFSTRINGLIT(tmp288,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,3] <= 1.0, has value: ");
  modelica_string tmp289;
  static int tmp290 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp290)
  {
    tmp286 = GreaterEq(data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */,0.0);
    tmp287 = LessEq(data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */,1.0);
    if(!(tmp286 && tmp287))
    {
      tmp289 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[192] /* MatStm2.compMolFrac[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp288),tmp289);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,3] >= 0.0 and MatStm2.compMolFrac[3,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp290 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2282
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2282};
  modelica_boolean tmp291;
  modelica_boolean tmp292;
  static const MMC_DEFSTRINGLIT(tmp293,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp294;
  static int tmp295 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp295)
  {
    tmp291 = GreaterEq(data->localData[0]->realVars[148] /* MatStm2.compMasFrac[1,1] variable */,0.0);
    tmp292 = LessEq(data->localData[0]->realVars[148] /* MatStm2.compMasFrac[1,1] variable */,1.0);
    if(!(tmp291 && tmp292))
    {
      tmp294 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[148] /* MatStm2.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp293),tmp294);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp295 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2283
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2283};
  modelica_boolean tmp296;
  modelica_boolean tmp297;
  static const MMC_DEFSTRINGLIT(tmp298,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp299;
  static int tmp300 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp300)
  {
    tmp296 = GreaterEq(data->localData[0]->realVars[149] /* MatStm2.compMasFrac[1,2] variable */,0.0);
    tmp297 = LessEq(data->localData[0]->realVars[149] /* MatStm2.compMasFrac[1,2] variable */,1.0);
    if(!(tmp296 && tmp297))
    {
      tmp299 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[149] /* MatStm2.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp298),tmp299);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp300 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2284
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,3] >= 0.0 and MatStm2.compMasFrac[1,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,3] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,3], "g"));
*/
void Flowsheet_eqFunction_2284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2284};
  modelica_boolean tmp301;
  modelica_boolean tmp302;
  static const MMC_DEFSTRINGLIT(tmp303,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,3] <= 1.0, has value: ");
  modelica_string tmp304;
  static int tmp305 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp305)
  {
    tmp301 = GreaterEq(data->localData[0]->realVars[150] /* MatStm2.compMasFrac[1,3] variable */,0.0);
    tmp302 = LessEq(data->localData[0]->realVars[150] /* MatStm2.compMasFrac[1,3] variable */,1.0);
    if(!(tmp301 && tmp302))
    {
      tmp304 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[150] /* MatStm2.compMasFrac[1,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp303),tmp304);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,3] >= 0.0 and MatStm2.compMasFrac[1,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp305 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2285
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2285};
  modelica_boolean tmp306;
  modelica_boolean tmp307;
  static const MMC_DEFSTRINGLIT(tmp308,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp309;
  static int tmp310 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp310)
  {
    tmp306 = GreaterEq(data->localData[0]->realVars[151] /* MatStm2.compMasFrac[2,1] variable */,0.0);
    tmp307 = LessEq(data->localData[0]->realVars[151] /* MatStm2.compMasFrac[2,1] variable */,1.0);
    if(!(tmp306 && tmp307))
    {
      tmp309 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[151] /* MatStm2.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp308),tmp309);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp310 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2286
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2286};
  modelica_boolean tmp311;
  modelica_boolean tmp312;
  static const MMC_DEFSTRINGLIT(tmp313,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp314;
  static int tmp315 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp315)
  {
    tmp311 = GreaterEq(data->localData[0]->realVars[152] /* MatStm2.compMasFrac[2,2] variable */,0.0);
    tmp312 = LessEq(data->localData[0]->realVars[152] /* MatStm2.compMasFrac[2,2] variable */,1.0);
    if(!(tmp311 && tmp312))
    {
      tmp314 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[152] /* MatStm2.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp313),tmp314);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp315 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2287
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,3] >= 0.0 and MatStm2.compMasFrac[2,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,3] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,3], "g"));
*/
void Flowsheet_eqFunction_2287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2287};
  modelica_boolean tmp316;
  modelica_boolean tmp317;
  static const MMC_DEFSTRINGLIT(tmp318,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,3] <= 1.0, has value: ");
  modelica_string tmp319;
  static int tmp320 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp320)
  {
    tmp316 = GreaterEq(data->localData[0]->realVars[153] /* MatStm2.compMasFrac[2,3] variable */,0.0);
    tmp317 = LessEq(data->localData[0]->realVars[153] /* MatStm2.compMasFrac[2,3] variable */,1.0);
    if(!(tmp316 && tmp317))
    {
      tmp319 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[153] /* MatStm2.compMasFrac[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp318),tmp319);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,3] >= 0.0 and MatStm2.compMasFrac[2,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp320 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2288
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2288};
  modelica_boolean tmp321;
  modelica_boolean tmp322;
  static const MMC_DEFSTRINGLIT(tmp323,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp324;
  static int tmp325 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp325)
  {
    tmp321 = GreaterEq(data->localData[0]->realVars[154] /* MatStm2.compMasFrac[3,1] variable */,0.0);
    tmp322 = LessEq(data->localData[0]->realVars[154] /* MatStm2.compMasFrac[3,1] variable */,1.0);
    if(!(tmp321 && tmp322))
    {
      tmp324 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[154] /* MatStm2.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp323),tmp324);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp325 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2289
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2289};
  modelica_boolean tmp326;
  modelica_boolean tmp327;
  static const MMC_DEFSTRINGLIT(tmp328,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp329;
  static int tmp330 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp330)
  {
    tmp326 = GreaterEq(data->localData[0]->realVars[155] /* MatStm2.compMasFrac[3,2] variable */,0.0);
    tmp327 = LessEq(data->localData[0]->realVars[155] /* MatStm2.compMasFrac[3,2] variable */,1.0);
    if(!(tmp326 && tmp327))
    {
      tmp329 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[155] /* MatStm2.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp328),tmp329);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp330 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2290
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,3] >= 0.0 and MatStm2.compMasFrac[3,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,3] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,3], "g"));
*/
void Flowsheet_eqFunction_2290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2290};
  modelica_boolean tmp331;
  modelica_boolean tmp332;
  static const MMC_DEFSTRINGLIT(tmp333,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,3] <= 1.0, has value: ");
  modelica_string tmp334;
  static int tmp335 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp335)
  {
    tmp331 = GreaterEq(data->localData[0]->realVars[156] /* MatStm2.compMasFrac[3,3] variable */,0.0);
    tmp332 = LessEq(data->localData[0]->realVars[156] /* MatStm2.compMasFrac[3,3] variable */,1.0);
    if(!(tmp331 && tmp332))
    {
      tmp334 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[156] /* MatStm2.compMasFrac[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp333),tmp334);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,3] >= 0.0 and MatStm2.compMasFrac[3,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp335 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2291
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: " + String(MatStm2.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2291};
  modelica_boolean tmp336;
  static const MMC_DEFSTRINGLIT(tmp337,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: ");
  modelica_string tmp338;
  static int tmp339 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp339)
  {
    tmp336 = GreaterEq(data->localData[0]->realVars[178] /* MatStm2.compMolFlo[2,1] variable */,0.0);
    if(!tmp336)
    {
      tmp338 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[178] /* MatStm2.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp337),tmp338);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp339 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2292
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: " + String(MatStm2.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2292};
  modelica_boolean tmp340;
  static const MMC_DEFSTRINGLIT(tmp341,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: ");
  modelica_string tmp342;
  static int tmp343 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp343)
  {
    tmp340 = GreaterEq(data->localData[0]->realVars[179] /* MatStm2.compMolFlo[2,2] variable */,0.0);
    if(!tmp340)
    {
      tmp342 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[179] /* MatStm2.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp341),tmp342);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp343 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2293
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,3], has value: " + String(MatStm2.compMolFlo[2,3], "g"));
*/
void Flowsheet_eqFunction_2293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2293};
  modelica_boolean tmp344;
  static const MMC_DEFSTRINGLIT(tmp345,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,3], has value: ");
  modelica_string tmp346;
  static int tmp347 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp347)
  {
    tmp344 = GreaterEq(data->localData[0]->realVars[180] /* MatStm2.compMolFlo[2,3] variable */,0.0);
    if(!tmp344)
    {
      tmp346 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[180] /* MatStm2.compMolFlo[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp345),tmp346);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp347 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2294
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: " + String(MatStm2.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2294};
  modelica_boolean tmp348;
  static const MMC_DEFSTRINGLIT(tmp349,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: ");
  modelica_string tmp350;
  static int tmp351 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp351)
  {
    tmp348 = GreaterEq(data->localData[0]->realVars[181] /* MatStm2.compMolFlo[3,1] variable */,0.0);
    if(!tmp348)
    {
      tmp350 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[181] /* MatStm2.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp349),tmp350);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp351 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2295
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: " + String(MatStm2.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2295};
  modelica_boolean tmp352;
  static const MMC_DEFSTRINGLIT(tmp353,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: ");
  modelica_string tmp354;
  static int tmp355 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp355)
  {
    tmp352 = GreaterEq(data->localData[0]->realVars[182] /* MatStm2.compMolFlo[3,2] variable */,0.0);
    if(!tmp352)
    {
      tmp354 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[182] /* MatStm2.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp353),tmp354);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp355 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2296
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,3], has value: " + String(MatStm2.compMolFlo[3,3], "g"));
*/
void Flowsheet_eqFunction_2296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2296};
  modelica_boolean tmp356;
  static const MMC_DEFSTRINGLIT(tmp357,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,3], has value: ");
  modelica_string tmp358;
  static int tmp359 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp359)
  {
    tmp356 = GreaterEq(data->localData[0]->realVars[183] /* MatStm2.compMolFlo[3,3] variable */,0.0);
    if(!tmp356)
    {
      tmp358 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[183] /* MatStm2.compMolFlo[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp357),tmp358);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp359 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2297
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: " + String(MatStm2.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2297};
  modelica_boolean tmp360;
  static const MMC_DEFSTRINGLIT(tmp361,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: ");
  modelica_string tmp362;
  static int tmp363 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp363)
  {
    tmp360 = GreaterEq(data->localData[0]->realVars[142] /* MatStm2.compMasFlo[2,1] variable */,0.0);
    if(!tmp360)
    {
      tmp362 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[142] /* MatStm2.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp361),tmp362);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp363 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2298
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: " + String(MatStm2.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2298};
  modelica_boolean tmp364;
  static const MMC_DEFSTRINGLIT(tmp365,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: ");
  modelica_string tmp366;
  static int tmp367 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp367)
  {
    tmp364 = GreaterEq(data->localData[0]->realVars[143] /* MatStm2.compMasFlo[2,2] variable */,0.0);
    if(!tmp364)
    {
      tmp366 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[143] /* MatStm2.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp365),tmp366);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp367 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2299
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,3], has value: " + String(MatStm2.compMasFlo[2,3], "g"));
*/
void Flowsheet_eqFunction_2299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2299};
  modelica_boolean tmp368;
  static const MMC_DEFSTRINGLIT(tmp369,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,3], has value: ");
  modelica_string tmp370;
  static int tmp371 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp371)
  {
    tmp368 = GreaterEq(data->localData[0]->realVars[144] /* MatStm2.compMasFlo[2,3] variable */,0.0);
    if(!tmp368)
    {
      tmp370 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[144] /* MatStm2.compMasFlo[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp369),tmp370);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp371 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2300
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: " + String(MatStm2.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2300};
  modelica_boolean tmp372;
  static const MMC_DEFSTRINGLIT(tmp373,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: ");
  modelica_string tmp374;
  static int tmp375 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp375)
  {
    tmp372 = GreaterEq(data->localData[0]->realVars[145] /* MatStm2.compMasFlo[3,1] variable */,0.0);
    if(!tmp372)
    {
      tmp374 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[145] /* MatStm2.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp373),tmp374);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp375 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2301
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: " + String(MatStm2.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2301};
  modelica_boolean tmp376;
  static const MMC_DEFSTRINGLIT(tmp377,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: ");
  modelica_string tmp378;
  static int tmp379 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp379)
  {
    tmp376 = GreaterEq(data->localData[0]->realVars[146] /* MatStm2.compMasFlo[3,2] variable */,0.0);
    if(!tmp376)
    {
      tmp378 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[146] /* MatStm2.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp377),tmp378);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp379 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2302
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,3], has value: " + String(MatStm2.compMasFlo[3,3], "g"));
*/
void Flowsheet_eqFunction_2302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2302};
  modelica_boolean tmp380;
  static const MMC_DEFSTRINGLIT(tmp381,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,3], has value: ");
  modelica_string tmp382;
  static int tmp383 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp383)
  {
    tmp380 = GreaterEq(data->localData[0]->realVars[147] /* MatStm2.compMasFlo[3,3] variable */,0.0);
    if(!tmp380)
    {
      tmp382 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[147] /* MatStm2.compMasFlo[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp381),tmp382);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp383 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2303
type: ALGORITHM

  assert(MatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: " + String(MatStm3.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2303};
  modelica_boolean tmp384;
  modelica_boolean tmp385;
  static const MMC_DEFSTRINGLIT(tmp386,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp387;
  static int tmp388 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp388)
  {
    tmp384 = GreaterEq(data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */,0.0);
    tmp385 = LessEq(data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */,1.0);
    if(!(tmp384 && tmp385))
    {
      tmp387 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[330] /* MatStm3.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp386),tmp387);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp388 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2304
type: ALGORITHM

  assert(MatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: " + String(MatStm3.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2304};
  modelica_boolean tmp389;
  modelica_boolean tmp390;
  static const MMC_DEFSTRINGLIT(tmp391,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp392;
  static int tmp393 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp393)
  {
    tmp389 = GreaterEq(data->localData[0]->realVars[329] /* MatStm3.liqPhasMasFrac variable */,0.0);
    tmp390 = LessEq(data->localData[0]->realVars[329] /* MatStm3.liqPhasMasFrac variable */,1.0);
    if(!(tmp389 && tmp390))
    {
      tmp392 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[329] /* MatStm3.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp391),tmp392);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp393 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2305
type: ALGORITHM

  assert(MatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: " + String(MatStm3.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2305};
  modelica_boolean tmp394;
  modelica_boolean tmp395;
  static const MMC_DEFSTRINGLIT(tmp396,88,"Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp397;
  static int tmp398 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp398)
  {
    tmp394 = GreaterEq(data->localData[0]->realVars[358] /* MatStm3.vapPhasMasFrac variable */,0.0);
    tmp395 = LessEq(data->localData[0]->realVars[358] /* MatStm3.vapPhasMasFrac variable */,1.0);
    if(!(tmp394 && tmp395))
    {
      tmp397 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[358] /* MatStm3.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp396),tmp397);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp398 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2306
type: ALGORITHM

  assert(MatStm3.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: " + String(MatStm3.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2306};
  modelica_boolean tmp399;
  static const MMC_DEFSTRINGLIT(tmp400,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: ");
  modelica_string tmp401;
  static int tmp402 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp402)
  {
    tmp399 = GreaterEq(data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */,0.0);
    if(!tmp399)
    {
      tmp401 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[356] /* MatStm3.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp400),tmp401);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp402 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2307
type: ALGORITHM

  assert(MatStm3.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: " + String(MatStm3.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2307};
  modelica_boolean tmp403;
  static const MMC_DEFSTRINGLIT(tmp404,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: ");
  modelica_string tmp405;
  static int tmp406 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp406)
  {
    tmp403 = GreaterEq(data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */,0.0);
    if(!tmp403)
    {
      tmp405 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[357] /* MatStm3.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp404),tmp405);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp406 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2308
type: ALGORITHM

  assert(MatStm3.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: " + String(MatStm3.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2308};
  modelica_boolean tmp407;
  static const MMC_DEFSTRINGLIT(tmp408,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: ");
  modelica_string tmp409;
  static int tmp410 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp410)
  {
    tmp407 = GreaterEq(data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */,0.0);
    if(!tmp407)
    {
      tmp409 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[352] /* MatStm3.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp408),tmp409);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp410 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2309
type: ALGORITHM

  assert(MatStm3.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: " + String(MatStm3.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2309};
  modelica_boolean tmp411;
  static const MMC_DEFSTRINGLIT(tmp412,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: ");
  modelica_string tmp413;
  static int tmp414 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp414)
  {
    tmp411 = GreaterEq(data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */,0.0);
    if(!tmp411)
    {
      tmp413 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[353] /* MatStm3.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp412),tmp413);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp414 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2310
type: ALGORITHM

  assert(MatStm3.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: " + String(MatStm3.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2310};
  modelica_boolean tmp415;
  static const MMC_DEFSTRINGLIT(tmp416,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: ");
  modelica_string tmp417;
  static int tmp418 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp418)
  {
    tmp415 = GreaterEq(data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */,0.0);
    if(!tmp415)
    {
      tmp417 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[354] /* MatStm3.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp416),tmp417);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp418 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2311
type: ALGORITHM

  assert(MatStm3.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: " + String(MatStm3.MW[1], "g"));
*/
void Flowsheet_eqFunction_2311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2311};
  modelica_boolean tmp419;
  static const MMC_DEFSTRINGLIT(tmp420,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: ");
  modelica_string tmp421;
  static int tmp422 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp422)
  {
    tmp419 = GreaterEq(data->localData[0]->realVars[247] /* MatStm3.MW[1] variable */,0.0);
    if(!tmp419)
    {
      tmp421 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[247] /* MatStm3.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp420),tmp421);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp422 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2312
type: ALGORITHM

  assert(MatStm3.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: " + String(MatStm3.MW[2], "g"));
*/
void Flowsheet_eqFunction_2312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2312};
  modelica_boolean tmp423;
  static const MMC_DEFSTRINGLIT(tmp424,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: ");
  modelica_string tmp425;
  static int tmp426 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp426)
  {
    tmp423 = GreaterEq(data->localData[0]->realVars[248] /* MatStm3.MW[2] variable */,0.0);
    if(!tmp423)
    {
      tmp425 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[248] /* MatStm3.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp424),tmp425);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp426 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2313
type: ALGORITHM

  assert(MatStm3.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: " + String(MatStm3.MW[3], "g"));
*/
void Flowsheet_eqFunction_2313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2313};
  modelica_boolean tmp427;
  static const MMC_DEFSTRINGLIT(tmp428,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: ");
  modelica_string tmp429;
  static int tmp430 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp430)
  {
    tmp427 = GreaterEq(data->localData[0]->realVars[249] /* MatStm3.MW[3] variable */,0.0);
    if(!tmp427)
    {
      tmp429 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[249] /* MatStm3.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp428),tmp429);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp430 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2314
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2314};
  modelica_boolean tmp431;
  modelica_boolean tmp432;
  static const MMC_DEFSTRINGLIT(tmp433,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp434;
  static int tmp435 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp435)
  {
    tmp431 = GreaterEq(data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */,0.0);
    tmp432 = LessEq(data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */,1.0);
    if(!(tmp431 && tmp432))
    {
      tmp434 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[305] /* MatStm3.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp433),tmp434);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp435 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2315
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2315};
  modelica_boolean tmp436;
  modelica_boolean tmp437;
  static const MMC_DEFSTRINGLIT(tmp438,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp439;
  static int tmp440 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp440)
  {
    tmp436 = GreaterEq(data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */,0.0);
    tmp437 = LessEq(data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */,1.0);
    if(!(tmp436 && tmp437))
    {
      tmp439 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[306] /* MatStm3.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp438),tmp439);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp440 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2316
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,3] >= 0.0 and MatStm3.compMolFrac[2,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,3] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,3], "g"));
*/
void Flowsheet_eqFunction_2316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2316};
  modelica_boolean tmp441;
  modelica_boolean tmp442;
  static const MMC_DEFSTRINGLIT(tmp443,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,3] <= 1.0, has value: ");
  modelica_string tmp444;
  static int tmp445 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp445)
  {
    tmp441 = GreaterEq(data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */,0.0);
    tmp442 = LessEq(data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */,1.0);
    if(!(tmp441 && tmp442))
    {
      tmp444 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[307] /* MatStm3.compMolFrac[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp443),tmp444);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,3] >= 0.0 and MatStm3.compMolFrac[2,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp445 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2317
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2317};
  modelica_boolean tmp446;
  modelica_boolean tmp447;
  static const MMC_DEFSTRINGLIT(tmp448,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp449;
  static int tmp450 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp450)
  {
    tmp446 = GreaterEq(data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */,0.0);
    tmp447 = LessEq(data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */,1.0);
    if(!(tmp446 && tmp447))
    {
      tmp449 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[308] /* MatStm3.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp448),tmp449);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp450 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2318
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2318};
  modelica_boolean tmp451;
  modelica_boolean tmp452;
  static const MMC_DEFSTRINGLIT(tmp453,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp454;
  static int tmp455 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp455)
  {
    tmp451 = GreaterEq(data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */,0.0);
    tmp452 = LessEq(data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */,1.0);
    if(!(tmp451 && tmp452))
    {
      tmp454 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[309] /* MatStm3.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp453),tmp454);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp455 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2319
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,3] >= 0.0 and MatStm3.compMolFrac[3,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,3] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,3], "g"));
*/
void Flowsheet_eqFunction_2319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2319};
  modelica_boolean tmp456;
  modelica_boolean tmp457;
  static const MMC_DEFSTRINGLIT(tmp458,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,3] <= 1.0, has value: ");
  modelica_string tmp459;
  static int tmp460 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp460)
  {
    tmp456 = GreaterEq(data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */,0.0);
    tmp457 = LessEq(data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */,1.0);
    if(!(tmp456 && tmp457))
    {
      tmp459 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[310] /* MatStm3.compMolFrac[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp458),tmp459);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,3] >= 0.0 and MatStm3.compMolFrac[3,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp460 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2320
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2320};
  modelica_boolean tmp461;
  modelica_boolean tmp462;
  static const MMC_DEFSTRINGLIT(tmp463,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp464;
  static int tmp465 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp465)
  {
    tmp461 = GreaterEq(data->localData[0]->realVars[266] /* MatStm3.compMasFrac[1,1] variable */,0.0);
    tmp462 = LessEq(data->localData[0]->realVars[266] /* MatStm3.compMasFrac[1,1] variable */,1.0);
    if(!(tmp461 && tmp462))
    {
      tmp464 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[266] /* MatStm3.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp463),tmp464);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp465 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2321
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2321};
  modelica_boolean tmp466;
  modelica_boolean tmp467;
  static const MMC_DEFSTRINGLIT(tmp468,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp469;
  static int tmp470 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp470)
  {
    tmp466 = GreaterEq(data->localData[0]->realVars[267] /* MatStm3.compMasFrac[1,2] variable */,0.0);
    tmp467 = LessEq(data->localData[0]->realVars[267] /* MatStm3.compMasFrac[1,2] variable */,1.0);
    if(!(tmp466 && tmp467))
    {
      tmp469 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[267] /* MatStm3.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp468),tmp469);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp470 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2322
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,3] >= 0.0 and MatStm3.compMasFrac[1,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,3] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,3], "g"));
*/
void Flowsheet_eqFunction_2322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2322};
  modelica_boolean tmp471;
  modelica_boolean tmp472;
  static const MMC_DEFSTRINGLIT(tmp473,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,3] <= 1.0, has value: ");
  modelica_string tmp474;
  static int tmp475 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp475)
  {
    tmp471 = GreaterEq(data->localData[0]->realVars[268] /* MatStm3.compMasFrac[1,3] variable */,0.0);
    tmp472 = LessEq(data->localData[0]->realVars[268] /* MatStm3.compMasFrac[1,3] variable */,1.0);
    if(!(tmp471 && tmp472))
    {
      tmp474 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[268] /* MatStm3.compMasFrac[1,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp473),tmp474);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,3] >= 0.0 and MatStm3.compMasFrac[1,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp475 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2323
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2323};
  modelica_boolean tmp476;
  modelica_boolean tmp477;
  static const MMC_DEFSTRINGLIT(tmp478,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp479;
  static int tmp480 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp480)
  {
    tmp476 = GreaterEq(data->localData[0]->realVars[269] /* MatStm3.compMasFrac[2,1] variable */,0.0);
    tmp477 = LessEq(data->localData[0]->realVars[269] /* MatStm3.compMasFrac[2,1] variable */,1.0);
    if(!(tmp476 && tmp477))
    {
      tmp479 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[269] /* MatStm3.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp478),tmp479);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp480 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2324
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2324};
  modelica_boolean tmp481;
  modelica_boolean tmp482;
  static const MMC_DEFSTRINGLIT(tmp483,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp484;
  static int tmp485 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp485)
  {
    tmp481 = GreaterEq(data->localData[0]->realVars[270] /* MatStm3.compMasFrac[2,2] variable */,0.0);
    tmp482 = LessEq(data->localData[0]->realVars[270] /* MatStm3.compMasFrac[2,2] variable */,1.0);
    if(!(tmp481 && tmp482))
    {
      tmp484 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[270] /* MatStm3.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp483),tmp484);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp485 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2325
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,3] >= 0.0 and MatStm3.compMasFrac[2,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,3] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,3], "g"));
*/
void Flowsheet_eqFunction_2325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2325};
  modelica_boolean tmp486;
  modelica_boolean tmp487;
  static const MMC_DEFSTRINGLIT(tmp488,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,3] <= 1.0, has value: ");
  modelica_string tmp489;
  static int tmp490 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp490)
  {
    tmp486 = GreaterEq(data->localData[0]->realVars[271] /* MatStm3.compMasFrac[2,3] variable */,0.0);
    tmp487 = LessEq(data->localData[0]->realVars[271] /* MatStm3.compMasFrac[2,3] variable */,1.0);
    if(!(tmp486 && tmp487))
    {
      tmp489 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[271] /* MatStm3.compMasFrac[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp488),tmp489);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,3] >= 0.0 and MatStm3.compMasFrac[2,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp490 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2326
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2326};
  modelica_boolean tmp491;
  modelica_boolean tmp492;
  static const MMC_DEFSTRINGLIT(tmp493,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp494;
  static int tmp495 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp495)
  {
    tmp491 = GreaterEq(data->localData[0]->realVars[272] /* MatStm3.compMasFrac[3,1] variable */,0.0);
    tmp492 = LessEq(data->localData[0]->realVars[272] /* MatStm3.compMasFrac[3,1] variable */,1.0);
    if(!(tmp491 && tmp492))
    {
      tmp494 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[272] /* MatStm3.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp493),tmp494);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp495 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2327
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2327};
  modelica_boolean tmp496;
  modelica_boolean tmp497;
  static const MMC_DEFSTRINGLIT(tmp498,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp499;
  static int tmp500 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp500)
  {
    tmp496 = GreaterEq(data->localData[0]->realVars[273] /* MatStm3.compMasFrac[3,2] variable */,0.0);
    tmp497 = LessEq(data->localData[0]->realVars[273] /* MatStm3.compMasFrac[3,2] variable */,1.0);
    if(!(tmp496 && tmp497))
    {
      tmp499 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[273] /* MatStm3.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp498),tmp499);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp500 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2328
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,3] >= 0.0 and MatStm3.compMasFrac[3,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,3] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,3], "g"));
*/
void Flowsheet_eqFunction_2328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2328};
  modelica_boolean tmp501;
  modelica_boolean tmp502;
  static const MMC_DEFSTRINGLIT(tmp503,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,3] <= 1.0, has value: ");
  modelica_string tmp504;
  static int tmp505 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp505)
  {
    tmp501 = GreaterEq(data->localData[0]->realVars[274] /* MatStm3.compMasFrac[3,3] variable */,0.0);
    tmp502 = LessEq(data->localData[0]->realVars[274] /* MatStm3.compMasFrac[3,3] variable */,1.0);
    if(!(tmp501 && tmp502))
    {
      tmp504 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[274] /* MatStm3.compMasFrac[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp503),tmp504);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,3] >= 0.0 and MatStm3.compMasFrac[3,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp505 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2329
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: " + String(MatStm3.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2329};
  modelica_boolean tmp506;
  static const MMC_DEFSTRINGLIT(tmp507,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: ");
  modelica_string tmp508;
  static int tmp509 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp509)
  {
    tmp506 = GreaterEq(data->localData[0]->realVars[296] /* MatStm3.compMolFlo[2,1] variable */,0.0);
    if(!tmp506)
    {
      tmp508 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[296] /* MatStm3.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp507),tmp508);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp509 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2330
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: " + String(MatStm3.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2330};
  modelica_boolean tmp510;
  static const MMC_DEFSTRINGLIT(tmp511,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: ");
  modelica_string tmp512;
  static int tmp513 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp513)
  {
    tmp510 = GreaterEq(data->localData[0]->realVars[297] /* MatStm3.compMolFlo[2,2] variable */,0.0);
    if(!tmp510)
    {
      tmp512 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[297] /* MatStm3.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp511),tmp512);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp513 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2331
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,3], has value: " + String(MatStm3.compMolFlo[2,3], "g"));
*/
void Flowsheet_eqFunction_2331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2331};
  modelica_boolean tmp514;
  static const MMC_DEFSTRINGLIT(tmp515,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,3], has value: ");
  modelica_string tmp516;
  static int tmp517 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp517)
  {
    tmp514 = GreaterEq(data->localData[0]->realVars[298] /* MatStm3.compMolFlo[2,3] variable */,0.0);
    if(!tmp514)
    {
      tmp516 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[298] /* MatStm3.compMolFlo[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp515),tmp516);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp517 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2332
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: " + String(MatStm3.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2332};
  modelica_boolean tmp518;
  static const MMC_DEFSTRINGLIT(tmp519,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: ");
  modelica_string tmp520;
  static int tmp521 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp521)
  {
    tmp518 = GreaterEq(data->localData[0]->realVars[299] /* MatStm3.compMolFlo[3,1] variable */,0.0);
    if(!tmp518)
    {
      tmp520 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[299] /* MatStm3.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp519),tmp520);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp521 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2333
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: " + String(MatStm3.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2333};
  modelica_boolean tmp522;
  static const MMC_DEFSTRINGLIT(tmp523,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: ");
  modelica_string tmp524;
  static int tmp525 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp525)
  {
    tmp522 = GreaterEq(data->localData[0]->realVars[300] /* MatStm3.compMolFlo[3,2] variable */,0.0);
    if(!tmp522)
    {
      tmp524 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[300] /* MatStm3.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp523),tmp524);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp525 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2334
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,3], has value: " + String(MatStm3.compMolFlo[3,3], "g"));
*/
void Flowsheet_eqFunction_2334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2334};
  modelica_boolean tmp526;
  static const MMC_DEFSTRINGLIT(tmp527,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,3], has value: ");
  modelica_string tmp528;
  static int tmp529 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp529)
  {
    tmp526 = GreaterEq(data->localData[0]->realVars[301] /* MatStm3.compMolFlo[3,3] variable */,0.0);
    if(!tmp526)
    {
      tmp528 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[301] /* MatStm3.compMolFlo[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp527),tmp528);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp529 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2335
type: ALGORITHM

  assert(MatStm3.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: " + String(MatStm3.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2335};
  modelica_boolean tmp530;
  static const MMC_DEFSTRINGLIT(tmp531,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: ");
  modelica_string tmp532;
  static int tmp533 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp533)
  {
    tmp530 = GreaterEq(data->localData[0]->realVars[260] /* MatStm3.compMasFlo[2,1] variable */,0.0);
    if(!tmp530)
    {
      tmp532 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[260] /* MatStm3.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp531),tmp532);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp533 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2336
type: ALGORITHM

  assert(MatStm3.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: " + String(MatStm3.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2336};
  modelica_boolean tmp534;
  static const MMC_DEFSTRINGLIT(tmp535,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: ");
  modelica_string tmp536;
  static int tmp537 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp537)
  {
    tmp534 = GreaterEq(data->localData[0]->realVars[261] /* MatStm3.compMasFlo[2,2] variable */,0.0);
    if(!tmp534)
    {
      tmp536 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[261] /* MatStm3.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp535),tmp536);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp537 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2337
type: ALGORITHM

  assert(MatStm3.compMasFlo[2,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,3], has value: " + String(MatStm3.compMasFlo[2,3], "g"));
*/
void Flowsheet_eqFunction_2337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2337};
  modelica_boolean tmp538;
  static const MMC_DEFSTRINGLIT(tmp539,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,3], has value: ");
  modelica_string tmp540;
  static int tmp541 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp541)
  {
    tmp538 = GreaterEq(data->localData[0]->realVars[262] /* MatStm3.compMasFlo[2,3] variable */,0.0);
    if(!tmp538)
    {
      tmp540 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[262] /* MatStm3.compMasFlo[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp539),tmp540);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp541 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2338
type: ALGORITHM

  assert(MatStm3.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: " + String(MatStm3.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2338};
  modelica_boolean tmp542;
  static const MMC_DEFSTRINGLIT(tmp543,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: ");
  modelica_string tmp544;
  static int tmp545 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp545)
  {
    tmp542 = GreaterEq(data->localData[0]->realVars[263] /* MatStm3.compMasFlo[3,1] variable */,0.0);
    if(!tmp542)
    {
      tmp544 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[263] /* MatStm3.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp543),tmp544);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp545 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2339
type: ALGORITHM

  assert(MatStm3.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: " + String(MatStm3.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2339};
  modelica_boolean tmp546;
  static const MMC_DEFSTRINGLIT(tmp547,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: ");
  modelica_string tmp548;
  static int tmp549 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp549)
  {
    tmp546 = GreaterEq(data->localData[0]->realVars[264] /* MatStm3.compMasFlo[3,2] variable */,0.0);
    if(!tmp546)
    {
      tmp548 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[264] /* MatStm3.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp547),tmp548);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp549 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2340
type: ALGORITHM

  assert(MatStm3.compMasFlo[3,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,3], has value: " + String(MatStm3.compMasFlo[3,3], "g"));
*/
void Flowsheet_eqFunction_2340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2340};
  modelica_boolean tmp550;
  static const MMC_DEFSTRINGLIT(tmp551,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,3], has value: ");
  modelica_string tmp552;
  static int tmp553 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp553)
  {
    tmp550 = GreaterEq(data->localData[0]->realVars[265] /* MatStm3.compMasFlo[3,3] variable */,0.0);
    if(!tmp550)
    {
      tmp552 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[265] /* MatStm3.compMasFlo[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp551),tmp552);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp553 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2341
type: ALGORITHM

  assert(MatStm4.liqPhasMolFrac >= 0.0 and MatStm4.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.liqPhasMolFrac <= 1.0, has value: " + String(MatStm4.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_2341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2341};
  modelica_boolean tmp554;
  modelica_boolean tmp555;
  static const MMC_DEFSTRINGLIT(tmp556,88,"Variable violating min/max constraint: 0.0 <= MatStm4.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp557;
  static int tmp558 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp558)
  {
    tmp554 = GreaterEq(data->localData[0]->realVars[448] /* MatStm4.liqPhasMolFrac variable */,0.0);
    tmp555 = LessEq(data->localData[0]->realVars[448] /* MatStm4.liqPhasMolFrac variable */,1.0);
    if(!(tmp554 && tmp555))
    {
      tmp557 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[448] /* MatStm4.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp556),tmp557);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.liqPhasMolFrac >= 0.0 and MatStm4.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp558 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2342
type: ALGORITHM

  assert(MatStm4.liqPhasMasFrac >= 0.0 and MatStm4.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.liqPhasMasFrac <= 1.0, has value: " + String(MatStm4.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2342};
  modelica_boolean tmp559;
  modelica_boolean tmp560;
  static const MMC_DEFSTRINGLIT(tmp561,88,"Variable violating min/max constraint: 0.0 <= MatStm4.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp562;
  static int tmp563 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp563)
  {
    tmp559 = GreaterEq(data->localData[0]->realVars[447] /* MatStm4.liqPhasMasFrac variable */,0.0);
    tmp560 = LessEq(data->localData[0]->realVars[447] /* MatStm4.liqPhasMasFrac variable */,1.0);
    if(!(tmp559 && tmp560))
    {
      tmp562 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[447] /* MatStm4.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp561),tmp562);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.liqPhasMasFrac >= 0.0 and MatStm4.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp563 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2343
type: ALGORITHM

  assert(MatStm4.vapPhasMasFrac >= 0.0 and MatStm4.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.vapPhasMasFrac <= 1.0, has value: " + String(MatStm4.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_2343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2343};
  modelica_boolean tmp564;
  modelica_boolean tmp565;
  static const MMC_DEFSTRINGLIT(tmp566,88,"Variable violating min/max constraint: 0.0 <= MatStm4.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp567;
  static int tmp568 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp568)
  {
    tmp564 = GreaterEq(data->localData[0]->realVars[476] /* MatStm4.vapPhasMasFrac variable */,0.0);
    tmp565 = LessEq(data->localData[0]->realVars[476] /* MatStm4.vapPhasMasFrac variable */,1.0);
    if(!(tmp564 && tmp565))
    {
      tmp567 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[476] /* MatStm4.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp566),tmp567);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.vapPhasMasFrac >= 0.0 and MatStm4.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp568 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2344
type: ALGORITHM

  assert(MatStm4.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMolFlo[2], has value: " + String(MatStm4.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_2344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2344};
  modelica_boolean tmp569;
  static const MMC_DEFSTRINGLIT(tmp570,75,"Variable violating min constraint: 0.0 <= MatStm4.totMolFlo[2], has value: ");
  modelica_string tmp571;
  static int tmp572 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp572)
  {
    tmp569 = GreaterEq(data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */,0.0);
    if(!tmp569)
    {
      tmp571 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[474] /* MatStm4.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp570),tmp571);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp572 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2345
type: ALGORITHM

  assert(MatStm4.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMolFlo[3], has value: " + String(MatStm4.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_2345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2345};
  modelica_boolean tmp573;
  static const MMC_DEFSTRINGLIT(tmp574,75,"Variable violating min constraint: 0.0 <= MatStm4.totMolFlo[3], has value: ");
  modelica_string tmp575;
  static int tmp576 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp576)
  {
    tmp573 = GreaterEq(data->localData[0]->realVars[475] /* MatStm4.totMolFlo[3] variable */,0.0);
    if(!tmp573)
    {
      tmp575 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[475] /* MatStm4.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp574),tmp575);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp576 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2346
type: ALGORITHM

  assert(MatStm4.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[1], has value: " + String(MatStm4.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_2346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2346};
  modelica_boolean tmp577;
  static const MMC_DEFSTRINGLIT(tmp578,75,"Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[1], has value: ");
  modelica_string tmp579;
  static int tmp580 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp580)
  {
    tmp577 = GreaterEq(data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */,0.0);
    if(!tmp577)
    {
      tmp579 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[470] /* MatStm4.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp578),tmp579);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp580 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2347
type: ALGORITHM

  assert(MatStm4.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[2], has value: " + String(MatStm4.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_2347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2347};
  modelica_boolean tmp581;
  static const MMC_DEFSTRINGLIT(tmp582,75,"Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[2], has value: ");
  modelica_string tmp583;
  static int tmp584 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp584)
  {
    tmp581 = GreaterEq(data->localData[0]->realVars[471] /* MatStm4.totMasFlo[2] variable */,0.0);
    if(!tmp581)
    {
      tmp583 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[471] /* MatStm4.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp582),tmp583);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp584 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2348
type: ALGORITHM

  assert(MatStm4.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[3], has value: " + String(MatStm4.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_2348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2348};
  modelica_boolean tmp585;
  static const MMC_DEFSTRINGLIT(tmp586,75,"Variable violating min constraint: 0.0 <= MatStm4.totMasFlo[3], has value: ");
  modelica_string tmp587;
  static int tmp588 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp588)
  {
    tmp585 = GreaterEq(data->localData[0]->realVars[472] /* MatStm4.totMasFlo[3] variable */,0.0);
    if(!tmp585)
    {
      tmp587 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[472] /* MatStm4.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp586),tmp587);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp588 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2349
type: ALGORITHM

  assert(MatStm4.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.MW[1], has value: " + String(MatStm4.MW[1], "g"));
*/
void Flowsheet_eqFunction_2349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2349};
  modelica_boolean tmp589;
  static const MMC_DEFSTRINGLIT(tmp590,68,"Variable violating min constraint: 0.0 <= MatStm4.MW[1], has value: ");
  modelica_string tmp591;
  static int tmp592 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp592)
  {
    tmp589 = GreaterEq(data->localData[0]->realVars[365] /* MatStm4.MW[1] variable */,0.0);
    if(!tmp589)
    {
      tmp591 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[365] /* MatStm4.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp590),tmp591);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp592 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2350
type: ALGORITHM

  assert(MatStm4.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.MW[2], has value: " + String(MatStm4.MW[2], "g"));
*/
void Flowsheet_eqFunction_2350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2350};
  modelica_boolean tmp593;
  static const MMC_DEFSTRINGLIT(tmp594,68,"Variable violating min constraint: 0.0 <= MatStm4.MW[2], has value: ");
  modelica_string tmp595;
  static int tmp596 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp596)
  {
    tmp593 = GreaterEq(data->localData[0]->realVars[366] /* MatStm4.MW[2] variable */,0.0);
    if(!tmp593)
    {
      tmp595 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[366] /* MatStm4.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp594),tmp595);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp596 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2351
type: ALGORITHM

  assert(MatStm4.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.MW[3], has value: " + String(MatStm4.MW[3], "g"));
*/
void Flowsheet_eqFunction_2351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2351};
  modelica_boolean tmp597;
  static const MMC_DEFSTRINGLIT(tmp598,68,"Variable violating min constraint: 0.0 <= MatStm4.MW[3], has value: ");
  modelica_string tmp599;
  static int tmp600 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp600)
  {
    tmp597 = GreaterEq(data->localData[0]->realVars[367] /* MatStm4.MW[3] variable */,0.0);
    if(!tmp597)
    {
      tmp599 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[367] /* MatStm4.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp598),tmp599);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp600 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2352
type: ALGORITHM

  assert(MatStm4.compMolFrac[2,1] >= 0.0 and MatStm4.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm4.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2352};
  modelica_boolean tmp601;
  modelica_boolean tmp602;
  static const MMC_DEFSTRINGLIT(tmp603,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp604;
  static int tmp605 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp605)
  {
    tmp601 = GreaterEq(data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */,0.0);
    tmp602 = LessEq(data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */,1.0);
    if(!(tmp601 && tmp602))
    {
      tmp604 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[423] /* MatStm4.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp603),tmp604);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[2,1] >= 0.0 and MatStm4.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp605 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2353
type: ALGORITHM

  assert(MatStm4.compMolFrac[2,2] >= 0.0 and MatStm4.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm4.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2353};
  modelica_boolean tmp606;
  modelica_boolean tmp607;
  static const MMC_DEFSTRINGLIT(tmp608,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp609;
  static int tmp610 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp610)
  {
    tmp606 = GreaterEq(data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */,0.0);
    tmp607 = LessEq(data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */,1.0);
    if(!(tmp606 && tmp607))
    {
      tmp609 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[424] /* MatStm4.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp608),tmp609);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[2,2] >= 0.0 and MatStm4.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp610 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2354
type: ALGORITHM

  assert(MatStm4.compMolFrac[2,3] >= 0.0 and MatStm4.compMolFrac[2,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[2,3] <= 1.0, has value: " + String(MatStm4.compMolFrac[2,3], "g"));
*/
void Flowsheet_eqFunction_2354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2354};
  modelica_boolean tmp611;
  modelica_boolean tmp612;
  static const MMC_DEFSTRINGLIT(tmp613,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[2,3] <= 1.0, has value: ");
  modelica_string tmp614;
  static int tmp615 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp615)
  {
    tmp611 = GreaterEq(data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */,0.0);
    tmp612 = LessEq(data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */,1.0);
    if(!(tmp611 && tmp612))
    {
      tmp614 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[425] /* MatStm4.compMolFrac[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp613),tmp614);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[2,3] >= 0.0 and MatStm4.compMolFrac[2,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp615 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2355
type: ALGORITHM

  assert(MatStm4.compMolFrac[3,1] >= 0.0 and MatStm4.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm4.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2355};
  modelica_boolean tmp616;
  modelica_boolean tmp617;
  static const MMC_DEFSTRINGLIT(tmp618,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp619;
  static int tmp620 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp620)
  {
    tmp616 = GreaterEq(data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */,0.0);
    tmp617 = LessEq(data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */,1.0);
    if(!(tmp616 && tmp617))
    {
      tmp619 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[426] /* MatStm4.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp618),tmp619);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[3,1] >= 0.0 and MatStm4.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp620 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2356
type: ALGORITHM

  assert(MatStm4.compMolFrac[3,2] >= 0.0 and MatStm4.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm4.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2356};
  modelica_boolean tmp621;
  modelica_boolean tmp622;
  static const MMC_DEFSTRINGLIT(tmp623,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp624;
  static int tmp625 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp625)
  {
    tmp621 = GreaterEq(data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */,0.0);
    tmp622 = LessEq(data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */,1.0);
    if(!(tmp621 && tmp622))
    {
      tmp624 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[427] /* MatStm4.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp623),tmp624);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[3,2] >= 0.0 and MatStm4.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp625 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2357
type: ALGORITHM

  assert(MatStm4.compMolFrac[3,3] >= 0.0 and MatStm4.compMolFrac[3,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[3,3] <= 1.0, has value: " + String(MatStm4.compMolFrac[3,3], "g"));
*/
void Flowsheet_eqFunction_2357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2357};
  modelica_boolean tmp626;
  modelica_boolean tmp627;
  static const MMC_DEFSTRINGLIT(tmp628,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMolFrac[3,3] <= 1.0, has value: ");
  modelica_string tmp629;
  static int tmp630 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp630)
  {
    tmp626 = GreaterEq(data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */,0.0);
    tmp627 = LessEq(data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */,1.0);
    if(!(tmp626 && tmp627))
    {
      tmp629 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[428] /* MatStm4.compMolFrac[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp628),tmp629);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFrac[3,3] >= 0.0 and MatStm4.compMolFrac[3,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp630 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2358
type: ALGORITHM

  assert(MatStm4.compMasFrac[1,1] >= 0.0 and MatStm4.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm4.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_2358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2358};
  modelica_boolean tmp631;
  modelica_boolean tmp632;
  static const MMC_DEFSTRINGLIT(tmp633,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp634;
  static int tmp635 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp635)
  {
    tmp631 = GreaterEq(data->localData[0]->realVars[384] /* MatStm4.compMasFrac[1,1] variable */,0.0);
    tmp632 = LessEq(data->localData[0]->realVars[384] /* MatStm4.compMasFrac[1,1] variable */,1.0);
    if(!(tmp631 && tmp632))
    {
      tmp634 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[384] /* MatStm4.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp633),tmp634);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[1,1] >= 0.0 and MatStm4.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp635 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2359
type: ALGORITHM

  assert(MatStm4.compMasFrac[1,2] >= 0.0 and MatStm4.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm4.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_2359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2359};
  modelica_boolean tmp636;
  modelica_boolean tmp637;
  static const MMC_DEFSTRINGLIT(tmp638,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp639;
  static int tmp640 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp640)
  {
    tmp636 = GreaterEq(data->localData[0]->realVars[385] /* MatStm4.compMasFrac[1,2] variable */,0.0);
    tmp637 = LessEq(data->localData[0]->realVars[385] /* MatStm4.compMasFrac[1,2] variable */,1.0);
    if(!(tmp636 && tmp637))
    {
      tmp639 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[385] /* MatStm4.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp638),tmp639);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[1,2] >= 0.0 and MatStm4.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp640 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2360
type: ALGORITHM

  assert(MatStm4.compMasFrac[1,3] >= 0.0 and MatStm4.compMasFrac[1,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[1,3] <= 1.0, has value: " + String(MatStm4.compMasFrac[1,3], "g"));
*/
void Flowsheet_eqFunction_2360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2360};
  modelica_boolean tmp641;
  modelica_boolean tmp642;
  static const MMC_DEFSTRINGLIT(tmp643,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[1,3] <= 1.0, has value: ");
  modelica_string tmp644;
  static int tmp645 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp645)
  {
    tmp641 = GreaterEq(data->localData[0]->realVars[386] /* MatStm4.compMasFrac[1,3] variable */,0.0);
    tmp642 = LessEq(data->localData[0]->realVars[386] /* MatStm4.compMasFrac[1,3] variable */,1.0);
    if(!(tmp641 && tmp642))
    {
      tmp644 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[386] /* MatStm4.compMasFrac[1,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp643),tmp644);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[1,3] >= 0.0 and MatStm4.compMasFrac[1,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp645 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2361
type: ALGORITHM

  assert(MatStm4.compMasFrac[2,1] >= 0.0 and MatStm4.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm4.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_2361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2361};
  modelica_boolean tmp646;
  modelica_boolean tmp647;
  static const MMC_DEFSTRINGLIT(tmp648,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp649;
  static int tmp650 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp650)
  {
    tmp646 = GreaterEq(data->localData[0]->realVars[387] /* MatStm4.compMasFrac[2,1] variable */,0.0);
    tmp647 = LessEq(data->localData[0]->realVars[387] /* MatStm4.compMasFrac[2,1] variable */,1.0);
    if(!(tmp646 && tmp647))
    {
      tmp649 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[387] /* MatStm4.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp648),tmp649);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[2,1] >= 0.0 and MatStm4.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp650 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2362
type: ALGORITHM

  assert(MatStm4.compMasFrac[2,2] >= 0.0 and MatStm4.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm4.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_2362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2362};
  modelica_boolean tmp651;
  modelica_boolean tmp652;
  static const MMC_DEFSTRINGLIT(tmp653,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp654;
  static int tmp655 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp655)
  {
    tmp651 = GreaterEq(data->localData[0]->realVars[388] /* MatStm4.compMasFrac[2,2] variable */,0.0);
    tmp652 = LessEq(data->localData[0]->realVars[388] /* MatStm4.compMasFrac[2,2] variable */,1.0);
    if(!(tmp651 && tmp652))
    {
      tmp654 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[388] /* MatStm4.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp653),tmp654);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[2,2] >= 0.0 and MatStm4.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp655 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2363
type: ALGORITHM

  assert(MatStm4.compMasFrac[2,3] >= 0.0 and MatStm4.compMasFrac[2,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[2,3] <= 1.0, has value: " + String(MatStm4.compMasFrac[2,3], "g"));
*/
void Flowsheet_eqFunction_2363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2363};
  modelica_boolean tmp656;
  modelica_boolean tmp657;
  static const MMC_DEFSTRINGLIT(tmp658,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[2,3] <= 1.0, has value: ");
  modelica_string tmp659;
  static int tmp660 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp660)
  {
    tmp656 = GreaterEq(data->localData[0]->realVars[389] /* MatStm4.compMasFrac[2,3] variable */,0.0);
    tmp657 = LessEq(data->localData[0]->realVars[389] /* MatStm4.compMasFrac[2,3] variable */,1.0);
    if(!(tmp656 && tmp657))
    {
      tmp659 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[389] /* MatStm4.compMasFrac[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp658),tmp659);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[2,3] >= 0.0 and MatStm4.compMasFrac[2,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp660 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2364
type: ALGORITHM

  assert(MatStm4.compMasFrac[3,1] >= 0.0 and MatStm4.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm4.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_2364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2364};
  modelica_boolean tmp661;
  modelica_boolean tmp662;
  static const MMC_DEFSTRINGLIT(tmp663,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp664;
  static int tmp665 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp665)
  {
    tmp661 = GreaterEq(data->localData[0]->realVars[390] /* MatStm4.compMasFrac[3,1] variable */,0.0);
    tmp662 = LessEq(data->localData[0]->realVars[390] /* MatStm4.compMasFrac[3,1] variable */,1.0);
    if(!(tmp661 && tmp662))
    {
      tmp664 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[390] /* MatStm4.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp663),tmp664);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[3,1] >= 0.0 and MatStm4.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp665 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2365
type: ALGORITHM

  assert(MatStm4.compMasFrac[3,2] >= 0.0 and MatStm4.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm4.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_2365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2365};
  modelica_boolean tmp666;
  modelica_boolean tmp667;
  static const MMC_DEFSTRINGLIT(tmp668,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp669;
  static int tmp670 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp670)
  {
    tmp666 = GreaterEq(data->localData[0]->realVars[391] /* MatStm4.compMasFrac[3,2] variable */,0.0);
    tmp667 = LessEq(data->localData[0]->realVars[391] /* MatStm4.compMasFrac[3,2] variable */,1.0);
    if(!(tmp666 && tmp667))
    {
      tmp669 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[391] /* MatStm4.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp668),tmp669);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[3,2] >= 0.0 and MatStm4.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp670 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2366
type: ALGORITHM

  assert(MatStm4.compMasFrac[3,3] >= 0.0 and MatStm4.compMasFrac[3,3] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[3,3] <= 1.0, has value: " + String(MatStm4.compMasFrac[3,3], "g"));
*/
void Flowsheet_eqFunction_2366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2366};
  modelica_boolean tmp671;
  modelica_boolean tmp672;
  static const MMC_DEFSTRINGLIT(tmp673,90,"Variable violating min/max constraint: 0.0 <= MatStm4.compMasFrac[3,3] <= 1.0, has value: ");
  modelica_string tmp674;
  static int tmp675 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp675)
  {
    tmp671 = GreaterEq(data->localData[0]->realVars[392] /* MatStm4.compMasFrac[3,3] variable */,0.0);
    tmp672 = LessEq(data->localData[0]->realVars[392] /* MatStm4.compMasFrac[3,3] variable */,1.0);
    if(!(tmp671 && tmp672))
    {
      tmp674 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[392] /* MatStm4.compMasFrac[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp673),tmp674);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFrac[3,3] >= 0.0 and MatStm4.compMasFrac[3,3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp675 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2367
type: ALGORITHM

  assert(MatStm4.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[2,1], has value: " + String(MatStm4.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2367};
  modelica_boolean tmp676;
  static const MMC_DEFSTRINGLIT(tmp677,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[2,1], has value: ");
  modelica_string tmp678;
  static int tmp679 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp679)
  {
    tmp676 = GreaterEq(data->localData[0]->realVars[414] /* MatStm4.compMolFlo[2,1] variable */,0.0);
    if(!tmp676)
    {
      tmp678 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[414] /* MatStm4.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp677),tmp678);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp679 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2368
type: ALGORITHM

  assert(MatStm4.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[2,2], has value: " + String(MatStm4.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2368};
  modelica_boolean tmp680;
  static const MMC_DEFSTRINGLIT(tmp681,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[2,2], has value: ");
  modelica_string tmp682;
  static int tmp683 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp683)
  {
    tmp680 = GreaterEq(data->localData[0]->realVars[415] /* MatStm4.compMolFlo[2,2] variable */,0.0);
    if(!tmp680)
    {
      tmp682 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[415] /* MatStm4.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp681),tmp682);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp683 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2369
type: ALGORITHM

  assert(MatStm4.compMolFlo[2,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[2,3], has value: " + String(MatStm4.compMolFlo[2,3], "g"));
*/
void Flowsheet_eqFunction_2369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2369};
  modelica_boolean tmp684;
  static const MMC_DEFSTRINGLIT(tmp685,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[2,3], has value: ");
  modelica_string tmp686;
  static int tmp687 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp687)
  {
    tmp684 = GreaterEq(data->localData[0]->realVars[416] /* MatStm4.compMolFlo[2,3] variable */,0.0);
    if(!tmp684)
    {
      tmp686 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[416] /* MatStm4.compMolFlo[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp685),tmp686);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[2,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp687 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2370
type: ALGORITHM

  assert(MatStm4.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[3,1], has value: " + String(MatStm4.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2370};
  modelica_boolean tmp688;
  static const MMC_DEFSTRINGLIT(tmp689,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[3,1], has value: ");
  modelica_string tmp690;
  static int tmp691 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp691)
  {
    tmp688 = GreaterEq(data->localData[0]->realVars[417] /* MatStm4.compMolFlo[3,1] variable */,0.0);
    if(!tmp688)
    {
      tmp690 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[417] /* MatStm4.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp689),tmp690);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp691 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2371
type: ALGORITHM

  assert(MatStm4.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[3,2], has value: " + String(MatStm4.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2371};
  modelica_boolean tmp692;
  static const MMC_DEFSTRINGLIT(tmp693,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[3,2], has value: ");
  modelica_string tmp694;
  static int tmp695 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp695)
  {
    tmp692 = GreaterEq(data->localData[0]->realVars[418] /* MatStm4.compMolFlo[3,2] variable */,0.0);
    if(!tmp692)
    {
      tmp694 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[418] /* MatStm4.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp693),tmp694);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp695 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2372
type: ALGORITHM

  assert(MatStm4.compMolFlo[3,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[3,3], has value: " + String(MatStm4.compMolFlo[3,3], "g"));
*/
void Flowsheet_eqFunction_2372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2372};
  modelica_boolean tmp696;
  static const MMC_DEFSTRINGLIT(tmp697,78,"Variable violating min constraint: 0.0 <= MatStm4.compMolFlo[3,3], has value: ");
  modelica_string tmp698;
  static int tmp699 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp699)
  {
    tmp696 = GreaterEq(data->localData[0]->realVars[419] /* MatStm4.compMolFlo[3,3] variable */,0.0);
    if(!tmp696)
    {
      tmp698 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[419] /* MatStm4.compMolFlo[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp697),tmp698);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMolFlo[3,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp699 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2373
type: ALGORITHM

  assert(MatStm4.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[2,1], has value: " + String(MatStm4.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_2373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2373};
  modelica_boolean tmp700;
  static const MMC_DEFSTRINGLIT(tmp701,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[2,1], has value: ");
  modelica_string tmp702;
  static int tmp703 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp703)
  {
    tmp700 = GreaterEq(data->localData[0]->realVars[378] /* MatStm4.compMasFlo[2,1] variable */,0.0);
    if(!tmp700)
    {
      tmp702 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[378] /* MatStm4.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp701),tmp702);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp703 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2374
type: ALGORITHM

  assert(MatStm4.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[2,2], has value: " + String(MatStm4.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_2374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2374};
  modelica_boolean tmp704;
  static const MMC_DEFSTRINGLIT(tmp705,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[2,2], has value: ");
  modelica_string tmp706;
  static int tmp707 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp707)
  {
    tmp704 = GreaterEq(data->localData[0]->realVars[379] /* MatStm4.compMasFlo[2,2] variable */,0.0);
    if(!tmp704)
    {
      tmp706 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[379] /* MatStm4.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp705),tmp706);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp707 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2375
type: ALGORITHM

  assert(MatStm4.compMasFlo[2,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[2,3], has value: " + String(MatStm4.compMasFlo[2,3], "g"));
*/
void Flowsheet_eqFunction_2375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2375};
  modelica_boolean tmp708;
  static const MMC_DEFSTRINGLIT(tmp709,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[2,3], has value: ");
  modelica_string tmp710;
  static int tmp711 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp711)
  {
    tmp708 = GreaterEq(data->localData[0]->realVars[380] /* MatStm4.compMasFlo[2,3] variable */,0.0);
    if(!tmp708)
    {
      tmp710 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[380] /* MatStm4.compMasFlo[2,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp709),tmp710);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[2,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp711 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2376
type: ALGORITHM

  assert(MatStm4.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[3,1], has value: " + String(MatStm4.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_2376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2376};
  modelica_boolean tmp712;
  static const MMC_DEFSTRINGLIT(tmp713,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[3,1], has value: ");
  modelica_string tmp714;
  static int tmp715 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp715)
  {
    tmp712 = GreaterEq(data->localData[0]->realVars[381] /* MatStm4.compMasFlo[3,1] variable */,0.0);
    if(!tmp712)
    {
      tmp714 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[381] /* MatStm4.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp713),tmp714);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp715 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2377
type: ALGORITHM

  assert(MatStm4.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[3,2], has value: " + String(MatStm4.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_2377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2377};
  modelica_boolean tmp716;
  static const MMC_DEFSTRINGLIT(tmp717,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[3,2], has value: ");
  modelica_string tmp718;
  static int tmp719 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp719)
  {
    tmp716 = GreaterEq(data->localData[0]->realVars[382] /* MatStm4.compMasFlo[3,2] variable */,0.0);
    if(!tmp716)
    {
      tmp718 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[382] /* MatStm4.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp717),tmp718);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp719 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2378
type: ALGORITHM

  assert(MatStm4.compMasFlo[3,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[3,3], has value: " + String(MatStm4.compMasFlo[3,3], "g"));
*/
void Flowsheet_eqFunction_2378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2378};
  modelica_boolean tmp720;
  static const MMC_DEFSTRINGLIT(tmp721,78,"Variable violating min constraint: 0.0 <= MatStm4.compMasFlo[3,3], has value: ");
  modelica_string tmp722;
  static int tmp723 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp723)
  {
    tmp720 = GreaterEq(data->localData[0]->realVars[383] /* MatStm4.compMasFlo[3,3] variable */,0.0);
    if(!tmp720)
    {
      tmp722 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[383] /* MatStm4.compMasFlo[3,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp721),tmp722);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm4.compMasFlo[3,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp723 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2216
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: " + String(MatStm1.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2216};
  modelica_boolean tmp724;
  static const MMC_DEFSTRINGLIT(tmp725,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: ");
  modelica_string tmp726;
  static int tmp727 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp727)
  {
    tmp724 = GreaterEq(data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */,0.0);
    if(!tmp724)
    {
      tmp726 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp725),tmp726);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp727 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2215
type: ALGORITHM

  assert(MatStm1.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,1], has value: " + String(MatStm1.compMolFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_2215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2215};
  modelica_boolean tmp728;
  static const MMC_DEFSTRINGLIT(tmp729,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,1], has value: ");
  modelica_string tmp730;
  static int tmp731 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp731)
  {
    tmp728 = GreaterEq(data->localData[0]->realVars[56] /* MatStm1.compMolFlo[1,1] variable */,0.0);
    if(!tmp728)
    {
      tmp730 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[56] /* MatStm1.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp729),tmp730);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp731 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2214
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: " + String(MatStm1.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2214};
  modelica_boolean tmp732;
  static const MMC_DEFSTRINGLIT(tmp733,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: ");
  modelica_string tmp734;
  static int tmp735 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp735)
  {
    tmp732 = GreaterEq(data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */,0.0);
    if(!tmp732)
    {
      tmp734 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp733),tmp734);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp735 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2213
type: ALGORITHM

  assert(MatStm1.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,2], has value: " + String(MatStm1.compMolFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_2213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2213};
  modelica_boolean tmp736;
  static const MMC_DEFSTRINGLIT(tmp737,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,2], has value: ");
  modelica_string tmp738;
  static int tmp739 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp739)
  {
    tmp736 = GreaterEq(data->localData[0]->realVars[57] /* MatStm1.compMolFlo[1,2] variable */,0.0);
    if(!tmp736)
    {
      tmp738 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[57] /* MatStm1.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp737),tmp738);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp739 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2212
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,3], has value: " + String(MatStm1.compMasFlo[1,3], "g"));
*/
void Flowsheet_eqFunction_2212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2212};
  modelica_boolean tmp740;
  static const MMC_DEFSTRINGLIT(tmp741,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,3], has value: ");
  modelica_string tmp742;
  static int tmp743 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp743)
  {
    tmp740 = GreaterEq(data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,3] variable */,0.0);
    if(!tmp740)
    {
      tmp742 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp741),tmp742);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp743 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2211
type: ALGORITHM

  assert(MatStm1.compMolFlo[1,3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,3], has value: " + String(MatStm1.compMolFlo[1,3], "g"));
*/
void Flowsheet_eqFunction_2211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2211};
  modelica_boolean tmp744;
  static const MMC_DEFSTRINGLIT(tmp745,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,3], has value: ");
  modelica_string tmp746;
  static int tmp747 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp747)
  {
    tmp744 = GreaterEq(data->localData[0]->realVars[58] /* MatStm1.compMolFlo[1,3] variable */,0.0);
    if(!tmp744)
    {
      tmp746 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[58] /* MatStm1.compMolFlo[1,3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp745),tmp746);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[1,3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp747 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int Flowsheet_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

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

  Flowsheet_eqFunction_2321(data, threadData);

  Flowsheet_eqFunction_2322(data, threadData);

  Flowsheet_eqFunction_2323(data, threadData);

  Flowsheet_eqFunction_2324(data, threadData);

  Flowsheet_eqFunction_2325(data, threadData);

  Flowsheet_eqFunction_2326(data, threadData);

  Flowsheet_eqFunction_2327(data, threadData);

  Flowsheet_eqFunction_2328(data, threadData);

  Flowsheet_eqFunction_2329(data, threadData);

  Flowsheet_eqFunction_2330(data, threadData);

  Flowsheet_eqFunction_2331(data, threadData);

  Flowsheet_eqFunction_2332(data, threadData);

  Flowsheet_eqFunction_2333(data, threadData);

  Flowsheet_eqFunction_2334(data, threadData);

  Flowsheet_eqFunction_2335(data, threadData);

  Flowsheet_eqFunction_2336(data, threadData);

  Flowsheet_eqFunction_2337(data, threadData);

  Flowsheet_eqFunction_2338(data, threadData);

  Flowsheet_eqFunction_2339(data, threadData);

  Flowsheet_eqFunction_2340(data, threadData);

  Flowsheet_eqFunction_2341(data, threadData);

  Flowsheet_eqFunction_2342(data, threadData);

  Flowsheet_eqFunction_2343(data, threadData);

  Flowsheet_eqFunction_2344(data, threadData);

  Flowsheet_eqFunction_2345(data, threadData);

  Flowsheet_eqFunction_2346(data, threadData);

  Flowsheet_eqFunction_2347(data, threadData);

  Flowsheet_eqFunction_2348(data, threadData);

  Flowsheet_eqFunction_2349(data, threadData);

  Flowsheet_eqFunction_2350(data, threadData);

  Flowsheet_eqFunction_2351(data, threadData);

  Flowsheet_eqFunction_2352(data, threadData);

  Flowsheet_eqFunction_2353(data, threadData);

  Flowsheet_eqFunction_2354(data, threadData);

  Flowsheet_eqFunction_2355(data, threadData);

  Flowsheet_eqFunction_2356(data, threadData);

  Flowsheet_eqFunction_2357(data, threadData);

  Flowsheet_eqFunction_2358(data, threadData);

  Flowsheet_eqFunction_2359(data, threadData);

  Flowsheet_eqFunction_2360(data, threadData);

  Flowsheet_eqFunction_2361(data, threadData);

  Flowsheet_eqFunction_2362(data, threadData);

  Flowsheet_eqFunction_2363(data, threadData);

  Flowsheet_eqFunction_2364(data, threadData);

  Flowsheet_eqFunction_2365(data, threadData);

  Flowsheet_eqFunction_2366(data, threadData);

  Flowsheet_eqFunction_2367(data, threadData);

  Flowsheet_eqFunction_2368(data, threadData);

  Flowsheet_eqFunction_2369(data, threadData);

  Flowsheet_eqFunction_2370(data, threadData);

  Flowsheet_eqFunction_2371(data, threadData);

  Flowsheet_eqFunction_2372(data, threadData);

  Flowsheet_eqFunction_2373(data, threadData);

  Flowsheet_eqFunction_2374(data, threadData);

  Flowsheet_eqFunction_2375(data, threadData);

  Flowsheet_eqFunction_2376(data, threadData);

  Flowsheet_eqFunction_2377(data, threadData);

  Flowsheet_eqFunction_2378(data, threadData);

  Flowsheet_eqFunction_2216(data, threadData);

  Flowsheet_eqFunction_2215(data, threadData);

  Flowsheet_eqFunction_2214(data, threadData);

  Flowsheet_eqFunction_2213(data, threadData);

  Flowsheet_eqFunction_2212(data, threadData);

  Flowsheet_eqFunction_2211(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

