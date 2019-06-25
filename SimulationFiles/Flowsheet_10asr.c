/* Asserts */
#include "Flowsheet_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 873
type: ALGORITHM

  assert(Heater1.outT >= 0.0, "Variable violating min constraint: 0.0 <= Heater1.outT, has value: " + String(Heater1.outT, "g"));
*/
void Flowsheet_eqFunction_873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,873};
  modelica_boolean tmp2;
  static const MMC_DEFSTRINGLIT(tmp3,67,"Variable violating min constraint: 0.0 <= Heater1.outT, has value: ");
  modelica_string tmp4;
  static int tmp5 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp5)
  {
    tmp2 = GreaterEq(data->localData[0]->realVars[8] /* Heater1.outT variable */,0.0);
    if(!tmp2)
    {
      tmp4 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[8] /* Heater1.outT variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp3),tmp4);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4370,7,4370,471,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nHeater1.outT >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp5 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 874
type: ALGORITHM

  assert(Heater1.outVapPhasMolFrac >= 0.0 and Heater1.outVapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= Heater1.outVapPhasMolFrac <= 1.0, has value: " + String(Heater1.outVapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,874};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  static const MMC_DEFSTRINGLIT(tmp8,91,"Variable violating min/max constraint: 0.0 <= Heater1.outVapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp9;
  static int tmp10 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp10)
  {
    tmp6 = GreaterEq(data->localData[0]->realVars[9] /* Heater1.outVapPhasMolFrac variable */,0.0);
    tmp7 = LessEq(data->localData[0]->realVars[9] /* Heater1.outVapPhasMolFrac variable */,1.0);
    if(!(tmp6 && tmp7))
    {
      tmp9 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[9] /* Heater1.outVapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp8),tmp9);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4370,7,4370,471,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nHeater1.outVapPhasMolFrac >= 0.0 and Heater1.outVapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp10 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 875
type: ALGORITHM

  assert(Heater1.inVapPhasMolFrac >= 0.0 and Heater1.inVapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= Heater1.inVapPhasMolFrac <= 1.0, has value: " + String(Heater1.inVapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,875};
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,90,"Variable violating min/max constraint: 0.0 <= Heater1.inVapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp14;
  static int tmp15 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp15)
  {
    tmp11 = GreaterEq(data->localData[0]->realVars[6] /* Heater1.inVapPhasMolFrac variable */,0.0);
    tmp12 = LessEq(data->localData[0]->realVars[6] /* Heater1.inVapPhasMolFrac variable */,1.0);
    if(!(tmp11 && tmp12))
    {
      tmp14 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[6] /* Heater1.inVapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp13),tmp14);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4374,7,4374,188,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nHeater1.inVapPhasMolFrac >= 0.0 and Heater1.inVapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp15 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 876
type: ALGORITHM

  assert(MatStm1.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.Pbubl, has value: " + String(MatStm1.Pbubl, "g"));
*/
void Flowsheet_eqFunction_876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,876};
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,68,"Variable violating min constraint: 0.0 <= MatStm1.Pbubl, has value: ");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp19)
  {
    tmp16 = GreaterEq(data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */,0.0);
    if(!tmp16)
    {
      tmp18 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[16] /* MatStm1.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp19 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 877
type: ALGORITHM

  assert(MatStm1.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.Pdew, has value: " + String(MatStm1.Pdew, "g"));
*/
void Flowsheet_eqFunction_877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,877};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,67,"Variable violating min constraint: 0.0 <= MatStm1.Pdew, has value: ");
  modelica_string tmp22;
  static int tmp23 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp23)
  {
    tmp20 = GreaterEq(data->localData[0]->realVars[17] /* MatStm1.Pdew variable */,0.0);
    if(!tmp20)
    {
      tmp22 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[17] /* MatStm1.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp23 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 878
type: ALGORITHM

  assert(MatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: " + String(MatStm1.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,878};
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  static const MMC_DEFSTRINGLIT(tmp26,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp27;
  static int tmp28 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp28)
  {
    tmp24 = GreaterEq(data->localData[0]->realVars[69] /* MatStm1.liqPhasMolFrac variable */,0.0);
    tmp25 = LessEq(data->localData[0]->realVars[69] /* MatStm1.liqPhasMolFrac variable */,1.0);
    if(!(tmp24 && tmp25))
    {
      tmp27 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[69] /* MatStm1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp26),tmp27);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp28 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 879
type: ALGORITHM

  assert(MatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: " + String(MatStm1.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,879};
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  static const MMC_DEFSTRINGLIT(tmp31,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp32;
  static int tmp33 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp33)
  {
    tmp29 = GreaterEq(data->localData[0]->realVars[68] /* MatStm1.liqPhasMasFrac variable */,0.0);
    tmp30 = LessEq(data->localData[0]->realVars[68] /* MatStm1.liqPhasMasFrac variable */,1.0);
    if(!(tmp29 && tmp30))
    {
      tmp32 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[68] /* MatStm1.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp31),tmp32);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp33 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 880
type: ALGORITHM

  assert(MatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: " + String(MatStm1.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,880};
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp37;
  static int tmp38 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp38)
  {
    tmp34 = GreaterEq(data->localData[0]->realVars[95] /* MatStm1.vapPhasMasFrac variable */,0.0);
    tmp35 = LessEq(data->localData[0]->realVars[95] /* MatStm1.vapPhasMasFrac variable */,1.0);
    if(!(tmp34 && tmp35))
    {
      tmp37 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[95] /* MatStm1.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp36),tmp37);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp38 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 881
type: ALGORITHM

  assert(MatStm1.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: " + String(MatStm1.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,881};
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: ");
  modelica_string tmp41;
  static int tmp42 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp42)
  {
    tmp39 = GreaterEq(data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */,0.0);
    if(!tmp39)
    {
      tmp41 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[93] /* MatStm1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp42 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 882
type: ALGORITHM

  assert(MatStm1.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: " + String(MatStm1.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,882};
  modelica_boolean tmp43;
  static const MMC_DEFSTRINGLIT(tmp44,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: ");
  modelica_string tmp45;
  static int tmp46 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp46)
  {
    tmp43 = GreaterEq(data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */,0.0);
    if(!tmp43)
    {
      tmp45 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[94] /* MatStm1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp44),tmp45);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp46 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 883
type: ALGORITHM

  assert(MatStm1.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: " + String(MatStm1.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,883};
  modelica_boolean tmp47;
  static const MMC_DEFSTRINGLIT(tmp48,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: ");
  modelica_string tmp49;
  static int tmp50 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp50)
  {
    tmp47 = GreaterEq(data->localData[0]->realVars[90] /* MatStm1.totMasFlo[1] variable */,0.0);
    if(!tmp47)
    {
      tmp49 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[90] /* MatStm1.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp48),tmp49);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp50 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 884
type: ALGORITHM

  assert(MatStm1.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: " + String(MatStm1.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,884};
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: ");
  modelica_string tmp53;
  static int tmp54 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp54)
  {
    tmp51 = GreaterEq(data->localData[0]->realVars[91] /* MatStm1.totMasFlo[2] variable */,0.0);
    if(!tmp51)
    {
      tmp53 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[91] /* MatStm1.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp52),tmp53);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp54 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 885
type: ALGORITHM

  assert(MatStm1.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: " + String(MatStm1.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,885};
  modelica_boolean tmp55;
  static const MMC_DEFSTRINGLIT(tmp56,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: ");
  modelica_string tmp57;
  static int tmp58 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp58)
  {
    tmp55 = GreaterEq(data->localData[0]->realVars[92] /* MatStm1.totMasFlo[3] variable */,0.0);
    if(!tmp55)
    {
      tmp57 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[92] /* MatStm1.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp56),tmp57);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp58 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 886
type: ALGORITHM

  assert(MatStm1.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: " + String(MatStm1.MW[1], "g"));
*/
void Flowsheet_eqFunction_886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,886};
  modelica_boolean tmp59;
  static const MMC_DEFSTRINGLIT(tmp60,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: ");
  modelica_string tmp61;
  static int tmp62 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp62)
  {
    tmp59 = GreaterEq(data->localData[0]->realVars[13] /* MatStm1.MW[1] variable */,0.0);
    if(!tmp59)
    {
      tmp61 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[13] /* MatStm1.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp60),tmp61);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp62 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 887
type: ALGORITHM

  assert(MatStm1.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: " + String(MatStm1.MW[2], "g"));
*/
void Flowsheet_eqFunction_887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,887};
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: ");
  modelica_string tmp65;
  static int tmp66 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp66)
  {
    tmp63 = GreaterEq(data->localData[0]->realVars[14] /* MatStm1.MW[2] variable */,0.0);
    if(!tmp63)
    {
      tmp65 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[14] /* MatStm1.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp64),tmp65);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp66 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 888
type: ALGORITHM

  assert(MatStm1.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: " + String(MatStm1.MW[3], "g"));
*/
void Flowsheet_eqFunction_888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,888};
  modelica_boolean tmp67;
  static const MMC_DEFSTRINGLIT(tmp68,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: ");
  modelica_string tmp69;
  static int tmp70 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp70)
  {
    tmp67 = GreaterEq(data->localData[0]->realVars[15] /* MatStm1.MW[3] variable */,0.0);
    if(!tmp67)
    {
      tmp69 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[15] /* MatStm1.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp68),tmp69);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp70 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 889
type: ALGORITHM

  assert(MatStm1.compMolFrac[1,1] >= 0.0 and MatStm1.compMolFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,889};
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  static const MMC_DEFSTRINGLIT(tmp73,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp74;
  static int tmp75 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp75)
  {
    tmp71 = GreaterEq(data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,1] variable */,0.0);
    tmp72 = LessEq(data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,1] variable */,1.0);
    if(!(tmp71 && tmp72))
    {
      tmp74 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[50] /* MatStm1.compMolFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp73),tmp74);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[1,1] >= 0.0 and MatStm1.compMolFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp75 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 890
type: ALGORITHM

  assert(MatStm1.compMolFrac[1,2] >= 0.0 and MatStm1.compMolFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[1,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,890};
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  static const MMC_DEFSTRINGLIT(tmp78,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp79;
  static int tmp80 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp80)
  {
    tmp76 = GreaterEq(data->localData[0]->realVars[51] /* MatStm1.compMolFrac[1,2] variable */,0.0);
    tmp77 = LessEq(data->localData[0]->realVars[51] /* MatStm1.compMolFrac[1,2] variable */,1.0);
    if(!(tmp76 && tmp77))
    {
      tmp79 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[51] /* MatStm1.compMolFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp78),tmp79);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[1,2] >= 0.0 and MatStm1.compMolFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp80 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 891
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,891};
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  static const MMC_DEFSTRINGLIT(tmp83,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp84;
  static int tmp85 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp85)
  {
    tmp81 = GreaterEq(data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,1] variable */,0.0);
    tmp82 = LessEq(data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,1] variable */,1.0);
    if(!(tmp81 && tmp82))
    {
      tmp84 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[52] /* MatStm1.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp83),tmp84);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp85 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 892
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,892};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  static const MMC_DEFSTRINGLIT(tmp88,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp89;
  static int tmp90 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp90)
  {
    tmp86 = GreaterEq(data->localData[0]->realVars[53] /* MatStm1.compMolFrac[2,2] variable */,0.0);
    tmp87 = LessEq(data->localData[0]->realVars[53] /* MatStm1.compMolFrac[2,2] variable */,1.0);
    if(!(tmp86 && tmp87))
    {
      tmp89 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[53] /* MatStm1.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp88),tmp89);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp90 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 893
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,893};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  static const MMC_DEFSTRINGLIT(tmp93,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp94;
  static int tmp95 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp95)
  {
    tmp91 = GreaterEq(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,1] variable */,0.0);
    tmp92 = LessEq(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,1] variable */,1.0);
    if(!(tmp91 && tmp92))
    {
      tmp94 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp93),tmp94);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp95 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 894
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,894};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  static const MMC_DEFSTRINGLIT(tmp98,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp99;
  static int tmp100 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp100)
  {
    tmp96 = GreaterEq(data->localData[0]->realVars[55] /* MatStm1.compMolFrac[3,2] variable */,0.0);
    tmp97 = LessEq(data->localData[0]->realVars[55] /* MatStm1.compMolFrac[3,2] variable */,1.0);
    if(!(tmp96 && tmp97))
    {
      tmp99 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[55] /* MatStm1.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp98),tmp99);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp100 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 895
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,895};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  static const MMC_DEFSTRINGLIT(tmp103,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp104;
  static int tmp105 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp105)
  {
    tmp101 = GreaterEq(data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,1] variable */,0.0);
    tmp102 = LessEq(data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,1] variable */,1.0);
    if(!(tmp101 && tmp102))
    {
      tmp104 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[26] /* MatStm1.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp103),tmp104);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp105 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 896
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,896};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  static const MMC_DEFSTRINGLIT(tmp108,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp109;
  static int tmp110 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp110)
  {
    tmp106 = GreaterEq(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[1,2] variable */,0.0);
    tmp107 = LessEq(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[1,2] variable */,1.0);
    if(!(tmp106 && tmp107))
    {
      tmp109 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[27] /* MatStm1.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp108),tmp109);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp110 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 897
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,897};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  static const MMC_DEFSTRINGLIT(tmp113,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp114;
  static int tmp115 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp115)
  {
    tmp111 = GreaterEq(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[2,1] variable */,0.0);
    tmp112 = LessEq(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[2,1] variable */,1.0);
    if(!(tmp111 && tmp112))
    {
      tmp114 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp113),tmp114);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp115 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 898
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,898};
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  static const MMC_DEFSTRINGLIT(tmp118,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp119;
  static int tmp120 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp120)
  {
    tmp116 = GreaterEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[2,2] variable */,0.0);
    tmp117 = LessEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[2,2] variable */,1.0);
    if(!(tmp116 && tmp117))
    {
      tmp119 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp118),tmp119);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp120 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 899
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  modelica_boolean tmp121;
  modelica_boolean tmp122;
  static const MMC_DEFSTRINGLIT(tmp123,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp124;
  static int tmp125 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp125)
  {
    tmp121 = GreaterEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[3,1] variable */,0.0);
    tmp122 = LessEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[3,1] variable */,1.0);
    if(!(tmp121 && tmp122))
    {
      tmp124 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp123),tmp124);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp125 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 900
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,900};
  modelica_boolean tmp126;
  modelica_boolean tmp127;
  static const MMC_DEFSTRINGLIT(tmp128,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp129;
  static int tmp130 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp130)
  {
    tmp126 = GreaterEq(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[3,2] variable */,0.0);
    tmp127 = LessEq(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[3,2] variable */,1.0);
    if(!(tmp126 && tmp127))
    {
      tmp129 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp128),tmp129);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp130 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 901
