/* Asserts */
#include "cooler1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 873
type: ALGORITHM

  assert(Cooler1.outT >= 0.0, "Variable violating min constraint: 0.0 <= Cooler1.outT, has value: " + String(Cooler1.outT, "g"));
*/
void cooler1_eqFunction_873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,873};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,67,"Variable violating min constraint: 0.0 <= Cooler1.outT, has value: ");
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp3)
  {
    tmp0 = GreaterEq(data->localData[0]->realVars[8] /* Cooler1.outT variable */,0.0);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[8] /* Cooler1.outT variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4659,7,4659,470,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nCooler1.outT >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp3 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 874
type: ALGORITHM

  assert(Cooler1.outVapPhasMolFrac >= 0.0 and Cooler1.outVapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= Cooler1.outVapPhasMolFrac <= 1.0, has value: " + String(Cooler1.outVapPhasMolFrac, "g"));
*/
void cooler1_eqFunction_874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,874};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  static const MMC_DEFSTRINGLIT(tmp6,91,"Variable violating min/max constraint: 0.0 <= Cooler1.outVapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp7;
  static int tmp8 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp8)
  {
    tmp4 = GreaterEq(data->localData[0]->realVars[9] /* Cooler1.outVapPhasMolFrac variable */,0.0);
    tmp5 = LessEq(data->localData[0]->realVars[9] /* Cooler1.outVapPhasMolFrac variable */,1.0);
    if(!(tmp4 && tmp5))
    {
      tmp7 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[9] /* Cooler1.outVapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp6),tmp7);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4659,7,4659,470,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nCooler1.outVapPhasMolFrac >= 0.0 and Cooler1.outVapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp8 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 875
type: ALGORITHM

  assert(Cooler1.inVapPhasMolFrac >= 0.0 and Cooler1.inVapPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= Cooler1.inVapPhasMolFrac <= 1.0, has value: " + String(Cooler1.inVapPhasMolFrac, "g"));
*/
void cooler1_eqFunction_875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,875};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,90,"Variable violating min/max constraint: 0.0 <= Cooler1.inVapPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp12;
  static int tmp13 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp13)
  {
    tmp9 = GreaterEq(data->localData[0]->realVars[6] /* Cooler1.inVapPhasMolFrac variable */,0.0);
    tmp10 = LessEq(data->localData[0]->realVars[6] /* Cooler1.inVapPhasMolFrac variable */,1.0);
    if(!(tmp9 && tmp10))
    {
      tmp12 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[6] /* Cooler1.inVapPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp11),tmp12);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4661,7,4661,278,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nCooler1.inVapPhasMolFrac >= 0.0 and Cooler1.inVapPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp13 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 876
type: ALGORITHM

  assert(MatStm2.Pbubl >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.Pbubl, has value: " + String(MatStm2.Pbubl, "g"));
*/
void cooler1_eqFunction_876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,876};
  modelica_boolean tmp14;
  static const MMC_DEFSTRINGLIT(tmp15,68,"Variable violating min constraint: 0.0 <= MatStm2.Pbubl, has value: ");
  modelica_string tmp16;
  static int tmp17 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp17)
  {
    tmp14 = GreaterEq(data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */,0.0);
    if(!tmp14)
    {
      tmp16 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[16] /* MatStm2.Pbubl variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp15),tmp16);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.Pbubl >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp17 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 877
type: ALGORITHM

  assert(MatStm2.Pdew >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.Pdew, has value: " + String(MatStm2.Pdew, "g"));
*/
void cooler1_eqFunction_877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,877};
  modelica_boolean tmp18;
  static const MMC_DEFSTRINGLIT(tmp19,67,"Variable violating min constraint: 0.0 <= MatStm2.Pdew, has value: ");
  modelica_string tmp20;
  static int tmp21 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp21)
  {
    tmp18 = GreaterEq(data->localData[0]->realVars[17] /* MatStm2.Pdew variable */,0.0);
    if(!tmp18)
    {
      tmp20 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[17] /* MatStm2.Pdew variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp19),tmp20);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4169,3,4169,138,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.Pdew >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp21 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 878
type: ALGORITHM

  assert(MatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: " + String(MatStm2.liqPhasMolFrac, "g"));
*/
void cooler1_eqFunction_878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,878};
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp25;
  static int tmp26 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp26)
  {
    tmp22 = GreaterEq(data->localData[0]->realVars[69] /* MatStm2.liqPhasMolFrac variable */,0.0);
    tmp23 = LessEq(data->localData[0]->realVars[69] /* MatStm2.liqPhasMolFrac variable */,1.0);
    if(!(tmp22 && tmp23))
    {
      tmp25 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[69] /* MatStm2.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp24),tmp25);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMolFrac >= 0.0 and MatStm2.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp26 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 879
type: ALGORITHM

  assert(MatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: " + String(MatStm2.liqPhasMasFrac, "g"));
*/
void cooler1_eqFunction_879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,879};
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,88,"Variable violating min/max constraint: 0.0 <= MatStm2.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp30;
  static int tmp31 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp31)
  {
    tmp27 = GreaterEq(data->localData[0]->realVars[68] /* MatStm2.liqPhasMasFrac variable */,0.0);
    tmp28 = LessEq(data->localData[0]->realVars[68] /* MatStm2.liqPhasMasFrac variable */,1.0);
    if(!(tmp27 && tmp28))
    {
      tmp30 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[68] /* MatStm2.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.liqPhasMasFrac >= 0.0 and MatStm2.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp31 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 880
type: ALGORITHM

  assert(MatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: " + String(MatStm2.vapPhasMasFrac, "g"));
*/
void cooler1_eqFunction_880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,880};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,88,"Variable violating min/max constraint: 0.0 <= MatStm2.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp35;
  static int tmp36 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp36)
  {
    tmp32 = GreaterEq(data->localData[0]->realVars[95] /* MatStm2.vapPhasMasFrac variable */,0.0);
    tmp33 = LessEq(data->localData[0]->realVars[95] /* MatStm2.vapPhasMasFrac variable */,1.0);
    if(!(tmp32 && tmp33))
    {
      tmp35 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[95] /* MatStm2.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp34),tmp35);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.vapPhasMasFrac >= 0.0 and MatStm2.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp36 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 881
type: ALGORITHM

  assert(MatStm2.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: " + String(MatStm2.totMolFlo[2], "g"));
*/
void cooler1_eqFunction_881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,881};
  modelica_boolean tmp37;
  static const MMC_DEFSTRINGLIT(tmp38,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[2], has value: ");
  modelica_string tmp39;
  static int tmp40 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp40)
  {
    tmp37 = GreaterEq(data->localData[0]->realVars[93] /* MatStm2.totMolFlo[2] variable */,0.0);
    if(!tmp37)
    {
      tmp39 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[93] /* MatStm2.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp38),tmp39);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp40 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 882
type: ALGORITHM

  assert(MatStm2.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: " + String(MatStm2.totMolFlo[3], "g"));
*/
void cooler1_eqFunction_882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,882};
  modelica_boolean tmp41;
  static const MMC_DEFSTRINGLIT(tmp42,75,"Variable violating min constraint: 0.0 <= MatStm2.totMolFlo[3], has value: ");
  modelica_string tmp43;
  static int tmp44 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp44)
  {
    tmp41 = GreaterEq(data->localData[0]->realVars[94] /* MatStm2.totMolFlo[3] variable */,0.0);
    if(!tmp41)
    {
      tmp43 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[94] /* MatStm2.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp42),tmp43);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp44 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 883
type: ALGORITHM

  assert(MatStm2.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: " + String(MatStm2.totMasFlo[1], "g"));
*/
void cooler1_eqFunction_883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,883};
  modelica_boolean tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[1], has value: ");
  modelica_string tmp47;
  static int tmp48 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp48)
  {
    tmp45 = GreaterEq(data->localData[0]->realVars[90] /* MatStm2.totMasFlo[1] variable */,0.0);
    if(!tmp45)
    {
      tmp47 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[90] /* MatStm2.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp46),tmp47);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp48 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 884
type: ALGORITHM

  assert(MatStm2.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: " + String(MatStm2.totMasFlo[2], "g"));
*/
void cooler1_eqFunction_884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,884};
  modelica_boolean tmp49;
  static const MMC_DEFSTRINGLIT(tmp50,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[2], has value: ");
  modelica_string tmp51;
  static int tmp52 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp52)
  {
    tmp49 = GreaterEq(data->localData[0]->realVars[91] /* MatStm2.totMasFlo[2] variable */,0.0);
    if(!tmp49)
    {
      tmp51 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[91] /* MatStm2.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp50),tmp51);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp52 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 885
type: ALGORITHM

  assert(MatStm2.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: " + String(MatStm2.totMasFlo[3], "g"));
*/
void cooler1_eqFunction_885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,885};
  modelica_boolean tmp53;
  static const MMC_DEFSTRINGLIT(tmp54,75,"Variable violating min constraint: 0.0 <= MatStm2.totMasFlo[3], has value: ");
  modelica_string tmp55;
  static int tmp56 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp56)
  {
    tmp53 = GreaterEq(data->localData[0]->realVars[92] /* MatStm2.totMasFlo[3] variable */,0.0);
    if(!tmp53)
    {
      tmp55 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[92] /* MatStm2.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp54),tmp55);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp56 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 886
type: ALGORITHM

  assert(MatStm2.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: " + String(MatStm2.MW[1], "g"));
*/
void cooler1_eqFunction_886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,886};
  modelica_boolean tmp57;
  static const MMC_DEFSTRINGLIT(tmp58,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[1], has value: ");
  modelica_string tmp59;
  static int tmp60 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp60)
  {
    tmp57 = GreaterEq(data->localData[0]->realVars[13] /* MatStm2.MW[1] variable */,0.0);
    if(!tmp57)
    {
      tmp59 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[13] /* MatStm2.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp58),tmp59);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp60 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 887
type: ALGORITHM

  assert(MatStm2.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: " + String(MatStm2.MW[2], "g"));
*/
void cooler1_eqFunction_887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,887};
  modelica_boolean tmp61;
  static const MMC_DEFSTRINGLIT(tmp62,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[2], has value: ");
  modelica_string tmp63;
  static int tmp64 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp64)
  {
    tmp61 = GreaterEq(data->localData[0]->realVars[14] /* MatStm2.MW[2] variable */,0.0);
    if(!tmp61)
    {
      tmp63 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[14] /* MatStm2.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp62),tmp63);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp64 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 888
type: ALGORITHM

  assert(MatStm2.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: " + String(MatStm2.MW[3], "g"));
*/
void cooler1_eqFunction_888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,888};
  modelica_boolean tmp65;
  static const MMC_DEFSTRINGLIT(tmp66,68,"Variable violating min constraint: 0.0 <= MatStm2.MW[3], has value: ");
  modelica_string tmp67;
  static int tmp68 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp68)
  {
    tmp65 = GreaterEq(data->localData[0]->realVars[15] /* MatStm2.MW[3] variable */,0.0);
    if(!tmp65)
    {
      tmp67 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[15] /* MatStm2.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp66),tmp67);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp68 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 889
type: ALGORITHM

  assert(MatStm2.compMolFrac[1,1] >= 0.0 and MatStm2.compMolFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[1,1], "g"));
*/
void cooler1_eqFunction_889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,889};
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  static const MMC_DEFSTRINGLIT(tmp71,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp72;
  static int tmp73 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp73)
  {
    tmp69 = GreaterEq(data->localData[0]->realVars[50] /* MatStm2.compMolFrac[1,1] variable */,0.0);
    tmp70 = LessEq(data->localData[0]->realVars[50] /* MatStm2.compMolFrac[1,1] variable */,1.0);
    if(!(tmp69 && tmp70))
    {
      tmp72 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[50] /* MatStm2.compMolFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp71),tmp72);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[1,1] >= 0.0 and MatStm2.compMolFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp73 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 890
type: ALGORITHM

  assert(MatStm2.compMolFrac[1,2] >= 0.0 and MatStm2.compMolFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[1,2], "g"));
*/
void cooler1_eqFunction_890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,890};
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  static const MMC_DEFSTRINGLIT(tmp76,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp77;
  static int tmp78 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp78)
  {
    tmp74 = GreaterEq(data->localData[0]->realVars[51] /* MatStm2.compMolFrac[1,2] variable */,0.0);
    tmp75 = LessEq(data->localData[0]->realVars[51] /* MatStm2.compMolFrac[1,2] variable */,1.0);
    if(!(tmp74 && tmp75))
    {
      tmp77 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[51] /* MatStm2.compMolFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp76),tmp77);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[1,2] >= 0.0 and MatStm2.compMolFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp78 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 891
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,1], "g"));
*/
void cooler1_eqFunction_891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,891};
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  static const MMC_DEFSTRINGLIT(tmp81,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp82;
  static int tmp83 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp83)
  {
    tmp79 = GreaterEq(data->localData[0]->realVars[52] /* MatStm2.compMolFrac[2,1] variable */,0.0);
    tmp80 = LessEq(data->localData[0]->realVars[52] /* MatStm2.compMolFrac[2,1] variable */,1.0);
    if(!(tmp79 && tmp80))
    {
      tmp82 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[52] /* MatStm2.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp81),tmp82);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,1] >= 0.0 and MatStm2.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp83 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 892
type: ALGORITHM

  assert(MatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[2,2], "g"));
*/
void cooler1_eqFunction_892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,892};
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  static const MMC_DEFSTRINGLIT(tmp86,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp87;
  static int tmp88 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp88)
  {
    tmp84 = GreaterEq(data->localData[0]->realVars[53] /* MatStm2.compMolFrac[2,2] variable */,0.0);
    tmp85 = LessEq(data->localData[0]->realVars[53] /* MatStm2.compMolFrac[2,2] variable */,1.0);
    if(!(tmp84 && tmp85))
    {
      tmp87 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[53] /* MatStm2.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp86),tmp87);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[2,2] >= 0.0 and MatStm2.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp88 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 893
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,1], "g"));
*/
void cooler1_eqFunction_893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,893};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  static const MMC_DEFSTRINGLIT(tmp91,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp92;
  static int tmp93 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp93)
  {
    tmp89 = GreaterEq(data->localData[0]->realVars[54] /* MatStm2.compMolFrac[3,1] variable */,0.0);
    tmp90 = LessEq(data->localData[0]->realVars[54] /* MatStm2.compMolFrac[3,1] variable */,1.0);
    if(!(tmp89 && tmp90))
    {
      tmp92 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[54] /* MatStm2.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp91),tmp92);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,1] >= 0.0 and MatStm2.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp93 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 894
type: ALGORITHM

  assert(MatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMolFrac[3,2], "g"));
*/
void cooler1_eqFunction_894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,894};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  static const MMC_DEFSTRINGLIT(tmp96,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp97;
  static int tmp98 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp98)
  {
    tmp94 = GreaterEq(data->localData[0]->realVars[55] /* MatStm2.compMolFrac[3,2] variable */,0.0);
    tmp95 = LessEq(data->localData[0]->realVars[55] /* MatStm2.compMolFrac[3,2] variable */,1.0);
    if(!(tmp94 && tmp95))
    {
      tmp97 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[55] /* MatStm2.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp96),tmp97);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFrac[3,2] >= 0.0 and MatStm2.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp98 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 895
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,1], "g"));
*/
void cooler1_eqFunction_895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,895};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  static const MMC_DEFSTRINGLIT(tmp101,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp102;
  static int tmp103 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp103)
  {
    tmp99 = GreaterEq(data->localData[0]->realVars[26] /* MatStm2.compMasFrac[1,1] variable */,0.0);
    tmp100 = LessEq(data->localData[0]->realVars[26] /* MatStm2.compMasFrac[1,1] variable */,1.0);
    if(!(tmp99 && tmp100))
    {
      tmp102 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[26] /* MatStm2.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp101),tmp102);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,1] >= 0.0 and MatStm2.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp103 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 896
type: ALGORITHM

  assert(MatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[1,2], "g"));
*/
void cooler1_eqFunction_896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,896};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  static const MMC_DEFSTRINGLIT(tmp106,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp107;
  static int tmp108 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp108)
  {
    tmp104 = GreaterEq(data->localData[0]->realVars[27] /* MatStm2.compMasFrac[1,2] variable */,0.0);
    tmp105 = LessEq(data->localData[0]->realVars[27] /* MatStm2.compMasFrac[1,2] variable */,1.0);
    if(!(tmp104 && tmp105))
    {
      tmp107 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[27] /* MatStm2.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp106),tmp107);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[1,2] >= 0.0 and MatStm2.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp108 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 897
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,1], "g"));
*/
void cooler1_eqFunction_897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,897};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  static const MMC_DEFSTRINGLIT(tmp111,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp112;
  static int tmp113 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp113)
  {
    tmp109 = GreaterEq(data->localData[0]->realVars[28] /* MatStm2.compMasFrac[2,1] variable */,0.0);
    tmp110 = LessEq(data->localData[0]->realVars[28] /* MatStm2.compMasFrac[2,1] variable */,1.0);
    if(!(tmp109 && tmp110))
    {
      tmp112 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[28] /* MatStm2.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp111),tmp112);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,1] >= 0.0 and MatStm2.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp113 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 898
type: ALGORITHM

  assert(MatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[2,2], "g"));
*/
void cooler1_eqFunction_898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,898};
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  static const MMC_DEFSTRINGLIT(tmp116,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp117;
  static int tmp118 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp118)
  {
    tmp114 = GreaterEq(data->localData[0]->realVars[29] /* MatStm2.compMasFrac[2,2] variable */,0.0);
    tmp115 = LessEq(data->localData[0]->realVars[29] /* MatStm2.compMasFrac[2,2] variable */,1.0);
    if(!(tmp114 && tmp115))
    {
      tmp117 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[29] /* MatStm2.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp116),tmp117);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[2,2] >= 0.0 and MatStm2.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp118 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 899
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,1], "g"));
*/
void cooler1_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  static const MMC_DEFSTRINGLIT(tmp121,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp122;
  static int tmp123 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp123)
  {
    tmp119 = GreaterEq(data->localData[0]->realVars[30] /* MatStm2.compMasFrac[3,1] variable */,0.0);
    tmp120 = LessEq(data->localData[0]->realVars[30] /* MatStm2.compMasFrac[3,1] variable */,1.0);
    if(!(tmp119 && tmp120))
    {
      tmp122 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[30] /* MatStm2.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp121),tmp122);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,1] >= 0.0 and MatStm2.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp123 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 900
type: ALGORITHM

  assert(MatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm2.compMasFrac[3,2], "g"));
*/
void cooler1_eqFunction_900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,900};
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  static const MMC_DEFSTRINGLIT(tmp126,90,"Variable violating min/max constraint: 0.0 <= MatStm2.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp127;
  static int tmp128 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp128)
  {
    tmp124 = GreaterEq(data->localData[0]->realVars[31] /* MatStm2.compMasFrac[3,2] variable */,0.0);
    tmp125 = LessEq(data->localData[0]->realVars[31] /* MatStm2.compMasFrac[3,2] variable */,1.0);
    if(!(tmp124 && tmp125))
    {
      tmp127 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[31] /* MatStm2.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp126),tmp127);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFrac[3,2] >= 0.0 and MatStm2.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMolFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,1], has value: " + String(MatStm2.compMolFlo[1,1], "g"));
*/
void cooler1_eqFunction_901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,901};
  modelica_boolean tmp129;
  static const MMC_DEFSTRINGLIT(tmp130,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,1], has value: ");
  modelica_string tmp131;
  static int tmp132 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp132)
  {
    tmp129 = GreaterEq(data->localData[0]->realVars[44] /* MatStm2.compMolFlo[1,1] variable */,0.0);
    if(!tmp129)
    {
      tmp131 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[44] /* MatStm2.compMolFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp130),tmp131);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMolFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,2], has value: " + String(MatStm2.compMolFlo[1,2], "g"));
*/
void cooler1_eqFunction_902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,902};
  modelica_boolean tmp133;
  static const MMC_DEFSTRINGLIT(tmp134,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[1,2], has value: ");
  modelica_string tmp135;
  static int tmp136 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp136)
  {
    tmp133 = GreaterEq(data->localData[0]->realVars[45] /* MatStm2.compMolFlo[1,2] variable */,0.0);
    if(!tmp133)
    {
      tmp135 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[45] /* MatStm2.compMolFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp134),tmp135);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: " + String(MatStm2.compMolFlo[2,1], "g"));
*/
void cooler1_eqFunction_903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,903};
  modelica_boolean tmp137;
  static const MMC_DEFSTRINGLIT(tmp138,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,1], has value: ");
  modelica_string tmp139;
  static int tmp140 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp140)
  {
    tmp137 = GreaterEq(data->localData[0]->realVars[46] /* MatStm2.compMolFlo[2,1] variable */,0.0);
    if(!tmp137)
    {
      tmp139 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[46] /* MatStm2.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp138),tmp139);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: " + String(MatStm2.compMolFlo[2,2], "g"));
*/
void cooler1_eqFunction_904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,904};
  modelica_boolean tmp141;
  static const MMC_DEFSTRINGLIT(tmp142,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[2,2], has value: ");
  modelica_string tmp143;
  static int tmp144 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp144)
  {
    tmp141 = GreaterEq(data->localData[0]->realVars[47] /* MatStm2.compMolFlo[2,2] variable */,0.0);
    if(!tmp141)
    {
      tmp143 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[47] /* MatStm2.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp142),tmp143);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: " + String(MatStm2.compMolFlo[3,1], "g"));
*/
void cooler1_eqFunction_905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,905};
  modelica_boolean tmp145;
  static const MMC_DEFSTRINGLIT(tmp146,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,1], has value: ");
  modelica_string tmp147;
  static int tmp148 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp148)
  {
    tmp145 = GreaterEq(data->localData[0]->realVars[48] /* MatStm2.compMolFlo[3,1] variable */,0.0);
    if(!tmp145)
    {
      tmp147 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[48] /* MatStm2.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp146),tmp147);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: " + String(MatStm2.compMolFlo[3,2], "g"));
*/
void cooler1_eqFunction_906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,906};
  modelica_boolean tmp149;
  static const MMC_DEFSTRINGLIT(tmp150,78,"Variable violating min constraint: 0.0 <= MatStm2.compMolFlo[3,2], has value: ");
  modelica_string tmp151;
  static int tmp152 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp152)
  {
    tmp149 = GreaterEq(data->localData[0]->realVars[49] /* MatStm2.compMolFlo[3,2] variable */,0.0);
    if(!tmp149)
    {
      tmp151 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[49] /* MatStm2.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp150),tmp151);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm2.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,1], has value: " + String(MatStm2.compMasFlo[1,1], "g"));
*/
void cooler1_eqFunction_907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,907};
  modelica_boolean tmp153;
  static const MMC_DEFSTRINGLIT(tmp154,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,1], has value: ");
  modelica_string tmp155;
  static int tmp156 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp156)
  {
    tmp153 = GreaterEq(data->localData[0]->realVars[20] /* MatStm2.compMasFlo[1,1] variable */,0.0);
    if(!tmp153)
    {
      tmp155 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[20] /* MatStm2.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp154),tmp155);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp156 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 908
type: ALGORITHM

  assert(MatStm2.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,2], has value: " + String(MatStm2.compMasFlo[1,2], "g"));
*/
void cooler1_eqFunction_908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,908};
  modelica_boolean tmp157;
  static const MMC_DEFSTRINGLIT(tmp158,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[1,2], has value: ");
  modelica_string tmp159;
  static int tmp160 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp160)
  {
    tmp157 = GreaterEq(data->localData[0]->realVars[21] /* MatStm2.compMasFlo[1,2] variable */,0.0);
    if(!tmp157)
    {
      tmp159 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[21] /* MatStm2.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp158),tmp159);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp160 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 909
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: " + String(MatStm2.compMasFlo[2,1], "g"));
*/
void cooler1_eqFunction_909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,909};
  modelica_boolean tmp161;
  static const MMC_DEFSTRINGLIT(tmp162,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,1], has value: ");
  modelica_string tmp163;
  static int tmp164 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp164)
  {
    tmp161 = GreaterEq(data->localData[0]->realVars[22] /* MatStm2.compMasFlo[2,1] variable */,0.0);
    if(!tmp161)
    {
      tmp163 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[22] /* MatStm2.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp162),tmp163);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp164 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 910
type: ALGORITHM

  assert(MatStm2.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: " + String(MatStm2.compMasFlo[2,2], "g"));
*/
void cooler1_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
  modelica_boolean tmp165;
  static const MMC_DEFSTRINGLIT(tmp166,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[2,2], has value: ");
  modelica_string tmp167;
  static int tmp168 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp168)
  {
    tmp165 = GreaterEq(data->localData[0]->realVars[23] /* MatStm2.compMasFlo[2,2] variable */,0.0);
    if(!tmp165)
    {
      tmp167 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[23] /* MatStm2.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp166),tmp167);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp168 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 911
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: " + String(MatStm2.compMasFlo[3,1], "g"));
*/
void cooler1_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
  modelica_boolean tmp169;
  static const MMC_DEFSTRINGLIT(tmp170,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,1], has value: ");
  modelica_string tmp171;
  static int tmp172 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp172)
  {
    tmp169 = GreaterEq(data->localData[0]->realVars[24] /* MatStm2.compMasFlo[3,1] variable */,0.0);
    if(!tmp169)
    {
      tmp171 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[24] /* MatStm2.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp170),tmp171);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp172 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 912
type: ALGORITHM

  assert(MatStm2.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: " + String(MatStm2.compMasFlo[3,2], "g"));
*/
void cooler1_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  modelica_boolean tmp173;
  static const MMC_DEFSTRINGLIT(tmp174,78,"Variable violating min constraint: 0.0 <= MatStm2.compMasFlo[3,2], has value: ");
  modelica_string tmp175;
  static int tmp176 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp176)
  {
    tmp173 = GreaterEq(data->localData[0]->realVars[25] /* MatStm2.compMasFlo[3,2] variable */,0.0);
    if(!tmp173)
    {
      tmp175 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[25] /* MatStm2.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp174),tmp175);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp176 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 913
type: ALGORITHM

  assert(MatStm2.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.K[1], has value: " + String(MatStm2.K[1], "g"));
*/
void cooler1_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  modelica_boolean tmp177;
  static const MMC_DEFSTRINGLIT(tmp178,67,"Variable violating min constraint: 0.0 <= MatStm2.K[1], has value: ");
  modelica_string tmp179;
  static int tmp180 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp180)
  {
    tmp177 = GreaterEq(data->localData[0]->realVars[11] /* MatStm2.K[1] variable */,0.0);
    if(!tmp177)
    {
      tmp179 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[11] /* MatStm2.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp178),tmp179);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp180 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 914
type: ALGORITHM

  assert(MatStm2.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm2.K[2], has value: " + String(MatStm2.K[2], "g"));
*/
void cooler1_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  modelica_boolean tmp181;
  static const MMC_DEFSTRINGLIT(tmp182,67,"Variable violating min constraint: 0.0 <= MatStm2.K[2], has value: ");
  modelica_string tmp183;
  static int tmp184 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp184)
  {
    tmp181 = GreaterEq(data->localData[0]->realVars[12] /* MatStm2.K[2] variable */,0.0);
    if(!tmp181)
    {
      tmp183 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[12] /* MatStm2.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp182),tmp183);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm2.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp184 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 915
type: ALGORITHM

  assert(MatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: " + String(MatStm3.liqPhasMolFrac, "g"));
*/
void cooler1_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  modelica_boolean tmp185;
  modelica_boolean tmp186;
  static const MMC_DEFSTRINGLIT(tmp187,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMolFrac <= 1.0, has value: ");
  modelica_string tmp188;
  static int tmp189 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp189)
  {
    tmp185 = GreaterEq(data->localData[0]->realVars[158] /* MatStm3.liqPhasMolFrac variable */,0.0);
    tmp186 = LessEq(data->localData[0]->realVars[158] /* MatStm3.liqPhasMolFrac variable */,1.0);
    if(!(tmp185 && tmp186))
    {
      tmp188 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[158] /* MatStm3.liqPhasMolFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp187),tmp188);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMolFrac >= 0.0 and MatStm3.liqPhasMolFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp189 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 916
type: ALGORITHM

  assert(MatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: " + String(MatStm3.liqPhasMasFrac, "g"));
*/
void cooler1_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  modelica_boolean tmp190;
  modelica_boolean tmp191;
  static const MMC_DEFSTRINGLIT(tmp192,88,"Variable violating min/max constraint: 0.0 <= MatStm3.liqPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp193;
  static int tmp194 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp194)
  {
    tmp190 = GreaterEq(data->localData[0]->realVars[157] /* MatStm3.liqPhasMasFrac variable */,0.0);
    tmp191 = LessEq(data->localData[0]->realVars[157] /* MatStm3.liqPhasMasFrac variable */,1.0);
    if(!(tmp190 && tmp191))
    {
      tmp193 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[157] /* MatStm3.liqPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp192),tmp193);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.liqPhasMasFrac >= 0.0 and MatStm3.liqPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp194 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 917
type: ALGORITHM

  assert(MatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: " + String(MatStm3.vapPhasMasFrac, "g"));
*/
void cooler1_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  modelica_boolean tmp195;
  modelica_boolean tmp196;
  static const MMC_DEFSTRINGLIT(tmp197,88,"Variable violating min/max constraint: 0.0 <= MatStm3.vapPhasMasFrac <= 1.0, has value: ");
  modelica_string tmp198;
  static int tmp199 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp199)
  {
    tmp195 = GreaterEq(data->localData[0]->realVars[185] /* MatStm3.vapPhasMasFrac variable */,0.0);
    tmp196 = LessEq(data->localData[0]->realVars[185] /* MatStm3.vapPhasMasFrac variable */,1.0);
    if(!(tmp195 && tmp196))
    {
      tmp198 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[185] /* MatStm3.vapPhasMasFrac variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp197),tmp198);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4170,3,4170,308,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.vapPhasMasFrac >= 0.0 and MatStm3.vapPhasMasFrac <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
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

  assert(MatStm3.totMolFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: " + String(MatStm3.totMolFlo[2], "g"));
*/
void cooler1_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  modelica_boolean tmp200;
  static const MMC_DEFSTRINGLIT(tmp201,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[2], has value: ");
  modelica_string tmp202;
  static int tmp203 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp203)
  {
    tmp200 = GreaterEq(data->localData[0]->realVars[183] /* MatStm3.totMolFlo[2] variable */,0.0);
    if(!tmp200)
    {
      tmp202 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[183] /* MatStm3.totMolFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp201),tmp202);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp203 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 919
type: ALGORITHM

  assert(MatStm3.totMolFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: " + String(MatStm3.totMolFlo[3], "g"));
*/
void cooler1_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  modelica_boolean tmp204;
  static const MMC_DEFSTRINGLIT(tmp205,75,"Variable violating min constraint: 0.0 <= MatStm3.totMolFlo[3], has value: ");
  modelica_string tmp206;
  static int tmp207 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp207)
  {
    tmp204 = GreaterEq(data->localData[0]->realVars[184] /* MatStm3.totMolFlo[3] variable */,0.0);
    if(!tmp204)
    {
      tmp206 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[184] /* MatStm3.totMolFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp205),tmp206);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMolFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp207 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 920
type: ALGORITHM

  assert(MatStm3.totMasFlo[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: " + String(MatStm3.totMasFlo[1], "g"));
*/
void cooler1_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  modelica_boolean tmp208;
  static const MMC_DEFSTRINGLIT(tmp209,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[1], has value: ");
  modelica_string tmp210;
  static int tmp211 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp211)
  {
    tmp208 = GreaterEq(data->localData[0]->realVars[179] /* MatStm3.totMasFlo[1] variable */,0.0);
    if(!tmp208)
    {
      tmp210 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[179] /* MatStm3.totMasFlo[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp209),tmp210);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp211 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 921
type: ALGORITHM

  assert(MatStm3.totMasFlo[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: " + String(MatStm3.totMasFlo[2], "g"));
*/
void cooler1_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  modelica_boolean tmp212;
  static const MMC_DEFSTRINGLIT(tmp213,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[2], has value: ");
  modelica_string tmp214;
  static int tmp215 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp215)
  {
    tmp212 = GreaterEq(data->localData[0]->realVars[180] /* MatStm3.totMasFlo[2] variable */,0.0);
    if(!tmp212)
    {
      tmp214 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[180] /* MatStm3.totMasFlo[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp213),tmp214);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp215 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 922
type: ALGORITHM

  assert(MatStm3.totMasFlo[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: " + String(MatStm3.totMasFlo[3], "g"));
*/
void cooler1_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  modelica_boolean tmp216;
  static const MMC_DEFSTRINGLIT(tmp217,75,"Variable violating min constraint: 0.0 <= MatStm3.totMasFlo[3], has value: ");
  modelica_string tmp218;
  static int tmp219 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp219)
  {
    tmp216 = GreaterEq(data->localData[0]->realVars[181] /* MatStm3.totMasFlo[3] variable */,0.0);
    if(!tmp216)
    {
      tmp218 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[181] /* MatStm3.totMasFlo[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp217),tmp218);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.totMasFlo[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp219 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 923
type: ALGORITHM

  assert(MatStm3.MW[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: " + String(MatStm3.MW[1], "g"));
*/
void cooler1_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  modelica_boolean tmp220;
  static const MMC_DEFSTRINGLIT(tmp221,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[1], has value: ");
  modelica_string tmp222;
  static int tmp223 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp223)
  {
    tmp220 = GreaterEq(data->localData[0]->realVars[100] /* MatStm3.MW[1] variable */,0.0);
    if(!tmp220)
    {
      tmp222 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[100] /* MatStm3.MW[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp221),tmp222);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp223 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 924
type: ALGORITHM

  assert(MatStm3.MW[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: " + String(MatStm3.MW[2], "g"));
*/
void cooler1_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  modelica_boolean tmp224;
  static const MMC_DEFSTRINGLIT(tmp225,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[2], has value: ");
  modelica_string tmp226;
  static int tmp227 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp227)
  {
    tmp224 = GreaterEq(data->localData[0]->realVars[101] /* MatStm3.MW[2] variable */,0.0);
    if(!tmp224)
    {
      tmp226 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[101] /* MatStm3.MW[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp225),tmp226);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp227 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 925
type: ALGORITHM

  assert(MatStm3.MW[3] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: " + String(MatStm3.MW[3], "g"));
*/
void cooler1_eqFunction_925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,925};
  modelica_boolean tmp228;
  static const MMC_DEFSTRINGLIT(tmp229,68,"Variable violating min constraint: 0.0 <= MatStm3.MW[3], has value: ");
  modelica_string tmp230;
  static int tmp231 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp231)
  {
    tmp228 = GreaterEq(data->localData[0]->realVars[102] /* MatStm3.MW[3] variable */,0.0);
    if(!tmp228)
    {
      tmp230 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[102] /* MatStm3.MW[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp229),tmp230);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4171,3,4171,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.MW[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp231 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 926
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,1], "g"));
*/
void cooler1_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  modelica_boolean tmp232;
  modelica_boolean tmp233;
  static const MMC_DEFSTRINGLIT(tmp234,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp235;
  static int tmp236 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp236)
  {
    tmp232 = GreaterEq(data->localData[0]->realVars[141] /* MatStm3.compMolFrac[2,1] variable */,0.0);
    tmp233 = LessEq(data->localData[0]->realVars[141] /* MatStm3.compMolFrac[2,1] variable */,1.0);
    if(!(tmp232 && tmp233))
    {
      tmp235 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[141] /* MatStm3.compMolFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp234),tmp235);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,1] >= 0.0 and MatStm3.compMolFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp236 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 927
type: ALGORITHM

  assert(MatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[2,2], "g"));
*/
void cooler1_eqFunction_927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,927};
  modelica_boolean tmp237;
  modelica_boolean tmp238;
  static const MMC_DEFSTRINGLIT(tmp239,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp240;
  static int tmp241 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp241)
  {
    tmp237 = GreaterEq(data->localData[0]->realVars[142] /* MatStm3.compMolFrac[2,2] variable */,0.0);
    tmp238 = LessEq(data->localData[0]->realVars[142] /* MatStm3.compMolFrac[2,2] variable */,1.0);
    if(!(tmp237 && tmp238))
    {
      tmp240 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[142] /* MatStm3.compMolFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp239),tmp240);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[2,2] >= 0.0 and MatStm3.compMolFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp241 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 928
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,1], "g"));
*/
void cooler1_eqFunction_928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,928};
  modelica_boolean tmp242;
  modelica_boolean tmp243;
  static const MMC_DEFSTRINGLIT(tmp244,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp245;
  static int tmp246 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp246)
  {
    tmp242 = GreaterEq(data->localData[0]->realVars[143] /* MatStm3.compMolFrac[3,1] variable */,0.0);
    tmp243 = LessEq(data->localData[0]->realVars[143] /* MatStm3.compMolFrac[3,1] variable */,1.0);
    if(!(tmp242 && tmp243))
    {
      tmp245 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[143] /* MatStm3.compMolFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp244),tmp245);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,1] >= 0.0 and MatStm3.compMolFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp246 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 929
type: ALGORITHM

  assert(MatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMolFrac[3,2], "g"));
*/
void cooler1_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  modelica_boolean tmp247;
  modelica_boolean tmp248;
  static const MMC_DEFSTRINGLIT(tmp249,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMolFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp250;
  static int tmp251 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp251)
  {
    tmp247 = GreaterEq(data->localData[0]->realVars[144] /* MatStm3.compMolFrac[3,2] variable */,0.0);
    tmp248 = LessEq(data->localData[0]->realVars[144] /* MatStm3.compMolFrac[3,2] variable */,1.0);
    if(!(tmp247 && tmp248))
    {
      tmp250 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[144] /* MatStm3.compMolFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp249),tmp250);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFrac[3,2] >= 0.0 and MatStm3.compMolFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp251 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 930
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,1], "g"));
*/
void cooler1_eqFunction_930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,930};
  modelica_boolean tmp252;
  modelica_boolean tmp253;
  static const MMC_DEFSTRINGLIT(tmp254,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,1] <= 1.0, has value: ");
  modelica_string tmp255;
  static int tmp256 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp256)
  {
    tmp252 = GreaterEq(data->localData[0]->realVars[115] /* MatStm3.compMasFrac[1,1] variable */,0.0);
    tmp253 = LessEq(data->localData[0]->realVars[115] /* MatStm3.compMasFrac[1,1] variable */,1.0);
    if(!(tmp252 && tmp253))
    {
      tmp255 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[115] /* MatStm3.compMasFrac[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp254),tmp255);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,1] >= 0.0 and MatStm3.compMasFrac[1,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp256 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 931
type: ALGORITHM

  assert(MatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[1,2], "g"));
*/
void cooler1_eqFunction_931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,931};
  modelica_boolean tmp257;
  modelica_boolean tmp258;
  static const MMC_DEFSTRINGLIT(tmp259,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[1,2] <= 1.0, has value: ");
  modelica_string tmp260;
  static int tmp261 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp261)
  {
    tmp257 = GreaterEq(data->localData[0]->realVars[116] /* MatStm3.compMasFrac[1,2] variable */,0.0);
    tmp258 = LessEq(data->localData[0]->realVars[116] /* MatStm3.compMasFrac[1,2] variable */,1.0);
    if(!(tmp257 && tmp258))
    {
      tmp260 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[116] /* MatStm3.compMasFrac[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp259),tmp260);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[1,2] >= 0.0 and MatStm3.compMasFrac[1,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp261 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 932
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,1], "g"));
*/
void cooler1_eqFunction_932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,932};
  modelica_boolean tmp262;
  modelica_boolean tmp263;
  static const MMC_DEFSTRINGLIT(tmp264,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,1] <= 1.0, has value: ");
  modelica_string tmp265;
  static int tmp266 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp266)
  {
    tmp262 = GreaterEq(data->localData[0]->realVars[117] /* MatStm3.compMasFrac[2,1] variable */,0.0);
    tmp263 = LessEq(data->localData[0]->realVars[117] /* MatStm3.compMasFrac[2,1] variable */,1.0);
    if(!(tmp262 && tmp263))
    {
      tmp265 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[117] /* MatStm3.compMasFrac[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp264),tmp265);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,1] >= 0.0 and MatStm3.compMasFrac[2,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp266 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 933
type: ALGORITHM

  assert(MatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[2,2], "g"));
*/
void cooler1_eqFunction_933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,933};
  modelica_boolean tmp267;
  modelica_boolean tmp268;
  static const MMC_DEFSTRINGLIT(tmp269,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[2,2] <= 1.0, has value: ");
  modelica_string tmp270;
  static int tmp271 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp271)
  {
    tmp267 = GreaterEq(data->localData[0]->realVars[118] /* MatStm3.compMasFrac[2,2] variable */,0.0);
    tmp268 = LessEq(data->localData[0]->realVars[118] /* MatStm3.compMasFrac[2,2] variable */,1.0);
    if(!(tmp267 && tmp268))
    {
      tmp270 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[118] /* MatStm3.compMasFrac[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp269),tmp270);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[2,2] >= 0.0 and MatStm3.compMasFrac[2,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp271 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 934
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,1], "g"));
*/
void cooler1_eqFunction_934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,934};
  modelica_boolean tmp272;
  modelica_boolean tmp273;
  static const MMC_DEFSTRINGLIT(tmp274,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,1] <= 1.0, has value: ");
  modelica_string tmp275;
  static int tmp276 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp276)
  {
    tmp272 = GreaterEq(data->localData[0]->realVars[119] /* MatStm3.compMasFrac[3,1] variable */,0.0);
    tmp273 = LessEq(data->localData[0]->realVars[119] /* MatStm3.compMasFrac[3,1] variable */,1.0);
    if(!(tmp272 && tmp273))
    {
      tmp275 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[119] /* MatStm3.compMasFrac[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp274),tmp275);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,1] >= 0.0 and MatStm3.compMasFrac[3,1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp276 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 935
type: ALGORITHM

  assert(MatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0, "Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: " + String(MatStm3.compMasFrac[3,2], "g"));
*/
void cooler1_eqFunction_935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,935};
  modelica_boolean tmp277;
  modelica_boolean tmp278;
  static const MMC_DEFSTRINGLIT(tmp279,90,"Variable violating min/max constraint: 0.0 <= MatStm3.compMasFrac[3,2] <= 1.0, has value: ");
  modelica_string tmp280;
  static int tmp281 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp281)
  {
    tmp277 = GreaterEq(data->localData[0]->realVars[120] /* MatStm3.compMasFrac[3,2] variable */,0.0);
    tmp278 = LessEq(data->localData[0]->realVars[120] /* MatStm3.compMasFrac[3,2] variable */,1.0);
    if(!(tmp277 && tmp278))
    {
      tmp280 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[120] /* MatStm3.compMasFrac[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp279),tmp280);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFrac[3,2] >= 0.0 and MatStm3.compMasFrac[3,2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp281 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 936
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: " + String(MatStm3.compMolFlo[2,1], "g"));
*/
void cooler1_eqFunction_936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,936};
  modelica_boolean tmp282;
  static const MMC_DEFSTRINGLIT(tmp283,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,1], has value: ");
  modelica_string tmp284;
  static int tmp285 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp285)
  {
    tmp282 = GreaterEq(data->localData[0]->realVars[135] /* MatStm3.compMolFlo[2,1] variable */,0.0);
    if(!tmp282)
    {
      tmp284 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[135] /* MatStm3.compMolFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp283),tmp284);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp285 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 937
type: ALGORITHM

  assert(MatStm3.compMolFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: " + String(MatStm3.compMolFlo[2,2], "g"));
*/
void cooler1_eqFunction_937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,937};
  modelica_boolean tmp286;
  static const MMC_DEFSTRINGLIT(tmp287,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[2,2], has value: ");
  modelica_string tmp288;
  static int tmp289 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp289)
  {
    tmp286 = GreaterEq(data->localData[0]->realVars[136] /* MatStm3.compMolFlo[2,2] variable */,0.0);
    if(!tmp286)
    {
      tmp288 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[136] /* MatStm3.compMolFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp287),tmp288);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp289 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 938
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: " + String(MatStm3.compMolFlo[3,1], "g"));
*/
void cooler1_eqFunction_938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,938};
  modelica_boolean tmp290;
  static const MMC_DEFSTRINGLIT(tmp291,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,1], has value: ");
  modelica_string tmp292;
  static int tmp293 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp293)
  {
    tmp290 = GreaterEq(data->localData[0]->realVars[137] /* MatStm3.compMolFlo[3,1] variable */,0.0);
    if(!tmp290)
    {
      tmp292 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[137] /* MatStm3.compMolFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp291),tmp292);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp293 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 939
type: ALGORITHM

  assert(MatStm3.compMolFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: " + String(MatStm3.compMolFlo[3,2], "g"));
*/
void cooler1_eqFunction_939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,939};
  modelica_boolean tmp294;
  static const MMC_DEFSTRINGLIT(tmp295,78,"Variable violating min constraint: 0.0 <= MatStm3.compMolFlo[3,2], has value: ");
  modelica_string tmp296;
  static int tmp297 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp297)
  {
    tmp294 = GreaterEq(data->localData[0]->realVars[138] /* MatStm3.compMolFlo[3,2] variable */,0.0);
    if(!tmp294)
    {
      tmp296 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[138] /* MatStm3.compMolFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp295),tmp296);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMolFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp297 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 940
type: ALGORITHM

  assert(MatStm3.compMasFlo[2,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: " + String(MatStm3.compMasFlo[2,1], "g"));
*/
void cooler1_eqFunction_940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,940};
  modelica_boolean tmp298;
  static const MMC_DEFSTRINGLIT(tmp299,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,1], has value: ");
  modelica_string tmp300;
  static int tmp301 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp301)
  {
    tmp298 = GreaterEq(data->localData[0]->realVars[111] /* MatStm3.compMasFlo[2,1] variable */,0.0);
    if(!tmp298)
    {
      tmp300 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[111] /* MatStm3.compMasFlo[2,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp299),tmp300);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp301 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 941
type: ALGORITHM

  assert(MatStm3.compMasFlo[2,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: " + String(MatStm3.compMasFlo[2,2], "g"));
*/
void cooler1_eqFunction_941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,941};
  modelica_boolean tmp302;
  static const MMC_DEFSTRINGLIT(tmp303,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[2,2], has value: ");
  modelica_string tmp304;
  static int tmp305 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp305)
  {
    tmp302 = GreaterEq(data->localData[0]->realVars[112] /* MatStm3.compMasFlo[2,2] variable */,0.0);
    if(!tmp302)
    {
      tmp304 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[112] /* MatStm3.compMasFlo[2,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp303),tmp304);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[2,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp305 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 942
type: ALGORITHM

  assert(MatStm3.compMasFlo[3,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: " + String(MatStm3.compMasFlo[3,1], "g"));
*/
void cooler1_eqFunction_942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,942};
  modelica_boolean tmp306;
  static const MMC_DEFSTRINGLIT(tmp307,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,1], has value: ");
  modelica_string tmp308;
  static int tmp309 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp309)
  {
    tmp306 = GreaterEq(data->localData[0]->realVars[113] /* MatStm3.compMasFlo[3,1] variable */,0.0);
    if(!tmp306)
    {
      tmp308 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[113] /* MatStm3.compMasFlo[3,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp307),tmp308);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp309 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 943
type: ALGORITHM

  assert(MatStm3.compMasFlo[3,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: " + String(MatStm3.compMasFlo[3,2], "g"));
*/
void cooler1_eqFunction_943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,943};
  modelica_boolean tmp310;
  static const MMC_DEFSTRINGLIT(tmp311,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[3,2], has value: ");
  modelica_string tmp312;
  static int tmp313 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp313)
  {
    tmp310 = GreaterEq(data->localData[0]->realVars[114] /* MatStm3.compMasFlo[3,2] variable */,0.0);
    if(!tmp310)
    {
      tmp312 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[114] /* MatStm3.compMasFlo[3,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp311),tmp312);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[3,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp313 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 872
type: ALGORITHM

  assert(MatStm3.K[2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.K[2], has value: " + String(MatStm3.K[2], "g"));
*/
void cooler1_eqFunction_872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,872};
  modelica_boolean tmp314;
  static const MMC_DEFSTRINGLIT(tmp315,67,"Variable violating min constraint: 0.0 <= MatStm3.K[2], has value: ");
  modelica_string tmp316;
  static int tmp317 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp317)
  {
    tmp314 = GreaterEq(data->localData[0]->realVars[99] /* MatStm3.K[2] variable */,0.0);
    if(!tmp314)
    {
      tmp316 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[99] /* MatStm3.K[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp315),tmp316);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.K[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp317 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 871
type: ALGORITHM

  assert(MatStm3.K[1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.K[1], has value: " + String(MatStm3.K[1], "g"));
*/
void cooler1_eqFunction_871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,871};
  modelica_boolean tmp318;
  static const MMC_DEFSTRINGLIT(tmp319,67,"Variable violating min constraint: 0.0 <= MatStm3.K[1], has value: ");
  modelica_string tmp320;
  static int tmp321 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp321)
  {
    tmp318 = GreaterEq(data->localData[0]->realVars[98] /* MatStm3.K[1] variable */,0.0);
    if(!tmp318)
    {
      tmp320 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[98] /* MatStm3.K[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp319),tmp320);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",2213,2,2213,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.K[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp321 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 870
type: ALGORITHM

  assert(MatStm3.compMasFlo[1,2] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,2], has value: " + String(MatStm3.compMasFlo[1,2], "g"));
*/
void cooler1_eqFunction_870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,870};
  modelica_boolean tmp322;
  static const MMC_DEFSTRINGLIT(tmp323,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,2], has value: ");
  modelica_string tmp324;
  static int tmp325 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp325)
  {
    tmp322 = GreaterEq(data->localData[0]->realVars[110] /* MatStm3.compMasFlo[1,2] variable */,0.0);
    if(!tmp322)
    {
      tmp324 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[110] /* MatStm3.compMasFlo[1,2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp323),tmp324);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[1,2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp325 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 869
type: ALGORITHM

  assert(MatStm3.compMasFlo[1,1] >= 0.0, "Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,1], has value: " + String(MatStm3.compMasFlo[1,1], "g"));
*/
void cooler1_eqFunction_869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,869};
  modelica_boolean tmp326;
  static const MMC_DEFSTRINGLIT(tmp327,78,"Variable violating min constraint: 0.0 <= MatStm3.compMasFlo[1,1], has value: ");
  modelica_string tmp328;
  static int tmp329 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp329)
  {
    tmp326 = GreaterEq(data->localData[0]->realVars[109] /* MatStm3.compMasFlo[1,1] variable */,0.0);
    if(!tmp326)
    {
      tmp328 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[109] /* MatStm3.compMasFlo[1,1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp327),tmp328);
      {
        FILE_INFO info = {"C:/OMChemSimGUI/SimulationFiles/Simulator.mo",4172,3,4172,361,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nMatStm3.compMasFlo[1,1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp329 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int cooler1_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  cooler1_eqFunction_873(data, threadData);

  cooler1_eqFunction_874(data, threadData);

  cooler1_eqFunction_875(data, threadData);

  cooler1_eqFunction_876(data, threadData);

  cooler1_eqFunction_877(data, threadData);

  cooler1_eqFunction_878(data, threadData);

  cooler1_eqFunction_879(data, threadData);

  cooler1_eqFunction_880(data, threadData);

  cooler1_eqFunction_881(data, threadData);

  cooler1_eqFunction_882(data, threadData);

  cooler1_eqFunction_883(data, threadData);

  cooler1_eqFunction_884(data, threadData);

  cooler1_eqFunction_885(data, threadData);

  cooler1_eqFunction_886(data, threadData);

  cooler1_eqFunction_887(data, threadData);

  cooler1_eqFunction_888(data, threadData);

  cooler1_eqFunction_889(data, threadData);

  cooler1_eqFunction_890(data, threadData);

  cooler1_eqFunction_891(data, threadData);

  cooler1_eqFunction_892(data, threadData);

  cooler1_eqFunction_893(data, threadData);

  cooler1_eqFunction_894(data, threadData);

  cooler1_eqFunction_895(data, threadData);

  cooler1_eqFunction_896(data, threadData);

  cooler1_eqFunction_897(data, threadData);

  cooler1_eqFunction_898(data, threadData);

  cooler1_eqFunction_899(data, threadData);

  cooler1_eqFunction_900(data, threadData);

  cooler1_eqFunction_901(data, threadData);

  cooler1_eqFunction_902(data, threadData);

  cooler1_eqFunction_903(data, threadData);

  cooler1_eqFunction_904(data, threadData);

  cooler1_eqFunction_905(data, threadData);

  cooler1_eqFunction_906(data, threadData);

  cooler1_eqFunction_907(data, threadData);

  cooler1_eqFunction_908(data, threadData);

  cooler1_eqFunction_909(data, threadData);

  cooler1_eqFunction_910(data, threadData);

  cooler1_eqFunction_911(data, threadData);

  cooler1_eqFunction_912(data, threadData);

  cooler1_eqFunction_913(data, threadData);

  cooler1_eqFunction_914(data, threadData);

  cooler1_eqFunction_915(data, threadData);

  cooler1_eqFunction_916(data, threadData);

  cooler1_eqFunction_917(data, threadData);

  cooler1_eqFunction_918(data, threadData);

  cooler1_eqFunction_919(data, threadData);

  cooler1_eqFunction_920(data, threadData);

  cooler1_eqFunction_921(data, threadData);

  cooler1_eqFunction_922(data, threadData);

  cooler1_eqFunction_923(data, threadData);

  cooler1_eqFunction_924(data, threadData);

  cooler1_eqFunction_925(data, threadData);

  cooler1_eqFunction_926(data, threadData);

  cooler1_eqFunction_927(data, threadData);

  cooler1_eqFunction_928(data, threadData);

  cooler1_eqFunction_929(data, threadData);

  cooler1_eqFunction_930(data, threadData);

  cooler1_eqFunction_931(data, threadData);

  cooler1_eqFunction_932(data, threadData);

  cooler1_eqFunction_933(data, threadData);

  cooler1_eqFunction_934(data, threadData);

  cooler1_eqFunction_935(data, threadData);

  cooler1_eqFunction_936(data, threadData);

  cooler1_eqFunction_937(data, threadData);

  cooler1_eqFunction_938(data, threadData);

  cooler1_eqFunction_939(data, threadData);

  cooler1_eqFunction_940(data, threadData);

  cooler1_eqFunction_941(data, threadData);

  cooler1_eqFunction_942(data, threadData);

  cooler1_eqFunction_943(data, threadData);

  cooler1_eqFunction_872(data, threadData);

  cooler1_eqFunction_871(data, threadData);

  cooler1_eqFunction_870(data, threadData);

  cooler1_eqFunction_869(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

