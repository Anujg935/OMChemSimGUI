/* Asserts */
#include "Flowsheet_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 873
type: ALGORITHM

  assert(Cooler1.outT >= 0.0, "Variable violating min constraint: 0.0 <= Cooler1.outT, has value: " + String(Cooler1.outT, "g"));
*/
void Flowsheet_eqFunction_873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,873};
  modelica_boolean tmp2;
  static const MMC_DEFSTRINGLIT(tmp3,67,"Variable violating min constraint: 0.0 <= Cooler1.outT, has value: ");
  modelica_string tmp4;
  static int tmp5 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp5)
  {
    tmp2 = GreaterEq(data->localData[0]->realVars[8] /* Cooler1.outT variable */,0.0);
    if(!tmp2)
    {
      tmp4 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[8] /* Cooler1.outT variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp3),tmp4);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4659,7,4659,470,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nCooler1.outT >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(Cooler1.outVapPhasMolFrac >= 0.0 and Cooler1.outVapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= Cooler1.outVapPhasMolFrac <= 1.0, has value: " + String(Cooler1.outVapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,874};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  static const MMC_DEFSTRINGLIT(tmp8,91,"Variable violating min/max constraint: 0.0 <= Cooler1.outVapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp9;
  static int tmp10 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp10)
  {
    tmp6 = GreaterEq(data->localData[0]->realVars[9] /* Cooler1.outVapPhasMolFrac variable */,0.0);
    tmp7 = LessEq(data->localData[0]->realVars[9] /* Cooler1.outVapPhasMolFrac variable */,1.0);
    if(!(tmp6 && tmp7))
    {
      tmp9 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[9] /* Cooler1.outVapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp8),tmp9);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4659,7,4659,470,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nCooler1.outVapPhasMolFrac >= 0.0 and Cooler1.outVapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(Cooler1.inVapPhasMolFrac >= 0.0 and Cooler1.inVapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= Cooler1.inVapPhasMolFrac <= 1.0, has value: " + String(Cooler1.inVapPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,875};
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,90,"Variable violating min/max constraint: 0.0 <= Cooler1.inVapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp14;
  static int tmp15 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp15)
  {
    tmp11 = GreaterEq(data->localData[0]->realVars[6] /* Cooler1.inVapPhasMolFrac variable */,0.0);
    tmp12 = LessEq(data->localData[0]->realVars[6] /* Cooler1.inVapPhasMolFrac variable */,1.0);
    if(!(tmp11 && tmp12))
    {
      tmp14 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[6] /* Cooler1.inVapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp13),tmp14);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4661,7,4661,278,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nCooler1.inVapPhasMolFrac >= 0.0 and Cooler1.inVapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: " + String(MatStm1.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,876};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  static const MMC_DEFSTRINGLIT(tmp18,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp19;
  static int tmp20 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp20)
  {
    tmp16 = GreaterEq(data->localData[0]->realVars[71] /* MatStm1.liqPhasMolFrac variable */,0.0);
    tmp17 = LessEq(data->localData[0]->realVars[71] /* MatStm1.liqPhasMolFrac variable */,1.0);
    if(!(tmp16 && tmp17))
    {
      tmp19 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[71] /* MatStm1.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp18),tmp19);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMolFrac >= 0.0 and MatStm1.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp20 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 877
type: ALGORITHM

  assert(MatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: " + String(MatStm1.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,877};
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  static const MMC_DEFSTRINGLIT(tmp23,88,"Variable violating min/max constraint: 0.0 <= MatStm1.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp24;
  static int tmp25 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp25)
  {
    tmp21 = GreaterEq(data->localData[0]->realVars[70] /* MatStm1.liqPhasMasFrac variable */,0.0);
    tmp22 = LessEq(data->localData[0]->realVars[70] /* MatStm1.liqPhasMasFrac variable */,1.0);
    if(!(tmp21 && tmp22))
    {
      tmp24 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[70] /* MatStm1.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp23),tmp24);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.liqPhasMasFrac >= 0.0 and MatStm1.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp25 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 878
type: ALGORITHM

  assert(MatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: " + String(MatStm1.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,878};
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,88,"Variable violating min/max constraint: 0.0 <= MatStm1.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp29;
  static int tmp30 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp30)
  {
    tmp26 = GreaterEq(data->localData[0]->realVars[98] /* MatStm1.vapPhasMasFrac variable */,0.0);
    tmp27 = LessEq(data->localData[0]->realVars[98] /* MatStm1.vapPhasMasFrac variable */,1.0);
    if(!(tmp26 && tmp27))
    {
      tmp29 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[98] /* MatStm1.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp28),tmp29);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.vapPhasMasFrac >= 0.0 and MatStm1.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp30 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 879
type: ALGORITHM

  assert(MatStm1.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: " + String(MatStm1.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,879};
  modelica_boolean tmp31;
  static const MMC_DEFSTRINGLIT(tmp32,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[2], has value: ");
  modelica_string tmp33;
  static int tmp34 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp34)
  {
    tmp31 = GreaterEq(data->localData[0]->realVars[96] /* MatStm1.totMolFlo[2] variable */,0.0);
    if(!tmp31)
    {
      tmp33 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[96] /* MatStm1.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp32),tmp33);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp34 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 880
type: ALGORITHM

  assert(MatStm1.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: " + String(MatStm1.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,880};
  modelica_boolean tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,75,"Variable violating min constraint: 0.0 <= MatStm1.totMolFlo[3], has value: ");
  modelica_string tmp37;
  static int tmp38 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp38)
  {
    tmp35 = GreaterEq(data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */,0.0);
    if(!tmp35)
    {
      tmp37 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[97] /* MatStm1.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp36),tmp37);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: " + String(MatStm1.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,881};
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[1], has value: ");
  modelica_string tmp41;
  static int tmp42 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp42)
  {
    tmp39 = GreaterEq(data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */,0.0);
    if(!tmp39)
    {
      tmp41 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[92] /* MatStm1.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: " + String(MatStm1.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,882};
  modelica_boolean tmp43;
  static const MMC_DEFSTRINGLIT(tmp44,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[2], has value: ");
  modelica_string tmp45;
  static int tmp46 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp46)
  {
    tmp43 = GreaterEq(data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */,0.0);
    if(!tmp43)
    {
      tmp45 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[93] /* MatStm1.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp44),tmp45);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: " + String(MatStm1.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,883};
  modelica_boolean tmp47;
  static const MMC_DEFSTRINGLIT(tmp48,75,"Variable violating min constraint: 0.0 <= MatStm1.totMasFlo[3], has value: ");
  modelica_string tmp49;
  static int tmp50 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp50)
  {
    tmp47 = GreaterEq(data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */,0.0);
    if(!tmp47)
    {
      tmp49 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[94] /* MatStm1.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp48),tmp49);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: " + String(MatStm1.MW[1], "g"));
*/
void Flowsheet_eqFunction_884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,884};
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[1], has value: ");
  modelica_string tmp53;
  static int tmp54 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp54)
  {
    tmp51 = GreaterEq(data->localData[0]->realVars[13] /* MatStm1.MW[1] variable */,0.0);
    if(!tmp51)
    {
      tmp53 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[13] /* MatStm1.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp52),tmp53);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: " + String(MatStm1.MW[2], "g"));
*/
void Flowsheet_eqFunction_885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,885};
  modelica_boolean tmp55;
  static const MMC_DEFSTRINGLIT(tmp56,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[2], has value: ");
  modelica_string tmp57;
  static int tmp58 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp58)
  {
    tmp55 = GreaterEq(data->localData[0]->realVars[14] /* MatStm1.MW[2] variable */,0.0);
    if(!tmp55)
    {
      tmp57 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[14] /* MatStm1.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp56),tmp57);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: " + String(MatStm1.MW[3], "g"));
*/
void Flowsheet_eqFunction_886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,886};
  modelica_boolean tmp59;
  static const MMC_DEFSTRINGLIT(tmp60,68,"Variable violating min constraint: 0.0 <= MatStm1.MW[3], has value: ");
  modelica_string tmp61;
  static int tmp62 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp62)
  {
    tmp59 = GreaterEq(data->localData[0]->realVars[15] /* MatStm1.MW[3] variable */,0.0);
    if(!tmp59)
    {
      tmp61 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[15] /* MatStm1.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp60),tmp61);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,887};
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  static const MMC_DEFSTRINGLIT(tmp65,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp66;
  static int tmp67 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp67)
  {
    tmp63 = GreaterEq(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */,0.0);
    tmp64 = LessEq(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */,1.0);
    if(!(tmp63 && tmp64))
    {
      tmp66 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[54] /* MatStm1.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp65),tmp66);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,1] >= 0.0 and MatStm1.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp67 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 888
type: ALGORITHM

  assert(MatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,888};
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  static const MMC_DEFSTRINGLIT(tmp70,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp71;
  static int tmp72 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp72)
  {
    tmp68 = GreaterEq(data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */,0.0);
    tmp69 = LessEq(data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */,1.0);
    if(!(tmp68 && tmp69))
    {
      tmp71 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[55] /* MatStm1.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp70),tmp71);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[2,2] >= 0.0 and MatStm1.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp72 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 889
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,889};
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  static const MMC_DEFSTRINGLIT(tmp75,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp76;
  static int tmp77 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp77)
  {
    tmp73 = GreaterEq(data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */,0.0);
    tmp74 = LessEq(data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */,1.0);
    if(!(tmp73 && tmp74))
    {
      tmp76 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[56] /* MatStm1.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp75),tmp76);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,1] >= 0.0 and MatStm1.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp77 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 890
type: ALGORITHM

  assert(MatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,890};
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  static const MMC_DEFSTRINGLIT(tmp80,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp81;
  static int tmp82 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp82)
  {
    tmp78 = GreaterEq(data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */,0.0);
    tmp79 = LessEq(data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */,1.0);
    if(!(tmp78 && tmp79))
    {
      tmp81 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[57] /* MatStm1.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp80),tmp81);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFrac[3,2] >= 0.0 and MatStm1.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp82 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 891
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,891};
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  static const MMC_DEFSTRINGLIT(tmp85,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp86;
  static int tmp87 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp87)
  {
    tmp83 = GreaterEq(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[1,1] variable */,0.0);
    tmp84 = LessEq(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[1,1] variable */,1.0);
    if(!(tmp83 && tmp84))
    {
      tmp86 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[28] /* MatStm1.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp85),tmp86);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,1] >= 0.0 and MatStm1.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp87 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 892
type: ALGORITHM

  assert(MatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,892};
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  static const MMC_DEFSTRINGLIT(tmp90,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp91;
  static int tmp92 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp92)
  {
    tmp88 = GreaterEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */,0.0);
    tmp89 = LessEq(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */,1.0);
    if(!(tmp88 && tmp89))
    {
      tmp91 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[29] /* MatStm1.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp90),tmp91);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[1,2] >= 0.0 and MatStm1.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp92 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 893
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,893};
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  static const MMC_DEFSTRINGLIT(tmp95,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp96;
  static int tmp97 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp97)
  {
    tmp93 = GreaterEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */,0.0);
    tmp94 = LessEq(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */,1.0);
    if(!(tmp93 && tmp94))
    {
      tmp96 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[30] /* MatStm1.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp95),tmp96);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,1] >= 0.0 and MatStm1.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp97 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 894
type: ALGORITHM

  assert(MatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,894};
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  static const MMC_DEFSTRINGLIT(tmp100,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp101;
  static int tmp102 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp102)
  {
    tmp98 = GreaterEq(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */,0.0);
    tmp99 = LessEq(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */,1.0);
    if(!(tmp98 && tmp99))
    {
      tmp101 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[31] /* MatStm1.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp100),tmp101);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[2,2] >= 0.0 and MatStm1.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp102 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 895
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,895};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  static const MMC_DEFSTRINGLIT(tmp105,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp106;
  static int tmp107 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp107)
  {
    tmp103 = GreaterEq(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[3,1] variable */,0.0);
    tmp104 = LessEq(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[3,1] variable */,1.0);
    if(!(tmp103 && tmp104))
    {
      tmp106 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[32] /* MatStm1.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp105),tmp106);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,1] >= 0.0 and MatStm1.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp107 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 896
type: ALGORITHM

  assert(MatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm1.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,896};
  modelica_boolean tmp108;
  modelica_boolean tmp109;
  static const MMC_DEFSTRINGLIT(tmp110,90,"Variable violating min/max constraint: 0.0 <= MatStm1.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp111;
  static int tmp112 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp112)
  {
    tmp108 = GreaterEq(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[3,2] variable */,0.0);
    tmp109 = LessEq(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[3,2] variable */,1.0);
    if(!(tmp108 && tmp109))
    {
      tmp111 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[33] /* MatStm1.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp110),tmp111);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFrac[3,2] >= 0.0 and MatStm1.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp112 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 897
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: " + String(MatStm1.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,897};
  modelica_boolean tmp113;
  static const MMC_DEFSTRINGLIT(tmp114,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,1], has value: ");
  modelica_string tmp115;
  static int tmp116 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp116)
  {
    tmp113 = GreaterEq(data->localData[0]->realVars[48] /* MatStm1.compMolFlo[2,1] variable */,0.0);
    if(!tmp113)
    {
      tmp115 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[48] /* MatStm1.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp114),tmp115);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp116 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 898
type: ALGORITHM

  assert(MatStm1.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: " + String(MatStm1.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,898};
  modelica_boolean tmp117;
  static const MMC_DEFSTRINGLIT(tmp118,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[2,2], has value: ");
  modelica_string tmp119;
  static int tmp120 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp120)
  {
    tmp117 = GreaterEq(data->localData[0]->realVars[49] /* MatStm1.compMolFlo[2,2] variable */,0.0);
    if(!tmp117)
    {
      tmp119 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[49] /* MatStm1.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp118),tmp119);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: " + String(MatStm1.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  modelica_boolean tmp121;
  static const MMC_DEFSTRINGLIT(tmp122,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,1], has value: ");
  modelica_string tmp123;
  static int tmp124 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp124)
  {
    tmp121 = GreaterEq(data->localData[0]->realVars[50] /* MatStm1.compMolFlo[3,1] variable */,0.0);
    if(!tmp121)
    {
      tmp123 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[50] /* MatStm1.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp122),tmp123);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp124 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 900
type: ALGORITHM

  assert(MatStm1.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: " + String(MatStm1.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,900};
  modelica_boolean tmp125;
  static const MMC_DEFSTRINGLIT(tmp126,78,"Variable violating min constraint: 0.0 <= MatStm1.compMolFlo[3,2], has value: ");
  modelica_string tmp127;
  static int tmp128 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp128)
  {
    tmp125 = GreaterEq(data->localData[0]->realVars[51] /* MatStm1.compMolFlo[3,2] variable */,0.0);
    if(!tmp125)
    {
      tmp127 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[51] /* MatStm1.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp126),tmp127);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp128 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 901
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: " + String(MatStm1.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,901};
  modelica_boolean tmp129;
  static const MMC_DEFSTRINGLIT(tmp130,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,1], has value: ");
  modelica_string tmp131;
  static int tmp132 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp132)
  {
    tmp129 = GreaterEq(data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,1] variable */,0.0);
    if(!tmp129)
    {
      tmp131 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[24] /* MatStm1.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp130),tmp131);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp132 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 902
type: ALGORITHM

  assert(MatStm1.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: " + String(MatStm1.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,902};
  modelica_boolean tmp133;
  static const MMC_DEFSTRINGLIT(tmp134,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[2,2], has value: ");
  modelica_string tmp135;
  static int tmp136 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp136)
  {
    tmp133 = GreaterEq(data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,2] variable */,0.0);
    if(!tmp133)
    {
      tmp135 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[25] /* MatStm1.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp134),tmp135);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp136 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 903
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: " + String(MatStm1.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,903};
  modelica_boolean tmp137;
  static const MMC_DEFSTRINGLIT(tmp138,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,1], has value: ");
  modelica_string tmp139;
  static int tmp140 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp140)
  {
    tmp137 = GreaterEq(data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */,0.0);
    if(!tmp137)
    {
      tmp139 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[26] /* MatStm1.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp138),tmp139);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp140 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 904
type: ALGORITHM

  assert(MatStm1.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: " + String(MatStm1.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,904};
  modelica_boolean tmp141;
  static const MMC_DEFSTRINGLIT(tmp142,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[3,2], has value: ");
  modelica_string tmp143;
  static int tmp144 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp144)
  {
    tmp141 = GreaterEq(data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */,0.0);
    if(!tmp141)
    {
      tmp143 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[27] /* MatStm1.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp142),tmp143);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp144 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 905
type: ALGORITHM

  assert(MatStm3.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.Pbubl, has value: " + String(MatStm3.Pbubl, "g"));
*/
void Flowsheet_eqFunction_905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,905};
  modelica_boolean tmp145;
  static const MMC_DEFSTRINGLIT(tmp146,68,"Variable violating min constraint: 0.0 <= MatStm3.Pbubl, has value: ");
  modelica_string tmp147;
  static int tmp148 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp148)
  {
    tmp145 = GreaterEq(data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */,0.0);
    if(!tmp145)
    {
      tmp147 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[106] /* MatStm3.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp146),tmp147);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp148 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 906
type: ALGORITHM

  assert(MatStm3.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.Pdew, has value: " + String(MatStm3.Pdew, "g"));
*/
void Flowsheet_eqFunction_906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,906};
  modelica_boolean tmp149;
  static const MMC_DEFSTRINGLIT(tmp150,67,"Variable violating min constraint: 0.0 <= MatStm3.Pdew, has value: ");
  modelica_string tmp151;
  static int tmp152 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp152)
  {
    tmp149 = GreaterEq(data->localData[0]->realVars[107] /* MatStm3.Pdew variable */,0.0);
    if(!tmp149)
    {
      tmp151 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[107] /* MatStm3.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp150),tmp151);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp152 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 907
type: ALGORITHM

  assert(MatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: " + String(MatStm3.liqPhasMolFrac, "g"));
*/
void Flowsheet_eqFunction_907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,907};
  modelica_boolean tmp153;
  modelica_boolean tmp154;
  static const MMC_DEFSTRINGLIT(tmp155,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp156;
  static int tmp157 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp157)
  {
    tmp153 = GreaterEq(data->localData[0]->realVars[159] /* MatStm3.liqPhasMolFrac variable */,0.0);
    tmp154 = LessEq(data->localData[0]->realVars[159] /* MatStm3.liqPhasMolFrac variable */,1.0);
    if(!(tmp153 && tmp154))
    {
      tmp156 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[159] /* MatStm3.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp155),tmp156);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp157 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 908
type: ALGORITHM

  assert(MatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: " + String(MatStm3.liqPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,908};
  modelica_boolean tmp158;
  modelica_boolean tmp159;
  static const MMC_DEFSTRINGLIT(tmp160,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp161;
  static int tmp162 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp162)
  {
    tmp158 = GreaterEq(data->localData[0]->realVars[158] /* MatStm3.liqPhasMasFrac variable */,0.0);
    tmp159 = LessEq(data->localData[0]->realVars[158] /* MatStm3.liqPhasMasFrac variable */,1.0);
    if(!(tmp158 && tmp159))
    {
      tmp161 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[158] /* MatStm3.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp160),tmp161);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: " + String(MatStm3.vapPhasMasFrac, "g"));
*/
void Flowsheet_eqFunction_909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,909};
  modelica_boolean tmp163;
  modelica_boolean tmp164;
  static const MMC_DEFSTRINGLIT(tmp165,88,"Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp166;
  static int tmp167 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp167)
  {
    tmp163 = GreaterEq(data->localData[0]->realVars[185] /* MatStm3.vapPhasMasFrac variable */,0.0);
    tmp164 = LessEq(data->localData[0]->realVars[185] /* MatStm3.vapPhasMasFrac variable */,1.0);
    if(!(tmp163 && tmp164))
    {
      tmp166 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[185] /* MatStm3.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp165),tmp166);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp167 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 910
type: ALGORITHM

  assert(MatStm3.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: " + String(MatStm3.totMolFlo[2], "g"));
*/
void Flowsheet_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
  modelica_boolean tmp168;
  static const MMC_DEFSTRINGLIT(tmp169,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: ");
  modelica_string tmp170;
  static int tmp171 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp171)
  {
    tmp168 = GreaterEq(data->localData[0]->realVars[183] /* MatStm3.totMolFlo[2] variable */,0.0);
    if(!tmp168)
    {
      tmp170 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[183] /* MatStm3.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp169),tmp170);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp171 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 911
type: ALGORITHM

  assert(MatStm3.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: " + String(MatStm3.totMolFlo[3], "g"));
*/
void Flowsheet_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
  modelica_boolean tmp172;
  static const MMC_DEFSTRINGLIT(tmp173,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: ");
  modelica_string tmp174;
  static int tmp175 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp175)
  {
    tmp172 = GreaterEq(data->localData[0]->realVars[184] /* MatStm3.totMolFlo[3] variable */,0.0);
    if(!tmp172)
    {
      tmp174 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[184] /* MatStm3.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp173),tmp174);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp175 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 912
type: ALGORITHM

  assert(MatStm3.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: " + String(MatStm3.totMasFlo[1], "g"));
*/
void Flowsheet_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  modelica_boolean tmp176;
  static const MMC_DEFSTRINGLIT(tmp177,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: ");
  modelica_string tmp178;
  static int tmp179 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp179)
  {
    tmp176 = GreaterEq(data->localData[0]->realVars[180] /* MatStm3.totMasFlo[1] variable */,0.0);
    if(!tmp176)
    {
      tmp178 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[180] /* MatStm3.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp177),tmp178);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp179 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 913
type: ALGORITHM

  assert(MatStm3.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: " + String(MatStm3.totMasFlo[2], "g"));
*/
void Flowsheet_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  modelica_boolean tmp180;
  static const MMC_DEFSTRINGLIT(tmp181,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: ");
  modelica_string tmp182;
  static int tmp183 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp183)
  {
    tmp180 = GreaterEq(data->localData[0]->realVars[181] /* MatStm3.totMasFlo[2] variable */,0.0);
    if(!tmp180)
    {
      tmp182 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[181] /* MatStm3.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp181),tmp182);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp183 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 914
type: ALGORITHM

  assert(MatStm3.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: " + String(MatStm3.totMasFlo[3], "g"));
*/
void Flowsheet_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  modelica_boolean tmp184;
  static const MMC_DEFSTRINGLIT(tmp185,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: ");
  modelica_string tmp186;
  static int tmp187 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp187)
  {
    tmp184 = GreaterEq(data->localData[0]->realVars[182] /* MatStm3.totMasFlo[3] variable */,0.0);
    if(!tmp184)
    {
      tmp186 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[182] /* MatStm3.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp185),tmp186);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp187 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 915
type: ALGORITHM

  assert(MatStm3.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: " + String(MatStm3.MW[1], "g"));
*/
void Flowsheet_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  modelica_boolean tmp188;
  static const MMC_DEFSTRINGLIT(tmp189,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: ");
  modelica_string tmp190;
  static int tmp191 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp191)
  {
    tmp188 = GreaterEq(data->localData[0]->realVars[103] /* MatStm3.MW[1] variable */,0.0);
    if(!tmp188)
    {
      tmp190 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[103] /* MatStm3.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp189),tmp190);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: " + String(MatStm3.MW[2], "g"));
*/
void Flowsheet_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  modelica_boolean tmp192;
  static const MMC_DEFSTRINGLIT(tmp193,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: ");
  modelica_string tmp194;
  static int tmp195 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp195)
  {
    tmp192 = GreaterEq(data->localData[0]->realVars[104] /* MatStm3.MW[2] variable */,0.0);
    if(!tmp192)
    {
      tmp194 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[104] /* MatStm3.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp193),tmp194);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp195 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 917
type: ALGORITHM

  assert(MatStm3.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: " + String(MatStm3.MW[3], "g"));
*/
void Flowsheet_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  modelica_boolean tmp196;
  static const MMC_DEFSTRINGLIT(tmp197,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: ");
  modelica_string tmp198;
  static int tmp199 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp199)
  {
    tmp196 = GreaterEq(data->localData[0]->realVars[105] /* MatStm3.MW[3] variable */,0.0);
    if(!tmp196)
    {
      tmp198 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[105] /* MatStm3.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp197),tmp198);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp199 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 918
type: ALGORITHM

  assert(MatStm3.compMolFrac[1,1] >= 0.0 and MatStm3.compMolFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[1,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  modelica_boolean tmp200;
  modelica_boolean tmp201;
  static const MMC_DEFSTRINGLIT(tmp202,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp203;
  static int tmp204 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp204)
  {
    tmp200 = GreaterEq(data->localData[0]->realVars[140] /* MatStm3.compMolFrac[1,1] variable */,0.0);
    tmp201 = LessEq(data->localData[0]->realVars[140] /* MatStm3.compMolFrac[1,1] variable */,1.0);
    if(!(tmp200 && tmp201))
    {
      tmp203 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[140] /* MatStm3.compMolFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp202),tmp203);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[1,1] >= 0.0 and MatStm3.compMolFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp204 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 919
type: ALGORITHM

  assert(MatStm3.compMolFrac[1,2] >= 0.0 and MatStm3.compMolFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[1,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  modelica_boolean tmp205;
  modelica_boolean tmp206;
  static const MMC_DEFSTRINGLIT(tmp207,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp208;
  static int tmp209 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp209)
  {
    tmp205 = GreaterEq(data->localData[0]->realVars[141] /* MatStm3.compMolFrac[1,2] variable */,0.0);
    tmp206 = LessEq(data->localData[0]->realVars[141] /* MatStm3.compMolFrac[1,2] variable */,1.0);
    if(!(tmp205 && tmp206))
    {
      tmp208 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[141] /* MatStm3.compMolFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp207),tmp208);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[1,2] >= 0.0 and MatStm3.compMolFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  modelica_boolean tmp210;
  modelica_boolean tmp211;
  static const MMC_DEFSTRINGLIT(tmp212,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp213;
  static int tmp214 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp214)
  {
    tmp210 = GreaterEq(data->localData[0]->realVars[142] /* MatStm3.compMolFrac[2,1] variable */,0.0);
    tmp211 = LessEq(data->localData[0]->realVars[142] /* MatStm3.compMolFrac[2,1] variable */,1.0);
    if(!(tmp210 && tmp211))
    {
      tmp213 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[142] /* MatStm3.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp212),tmp213);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp214 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 921
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  modelica_boolean tmp215;
  modelica_boolean tmp216;
  static const MMC_DEFSTRINGLIT(tmp217,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp218;
  static int tmp219 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp219)
  {
    tmp215 = GreaterEq(data->localData[0]->realVars[143] /* MatStm3.compMolFrac[2,2] variable */,0.0);
    tmp216 = LessEq(data->localData[0]->realVars[143] /* MatStm3.compMolFrac[2,2] variable */,1.0);
    if(!(tmp215 && tmp216))
    {
      tmp218 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[143] /* MatStm3.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp217),tmp218);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp219 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 922
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  modelica_boolean tmp220;
  modelica_boolean tmp221;
  static const MMC_DEFSTRINGLIT(tmp222,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp223;
  static int tmp224 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp224)
  {
    tmp220 = GreaterEq(data->localData[0]->realVars[144] /* MatStm3.compMolFrac[3,1] variable */,0.0);
    tmp221 = LessEq(data->localData[0]->realVars[144] /* MatStm3.compMolFrac[3,1] variable */,1.0);
    if(!(tmp220 && tmp221))
    {
      tmp223 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[144] /* MatStm3.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp222),tmp223);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp224 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 923
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  modelica_boolean tmp225;
  modelica_boolean tmp226;
  static const MMC_DEFSTRINGLIT(tmp227,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp228;
  static int tmp229 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp229)
  {
    tmp225 = GreaterEq(data->localData[0]->realVars[145] /* MatStm3.compMolFrac[3,2] variable */,0.0);
    tmp226 = LessEq(data->localData[0]->realVars[145] /* MatStm3.compMolFrac[3,2] variable */,1.0);
    if(!(tmp225 && tmp226))
    {
      tmp228 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[145] /* MatStm3.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp227),tmp228);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp229 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 924
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,1], "g"));
*/
void Flowsheet_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  modelica_boolean tmp230;
  modelica_boolean tmp231;
  static const MMC_DEFSTRINGLIT(tmp232,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp233;
  static int tmp234 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp234)
  {
    tmp230 = GreaterEq(data->localData[0]->realVars[116] /* MatStm3.compMasFrac[1,1] variable */,0.0);
    tmp231 = LessEq(data->localData[0]->realVars[116] /* MatStm3.compMasFrac[1,1] variable */,1.0);
    if(!(tmp230 && tmp231))
    {
      tmp233 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[116] /* MatStm3.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp232),tmp233);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp234 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 925
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,2], "g"));
*/
void Flowsheet_eqFunction_925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,925};
  modelica_boolean tmp235;
  modelica_boolean tmp236;
  static const MMC_DEFSTRINGLIT(tmp237,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp238;
  static int tmp239 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp239)
  {
    tmp235 = GreaterEq(data->localData[0]->realVars[117] /* MatStm3.compMasFrac[1,2] variable */,0.0);
    tmp236 = LessEq(data->localData[0]->realVars[117] /* MatStm3.compMasFrac[1,2] variable */,1.0);
    if(!(tmp235 && tmp236))
    {
      tmp238 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[117] /* MatStm3.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp237),tmp238);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp239 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 926
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,1], "g"));
*/
void Flowsheet_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  modelica_boolean tmp240;
  modelica_boolean tmp241;
  static const MMC_DEFSTRINGLIT(tmp242,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp243;
  static int tmp244 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp244)
  {
    tmp240 = GreaterEq(data->localData[0]->realVars[118] /* MatStm3.compMasFrac[2,1] variable */,0.0);
    tmp241 = LessEq(data->localData[0]->realVars[118] /* MatStm3.compMasFrac[2,1] variable */,1.0);
    if(!(tmp240 && tmp241))
    {
      tmp243 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[118] /* MatStm3.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp242),tmp243);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp244 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 927
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,2], "g"));
*/
void Flowsheet_eqFunction_927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,927};
  modelica_boolean tmp245;
  modelica_boolean tmp246;
  static const MMC_DEFSTRINGLIT(tmp247,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp248;
  static int tmp249 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp249)
  {
    tmp245 = GreaterEq(data->localData[0]->realVars[119] /* MatStm3.compMasFrac[2,2] variable */,0.0);
    tmp246 = LessEq(data->localData[0]->realVars[119] /* MatStm3.compMasFrac[2,2] variable */,1.0);
    if(!(tmp245 && tmp246))
    {
      tmp248 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[119] /* MatStm3.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp247),tmp248);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp249 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 928
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,1], "g"));
*/
void Flowsheet_eqFunction_928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,928};
  modelica_boolean tmp250;
  modelica_boolean tmp251;
  static const MMC_DEFSTRINGLIT(tmp252,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp253;
  static int tmp254 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp254)
  {
    tmp250 = GreaterEq(data->localData[0]->realVars[120] /* MatStm3.compMasFrac[3,1] variable */,0.0);
    tmp251 = LessEq(data->localData[0]->realVars[120] /* MatStm3.compMasFrac[3,1] variable */,1.0);
    if(!(tmp250 && tmp251))
    {
      tmp253 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[120] /* MatStm3.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp252),tmp253);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp254 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 929
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,2], "g"));
*/
void Flowsheet_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  modelica_boolean tmp255;
  modelica_boolean tmp256;
  static const MMC_DEFSTRINGLIT(tmp257,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp258;
  static int tmp259 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp259)
  {
    tmp255 = GreaterEq(data->localData[0]->realVars[121] /* MatStm3.compMasFrac[3,2] variable */,0.0);
    tmp256 = LessEq(data->localData[0]->realVars[121] /* MatStm3.compMasFrac[3,2] variable */,1.0);
    if(!(tmp255 && tmp256))
    {
      tmp258 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[121] /* MatStm3.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp257),tmp258);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp259 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 930
type: ALGORITHM

  assert(MatStm3.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,1], has value: " + String(MatStm3.compMolFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,930};
  modelica_boolean tmp260;
  static const MMC_DEFSTRINGLIT(tmp261,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,1], has value: ");
  modelica_string tmp262;
  static int tmp263 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp263)
  {
    tmp260 = GreaterEq(data->localData[0]->realVars[134] /* MatStm3.compMolFlo[1,1] variable */,0.0);
    if(!tmp260)
    {
      tmp262 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[134] /* MatStm3.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp261),tmp262);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp263 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 931
type: ALGORITHM

  assert(MatStm3.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,2], has value: " + String(MatStm3.compMolFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,931};
  modelica_boolean tmp264;
  static const MMC_DEFSTRINGLIT(tmp265,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[1,2], has value: ");
  modelica_string tmp266;
  static int tmp267 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp267)
  {
    tmp264 = GreaterEq(data->localData[0]->realVars[135] /* MatStm3.compMolFlo[1,2] variable */,0.0);
    if(!tmp264)
    {
      tmp266 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[135] /* MatStm3.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp265),tmp266);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp267 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 932
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: " + String(MatStm3.compMolFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,932};
  modelica_boolean tmp268;
  static const MMC_DEFSTRINGLIT(tmp269,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: ");
  modelica_string tmp270;
  static int tmp271 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp271)
  {
    tmp268 = GreaterEq(data->localData[0]->realVars[136] /* MatStm3.compMolFlo[2,1] variable */,0.0);
    if(!tmp268)
    {
      tmp270 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[136] /* MatStm3.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp269),tmp270);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp271 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 933
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: " + String(MatStm3.compMolFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,933};
  modelica_boolean tmp272;
  static const MMC_DEFSTRINGLIT(tmp273,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: ");
  modelica_string tmp274;
  static int tmp275 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp275)
  {
    tmp272 = GreaterEq(data->localData[0]->realVars[137] /* MatStm3.compMolFlo[2,2] variable */,0.0);
    if(!tmp272)
    {
      tmp274 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[137] /* MatStm3.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp273),tmp274);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp275 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 934
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: " + String(MatStm3.compMolFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,934};
  modelica_boolean tmp276;
  static const MMC_DEFSTRINGLIT(tmp277,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: ");
  modelica_string tmp278;
  static int tmp279 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp279)
  {
    tmp276 = GreaterEq(data->localData[0]->realVars[138] /* MatStm3.compMolFlo[3,1] variable */,0.0);
    if(!tmp276)
    {
      tmp278 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[138] /* MatStm3.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp277),tmp278);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp279 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 935
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: " + String(MatStm3.compMolFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,935};
  modelica_boolean tmp280;
  static const MMC_DEFSTRINGLIT(tmp281,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: ");
  modelica_string tmp282;
  static int tmp283 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp283)
  {
    tmp280 = GreaterEq(data->localData[0]->realVars[139] /* MatStm3.compMolFlo[3,2] variable */,0.0);
    if(!tmp280)
    {
      tmp282 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[139] /* MatStm3.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp281),tmp282);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,1], has value: " + String(MatStm3.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,936};
  modelica_boolean tmp284;
  static const MMC_DEFSTRINGLIT(tmp285,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,1], has value: ");
  modelica_string tmp286;
  static int tmp287 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp287)
  {
    tmp284 = GreaterEq(data->localData[0]->realVars[110] /* MatStm3.compMasFlo[1,1] variable */,0.0);
    if(!tmp284)
    {
      tmp286 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[110] /* MatStm3.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp285),tmp286);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,2], has value: " + String(MatStm3.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,937};
  modelica_boolean tmp288;
  static const MMC_DEFSTRINGLIT(tmp289,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,2], has value: ");
  modelica_string tmp290;
  static int tmp291 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp291)
  {
    tmp288 = GreaterEq(data->localData[0]->realVars[111] /* MatStm3.compMasFlo[1,2] variable */,0.0);
    if(!tmp288)
    {
      tmp290 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[111] /* MatStm3.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp289),tmp290);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: " + String(MatStm3.compMasFlo[2,1], "g"));
*/
void Flowsheet_eqFunction_938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,938};
  modelica_boolean tmp292;
  static const MMC_DEFSTRINGLIT(tmp293,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: ");
  modelica_string tmp294;
  static int tmp295 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp295)
  {
    tmp292 = GreaterEq(data->localData[0]->realVars[112] /* MatStm3.compMasFlo[2,1] variable */,0.0);
    if(!tmp292)
    {
      tmp294 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[112] /* MatStm3.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp293),tmp294);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: " + String(MatStm3.compMasFlo[2,2], "g"));
*/
void Flowsheet_eqFunction_939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,939};
  modelica_boolean tmp296;
  static const MMC_DEFSTRINGLIT(tmp297,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: ");
  modelica_string tmp298;
  static int tmp299 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp299)
  {
    tmp296 = GreaterEq(data->localData[0]->realVars[113] /* MatStm3.compMasFlo[2,2] variable */,0.0);
    if(!tmp296)
    {
      tmp298 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[113] /* MatStm3.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp297),tmp298);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: " + String(MatStm3.compMasFlo[3,1], "g"));
*/
void Flowsheet_eqFunction_940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,940};
  modelica_boolean tmp300;
  static const MMC_DEFSTRINGLIT(tmp301,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: ");
  modelica_string tmp302;
  static int tmp303 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp303)
  {
    tmp300 = GreaterEq(data->localData[0]->realVars[114] /* MatStm3.compMasFlo[3,1] variable */,0.0);
    if(!tmp300)
    {
      tmp302 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[114] /* MatStm3.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp301),tmp302);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: " + String(MatStm3.compMasFlo[3,2], "g"));
*/
void Flowsheet_eqFunction_941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,941};
  modelica_boolean tmp304;
  static const MMC_DEFSTRINGLIT(tmp305,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: ");
  modelica_string tmp306;
  static int tmp307 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp307)
  {
    tmp304 = GreaterEq(data->localData[0]->realVars[115] /* MatStm3.compMasFlo[3,2] variable */,0.0);
    if(!tmp304)
    {
      tmp306 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[115] /* MatStm3.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp305),tmp306);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.K[1], has value: " + String(MatStm3.K[1], "g"));
*/
void Flowsheet_eqFunction_942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,942};
  modelica_boolean tmp308;
  static const MMC_DEFSTRINGLIT(tmp309,67,"Variable violating min constraint: 0.0 <= MatStm3.K[1], has value: ");
  modelica_string tmp310;
  static int tmp311 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp311)
  {
    tmp308 = GreaterEq(data->localData[0]->realVars[101] /* MatStm3.K[1] variable */,0.0);
    if(!tmp308)
    {
      tmp310 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[101] /* MatStm3.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp309),tmp310);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.K[2], has value: " + String(MatStm3.K[2], "g"));
*/
void Flowsheet_eqFunction_943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,943};
  modelica_boolean tmp312;
  static const MMC_DEFSTRINGLIT(tmp313,67,"Variable violating min constraint: 0.0 <= MatStm3.K[2], has value: ");
  modelica_string tmp314;
  static int tmp315 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp315)
  {
    tmp312 = GreaterEq(data->localData[0]->realVars[102] /* MatStm3.K[2] variable */,0.0);
    if(!tmp312)
    {
      tmp314 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[102] /* MatStm3.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp313),tmp314);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: " + String(MatStm1.K[2], "g"));
*/
void Flowsheet_eqFunction_872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,872};
  modelica_boolean tmp316;
  static const MMC_DEFSTRINGLIT(tmp317,67,"Variable violating min constraint: 0.0 <= MatStm1.K[2], has value: ");
  modelica_string tmp318;
  static int tmp319 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp319)
  {
    tmp316 = GreaterEq(data->localData[0]->realVars[12] /* MatStm1.K[2] variable */,0.0);
    if(!tmp316)
    {
      tmp318 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[12] /* MatStm1.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp317),tmp318);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: " + String(MatStm1.K[1], "g"));
*/
void Flowsheet_eqFunction_871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,871};
  modelica_boolean tmp320;
  static const MMC_DEFSTRINGLIT(tmp321,67,"Variable violating min constraint: 0.0 <= MatStm1.K[1], has value: ");
  modelica_string tmp322;
  static int tmp323 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp323)
  {
    tmp320 = GreaterEq(data->localData[0]->realVars[11] /* MatStm1.K[1] variable */,0.0);
    if(!tmp320)
    {
      tmp322 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[11] /* MatStm1.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp321),tmp322);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: " + String(MatStm1.compMasFlo[1,2], "g"));
*/
void Flowsheet_eqFunction_870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,870};
  modelica_boolean tmp324;
  static const MMC_DEFSTRINGLIT(tmp325,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,2], has value: ");
  modelica_string tmp326;
  static int tmp327 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp327)
  {
    tmp324 = GreaterEq(data->localData[0]->realVars[23] /* MatStm1.compMasFlo[1,2] variable */,0.0);
    if(!tmp324)
    {
      tmp326 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[23] /* MatStm1.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp325),tmp326);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm1.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: " + String(MatStm1.compMasFlo[1,1], "g"));
*/
void Flowsheet_eqFunction_869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,869};
  modelica_boolean tmp328;
  static const MMC_DEFSTRINGLIT(tmp329,78,"Variable violating min constraint: 0.0 <= MatStm1.compMasFlo[1,1], has value: ");
  modelica_string tmp330;
  static int tmp331 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp331)
  {
    tmp328 = GreaterEq(data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */,0.0);
    if(!tmp328)
    {
      tmp330 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[22] /* MatStm1.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp329),tmp330);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm1.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