type: ALGORITHM

  assert(MatStm1.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,1], has value: " + String(MatStm1.compMolFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,901};
  modelica_boolean tmp131;
  static const MMC_DEFSTRINGLIT(tmp132,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,1], has value: ");
  modelica_string tmp133;
  static int tmp134 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp134)
  {
    tmp131 = GreaterEq(data->localData[0]->realVars[44] /* MatStm1.compMolFlo[1,1] variable */,0.0);
    if(!tmp131)
    {
      tmp133 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[44] /* MatStm1.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp132),tmp133);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp134 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 902
type: ALGORITHM

  assert(MatStm1.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,2], has value: " + String(MatStm1.compMolFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,902};
  modelica_boolean tmp135;
  static const MMC_DEFSTRINGLIT(tmp136,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[1,2], has value: ");
  modelica_string tmp137;
  static int tmp138 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp138)
  {
    tmp135 = GreaterEq(data->localData[0]->realVars[45] /* MatStm1.compMolFlo[1,2] variable */,0.0);
    if(!tmp135)
    {
      tmp137 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[45] /* MatStm1.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp136),tmp137);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp138 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 903
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: " + String(MatStm1.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,903};
  modelica_boolean tmp139;
  static const MMC_DEFSTRINGLIT(tmp140,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: ");
  modelica_string tmp141;
  static int tmp142 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp142)
  {
    tmp139 = GreaterEq(data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,1] variable */,0.0);
    if(!tmp139)
    {
      tmp141 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[46] /* MatStm1.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp140),tmp141);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp142 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 904
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: " + String(MatStm1.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,904};
  modelica_boolean tmp143;
  static const MMC_DEFSTRINGLIT(tmp144,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: ");
  modelica_string tmp145;
  static int tmp146 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp146)
  {
    tmp143 = GreaterEq(data->localData[0]->realVars[47] /* MatStm1.compMolFlo[2,2] variable */,0.0);
    if(!tmp143)
    {
      tmp145 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[47] /* MatStm1.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp144),tmp145);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp146 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 905
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: " + String(MatStm1.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,905};
  modelica_boolean tmp147;
  static const MMC_DEFSTRINGLIT(tmp148,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: ");
  modelica_string tmp149;
  static int tmp150 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp150)
  {
    tmp147 = GreaterEq(data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,1] variable */,0.0);
    if(!tmp147)
    {
      tmp149 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[48] /* MatStm1.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp148),tmp149);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp150 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 906
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: " + String(MatStm1.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,906};
  modelica_boolean tmp151;
  static const MMC_DEFSTRINGLIT(tmp152,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: ");
  modelica_string tmp153;
  static int tmp154 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp154)
  {
    tmp151 = GreaterEq(data->localData[0]->realVars[49] /* MatStm1.compMolFlo[3,2] variable */,0.0);
    if(!tmp151)
    {
      tmp153 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[49] /* MatStm1.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp152),tmp153);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp154 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 907
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: " + String(MatStm1.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,907};
  modelica_boolean tmp155;
  static const MMC_DEFSTRINGLIT(tmp156,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: ");
  modelica_string tmp157;
  static int tmp158 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp158)
  {
    tmp155 = GreaterEq(data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */,0.0);
    if(!tmp155)
    {
      tmp157 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[20] /* MatStm1.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp156),tmp157);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp158 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 908
type: ALGORITHM

  assert(MatStm1.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: " + String(MatStm1.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,908};
  modelica_boolean tmp159;
  static const MMC_DEFSTRINGLIT(tmp160,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: ");
  modelica_string tmp161;
  static int tmp162 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp162)
  {
    tmp159 = GreaterEq(data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */,0.0);
    if(!tmp159)
    {
      tmp161 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[21] /* MatStm1.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp160),tmp161);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp162 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 909
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: " + String(MatStm1.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,909};
  modelica_boolean tmp163;
  static const MMC_DEFSTRINGLIT(tmp164,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: ");
  modelica_string tmp165;
  static int tmp166 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp166)
  {
    tmp163 = GreaterEq(data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,1] variable */,0.0);
    if(!tmp163)
    {
      tmp165 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[22] /* MatStm1.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp164),tmp165);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp166 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 910
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: " + String(MatStm1.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
  modelica_boolean tmp167;
  static const MMC_DEFSTRINGLIT(tmp168,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: ");
  modelica_string tmp169;
  static int tmp170 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp170)
  {
    tmp167 = GreaterEq(data->localData[0]->realVars[23] /* MatStm1.compMasFlo[2,2] variable */,0.0);
    if(!tmp167)
    {
      tmp169 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[23] /* MatStm1.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp168),tmp169);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp170 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 911
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: " + String(MatStm1.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
  modelica_boolean tmp171;
  static const MMC_DEFSTRINGLIT(tmp172,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: ");
  modelica_string tmp173;
  static int tmp174 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp174)
  {
    tmp171 = GreaterEq(data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,1] variable */,0.0);
    if(!tmp171)
    {
      tmp173 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[24] /* MatStm1.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp172),tmp173);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp174 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 912
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: " + String(MatStm1.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  modelica_boolean tmp175;
  static const MMC_DEFSTRINGLIT(tmp176,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: ");
  modelica_string tmp177;
  static int tmp178 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp178)
  {
    tmp175 = GreaterEq(data->localData[0]->realVars[25] /* MatStm1.compMasFlo[3,2] variable */,0.0);
    if(!tmp175)
    {
      tmp177 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[25] /* MatStm1.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp176),tmp177);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp178 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 913
type: ALGORITHM

  assert(MatStm1.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: " + String(MatStm1.K[1], "g"));
*/
void Flowsheet_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  modelica_boolean tmp179;
  static const MMC_DEFSTRINGLIT(tmp180,67,"Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: ");
  modelica_string tmp181;
  static int tmp182 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp182)
  {
    tmp179 = GreaterEq(data->localData[0]->realVars[11] /* MatStm1.K[1] variable */,0.0);
    if(!tmp179)
    {
      tmp181 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[11] /* MatStm1.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp180),tmp181);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp182 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 914
type: ALGORITHM

  assert(MatStm1.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: " + String(MatStm1.K[2], "g"));
*/
void Flowsheet_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  modelica_boolean tmp183;
  static const MMC_DEFSTRINGLIT(tmp184,67,"Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: ");
  modelica_string tmp185;
  static int tmp186 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp186)
  {
    tmp183 = GreaterEq(data->localData[0]->realVars[12] /* MatStm1.K[2] variable */,0.0);
    if(!tmp183)
    {
      tmp185 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[12] /* MatStm1.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp184),tmp185);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp186 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 915
type: ALGORITHM

  assert(MatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: " + String(MatStm2.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  modelica_boolean tmp187;
  modelica_boolean tmp188;
  static const MMC_DEFSTRINGLIT(tmp189,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp190;
  static int tmp191 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp191)
  {
    tmp187 = GreaterEq(data->localData[0]->realVars[158] /* MatStm2.liqPhasMolFrac variable */,0.0);
    tmp188 = LessEq(data->localData[0]->realVars[158] /* MatStm2.liqPhasMolFrac variable */,1.0);
    if(!(tmp187 && tmp188))
    {
      tmp190 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[158] /* MatStm2.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp189),tmp190);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp191 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 916
type: ALGORITHM

  assert(MatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: " + String(MatStm2.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  modelica_boolean tmp192;
  modelica_boolean tmp193;
  static const MMC_DEFSTRINGLIT(tmp194,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp195;
  static int tmp196 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp196)
  {
    tmp192 = GreaterEq(data->localData[0]->realVars[157] /* MatStm2.liqPhasMasFrac variable */,0.0);
    tmp193 = LessEq(data->localData[0]->realVars[157] /* MatStm2.liqPhasMasFrac variable */,1.0);
    if(!(tmp192 && tmp193))
    {
      tmp195 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[157] /* MatStm2.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp194),tmp195);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp196 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 917
type: ALGORITHM

  assert(MatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: " + String(MatStm2.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  modelica_boolean tmp197;
  modelica_boolean tmp198;
  static const MMC_DEFSTRINGLIT(tmp199,88,"Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp200;
  static int tmp201 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp201)
  {
    tmp197 = GreaterEq(data->localData[0]->realVars[185] /* MatStm2.vapPhasMasFrac variable */,0.0);
    tmp198 = LessEq(data->localData[0]->realVars[185] /* MatStm2.vapPhasMasFrac variable */,1.0);
    if(!(tmp197 && tmp198))
    {
      tmp200 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[185] /* MatStm2.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp199),tmp200);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp201 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 918
type: ALGORITHM

  assert(MatStm2.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: " + String(MatStm2.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  modelica_boolean tmp202;
  static const MMC_DEFSTRINGLIT(tmp203,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: ");
  modelica_string tmp204;
  static int tmp205 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp205)
  {
    tmp202 = GreaterEq(data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */,0.0);
    if(!tmp202)
    {
      tmp204 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[183] /* MatStm2.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp203),tmp204);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp205 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 919
type: ALGORITHM

  assert(MatStm2.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: " + String(MatStm2.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  modelica_boolean tmp206;
  static const MMC_DEFSTRINGLIT(tmp207,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: ");
  modelica_string tmp208;
  static int tmp209 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp209)
  {
    tmp206 = GreaterEq(data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */,0.0);
    if(!tmp206)
    {
      tmp208 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[184] /* MatStm2.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp207),tmp208);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp209 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 920
type: ALGORITHM

  assert(MatStm2.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: " + String(MatStm2.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  modelica_boolean tmp210;
  static const MMC_DEFSTRINGLIT(tmp211,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: ");
  modelica_string tmp212;
  static int tmp213 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp213)
  {
    tmp210 = GreaterEq(data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */,0.0);
    if(!tmp210)
    {
      tmp212 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[179] /* MatStm2.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp211),tmp212);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp213 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 921
type: ALGORITHM

  assert(MatStm2.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: " + String(MatStm2.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  modelica_boolean tmp214;
  static const MMC_DEFSTRINGLIT(tmp215,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: ");
  modelica_string tmp216;
  static int tmp217 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp217)
  {
    tmp214 = GreaterEq(data->localData[0]->realVars[180] /* MatStm2.totMasFlo[2] variable */,0.0);
    if(!tmp214)
    {
      tmp216 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[180] /* MatStm2.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp215),tmp216);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp217 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 922
type: ALGORITHM

  assert(MatStm2.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: " + String(MatStm2.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  modelica_boolean tmp218;
  static const MMC_DEFSTRINGLIT(tmp219,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: ");
  modelica_string tmp220;
  static int tmp221 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp221)
  {
    tmp218 = GreaterEq(data->localData[0]->realVars[181] /* MatStm2.totMasFlo[3] variable */,0.0);
    if(!tmp218)
    {
      tmp220 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[181] /* MatStm2.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp219),tmp220);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp221 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 923
type: ALGORITHM

  assert(MatStm2.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: " + String(MatStm2.MW[1], "g"));
*/
void Flowsheet_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  modelica_boolean tmp222;
  static const MMC_DEFSTRINGLIT(tmp223,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: ");
  modelica_string tmp224;
  static int tmp225 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp225)
  {
    tmp222 = GreaterEq(data->localData[0]->realVars[100] /* MatStm2.MW[1] variable */,0.0);
    if(!tmp222)
    {
      tmp224 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[100] /* MatStm2.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp223),tmp224);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp225 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 924
type: ALGORITHM

  assert(MatStm2.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: " + String(MatStm2.MW[2], "g"));
*/
void Flowsheet_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  modelica_boolean tmp226;
  static const MMC_DEFSTRINGLIT(tmp227,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: ");
  modelica_string tmp228;
  static int tmp229 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp229)
  {
    tmp226 = GreaterEq(data->localData[0]->realVars[101] /* MatStm2.MW[2] variable */,0.0);
    if(!tmp226)
    {
      tmp228 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[101] /* MatStm2.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp227),tmp228);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp229 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 925
type: ALGORITHM

  assert(MatStm2.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: " + String(MatStm2.MW[3], "g"));
*/
void Flowsheet_eqFunction_925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,925};
  modelica_boolean tmp230;
  static const MMC_DEFSTRINGLIT(tmp231,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: ");
  modelica_string tmp232;
  static int tmp233 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp233)
  {
    tmp230 = GreaterEq(data->localData[0]->realVars[102] /* MatStm2.MW[3] variable */,0.0);
    if(!tmp230)
    {
      tmp232 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[102] /* MatStm2.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp231),tmp232);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp233 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 926
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  modelica_boolean tmp234;
  modelica_boolean tmp235;
  static const MMC_DEFSTRINGLIT(tmp236,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp237;
  static int tmp238 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp238)
  {
    tmp234 = GreaterEq(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */,0.0);
    tmp235 = LessEq(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */,1.0);
    if(!(tmp234 && tmp235))
    {
      tmp237 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[141] /* MatStm2.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp236),tmp237);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp238 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 927
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,927};
  modelica_boolean tmp239;
  modelica_boolean tmp240;
  static const MMC_DEFSTRINGLIT(tmp241,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp242;
  static int tmp243 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp243)
  {
    tmp239 = GreaterEq(data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */,0.0);
    tmp240 = LessEq(data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */,1.0);
    if(!(tmp239 && tmp240))
    {
      tmp242 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[142] /* MatStm2.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp241),tmp242);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp243 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 928
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,928};
  modelica_boolean tmp244;
  modelica_boolean tmp245;
  static const MMC_DEFSTRINGLIT(tmp246,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp247;
  static int tmp248 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp248)
  {
    tmp244 = GreaterEq(data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */,0.0);
    tmp245 = LessEq(data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */,1.0);
    if(!(tmp244 && tmp245))
    {
      tmp247 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[143] /* MatStm2.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp246),tmp247);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp248 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 929
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  modelica_boolean tmp249;
  modelica_boolean tmp250;
  static const MMC_DEFSTRINGLIT(tmp251,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp252;
  static int tmp253 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp253)
  {
    tmp249 = GreaterEq(data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */,0.0);
    tmp250 = LessEq(data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */,1.0);
    if(!(tmp249 && tmp250))
    {
      tmp252 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[144] /* MatStm2.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp251),tmp252);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp253 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 930
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,930};
  modelica_boolean tmp254;
  modelica_boolean tmp255;
  static const MMC_DEFSTRINGLIT(tmp256,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp257;
  static int tmp258 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp258)
  {
    tmp254 = GreaterEq(data->localData[0]->realVars[115] /* MatStm2.compMasFrac[1,1] variable */,0.0);
    tmp255 = LessEq(data->localData[0]->realVars[115] /* MatStm2.compMasFrac[1,1] variable */,1.0);
    if(!(tmp254 && tmp255))
    {
      tmp257 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[115] /* MatStm2.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp256),tmp257);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp258 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 931
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,931};
  modelica_boolean tmp259;
  modelica_boolean tmp260;
  static const MMC_DEFSTRINGLIT(tmp261,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp262;
  static int tmp263 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp263)
  {
    tmp259 = GreaterEq(data->localData[0]->realVars[116] /* MatStm2.compMasFrac[1,2] variable */,0.0);
    tmp260 = LessEq(data->localData[0]->realVars[116] /* MatStm2.compMasFrac[1,2] variable */,1.0);
    if(!(tmp259 && tmp260))
    {
      tmp262 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[116] /* MatStm2.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp261),tmp262);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp263 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 932
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,932};
  modelica_boolean tmp264;
  modelica_boolean tmp265;
  static const MMC_DEFSTRINGLIT(tmp266,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp267;
  static int tmp268 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp268)
  {
    tmp264 = GreaterEq(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[2,1] variable */,0.0);
    tmp265 = LessEq(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[2,1] variable */,1.0);
    if(!(tmp264 && tmp265))
    {
      tmp267 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[117] /* MatStm2.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp266),tmp267);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp268 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 933
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,933};
  modelica_boolean tmp269;
  modelica_boolean tmp270;
  static const MMC_DEFSTRINGLIT(tmp271,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp272;
  static int tmp273 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp273)
  {
    tmp269 = GreaterEq(data->localData[0]->realVars[118] /* MatStm2.compMasFrac[2,2] variable */,0.0);
    tmp270 = LessEq(data->localData[0]->realVars[118] /* MatStm2.compMasFrac[2,2] variable */,1.0);
    if(!(tmp269 && tmp270))
    {
      tmp272 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[118] /* MatStm2.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp271),tmp272);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp273 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 934
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,934};
  modelica_boolean tmp274;
  modelica_boolean tmp275;
  static const MMC_DEFSTRINGLIT(tmp276,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp277;
  static int tmp278 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp278)
  {
    tmp274 = GreaterEq(data->localData[0]->realVars[119] /* MatStm2.compMasFrac[3,1] variable */,0.0);
    tmp275 = LessEq(data->localData[0]->realVars[119] /* MatStm2.compMasFrac[3,1] variable */,1.0);
    if(!(tmp274 && tmp275))
    {
      tmp277 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[119] /* MatStm2.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp276),tmp277);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp278 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 935
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,935};
  modelica_boolean tmp279;
  modelica_boolean tmp280;
  static const MMC_DEFSTRINGLIT(tmp281,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp282;
  static int tmp283 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp283)
  {
    tmp279 = GreaterEq(data->localData[0]->realVars[120] /* MatStm2.compMasFrac[3,2] variable */,0.0);
    tmp280 = LessEq(data->localData[0]->realVars[120] /* MatStm2.compMasFrac[3,2] variable */,1.0);
    if(!(tmp279 && tmp280))
    {
      tmp282 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[120] /* MatStm2.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp281),tmp282);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp283 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 936
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: " + String(MatStm2.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,936};
  modelica_boolean tmp284;
  static const MMC_DEFSTRINGLIT(tmp285,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: ");
  modelica_string tmp286;
  static int tmp287 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp287)
  {
    tmp284 = GreaterEq(data->localData[0]->realVars[135] /* MatStm2.compMolFlo[2,1] variable */,0.0);
    if(!tmp284)
    {
      tmp286 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[135] /* MatStm2.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 937
type: ALGORITHM

  assert(MatStm2.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: " + String(MatStm2.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,937};
  modelica_boolean tmp288;
  static const MMC_DEFSTRINGLIT(tmp289,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: ");
  modelica_string tmp290;
  static int tmp291 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp291)
  {
    tmp288 = GreaterEq(data->localData[0]->realVars[136] /* MatStm2.compMolFlo[2,2] variable */,0.0);
    if(!tmp288)
    {
      tmp290 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[136] /* MatStm2.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 938
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: " + String(MatStm2.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,938};
  modelica_boolean tmp292;
  static const MMC_DEFSTRINGLIT(tmp293,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: ");
  modelica_string tmp294;
  static int tmp295 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp295)
  {
    tmp292 = GreaterEq(data->localData[0]->realVars[137] /* MatStm2.compMolFlo[3,1] variable */,0.0);
    if(!tmp292)
    {
      tmp294 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[137] /* MatStm2.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 939
type: ALGORITHM

  assert(MatStm2.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: " + String(MatStm2.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,939};
  modelica_boolean tmp296;
  static const MMC_DEFSTRINGLIT(tmp297,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: ");
  modelica_string tmp298;
  static int tmp299 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp299)
  {
    tmp296 = GreaterEq(data->localData[0]->realVars[138] /* MatStm2.compMolFlo[3,2] variable */,0.0);
    if(!tmp296)
    {
      tmp298 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[138] /* MatStm2.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
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
equation index: 940
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: " + String(MatStm2.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,940};
  modelica_boolean tmp300;
  static const MMC_DEFSTRINGLIT(tmp301,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: ");
  modelica_string tmp302;
  static int tmp303 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp303)
  {
    tmp300 = GreaterEq(data->localData[0]->realVars[111] /* MatStm2.compMasFlo[2,1] variable */,0.0);
    if(!tmp300)
    {
      tmp302 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[111] /* MatStm2.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp301),tmp302);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp303 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 941
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: " + String(MatStm2.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,941};
  modelica_boolean tmp304;
  static const MMC_DEFSTRINGLIT(tmp305,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: ");
  modelica_string tmp306;
  static int tmp307 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp307)
  {
    tmp304 = GreaterEq(data->localData[0]->realVars[112] /* MatStm2.compMasFlo[2,2] variable */,0.0);
    if(!tmp304)
    {
      tmp306 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[112] /* MatStm2.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp305),tmp306);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp307 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 942
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: " + String(MatStm2.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,942};
  modelica_boolean tmp308;
  static const MMC_DEFSTRINGLIT(tmp309,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: ");
  modelica_string tmp310;
  static int tmp311 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp311)
  {
    tmp308 = GreaterEq(data->localData[0]->realVars[113] /* MatStm2.compMasFlo[3,1] variable */,0.0);
    if(!tmp308)
    {
      tmp310 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[113] /* MatStm2.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp309),tmp310);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp311 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 943
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: " + String(MatStm2.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,943};
  modelica_boolean tmp312;
  static const MMC_DEFSTRINGLIT(tmp313,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: ");
  modelica_string tmp314;
  static int tmp315 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp315)
  {
    tmp312 = GreaterEq(data->localData[0]->realVars[114] /* MatStm2.compMasFlo[3,2] variable */,0.0);
    if(!tmp312)
    {
      tmp314 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[114] /* MatStm2.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp313),tmp314);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp315 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 872
type: ALGORITHM

  assert(MatStm2.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.K[2], has value: " + String(MatStm2.K[2], "g"));
*/
void Flowsheet_eqFunction_872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,872};
  modelica_boolean tmp316;
  static const MMC_DEFSTRINGLIT(tmp317,67,"Variable violating min constraint: 0.0 <= MatStm2.K[2], has value: ");
  modelica_string tmp318;
  static int tmp319 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp319)
  {
    tmp316 = GreaterEq(data->localData[0]->realVars[99] /* MatStm2.K[2] variable */,0.0);
    if(!tmp316)
    {
      tmp318 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[99] /* MatStm2.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp317),tmp318);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp319 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 871
type: ALGORITHM

  assert(MatStm2.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.K[1], has value: " + String(MatStm2.K[1], "g"));
*/
void Flowsheet_eqFunction_871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,871};
  modelica_boolean tmp320;
  static const MMC_DEFSTRINGLIT(tmp321,67,"Variable violating min constraint: 0.0 <= MatStm2.K[1], has value: ");
  modelica_string tmp322;
  static int tmp323 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp323)
  {
    tmp320 = GreaterEq(data->localData[0]->realVars[98] /* MatStm2.K[1] variable */,0.0);
    if(!tmp320)
    {
      tmp322 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[98] /* MatStm2.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp321),tmp322);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp323 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 870
type: ALGORITHM

  assert(MatStm2.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,2], has value: " + String(MatStm2.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,870};
  modelica_boolean tmp324;
  static const MMC_DEFSTRINGLIT(tmp325,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,2], has value: ");
  modelica_string tmp326;
  static int tmp327 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp327)
  {
    tmp324 = GreaterEq(data->localData[0]->realVars[110] /* MatStm2.compMasFlo[1,2] variable */,0.0);
    if(!tmp324)
    {
      tmp326 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[110] /* MatStm2.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp325),tmp326);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp327 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 869
type: ALGORITHM

  assert(MatStm2.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,1], has value: " + String(MatStm2.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,869};
  modelica_boolean tmp328;
  static const MMC_DEFSTRINGLIT(tmp329,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,1], has value: ");
  modelica_string tmp330;
  static int tmp331 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp331)
  {
    tmp328 = GreaterEq(data->localData[0]->realVars[109] /* MatStm2.compMasFlo[1,1] variable */,0.0);
    if(!tmp328)
    {
      tmp330 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[109] /* MatStm2.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp329),tmp330);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp331 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int Flowsheet_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  Flowsheet_eqFunction_873(data, threadData);

  Flowsheet_eqFunction_874(data, threadData);

  Flowsheet_eqFunction_875(data, threadData);

  Flowsheet_eqFunction_876(data, threadData);

  Flowsheet_eqFunction_877(data, threadData);

  Flowsheet_eqFunction_878(data, threadData);

  Flowsheet_eqFunction_879(data, threadData);

  Flowsheet_eqFunction_880(data, threadData);

  Flowsheet_eqFunction_881(data, threadData);

  Flowsheet_eqFunction_882(data, threadData);

  Flowsheet_eqFunction_883(data, threadData);

  Flowsheet_eqFunction_884(data, threadData);

  Flowsheet_eqFunction_885(data, threadData);

  Flowsheet_eqFunction_886(data, threadData);

  Flowsheet_eqFunction_887(data, threadData);

  Flowsheet_eqFunction_888(data, threadData);

  Flowsheet_eqFunction_889(data, threadData);

  Flowsheet_eqFunction_890(data, threadData);

  Flowsheet_eqFunction_891(data, threadData);

  Flowsheet_eqFunction_892(data, threadData);

  Flowsheet_eqFunction_893(data, threadData);

  Flowsheet_eqFunction_894(data, threadData);

  Flowsheet_eqFunction_895(data, threadData);

  Flowsheet_eqFunction_896(data, threadData);

  Flowsheet_eqFunction_897(data, threadData);

  Flowsheet_eqFunction_898(data, threadData);

  Flowsheet_eqFunction_899(data, threadData);

  Flowsheet_eqFunction_900(data, threadData);

  Flowsheet_eqFunction_901(data, threadData);

  Flowsheet_eqFunction_902(data, threadData);

  Flowsheet_eqFunction_903(data, threadData);

  Flowsheet_eqFunction_904(data, threadData);

  Flowsheet_eqFunction_905(data, threadData);

  Flowsheet_eqFunction_906(data, threadData);

  Flowsheet_eqFunction_907(data, threadData);

  Flowsheet_eqFunction_908(data, threadData);

  Flowsheet_eqFunction_909(data, threadData);

  Flowsheet_eqFunction_910(data, threadData);

  Flowsheet_eqFunction_911(data, threadData);

  Flowsheet_eqFunction_912(data, threadData);

  Flowsheet_eqFunction_913(data, threadData);

  Flowsheet_eqFunction_914(data, threadData);

  Flowsheet_eqFunction_915(data, threadData);

  Flowsheet_eqFunction_916(data, threadData);

  Flowsheet_eqFunction_917(data, threadData);

  Flowsheet_eqFunction_918(data, threadData);

  Flowsheet_eqFunction_919(data, threadData);

  Flowsheet_eqFunction_920(data, threadData);

  Flowsheet_eqFunction_921(data, threadData);

  Flowsheet_eqFunction_922(data, threadData);

  Flowsheet_eqFunction_923(data, threadData);

  Flowsheet_eqFunction_924(data, threadData);

  Flowsheet_eqFunction_925(data, threadData);

  Flowsheet_eqFunction_926(data, threadData);

  Flowsheet_eqFunction_927(data, threadData);

  Flowsheet_eqFunction_928(data, threadData);

  Flowsheet_eqFunction_929(data, threadData);

  Flowsheet_eqFunction_930(data, threadData);

  Flowsheet_eqFunction_931(data, threadData);

  Flowsheet_eqFunction_932(data, threadData);

  Flowsheet_eqFunction_933(data, threadData);

  Flowsheet_eqFunction_934(data, threadData);

  Flowsheet_eqFunction_935(data, threadData);

  Flowsheet_eqFunction_936(data, threadData);

  Flowsheet_eqFunction_937(data, threadData);

  Flowsheet_eqFunction_938(data, threadData);

  Flowsheet_eqFunction_939(data, threadData);

  Flowsheet_eqFunction_940(data, threadData);

  Flowsheet_eqFunction_941(data, threadData);

  Flowsheet_eqFunction_942(data, threadData);

  Flowsheet_eqFunction_943(data, threadData);

  Flowsheet_eqFunction_872(data, threadData);

  Flowsheet_eqFunction_871(data, threadData);

  Flowsheet_eqFunction_870(data, threadData);

  Flowsheet_eqFunction_869(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

